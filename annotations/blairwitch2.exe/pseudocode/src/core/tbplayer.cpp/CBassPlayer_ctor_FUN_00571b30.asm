; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBassPlayer * __cdecl core_tbplayer_cpp_CBassPlayer_ctor_FUN_00571b30(CBassPlayer *this_ptr)
;
; Parameters:
; CBassPlayer *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_tbplayer.cpp_factoryFuncBassPlayer_FUN_00571b00 at 00571b13
;
; Called Functions:
;   core_npc.cpp_CNPC_ctor_FUN_00510460
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571b30
        ;   Label: core_tbplayer.cpp_CBassPlayer_ctor_FUN_00571b30
    MOV EDX,dword ptr [ESP + 0x8]       ; 00571b31
    PUSH EDX                            ; 00571b35
    CALL core_npc.cpp_CNPC_ctor_FUN_00510460 ; 00571b36
        ;   XREF to: 00510460 (UNCONDITIONAL_CALL)  ; CNPC * core_npc.cpp_CNPC_ctor_FUN_00510460(CNPC * this_ptr)
    ADD ESP,0x4                         ; 00571b3b
    PUSH 0x5ec3e3                       ; 00571b3e
    MOV EBX,EAX                         ; 00571b43
    ADD EAX,0x2b4                       ; 00571b45
    PUSH EAX                            ; 00571b4a
    MOV dword ptr [EAX + -0x4],0x5fc744 ; 00571b4b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 00571b52
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00571b57
    MOV EAX,EBX                         ; 00571b5a
    POP EBX                             ; 00571b5c
    RET                                 ; 00571b5d

