; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005cc1f0(WORD param_1,WORD param_2,LPFILETIME param_3)
;
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005cc1f0
        ;   Label: crt_unknown.c_FUN_005cc1f0
    MOV EAX,ESP                         ; 005cc1f3
    PUSH EAX                            ; 005cc1f5
    XOR EAX,EAX                         ; 005cc1f6
    MOV AX,word ptr [ESP + 0x14]        ; 005cc1f8
    PUSH EAX                            ; 005cc1fd
    XOR EAX,EAX                         ; 005cc1fe
    MOV AX,word ptr [ESP + 0x14]        ; 005cc200
    PUSH EAX                            ; 005cc205
    CALL dword ptr CS:[0x5d053c]        ; 005cc206
    MOV EDX,dword ptr [ESP + 0x14]      ; 005cc20d
    PUSH EDX                            ; 005cc211
    LEA EAX,[ESP + 0x4]                 ; 005cc212
    PUSH EAX                            ; 005cc216
    CALL dword ptr CS:[0x5d05fc]        ; 005cc217
    ADD ESP,0x8                         ; 005cc21e
    RET                                 ; 005cc221

