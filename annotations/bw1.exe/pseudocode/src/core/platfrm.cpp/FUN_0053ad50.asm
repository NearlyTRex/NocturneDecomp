; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_platfrm_cpp_FUN_0053ad50(int param_1,int param_2)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0053ad50
        ;   Label: core_platfrm.cpp_FUN_0053ad50
    ADD EAX,0x158                       ; 0053ad54
    PUSH EAX                            ; 0053ad59
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 0053ad5a
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x358]     ; 0053ad5f
    ADD ESP,0x4                         ; 0053ad65
    TEST EDX,EDX                        ; 0053ad68
    JNZ 0x0053ad76                      ; 0053ad6a
        ;   XREF to: 0053ad76 (CONDITIONAL_JUMP)  ; LAB_0053ad76
    LEA EAX,[EAX]                       ; 0053ad6c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0053ad76
        ;   Label: LAB_0053ad76
    MOV EDX,dword ptr [ESP + 0x8]       ; 0053ad7a
    ADD EAX,0x158                       ; 0053ad7e
    MOV dword ptr [EDX + 0x24],EAX      ; 0053ad83
    MOV EAX,0x1                         ; 0053ad86
    RET                                 ; 0053ad8b

