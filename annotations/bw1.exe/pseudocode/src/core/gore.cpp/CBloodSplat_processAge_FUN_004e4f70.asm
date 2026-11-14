; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodSplat_processAge_FUN_004e4f70(CBloodSplat *this_ptr)
;
; Parameters:
; CBloodSplat *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gore.cpp_CGore_process_FUN_004e5e80 at 004e5ebd
;
; Referenced Globals:
;   undefined4 DAT_005e404d
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 g_CGameInstance.delta_time_float
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004e4f70
        ;   Label: core_gore.cpp_CBloodSplat_processAge_FUN_004e4f70
    MOV EDX,dword ptr [0x0061d95c]      ; 004e4f74 | g_CGamePtr
    LEA EAX,[ECX + 0x24]                ; 004e4f7a
    FLD float ptr [EDX + 0x294]         ; 004e4f7d | g_CGameInstance.delta_time_float
    FADD float ptr [EAX]                ; 004e4f83
    FSTP float ptr [EAX]                ; 004e4f85
    FLD float ptr [ECX + 0x24]          ; 004e4f87
    FCOMP double ptr [0x005e404d]       ; 004e4f8a | DAT_005e404d
    FNSTSW AX                           ; 004e4f90
    SAHF                                ; 004e4f92
    JA 0x004e4f96                       ; 004e4f93
        ;   XREF to: 004e4f96 (CONDITIONAL_JUMP)  ; LAB_004e4f96
    RET                                 ; 004e4f95
    MOV dword ptr [ECX + 0x24],0x40000000 ; 004e4f96
        ;   Label: LAB_004e4f96
    RET                                 ; 004e4f9d

