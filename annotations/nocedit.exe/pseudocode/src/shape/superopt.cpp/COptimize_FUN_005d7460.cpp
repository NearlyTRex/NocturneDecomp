// Name: shape_superopt.cpp_COptimize_FUN_005d7460
// Address: 005d7460
// Address Range: [[005d7460, 005d7688]]
// Convention: __cdecl
// Signature: void shape_superopt.cpp_COptimize_FUN_005d7460(COptimize * this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_COptimize_FUN_005d7460(COptimize *this_ptr)

{
  double dVar1;
  byte bVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int in_stack_00000008;
  int in_stack_0000000c;
  double dStack_40;
  uint local_30;
  int local_2c;
  uint uStack_24;
  int iStack_1c;
  int iStack_14;
  
  *(byte *)(in_stack_00000008 + 0x61) = *(byte *)(in_stack_00000008 + 0x61) | 0x20;
  dVar1 = *(double *)(this_ptr->field1_0x1c + 8);
  do {
    local_30 = 0;
    bVar4 = true;
    if (*(int *)(in_stack_0000000c + 8) != 0) {
      local_2c = 0;
      do {
        iVar6 = local_2c + *(int *)(in_stack_0000000c + 0xc);
        if (((*(byte *)(iVar6 + 0x61) & 0x80) == 0) && ((*(byte *)(iVar6 + 0x61) & 0x20) != 0)) {
          dVar3 = (double)(**(code **)(*(int *)(iVar6 + 100) + 0x84))();
          uStack_24 = 0;
          if (*(int *)(in_stack_0000000c + 8) != 0) {
            iStack_1c = 0;
            do {
              iVar7 = *(int *)(in_stack_0000000c + 0xc) + iStack_1c;
              if ((((*(byte *)(iVar7 + 0x61) & 0xa0) == 0) &&
                  (*(int *)(iVar7 + 0x5c) == *(int *)(iVar6 + 0x5c))) &&
                 (1.0 - dVar1 <=
                  *(double *)(iVar7 + 0x50) * *(double *)(iVar6 + 0x50) +
                  *(double *)(iVar7 + 0x40) * *(double *)(iVar6 + 0x40) +
                  *(double *)(iVar7 + 0x48) * *(double *)(iVar6 + 0x48))) {
                dStack_40 = (double)(**(code **)(*(int *)(iVar7 + 100) + 0x84))();
                dStack_40 = dStack_40 - dVar3;
                if (dStack_40 < 0.0) {
                  dStack_40 = -dStack_40;
                }
                if ((dStack_40 <= *(double *)(this_ptr->field1_0x1c + 0x10)) &&
                   (iVar5 = (**(code **)(*(int *)(iVar6 + 100) + 0x74))(), iVar5 != 0)) {
                  uVar8 = 0;
                  if (*(int *)(in_stack_0000000c + 8) != 0) {
                    iStack_14 = 0;
                    do {
                      bVar2 = *(byte *)(*(int *)(in_stack_0000000c + 0xc) + iStack_14 + 0x61);
                      if ((((bVar2 & 0x80) == 0) && ((bVar2 & 0x20) != 0)) &&
                         ((iVar5 = (**(code **)(*(int *)(iVar7 + 100) + 0x7c))(), iVar5 != 0 ||
                          ((iVar5 = (**(code **)(*(int *)(iVar7 + 100) + 0x78))(), iVar5 != 0 ||
                           (iVar5 = (**(code **)(*(int *)(iVar7 + 100) + 0x80))(), iVar5 != 0))))))
                      break;
                      iStack_14 = iStack_14 + 0x68;
                      uVar8 = uVar8 + 1;
                    } while (uVar8 < *(uint *)(in_stack_0000000c + 8));
                  }
                  if (uVar8 == *(uint *)(in_stack_0000000c + 8)) {
                    bVar4 = false;
                    *(byte *)(iVar7 + 0x61) = *(byte *)(iVar7 + 0x61) | 0x20;
                  }
                }
              }
              uStack_24 = uStack_24 + 1;
              iStack_1c = iStack_1c + 0x68;
            } while (uStack_24 < *(uint *)(in_stack_0000000c + 8));
          }
        }
        local_2c = local_2c + 0x68;
        local_30 = local_30 + 1;
      } while (local_30 < *(uint *)(in_stack_0000000c + 8));
    }
    if (bVar4) {
      return;
    }
  } while( true );
}


