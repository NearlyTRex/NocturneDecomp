; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_barrier_cpp_CBarrier_setup_FUN_00414210(CBarrier *this_ptr)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   undefined4 g_CDemonMissionInstance.is_in_editor
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414210
        ;   Label: core_barrier.cpp_CBarrier_setup_FUN_00414210
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414211
    PUSH EBX                            ; 00414215
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 00414216
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    MOV EAX,[0x0067d550]                ; 0041421b | g_CDemonMissionPtr
    MOV EAX,dword ptr [EAX + 0x4]       ; 00414220 | g_CDemonMissionInstance.is_in_editor
    MOV dword ptr [EBX + 0xf8],0x0      ; 00414223
    ADD ESP,0x4                         ; 0041422d
    MOV dword ptr [EBX + 0xfc],EAX      ; 00414230
    POP EBX                             ; 00414236
    RET                                 ; 00414237

