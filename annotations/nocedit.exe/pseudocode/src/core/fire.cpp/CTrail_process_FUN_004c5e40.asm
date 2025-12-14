; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CTrail_process_FUN_004c5e40(CTrail * this_ptr)
;
; Parameters:
; CTrail *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_004c6ec0 at 004c70ee
;
; Referenced Globals:
;   CGame* g_CGamePtr = 02d81a9c
;   undefined4 g_CGameInstance.delta_time_float
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004c5e40
        ;   Label: core_fire.cpp_CTrail_process_FUN_004c5e40
    FLD float ptr [EDX + 0x10]          ; 004c5e44
    FLDZ                                ; 004c5e47
    FCOMPP                              ; 004c5e49
    FNSTSW AX                           ; 004c5e4b
    SAHF                                ; 004c5e4d
    JNC 0x004c5e76                      ; 004c5e4e
        ;   XREF to: 004c5e76 (CONDITIONAL_JUMP)  ; LAB_004c5e76
    MOV ECX,dword ptr [0x0067b654]      ; 004c5e50 | g_CGamePtr
    LEA EAX,[EDX + 0x10]                ; 004c5e56
    FLD float ptr [ECX + 0x264]         ; 004c5e59 | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX]               ; 004c5e5f
    FSTP float ptr [EAX]                ; 004c5e61
    FLD float ptr [EDX + 0x10]          ; 004c5e63
    FLDZ                                ; 004c5e66
    FCOMPP                              ; 004c5e68
    FNSTSW AX                           ; 004c5e6a
    SAHF                                ; 004c5e6c
    JBE 0x004c5e77                      ; 004c5e6d
        ;   XREF to: 004c5e77 (CONDITIONAL_JUMP)  ; LAB_004c5e77
    MOV dword ptr [EDX + 0x10],0x0      ; 004c5e6f
    RET                                 ; 004c5e76
        ;   Label: LAB_004c5e76
    FLD float ptr [EDX + 0x18]          ; 004c5e77
        ;   Label: LAB_004c5e77
    FSUB float ptr [EDX + 0x10]         ; 004c5e7a
    FDIV float ptr [EDX + 0x18]         ; 004c5e7d
    FLD1                                ; 004c5e80
    FSUBRP                              ; 004c5e82
    FMUL float ptr [EDX + 0x1c]         ; 004c5e84
    FSTP float ptr [EDX + 0x14]         ; 004c5e87
    RET                                 ; 004c5e8a

