; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_charactr_cpp_clampFloat_FUN_0042b920(float value,float limit)
;
; Parameters:
; float            Stack[0x4]:4   value
; float            Stack[0x8]:4   limit
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0042b920
        ;   Label: core_charactr.cpp_clampFloat_FUN_0042b920
    FLD float ptr [ESP + 0xc]           ; 0042b923
    FLD float ptr [ESP + 0x10]          ; 0042b927
    FCHS                                ; 0042b92b
    FSTP float ptr [ESP]                ; 0042b92d
    FCOMP float ptr [ESP]               ; 0042b930
    FNSTSW AX                           ; 0042b933
    SAHF                                ; 0042b935
    JC 0x0042b955                       ; 0042b936
        ;   XREF to: 0042b955 (CONDITIONAL_JUMP)  ; LAB_0042b955
    FLD float ptr [ESP + 0xc]           ; 0042b938
    FCOMP float ptr [ESP + 0x10]        ; 0042b93c
    FNSTSW AX                           ; 0042b940
    SAHF                                ; 0042b942
    JBE 0x0042b95a                      ; 0042b943
        ;   XREF to: 0042b95a (CONDITIONAL_JUMP)  ; LAB_0042b95a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042b945
    MOV dword ptr [ESP + 0x4],EAX       ; 0042b949
        ;   Label: LAB_0042b949
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042b94d
    ADD ESP,0x8                         ; 0042b951
    RET                                 ; 0042b954
    MOV EAX,dword ptr [ESP]             ; 0042b955
        ;   Label: LAB_0042b955
    JMP 0x0042b949                      ; 0042b958
        ;   XREF to: 0042b949 (UNCONDITIONAL_JUMP)  ; LAB_0042b949
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042b95a
        ;   Label: LAB_0042b95a
    MOV dword ptr [ESP + 0x4],EAX       ; 0042b95e
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042b962
    ADD ESP,0x8                         ; 0042b966
    RET                                 ; 0042b969

