; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodSplat_processAge_FUN_004af130(CBloodSplat *this_ptr)
;
; Parameters:
; CBloodSplat *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gore.cpp_CGore_process_FUN_004b0030 at 004b006d
;
; Referenced Globals:
;   double DOUBLE_005850b8 = 2
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c77850
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004af130
        ;   Label: core_gore.cpp_CBloodSplat_processAge_FUN_004af130
    MOV EDX,dword ptr [0x005b9354]      ; 004af134 | DAT_005b9354
    LEA EAX,[ECX + 0x24]                ; 004af13a
    FLD float ptr [EDX + 0x264]         ; 004af13d | DAT_01c77850
    FADD float ptr [EAX]                ; 004af143
    FSTP float ptr [EAX]                ; 004af145
    FLD float ptr [ECX + 0x24]          ; 004af147
    FCOMP double ptr [0x005850b8]       ; 004af14a | DOUBLE_005850b8
    FNSTSW AX                           ; 004af150
    SAHF                                ; 004af152
    JA 0x004af156                       ; 004af153
        ;   XREF to: 004af156 (CONDITIONAL_JUMP)  ; LAB_004af156
    RET                                 ; 004af155
    MOV dword ptr [ECX + 0x24],0x40000000 ; 004af156
        ;   Label: LAB_004af156
    RET                                 ; 004af15d

