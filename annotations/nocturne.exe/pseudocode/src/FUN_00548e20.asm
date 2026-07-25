; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00548e20(void)
;
;
; Referenced Globals:
;   TerminatedCString s_d_00596c63
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   support_trisock.cpp_formatIPAddress_FUN_00548bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548e20
        ;   Label: FUN_00548e20
    PUSH ESI                            ; 00548e21
    MOV ESI,dword ptr [ESP + 0xc]       ; 00548e22
    MOV EBX,dword ptr [ESP + 0x10]      ; 00548e26
    PUSH EBX                            ; 00548e2a
    PUSH ESI                            ; 00548e2b
    CALL support_trisock.cpp_formatIPAddress_FUN_00548bb0 ; 00548e2c
        ;   XREF to: 00548bb0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_formatIPAddress_FUN_00548bb0()
    ADD ESP,0x8                         ; 00548e31
    MOV SI,word ptr [ESI + 0x4]         ; 00548e34
    AND ESI,0xffff                      ; 00548e38
    PUSH ESI                            ; 00548e3e
    PUSH 0x596c63                       ; 00548e3f | = ":%d"
    XOR DL,DL                           ; 00548e44
    MOV ESI,EBX                         ; 00548e46
    MOV AL,byte ptr [ESI]               ; 00548e48
        ;   Label: LAB_00548e48
    CMP AL,DL                           ; 00548e4a
    JZ 0x00548e60                       ; 00548e4c
        ;   XREF to: 00548e60 (CONDITIONAL_JUMP)  ; LAB_00548e60
    CMP AL,0x0                          ; 00548e4e
    JZ 0x00548e5e                       ; 00548e50
        ;   XREF to: 00548e5e (CONDITIONAL_JUMP)  ; LAB_00548e5e
    INC ESI                             ; 00548e52
    MOV AL,byte ptr [ESI]               ; 00548e53
    CMP AL,DL                           ; 00548e55
    JZ 0x00548e60                       ; 00548e57
        ;   XREF to: 00548e60 (CONDITIONAL_JUMP)  ; LAB_00548e60
    INC ESI                             ; 00548e59
    CMP AL,0x0                          ; 00548e5a
    JNZ 0x00548e48                      ; 00548e5c
        ;   XREF to: 00548e48 (CONDITIONAL_JUMP)  ; LAB_00548e48
    SUB ESI,ESI                         ; 00548e5e
        ;   Label: LAB_00548e5e
    PUSH ESI                            ; 00548e60
        ;   Label: LAB_00548e60
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00548e61
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 00548e66
    POP ESI                             ; 00548e69
    POP EBX                             ; 00548e6a
    RET                                 ; 00548e6b

