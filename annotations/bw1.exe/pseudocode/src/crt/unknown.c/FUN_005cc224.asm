; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005cc224(int param_1,undefined1 *param_2)
;
;
; Called Functions:
;   crt_string.c__strncpy_FUN_005c20d0
;   crt_unknown.c_FUN_005cc1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cc224
        ;   Label: crt_unknown.c_FUN_005cc224
    PUSH ESI                            ; 005cc225
    MOV EBX,dword ptr [ESP + 0xc]       ; 005cc226
    MOV ESI,dword ptr [ESP + 0x10]      ; 005cc22a
    LEA EAX,[EBX + 0x16]                ; 005cc22e
    PUSH EAX                            ; 005cc231
    LEA EAX,[EBX + 0x18]                ; 005cc232
    PUSH EAX                            ; 005cc235
    LEA EAX,[ESI + 0x14]                ; 005cc236
    PUSH EAX                            ; 005cc239
    CALL crt_unknown.c_FUN_005cc1c0     ; 005cc23a
        ;   XREF to: 005cc1c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cc1c0()
    ADD ESP,0xc                         ; 005cc23f
    MOV AL,byte ptr [ESI]               ; 005cc242
    ADD ESI,0x2c                        ; 005cc244
    MOV byte ptr [EBX + 0x15],AL        ; 005cc247
    PUSH 0xff                           ; 005cc24a
    MOV EAX,dword ptr [ESI + -0xc]      ; 005cc24f
    PUSH ESI                            ; 005cc252
    MOV dword ptr [EBX + 0x1a],EAX      ; 005cc253
    LEA EAX,[EBX + 0x1e]                ; 005cc256
    PUSH EAX                            ; 005cc259
    CALL crt_string.c__strncpy_FUN_005c20d0 ; 005cc25a
        ;   XREF to: 005c20d0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005c20d0(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 005cc25f
    MOV byte ptr [EBX + 0x11d],0x0      ; 005cc262
    POP ESI                             ; 005cc269
    POP EBX                             ; 005cc26a
    RET                                 ; 005cc26b

