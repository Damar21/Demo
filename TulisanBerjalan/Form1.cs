using CsQuery.Engine.PseudoClassSelectors;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TulisanBerjalan
{
    public partial class frmTulisanBerjalan : Form
    {
        public frmTulisanBerjalan()
        {
            InitializeComponent();
        }
        private void btnKeluar_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void frmTulisanBerjalan_Load(object sender, EventArgs e)
        {
           
        }

        int r = 255, b = 0, g = 0;

        private void timer1_Tick(object sender, EventArgs e)
        {

            lblAnimasi.ForeColor = Color.FromArgb(r, g, b);
            lblAnimasi.BackColor = Color.FromArgb(g, b, r);
            if (r > 0 && b == 0)
            {
                r-=255;
                g+=255;
            }
            else if (g > 0 && r == 0)
            {
                g-=255;
                b+=255;
            }
            else if (b > 0 && g == 0)
            {
                b-=255;
                r+=255;
            }

            lblAnimasi.Left -= 10;
            lblAnimasi.Top -= 5;
            if (lblAnimasi.Left <= 0)
            {
                lblAnimasi.Left = this.Width;
            }
            if (lblAnimasi.Top <= 0)
            {
                lblAnimasi.Top = this.Height;
            }

            Refresh();

        }
    }
}
