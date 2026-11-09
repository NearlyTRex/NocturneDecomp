; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_00544d50(CDeformableModelInstance *this_ptr,uint flags)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[59]:
;   core_armour.cpp_CArmour_dtor_FUN_0040f120 at 0040f165
;   core_armour.cpp_CEnemy_dtor_FUN_0040f1c0 at 0040f205
;   core_basicnpc.cpp_CBasicNPC_dtor_FUN_005a4980 at 005a49c5
;   core_batcreat.cpp_CBatCreature_dtor_FUN_00412a20 at 00412a65
;   core_batman.cpp_CBatman_dtor_FUN_00414620 at 00414665
;   core_beast.cpp_CBeast_dtor_FUN_00414c10 at 00414c55
;   core_belling.cpp_CBelling_dtor_FUN_005a9130 at 005a9175
;   core_biggs.cpp_CBiggs_dtor_FUN_00415410 at 00415465
;   core_boneguy.cpp_CBoneGuy_dtor_FUN_0041a3d0 at 0041a415
;   core_bride.cpp_CBride_dtor_FUN_0041ee50 at 0041ee95
;   ... and 49 more
;
; Referenced Globals:
;   WatcomTypeInfo g_CDeformableModelInstanceTypeInfo
;   void* g_CDeformableModelInstanceVTable = 00544d50
;
; Called Functions:
;   core_motion.cpp_CMotionController_dtor_FUN_00503050
;   core_skeleton.cpp_FUN_00544e30
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544d50
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00544d51
    TEST byte ptr [ESP + 0xc],0x4       ; 00544d55
    JNZ 0x00544d86                      ; 00544d5a
        ;   XREF to: 00544d86 (CONDITIONAL_JUMP)  ; LAB_00544d86
    PUSH EBX                            ; 00544d5c
    MOV dword ptr [EBX + 0x50],0x5fb9c4 ; 00544d5d | g_CDeformableModelInstanceVTable
    CALL core_skeleton.cpp_FUN_00544e30 ; 00544d64
        ;   XREF to: 00544e30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00544e30()
    ADD ESP,0x4                         ; 00544d69
    PUSH 0x1                            ; 00544d6c
    PUSH EBX                            ; 00544d6e
    CALL core_motion.cpp_CMotionController_dtor_FUN_00503050 ; 00544d6f
        ;   XREF to: 00503050 (UNCONDITIONAL_CALL)  ; CMotionController * core_motion.cpp_CMotionController_dtor_FUN_00503050(CMotionController * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00544d74
    MOV DL,byte ptr [ESP + 0xc]         ; 00544d77
    MOV EBX,EAX                         ; 00544d7b
    TEST DL,0x2                         ; 00544d7d
    JNZ 0x00544da1                      ; 00544d80
        ;   XREF to: 00544da1 (CONDITIONAL_JUMP)  ; LAB_00544da1
    MOV EAX,EBX                         ; 00544d82
    POP EBX                             ; 00544d84
    RET                                 ; 00544d85
    PUSH 0x5f6dc0                       ; 00544d86 | g_CDeformableModelInstanceTypeInfo
        ;   Label: LAB_00544d86
    PUSH EBX                            ; 00544d8b
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 00544d8c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 00544d91
    PUSH EAX                            ; 00544d94
    CALL crt_unknown.c_FUN_005b7fce     ; 00544d95
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00544d9a
    MOV EAX,EBX                         ; 00544d9d
    POP EBX                             ; 00544d9f
    RET                                 ; 00544da0
    PUSH EAX                            ; 00544da1
        ;   Label: LAB_00544da1
    CALL crt_unknown.c_FUN_005b7fdc     ; 00544da2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00544da7
    MOV EAX,EBX                         ; 00544daa
    POP EBX                             ; 00544dac
    RET                                 ; 00544dad

