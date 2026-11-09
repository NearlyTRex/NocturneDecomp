; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_charactr_cpp_FUN_00425a70(int param_1,int param_2)
;
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_FUN_005430e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00425a70
        ;   Label: core_charactr.cpp_FUN_00425a70
    MOV EAX,dword ptr [ESP + 0x4]       ; 00425a74
    PUSH EDX                            ; 00425a78
    ADD EAX,0x2b4                       ; 00425a79
    PUSH EAX                            ; 00425a7e
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 00425a7f
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00425a84
    PUSH EAX                            ; 00425a87
    CALL core_skeleton.cpp_FUN_005430e0 ; 00425a88
        ;   XREF to: 005430e0 (UNCONDITIONAL_CALL)  ; SPart * core_skeleton.cpp_FUN_005430e0(CDeformableModel * this_ptr, int part_index)
    ADD ESP,0x8                         ; 00425a8d
    MOV EAX,dword ptr [EAX + 0x5c]      ; 00425a90
    RET                                 ; 00425a93

