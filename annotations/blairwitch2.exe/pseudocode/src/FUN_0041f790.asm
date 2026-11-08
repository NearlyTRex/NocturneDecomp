; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041f790(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0041f790
        ;   Label: FUN_0041f790
    SUB ESP,0x18                        ; 0041f791
    MOV EAX,ESI                         ; 0041f794
    MOV ESI,dword ptr [ESP + 0x20]      ; 0041f796
    MOV ECX,0x6                         ; 0041f79a
    MOV EDI,ESP                         ; 0041f79f
    LEA ESI,[ESI + 0x1e608]             ; 0041f7a1
    MOVSD.REP ES:EDI,ESI                ; 0041f7a7
    MOV ECX,0x6                         ; 0041f7a9
    MOV ESI,ESP                         ; 0041f7ae
    MOV EDI,EAX                         ; 0041f7b0
    MOVSD.REP ES:EDI,ESI                ; 0041f7b2
    ADD ESP,0x18                        ; 0041f7b4
    POP EDI                             ; 0041f7b7
    RET                                 ; 0041f7b8

