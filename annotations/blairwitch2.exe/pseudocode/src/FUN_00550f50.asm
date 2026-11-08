; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00550f50(undefined4 param_1,undefined4 param_2)
;
;
; XREF[4]:
;   FUN_004e38d0 at 004e39c3
;   FUN_00576130 at 00576194
;   FUN_0057e760 at 0057e89f
;   FUN_00583f20 at 005844a9
;
; Referenced Globals:
;   undefined4 DAT_02648e80
;
; Called Functions:
;   FUN_0054d3a0
;   FUN_00551440
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00550f50
        ;   Label: FUN_00550f50
    MOV EDX,dword ptr [ESP + 0x8]       ; 00550f52
    PUSH EDX                            ; 00550f56
    CALL FUN_0054d3a0                   ; 00550f57
        ;   XREF to: 0054d3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054d3a0()
    ADD ESP,0x8                         ; 00550f5c
    TEST EAX,EAX                        ; 00550f5f
    JZ 0x00550fa2                       ; 00550f61
        ;   XREF to: 00550fa2 (CONDITIONAL_JUMP)  ; LAB_00550fa2
    PUSH EBX                            ; 00550f63
    MOV EDX,dword ptr [ESP + 0xc]       ; 00550f64
    MOV dword ptr [EAX + 0x3c],EDX      ; 00550f68
    MOV DL,byte ptr [EAX + 0x118]       ; 00550f6b
    OR DL,0x10                          ; 00550f71
    MOV ECX,dword ptr [EAX + 0x60]      ; 00550f74
    MOV byte ptr [EAX + 0x118],DL       ; 00550f77
    TEST ECX,ECX                        ; 00550f7d
    JZ 0x00550f97                       ; 00550f7f
        ;   XREF to: 00550f97 (CONDITIONAL_JUMP)  ; LAB_00550f97
    MOV EBX,dword ptr [0x02648e80]      ; 00550f81 | DAT_02648e80
    TEST EBX,EBX                        ; 00550f87
    JZ 0x00550f97                       ; 00550f89
        ;   XREF to: 00550f97 (CONDITIONAL_JUMP)  ; LAB_00550f97
    PUSH 0x10                           ; 00550f8b
    PUSH EAX                            ; 00550f8d
    MOV ECX,dword ptr [EBX]             ; 00550f8e
    PUSH EBX                            ; 00550f90
    CALL dword ptr [ECX + 0x44]         ; 00550f91
    ADD ESP,0xc                         ; 00550f94
    CALL FUN_00551440                   ; 00550f97
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined FUN_00551440()
        ;   Label: LAB_00550f97
    MOV EAX,0x1                         ; 00550f9c
    POP EBX                             ; 00550fa1
    RET                                 ; 00550fa2
        ;   Label: LAB_00550fa2

