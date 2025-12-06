; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_pendulum.cpp_FUN_0054a550()
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054a550
        ;   Label: core_pendulum.cpp_FUN_0054a550
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054a551
    CMP dword ptr [EBX + 0x440],0x0     ; 0054a555
    JNZ 0x0054a562                      ; 0054a55c | LAB_0054a562
        ;   XREF to: 0054a562 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0054a55e
    POP EBX                             ; 0054a560
    RET                                 ; 0054a561
    LEA EAX,[EBX + 0x158]               ; 0054a562
        ;   Label: LAB_0054a562
    PUSH EAX                            ; 0054a568
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 0054a569 | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EAX + 0x5698]    ; 0054a56e
    ADD ESP,0x4                         ; 0054a574
    TEST ECX,ECX                        ; 0054a577
    JZ 0x0054a588                       ; 0054a579 | LAB_0054a588
        ;   XREF to: 0054a588 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0xc]       ; 0054a57b
    ADD EBX,0x158                       ; 0054a57f
    MOV dword ptr [EAX + 0x24],EBX      ; 0054a585
    MOV EAX,0x1                         ; 0054a588
        ;   Label: LAB_0054a588
    POP EBX                             ; 0054a58d
    RET                                 ; 0054a58e

