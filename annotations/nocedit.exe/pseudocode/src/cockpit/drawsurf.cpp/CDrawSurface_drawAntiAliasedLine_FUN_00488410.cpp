// Name: cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_00488410
// Address: 00488410
// Address Range: [[00488410, 004884c9]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_00488410(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2)
// Globals:
//   int g_PaletteColorIndex
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
// Function calls:
//   cockpit_ckptutil.c_drawLineAA_FUN_00433c90
//   cockpit_ckptutil.c_isLineClippingDisabled_FUN_00434660
//   cockpit_ckptutil.c_setLineClippingDisabled_FUN_00434680

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawAntiAliasedLine_FUN_00488410
          (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int iVar1;
  int iVar2;
  int disabled;
  int unaff_EBX;
  int unaff_ESI;
  int in_stack_00000018;
  int in_stack_0000001c;
  
  iVar2 = g_ClipRight;
  iVar1 = g_ClipLeft;
  g_ClipLeft = this_ptr->clip_left;
  g_ClipRight = this_ptr->clip_right;
  g_ClipTop = this_ptr->clip_top;
  g_ClipBottom = this_ptr->clip_bottom;
  disabled = cockpit_ckptutil_c_isLineClippingDisabled_FUN_00434660();
  cockpit_ckptutil_c_setLineClippingDisabled_FUN_00434680(1);
  cockpit_ckptutil_c_drawLineAA_FUN_00433c90
            (x2 + this_ptr->x,y2 + this_ptr->y,in_stack_00000018 + this_ptr->x,
             in_stack_0000001c + this_ptr->y,g_PaletteColorIndex);
  cockpit_ckptutil_c_setLineClippingDisabled_FUN_00434680(disabled);
  g_ClipLeft = iVar1;
  g_ClipTop = unaff_ESI;
  g_ClipRight = iVar2;
  g_ClipBottom = unaff_EBX;
  return;
}


// Assembly code:
// 00488410: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_00488410
// 00488411: PUSH ESI
// 00488412: PUSH EDI
// 00488413: PUSH EBP
// 00488414: SUB ESP,0x8
// 00488417: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0048841b: MOV EDI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00488421: MOV EBP,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 00488427: MOV EAX,[0x02d0255c]
//   XREF to: 02d0255c (READ)
// 0048842c: MOV ESI,dword ptr [EBX + 0x10]
// 0048842f: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 00488432: MOV EAX,[0x02d02564]
//   XREF to: 02d02564 (READ)
// 00488437: MOV dword ptr [0x02d02558],ESI
//   XREF to: 02d02558 (WRITE)
// 0048843d: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00488441: MOV EAX,dword ptr [EBX + 0x18]
// 00488444: MOV ESI,dword ptr [EBX + 0x14]
// 00488447: MOV [0x02d02560],EAX
//   XREF to: 02d02560 (WRITE)
// 0048844c: MOV EAX,dword ptr [EBX + 0x1c]
// 0048844f: MOV dword ptr [0x02d0255c],ESI
//   XREF to: 02d0255c (WRITE)
// 00488455: MOV [0x02d02564],EAX
//   XREF to: 02d02564 (WRITE)
// 0048845a: CALL cockpit_ckptutil.c_isLineClippingDisabled_FUN_00434660
//   XREF to: 00434660 (UNCONDITIONAL_CALL)
// 0048845f: PUSH 0x1
// 00488461: MOV ESI,EAX
// 00488463: CALL cockpit_ckptutil.c_setLineClippingDisabled_FUN_00434680
//   XREF to: 00434680 (UNCONDITIONAL_CALL)
// 00488468: MOV EDX,dword ptr [0x02c6d554]
//   XREF to: 02c6d554 (READ)
// 0048846e: ADD ESP,0x4
// 00488471: MOV ECX,dword ptr [EBX + 0xc]
// 00488474: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x14] (READ)
// 00488478: PUSH EDX
// 00488479: ADD EAX,ECX
// 0048847b: MOV EDX,dword ptr [EBX + 0x8]
// 0048847e: PUSH EAX
// 0048847f: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x10] (READ)
// 00488483: ADD EAX,EDX
// 00488485: PUSH EAX
// 00488486: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0xc] (READ)
// 0048848a: ADD EAX,ECX
// 0048848c: PUSH EAX
// 0048848d: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 00488491: ADD EAX,EDX
// 00488493: PUSH EAX
// 00488494: CALL cockpit_ckptutil.c_drawLineAA_FUN_00433c90
//   XREF to: 00433c90 (UNCONDITIONAL_CALL)
// 00488499: ADD ESP,0x14
// 0048849c: PUSH ESI
// 0048849d: CALL cockpit_ckptutil.c_setLineClippingDisabled_FUN_00434680
//   XREF to: 00434680 (UNCONDITIONAL_CALL)
// 004884a2: ADD ESP,0x4
// 004884a5: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004884a8: MOV dword ptr [0x02d02558],EDI
//   XREF to: 02d02558 (WRITE)
// 004884ae: MOV [0x02d0255c],EAX
//   XREF to: 02d0255c (WRITE)
// 004884b3: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 004884b7: MOV dword ptr [0x02d02560],EBP
//   XREF to: 02d02560 (WRITE)
// 004884bd: MOV [0x02d02564],EAX
//   XREF to: 02d02564 (WRITE)
// 004884c2: ADD ESP,0x8
// 004884c5: POP EBP
// 004884c6: POP EDI
// 004884c7: POP ESI
// 004884c8: POP EBX
// 004884c9: RET
