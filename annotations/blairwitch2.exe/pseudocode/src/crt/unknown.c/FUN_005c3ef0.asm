; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c3ef0(WORD param_1,WORD param_2,LPFILETIME param_3)
;
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005c3ef0
        ;   Label: crt_unknown.c_FUN_005c3ef0
    MOV EAX,ESP                         ; 005c3ef3
    PUSH EAX                            ; 005c3ef5
    XOR EAX,EAX                         ; 005c3ef6
    MOV AX,word ptr [ESP + 0x14]        ; 005c3ef8
    PUSH EAX                            ; 005c3efd
    XOR EAX,EAX                         ; 005c3efe
    MOV AX,word ptr [ESP + 0x14]        ; 005c3f00
    PUSH EAX                            ; 005c3f05
    CALL dword ptr CS:[0x5c852c]        ; 005c3f06
    MOV EDX,dword ptr [ESP + 0x14]      ; 005c3f0d
    PUSH EDX                            ; 005c3f11
    LEA EAX,[ESP + 0x4]                 ; 005c3f12
    PUSH EAX                            ; 005c3f16
    CALL dword ptr CS:[0x5c85e8]        ; 005c3f17
    ADD ESP,0x8                         ; 005c3f1e
    RET                                 ; 005c3f21

