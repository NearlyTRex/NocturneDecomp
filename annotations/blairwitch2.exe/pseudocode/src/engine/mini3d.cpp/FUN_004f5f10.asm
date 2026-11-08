; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f5f10(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_005b8580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5f10
        ;   Label: FUN_004f5f10
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f5f11
    SHL EAX,0x5                         ; 004f5f15
    ADD EAX,0x20                        ; 004f5f18
    PUSH EAX                            ; 004f5f1b
    CALL FUN_005b8580                   ; 004f5f1c
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8580()
    ADD ESP,0x4                         ; 004f5f21
    MOV EBX,EAX                         ; 004f5f24
    TEST EAX,EAX                        ; 004f5f26
    JZ 0x004f5f38                       ; 004f5f28
        ;   XREF to: 004f5f38 (CONDITIONAL_JUMP)  ; LAB_004f5f38
    LEA EAX,[EBX + 0x20]                ; 004f5f2a
    AND AL,0xe0                         ; 004f5f2d
    MOV BH,AL                           ; 004f5f2f
    SUB BH,BL                           ; 004f5f31
    MOV byte ptr [EAX + -0x1],BH        ; 004f5f33
    POP EBX                             ; 004f5f36
    RET                                 ; 004f5f37
    PUSH ESI                            ; 004f5f38
        ;   Label: LAB_004f5f38
    MOV ESI,dword ptr [ESP + 0xc]       ; 004f5f39
    PUSH ESI                            ; 004f5f3d
    MOV EDX,0x5dde50                    ; 004f5f3e
    MOV ECX,0xdf2                       ; 004f5f43
    PUSH 0x5dde65                       ; 004f5f48
    MOV dword ptr [0x01d046a0],EDX      ; 004f5f4d | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004f5f53 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004f5f59
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 004f5f5e
    POP ESI                             ; 004f5f61
    LEA EAX,[EBX + 0x20]                ; 004f5f62
    AND AL,0xe0                         ; 004f5f65
    MOV BH,AL                           ; 004f5f67
    SUB BH,BL                           ; 004f5f69
    MOV byte ptr [EAX + -0x1],BH        ; 004f5f6b
    POP EBX                             ; 004f5f6e
    RET                                 ; 004f5f6f

