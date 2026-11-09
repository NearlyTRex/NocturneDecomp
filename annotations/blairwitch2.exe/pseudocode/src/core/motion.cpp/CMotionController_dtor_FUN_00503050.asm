; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMotionController * __cdecl core_motion_cpp_CMotionController_dtor_FUN_00503050(CMotionController *this_ptr,uint flags)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_00544d50 at 00544d6f
;
; Referenced Globals:
;   void* PTR_core_motion.cpp_CMotionController_dtor_FUN_00503050_005fa5e4 = 00503050
;   WatcomTypeInfo g_CMotionControllerTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503050
        ;   Label: core_motion.cpp_CMotionController_dtor_FUN_00503050
    MOV EBX,dword ptr [ESP + 0x8]       ; 00503051
    MOV EAX,dword ptr [ESP + 0xc]       ; 00503055
    TEST AL,0x4                         ; 00503059
    JNZ 0x0050306c                      ; 0050305b
        ;   XREF to: 0050306c (CONDITIONAL_JUMP)  ; LAB_0050306c
    MOV dword ptr [EBX + 0x50],0x5fa5e4 ; 0050305d | PTR_core_motion.cpp_CMotionController_dtor_FUN_00503050_005fa5e4
    TEST AL,0x2                         ; 00503064
    JNZ 0x00503087                      ; 00503066
        ;   XREF to: 00503087 (CONDITIONAL_JUMP)  ; LAB_00503087
    MOV EAX,EBX                         ; 00503068
    POP EBX                             ; 0050306a
    RET                                 ; 0050306b
    PUSH 0x5fa5f0                       ; 0050306c | g_CMotionControllerTypeInfo
        ;   Label: LAB_0050306c
    PUSH EBX                            ; 00503071
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 00503072
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 00503077
    PUSH EAX                            ; 0050307a
    CALL crt_unknown.c_FUN_005b7fce     ; 0050307b
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00503080
    MOV EAX,EBX                         ; 00503083
    POP EBX                             ; 00503085
    RET                                 ; 00503086
    PUSH EBX                            ; 00503087
        ;   Label: LAB_00503087
    CALL crt_unknown.c_FUN_005b7fdc     ; 00503088
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0050308d
    MOV EAX,EBX                         ; 00503090
    POP EBX                             ; 00503092
    RET                                 ; 00503093

