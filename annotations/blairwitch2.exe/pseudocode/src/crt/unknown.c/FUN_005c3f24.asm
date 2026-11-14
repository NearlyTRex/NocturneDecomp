; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c3f24(int param_1,undefined1 *param_2)
;
;
; Called Functions:
;   crt_string.c__strncpy_FUN_005b9cf0
;   crt_unknown.c_FUN_005c3ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c3f24
        ;   Label: crt_unknown.c_FUN_005c3f24
    PUSH ESI                            ; 005c3f25
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c3f26
    MOV ESI,dword ptr [ESP + 0x10]      ; 005c3f2a
    LEA EAX,[EBX + 0x16]                ; 005c3f2e
    PUSH EAX                            ; 005c3f31
    LEA EAX,[EBX + 0x18]                ; 005c3f32
    PUSH EAX                            ; 005c3f35
    LEA EAX,[ESI + 0x14]                ; 005c3f36
    PUSH EAX                            ; 005c3f39
    CALL crt_unknown.c_FUN_005c3ec0     ; 005c3f3a
        ;   XREF to: 005c3ec0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c3ec0()
    ADD ESP,0xc                         ; 005c3f3f
    MOV AL,byte ptr [ESI]               ; 005c3f42
    ADD ESI,0x2c                        ; 005c3f44
    MOV byte ptr [EBX + 0x15],AL        ; 005c3f47
    PUSH 0xff                           ; 005c3f4a
    MOV EAX,dword ptr [ESI + -0xc]      ; 005c3f4f
    PUSH ESI                            ; 005c3f52
    MOV dword ptr [EBX + 0x1a],EAX      ; 005c3f53
    LEA EAX,[EBX + 0x1e]                ; 005c3f56
    PUSH EAX                            ; 005c3f59
    CALL crt_string.c__strncpy_FUN_005b9cf0 ; 005c3f5a
        ;   XREF to: 005b9cf0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005b9cf0(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 005c3f5f
    MOV byte ptr [EBX + 0x11d],0x0      ; 005c3f62
    POP ESI                             ; 005c3f69
    POP EBX                             ; 005c3f6a
    RET                                 ; 005c3f6b

