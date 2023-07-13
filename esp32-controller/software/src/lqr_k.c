/*
 * File: lqr_k.c
 *
 * MATLAB Coder version            : 5.5
 * C/C++ source code generated on  : 27-Jan-2023 15:11:40
 */

/* Include Files */
#include "lqr_k.h"
#include <math.h>

/* Function Definitions */
/*
 * LQR_K
 *     K = LQR_K(L0)
 *
 * Arguments    : float L0
 *                float K[12]
 * Return Type  : void
 */
void lqr_k(float L0, float K[12])
{
  float t2;
  float t3;
  /*     This function was generated by the Symbolic Math Toolbox version 9.2.
   */
  /*     07-Feb-2023 16:51:43 */
  t2 = L0 * L0;
  t3 = L0 * L0 * L0;
  K[0] = ((L0 * -18.7909737F - t2 * 6.63215256F) - t3 * 23.5864677F) -
         0.0753974915F;
  K[1] = ((L0 * -18.8361855F + t2 * 93.635025F) - t3 * 159.948471F) -
         0.0085959984F;
  K[2] = ((L0 * -0.468477964F + t2 * 0.866424203F) - t3 * 3.92923403F) -
         0.00154123956F;
  K[3] = ((L0 * -0.281271F + t2 * 2.72226119F) - t3 * 7.86729717F) -
         0.00116146484F;
  K[4] = ((L0 * -0.852700055F - t2 * 2.86219525F) + t3 * 7.37199497F) +
         0.0443176217F;
  K[5] = ((L0 * -0.277660102F + t2 * 0.00557445083F) + t3 * 3.04636788F) +
         0.045156721F;
  K[6] = ((L0 * -1.72326732F - t2 * 5.89212847F) + t3 * 15.1300097F) +
         0.0839947909F;
  K[7] = ((L0 * -0.566761196F + t2 * 0.129657492F) + t3 * 5.85391521F) +
         0.0858505294F;
  K[8] =
      ((L0 * 1.18885696F - t2 * 0.081752874F) - t3 * 9.07304F) + 0.473516792F;
  K[9] =
      ((L0 * 4.81986475F - t2 * 16.2315845F) + t3 * 20.2187252F) + 0.473917663F;
  K[10] = ((L0 * 0.0231227186F + t2 * 0.480665833F) - t3 * 1.91938174F) +
          0.0497962162F;
  K[11] = ((L0 * 0.241975471F - t2 * 1.16908252F) + t3 * 2.03634691F) +
          0.050759986F;
}

/*
 * File trailer for lqr_k.c
 *
 * [EOF]
 */