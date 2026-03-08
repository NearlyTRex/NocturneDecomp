; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_ladder_cpp_CLadder_getCollisionType_FUN_00502a40(CLadder *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00502a40
        ;   Label: core_ladder.cpp_CLadder_getCollisionType_FUN_00502a40
    ADD EAX,0x158                       ; 00502a44
    PUSH EAX                            ; 00502a49
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00502a4a
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x110]     ; 00502a4f
    ADD ESP,0x4                         ; 00502a55
    CMP EDX,0x1                         ; 00502a58
    JGE 0x00502a60                      ; 00502a5b
        ;   XREF to: 00502a60 (CONDITIONAL_JUMP)  ; LAB_00502a60
    XOR EAX,EAX                         ; 00502a5d
    RET                                 ; 00502a5f
    MOV EAX,0x1                         ; 00502a60
        ;   Label: LAB_00502a60
    RET                                 ; 00502a65

