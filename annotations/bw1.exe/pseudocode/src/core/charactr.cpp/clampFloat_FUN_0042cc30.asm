; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_charactr_cpp_clampFloat_FUN_0042cc30(float value,float limit)
;
; Parameters:
; float            Stack[0x4]:4   value
; float            Stack[0x8]:4   limit
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0042cc30
        ;   Label: core_charactr.cpp_clampFloat_FUN_0042cc30
    FLD float ptr [ESP + 0xc]           ; 0042cc33
    FLD float ptr [ESP + 0x10]          ; 0042cc37
    FCHS                                ; 0042cc3b
    FSTP float ptr [ESP]                ; 0042cc3d
    FCOMP float ptr [ESP]               ; 0042cc40
    FNSTSW AX                           ; 0042cc43
    SAHF                                ; 0042cc45
    JC 0x0042cc65                       ; 0042cc46
        ;   XREF to: 0042cc65 (CONDITIONAL_JUMP)  ; LAB_0042cc65
    FLD float ptr [ESP + 0xc]           ; 0042cc48
    FCOMP float ptr [ESP + 0x10]        ; 0042cc4c
    FNSTSW AX                           ; 0042cc50
    SAHF                                ; 0042cc52
    JBE 0x0042cc6a                      ; 0042cc53
        ;   XREF to: 0042cc6a (CONDITIONAL_JUMP)  ; LAB_0042cc6a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042cc55
    MOV dword ptr [ESP + 0x4],EAX       ; 0042cc59
        ;   Label: LAB_0042cc59
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042cc5d
    ADD ESP,0x8                         ; 0042cc61
    RET                                 ; 0042cc64
    MOV EAX,dword ptr [ESP]             ; 0042cc65
        ;   Label: LAB_0042cc65
    JMP 0x0042cc59                      ; 0042cc68
        ;   XREF to: 0042cc59 (UNCONDITIONAL_JUMP)  ; LAB_0042cc59
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042cc6a
        ;   Label: LAB_0042cc6a
    MOV dword ptr [ESP + 0x4],EAX       ; 0042cc6e
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042cc72
    ADD ESP,0x8                         ; 0042cc76
    RET                                 ; 0042cc79

