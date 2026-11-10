; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CStake_process_FUN_00497e80(CStake *this_ptr)
;
; Parameters:
; CStake *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_fire.cpp_FUN_004a1760 at 004a181f
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 g_CGameInstance.delta_time_float
;
; Called Functions:
;   core_box.cpp_CBox_processPhysics_FUN_0041b470
;
; *****************************************************************************

section .text

    MOV EAX,[0x005fe9dc]                ; 00497e80 | g_CGamePtr
        ;   Label: core_fire.cpp_CStake_process_FUN_00497e80
    SUB ESP,0x4                         ; 00497e85
    FLD float ptr [EAX + 0x314]         ; 00497e88 | g_CGameInstance.delta_time_float
    MOV EAX,dword ptr [ESP + 0x8]       ; 00497e8e
    ADD EAX,0x4                         ; 00497e92
    FSTP float ptr [ESP]                ; 00497e95
    PUSH EAX                            ; 00497e98
    CALL core_box.cpp_CBox_processPhysics_FUN_0041b470 ; 00497e99
        ;   XREF to: 0041b470 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_processPhysics_FUN_0041b470(CBox * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00497e9e
    RET                                 ; 00497ea1

