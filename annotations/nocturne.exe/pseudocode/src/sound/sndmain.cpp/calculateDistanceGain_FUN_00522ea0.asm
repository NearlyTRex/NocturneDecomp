; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl sound_sndmain_cpp_calculateDistanceGain_FUN_00522ea0(float distance,float reference_distance,float min_distance,float max_distance)
;
; Parameters:
; float            Stack[0x4]:4   distance
; float            Stack[0x8]:4   reference_distance
; float            Stack[0xc]:4   min_distance
; float            Stack[0x10]:4   max_distance
;
; Referenced Globals:
;   double DOUBLE_005927ee = 0.0500000000000000
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00522ea0
        ;   Label: sound_sndmain.cpp_calculateDistanceGain_FUN_00522ea0
    FLD float ptr [ESP + 0x8]           ; 00522ea3
    FCOMP float ptr [ESP + 0x10]        ; 00522ea7
    FNSTSW AX                           ; 00522eab
    SAHF                                ; 00522ead
    JC 0x00522ee8                       ; 00522eae
        ;   XREF to: 00522ee8 (CONDITIONAL_JUMP)  ; LAB_00522ee8
    FLD float ptr [ESP + 0x8]           ; 00522eb0
        ;   Label: LAB_00522eb0
    FCOMP float ptr [ESP + 0x14]        ; 00522eb4
    FNSTSW AX                           ; 00522eb8
    SAHF                                ; 00522eba
    JBE 0x00522ec5                      ; 00522ebb
        ;   XREF to: 00522ec5 (CONDITIONAL_JUMP)  ; LAB_00522ec5
    MOV EAX,dword ptr [ESP + 0x14]      ; 00522ebd
    MOV dword ptr [ESP + 0x8],EAX       ; 00522ec1
    FLD float ptr [ESP + 0xc]           ; 00522ec5
        ;   Label: LAB_00522ec5
    FMUL double ptr [0x005927ee]        ; 00522ec9 | DOUBLE_005927ee
    FLD float ptr [ESP + 0x8]           ; 00522ecf
    FCOMPP                              ; 00522ed3
    FNSTSW AX                           ; 00522ed5
    SAHF                                ; 00522ed7
    JA 0x00522ef2                       ; 00522ed8
        ;   XREF to: 00522ef2 (CONDITIONAL_JUMP)  ; LAB_00522ef2
    MOV dword ptr [ESP],0x41a00000      ; 00522eda
    MOV EAX,dword ptr [ESP]             ; 00522ee1
    ADD ESP,0x4                         ; 00522ee4
    RET                                 ; 00522ee7
    MOV EAX,dword ptr [ESP + 0x10]      ; 00522ee8
        ;   Label: LAB_00522ee8
    MOV dword ptr [ESP + 0x8],EAX       ; 00522eec
    JMP 0x00522eb0                      ; 00522ef0
        ;   XREF to: 00522eb0 (UNCONDITIONAL_JUMP)  ; LAB_00522eb0
    FLD float ptr [ESP + 0xc]           ; 00522ef2
        ;   Label: LAB_00522ef2
    FDIV float ptr [ESP + 0x8]          ; 00522ef6
    FSTP float ptr [ESP]                ; 00522efa
    MOV EAX,dword ptr [ESP]             ; 00522efd
    ADD ESP,0x4                         ; 00522f00
    RET                                 ; 00522f03

