; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodSplat_processAge_FUN_004ecad0(CBloodSplat *this_ptr)
;
; Parameters:
; CBloodSplat *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gore.cpp_CGore_process_FUN_004ed9e0 at 004eda1d
;
; Referenced Globals:
;   double DOUBLE_0062e31a = 2
;   CGame* g_CGamePtr = 02d81a9c
;   undefined4 g_CGameInstance.delta_time_float
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004ecad0
        ;   Label: core_gore.cpp_CBloodSplat_processAge_FUN_004ecad0
    MOV EDX,dword ptr [0x0067b654]      ; 004ecad4 | g_CGamePtr
    LEA EAX,[ECX + 0x24]                ; 004ecada
    FLD float ptr [EDX + 0x264]         ; 004ecadd | g_CGameInstance.delta_time_float
    FADD float ptr [EAX]                ; 004ecae3
    FSTP float ptr [EAX]                ; 004ecae5
    FLD float ptr [ECX + 0x24]          ; 004ecae7
    FCOMP double ptr [0x0062e31a]       ; 004ecaea | DOUBLE_0062e31a
    FNSTSW AX                           ; 004ecaf0
    SAHF                                ; 004ecaf2
    JA 0x004ecaf6                       ; 004ecaf3
        ;   XREF to: 004ecaf6 (CONDITIONAL_JUMP)  ; LAB_004ecaf6
    RET                                 ; 004ecaf5
    MOV dword ptr [ECX + 0x24],0x40000000 ; 004ecaf6
        ;   Label: LAB_004ecaf6
    RET                                 ; 004ecafd

