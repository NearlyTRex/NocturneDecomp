; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d60d0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005a0860
;
; Called Functions:
;   FUN_00409ea0
;   FUN_0043b5f0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d60d0
        ;   Label: FUN_004d60d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d60d1
    TEST byte ptr [ESP + 0xc],0x4       ; 004d60d5
    JNZ 0x004d610d                      ; 004d60da
        ;   XREF to: 004d610d (CONDITIONAL_JUMP)  ; LAB_004d610d
    PUSH 0x0                            ; 004d60dc
    ADD EBX,0x308                       ; 004d60de
    PUSH EBX                            ; 004d60e4
    CALL FUN_0043b5f0                   ; 004d60e5
        ;   XREF to: 0043b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b5f0()
    ADD ESP,0x8                         ; 004d60ea
    PUSH 0x1                            ; 004d60ed
    LEA EBX,[EAX + 0xfffffcf8]          ; 004d60ef
    PUSH EBX                            ; 004d60f5
    CALL FUN_00409ea0                   ; 004d60f6
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 004d60fb
    MOV DL,byte ptr [ESP + 0xc]         ; 004d60fe
    MOV EBX,EAX                         ; 004d6102
    TEST DL,0x2                         ; 004d6104
    JNZ 0x004d6128                      ; 004d6107
        ;   XREF to: 004d6128 (CONDITIONAL_JUMP)  ; LAB_004d6128
    MOV EAX,EBX                         ; 004d6109
    POP EBX                             ; 004d610b
    RET                                 ; 004d610c
    PUSH 0x5a0860                       ; 004d610d | DAT_005a0860
        ;   Label: LAB_004d610d
    PUSH EBX                            ; 004d6112
    CALL FUN_0056445f                   ; 004d6113
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 004d6118
    PUSH EAX                            ; 004d611b
    CALL FUN_00564486                   ; 004d611c
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 004d6121
    MOV EAX,EBX                         ; 004d6124
    POP EBX                             ; 004d6126
    RET                                 ; 004d6127
    PUSH EAX                            ; 004d6128
        ;   Label: LAB_004d6128
    CALL FUN_00564494                   ; 004d6129
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 004d612e
    MOV EAX,EBX                         ; 004d6131
    POP EBX                             ; 004d6133
    RET                                 ; 004d6134

