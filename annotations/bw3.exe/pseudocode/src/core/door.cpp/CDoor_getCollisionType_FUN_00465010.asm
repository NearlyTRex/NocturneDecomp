; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_door_cpp_CDoor_getCollisionType_FUN_00465010(CDoor *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00465010
        ;   Label: core_door.cpp_CDoor_getCollisionType_FUN_00465010
    ADD EAX,0x158                       ; 00465014
    PUSH EAX                            ; 00465019
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 0046501a
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x358]     ; 0046501f
    ADD ESP,0x4                         ; 00465025
    TEST EDX,EDX                        ; 00465028
    JNZ 0x00465032                      ; 0046502a
        ;   XREF to: 00465032 (CONDITIONAL_JUMP)  ; LAB_00465032
    MOV EAX,0x1                         ; 0046502c
    RET                                 ; 00465031
    MOV EAX,dword ptr [ESP + 0x4]       ; 00465032
        ;   Label: LAB_00465032
    MOV EDX,dword ptr [ESP + 0x8]       ; 00465036
    ADD EAX,0x158                       ; 0046503a
    MOV dword ptr [EDX + 0x24],EAX      ; 0046503f
    MOV EAX,0x1                         ; 00465042
    RET                                 ; 00465047

