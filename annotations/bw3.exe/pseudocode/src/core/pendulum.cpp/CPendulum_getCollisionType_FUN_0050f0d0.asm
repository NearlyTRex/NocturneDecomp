; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_pendulum_cpp_CPendulum_getCollisionType_FUN_0050f0d0(CPendulum *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CPendulum *      Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f0d0
        ;   Label: core_pendulum.cpp_CPendulum_getCollisionType_FUN_0050f0d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0050f0d1
    CMP dword ptr [EBX + 0x440],0x0     ; 0050f0d5
    JNZ 0x0050f0e2                      ; 0050f0dc
        ;   XREF to: 0050f0e2 (CONDITIONAL_JUMP)  ; LAB_0050f0e2
    XOR EAX,EAX                         ; 0050f0de
    POP EBX                             ; 0050f0e0
    RET                                 ; 0050f0e1
    LEA EAX,[EBX + 0x158]               ; 0050f0e2
        ;   Label: LAB_0050f0e2
    PUSH EAX                            ; 0050f0e8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 0050f0e9
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    MOV ECX,dword ptr [EAX + 0x358]     ; 0050f0ee
    ADD ESP,0x4                         ; 0050f0f4
    TEST ECX,ECX                        ; 0050f0f7
    JZ 0x0050f108                       ; 0050f0f9
        ;   XREF to: 0050f108 (CONDITIONAL_JUMP)  ; LAB_0050f108
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050f0fb
    ADD EBX,0x158                       ; 0050f0ff
    MOV dword ptr [EAX + 0x24],EBX      ; 0050f105
    MOV EAX,0x1                         ; 0050f108
        ;   Label: LAB_0050f108
    POP EBX                             ; 0050f10d
    RET                                 ; 0050f10e

