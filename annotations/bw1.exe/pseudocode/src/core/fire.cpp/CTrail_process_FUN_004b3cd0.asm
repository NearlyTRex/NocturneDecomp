; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CTrail_process_FUN_004b3cd0(CTrail *this_ptr)
;
; Parameters:
; CTrail *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_004b4dd0 at 004b506e
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 g_CGameInstance.delta_time_float
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b3cd0
        ;   Label: core_fire.cpp_CTrail_process_FUN_004b3cd0
    FLD float ptr [EDX + 0x10]          ; 004b3cd4
    FLDZ                                ; 004b3cd7
    FCOMPP                              ; 004b3cd9
    FNSTSW AX                           ; 004b3cdb
    SAHF                                ; 004b3cdd
    JNC 0x004b3d06                      ; 004b3cde
        ;   XREF to: 004b3d06 (CONDITIONAL_JUMP)  ; LAB_004b3d06
    MOV ECX,dword ptr [0x0061d95c]      ; 004b3ce0 | g_CGamePtr
    LEA EAX,[EDX + 0x10]                ; 004b3ce6
    FLD float ptr [ECX + 0x294]         ; 004b3ce9 | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX]               ; 004b3cef
    FSTP float ptr [EAX]                ; 004b3cf1
    FLD float ptr [EDX + 0x10]          ; 004b3cf3
    FLDZ                                ; 004b3cf6
    FCOMPP                              ; 004b3cf8
    FNSTSW AX                           ; 004b3cfa
    SAHF                                ; 004b3cfc
    JBE 0x004b3d07                      ; 004b3cfd
        ;   XREF to: 004b3d07 (CONDITIONAL_JUMP)  ; LAB_004b3d07
    MOV dword ptr [EDX + 0x10],0x0      ; 004b3cff
    RET                                 ; 004b3d06
        ;   Label: LAB_004b3d06
    FLD float ptr [EDX + 0x18]          ; 004b3d07
        ;   Label: LAB_004b3d07
    FSUB float ptr [EDX + 0x10]         ; 004b3d0a
    FDIV float ptr [EDX + 0x18]         ; 004b3d0d
    FLD1                                ; 004b3d10
    FSUBRP                              ; 004b3d12
    FMUL float ptr [EDX + 0x1c]         ; 004b3d14
    FSTP float ptr [EDX + 0x14]         ; 004b3d17
    RET                                 ; 004b3d1a

