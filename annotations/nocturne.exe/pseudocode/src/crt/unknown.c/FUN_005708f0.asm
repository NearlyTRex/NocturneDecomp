; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005708f0(WORD param_1,WORD param_2,LPFILETIME param_3)
;
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005708f0
        ;   Label: crt_unknown.c_FUN_005708f0
    MOV EAX,ESP                         ; 005708f3
    PUSH EAX                            ; 005708f5
    XOR EAX,EAX                         ; 005708f6
    MOV AX,word ptr [ESP + 0x14]        ; 005708f8
    PUSH EAX                            ; 005708fd
    XOR EAX,EAX                         ; 005708fe
    MOV AX,word ptr [ESP + 0x14]        ; 00570900
    PUSH EAX                            ; 00570905
    CALL dword ptr CS:[0x5754ac]        ; 00570906
    MOV EDX,dword ptr [ESP + 0x14]      ; 0057090d
    PUSH EDX                            ; 00570911
    LEA EAX,[ESP + 0x4]                 ; 00570912
    PUSH EAX                            ; 00570916
    CALL dword ptr CS:[0x575564]        ; 00570917
    ADD ESP,0x8                         ; 0057091e
    RET                                 ; 00570921

