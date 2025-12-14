; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CLightningBolt_process_FUN_004c56e0(CLightningBolt * this_ptr)
;
; Parameters:
; CLightningBolt * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_004c6ec0 at 004c70d3
;
; Referenced Globals:
;   CGame* g_CGamePtr = 02d81a9c
;   undefined4 g_CGameInstance.delta_time_float
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004c56e0
        ;   Label: core_fire.cpp_CLightningBolt_process_FUN_004c56e0
    FLD float ptr [EDX + 0x14]          ; 004c56e4
    FLDZ                                ; 004c56e7
    FCOMPP                              ; 004c56e9
    FNSTSW AX                           ; 004c56eb
    SAHF                                ; 004c56ed
    JNC 0x004c570f                      ; 004c56ee
        ;   XREF to: 004c570f (CONDITIONAL_JUMP)  ; LAB_004c570f
    MOV ECX,dword ptr [0x0067b654]      ; 004c56f0 | g_CGamePtr
    LEA EAX,[EDX + 0x14]                ; 004c56f6
    FLD float ptr [ECX + 0x264]         ; 004c56f9 | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX]               ; 004c56ff
    FSTP float ptr [EAX]                ; 004c5701
    FLD float ptr [EDX + 0x14]          ; 004c5703
    FLDZ                                ; 004c5706
    FCOMPP                              ; 004c5708
    FNSTSW AX                           ; 004c570a
    SAHF                                ; 004c570c
    JA 0x004c5710                       ; 004c570d
        ;   XREF to: 004c5710 (CONDITIONAL_JUMP)  ; LAB_004c5710
    RET                                 ; 004c570f
        ;   Label: LAB_004c570f
    MOV dword ptr [EDX + 0x14],0x0      ; 004c5710
        ;   Label: LAB_004c5710
    RET                                 ; 004c5717

