; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004cb8f0(undefined4 param_1,int param_2)
;
;
; XREF[4]:
;   FUN_004cb010 at 004cb26f
;   FUN_004cb2d0 at 004cb53c
;   FUN_004cb5a0 at 004cb5b1
;   FUN_004cba40 at 004cba9b
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004cb8f0
        ;   Label: FUN_004cb8f0
    DEC EAX                             ; 004cb8f4
    TEST EAX,EAX                        ; 004cb8f5
    JL 0x004cb8fa                       ; 004cb8f7
        ;   XREF to: 004cb8fa (CONDITIONAL_JUMP)  ; LAB_004cb8fa
    RET                                 ; 004cb8f9
    MOV EAX,0xb                         ; 004cb8fa
        ;   Label: LAB_004cb8fa
    RET                                 ; 004cb8ff

