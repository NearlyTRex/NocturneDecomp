; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_door_cpp_CDoor_getCollisionType_FUN_004787d0(CDoor *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004787d0
        ;   Label: core_door.cpp_CDoor_getCollisionType_FUN_004787d0
    ADD EAX,0x158                       ; 004787d4
    PUSH EAX                            ; 004787d9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 004787da
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x358]     ; 004787df
    ADD ESP,0x4                         ; 004787e5
    TEST EDX,EDX                        ; 004787e8
    JNZ 0x004787f2                      ; 004787ea
        ;   XREF to: 004787f2 (CONDITIONAL_JUMP)  ; LAB_004787f2
    MOV EAX,0x1                         ; 004787ec
    RET                                 ; 004787f1
    MOV EAX,dword ptr [ESP + 0x4]       ; 004787f2
        ;   Label: LAB_004787f2
    MOV EDX,dword ptr [ESP + 0x8]       ; 004787f6
    ADD EAX,0x158                       ; 004787fa
    MOV dword ptr [EDX + 0x24],EAX      ; 004787ff
    MOV EAX,0x1                         ; 00478802
    RET                                 ; 00478807

