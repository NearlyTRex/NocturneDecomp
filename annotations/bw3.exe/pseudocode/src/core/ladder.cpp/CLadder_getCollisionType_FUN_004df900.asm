; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_ladder_cpp_CLadder_getCollisionType_FUN_004df900(CLadder *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004df900
        ;   Label: core_ladder.cpp_CLadder_getCollisionType_FUN_004df900
    ADD EAX,0x158                       ; 004df904
    PUSH EAX                            ; 004df909
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 004df90a
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x110]     ; 004df90f
    ADD ESP,0x4                         ; 004df915
    CMP EDX,0x1                         ; 004df918
    JGE 0x004df920                      ; 004df91b
        ;   XREF to: 004df920 (CONDITIONAL_JUMP)  ; LAB_004df920
    XOR EAX,EAX                         ; 004df91d
    RET                                 ; 004df91f
    MOV EAX,0x1                         ; 004df920
        ;   Label: LAB_004df920
    RET                                 ; 004df925

