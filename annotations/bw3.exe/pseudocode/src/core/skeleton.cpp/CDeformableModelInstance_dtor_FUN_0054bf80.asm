; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDeformableModelInstance * __cdecl core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80(CDeformableModelInstance *this_ptr,uint flags)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[66]:
;   core_asgaya.cpp_CAsgaya_dtor_FUN_005a1b50 at 005a1ba5
;   core_baal.cpp_CBaal_dtor_FUN_00597d00 at 00597d35
;   core_bird.cpp_CBird_dtor_FUN_004101f0 at 00410235
;   core_boneguy.cpp_CBaalSkel_dtor_FUN_0041a8c0 at 0041a8f5
;   core_boneguy.cpp_CBoneGuy_dtor_FUN_0041ab00 at 0041ab35
;   core_boneguy.cpp_CSkeletonDemon_dtor_FUN_0041a950 at 0041a985
;   core_boneguy.cpp_CSkeletonForest_dtor_FUN_0041aa70 at 0041aaa5
;   core_boneguy.cpp_CSkeletonIndian_dtor_FUN_0041a9e0 at 0041aa15
;   core_bugs.cpp_CBugs_dtor_FUN_00424330 at 00424365
;   core_carved.cpp_CCarved_dtor_FUN_004291f0 at 00429225
;   ... and 56 more
;
; Referenced Globals:
;   WatcomTypeInfo g_CDeformableModelInstanceTypeInfo
;   void* g_CDeformableModelInstanceVTable = 0054bf80
;
; Called Functions:
;   core_motion.cpp_CMotionController_dtor_FUN_004fbb00
;   core_skeleton.cpp_CDeformableModelInstance_free_FUN_0054c060
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054bf80
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0054bf80
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054bf81
    TEST byte ptr [ESP + 0xc],0x4       ; 0054bf85
    JNZ 0x0054bfb6                      ; 0054bf8a
        ;   XREF to: 0054bfb6 (CONDITIONAL_JUMP)  ; LAB_0054bfb6
    PUSH EBX                            ; 0054bf8c
    MOV dword ptr [EBX + 0x50],0x5e4784 ; 0054bf8d | g_CDeformableModelInstanceVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_free_FUN_0054c060 ; 0054bf94
        ;   XREF to: 0054c060 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_free_FUN_0054c060(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054bf99
    PUSH 0x1                            ; 0054bf9c
    PUSH EBX                            ; 0054bf9e
    CALL core_motion.cpp_CMotionController_dtor_FUN_004fbb00 ; 0054bf9f
        ;   XREF to: 004fbb00 (UNCONDITIONAL_CALL)  ; CMotionController * core_motion.cpp_CMotionController_dtor_FUN_004fbb00(CMotionController * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0054bfa4
    MOV DL,byte ptr [ESP + 0xc]         ; 0054bfa7
    MOV EBX,EAX                         ; 0054bfab
    TEST DL,0x2                         ; 0054bfad
    JNZ 0x0054bfd1                      ; 0054bfb0
        ;   XREF to: 0054bfd1 (CONDITIONAL_JUMP)  ; LAB_0054bfd1
    MOV EAX,EBX                         ; 0054bfb2
    POP EBX                             ; 0054bfb4
    RET                                 ; 0054bfb5
    PUSH 0x5dfcf0                       ; 0054bfb6 | g_CDeformableModelInstanceTypeInfo
        ;   Label: LAB_0054bfb6
    PUSH EBX                            ; 0054bfbb
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0054bfbc
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0054bfc1
    PUSH EAX                            ; 0054bfc4
    CALL crt_unknown.c_FUN_005a30b6     ; 0054bfc5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0054bfca
    MOV EAX,EBX                         ; 0054bfcd
    POP EBX                             ; 0054bfcf
    RET                                 ; 0054bfd0
    PUSH EAX                            ; 0054bfd1
        ;   Label: LAB_0054bfd1
    CALL crt_unknown.c_FUN_005a30c4     ; 0054bfd2
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0054bfd7
    MOV EAX,EBX                         ; 0054bfda
    POP EBX                             ; 0054bfdc
    RET                                 ; 0054bfdd

