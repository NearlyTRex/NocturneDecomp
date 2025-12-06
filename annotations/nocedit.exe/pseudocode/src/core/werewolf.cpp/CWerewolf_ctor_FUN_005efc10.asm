; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CWerewolf * core_werewolf.cpp_CWerewolf_ctor_FUN_005efc10(CWerewolf * this_ptr)
;
; Parameters:
; CWerewolf *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_werewolf.cpp_FUN_005efbd0 at 005efbea
;
; Referenced Globals:
;   TerminatedCString s_wolfbrn_dfm_00657c53
;   undefined4 DAT_00665760
;   undefined4 PTR_FUN_00665761+3
;   undefined4 DAT_00665768
;   CDemonActor_vtable PTR_core_werewolf.cpp_FUN_00665784
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005efc10
        ;   Label: core_werewolf.cpp_CWerewolf_ctor_FUN_005efc10
    MOV EDX,dword ptr [ESP + 0x8]       ; 005efc11
    PUSH EDX                            ; 005efc15
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500 ; 005efc16 | CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
        ;   XREF to: 004a9500 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005efc1b
    PUSH 0x657c53                       ; 005efc1e | = "wolfbrn.dfm" | s_wolfbrn_dfm_00657c53 = wolfbrn.dfm
    MOV EBX,EAX                         ; 005efc23
    ADD EAX,0x158                       ; 005efc25
    PUSH EAX                            ; 005efc2a
    MOV dword ptr [EAX + -0x4],0x665784 ; 005efc2b | CDemonActor_vtable PTR_core_werewolf.cpp_FUN_00665784
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 005efc32 | void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBX + 0x2ddc],0x3f800000 ; 005efc37
    MOV dword ptr [EBX + 0x2de0],0x40000000 ; 005efc41
    MOV dword ptr [EBX + 0xbebc],0x0    ; 005efc4b
    MOV dword ptr [EBX + 0xbed4],0x1    ; 005efc55
    MOV dword ptr [EBX + 0xbee8],0x0    ; 005efc5f
    FLD float ptr [0x00665760]          ; 005efc69 | DAT_00665760
    MOV dword ptr [EBX + 0xbeec],0x40a00000 ; 005efc6f
    FLD float ptr [0x00665764]          ; 005efc79 | PTR_FUN_00665761+3
    MOV dword ptr [EBX + 0xbef0],0x0    ; 005efc7f
    FLD float ptr [0x00665768]          ; 005efc89 | undefined4 DAT_00665768
    MOV dword ptr [EBX + 0xbef4],0x0    ; 005efc8f
    ADD ESP,0x8                         ; 005efc99
    MOV dword ptr [EBX + 0xbef8],0x0    ; 005efc9c
    MOV EAX,EBX                         ; 005efca6
    FXCH ST2                            ; 005efca8
    FSTP float ptr [EBX + 0x2de4]       ; 005efcaa
    FSTP float ptr [EBX + 0x2de8]       ; 005efcb0
    FSTP float ptr [EBX + 0xbefc]       ; 005efcb6
    POP EBX                             ; 005efcbc
    RET                                 ; 005efcbd

