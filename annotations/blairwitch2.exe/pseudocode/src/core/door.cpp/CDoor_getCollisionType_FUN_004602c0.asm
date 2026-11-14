; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_door_cpp_CDoor_getCollisionType_FUN_004602c0(CDoor *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004602c0
        ;   Label: core_door.cpp_CDoor_getCollisionType_FUN_004602c0
    ADD EAX,0x2b4                       ; 004602c4
    PUSH EAX                            ; 004602c9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 004602ca
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x358]     ; 004602cf
    ADD ESP,0x4                         ; 004602d5
    TEST EDX,EDX                        ; 004602d8
    JNZ 0x004602e2                      ; 004602da
        ;   XREF to: 004602e2 (CONDITIONAL_JUMP)  ; LAB_004602e2
    MOV EAX,0x1                         ; 004602dc
    RET                                 ; 004602e1
    MOV EAX,dword ptr [ESP + 0x4]       ; 004602e2
        ;   Label: LAB_004602e2
    MOV EDX,dword ptr [ESP + 0x8]       ; 004602e6
    ADD EAX,0x2b4                       ; 004602ea
    MOV dword ptr [EDX + 0x24],EAX      ; 004602ef
    MOV EAX,0x1                         ; 004602f2
    RET                                 ; 004602f7

