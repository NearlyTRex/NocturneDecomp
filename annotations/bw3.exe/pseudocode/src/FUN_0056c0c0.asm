; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c0c0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_bipHand_005d64d0
;   TerminatedCString s_bipArm_2_005d64d8
;   TerminatedCString s_bipArm_1_005d64e1
;   undefined4 DAT_02cfd798
;   undefined4 DAT_02cfd79c
;   undefined4 DAT_02cfd7a0
;   undefined4 DAT_02cfd7a4
;
; Called Functions:
;   FUN_00489110
;   FUN_00548090
;   FUN_0054e6b0
;   FUN_0054eac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056c0c0
        ;   Label: FUN_0056c0c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056c0c1
    ADD EBX,0x158                       ; 0056c0c5
    PUSH EBX                            ; 0056c0cb
    CALL FUN_0054e6b0                   ; 0056c0cc
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e6b0()
    ADD ESP,0x4                         ; 0056c0d1
    MOV EDX,dword ptr [ESP + 0x8]       ; 0056c0d4
    PUSH EDX                            ; 0056c0d8
    CALL FUN_00489110                   ; 0056c0d9
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; undefined FUN_00489110()
    ADD ESP,0x4                         ; 0056c0de
    PUSH EBX                            ; 0056c0e1
    CALL FUN_0054eac0                   ; 0056c0e2
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eac0()
    ADD ESP,0x4                         ; 0056c0e7
    PUSH 0x1                            ; 0056c0ea
    PUSH 0x5d64d0                       ; 0056c0ec | = "bipHand"
    PUSH EAX                            ; 0056c0f1
    MOV EBX,EAX                         ; 0056c0f2
    CALL FUN_00548090                   ; 0056c0f4
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 0056c0f9
    PUSH 0x1                            ; 0056c0fc
    PUSH 0x5d64d8                       ; 0056c0fe | = "bipArm 2"
    PUSH EBX                            ; 0056c103
    MOV [0x02cfd798],EAX                ; 0056c104 | DAT_02cfd798
    CALL FUN_00548090                   ; 0056c109
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 0056c10e
    PUSH 0x1                            ; 0056c111
    PUSH 0x5d64e1                       ; 0056c113 | = "bipArm 1"
    PUSH EBX                            ; 0056c118
    MOV [0x02cfd79c],EAX                ; 0056c119 | DAT_02cfd79c
    CALL FUN_00548090                   ; 0056c11e
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 0056c123
    XOR ECX,ECX                         ; 0056c126
    MOV [0x02cfd7a0],EAX                ; 0056c128 | DAT_02cfd7a0
    MOV dword ptr [0x02cfd7a4],ECX      ; 0056c12d | DAT_02cfd7a4
    POP EBX                             ; 0056c133
    RET                                 ; 0056c134

