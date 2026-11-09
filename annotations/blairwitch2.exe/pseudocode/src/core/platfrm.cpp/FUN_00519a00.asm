; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_platfrm_cpp_FUN_00519a00(int param_1,int param_2)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00519a00
        ;   Label: core_platfrm.cpp_FUN_00519a00
    ADD EAX,0x2b4                       ; 00519a04
    PUSH EAX                            ; 00519a09
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 00519a0a
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x358]     ; 00519a0f
    ADD ESP,0x4                         ; 00519a15
    TEST EDX,EDX                        ; 00519a18
    JNZ 0x00519a26                      ; 00519a1a
        ;   XREF to: 00519a26 (CONDITIONAL_JUMP)  ; LAB_00519a26
    LEA EAX,[EAX]                       ; 00519a1c
    MOV EAX,dword ptr [ESP + 0x4]       ; 00519a26
        ;   Label: LAB_00519a26
    MOV EDX,dword ptr [ESP + 0x8]       ; 00519a2a
    ADD EAX,0x2b4                       ; 00519a2e
    MOV dword ptr [EDX + 0x24],EAX      ; 00519a33
    MOV EAX,0x1                         ; 00519a36
    RET                                 ; 00519a3b

