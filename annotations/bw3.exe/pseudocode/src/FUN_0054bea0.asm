; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0054bea0(int *param_1)
;
;
; XREF[1]:
;   FUN_00550310 at 00550373
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0054bea0
        ;   Label: FUN_0054bea0
    PUSH EDI                            ; 0054bea1
    PUSH EBP                            ; 0054bea2
    MOV EDI,dword ptr [ESP + 0x10]      ; 0054bea3
    MOV ECX,dword ptr [EDI]             ; 0054bea7
    XOR ESI,ESI                         ; 0054bea9
    XOR EDX,EDX                         ; 0054beab
    TEST ECX,ECX                        ; 0054bead
    JLE 0x0054bee9                      ; 0054beaf
        ;   XREF to: 0054bee9 (CONDITIONAL_JUMP)  ; LAB_0054bee9
    PUSH EBX                            ; 0054beb1
    MOV ECX,EDI                         ; 0054beb2
    MOV EAX,dword ptr [ECX + 0x54]      ; 0054beb4
        ;   Label: LAB_0054beb4
    MOV EBX,dword ptr [ECX + 0x68]      ; 0054beb7
    ADD EBX,EAX                         ; 0054beba
    LEA EAX,[EBX*0x4 + 0x0]             ; 0054bebc
    SUB EAX,EBX                         ; 0054bec3
    SHL EAX,0x2                         ; 0054bec5
    SUB EAX,EBX                         ; 0054bec8
    ADD EAX,EAX                         ; 0054beca
    ADD EDX,EAX                         ; 0054becc
    MOV EAX,dword ptr [ECX + 0x68]      ; 0054bece
    SHL EAX,0x2                         ; 0054bed1
    MOV EBP,dword ptr [ECX + 0x2c]      ; 0054bed4
    ADD EDX,EAX                         ; 0054bed7
    IMUL EAX,EBP,0x34                   ; 0054bed9
    INC ESI                             ; 0054bedc
    ADD EDX,EAX                         ; 0054bedd
    MOV EAX,dword ptr [EDI]             ; 0054bedf
    ADD ECX,0x4                         ; 0054bee1
    CMP ESI,EAX                         ; 0054bee4
    JL 0x0054beb4                       ; 0054bee6
        ;   XREF to: 0054beb4 (CONDITIONAL_JUMP)  ; LAB_0054beb4
    POP EBX                             ; 0054bee8
    MOV EAX,EDX                         ; 0054bee9
        ;   Label: LAB_0054bee9
    POP EBP                             ; 0054beeb
    POP EDI                             ; 0054beec
    POP ESI                             ; 0054beed
    RET                                 ; 0054beee

