; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDrummer * __cdecl core_tbplayer_cpp_CDrummer_ctor_FUN_005da2c0(CDrummer *this_ptr)
;
; Parameters:
; CDrummer *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_tbplayer.cpp_factoryFunc_FUN_005da280 at 005da29a
;
; Referenced Globals:
;   TerminatedCString s_drummer_dfm_00654bed
;   CDemonActor_vtable g_CDrummerVTable
;
; Called Functions:
;   core_npc.cpp_CNPC_ctor_FUN_005447e0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005da2c0
        ;   Label: core_tbplayer.cpp_CDrummer_ctor_FUN_005da2c0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005da2c1
    PUSH EDX                            ; 005da2c5
    CALL core_npc.cpp_CNPC_ctor_FUN_005447e0 ; 005da2c6
        ;   XREF to: 005447e0 (UNCONDITIONAL_CALL)  ; CNPC * core_npc.cpp_CNPC_ctor_FUN_005447e0(CNPC * this_ptr)
    ADD ESP,0x4                         ; 005da2cb
    PUSH 0x654bed                       ; 005da2ce | = "drummer.dfm"
    MOV EBX,EAX                         ; 005da2d3
    ADD EAX,0x158                       ; 005da2d5
    PUSH EAX                            ; 005da2da
    MOV dword ptr [EAX + -0x4],0x664074 ; 005da2db | g_CDrummerVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 005da2e2
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 005da2e7
    MOV EAX,EBX                         ; 005da2ea
    POP EBX                             ; 005da2ec
    RET                                 ; 005da2ed

