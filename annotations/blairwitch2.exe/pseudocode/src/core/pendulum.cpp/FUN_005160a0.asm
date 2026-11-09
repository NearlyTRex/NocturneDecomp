; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_pendulum_cpp_FUN_005160a0(int param_1,int param_2)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005160a0
        ;   Label: core_pendulum.cpp_FUN_005160a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005160a1
    CMP dword ptr [EBX + 0x59c],0x0     ; 005160a5
    JNZ 0x005160b2                      ; 005160ac
        ;   XREF to: 005160b2 (CONDITIONAL_JUMP)  ; LAB_005160b2
    XOR EAX,EAX                         ; 005160ae
    POP EBX                             ; 005160b0
    RET                                 ; 005160b1
    LEA EAX,[EBX + 0x2b4]               ; 005160b2
        ;   Label: LAB_005160b2
    PUSH EAX                            ; 005160b8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 005160b9
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV ECX,dword ptr [EAX + 0x358]     ; 005160be
    ADD ESP,0x4                         ; 005160c4
    TEST ECX,ECX                        ; 005160c7
    JZ 0x005160d8                       ; 005160c9
        ;   XREF to: 005160d8 (CONDITIONAL_JUMP)  ; LAB_005160d8
    MOV EAX,dword ptr [ESP + 0xc]       ; 005160cb
    ADD EBX,0x2b4                       ; 005160cf
    MOV dword ptr [EAX + 0x24],EBX      ; 005160d5
    MOV EAX,0x1                         ; 005160d8
        ;   Label: LAB_005160d8
    POP EBX                             ; 005160dd
    RET                                 ; 005160de

