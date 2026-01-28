; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 core_platfrm_cpp_FUN_0054e180(void)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0054e180
        ;   Label: core_platfrm.cpp_FUN_0054e180
    ADD EAX,0x158                       ; 0054e184
    PUSH EAX                            ; 0054e189
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 0054e18a
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x5698]    ; 0054e18f
    ADD ESP,0x4                         ; 0054e195
    TEST EDX,EDX                        ; 0054e198
    JNZ 0x0054e1a6                      ; 0054e19a
        ;   XREF to: 0054e1a6 (CONDITIONAL_JUMP)  ; LAB_0054e1a6
    LEA EAX,[EAX]                       ; 0054e19c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054e1a6
        ;   Label: LAB_0054e1a6
    MOV EDX,dword ptr [ESP + 0x8]       ; 0054e1aa
    ADD EAX,0x158                       ; 0054e1ae
    MOV dword ptr [EDX + 0x24],EAX      ; 0054e1b3
    MOV EAX,0x1                         ; 0054e1b6
    RET                                 ; 0054e1bb

