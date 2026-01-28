; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_door_cpp_CDoor_hasCollision_FUN_00480d90(CDoor *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00480d90
        ;   Label: core_door.cpp_CDoor_hasCollision_FUN_00480d90
    ADD EAX,0x158                       ; 00480d94
    PUSH EAX                            ; 00480d99
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00480d9a
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x5698]    ; 00480d9f
    ADD ESP,0x4                         ; 00480da5
    TEST EDX,EDX                        ; 00480da8
    JNZ 0x00480db2                      ; 00480daa
        ;   XREF to: 00480db2 (CONDITIONAL_JUMP)  ; LAB_00480db2
    MOV EAX,0x1                         ; 00480dac
    RET                                 ; 00480db1
    MOV EAX,dword ptr [ESP + 0x4]       ; 00480db2
        ;   Label: LAB_00480db2
    MOV EDX,dword ptr [ESP + 0x8]       ; 00480db6
    ADD EAX,0x158                       ; 00480dba
    MOV dword ptr [EDX + 0x24],EAX      ; 00480dbf
    MOV EAX,0x1                         ; 00480dc2
    RET                                 ; 00480dc7

