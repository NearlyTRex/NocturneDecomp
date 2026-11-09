// Name: cockpit_drawsurf.cpp_FUN_00468b80
// Address: 00468b80
// Address Range: [[00468b80, 004694e0]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_00468b80(CBitFont *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,CDrawSurface *param_6,undefined4 param_7,undefined4 param_8,CDrawSurface *param_9,undefined4 param_10,undefined4 param_11,CDrawSurface *param_12,undefined4 param_13,undefined4 param_14,CDrawSurface *param_15,undefined4 param_16,int param_17,CDrawSurface *param_18,undefined4 param_19,int param_20,CDrawSurface *param_21,undefined4 param_22,int param_23,CDrawSurface *param_24,undefined4 param_25,int param_26,CDrawSurface *param_27,int param_28,CDrawSurface *param_29,undefined4 *param_30,undefined4 *param_31,int param_32,int param_33,undefined4 param_34,CDrawSurface *param_35)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_drawsurf_cpp_FUN_00468b80(CBitFont *param_1,uint param_2,uint param_3,uint param_4,uint param_5,CDrawSurface *param_6,uint param_7,uint param_8,CDrawSurface *param_9,uint param_10,uint param_11,CDrawSurface *param_12,uint param_13,uint param_14,CDrawSurface *param_15,uint param_16,int param_17,CDrawSurface *param_18,uint param_19,int param_20,CDrawSurface *param_21,uint param_22,int param_23,CDrawSurface *param_24,uint param_25,int param_26,CDrawSurface *param_27,int param_28,CDrawSurface *param_29,uint *param_30,uint *param_31,int param_32,int param_33,uint param_34,CDrawSurface *param_35)

