; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005aee60(WORD param_1,WORD param_2,LPFILETIME param_3)
;
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005aee60
        ;   Label: crt_unknown.c_FUN_005aee60
    MOV EAX,ESP                         ; 005aee63
    PUSH EAX                            ; 005aee65
    XOR EAX,EAX                         ; 005aee66
    MOV AX,word ptr [ESP + 0x14]        ; 005aee68
    PUSH EAX                            ; 005aee6d
    XOR EAX,EAX                         ; 005aee6e
    MOV AX,word ptr [ESP + 0x14]        ; 005aee70
    PUSH EAX                            ; 005aee75
    CALL dword ptr CS:[0x5b3538]        ; 005aee76
    MOV EDX,dword ptr [ESP + 0x14]      ; 005aee7d
    PUSH EDX                            ; 005aee81
    LEA EAX,[ESP + 0x4]                 ; 005aee82
    PUSH EAX                            ; 005aee86
    CALL dword ptr CS:[0x5b35fc]        ; 005aee87
    ADD ESP,0x8                         ; 005aee8e
    RET                                 ; 005aee91

