; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl sound_sndmain_cpp_calculateDistanceGain_FUN_0054cd8e(float distance,float reference_distance,float min_distance,float max_distance)
;
; Parameters:
; float            Stack[0x4]:4   distance
; float            Stack[0x8]:4   reference_distance
; float            Stack[0xc]:4   min_distance
; float            Stack[0x10]:4   max_distance
;
; Referenced Globals:
;   undefined4 DAT_005e7f4e
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0054cd8e
        ;   Label: sound_sndmain.cpp_calculateDistanceGain_FUN_0054cd8e
    SUB ESP,0x4                         ; 0054cd90
    FLD float ptr [ESP + 0x8]           ; 0054cd93
    FCOMP float ptr [ESP + 0x10]        ; 0054cd97
    FNSTSW AX                           ; 0054cd9b
    SAHF                                ; 0054cd9d
    JC 0x0054cdd6                       ; 0054cd9e
        ;   XREF to: 0054cdd6 (CONDITIONAL_JUMP)  ; LAB_0054cdd6
    FLD float ptr [ESP + 0x8]           ; 0054cda0
        ;   Label: LAB_0054cda0
    FCOMP float ptr [ESP + 0x14]        ; 0054cda4
    FNSTSW AX                           ; 0054cda8
    SAHF                                ; 0054cdaa
    JBE 0x0054cdb5                      ; 0054cdab
        ;   XREF to: 0054cdb5 (CONDITIONAL_JUMP)  ; LAB_0054cdb5
    MOV EAX,dword ptr [ESP + 0x14]      ; 0054cdad
    MOV dword ptr [ESP + 0x8],EAX       ; 0054cdb1
    FLD float ptr [ESP + 0xc]           ; 0054cdb5
        ;   Label: LAB_0054cdb5
    FMUL float ptr [0x005e7f4e]         ; 0054cdb9 | DAT_005e7f4e
    FCOMP float ptr [ESP + 0x8]         ; 0054cdbf
    FNSTSW AX                           ; 0054cdc3
    SAHF                                ; 0054cdc5
    JC 0x0054cde0                       ; 0054cdc6
        ;   XREF to: 0054cde0 (CONDITIONAL_JUMP)  ; LAB_0054cde0
    MOV dword ptr [ESP],0x41a00000      ; 0054cdc8
    MOV EAX,dword ptr [ESP]             ; 0054cdcf
    ADD ESP,0x4                         ; 0054cdd2
    RET                                 ; 0054cdd5
    MOV EAX,dword ptr [ESP + 0x10]      ; 0054cdd6
        ;   Label: LAB_0054cdd6
    MOV dword ptr [ESP + 0x8],EAX       ; 0054cdda
    JMP 0x0054cda0                      ; 0054cdde
        ;   XREF to: 0054cda0 (UNCONDITIONAL_JUMP)  ; LAB_0054cda0
    FLD float ptr [ESP + 0xc]           ; 0054cde0
        ;   Label: LAB_0054cde0
    FDIV float ptr [ESP + 0x8]          ; 0054cde4
    FSTP float ptr [ESP]                ; 0054cde8
    MOV EAX,dword ptr [ESP]             ; 0054cdeb
    ADD ESP,0x4                         ; 0054cdee
    RET                                 ; 0054cdf1

