; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CClothList_process_FUN_00438550(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[4]:
;   FUN_00540c20 at 00540cd1
;   FUN_00540f50 at 00541347
;   core_charactr.cpp_CCharacter_setup_FUN_00424260 at 004243de
;   core_charactr.cpp_FUN_0042a150 at 0042a1cd
;
; Called Functions:
;   core_cloth.cpp_CCloth_process_FUN_00436e50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438550
        ;   Label: core_cloth.cpp_CClothList_process_FUN_00438550
    PUSH EDI                            ; 00438551
    PUSH EBP                            ; 00438552
    MOV EDI,dword ptr [ESP + 0x10]      ; 00438553
    MOV EBP,dword ptr [ESP + 0x24]      ; 00438557
    MOV EDX,dword ptr [EDI]             ; 0043855b
    XOR EBX,EBX                         ; 0043855d
    TEST EDX,EDX                        ; 0043855f
    JLE 0x00438593                      ; 00438561
        ;   XREF to: 00438593 (CONDITIONAL_JUMP)  ; LAB_00438593
    PUSH ESI                            ; 00438563
    MOV ESI,EDI                         ; 00438564
    PUSH EBP                            ; 00438566
        ;   Label: LAB_00438566
    PUSH dword ptr [ESP + 0x28]         ; 00438567
    MOV ECX,dword ptr [ESP + 0x24]      ; 0043856b
    PUSH dword ptr [ESP + 0x28]         ; 0043856f
    PUSH ECX                            ; 00438573
    MOV EAX,dword ptr [ESP + 0x28]      ; 00438574
    PUSH EAX                            ; 00438578
    MOV EDX,dword ptr [ESI + 0x194]     ; 00438579
    PUSH EDX                            ; 0043857f
    ADD ESI,0x4                         ; 00438580
    INC EBX                             ; 00438583
    CALL core_cloth.cpp_CCloth_process_FUN_00436e50 ; 00438584
        ;   XREF to: 00436e50 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CCloth_process_FUN_00436e50()
    MOV ECX,dword ptr [EDI]             ; 00438589
    ADD ESP,0x18                        ; 0043858b
    CMP EBX,ECX                         ; 0043858e
    JL 0x00438566                       ; 00438590
        ;   XREF to: 00438566 (CONDITIONAL_JUMP)  ; LAB_00438566
    POP ESI                             ; 00438592
    POP EBP                             ; 00438593
        ;   Label: LAB_00438593
    POP EDI                             ; 00438594
    POP EBX                             ; 00438595
    RET                                 ; 00438596

