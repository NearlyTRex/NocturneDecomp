; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_platfrm_cpp_CPlatform_getCollisionType_FUN_004f7560(int param_1,int param_2)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f7560
        ;   Label: core_platfrm.cpp_CPlatform_getCollisionType_FUN_004f7560
    ADD EAX,0x150                       ; 004f7564
    PUSH EAX                            ; 004f7569
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004f756a
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x358]     ; 004f756f
    ADD ESP,0x4                         ; 004f7575
    TEST EDX,EDX                        ; 004f7578
    JNZ 0x004f7586                      ; 004f757a
        ;   XREF to: 004f7586 (CONDITIONAL_JUMP)  ; LAB_004f7586
    LEA EAX,[EAX]                       ; 004f757c
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f7586
        ;   Label: LAB_004f7586
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f758a
    ADD EAX,0x150                       ; 004f758e
    MOV dword ptr [EDX + 0x24],EAX      ; 004f7593
    MOV EAX,0x1                         ; 004f7596
    RET                                 ; 004f759b

