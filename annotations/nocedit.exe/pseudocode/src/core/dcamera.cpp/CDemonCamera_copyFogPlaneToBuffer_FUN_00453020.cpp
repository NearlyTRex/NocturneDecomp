// Name: core_dcamera.cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453020
// Address: 00453020
// Address Range: [[00453020, 00453152]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453020(CDemonCamera * this_ptr, int plane_index)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 (004529b0) at 00452cf6 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_013da774+3
//   SFogImagePlane g_CameraPlaneWorkBuffer
//   undefined4 DAT_013da779
//   undefined4 DAT_013da77a
//   undefined4 DAT_013da8b7
//   undefined4 DAT_013da8b8
//   undefined4 DAT_013da8b9
//   undefined4 DAT_013da8ba
//   undefined4 DAT_013da9f9
//   undefined4 DAT_013ed377
//   SFogImagePlane[16] g_CameraImageDecompressBuffer
//   undefined4 DAT_013ed379
//   undefined4 DAT_013ed37a
//   undefined4 DAT_013ed4b8

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453020
          (CDemonCamera *this_ptr,int plane_index)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = plane_index * 0x12c00;
  for (iVar5 = 1; iVar4 = iVar4 + 0x140, iVar5 < this_ptr->display_height + -1; iVar5 = iVar5 + 1) {
    iVar3 = 1;
    iVar2 = iVar5 * 0x140;
    iVar1 = iVar4;
    while( true ) {
      if (this_ptr->display_width + -1 <= iVar3) break;
      iVar3 = iVar3 + 1;
      g_CameraImageDecompressBuffer[0].pixels[0][iVar1 + 1] =
           g_CameraPlaneWorkBuffer.pixels[0][iVar2 + 1];
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 1;
    }
  }
  iVar4 = 0;
  if (0 < this_ptr->display_height) {
    iVar5 = plane_index * 0x12c00;
    do {
      g_CameraImageDecompressBuffer[0].pixels[0][iVar5] = g_CameraPlaneWorkBuffer.pixels[iVar4][0];
      *(undefined1 *)(this_ptr->display_width + 0x13ed377 + iVar5) =
           *(undefined1 *)(this_ptr->display_width + 0x13da777 + iVar4 * 0x140);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x140;
    } while (iVar4 < this_ptr->display_height);
  }
  iVar5 = 1;
  iVar4 = plane_index * 0x12c00;
  while (iVar5 < this_ptr->display_width + -1) {
    g_CameraImageDecompressBuffer[0].pixels[0][iVar4 + 1] = g_CameraPlaneWorkBuffer.pixels[0][iVar5]
    ;
    iVar2 = (this_ptr->display_height + -1) * 0x140;
    iVar1 = iVar2 + iVar5;
    iVar5 = iVar5 + 1;
    *(undefined1 *)(iVar2 + plane_index * 0x12c00 + 0x13ed377 + iVar5) =
         *(undefined1 *)((int)&g_CameraPlaneWorkBuffer + iVar1);
    iVar4 = iVar4 + 1;
  }
  return;
}


