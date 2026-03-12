; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CStake_process_FUN_004c0210(CStake *this_ptr)
;
; Parameters:
; CStake *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_004c6ec0 at 004c6f57
;
; Referenced Globals:
;   CGame* g_CGamePtr = 02d81a9c
;   undefined4 g_CGameInstance.delta_time_float
;
; Called Functions:
;   core_box.cpp_CBox_processPhysics_FUN_0041e350
;
; *****************************************************************************

section .text

    MOV EAX,[0x0067b654]                ; 004c0210 | g_CGamePtr
        ;   Label: core_fire.cpp_CStake_process_FUN_004c0210
    SUB ESP,0x4                         ; 004c0215
    FLD float ptr [EAX + 0x264]         ; 004c0218 | g_CGameInstance.delta_time_float
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c021e
    ADD EAX,0x4                         ; 004c0222
    FSTP float ptr [ESP]                ; 004c0225
    PUSH EAX                            ; 004c0228
    CALL core_box.cpp_CBox_processPhysics_FUN_0041e350 ; 004c0229
        ;   XREF to: 0041e350 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_processPhysics_FUN_0041e350(CBox * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004c022e
    RET                                 ; 004c0231

