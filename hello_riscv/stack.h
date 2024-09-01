#ifndef __STACK_H__
#define __STACK_H__

struct rv_stack_frame
{
    unsigned long epc;        /* epc - epc    - program counter                     */
    unsigned long ra;         /* x1  - ra     - return address for jumps            */
    unsigned long sstatus;    /*              - supervisor status register          */
    unsigned long gp;         /* x3  - gp     - global pointer                      */
    unsigned long tp;         /* x4  - tp     - thread pointer                      */
    unsigned long t0;         /* x5  - t0     - temporary register 0                */
    unsigned long t1;         /* x6  - t1     - temporary register 1                */
    unsigned long t2;         /* x7  - t2     - temporary register 2                */
    unsigned long s0_fp;      /* x8  - s0/fp  - saved register 0 or frame pointer   */
    unsigned long s1;         /* x9  - s1     - saved register 1                    */
    unsigned long a0;         /* x10 - a0     - return value or function argument 0 */
    unsigned long a1;         /* x11 - a1     - return value or function argument 1 */
    unsigned long a2;         /* x12 - a2     - function argument 2                 */
    unsigned long a3;         /* x13 - a3     - function argument 3                 */
    unsigned long a4;         /* x14 - a4     - function argument 4                 */
    unsigned long a5;         /* x15 - a5     - function argument 5                 */
    unsigned long a6;         /* x16 - a6     - function argument 6                 */
    unsigned long a7;         /* x17 - s7     - function argument 7                 */
    unsigned long s2;         /* x18 - s2     - saved register 2                    */
    unsigned long s3;         /* x19 - s3     - saved register 3                    */
    unsigned long s4;         /* x20 - s4     - saved register 4                    */
    unsigned long s5;         /* x21 - s5     - saved register 5                    */
    unsigned long s6;         /* x22 - s6     - saved register 6                    */
    unsigned long s7;         /* x23 - s7     - saved register 7                    */
    unsigned long s8;         /* x24 - s8     - saved register 8                    */
    unsigned long s9;         /* x25 - s9     - saved register 9                    */
    unsigned long s10;        /* x26 - s10    - saved register 10                   */
    unsigned long s11;        /* x27 - s11    - saved register 11                   */
    unsigned long t3;         /* x28 - t3     - temporary register 3                */
    unsigned long t4;         /* x29 - t4     - temporary register 4                */
    unsigned long t5;         /* x30 - t5     - temporary register 5                */
    unsigned long t6;         /* x31 - t6     - temporary register 6                */
};

#endif
