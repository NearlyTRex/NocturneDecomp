; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float __cdecl sound_sndmain_cpp_calculateDistanceGain_FUN_005a56c0(float distance,float reference_distance,float min_distance,float max_distance)
;
; Parameters:
; float            Stack[0x4]:4   distance
; float            Stack[0x8]:4   reference_distance
; float            Stack[0xc]:4   min_distance
; float            Stack[0x10]:4   max_distance
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   double DOUBLE_0064fadf = 0.0500000000000000
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005a56c0
        ;   Label: sound_sndmain.cpp_calculateDistanceGain_FUN_005a56c0
    FLD float ptr [ESP + 0x8]           ; 005a56c3
    FCOMP float ptr [ESP + 0x10]        ; 005a56c7
    FNSTSW AX                           ; 005a56cb
    SAHF                                ; 005a56cd
    JC 0x005a5708                       ; 005a56ce
        ;   XREF to: 005a5708 (CONDITIONAL_JUMP)  ; LAB_005a5708
    FLD float ptr [ESP + 0x8]           ; 005a56d0
        ;   Label: LAB_005a56d0
    FCOMP float ptr [ESP + 0x14]        ; 005a56d4
    FNSTSW AX                           ; 005a56d8
    SAHF                                ; 005a56da
    JBE 0x005a56e5                      ; 005a56db
        ;   XREF to: 005a56e5 (CONDITIONAL_JUMP)  ; LAB_005a56e5
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a56dd
    MOV dword ptr [ESP + 0x8],EAX       ; 005a56e1
    FLD float ptr [ESP + 0xc]           ; 005a56e5
        ;   Label: LAB_005a56e5
    FMUL double ptr [0x0064fadf]        ; 005a56e9 | DOUBLE_0064fadf
    FLD float ptr [ESP + 0x8]           ; 005a56ef
    FCOMPP                              ; 005a56f3
    FNSTSW AX                           ; 005a56f5
    SAHF                                ; 005a56f7
    JA 0x005a5712                       ; 005a56f8
        ;   XREF to: 005a5712 (CONDITIONAL_JUMP)  ; LAB_005a5712
    MOV dword ptr [ESP],0x41a00000      ; 005a56fa
    MOV EAX,dword ptr [ESP]             ; 005a5701
    ADD ESP,0x4                         ; 005a5704
    RET                                 ; 005a5707
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a5708
        ;   Label: LAB_005a5708
    MOV dword ptr [ESP + 0x8],EAX       ; 005a570c
    JMP 0x005a56d0                      ; 005a5710
        ;   XREF to: 005a56d0 (UNCONDITIONAL_JUMP)  ; LAB_005a56d0
    FLD float ptr [ESP + 0xc]           ; 005a5712
        ;   Label: LAB_005a5712
    FDIV float ptr [ESP + 0x8]          ; 005a5716
    FSTP float ptr [ESP]                ; 005a571a
    MOV EAX,dword ptr [ESP]             ; 005a571d
    ADD ESP,0x4                         ; 005a5720
    RET                                 ; 005a5723

