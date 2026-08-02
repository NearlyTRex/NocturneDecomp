; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDrummer * __cdecl core_tbplayer_cpp_CDrummer_ctor_FUN_005433a0(CDrummer *this_ptr)
;
; Parameters:
; CDrummer *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_tbplayer.cpp_factoryFunc_FUN_00543370 at 00543383
;
; Referenced Globals:
;   TerminatedCString s_drummer_dfm_005964ba
;   CCharacter_full_vtable g_CDrummerVTable
;
; Called Functions:
;   core_npc.cpp_CNPC_ctor_FUN_004ee950
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005433a0
        ;   Label: core_tbplayer.cpp_CDrummer_ctor_FUN_005433a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005433a1
    PUSH EDX                            ; 005433a5
    CALL core_npc.cpp_CNPC_ctor_FUN_004ee950 ; 005433a6
        ;   XREF to: 004ee950 (UNCONDITIONAL_CALL)  ; CNPC * core_npc.cpp_CNPC_ctor_FUN_004ee950(CNPC * this_ptr)
    ADD ESP,0x4                         ; 005433ab
    PUSH 0x5964ba                       ; 005433ae | = "drummer.dfm"
    MOV EBX,EAX                         ; 005433b3
    ADD EAX,0x150                       ; 005433b5
    PUSH EAX                            ; 005433ba
    MOV dword ptr [EAX + -0x4],0x5a2d44 ; 005433bb | g_CDrummerVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 005433c2
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 005433c7
    MOV EAX,EBX                         ; 005433ca
    POP EBX                             ; 005433cc
    RET                                 ; 005433cd

