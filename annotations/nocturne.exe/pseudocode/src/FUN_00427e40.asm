; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00427e40(int param_1,int param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[10]:
;   FUN_00412de0 at 00412fa4
;   FUN_004145f0 at 00414731
;   FUN_00427b60 at 00427be6
;   FUN_0043c360 at 0043c43d
;   FUN_004a8330 at 004a8461
;   FUN_004ab190 at 004ab2cc
;   FUN_004bca20 at 004bcb61
;   FUN_004dc2d0 at 004dc454
;   FUN_00520b60 at 00520cbb
;   FUN_00561cf0 at 00561e2c
;
; Called Functions:
;   FUN_00415b30
;   FUN_00416d40
;   FUN_00427eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427e40
        ;   Label: FUN_00427e40
    PUSH ESI                            ; 00427e41
    PUSH EBP                            ; 00427e42
    MOV EBX,dword ptr [ESP + 0x10]      ; 00427e43
    LEA ESI,[EBX + 0x23b0]              ; 00427e47
    CMP byte ptr [ESI],0x0              ; 00427e4d
    JZ 0x00427e60                       ; 00427e50
        ;   XREF to: 00427e60 (CONDITIONAL_JUMP)  ; LAB_00427e60
    MOV ESI,dword ptr [ESP + 0x14]      ; 00427e52
    CMP dword ptr [EBX + ESI*0x4 + 0x2290],0x0 ; 00427e56
    JNZ 0x00427e64                      ; 00427e5e
        ;   XREF to: 00427e64 (CONDITIONAL_JUMP)  ; LAB_00427e64
    POP EBP                             ; 00427e60
        ;   Label: LAB_00427e60
    POP ESI                             ; 00427e61
    POP EBX                             ; 00427e62
    RET                                 ; 00427e63
    PUSH EDI                            ; 00427e64
        ;   Label: LAB_00427e64
    MOV ECX,dword ptr [EBX + 0x2608]    ; 00427e65
    PUSH ECX                            ; 00427e6b
    PUSH 0x0                            ; 00427e6c
    PUSH 0x0                            ; 00427e6e
    PUSH EBX                            ; 00427e70
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00427e71
    PUSH ESI                            ; 00427e75
    LEA ESI,[EBX + 0x30]                ; 00427e76
    PUSH ESI                            ; 00427e79
    LEA ESI,[EBX + 0x20]                ; 00427e7a
    PUSH ESI                            ; 00427e7d
    CALL FUN_00415b30                   ; 00427e7e
        ;   XREF to: 00415b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00415b30()
    ADD ESP,0x1c                        ; 00427e83
    MOV EDI,dword ptr [ESP + 0x20]      ; 00427e86
    PUSH EDI                            ; 00427e8a
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00427e8b
    PUSH EBP                            ; 00427e8f
    PUSH EAX                            ; 00427e90
    PUSH EBX                            ; 00427e91
    MOV ESI,EAX                         ; 00427e92
    CALL FUN_00427eb0                   ; 00427e94
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00427eb0()
    ADD ESP,0x10                        ; 00427e99
    PUSH ESI                            ; 00427e9c
    CALL FUN_00416d40                   ; 00427e9d
        ;   XREF to: 00416d40 (UNCONDITIONAL_CALL)  ; undefined FUN_00416d40()
    ADD ESP,0x4                         ; 00427ea2
    POP EDI                             ; 00427ea5
    POP EBP                             ; 00427ea6
    POP ESI                             ; 00427ea7
    POP EBX                             ; 00427ea8
    RET                                 ; 00427ea9

