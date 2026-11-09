; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float sound_sndmain_cpp_FUN_00552900(float param_1,float param_2,float param_3,float param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_005d2a32
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00552900
        ;   Label: sound_sndmain.cpp_FUN_00552900
    FLD float ptr [ESP + 0x8]           ; 00552903
    FCOMP float ptr [ESP + 0x10]        ; 00552907
    FNSTSW AX                           ; 0055290b
    SAHF                                ; 0055290d
    JC 0x00552946                       ; 0055290e
        ;   XREF to: 00552946 (CONDITIONAL_JUMP)  ; LAB_00552946
    FLD float ptr [ESP + 0x8]           ; 00552910
        ;   Label: LAB_00552910
    FCOMP float ptr [ESP + 0x14]        ; 00552914
    FNSTSW AX                           ; 00552918
    SAHF                                ; 0055291a
    JBE 0x00552925                      ; 0055291b
        ;   XREF to: 00552925 (CONDITIONAL_JUMP)  ; LAB_00552925
    MOV EAX,dword ptr [ESP + 0x14]      ; 0055291d
    MOV dword ptr [ESP + 0x8],EAX       ; 00552921
    FLD float ptr [ESP + 0xc]           ; 00552925
        ;   Label: LAB_00552925
    FMUL float ptr [0x005d2a32]         ; 00552929 | DAT_005d2a32
    FCOMP float ptr [ESP + 0x8]         ; 0055292f
    FNSTSW AX                           ; 00552933
    SAHF                                ; 00552935
    JC 0x00552950                       ; 00552936
        ;   XREF to: 00552950 (CONDITIONAL_JUMP)  ; LAB_00552950
    MOV dword ptr [ESP],0x41a00000      ; 00552938
    MOV EAX,dword ptr [ESP]             ; 0055293f
    ADD ESP,0x4                         ; 00552942
    RET                                 ; 00552945
    MOV EAX,dword ptr [ESP + 0x10]      ; 00552946
        ;   Label: LAB_00552946
    MOV dword ptr [ESP + 0x8],EAX       ; 0055294a
    JMP 0x00552910                      ; 0055294e
        ;   XREF to: 00552910 (UNCONDITIONAL_JUMP)  ; LAB_00552910
    FLD float ptr [ESP + 0xc]           ; 00552950
        ;   Label: LAB_00552950
    FDIV float ptr [ESP + 0x8]          ; 00552954
    FSTP float ptr [ESP]                ; 00552958
    MOV EAX,dword ptr [ESP]             ; 0055295b
    ADD ESP,0x4                         ; 0055295e
    RET                                 ; 00552961

