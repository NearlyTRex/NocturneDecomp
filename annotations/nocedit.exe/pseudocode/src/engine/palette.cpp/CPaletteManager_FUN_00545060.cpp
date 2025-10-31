// Name: engine_palette.cpp_CPaletteManager_FUN_00545060
// Address: 00545060
// Address Range: [[00545060, 00545172]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_palette.cpp_CPaletteManager_FUN_00545060(CPaletteManager * this_ptr, SMRGLHeaderExtended * unk)
// Function calls:
//   engine_model.c_freeMRGLData_FUN_005280b0
//   engine_model.c_getMRGLSize_FUN_00528700
//   engine_model.c_loadModelFile_FUN_00527ec0
//   engine_palette.cpp_CPaletteManager_addTexture_FUN_00544fc0

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_palette_cpp_CPaletteManager_FUN_00545060(CPaletteManager *this_ptr,SMRGLHeaderExtended *unk)

{
  SMRGLHeaderExtended *in_EAX;
  SMRGLHeaderExtended *unk_00;
  SMRGLHeaderExtended *pSVar1;
  int iVar2;
  
  iVar2 = (unk->base).type;
  if (iVar2 == 0x20) {
    iVar2 = 0;
    if (0 < unk->child_count) {
      pSVar1 = unk + 2;
      do {
        unk_00 = engine_model_c_loadModelFile_FUN_00527ec0((char *)pSVar1);
        engine_palette_cpp_CPaletteManager_FUN_00545060(this_ptr,unk_00);
        in_EAX = (SMRGLHeaderExtended *)0x545122;
        engine_model_c_freeMRGLData_FUN_005280b0(unk_00);
        iVar2 = iVar2 + 1;
        pSVar1 = (SMRGLHeaderExtended *)&pSVar1[1].base.count;
      } while (iVar2 < in_EAX->child_count);
    }
  }
  else {
    in_EAX = unk;
    if (iVar2 == 0x26) {
      in_EAX = (SMRGLHeaderExtended *)unk[2].base.type;
      iVar2 = 0;
      if (0 < (int)in_EAX) {
        do {
          iVar2 = iVar2 + 1;
          pSVar1 = (SMRGLHeaderExtended *)
                   engine_palette_cpp_CPaletteManager_addTexture_FUN_00544fc0();
        } while (iVar2 < unk[2].base.type);
        return pSVar1;
      }
    }
    else {
      while (iVar2 = (in_EAX->base).type, iVar2 != 0) {
        if ((iVar2 == 0xd) || (pSVar1 = in_EAX, iVar2 == 0x40)) {
          engine_palette_cpp_CPaletteManager_addTexture_FUN_00544fc0();
          pSVar1 = in_EAX;
        }
        in_EAX = pSVar1;
        if (((pSVar1->base).type == 0x1d) && (iVar2 = 0, 0 < pSVar1->child_count)) {
          do {
            iVar2 = iVar2 + 1;
            engine_palette_cpp_CPaletteManager_addTexture_FUN_00544fc0();
          } while (iVar2 < pSVar1->child_count);
        }
        engine_model_c_getMRGLSize_FUN_00528700(in_EAX);
      }
    }
  }
  return in_EAX;
}


