; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00550d30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)
;
;
; XREF[1]:
;   FUN_004e6b20 at 004e6bab
;
; Called Functions:
;   FUN_0054d3a0
;   FUN_00551440
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00550d30
        ;   Label: FUN_00550d30
    MOV EDX,dword ptr [ESP + 0x8]       ; 00550d32
    PUSH EDX                            ; 00550d36
    CALL FUN_0054d3a0                   ; 00550d37
        ;   XREF to: 0054d3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054d3a0()
    ADD ESP,0x8                         ; 00550d3c
    TEST EAX,EAX                        ; 00550d3f
    JNZ 0x00550d44                      ; 00550d41
        ;   XREF to: 00550d44 (CONDITIONAL_JUMP)  ; LAB_00550d44
    RET                                 ; 00550d43
    MOV EDX,dword ptr [ESP + 0x8]       ; 00550d44
        ;   Label: LAB_00550d44
    MOV dword ptr [EAX + 0x1c],0x0      ; 00550d48
    MOV dword ptr [EAX + 0x4],EDX       ; 00550d4f
    MOV EDX,dword ptr [ESP + 0xc]       ; 00550d52
    MOV dword ptr [EAX + 0x8],EDX       ; 00550d56
    MOV EDX,dword ptr [ESP + 0x10]      ; 00550d59
    MOV dword ptr [EAX + 0xc],EDX       ; 00550d5d
    MOV EDX,dword ptr [ESP + 0x14]      ; 00550d60
    MOV dword ptr [EAX + 0x10],EDX      ; 00550d64
    MOV EDX,dword ptr [ESP + 0x18]      ; 00550d67
    MOV dword ptr [EAX + 0x14],EDX      ; 00550d6b
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00550d6e
    MOV dword ptr [EAX + 0x18],EDX      ; 00550d72
    MOV DL,byte ptr [EAX + 0x118]       ; 00550d75
    MOV dword ptr [EAX + 0x20],0x0      ; 00550d7b
    OR DL,0x2                           ; 00550d82
    MOV byte ptr [EAX + 0x118],DL       ; 00550d85
    CALL FUN_00551440                   ; 00550d8b
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined FUN_00551440()
    MOV EAX,0x1                         ; 00550d90
    RET                                 ; 00550d95

