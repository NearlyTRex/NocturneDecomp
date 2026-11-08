; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_005a1990(int param_1)
;
;
; XREF[2]:
;   FUN_00442e10 at 00442e5b
;   FUN_00453610 at 004536e5
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a1990
        ;   Label: FUN_005a1990
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a1994
    TEST EDX,EDX                        ; 005a1997
    JNZ 0x005a199e                      ; 005a1999
        ;   XREF to: 005a199e (CONDITIONAL_JUMP)  ; LAB_005a199e
    XOR EAX,EAX                         ; 005a199b
    RET                                 ; 005a199d
    TEST byte ptr [EDX + 0xc],0x20      ; 005a199e
        ;   Label: LAB_005a199e
    SETZ AL                             ; 005a19a2
    AND EAX,0xff                        ; 005a19a5
    RET                                 ; 005a19aa

