; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004afcd0(int param_1)
;
;
; XREF[1]:
;   FUN_004b4dd0 at 004b4ee6
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004afcd0
        ;   Label: FUN_004afcd0
    MOV EDX,dword ptr [EAX + 0x20]      ; 004afcd4
    DEC EDX                             ; 004afcd7
    MOV dword ptr [EAX + 0x20],EDX      ; 004afcd8
    TEST EDX,EDX                        ; 004afcdb
    JL 0x004afce0                       ; 004afcdd
        ;   XREF to: 004afce0 (CONDITIONAL_JUMP)  ; LAB_004afce0
    RET                                 ; 004afcdf
    MOV dword ptr [EAX + 0x20],0x0      ; 004afce0
        ;   Label: LAB_004afce0
    RET                                 ; 004afce7

