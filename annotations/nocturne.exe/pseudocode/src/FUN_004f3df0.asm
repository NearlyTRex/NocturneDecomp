; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004f3df0(int param_1,int param_2)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3df0
        ;   Label: FUN_004f3df0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f3df1
    CMP dword ptr [EBX + 0x438],0x0     ; 004f3df5
    JNZ 0x004f3e02                      ; 004f3dfc
        ;   XREF to: 004f3e02 (CONDITIONAL_JUMP)  ; LAB_004f3e02
    XOR EAX,EAX                         ; 004f3dfe
    POP EBX                             ; 004f3e00
    RET                                 ; 004f3e01
    LEA EAX,[EBX + 0x150]               ; 004f3e02
        ;   Label: LAB_004f3e02
    PUSH EAX                            ; 004f3e08
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004f3e09
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    MOV ECX,dword ptr [EAX + 0x358]     ; 004f3e0e
    ADD ESP,0x4                         ; 004f3e14
    TEST ECX,ECX                        ; 004f3e17
    JZ 0x004f3e28                       ; 004f3e19
        ;   XREF to: 004f3e28 (CONDITIONAL_JUMP)  ; LAB_004f3e28
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f3e1b
    ADD EBX,0x150                       ; 004f3e1f
    MOV dword ptr [EAX + 0x24],EBX      ; 004f3e25
    MOV EAX,0x1                         ; 004f3e28
        ;   Label: LAB_004f3e28
    POP EBX                             ; 004f3e2d
    RET                                 ; 004f3e2e

