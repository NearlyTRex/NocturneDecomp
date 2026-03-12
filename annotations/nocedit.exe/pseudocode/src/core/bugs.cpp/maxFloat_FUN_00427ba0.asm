; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_bugs_cpp_maxFloat_FUN_00427ba0(float a,float b)
;
; Parameters:
; float            Stack[0x4]:4   a
; float            Stack[0x8]:4   b
;
; XREF[2]:
;   core_bugs.cpp_CBugs_sampleGroundHeight_FUN_00425b70 at 00425c62
;   shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090 at 005552e5
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00427ba0
        ;   Label: core_bugs.cpp_maxFloat_FUN_00427ba0
    FLD float ptr [ESP + 0x8]           ; 00427ba3
    FCOMP float ptr [ESP + 0xc]         ; 00427ba7
    FNSTSW AX                           ; 00427bab
    SAHF                                ; 00427bad
    JBE 0x00427bbe                      ; 00427bae
        ;   XREF to: 00427bbe (CONDITIONAL_JUMP)  ; LAB_00427bbe
    MOV EAX,dword ptr [ESP + 0x8]       ; 00427bb0
    MOV dword ptr [ESP],EAX             ; 00427bb4
    MOV EAX,dword ptr [ESP]             ; 00427bb7
    ADD ESP,0x4                         ; 00427bba
    RET                                 ; 00427bbd
    MOV EAX,dword ptr [ESP + 0xc]       ; 00427bbe
        ;   Label: LAB_00427bbe
    MOV dword ptr [ESP],EAX             ; 00427bc2
    MOV EAX,dword ptr [ESP]             ; 00427bc5
    ADD ESP,0x4                         ; 00427bc8
    RET                                 ; 00427bcb

