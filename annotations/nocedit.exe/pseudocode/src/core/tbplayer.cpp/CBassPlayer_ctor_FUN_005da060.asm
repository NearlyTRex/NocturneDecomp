; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBassPlayer * core_tbplayer.cpp_CBassPlayer_ctor_FUN_005da060(CBassPlayer * this_ptr)
;
; Parameters:
; CBassPlayer *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_tbplayer.cpp_factoryFunc_FUN_005da020 at 005da03a
;
; Referenced Globals:
;   TerminatedCString s_bassplayer_dfm_00654baf
;   CDemonActor_vtable g_CBassPlayerVTable
;
; Called Functions:
;   core_npc.cpp_CNPC_ctor_FUN_005447e0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005da060
        ;   Label: core_tbplayer.cpp_CBassPlayer_ctor_FUN_005da060
    MOV EDX,dword ptr [ESP + 0x8]       ; 005da061
    PUSH EDX                            ; 005da065
    CALL core_npc.cpp_CNPC_ctor_FUN_005447e0 ; 005da066
        ;   XREF to: 005447e0 (UNCONDITIONAL_CALL)  ; CNPC * core_npc.cpp_CNPC_ctor_FUN_005447e0(CNPC * this_ptr)
    ADD ESP,0x4                         ; 005da06b
    PUSH 0x654baf                       ; 005da06e | = "bassplayer.dfm"
    MOV EBX,EAX                         ; 005da073
    ADD EAX,0x158                       ; 005da075
    PUSH EAX                            ; 005da07a
    MOV dword ptr [EAX + -0x4],0x663f14 ; 005da07b | g_CBassPlayerVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 005da082
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 005da087
    MOV EAX,EBX                         ; 005da08a
    POP EBX                             ; 005da08c
    RET                                 ; 005da08d

