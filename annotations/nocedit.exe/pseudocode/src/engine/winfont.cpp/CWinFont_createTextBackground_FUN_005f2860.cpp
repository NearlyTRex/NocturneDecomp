// Name: engine_winfont.cpp_CWinFont_createTextBackground_FUN_005f2860
// Address: 005f2860
// Address Range: [[005f2860, 005f2a24]]
// Convention: __cdecl
// Signature: int engine_winfont.cpp_CWinFont_createTextBackground_FUN_005f2860(CWinFont * this_ptr, int width, int height)
// Cross-references:
//   engine_winfont.cpp_CWinFont_drawText_FUN_005f23f0 (005f23f0) at 005f23fb [UNCONDITIONAL_CALL]
//   engine_winfont.cpp_CWinFont_getStringHeight_FUN_005f2b00 (005f2b00) at 005f2b12 [UNCONDITIONAL_CALL]
//   engine_winfont.cpp_CWinFont_getStringWidth_FUN_005f2aa0 (005f2aa0) at 005f2ab1 [UNCONDITIONAL_CALL]
// Globals:
//   CreateBrushIndirect* CreateBrushIndirect = 00211736
//   CreateCompatibleDC* CreateCompatibleDC = 0021174c
//   CreateDIBSection* CreateDIBSection = 00211762
//   DeleteObject* DeleteObject = 00211790
//   Rectangle* Rectangle = 002117ca
//   SelectObject* SelectObject = 002117d6
//   SetBkColor* SetBkColor = 002117e6
//   SetBkMode* SetBkMode = 002117f4
//   int g_WindowWidth = 0x140
//   int g_BitsPerPixel = 0x8
//   undefined4 g_ColorMagenta
// Function calls:
//   CreateBrushIndirect
//   CreateCompatibleDC
//   CreateDIBSection
//   crt_memory.c_memset_FUN_005fde40
//   DeleteObject
//   engine_winfont.cpp_CWinFont_reset_FUN_005f2a30
//   Rectangle
//   SelectObject
//   SetBkColor
//   SetBkMode

#include "nocturne.h"

int __cdecl
engine_winfont_cpp_CWinFont_createTextBackground_FUN_005f2860
          (CWinFont *this_ptr,int width,int height)

{
  HBITMAP h;
  HDC pHVar1;
  HBRUSH h_00;
  HGDIOBJ pvVar2;
  BADSPACEBASE *in_ESP;
  undefined4 uStack0000002c;
  ULONG_PTR UStack0000003c;
  DWORD DStack_38;
  int iStack_34;
  int iStack_30;
  WORD WStack_2c;
  WORD WStack_2a;
  DWORD DStack_28;
  
  if (width < 1) {
    width = g_WindowWidth;
  }
  if (height < 1) {
    height = 100;
  }
  if (((this_ptr->deviceContextHandle == (HDC)0x0 || this_ptr->right < width) ||
      this_ptr->top < height) || this_ptr->bpp != g_BitsPerPixel) {
    engine_winfont_cpp_CWinFont_reset_FUN_005f2a30(this_ptr);
    pHVar1 = (*CreateCompatibleDC)((HDC)0x0);
    this_ptr->deviceContextHandle = pHVar1;
    crt_memory_c_memset_FUN_005fde40(&stack0xffffffc4,0,0x2c);
    DStack_38 = 0x28;
    WStack_2c = 1;
    iStack_30 = -height;
    WStack_2a = (WORD)g_BitsPerPixel;
    DStack_28 = 0;
    iStack_34 = width;
    h = (*CreateDIBSection)(this_ptr->deviceContextHandle,(BITMAPINFO *)&DStack_38,0,
                            &this_ptr->ppvBits,(HANDLE)0x0,0);
    this_ptr->dibHandle = h;
    if (h != (HBITMAP)0x0) {
      DStack_28 = 0x5f2976;
      (*SelectObject)(this_ptr->deviceContextHandle,h);
      (*SetBkMode)(this_ptr->deviceContextHandle,2);
      (*SetBkColor)(this_ptr->deviceContextHandle,0xff00ff);
      UStack0000003c = 0;
      h_00 = (*CreateBrushIndirect)((LOGBRUSH *)&stack0x00000034);
      (*SelectObject)(this_ptr->deviceContextHandle,h_00);
      (*Rectangle)(this_ptr->deviceContextHandle,0,-this_ptr->top,this_ptr->right,0);
      uStack0000002c = 0x5f29e7;
      (*DeleteObject)(h_00);
      pvVar2 = (*SelectObject)(this_ptr->deviceContextHandle,this_ptr->fontHandle);
      this_ptr->objectHandle = pvVar2;
      this_ptr->right = width;
      this_ptr->top = height;
      this_ptr->bpp = g_BitsPerPixel;
      return (uint)(this_ptr->deviceContextHandle != (HDC)0x0);
    }
  }
  else {
    h = (HBITMAP)&DAT_00000001;
  }
  return (int)h;
}


