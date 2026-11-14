; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMotionController * __cdecl core_motion_cpp_CMotionController_dtor_FUN_00524200(CMotionController *this_ptr,uint flags)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_005673f0 at 0056740f
;
; Referenced Globals:
;   void* PTR_core_motion.cpp_CMotionController_dtor_FUN_00524200_006042e4 = 00524200
;   WatcomTypeInfo g_CMotionControllerTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524200
        ;   Label: core_motion.cpp_CMotionController_dtor_FUN_00524200
    MOV EBX,dword ptr [ESP + 0x8]       ; 00524201
    MOV EAX,dword ptr [ESP + 0xc]       ; 00524205
    TEST AL,0x4                         ; 00524209
    JNZ 0x0052421c                      ; 0052420b
        ;   XREF to: 0052421c (CONDITIONAL_JUMP)  ; LAB_0052421c
    MOV dword ptr [EBX + 0x50],0x6042e4 ; 0052420d | PTR_core_motion.cpp_CMotionController_dtor_FUN_00524200_006042e4
    TEST AL,0x2                         ; 00524214
    JNZ 0x00524237                      ; 00524216
        ;   XREF to: 00524237 (CONDITIONAL_JUMP)  ; LAB_00524237
    MOV EAX,EBX                         ; 00524218
    POP EBX                             ; 0052421a
    RET                                 ; 0052421b
    PUSH 0x6042f0                       ; 0052421c | g_CMotionControllerTypeInfo
        ;   Label: LAB_0052421c
    PUSH EBX                            ; 00524221
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00524222
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00524227
    PUSH EAX                            ; 0052422a
    CALL crt_unknown.c_FUN_005c0336     ; 0052422b
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00524230
    MOV EAX,EBX                         ; 00524233
    POP EBX                             ; 00524235
    RET                                 ; 00524236
    PUSH EBX                            ; 00524237
        ;   Label: LAB_00524237
    CALL crt_unknown.c_FUN_005c0344     ; 00524238
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0052423d
    MOV EAX,EBX                         ; 00524240
    POP EBX                             ; 00524242
    RET                                 ; 00524243

