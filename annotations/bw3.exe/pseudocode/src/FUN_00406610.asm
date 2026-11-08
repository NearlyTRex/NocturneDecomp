; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00406610(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_005fba38
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   FUN_00403920
;   FUN_004039d0
;   FUN_0043a840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406610
        ;   Label: FUN_00406610
    PUSH ESI                            ; 00406611
    PUSH EBP                            ; 00406612
    MOV EBX,dword ptr [ESP + 0x10]      ; 00406613
    LEA ESI,[EBX + 0x18]                ; 00406617
    LEA EAX,[EBX + 0x8]                 ; 0040661a
    PUSH EAX                            ; 0040661d
    CALL FUN_00403920                   ; 0040661e
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 00406623
    TEST EAX,EAX                        ; 00406626
    JZ 0x00406690                       ; 00406628
        ;   XREF to: 00406690 (CONDITIONAL_JUMP)  ; LAB_00406690
    CMP dword ptr [0x01c6e2a0],0x0      ; 0040662a | DAT_01c6e2a0
    JNZ 0x004066ab                      ; 00406631
        ;   XREF to: 004066ab (CONDITIONAL_JUMP)  ; LAB_004066ab
    CMP dword ptr [0x005fba20],0x20     ; 00406637 | DAT_005fba20
    JNZ 0x0040669f                      ; 0040663e
        ;   XREF to: 0040669f (CONDITIONAL_JUMP)  ; LAB_0040669f
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00406640 | DAT_01c6b5cc
    PUSH EDI                            ; 0040664a
        ;   Label: LAB_0040664a
    MOV EDI,0xc3                        ; 0040664b
    MOV EBP,dword ptr [0x005fba38]      ; 00406650 | DAT_005fba38
    MOV dword ptr [0x01c6e2b4],EDI      ; 00406656 | DAT_01c6e2b4
    CMP EBP,0xff                        ; 0040665c
    JGE 0x0040666e                      ; 00406662
        ;   XREF to: 0040666e (CONDITIONAL_JUMP)  ; LAB_0040666e
    MOV dword ptr [0x01c6e2b4],0xe3     ; 00406664 | DAT_01c6e2b4
    MOV EDX,0x1                         ; 0040666e
        ;   Label: LAB_0040666e
    PUSH EBX                            ; 00406673
    MOV dword ptr [0x01c6e2b8],EDX      ; 00406674 | DAT_01c6e2b8
    CALL FUN_004039d0                   ; 0040667a
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004039d0()
    ADD ESP,0x4                         ; 0040667f
    PUSH ESI                            ; 00406682
    MOV ECX,dword ptr [EBX + 0x4]       ; 00406683
    PUSH ECX                            ; 00406686
    CALL FUN_0043a840                   ; 00406687
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0043a840()
    ADD ESP,0x8                         ; 0040668c
    POP EDI                             ; 0040668f
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406690
        ;   Label: LAB_00406690
    LEA EAX,[EBX + 0x18]                ; 00406693
    SHL ESI,0x2                         ; 00406696
    ADD EAX,ESI                         ; 00406699
    POP EBP                             ; 0040669b
    POP ESI                             ; 0040669c
    POP EBX                             ; 0040669d
    RET                                 ; 0040669e
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 0040669f | DAT_01c6b5cc
        ;   Label: LAB_0040669f
    JMP 0x0040664a                      ; 004066a9
        ;   XREF to: 0040664a (UNCONDITIONAL_JUMP)  ; LAB_0040664a
    CMP dword ptr [0x005fba20],0x20     ; 004066ab | DAT_005fba20
        ;   Label: LAB_004066ab
    JNZ 0x004066c0                      ; 004066b2
        ;   XREF to: 004066c0 (CONDITIONAL_JUMP)  ; LAB_004066c0
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 004066b4 | DAT_01c6b5cc | LAB_00560f31
    JMP 0x0040664a                      ; 004066be
        ;   XREF to: 0040664a (UNCONDITIONAL_JUMP)  ; LAB_0040664a
    MOV dword ptr [0x01c6b5cc],0x561713 ; 004066c0 | DAT_01c6b5cc | LAB_00561713
        ;   Label: LAB_004066c0
    JMP 0x0040664a                      ; 004066ca
        ;   XREF to: 0040664a (UNCONDITIONAL_JUMP)  ; LAB_0040664a

