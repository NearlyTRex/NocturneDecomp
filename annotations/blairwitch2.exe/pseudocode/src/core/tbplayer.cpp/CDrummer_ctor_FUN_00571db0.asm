; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDrummer * __cdecl core_tbplayer_cpp_CDrummer_ctor_FUN_00571db0(CDrummer *this_ptr)
;
; Parameters:
; CDrummer *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_tbplayer.cpp_factoryFuncDrummer_FUN_00571d80 at 00571d93
;
; Called Functions:
;   core_npc.cpp_CNPC_ctor_FUN_00510460
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571db0
        ;   Label: core_tbplayer.cpp_CDrummer_ctor_FUN_00571db0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00571db1
    PUSH EDX                            ; 00571db5
    CALL core_npc.cpp_CNPC_ctor_FUN_00510460 ; 00571db6
        ;   XREF to: 00510460 (UNCONDITIONAL_CALL)  ; CNPC * core_npc.cpp_CNPC_ctor_FUN_00510460(CNPC * this_ptr)
    ADD ESP,0x4                         ; 00571dbb
    PUSH 0x5ec40c                       ; 00571dbe
    MOV EBX,EAX                         ; 00571dc3
    ADD EAX,0x2b4                       ; 00571dc5
    PUSH EAX                            ; 00571dca
    MOV dword ptr [EAX + -0x4],0x5fc894 ; 00571dcb
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 00571dd2
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00571dd7
    MOV EAX,EBX                         ; 00571dda
    POP EBX                             ; 00571ddc
    RET                                 ; 00571ddd

