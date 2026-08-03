; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CStake_process_FUN_004836b0(CStake *this_ptr)
;
; Parameters:
; CStake *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_0048a390 at 0048a427
;
; Referenced Globals:
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   undefined4 g_CGame_01c775ec.delta_time_float
;
; Called Functions:
;   core_box.cpp_CBox_processPhysics_FUN_0041ad10
;
; *****************************************************************************

section .text

    MOV EAX,[0x005b9354]                ; 004836b0 | g_CGame_PTR_005b9354
        ;   Label: core_fire.cpp_CStake_process_FUN_004836b0
    SUB ESP,0x4                         ; 004836b5
    FLD float ptr [EAX + 0x264]         ; 004836b8 | g_CGame_01c775ec.delta_time_float
    MOV EAX,dword ptr [ESP + 0x8]       ; 004836be
    ADD EAX,0x4                         ; 004836c2
    FSTP float ptr [ESP]                ; 004836c5
    PUSH EAX                            ; 004836c8
    CALL core_box.cpp_CBox_processPhysics_FUN_0041ad10 ; 004836c9
        ;   XREF to: 0041ad10 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_processPhysics_FUN_0041ad10(CBox * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004836ce
    RET                                 ; 004836d1

