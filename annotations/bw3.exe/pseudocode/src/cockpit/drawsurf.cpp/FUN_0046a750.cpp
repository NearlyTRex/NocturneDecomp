// Name: cockpit_drawsurf.cpp_FUN_0046a750
// Address: 0046a750
// Address Range: [[0046a750, 0046b0b0]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_0046a750(CBitFont *param_1,undefined4 param_2,CDrawSurface *param_3,undefined4 param_4,int param_5,CDrawSurface *param_6,undefined4 param_7,int param_8,CDrawSurface *param_9,undefined4 param_10,int param_11,CDrawSurface *param_12,undefined4 param_13,CDrawSurface *param_14,CDrawSurface *param_15,undefined4 *param_16,int param_17,int param_18,int param_19,CDrawSurface *param_20,undefined4 param_21,undefined4 param_22,undefined4 param_23)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_drawsurf_cpp_FUN_0046a750(CBitFont *param_1,uint param_2,CDrawSurface *param_3,uint param_4,int param_5,CDrawSurface *param_6,uint param_7,int param_8,CDrawSurface *param_9,uint param_10,int param_11,CDrawSurface *param_12,uint param_13,CDrawSurface *param_14,CDrawSurface *param_15,uint *param_16,int param_17,int param_18,int param_19,CDrawSurface *param_20,uint param_21,uint param_22,uint param_23)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int y;
  CDrawSurface *in_stack_00000074;
  uint in_stack_00000078;
  uint in_stack_0000007c;
  CDrawSurface *in_stack_00000080;
  int in_stack_00000084;
  uint in_stack_00000088;
  CDrawSurface *in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  CDrawSurface *in_stack_00000098;
  uint in_stack_0000009c;
  int in_stack_000000a0;
  CDrawSurface *in_stack_000000a4;
  uint in_stack_000000a8;
  int in_stack_000000ac;
  CDrawSurface *in_stack_000000b0;
  uint in_stack_000000b4;
  int in_stack_000000b8;
  CDrawSurface *in_stack_000000bc;
  uint in_stack_000000c0;
  int in_stack_000000c4;
  uint in_stack_000000cc;
  byte *in_stack_000000d0;
  int in_stack_000000dc;
  int in_stack_000000e4;
  int in_stack_000000f4;
  int in_stack_00000104;
  int in_stack_00000108;
  int in_stack_00000110;
  uint in_stack_00000114;
  int in_stack_00000164;
  uint uStack_24;
  
  if ((0x27f < DAT_005fba18) && (0x1df < DAT_005fba1c)) {
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_00467900
              ((CDrawSurface *)&stack0xffffff9c,DAT_005fba18 / 2,DAT_005fba1c / 2,0xc9,0x65,
               (CDrawSurface *)0x0);
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_00467900
              ((CDrawSurface *)&stack0xffffff5c,0xc,8,0x15,0xb,(CDrawSurface *)&stack0xffffff9c);
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_00467900
              ((CDrawSurface *)&stack0xffffff3c,0xbe,0x5f,0x14,10,(CDrawSurface *)&stack0xffffff9c);
    cockpit_drawsurf_cpp_FUN_00467c80(0x80,0x80,0x80);
    cockpit_drawsurf_cpp_FUN_00469690((CDrawSurface *)&stack0xffffff9c);
    cockpit_drawsurf_cpp_FUN_00467a70(7);
    cockpit_drawsurf_cpp_FUN_00468f80((CDrawSurface *)&stack0xffffff9c);
    cockpit_drawsurf_cpp_FUN_004683f0(&stack0xffffff9c,0,0,200,100);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_00468190
              ((CDrawSurface *)&stack0xffffff9c,100,0x32,100);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_00468190
              ((CDrawSurface *)&stack0xffffffac,100,0x32,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00468280
              ((CDrawSurface *)&stack0xffffffbc,0,0,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopRight_FUN_004682b0
              ((CDrawSurface *)&stack0xffffffcc,200,0,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_004682e0
              ((CDrawSurface *)&uStack_24,0,100,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomRight_FUN_00468310
              ((CDrawSurface *)&stack0xffffffec,200,100,0x32);
    cockpit_drawsurf_cpp_FUN_00467a70(0xf9);
    cockpit_drawsurf_cpp_FUN_00467f20((CBitFont *)0x0);
    cockpit_drawsurf_cpp_FUN_00469e40();
    cockpit_drawsurf_cpp_FUN_00469e40();
    cockpit_drawsurf_cpp_FUN_00469e40();
    cockpit_drawsurf_cpp_FUN_00469fe0();
    cockpit_drawsurf_cpp_FUN_0046a250();
    cockpit_drawsurf_cpp_FUN_00467f20(param_1);
    *(uint *)(param_1 + 0x4204) = 0;
    cockpit_drawsurf_cpp_FUN_00469e40();
    cockpit_drawsurf_cpp_FUN_00469e40();
    cockpit_drawsurf_cpp_FUN_00469e40();
    *(uint *)(param_1 + 0x4204) = 1;
    cockpit_drawsurf_cpp_FUN_00469e40();
    cockpit_drawsurf_cpp_FUN_00469e40();
    cockpit_drawsurf_cpp_FUN_00469fe0();
    cockpit_drawsurf_cpp_FUN_0046a250();
    cockpit_drawsurf_cpp_FUN_00467a70(0xff);
    cockpit_drawsurf_cpp_FUN_00467f30((CDrawSurface *)&stack0xfffffffc,100,0x14);
    cockpit_drawsurf_cpp_FUN_00467f30((CDrawSurface *)&stack0x00000008,100,0x23);
    cockpit_drawsurf_cpp_FUN_00467f30((CDrawSurface *)&stack0x00000014,100,0x4f);
    cockpit_drawsurf_cpp_FUN_00467f30((CDrawSurface *)&stack0x00000020,100,0x5e);
    cockpit_drawsurf_cpp_FUN_00467c80();
    cockpit_drawsurf_cpp_FUN_00469690((CDrawSurface *)&stack0xffffffec);
    cockpit_drawsurf_cpp_FUN_00467a70(0xfb);
    cockpit_drawsurf_cpp_FUN_00468f80((CDrawSurface *)&stack0xffffffec);
    cockpit_drawsurf_cpp_FUN_004683f0();
    cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_00468190
              ((CDrawSurface *)&stack0xffffffec,10,5,6);
    cockpit_drawsurf_cpp_FUN_00467c80();
    cockpit_drawsurf_cpp_FUN_00469690((CDrawSurface *)&uStack_24);
    cockpit_drawsurf_cpp_FUN_00467a70(0xfb);
    cockpit_drawsurf_cpp_FUN_00468f80((CDrawSurface *)&uStack_24);
    cockpit_drawsurf_cpp_FUN_004683f0();
    in_stack_0000007c = _DAT_005f2af4;
    iVar2 = DAT_005fba1c / 2 + 0x66;
    iVar3 = DAT_005fba1c - iVar2;
    iVar1 = *(int *)(param_1 + 0x41f0);
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_00467900
              ((CDrawSurface *)&param_23,DAT_005fba18 / 2,iVar2,0xc9,iVar3,(CDrawSurface *)0x0);
    cockpit_drawsurf_cpp_FUN_00467c80();
    cockpit_drawsurf_cpp_FUN_00469690((CDrawSurface *)&param_23);
    cockpit_drawsurf_cpp_FUN_00467a70(7);
    cockpit_drawsurf_cpp_FUN_00468f80((CDrawSurface *)&param_23);
    cockpit_drawsurf_cpp_FUN_00467a70(0xf9);
    cockpit_drawsurf_cpp_FUN_00467f20(param_1);
    *(uint *)(param_1 + 0x4204) = 1;
    cockpit_drawsurf_cpp_FUN_00469e70();
    cockpit_drawsurf_cpp_FUN_00469f40();
    cockpit_drawsurf_cpp_FUN_0046a010();
    iVar2 = iVar1 + 1;
    cockpit_drawsurf_cpp_FUN_0046a0e0();
    in_stack_00000090 = iVar1 * 2;
    in_stack_00000094 = in_stack_00000090 + 1;
    cockpit_drawsurf_cpp_FUN_0046a1b0();
    in_stack_00000084 = iVar1 * 3;
    in_stack_00000080 = (CDrawSurface *)(iVar3 + iVar1 * -3);
    cockpit_drawsurf_cpp_FUN_0046a280();
    in_stack_0000008c = (CDrawSurface *)(iVar3 - in_stack_00000090);
    cockpit_drawsurf_cpp_FUN_0046a360();
    iVar3 = iVar3 - iVar1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0046a450
              ((CDrawSurface *)&param_23,0x32,0x96,iVar3 + -0x32,iVar3 + 0x32,(char *)0x5bc40a);
    uStack_24 = 0x46ad41;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0046a660
              ((CDrawSurface *)&stack0x00000074,(char *)0x5bc40d);
    cockpit_drawsurf_cpp_FUN_00467a70(0xfb);
    cockpit_drawsurf_cpp_FUN_00467f30((CDrawSurface *)&stack0x0000007c,1,1);
    cockpit_drawsurf_cpp_FUN_00467f30((CDrawSurface *)&stack0x00000088,199,1);
    param_2 = 1;
    cockpit_drawsurf_cpp_FUN_00467f30((CDrawSurface *)&stack0x00000094,100,1);
    param_4 = 100;
    param_3 = (CDrawSurface *)&stack0x000000a0;
    param_2 = 0x46ada0;
    param_5 = iVar2;
    cockpit_drawsurf_cpp_FUN_00467f30(param_3,100,iVar2);
    param_8 = in_stack_000000e4;
    param_7 = 100;
    param_6 = (CDrawSurface *)&stack0x000000ac;
    param_5 = 0x46adba;
    cockpit_drawsurf_cpp_FUN_00467f30(param_6,100,in_stack_000000e4);
    param_11 = in_stack_000000dc;
    param_10 = 100;
    param_9 = (CDrawSurface *)&stack0x000000b8;
    param_8 = 0x46add4;
    cockpit_drawsurf_cpp_FUN_00467f30(param_9,100,in_stack_000000dc);
    param_14 = (CDrawSurface *)in_stack_000000f4;
    param_13 = 100;
    param_12 = (CDrawSurface *)&stack0x000000c4;
    param_11 = 0x46adee;
    cockpit_drawsurf_cpp_FUN_00467f30(param_12,100,in_stack_000000f4);
    param_16 = (uint *)0x64;
    param_15 = (CDrawSurface *)&stack0x000000d0;
    param_14 = (CDrawSurface *)0x46ae01;
    param_17 = iVar3;
    cockpit_drawsurf_cpp_FUN_00467f30(param_15,100,iVar3);
    param_16 = (uint *)(DAT_005fba18 / 2 + -0xca);
    param_17 = DAT_005fba1c / 2 + 0x66;
    iVar3 = DAT_005fba1c - param_17;
    param_20 = (CDrawSurface *)0x0;
    param_18 = 0xc9;
    param_15 = (CDrawSurface *)&stack0x0000009c;
    param_14 = (CDrawSurface *)0x46ae49;
    param_19 = iVar3;
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_00467900
              (param_15,(int)param_16,param_17,0xc9,iVar3,(CDrawSurface *)0x0);
    param_20 = (CDrawSurface *)0x80;
    param_19 = 0x80;
    param_18 = 0x80;
    param_17 = 0x46ae60;
    cockpit_drawsurf_cpp_FUN_00467c80();
    param_20 = (CDrawSurface *)&stack0x0000009c;
    param_19 = 0x46ae6d;
    cockpit_drawsurf_cpp_FUN_00469690(param_20);
    param_20 = (CDrawSurface *)0x7;
    param_19 = 0x46ae77;
    cockpit_drawsurf_cpp_FUN_00467a70(7);
    param_20 = (CDrawSurface *)&stack0x0000009c;
    param_19 = 0x46ae84;
    cockpit_drawsurf_cpp_FUN_00468f80(param_20);
    param_20 = (CDrawSurface *)0xf9;
    param_19 = 0x46ae91;
    cockpit_drawsurf_cpp_FUN_00467a70(0xf9);
    param_20 = (CDrawSurface *)0x0;
    param_19 = 0x46ae9b;
    cockpit_drawsurf_cpp_FUN_00467f20((CBitFont *)0x0);
    *(uint *)(param_1 + 0x4204) = 1;
    param_20 = (CDrawSurface *)&stack0x000000fc;
    param_19 = 0x5bc410;
    param_18 = 1;
    param_17 = 1;
    param_16 = &stack0x0000009c;
    param_15 = (CDrawSurface *)0x46aec3;
    cockpit_drawsurf_cpp_FUN_00469e70();
    param_20 = (CDrawSurface *)&stack0x000000fc;
    param_19 = 0x5bc413;
    param_18 = 1;
    param_17 = 199;
    param_16 = &stack0x0000009c;
    param_15 = (CDrawSurface *)0x46aee4;
    cockpit_drawsurf_cpp_FUN_00469f40();
    param_20 = (CDrawSurface *)&stack0x000000fc;
    param_19 = 0x5bc416;
    param_18 = 1;
    param_17 = 100;
    param_16 = &stack0x0000009c;
    param_15 = (CDrawSurface *)0x46af02;
    cockpit_drawsurf_cpp_FUN_0046a010();
    param_20 = (CDrawSurface *)&stack0x000000fc;
    param_19 = 0x5bc419;
    param_17 = 100;
    param_16 = &stack0x0000009c;
    param_15 = (CDrawSurface *)0x46af1f;
    param_18 = iVar2;
    cockpit_drawsurf_cpp_FUN_0046a0e0();
    param_20 = (CDrawSurface *)&stack0x000000fc;
    param_19 = 0x5bc41c;
    param_18 = in_stack_00000114;
    param_17 = 100;
    param_16 = &stack0x0000009c;
    param_15 = (CDrawSurface *)0x46af43;
    cockpit_drawsurf_cpp_FUN_0046a1b0();
    param_20 = (CDrawSurface *)&stack0x000000fc;
    param_19 = 0x5bc41f;
    param_18 = iVar3 - in_stack_00000104;
    param_17 = 0x96;
    param_16 = (uint *)0x32;
    param_15 = (CDrawSurface *)&stack0x0000009c;
    param_14 = (CDrawSurface *)0x46af79;
    in_stack_00000108 = param_18;
    cockpit_drawsurf_cpp_FUN_0046a280();
    param_20 = (CDrawSurface *)&stack0x000000fc;
    y = iVar3 - in_stack_00000110;
    param_19 = 0x5bc422;
    param_18 = y + 0x32;
    param_17 = y + -0x32;
    param_16 = (uint *)0x64;
    param_15 = (CDrawSurface *)&stack0x0000009c;
    param_14 = (CDrawSurface *)0x46afa6;
    cockpit_drawsurf_cpp_FUN_0046a360();
    param_20 = (CDrawSurface *)&stack0x000000fc;
    iVar3 = iVar3 - iVar1;
    param_19 = 0x5bc425;
    param_18 = iVar3 + 0x32;
    param_17 = iVar3 + -0x32;
    param_16 = (uint *)0x96;
    param_15 = (CDrawSurface *)0x32;
    param_14 = (CDrawSurface *)&stack0x0000009c;
    param_13 = 0x46afd1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0046a450
              (param_14,0x32,0x96,param_17,param_18,(char *)0x5bc425);
    param_23 = 0x46afeb;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0046a660
              ((CDrawSurface *)&stack0x000000b4,(char *)0x5bc428);
    cockpit_drawsurf_cpp_FUN_00467a70(0xfb);
    cockpit_drawsurf_cpp_FUN_00467f30((CDrawSurface *)&stack0x000000bc,1,1);
    in_stack_0000007c = 1;
    in_stack_00000078 = 199;
    in_stack_00000074 = (CDrawSurface *)&stack0x000000c8;
    cockpit_drawsurf_cpp_FUN_00467f30(in_stack_00000074,199,1);
    in_stack_00000088 = 1;
    in_stack_00000084 = 100;
    in_stack_00000080 = (CDrawSurface *)&stack0x000000d4;
    in_stack_0000007c = 0x46b02e;
    cockpit_drawsurf_cpp_FUN_00467f30(in_stack_00000080,100,1);
    in_stack_00000090 = 100;
    in_stack_0000008c = (CDrawSurface *)&stack0x000000e0;
    in_stack_00000088 = 0x46b03e;
    in_stack_00000094 = iVar2;
    cockpit_drawsurf_cpp_FUN_00467f30(in_stack_0000008c,100,iVar2);
    in_stack_000000a0 = in_stack_00000164;
    in_stack_0000009c = 100;
    in_stack_00000098 = (CDrawSurface *)&stack0x000000ec;
    in_stack_00000094 = 0x46b055;
    cockpit_drawsurf_cpp_FUN_00467f30(in_stack_00000098,100,in_stack_00000164);
    in_stack_000000ac = in_stack_00000164;
    in_stack_000000a8 = 100;
    in_stack_000000a4 = (CDrawSurface *)&stack0x000000f8;
    in_stack_000000a0 = 0x46b06c;
    cockpit_drawsurf_cpp_FUN_00467f30(in_stack_000000a4,100,in_stack_00000164);
    in_stack_000000b4 = 100;
    in_stack_000000b0 = (CDrawSurface *)&stack0x00000104;
    in_stack_000000ac = 0x46b07c;
    in_stack_000000b8 = y;
    cockpit_drawsurf_cpp_FUN_00467f30(in_stack_000000b0,100,y);
    in_stack_000000c0 = 100;
    in_stack_000000bc = (CDrawSurface *)&stack0x00000110;
    in_stack_000000b8 = 0x46b08c;
    in_stack_000000c4 = iVar3;
    cockpit_drawsurf_cpp_FUN_00467f30(in_stack_000000bc,100,iVar3);
    in_stack_000000d0 = (byte *)0x4;
    in_stack_000000cc = 0x46b096;
    cockpit_drawsurf_cpp_FUN_00467a70(4);
    in_stack_000000d0 = &stack0x0000011c;
    in_stack_000000cc = 0x46b0a3;
    cockpit_drawsurf_cpp_FUN_004693b0();
    return;
  }
  return;
}
