; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_backgnd_cpp_CBackgroundActor_getCollisionType_FUN_0040f560(CBackgroundActor *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CBackgroundActor * Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f560
        ;   Label: core_backgnd.cpp_CBackgroundActor_getCollisionType_FUN_0040f560
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f561
    CMP dword ptr [EBX + 0x434],0x0     ; 0040f565
    JNZ 0x0040f572                      ; 0040f56c
        ;   XREF to: 0040f572 (CONDITIONAL_JUMP)  ; LAB_0040f572
    XOR EAX,EAX                         ; 0040f56e
    POP EBX                             ; 0040f570
    RET                                 ; 0040f571
    LEA EAX,[EBX + 0x2b8]               ; 0040f572
        ;   Label: LAB_0040f572
    PUSH EAX                            ; 0040f578
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 0040f579
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV ECX,dword ptr [EAX + 0x358]     ; 0040f57e
    ADD ESP,0x4                         ; 0040f584
    TEST ECX,ECX                        ; 0040f587
    JZ 0x0040f598                       ; 0040f589
        ;   XREF to: 0040f598 (CONDITIONAL_JUMP)  ; LAB_0040f598
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040f58b
    ADD EBX,0x2b8                       ; 0040f58f
    MOV dword ptr [EAX + 0x24],EBX      ; 0040f595
    MOV EAX,0x1                         ; 0040f598
        ;   Label: LAB_0040f598
    POP EBX                             ; 0040f59d
    RET                                 ; 0040f59e

