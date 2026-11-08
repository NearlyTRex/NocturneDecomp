; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00567310(int *param_1)
;
;
; XREF[1]:
;   FUN_0056b780 at 0056b7e3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567310
        ;   Label: FUN_00567310
    PUSH ESI                            ; 00567311
    PUSH EBP                            ; 00567312
    MOV ESI,dword ptr [ESP + 0x10]      ; 00567313
    MOV EDX,dword ptr [ESI]             ; 00567317
    XOR EBX,EBX                         ; 00567319
    XOR EAX,EAX                         ; 0056731b
    TEST EDX,EDX                        ; 0056731d
    JLE 0x0056734d                      ; 0056731f
        ;   XREF to: 0056734d (CONDITIONAL_JUMP)  ; LAB_0056734d
    PUSH EDI                            ; 00567321
    MOV EDX,ESI                         ; 00567322
    MOV ECX,dword ptr [EDX + 0x54]      ; 00567324
        ;   Label: LAB_00567324
    MOV EDI,dword ptr [EDX + 0x68]      ; 00567327
    ADD ECX,EDI                         ; 0056732a
    IMUL ECX,ECX,0x16                   ; 0056732c
    ADD EAX,ECX                         ; 0056732f
    LEA ECX,[EDI*0x4 + 0x0]             ; 00567331
    MOV EBP,dword ptr [EDX + 0x2c]      ; 00567338
    ADD EAX,ECX                         ; 0056733b
    IMUL ECX,EBP,0x34                   ; 0056733d
    INC EBX                             ; 00567340
    ADD EAX,ECX                         ; 00567341
    MOV ECX,dword ptr [ESI]             ; 00567343
    ADD EDX,0x4                         ; 00567345
    CMP EBX,ECX                         ; 00567348
    JL 0x00567324                       ; 0056734a
        ;   XREF to: 00567324 (CONDITIONAL_JUMP)  ; LAB_00567324
    POP EDI                             ; 0056734c
    POP EBP                             ; 0056734d
        ;   Label: LAB_0056734d
    POP ESI                             ; 0056734e
    POP EBX                             ; 0056734f
    RET                                 ; 00567350