// Assembly code:
// 005d7460: PUSH EBX
//   Label: shape_superopt.cpp_COptimize_FUN_005d7460
// 005d7461: PUSH ESI
// 005d7462: PUSH EDI
// 005d7463: PUSH EBP
// 005d7464: MOV EBP,ESP
// 005d7466: SUB ESP,0x48
// 005d7469: AND ESP,0xfffffff8
// 005d746c: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005d746f: OR byte ptr [EAX + 0x61],0x20
// 005d7473: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d7476: FLD1
// 005d7478: FSUB double ptr [EAX + 0x24]
// 005d747b: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0x50] (WRITE)
// 005d747f: MOV EAX,dword ptr [EBP + 0x1c]
//   Label: LAB_005d747f
//   XREF to: Stack[0xc] (READ)
// 005d7482: XOR ECX,ECX
// 005d7484: MOV EDX,0x1
// 005d7489: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 005d748d: MOV EBX,dword ptr [EAX + 0x8]
// 005d7490: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 005d7494: TEST EBX,EBX
// 005d7496: JBE 0x005d74d2
//   XREF to: 005d74d2 (CONDITIONAL_JUMP)
// 005d7498: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 005d749c: MOV EAX,dword ptr [EBP + 0x1c]
//   Label: LAB_005d749c
//   XREF to: Stack[0xc] (READ)
// 005d749f: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x2c] (READ)
// 005d74a3: MOV EAX,dword ptr [EAX + 0xc]
// 005d74a6: ADD EBX,EAX
// 005d74a8: MOV DH,byte ptr [EBX + 0x61]
// 005d74ab: MOV dword ptr [ESP + 0x40],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 005d74af: TEST DH,0x80
// 005d74b2: JZ 0x005d74e0
//   XREF to: 005d74e0 (CONDITIONAL_JUMP)
// 005d74b4: MOV ESI,dword ptr [ESP + 0x2c]
//   Label: LAB_005d74b4
//   XREF to: Stack[-0x2c] (READ)
// 005d74b8: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x30] (READ)
// 005d74bc: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d74bf: ADD ESI,0x68
// 005d74c2: INC EDI
// 005d74c3: MOV EDX,dword ptr [EBX + 0x8]
// 005d74c6: MOV dword ptr [ESP + 0x2c],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 005d74ca: MOV dword ptr [ESP + 0x28],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 005d74ce: CMP EDI,EDX
// 005d74d0: JC 0x005d749c
//   XREF to: 005d749c (CONDITIONAL_JUMP)
// 005d74d2: CMP dword ptr [ESP + 0x30],0x0
//   Label: LAB_005d74d2
//   XREF to: Stack[-0x28] (READ)
// 005d74d7: JZ 0x005d747f
//   XREF to: 005d747f (CONDITIONAL_JUMP)
// 005d74d9: MOV ESP,EBP
// 005d74db: POP EBP
// 005d74dc: POP EDI
// 005d74dd: POP ESI
// 005d74de: POP EBX
// 005d74df: RET
// 005d74e0: TEST DH,0x20
//   Label: LAB_005d74e0
// 005d74e3: JZ 0x005d74b4
//   XREF to: 005d74b4 (CONDITIONAL_JUMP)
// 005d74e5: PUSH EBX
// 005d74e6: MOV EAX,dword ptr [EBX + 0x64]
// 005d74e9: CALL dword ptr [EAX + 0x84]
// 005d74ef: MOV dword ptr [ESP + 0x24],EAX
// 005d74f3: MOV dword ptr [ESP + 0x28],EDX
// 005d74f7: FLD double ptr [ESP + 0x24]
// 005d74fb: ADD ESP,0x4
// 005d74fe: XOR EDI,EDI
// 005d7500: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d7503: FSTP double ptr [ESP + 0x10]
// 005d7507: MOV EDX,dword ptr [EAX + 0x8]
// 005d750a: MOV dword ptr [ESP + 0x34],EDI
// 005d750e: TEST EDX,EDX
// 005d7510: JBE 0x005d74b4
//   XREF to: 005d74b4 (CONDITIONAL_JUMP)
// 005d7512: LEA EAX,[EBX + 0x40]
// 005d7515: MOV dword ptr [ESP + 0x3c],EDI
// 005d7519: MOV dword ptr [ESP + 0x38],EAX
// 005d751d: MOV EBX,dword ptr [EBP + 0x1c]
//   Label: LAB_005d751d
//   XREF to: Stack[0xc] (READ)
// 005d7520: MOV EAX,dword ptr [ESP + 0x3c]
// 005d7524: MOV EBX,dword ptr [EBX + 0xc]
// 005d7527: ADD EBX,EAX
// 005d7529: TEST byte ptr [EBX + 0x61],0xa0
// 005d752d: JZ 0x005d7555
//   XREF to: 005d7555 (CONDITIONAL_JUMP)
// 005d752f: MOV EBX,dword ptr [ESP + 0x34]
//   Label: LAB_005d752f
// 005d7533: INC EBX
// 005d7534: MOV ECX,dword ptr [ESP + 0x3c]
// 005d7538: MOV dword ptr [ESP + 0x34],EBX
// 005d753c: MOV EAX,EBX
// 005d753e: MOV EBX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d7541: ADD ECX,0x68
// 005d7544: MOV ESI,dword ptr [EBX + 0x8]
// 005d7547: MOV dword ptr [ESP + 0x3c],ECX
// 005d754b: CMP EAX,ESI
// 005d754d: JNC 0x005d74b4
//   XREF to: 005d74b4 (CONDITIONAL_JUMP)
// 005d7553: JMP 0x005d751d
//   XREF to: 005d751d (UNCONDITIONAL_JUMP)
// 005d7555: MOV ESI,dword ptr [ESP + 0x40]
//   Label: LAB_005d7555
// 005d7559: MOV EAX,dword ptr [EBX + 0x5c]
// 005d755c: CMP EAX,dword ptr [ESI + 0x5c]
// 005d755f: JNZ 0x005d752f
//   XREF to: 005d752f (CONDITIONAL_JUMP)
// 005d7561: LEA EAX,[EBX + 0x40]
// 005d7564: MOV ESI,dword ptr [ESP + 0x38]
// 005d7568: FLD double ptr [EAX + 0x8]
// 005d756b: FMUL double ptr [ESI + 0x8]
// 005d756e: FLD double ptr [EAX]
// 005d7570: FMUL double ptr [ESI]
// 005d7572: FADDP
// 005d7574: FLD double ptr [EAX + 0x10]
// 005d7577: FMUL double ptr [ESI + 0x10]
// 005d757a: FADDP
// 005d757c: FCOMP double ptr [ESP + 0x8]
// 005d7580: FNSTSW AX
// 005d7582: SAHF
// 005d7583: JC 0x005d752f
//   XREF to: 005d752f (CONDITIONAL_JUMP)
// 005d7585: PUSH EBX
// 005d7586: MOV EAX,dword ptr [EBX + 0x64]
// 005d7589: CALL dword ptr [EAX + 0x84]
// 005d758f: MOV dword ptr [ESP + 0x24],EAX
// 005d7593: MOV dword ptr [ESP + 0x28],EDX
// 005d7597: FLD double ptr [ESP + 0x24]
// 005d759b: ADD ESP,0x4
// 005d759e: FSUB double ptr [ESP + 0x10]
// 005d75a2: FLDZ
// 005d75a4: FXCH
// 005d75a6: FSTP double ptr [ESP]
// 005d75a9: FCOMP double ptr [ESP]
// 005d75ac: FNSTSW AX
// 005d75ae: SAHF
// 005d75af: JA 0x005d7644
//   XREF to: 005d7644 (CONDITIONAL_JUMP)
// 005d75b5: MOV EAX,dword ptr [ESP]
// 005d75b8: MOV dword ptr [ESP + 0x18],EAX
// 005d75bc: MOV EAX,dword ptr [ESP + 0x4]
// 005d75c0: MOV dword ptr [ESP + 0x1c],EAX
// 005d75c4: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005d75c4
//   XREF to: Stack[0x4] (READ)
// 005d75c7: FLD double ptr [ESP + 0x18]
// 005d75cb: FCOMP double ptr [EAX + 0x2c]
// 005d75ce: FNSTSW AX
// 005d75d0: SAHF
// 005d75d1: JA 0x005d752f
//   XREF to: 005d752f (CONDITIONAL_JUMP)
// 005d75d7: PUSH EBX
// 005d75d8: MOV ECX,dword ptr [ESP + 0x44]
// 005d75dc: MOV EAX,dword ptr [ESP + 0x44]
// 005d75e0: PUSH ECX
// 005d75e1: MOV EAX,dword ptr [EAX + 0x64]
// 005d75e4: CALL dword ptr [EAX + 0x74]
// 005d75e7: ADD ESP,0x8
// 005d75ea: TEST EAX,EAX
// 005d75ec: JZ 0x005d752f
//   XREF to: 005d752f (CONDITIONAL_JUMP)
// 005d75f2: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d75f5: MOV ESI,dword ptr [EAX + 0x8]
// 005d75f8: XOR EDI,EDI
// 005d75fa: TEST ESI,ESI
// 005d75fc: JBE 0x005d7624
//   XREF to: 005d7624 (CONDITIONAL_JUMP)
// 005d75fe: MOV dword ptr [ESP + 0x44],EDI
// 005d7602: MOV ESI,dword ptr [EBP + 0x1c]
//   Label: LAB_005d7602
//   XREF to: Stack[0xc] (READ)
// 005d7605: MOV EAX,dword ptr [ESP + 0x44]
// 005d7609: MOV ESI,dword ptr [ESI + 0xc]
// 005d760c: ADD ESI,EAX
// 005d760e: MOV CH,byte ptr [ESI + 0x61]
// 005d7611: TEST CH,0x80
// 005d7614: JZ 0x005d7652
//   XREF to: 005d7652 (CONDITIONAL_JUMP)
// 005d7616: ADD dword ptr [ESP + 0x44],0x68
//   Label: LAB_005d7616
// 005d761b: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005d761e: INC EDI
// 005d761f: CMP EDI,dword ptr [EAX + 0x8]
// 005d7622: JC 0x005d7602
//   XREF to: 005d7602 (CONDITIONAL_JUMP)
// 005d7624: MOV EAX,dword ptr [EBP + 0x1c]
//   Label: LAB_005d7624
//   XREF to: Stack[0xc] (READ)
// 005d7627: CMP EDI,dword ptr [EAX + 0x8]
// 005d762a: JNZ 0x005d752f
//   XREF to: 005d752f (CONDITIONAL_JUMP)
// 005d7630: MOV AH,byte ptr [EBX + 0x61]
// 005d7633: XOR ECX,ECX
// 005d7635: OR AH,0x20
// 005d7638: MOV dword ptr [ESP + 0x30],ECX
// 005d763c: MOV byte ptr [EBX + 0x61],AH
// 005d763f: JMP 0x005d752f
//   XREF to: 005d752f (UNCONDITIONAL_JUMP)
// 005d7644: FLD double ptr [ESP]
//   Label: LAB_005d7644
// 005d7647: FCHS
// 005d7649: FSTP double ptr [ESP + 0x18]
// 005d764d: JMP 0x005d75c4
//   XREF to: 005d75c4 (UNCONDITIONAL_JUMP)
// 005d7652: TEST CH,0x20
//   Label: LAB_005d7652
// 005d7655: JZ 0x005d7616
//   XREF to: 005d7616 (CONDITIONAL_JUMP)
// 005d7657: PUSH ESI
// 005d7658: MOV EAX,dword ptr [EBX + 0x64]
// 005d765b: PUSH EBX
// 005d765c: CALL dword ptr [EAX + 0x7c]
// 005d765f: ADD ESP,0x8
// 005d7662: TEST EAX,EAX
// 005d7664: JNZ 0x005d7624
//   XREF to: 005d7624 (CONDITIONAL_JUMP)
// 005d7666: PUSH ESI
// 005d7667: MOV EAX,dword ptr [EBX + 0x64]
// 005d766a: PUSH EBX
// 005d766b: CALL dword ptr [EAX + 0x78]
// 005d766e: ADD ESP,0x8
// 005d7671: TEST EAX,EAX
// 005d7673: JNZ 0x005d7624
//   XREF to: 005d7624 (CONDITIONAL_JUMP)
// 005d7675: PUSH ESI
// 005d7676: MOV EAX,dword ptr [EBX + 0x64]
// 005d7679: PUSH EBX
// 005d767a: CALL dword ptr [EAX + 0x80]
// 005d7680: ADD ESP,0x8
// 005d7683: TEST EAX,EAX
// 005d7685: JNZ 0x005d7624
//   XREF to: 005d7624 (CONDITIONAL_JUMP)
// 005d7687: JMP 0x005d7616
//   XREF to: 005d7616 (UNCONDITIONAL_JUMP)