{
  int iVar1;
  CBitFont *font_ptr;
  int iVar2;
  int iVar3;
  int y;
  CDrawSurface *in_stack_000000a4;
  uint in_stack_000000a8;
  uint in_stack_000000ac;
  CDrawSurface *in_stack_000000b0;
  int in_stack_000000b4;
  uint in_stack_000000b8;
  CDrawSurface *in_stack_000000bc;
  int in_stack_000000c0;
  int in_stack_000000c4;
  CDrawSurface *in_stack_000000c8;
  uint in_stack_000000cc;
  int in_stack_000000d0;
  CDrawSurface *in_stack_000000d4;
  uint in_stack_000000d8;
  int in_stack_000000dc;
  CDrawSurface *in_stack_000000e0;
  uint in_stack_000000e4;
  int in_stack_000000e8;
  CDrawSurface *in_stack_000000ec;
  uint in_stack_000000f0;
  int in_stack_000000f4;
  CDrawSurface *in_stack_000000f8;
  uint in_stack_000000fc;
  int in_stack_00000100;
  uint in_stack_00000108;
  int in_stack_0000010c;
  int in_stack_00000114;
  int in_stack_00000124;
  int in_stack_00000140;
  int in_stack_00000144;
  int in_stack_0000014c;
  uint in_stack_00000150;
  int in_stack_000001a0;
  
  font_ptr = param_1;
  if ((0x27f < DAT_006141b8) && (0x1df < DAT_006141bc)) {
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_00465d30
              ((CDrawSurface *)&stack0xffffff9c,DAT_006141b8 / 2,DAT_006141bc / 2,0xc9,0x65,
               (CDrawSurface *)0x0);
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_00465d30
              ((CDrawSurface *)&stack0xffffff5c,0xc,8,0x15,0xb,(CDrawSurface *)&stack0xffffff9c);
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_00465d30
              ((CDrawSurface *)&stack0xffffff3c,0xbe,0x5f,0x14,10,(CDrawSurface *)&stack0xffffff9c);
    cockpit_drawsurf_cpp_setColorRGB_FUN_004660b0(0x80,0x80,0x80);
    cockpit_drawsurf_cpp_FUN_00467ac0((CDrawSurface *)&stack0xffffffa8);
    cockpit_drawsurf_cpp_setColor_FUN_00465ea0(7);
    cockpit_drawsurf_cpp_FUN_004673b0((CDrawSurface *)&stack0xffffffa8);
    cockpit_drawsurf_cpp_FUN_00466820(&stack0xffffffa8,0,0,200);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_004665c0
              ((CDrawSurface *)&stack0xffffffa8,100,0x32,100);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_004665c0
              ((CDrawSurface *)&stack0xffffffb8,100,0x32,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopLeft_FUN_004666b0
              ((CDrawSurface *)&stack0xffffffc8,0,0,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromTopRight_FUN_004666e0
              ((CDrawSurface *)&stack0xffffffd8,200,0,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00466710
              ((CDrawSurface *)&stack0xffffffe8,0,100,0x32);
    cockpit_drawsurf_cpp_CDrawSurface_drawCircleFromBottomRight_FUN_00466740
              ((CDrawSurface *)&stack0xfffffff8,200,100,0x32);
    cockpit_drawsurf_cpp_setColor_FUN_00465ea0(0xf9);
    cockpit_drawsurf_cpp_FUN_00466350((CBitFont *)0x0);
    cockpit_drawsurf_cpp_FUN_00468270();
    cockpit_drawsurf_cpp_FUN_00468270();
    cockpit_drawsurf_cpp_FUN_00468270();
    cockpit_drawsurf_cpp_FUN_00468410();
    cockpit_drawsurf_cpp_FUN_00468680();
    cockpit_drawsurf_cpp_FUN_00466350(font_ptr);
    *(uint *)(font_ptr + 0x4204) = 0;
    cockpit_drawsurf_cpp_FUN_00468270();
    cockpit_drawsurf_cpp_FUN_00468270();
    cockpit_drawsurf_cpp_FUN_00468270();
    *(uint *)(font_ptr + 0x4204) = 1;
    cockpit_drawsurf_cpp_FUN_00468270();
    cockpit_drawsurf_cpp_FUN_00468270();
    cockpit_drawsurf_cpp_FUN_00468410();
    cockpit_drawsurf_cpp_FUN_00468680();
    cockpit_drawsurf_cpp_setColor_FUN_00465ea0(0xff);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360((CDrawSurface *)&param_2,100,0x14);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360
              ((CDrawSurface *)&stack0x00000014,100,0x23);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360
              ((CDrawSurface *)&stack0x00000020,100,0x4f);
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360
              ((CDrawSurface *)&stack0x0000002c,100,0x5e);
    cockpit_drawsurf_cpp_setColorRGB_FUN_004660b0(0xff,0,0);
    cockpit_drawsurf_cpp_FUN_00467ac0((CDrawSurface *)&param_1);
    cockpit_drawsurf_cpp_setColor_FUN_00465ea0(0xfb);
    cockpit_drawsurf_cpp_FUN_004673b0((CDrawSurface *)&param_1);
    cockpit_drawsurf_cpp_FUN_00466820();
    cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_004665c0((CDrawSurface *)&param_1,10,5,6);
    cockpit_drawsurf_cpp_setColorRGB_FUN_004660b0(0,0,0xff);
    cockpit_drawsurf_cpp_FUN_00467ac0((CDrawSurface *)&stack0x00000000);
    cockpit_drawsurf_cpp_setColor_FUN_00465ea0(0xfb);
    cockpit_drawsurf_cpp_FUN_004673b0((CDrawSurface *)&stack0x00000000);
    cockpit_drawsurf_cpp_FUN_00466820();
    iVar2 = DAT_006141bc / 2 + 0x66;
    iVar3 = DAT_006141bc - iVar2;
    iVar1 = *(int *)(font_ptr + 0x41f0);
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_00465d30
              ((CDrawSurface *)&stack0x00000080,DAT_006141b8 / 2,iVar2,0xc9,iVar3,
               (CDrawSurface *)0x0);
    cockpit_drawsurf_cpp_setColorRGB_FUN_004660b0(0x80,0x80,0x80);
    cockpit_drawsurf_cpp_FUN_00467ac0((CDrawSurface *)&stack0x0000008c);
    cockpit_drawsurf_cpp_setColor_FUN_00465ea0(7);
    cockpit_drawsurf_cpp_FUN_004673b0((CDrawSurface *)&stack0x0000008c);
    cockpit_drawsurf_cpp_setColor_FUN_00465ea0(0xf9);
    cockpit_drawsurf_cpp_FUN_00466350(font_ptr);
    *(uint *)(font_ptr + 0x4204) = 1;
    cockpit_drawsurf_cpp_FUN_004682a0();
    cockpit_drawsurf_cpp_FUN_00468370();
    cockpit_drawsurf_cpp_FUN_00468440();
    iVar2 = iVar1 + 1;
    cockpit_drawsurf_cpp_FUN_00468510();
    in_stack_000000c0 = iVar1 * 2;
    in_stack_000000c4 = in_stack_000000c0 + 1;
    cockpit_drawsurf_cpp_FUN_004685e0();
    in_stack_000000b4 = iVar1 * 3;
    in_stack_000000b0 = (CDrawSurface *)(iVar3 + iVar1 * -3);
    cockpit_drawsurf_cpp_FUN_004686b0();
    in_stack_000000bc = (CDrawSurface *)(iVar3 - in_stack_000000c0);
    cockpit_drawsurf_cpp_FUN_00468790();
    iVar3 = iVar3 - iVar1;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00468880
              ((CDrawSurface *)&stack0x0000008c,0x32,0x96,iVar3 + -0x32,iVar3 + 0x32,
               (char *)0x5d147a);
    param_6 = (CDrawSurface *)&stack0x000000c4;
    param_5 = 0x5d147d;
    param_3 = 0x469171;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00468a90
              ((CDrawSurface *)&stack0x000000a4,(char *)0x5d147d);
    param_8 = 0xfb;
    param_7 = 0x46917e;
    cockpit_drawsurf_cpp_setColor_FUN_00465ea0(0xfb);
    param_8 = 1;
    param_7 = 1;
    param_6 = (CDrawSurface *)&stack0x000000ac;
    param_5 = 0x469192;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(param_6,1,1);
    param_11 = 1;
    param_10 = 199;
    param_9 = (CDrawSurface *)&stack0x000000b8;
    param_8 = 0x4691a9;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(param_9,199,1);
    param_14 = 1;
    param_13 = 100;
    param_12 = (CDrawSurface *)&stack0x000000c4;
    param_11 = 0x4691bd;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(param_12,100,1);
    param_16 = 100;
    param_15 = (CDrawSurface *)&stack0x000000d0;
    param_14 = 0x4691d0;
    param_17 = iVar2;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(param_15,100,iVar2);
    param_20 = in_stack_00000114;
    param_19 = 100;
    param_18 = (CDrawSurface *)&stack0x000000dc;
    param_17 = 0x4691ea;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(param_18,100,in_stack_00000114);
    param_23 = in_stack_0000010c;
    param_22 = 100;
    param_21 = (CDrawSurface *)&stack0x000000e8;
    param_20 = 0x469204;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(param_21,100,in_stack_0000010c);
    param_26 = in_stack_00000124;
    param_25 = 100;
    param_24 = (CDrawSurface *)&stack0x000000f4;
    param_23 = 0x46921e;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(param_24,100,in_stack_00000124);
    param_28 = 100;
    param_27 = (CDrawSurface *)&stack0x00000100;
    param_26 = 0x469231;
    param_29 = (CDrawSurface *)iVar3;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(param_27,100,iVar3);
    param_28 = DAT_006141b8 / 2 + -0xca;
    param_29 = (CDrawSurface *)(DAT_006141bc / 2 + 0x66);
    iVar3 = DAT_006141bc - (int)param_29;
    param_32 = 0;
    param_30 = (uint *)0xc9;
    param_27 = (CDrawSurface *)&stack0x000000cc;
    param_26 = 0x469279;
    param_31 = (uint *)iVar3;
    cockpit_drawsurf_cpp_CDrawSurface_initFromParent_FUN_00465d30
              (param_27,param_28,(int)param_29,0xc9,iVar3,(CDrawSurface *)0x0);
    param_32 = 0x80;
    param_31 = (uint *)0x80;
    param_30 = (uint *)0x80;
    param_29 = (CDrawSurface *)0x469290;
    cockpit_drawsurf_cpp_setColorRGB_FUN_004660b0(0x80,0x80,0x80);
    param_35 = (CDrawSurface *)&stack0x000000d8;
    param_34 = 0x46929d;
    cockpit_drawsurf_cpp_FUN_00467ac0(param_35);
    param_35 = (CDrawSurface *)0x7;
    param_34 = 0x4692a7;
    cockpit_drawsurf_cpp_setColor_FUN_00465ea0(7);
    param_35 = (CDrawSurface *)&stack0x000000d8;
    param_34 = 0x4692b4;
    cockpit_drawsurf_cpp_FUN_004673b0(param_35);
    param_35 = (CDrawSurface *)0xf9;
    param_34 = 0x4692c1;
    cockpit_drawsurf_cpp_setColor_FUN_00465ea0(0xf9);
    param_35 = (CDrawSurface *)0x0;
    param_34 = 0x4692cb;
    cockpit_drawsurf_cpp_FUN_00466350((CBitFont *)0x0);
    *(uint *)(font_ptr + 0x4204) = 1;
    param_35 = (CDrawSurface *)&stack0x00000138;
    param_34 = 0x5d1480;
    param_33 = 1;
    param_32 = 1;
    param_31 = &stack0x000000d8;
    param_30 = (uint *)0x4692f3;
    cockpit_drawsurf_cpp_FUN_004682a0();
    param_35 = (CDrawSurface *)&stack0x00000138;
    param_34 = 0x5d1483;
    param_33 = 1;
    param_32 = 199;
    param_31 = &stack0x000000d8;
    param_30 = (uint *)0x469314;
    cockpit_drawsurf_cpp_FUN_00468370();
    param_35 = (CDrawSurface *)&stack0x00000138;
    param_34 = 0x5d1486;
    param_33 = 1;
    param_32 = 100;
    param_31 = &stack0x000000d8;
    param_30 = (uint *)0x469332;
    cockpit_drawsurf_cpp_FUN_00468440();
    param_35 = (CDrawSurface *)&stack0x00000138;
    param_34 = 0x5d1489;
    param_32 = 100;
    param_31 = &stack0x000000d8;
    param_30 = (uint *)0x46934f;
    param_33 = iVar2;
    cockpit_drawsurf_cpp_FUN_00468510();
    param_35 = (CDrawSurface *)&stack0x00000138;
    param_34 = 0x5d148c;
    param_33 = in_stack_00000150;
    param_32 = 100;
    param_31 = &stack0x000000d8;
    param_30 = (uint *)0x469373;
    cockpit_drawsurf_cpp_FUN_004685e0();
    param_35 = (CDrawSurface *)&stack0x00000138;
    param_34 = 0x5d148f;
    param_33 = iVar3 - in_stack_00000140;
    param_32 = 0x96;
    param_31 = (uint *)0x32;
    param_30 = &stack0x000000d8;
    param_29 = (CDrawSurface *)0x4693a9;
    in_stack_00000144 = param_33;
    cockpit_drawsurf_cpp_FUN_004686b0();
    param_35 = (CDrawSurface *)&stack0x00000138;
    y = iVar3 - in_stack_0000014c;
    param_34 = 0x5d1492;
    param_33 = y + 0x32;
    param_32 = y + -0x32;
    param_31 = (uint *)0x64;
    param_30 = &stack0x000000d8;
    param_29 = (CDrawSurface *)0x4693d6;
    cockpit_drawsurf_cpp_FUN_00468790();
    param_35 = (CDrawSurface *)&stack0x00000138;
    iVar3 = iVar3 - iVar1;
    param_34 = 0x5d1495;
    param_33 = iVar3 + 0x32;
    param_32 = iVar3 + -0x32;
    param_31 = (uint *)0x96;
    param_30 = (uint *)0x32;
    param_29 = (CDrawSurface *)&stack0x000000d8;
    param_28 = 0x469401;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00468880
              (param_29,0x32,0x96,param_32,param_33,(char *)0x5d1495);
    in_stack_000000a4 = (CDrawSurface *)&stack0x00000150;
    cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00468a90
              ((CDrawSurface *)&stack0x000000f0,(char *)0x5d1498);
    in_stack_000000ac = 0xfb;
    in_stack_000000a8 = 0x469428;
    cockpit_drawsurf_cpp_setColor_FUN_00465ea0(0xfb);
    in_stack_000000ac = 1;
    in_stack_000000a8 = 1;
    in_stack_000000a4 = (CDrawSurface *)&stack0x000000f8;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(in_stack_000000a4,1,1);
    in_stack_000000b8 = 1;
    in_stack_000000b4 = 199;
    in_stack_000000b0 = (CDrawSurface *)&stack0x00000104;
    in_stack_000000ac = 0x46944d;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(in_stack_000000b0,199,1);
    in_stack_000000c4 = 1;
    in_stack_000000c0 = 100;
    in_stack_000000bc = (CDrawSurface *)&stack0x00000110;
    in_stack_000000b8 = 0x46945e;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(in_stack_000000bc,100,1);
    in_stack_000000cc = 100;
    in_stack_000000c8 = (CDrawSurface *)&stack0x0000011c;
    in_stack_000000c4 = 0x46946e;
    in_stack_000000d0 = iVar2;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(in_stack_000000c8,100,iVar2);
    in_stack_000000dc = in_stack_000001a0;
    in_stack_000000d8 = 100;
    in_stack_000000d4 = (CDrawSurface *)&stack0x00000128;
    in_stack_000000d0 = 0x469485;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360
              (in_stack_000000d4,100,in_stack_000001a0);
    in_stack_000000e8 = in_stack_000001a0;
    in_stack_000000e4 = 100;
    in_stack_000000e0 = (CDrawSurface *)&stack0x00000134;
    in_stack_000000dc = 0x46949c;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360
              (in_stack_000000e0,100,in_stack_000001a0);
    in_stack_000000f0 = 100;
    in_stack_000000ec = (CDrawSurface *)&stack0x00000140;
    in_stack_000000e8 = 0x4694ac;
    in_stack_000000f4 = y;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(in_stack_000000ec,100,y);
    in_stack_000000fc = 100;
    in_stack_000000f8 = (CDrawSurface *)&stack0x0000014c;
    in_stack_000000f4 = 0x4694bc;
    in_stack_00000100 = iVar3;
    cockpit_drawsurf_cpp_CDrawSurface_plotPixel_FUN_00466360(in_stack_000000f8,100,iVar3);
    in_stack_00000108 = 0x4694c6;
    cockpit_drawsurf_cpp_setColor_FUN_00465ea0(4);
    in_stack_00000108 = 0x4694d3;
    cockpit_drawsurf_cpp_FUN_004677e0();
    return;
  }
  return;
}