// Assembly code:
// 00545060: PUSH EBX
//   Label: engine_palette.cpp_CPaletteManager_FUN_00545060
// 00545061: PUSH ESI
// 00545062: PUSH EDI
// 00545063: PUSH EBP
// 00545064: SUB ESP,0x8
// 00545067: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0054506b: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0054506f: MOV EDX,dword ptr [EBX]
// 00545071: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 00545075: CMP EDX,0x20
// 00545078: JZ 0x005450f8
//   XREF to: 005450f8 (CONDITIONAL_JUMP)
// 0054507e: CMP EDX,0x26
// 00545081: JZ 0x00545148
//   XREF to: 00545148 (CONDITIONAL_JUMP)
// 00545087: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_00545087
//   XREF to: Stack[-0x14] (READ)
// 0054508b: MOV ESI,dword ptr [EAX]
// 0054508d: TEST ESI,ESI
// 0054508f: JZ 0x00545140
//   XREF to: 00545140 (CONDITIONAL_JUMP)
// 00545095: CMP ESI,0xd
// 00545098: JZ 0x0054509f
//   XREF to: 0054509f (CONDITIONAL_JUMP)
// 0054509a: CMP ESI,0x40
// 0054509d: JNZ 0x005450b0
//   XREF to: 005450b0 (CONDITIONAL_JUMP)
// 0054509f: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_0054509f
//   XREF to: Stack[-0x14] (READ)
// 005450a3: ADD EAX,0x8
// 005450a6: PUSH EAX
// 005450a7: PUSH EDI
// 005450a8: CALL engine_palette.cpp_CPaletteManager_addTexture_FUN_00544fc0
//   XREF to: 00544fc0 (UNCONDITIONAL_CALL)
// 005450ad: ADD ESP,0x8
// 005450b0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_005450b0
//   XREF to: Stack[-0x14] (READ)
// 005450b4: CMP dword ptr [EAX],0x1d
// 005450b7: JNZ 0x005450dc
//   XREF to: 005450dc (CONDITIONAL_JUMP)
// 005450b9: MOV EBP,EAX
// 005450bb: MOV EDX,dword ptr [EAX + 0x8]
// 005450be: XOR EBX,EBX
// 005450c0: LEA ESI,[EAX + 0x1c]
// 005450c3: TEST EDX,EDX
// 005450c5: JLE 0x005450dc
//   XREF to: 005450dc (CONDITIONAL_JUMP)
// 005450c7: PUSH ESI
//   Label: LAB_005450c7
// 005450c8: PUSH EDI
// 005450c9: INC EBX
// 005450ca: CALL engine_palette.cpp_CPaletteManager_addTexture_FUN_00544fc0
//   XREF to: 00544fc0 (UNCONDITIONAL_CALL)
// 005450cf: ADD ESI,0x20
// 005450d2: MOV ECX,dword ptr [EBP + 0x8]
// 005450d5: ADD ESP,0x8
// 005450d8: CMP EBX,ECX
// 005450da: JL 0x005450c7
//   XREF to: 005450c7 (CONDITIONAL_JUMP)
// 005450dc: MOV EBX,dword ptr [ESP + 0x4]
//   Label: LAB_005450dc
//   XREF to: Stack[-0x14] (READ)
// 005450e0: PUSH EBX
// 005450e1: CALL engine_model.c_getMRGLSize_FUN_00528700
//   XREF to: 00528700 (UNCONDITIONAL_CALL)
// 005450e6: SHR EAX,0x2
// 005450e9: SHL EAX,0x2
// 005450ec: ADD ESP,0x4
// 005450ef: LEA ESI,[EBX + EAX*0x1]
// 005450f2: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 005450f6: JMP 0x00545087
//   XREF to: 00545087 (UNCONDITIONAL_JUMP)
// 005450f8: MOV dword ptr [ESP],EBX
//   Label: LAB_005450f8
//   XREF to: Stack[-0x18] (DATA)
// 005450fb: MOV EDX,dword ptr [EBX + 0x8]
// 005450fe: XOR ESI,ESI
// 00545100: TEST EDX,EDX
// 00545102: JLE 0x00545140
//   XREF to: 00545140 (CONDITIONAL_JUMP)
// 00545104: LEA EBP,[EBX + 0x18]
// 00545107: PUSH EBP
//   Label: LAB_00545107
// 00545108: CALL engine_model.c_loadModelFile_FUN_00527ec0
//   XREF to: 00527ec0 (UNCONDITIONAL_CALL)
// 0054510d: ADD ESP,0x4
// 00545110: PUSH EAX
// 00545111: PUSH EDI
// 00545112: MOV EBX,EAX
// 00545114: CALL engine_palette.cpp_CPaletteManager_FUN_00545060
//   XREF to: 00545060 (UNCONDITIONAL_CALL)
// 00545119: ADD ESP,0x8
// 0054511c: PUSH EBX
// 0054511d: CALL engine_model.c_freeMRGLData_FUN_005280b0
//   XREF to: 005280b0 (UNCONDITIONAL_CALL)
// 00545122: ADD ESP,0x4
// 00545125: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00545128: INC ESI
// 00545129: MOV EBX,dword ptr [EAX + 0x8]
// 0054512c: ADD EBP,0x10
// 0054512f: CMP ESI,EBX
// 00545131: JL 0x00545107
//   XREF to: 00545107 (CONDITIONAL_JUMP)
// 00545133: LEA EAX,[EAX]
// 00545139: LEA EDX,[EDX]
// 0054513f: NOP
// 00545140: ADD ESP,0x8
//   Label: LAB_00545140
// 00545143: POP EBP
// 00545144: POP EDI
// 00545145: POP ESI
// 00545146: POP EBX
// 00545147: RET
// 00545148: MOV EBP,EBX
//   Label: LAB_00545148
// 0054514a: MOV EAX,dword ptr [EBX + 0x18]
// 0054514d: XOR ESI,ESI
// 0054514f: TEST EAX,EAX
// 00545151: JLE 0x00545140
//   XREF to: 00545140 (CONDITIONAL_JUMP)
// 00545153: ADD EBX,0x24
// 00545156: PUSH EBX
//   Label: LAB_00545156
// 00545157: PUSH EDI
// 00545158: INC ESI
// 00545159: CALL engine_palette.cpp_CPaletteManager_addTexture_FUN_00544fc0
//   XREF to: 00544fc0 (UNCONDITIONAL_CALL)
// 0054515e: ADD EBX,0x18
// 00545161: MOV ECX,dword ptr [EBP + 0x18]
// 00545164: ADD ESP,0x8
// 00545167: CMP ESI,ECX
// 00545169: JL 0x00545156
//   XREF to: 00545156 (CONDITIONAL_JUMP)
// 0054516b: ADD ESP,0x8
// 0054516e: POP EBP
// 0054516f: POP EDI
// 00545170: POP ESI
// 00545171: POP EBX
// 00545172: RET
