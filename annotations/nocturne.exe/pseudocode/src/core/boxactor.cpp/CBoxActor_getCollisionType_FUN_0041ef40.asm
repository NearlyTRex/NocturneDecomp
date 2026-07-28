; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_boxactor_cpp_CBoxActor_getCollisionType_FUN_0041ef40(int param_1,int param_2)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041ef40
        ;   Label: core_boxactor.cpp_CBoxActor_getCollisionType_FUN_0041ef40
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041ef41
    CMP dword ptr [EBX + 0x5f0],0x0     ; 0041ef45
    JZ 0x0041ef57                       ; 0041ef4c
        ;   XREF to: 0041ef57 (CONDITIONAL_JUMP)  ; LAB_0041ef57
    CMP dword ptr [EBX + 0x310],0x0     ; 0041ef4e
    JZ 0x0041ef5b                       ; 0041ef55
        ;   XREF to: 0041ef5b (CONDITIONAL_JUMP)  ; LAB_0041ef5b
    XOR EAX,EAX                         ; 0041ef57
        ;   Label: LAB_0041ef57
    POP EBX                             ; 0041ef59
    RET                                 ; 0041ef5a
    PUSH ESI                            ; 0041ef5b
        ;   Label: LAB_0041ef5b
    LEA EAX,[EBX + 0x150]               ; 0041ef5c
    PUSH EAX                            ; 0041ef62
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 0041ef63
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    MOV ESI,dword ptr [EAX + 0x358]     ; 0041ef68
    ADD ESP,0x4                         ; 0041ef6e
    TEST ESI,ESI                        ; 0041ef71
    JZ 0x0041ef82                       ; 0041ef73
        ;   XREF to: 0041ef82 (CONDITIONAL_JUMP)  ; LAB_0041ef82
    MOV EAX,dword ptr [ESP + 0x10]      ; 0041ef75
    ADD EBX,0x150                       ; 0041ef79
    MOV dword ptr [EAX + 0x24],EBX      ; 0041ef7f
    MOV EAX,0x1                         ; 0041ef82
        ;   Label: LAB_0041ef82
    POP ESI                             ; 0041ef87
    POP EBX                             ; 0041ef88
    RET                                 ; 0041ef89

