; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBassPlayer * __cdecl core_tbplayer_cpp_CBassPlayer_ctor_FUN_00594780(CBassPlayer *this_ptr)
;
; Parameters:
; CBassPlayer *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_tbplayer.cpp_factoryFuncBassPlayer_FUN_00594750 at 00594763
;
; Called Functions:
;   core_npc.cpp_CNPC_ctor_FUN_00531670
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00594780
        ;   Label: core_tbplayer.cpp_CBassPlayer_ctor_FUN_00594780
    MOV EDX,dword ptr [ESP + 0x8]       ; 00594781
    PUSH EDX                            ; 00594785
    CALL core_npc.cpp_CNPC_ctor_FUN_00531670 ; 00594786
        ;   XREF to: 00531670 (UNCONDITIONAL_CALL)  ; CNPC * core_npc.cpp_CNPC_ctor_FUN_00531670(CNPC * this_ptr)
    ADD ESP,0x4                         ; 0059478b
    PUSH 0x5f7657                       ; 0059478e
    MOV EBX,EAX                         ; 00594793
    ADD EAX,0x158                       ; 00594795
    PUSH EAX                            ; 0059479a
    MOV dword ptr [EAX + -0x4],0x6065c4 ; 0059479b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 005947a2
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 005947a7
    MOV EAX,EBX                         ; 005947aa
    POP EBX                             ; 005947ac
    RET                                 ; 005947ad

