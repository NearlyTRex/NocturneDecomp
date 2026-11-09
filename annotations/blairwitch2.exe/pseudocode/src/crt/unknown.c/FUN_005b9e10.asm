; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005b9e10(int param_1,undefined4 param_2,int param_3,int param_4)
;
;
; XREF[1]:
;   crt_string.c_splitpath_FUN_005b9e58 at 005b9ee1
;
; Called Functions:
;   crt_unknown.c_FUN_005c0cf0
;   crt_unknown.c_FUN_005c0d30
;   crt_unknown.c_FUN_005c0d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b9e10
        ;   Label: crt_unknown.c_FUN_005b9e10
    PUSH ESI                            ; 005b9e11
    MOV ESI,dword ptr [ESP + 0xc]       ; 005b9e12
    MOV EAX,dword ptr [ESP + 0x14]      ; 005b9e16
    MOV EBX,dword ptr [ESP + 0x18]      ; 005b9e1a
    TEST ESI,ESI                        ; 005b9e1e
    JZ 0x005b9e55                       ; 005b9e20
        ;   XREF to: 005b9e55 (CONDITIONAL_JUMP)  ; LAB_005b9e55
    CMP EAX,EBX                         ; 005b9e22
    JLE 0x005b9e28                      ; 005b9e24
        ;   XREF to: 005b9e28 (CONDITIONAL_JUMP)  ; LAB_005b9e28
    MOV EAX,EBX                         ; 005b9e26
    PUSH EAX                            ; 005b9e28
        ;   Label: LAB_005b9e28
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b9e29
    PUSH EDX                            ; 005b9e2d
    CALL crt_unknown.c_FUN_005c0cf0     ; 005b9e2e
        ;   XREF to: 005c0cf0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0cf0()
    ADD ESP,0x8                         ; 005b9e33
    PUSH EAX                            ; 005b9e36
    MOV ECX,dword ptr [ESP + 0x14]      ; 005b9e37
    PUSH ECX                            ; 005b9e3b
    PUSH ESI                            ; 005b9e3c
    MOV EBX,EAX                         ; 005b9e3d
    CALL crt_unknown.c_FUN_005c0d30     ; 005b9e3f
        ;   XREF to: 005c0d30 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0d30()
    ADD ESP,0xc                         ; 005b9e44
    PUSH EBX                            ; 005b9e47
    PUSH ESI                            ; 005b9e48
    CALL crt_unknown.c_FUN_005c0d60     ; 005b9e49
        ;   XREF to: 005c0d60 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0d60()
    ADD ESP,0x8                         ; 005b9e4e
    MOV byte ptr [ESI + EAX*0x1],0x0    ; 005b9e51
    POP ESI                             ; 005b9e55
        ;   Label: LAB_005b9e55
    POP EBX                             ; 005b9e56
    RET                                 ; 005b9e57