// Assembly code:
// 00453020: PUSH EBX
//   Label: core_dcamera.cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453020
// 00453021: PUSH ESI
// 00453022: PUSH EDI
// 00453023: PUSH EBP
// 00453024: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00453028: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0045302c: LEA EAX,[EDX*0x4 + 0x0]
// 00453033: ADD EAX,EDX
// 00453035: SHL EAX,0xa
// 00453038: MOV EDX,EAX
// 0045303a: SHL EAX,0x4
// 0045303d: SUB EAX,EDX
// 0045303f: MOV EDI,0x1
// 00453044: LEA EBP,[EAX + 0x140]
// 0045304a: MOV EAX,dword ptr [ESI + 0x154]
//   Label: LAB_0045304a
// 00453050: DEC EAX
// 00453051: CMP EDI,EAX
// 00453053: JGE 0x0045308a
//   XREF to: 0045308a (CONDITIONAL_JUMP)
// 00453055: IMUL ECX,EDI,0x140
// 0045305b: MOV EDX,0x1
// 00453060: LEA EAX,[EDX + EBP*0x1]
// 00453063: ADD ECX,EDX
// 00453065: MOV EBX,dword ptr [ESI + 0x150]
//   Label: LAB_00453065
// 0045306b: DEC EBX
// 0045306c: CMP EDX,EBX
// 0045306e: JGE 0x00453081
//   XREF to: 00453081 (CONDITIONAL_JUMP)
// 00453070: INC EAX
// 00453071: MOV BL,byte ptr [ECX + 0x13da778]
//   XREF to: 013da8b9 (READ)
//   XREF to: 013da8ba (READ)
//   XREF to: 013da9f9 (READ)
// 00453077: INC ECX
// 00453078: INC EDX
// 00453079: MOV byte ptr [EAX + 0x13ed377],BL
//   XREF to: 013ed377 (DATA)
//   XREF to: 013ed379 (DATA)
//   XREF to: 013ed37a (DATA)
// 0045307f: JMP 0x00453065
//   XREF to: 00453065 (UNCONDITIONAL_JUMP)
// 00453081: INC EDI
//   Label: LAB_00453081
// 00453082: ADD EBP,0x140
// 00453088: JMP 0x0045304a
//   XREF to: 0045304a (UNCONDITIONAL_JUMP)
// 0045308a: MOV EDX,dword ptr [ESI + 0x154]
//   Label: LAB_0045308a
// 00453090: XOR EAX,EAX
// 00453092: TEST EDX,EDX
// 00453094: JLE 0x004530f0
//   XREF to: 004530f0 (CONDITIONAL_JUMP)
// 00453096: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0045309a: LEA EDX,[ECX*0x4 + 0x0]
// 004530a1: ADD EDX,ECX
// 004530a3: SHL EDX,0xa
// 004530a6: MOV ECX,EDX
// 004530a8: SHL EDX,0x4
// 004530ab: SUB EDX,ECX
// 004530ad: IMUL EBX,EAX,0x140
//   Label: LAB_004530ad
// 004530b3: MOV CL,byte ptr [EBX + 0x13da778]
//   XREF to: 013da778 (READ)
//   XREF to: 013da8b8 (READ)
// 004530b9: MOV byte ptr [EDX + 0x13ed378],CL
//   XREF to: 013ed378 (DATA)
//   XREF to: 013ed4b8 (DATA)
// 004530bf: MOV ECX,dword ptr [ESI + 0x150]
// 004530c5: MOV BL,byte ptr [ECX + EBX*0x1 + 0x13da777]
//   XREF to: 013da777 (DATA)
//   XREF to: 013da8b7 (DATA)
// 004530cc: MOV byte ptr [ECX + EDX*0x1 + 0x13ed377],BL
//   XREF to: 013ed377 (DATA)
// 004530d3: INC EAX
// 004530d4: MOV ECX,dword ptr [ESI + 0x154]
// 004530da: ADD EDX,0x140
// 004530e0: CMP EAX,ECX
// 004530e2: JL 0x004530ad
//   XREF to: 004530ad (CONDITIONAL_JUMP)
// 004530e4: LEA EAX,[EAX]
// 004530ea: LEA EDX,[EDX]
// 004530f0: MOV EDX,dword ptr [ESP + 0x18]
//   Label: LAB_004530f0
//   XREF to: Stack[0x8] (READ)
// 004530f4: LEA EDI,[EDX*0x4 + 0x0]
// 004530fb: ADD EDI,EDX
// 004530fd: SHL EDI,0xa
// 00453100: MOV EDX,EDI
// 00453102: SHL EDI,0x4
// 00453105: MOV EAX,0x1
// 0045310a: SUB EDI,EDX
// 0045310c: MOV EBP,0xffffffff
// 00453111: LEA EDX,[EDI + EAX*0x1]
// 00453114: MOV ECX,dword ptr [ESI + 0x150]
//   Label: LAB_00453114
// 0045311a: ADD ECX,EBP
// 0045311c: CMP EAX,ECX
// 0045311e: JGE 0x00452f72
//   XREF to: 00452f72 (CONDITIONAL_JUMP)
// 00453124: MOV BL,byte ptr [EAX + 0x13da778]
//   XREF to: 013da779 (READ)
//   XREF to: 013da77a (READ)
// 0045312a: MOV byte ptr [EDX + 0x13ed378],BL
//   XREF to: 013ed378 (DATA)
//   XREF to: 013ed379 (DATA)
//   XREF to: 013ed37a (DATA)
// 00453130: MOV ECX,dword ptr [ESI + 0x154]
// 00453136: DEC ECX
// 00453137: IMUL ECX,ECX,0x140
// 0045313d: LEA EBX,[ECX + EAX*0x1]
// 00453140: INC EAX
// 00453141: ADD ECX,EDI
// 00453143: MOV BL,byte ptr [EBX + 0x13da778]
//   XREF to: 013da779 (DATA)
//   XREF to: 013da77a (DATA)
// 00453149: INC EDX
// 0045314a: MOV byte ptr [ECX + EAX*0x1 + 0x13ed377],BL
//   XREF to: 013ed379 (DATA)
//   XREF to: 013ed37a (DATA)
// 00453151: JMP 0x00453114
//   XREF to: 00453114 (UNCONDITIONAL_JUMP)
