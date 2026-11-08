; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00449d30(int param_1,byte param_2)
;
;
; XREF[1]:
;   FUN_0041d7b0 at 0041d7c5
;
; Referenced Globals:
;   undefined1* PTR_FUN_005f5074 = 00449d30
;   undefined4 DAT_005f5090
;
; Called Functions:
;   FUN_0043b460
;   FUN_00449e70
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449d30
        ;   Label: FUN_00449d30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00449d31
    TEST byte ptr [ESP + 0xc],0x4       ; 00449d35
    JNZ 0x00449d66                      ; 00449d3a
        ;   XREF to: 00449d66 (CONDITIONAL_JUMP)  ; LAB_00449d66
    PUSH EBX                            ; 00449d3c
    MOV dword ptr [EBX + 0x3c],0x5f5074 ; 00449d3d | PTR_FUN_005f5074
    CALL FUN_00449e70                   ; 00449d44
        ;   XREF to: 00449e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00449e70()
    ADD ESP,0x4                         ; 00449d49
    PUSH 0x1                            ; 00449d4c
    PUSH EBX                            ; 00449d4e
    CALL FUN_0043b460                   ; 00449d4f
        ;   XREF to: 0043b460 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b460()
    ADD ESP,0x8                         ; 00449d54
    MOV DL,byte ptr [ESP + 0xc]         ; 00449d57
    MOV EBX,EAX                         ; 00449d5b
    TEST DL,0x2                         ; 00449d5d
    JNZ 0x00449d81                      ; 00449d60
        ;   XREF to: 00449d81 (CONDITIONAL_JUMP)  ; LAB_00449d81
    MOV EAX,EBX                         ; 00449d62
    POP EBX                             ; 00449d64
    RET                                 ; 00449d65
    PUSH 0x5f5090                       ; 00449d66 | DAT_005f5090
        ;   Label: LAB_00449d66
    PUSH EBX                            ; 00449d6b
    CALL FUN_005b7fa7                   ; 00449d6c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 00449d71
    PUSH EAX                            ; 00449d74
    CALL FUN_005b7fce                   ; 00449d75
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 00449d7a
    MOV EAX,EBX                         ; 00449d7d
    POP EBX                             ; 00449d7f
    RET                                 ; 00449d80
    PUSH EAX                            ; 00449d81
        ;   Label: LAB_00449d81
    CALL FUN_005b7fdc                   ; 00449d82
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 00449d87
    MOV EAX,EBX                         ; 00449d8a
    POP EBX                             ; 00449d8c
    RET                                 ; 00449d8d

