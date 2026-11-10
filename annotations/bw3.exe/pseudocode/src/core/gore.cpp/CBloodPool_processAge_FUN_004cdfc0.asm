; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodPool_processAge_FUN_004cdfc0(CBloodPool *this_ptr)
;
; Parameters:
; CBloodPool *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gore.cpp_CGore_process_FUN_004ce7e0 at 004ce85f
;
; Referenced Globals:
;   undefined4 DAT_005c46e1
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 g_CGameInstance.delta_time_float
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004cdfc0
        ;   Label: core_gore.cpp_CBloodPool_processAge_FUN_004cdfc0
    MOV EDX,dword ptr [0x005fe9dc]      ; 004cdfc4 | g_CGamePtr
    LEA EAX,[ECX + 0x1c]                ; 004cdfca
    FLD float ptr [EDX + 0x314]         ; 004cdfcd | g_CGameInstance.delta_time_float
    FADD float ptr [EAX]                ; 004cdfd3
    FSTP float ptr [EAX]                ; 004cdfd5
    FLD float ptr [ECX + 0x1c]          ; 004cdfd7
    FCOMP double ptr [0x005c46e1]       ; 004cdfda | DAT_005c46e1
    FNSTSW AX                           ; 004cdfe0
    SAHF                                ; 004cdfe2
    JA 0x004cdfe6                       ; 004cdfe3
        ;   XREF to: 004cdfe6 (CONDITIONAL_JUMP)  ; LAB_004cdfe6
    RET                                 ; 004cdfe5
    MOV dword ptr [ECX + 0x1c],0x40680000 ; 004cdfe6
        ;   Label: LAB_004cdfe6
    RET                                 ; 004cdfed

