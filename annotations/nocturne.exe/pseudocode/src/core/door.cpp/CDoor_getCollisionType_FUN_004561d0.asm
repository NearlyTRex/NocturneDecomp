; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_door_cpp_CDoor_getCollisionType_FUN_004561d0(int param_1,int param_2)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004561d0
        ;   Label: core_door.cpp_CDoor_getCollisionType_FUN_004561d0
    ADD EAX,0x150                       ; 004561d4
    PUSH EAX                            ; 004561d9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004561da
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x358]     ; 004561df
    ADD ESP,0x4                         ; 004561e5
    TEST EDX,EDX                        ; 004561e8
    JNZ 0x004561f2                      ; 004561ea
        ;   XREF to: 004561f2 (CONDITIONAL_JUMP)  ; LAB_004561f2
    MOV EAX,0x1                         ; 004561ec
    RET                                 ; 004561f1
    MOV EAX,dword ptr [ESP + 0x4]       ; 004561f2
        ;   Label: LAB_004561f2
    MOV EDX,dword ptr [ESP + 0x8]       ; 004561f6
    ADD EAX,0x150                       ; 004561fa
    MOV dword ptr [EDX + 0x24],EAX      ; 004561ff
    MOV EAX,0x1                         ; 00456202
    RET                                 ; 00456207

