; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_ladder_cpp_CLadder_getCollisionType_FUN_004fd5e0(CLadder *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004fd5e0
        ;   Label: core_ladder.cpp_CLadder_getCollisionType_FUN_004fd5e0
    ADD EAX,0x158                       ; 004fd5e4
    PUSH EAX                            ; 004fd5e9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 004fd5ea
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x110]     ; 004fd5ef
    ADD ESP,0x4                         ; 004fd5f5
    CMP EDX,0x1                         ; 004fd5f8
    JGE 0x004fd600                      ; 004fd5fb
        ;   XREF to: 004fd600 (CONDITIONAL_JUMP)  ; LAB_004fd600
    XOR EAX,EAX                         ; 004fd5fd
    RET                                 ; 004fd5ff
    MOV EAX,0x1                         ; 004fd600
        ;   Label: LAB_004fd600
    RET                                 ; 004fd605

