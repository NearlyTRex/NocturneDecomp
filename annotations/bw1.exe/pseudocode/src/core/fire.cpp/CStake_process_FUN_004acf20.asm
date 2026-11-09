; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CStake_process_FUN_004acf20(CStake *this_ptr)
;
; Parameters:
; CStake *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_fire.cpp_FUN_004b4dd0 at 004b4e8f
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 g_CGameInstance.field660_0x294
;
; Called Functions:
;   core_box.cpp_CBox_processPhysics_FUN_0041e130
;
; *****************************************************************************

section .text

    MOV EAX,[0x0061d95c]                ; 004acf20 | g_CGamePtr
        ;   Label: core_fire.cpp_CStake_process_FUN_004acf20
    SUB ESP,0x4                         ; 004acf25
    FLD float ptr [EAX + 0x294]         ; 004acf28 | g_CGameInstance.field660_0x294
    MOV EAX,dword ptr [ESP + 0x8]       ; 004acf2e
    ADD EAX,0x4                         ; 004acf32
    FSTP float ptr [ESP]                ; 004acf35
    PUSH EAX                            ; 004acf38
    CALL core_box.cpp_CBox_processPhysics_FUN_0041e130 ; 004acf39
        ;   XREF to: 0041e130 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_processPhysics_FUN_0041e130(CBox * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004acf3e
    RET                                 ; 004acf41

