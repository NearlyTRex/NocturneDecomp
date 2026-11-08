; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00551da0(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_00551dc0 at 005523bd
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00551da0
        ;   Label: FUN_00551da0
    MOV EAX,dword ptr [ESP + 0x4]       ; 00551da4
    TEST EDX,EDX                        ; 00551da8
    JLE 0x00551dbf                      ; 00551daa
        ;   XREF to: 00551dbf (CONDITIONAL_JUMP)  ; LAB_00551dbf
    PUSH EBX                            ; 00551dac
    MOV BL,byte ptr [EAX + 0x1]         ; 00551dad
        ;   Label: LAB_00551dad
    ADD EAX,0x2                         ; 00551db0
    XOR BL,0x80                         ; 00551db3
    DEC EDX                             ; 00551db6
    MOV byte ptr [EAX + -0x1],BL        ; 00551db7
    TEST EDX,EDX                        ; 00551dba
    JG 0x00551dad                       ; 00551dbc
        ;   XREF to: 00551dad (CONDITIONAL_JUMP)  ; LAB_00551dad
    POP EBX                             ; 00551dbe
    RET                                 ; 00551dbf
        ;   Label: LAB_00551dbf

