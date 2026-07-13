; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 __ms_p5_test_fdiv(void)
;
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[1]:
;   FUN_10006da0 at 10006daf
;
; *****************************************************************************

section .text

    SUB ESP,0x18                        ; 10006d50
        ;   Label: __ms_p5_test_fdiv
    MOV dword ptr [ESP + 0x8],0x80000000 ; 10006d53
    MOV dword ptr [ESP + 0xc],0x4147ffff ; 10006d5b
    MOV dword ptr [ESP],0xc0000000      ; 10006d63
    MOV dword ptr [ESP + 0x4],0x4150017e ; 10006d6b
    FLD double ptr [ESP]                ; 10006d73
    FDIV double ptr [ESP + 0x8]         ; 10006d77
    FMUL double ptr [ESP + 0x8]         ; 10006d7b
    FSUBR double ptr [ESP]              ; 10006d7f
    FSTP double ptr [ESP + 0x10]        ; 10006d83
    FLD1                                ; 10006d87
    FCOMP double ptr [ESP + 0x10]       ; 10006d89
    FNSTSW AX                           ; 10006d8d
    TEST AH,0x1                         ; 10006d8f
    MOV EAX,0x1                         ; 10006d92
    JNZ 0x10006d9b                      ; 10006d97
        ;   XREF to: 10006d9b (CONDITIONAL_JUMP)  ; LAB_10006d9b
    XOR EAX,EAX                         ; 10006d99
    ADD ESP,0x18                        ; 10006d9b
        ;   Label: LAB_10006d9b
    RET                                 ; 10006d9e