// Assembly code:
// 005f2860: PUSH EBX
//   Label: engine_winfont.cpp_CWinFont_createTextBackground_FUN_005f2860
// 005f2861: PUSH ESI
// 005f2862: PUSH EDI
// 005f2863: PUSH EBP
// 005f2864: SUB ESP,0x38
// 005f2867: MOV EBX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 005f286b: MOV EDI,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 005f286f: MOV ESI,dword ptr [ESP + 0x54]
//   XREF to: Stack[0xc] (READ)
// 005f2873: TEST EDI,EDI
// 005f2875: JLE 0x005f28c8
//   XREF to: 005f28c8 (CONDITIONAL_JUMP)
// 005f2877: TEST ESI,ESI
//   Label: LAB_005f2877
// 005f2879: JLE 0x005f28d0
//   XREF to: 005f28d0 (CONDITIONAL_JUMP)
// 005f287b: CMP dword ptr [EBX + 0x4],0x0
//   Label: LAB_005f287b
// 005f287f: SETZ AL
// 005f2882: MOV ECX,dword ptr [EBX + 0x120]
// 005f2888: AND EAX,0xff
// 005f288d: CMP EDI,ECX
// 005f288f: SETG DL
// 005f2892: MOVZX EBP,DL
// 005f2895: OR EAX,EBP
// 005f2897: CMP ESI,dword ptr [EBX + 0x124]
// 005f289d: SETG DL
// 005f28a0: MOVZX EBP,DL
// 005f28a3: MOV ECX,dword ptr [EBX + 0x128]
// 005f28a9: OR EAX,EBP
// 005f28ab: CMP ECX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 005f28b1: SETNZ DL
// 005f28b4: MOVZX EBP,DL
// 005f28b7: OR EAX,EBP
// 005f28b9: JNZ 0x005f28d7
//   XREF to: 005f28d7 (CONDITIONAL_JUMP)
// 005f28bb: MOV EAX,0x1
// 005f28c0: ADD ESP,0x38
//   Label: LAB_005f28c0
// 005f28c3: POP EBP
// 005f28c4: POP EDI
// 005f28c5: POP ESI
// 005f28c6: POP EBX
// 005f28c7: RET
// 005f28c8: MOV EDI,dword ptr [0x00679394]
//   Label: LAB_005f28c8
//   XREF to: 00679394 (READ)
// 005f28ce: JMP 0x005f2877
//   XREF to: 005f2877 (UNCONDITIONAL_JUMP)
// 005f28d0: MOV ESI,0x64
//   Label: LAB_005f28d0
// 005f28d5: JMP 0x005f287b
//   XREF to: 005f287b (UNCONDITIONAL_JUMP)
// 005f28d7: PUSH EBX
//   Label: LAB_005f28d7
// 005f28d8: CALL engine_winfont.cpp_CWinFont_reset_FUN_005f2a30
//   XREF to: 005f2a30 (UNCONDITIONAL_CALL)
// 005f28dd: ADD ESP,0x4
// 005f28e0: PUSH 0x0
// 005f28e2: CALL dword ptr CS:[0x6113cc]
//   XREF to: EXTERNAL:00000002 (COMPUTED_CALL)
//   XREF to: 006113cc (READ)
// 005f28e9: PUSH 0x2c
// 005f28eb: PUSH 0x0
// 005f28ed: MOV dword ptr [EBX + 0x4],EAX
// 005f28f0: LEA EAX,[ESP + 0x8]
// 005f28f4: PUSH EAX
// 005f28f5: MOV EBP,0x28
// 005f28fa: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005f28ff: MOV EDX,0x1
// 005f2904: ADD ESP,0xc
// 005f2907: MOV ECX,ESI
// 005f2909: XOR EAX,EAX
// 005f290b: MOV dword ptr [ESP],EBP
// 005f290e: MOV word ptr [ESP + 0xc],DX
// 005f2913: MOV dword ptr [ESP + 0x14],EAX
// 005f2917: MOV dword ptr [ESP + 0x20],EAX
// 005f291b: MOV dword ptr [ESP + 0x4],EDI
// 005f291f: MOV dword ptr [ESP + 0x8],ESI
// 005f2923: NEG ECX
// 005f2925: MOV AX,[0x0067939c]
//   XREF to: 0067939c (READ)
// 005f292b: XOR EBP,EBP
// 005f292d: MOV dword ptr [ESP + 0x8],ECX
// 005f2931: PUSH EBP
// 005f2932: XOR EDX,EDX
// 005f2934: MOV word ptr [ESP + 0x12],AX
// 005f2939: PUSH EBP
// 005f293a: LEA EAX,[EBX + 0x14]
// 005f293d: MOV dword ptr [ESP + 0x18],EBP
// 005f2941: PUSH EAX
// 005f2942: MOV dword ptr [ESP + 0x24],EBP
// 005f2946: MOV dword ptr [ESP + 0x28],EDX
// 005f294a: PUSH EBP
// 005f294b: LEA EAX,[ESP + 0x10]
// 005f294f: MOV dword ptr [ESP + 0x34],EBP
// 005f2953: PUSH EAX
// 005f2954: MOV EBP,dword ptr [EBX + 0x4]
// 005f2957: PUSH EBP
// 005f2958: CALL dword ptr CS:[0x6113d0]
//   XREF to: EXTERNAL:00000003 (COMPUTED_CALL)
//   XREF to: 006113d0 (READ)
// 005f295f: MOV dword ptr [EBX + 0x8],EAX
// 005f2962: TEST EAX,EAX
// 005f2964: JZ 0x005f28c0
//   XREF to: 005f28c0 (CONDITIONAL_JUMP)
// 005f296a: PUSH EAX
// 005f296b: MOV ECX,dword ptr [EBX + 0x4]
// 005f296e: PUSH ECX
// 005f296f: CALL dword ptr CS:[0x6113ec]
//   XREF to: EXTERNAL:0000000a (COMPUTED_CALL)
//   XREF to: 006113ec (READ)
// 005f2976: PUSH 0x2
// 005f2978: MOV EBP,dword ptr [EBX + 0x4]
// 005f297b: PUSH EBP
// 005f297c: CALL dword ptr CS:[0x6113f4]
//   XREF to: EXTERNAL:0000000c (COMPUTED_CALL)
//   XREF to: 006113f4 (READ)
// 005f2983: PUSH 0xff00ff
//   XREF to: 00ff00ff (DATA)
// 005f2988: MOV EAX,dword ptr [EBX + 0x4]
// 005f298b: PUSH EAX
// 005f298c: CALL dword ptr CS:[0x6113f0]
//   XREF to: EXTERNAL:0000000b (COMPUTED_CALL)
//   XREF to: 006113f0 (READ)
// 005f2993: MOV ECX,0xff00ff
// 005f2998: XOR EDX,EDX
// 005f299a: LEA EAX,[ESP + 0x2c]
// 005f299e: MOV dword ptr [ESP + 0x2c],EDX
// 005f29a2: PUSH EAX
// 005f29a3: MOV dword ptr [ESP + 0x34],ECX
//   XREF to: 00ff00ff (DATA)
// 005f29a7: MOV dword ptr [ESP + 0x38],EDX
// 005f29ab: CALL dword ptr CS:[0x6113c8]
//   XREF to: EXTERNAL:00000001 (COMPUTED_CALL)
//   XREF to: 006113c8 (READ)
// 005f29b2: PUSH EAX
// 005f29b3: MOV EBP,EAX
// 005f29b5: MOV EAX,dword ptr [EBX + 0x4]
// 005f29b8: PUSH EAX
// 005f29b9: CALL dword ptr CS:[0x6113ec]
//   XREF to: EXTERNAL:0000000a (COMPUTED_CALL)
//   XREF to: 006113ec (READ)
// 005f29c0: PUSH 0x0
// 005f29c2: MOV EDX,dword ptr [EBX + 0x120]
// 005f29c8: MOV EAX,dword ptr [EBX + 0x124]
// 005f29ce: PUSH EDX
// 005f29cf: NEG EAX
// 005f29d1: PUSH EAX
// 005f29d2: PUSH 0x0
// 005f29d4: MOV ECX,dword ptr [EBX + 0x4]
// 005f29d7: PUSH ECX
// 005f29d8: CALL dword ptr CS:[0x6113e8]
//   XREF to: EXTERNAL:00000009 (COMPUTED_CALL)
//   XREF to: 006113e8 (READ)
// 005f29df: PUSH EBP
// 005f29e0: CALL dword ptr CS:[0x6113dc]
//   XREF to: EXTERNAL:00000006 (COMPUTED_CALL)
//   XREF to: 006113dc (READ)
// 005f29e7: MOV EBP,dword ptr [EBX + 0xc]
// 005f29ea: PUSH EBP
// 005f29eb: MOV EAX,dword ptr [EBX + 0x4]
// 005f29ee: PUSH EAX
// 005f29ef: CALL dword ptr CS:[0x6113ec]
//   XREF to: EXTERNAL:0000000a (COMPUTED_CALL)
//   XREF to: 006113ec (READ)
// 005f29f6: MOV dword ptr [EBX + 0x10],EAX
// 005f29f9: MOV dword ptr [EBX + 0x120],EDI
// 005f29ff: MOV dword ptr [EBX + 0x124],ESI
// 005f2a05: MOV EAX,[0x0067939c]
//   XREF to: 0067939c (READ)
// 005f2a0a: MOV EDX,dword ptr [EBX + 0x4]
// 005f2a0d: MOV dword ptr [EBX + 0x128],EAX
// 005f2a13: TEST EDX,EDX
// 005f2a15: SETNZ AL
// 005f2a18: AND EAX,0xff
// 005f2a1d: ADD ESP,0x38
// 005f2a20: POP EBP
// 005f2a21: POP EDI
// 005f2a22: POP ESI
// 005f2a23: POP EBX
// 005f2a24: RET
