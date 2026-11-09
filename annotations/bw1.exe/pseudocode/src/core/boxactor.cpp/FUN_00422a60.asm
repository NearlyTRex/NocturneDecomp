; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_boxactor_cpp_FUN_00422a60(int param_1,int param_2)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422a60
        ;   Label: core_boxactor.cpp_FUN_00422a60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00422a61
    CMP dword ptr [EBX + 0x5f8],0x0     ; 00422a65
    JZ 0x00422a77                       ; 00422a6c
        ;   XREF to: 00422a77 (CONDITIONAL_JUMP)  ; LAB_00422a77
    CMP dword ptr [EBX + 0x318],0x0     ; 00422a6e
    JZ 0x00422a7b                       ; 00422a75
        ;   XREF to: 00422a7b (CONDITIONAL_JUMP)  ; LAB_00422a7b
    XOR EAX,EAX                         ; 00422a77
        ;   Label: LAB_00422a77
    POP EBX                             ; 00422a79
    RET                                 ; 00422a7a
    PUSH ESI                            ; 00422a7b
        ;   Label: LAB_00422a7b
    LEA EAX,[EBX + 0x158]               ; 00422a7c
    PUSH EAX                            ; 00422a82
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 00422a83
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV ESI,dword ptr [EAX + 0x358]     ; 00422a88
    ADD ESP,0x4                         ; 00422a8e
    TEST ESI,ESI                        ; 00422a91
    JZ 0x00422aa2                       ; 00422a93
        ;   XREF to: 00422aa2 (CONDITIONAL_JUMP)  ; LAB_00422aa2
    MOV EAX,dword ptr [ESP + 0x10]      ; 00422a95
    ADD EBX,0x158                       ; 00422a99
    MOV dword ptr [EAX + 0x24],EBX      ; 00422a9f
    MOV EAX,0x1                         ; 00422aa2
        ;   Label: LAB_00422aa2
    POP ESI                             ; 00422aa7
    POP EBX                             ; 00422aa8
    RET                                 ; 00422aa9

