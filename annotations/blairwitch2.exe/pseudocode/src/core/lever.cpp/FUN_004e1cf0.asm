; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_lever_cpp_FUN_004e1cf0(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_FUN_00408a80
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1cf0
        ;   Label: core_lever.cpp_FUN_004e1cf0
    PUSH ESI                            ; 004e1cf1
    PUSH EDI                            ; 004e1cf2
    PUSH EBP                            ; 004e1cf3
    MOV EBP,ESP                         ; 004e1cf4
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e1cf6
    LEA EAX,[EBX + 0x2b4]               ; 004e1cf9
    PUSH EAX                            ; 004e1cff
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 004e1d00
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e1d05
    PUSH EBX                            ; 004e1d08
    CALL core_actor.cpp_FUN_00408a80    ; 004e1d09
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408a80(CDemonActor * this_ptr)
    MOV AH,byte ptr [EBX + 0x504]       ; 004e1d0e
    ADD ESP,0x4                         ; 004e1d14
    TEST AH,AH                          ; 004e1d17
    JZ 0x004e1d20                       ; 004e1d19
        ;   XREF to: 004e1d20 (CONDITIONAL_JUMP)  ; LAB_004e1d20
    POP EBP                             ; 004e1d1b
        ;   Label: LAB_004e1d1b
    POP EDI                             ; 004e1d1c
    POP ESI                             ; 004e1d1d
    POP EBX                             ; 004e1d1e
    RET                                 ; 004e1d1f
    PUSH 0x5dbf19                       ; 004e1d20
        ;   Label: LAB_004e1d20
    LEA EAX,[EBX + 0x32c]               ; 004e1d25
    PUSH EAX                            ; 004e1d2b
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004e1d2c
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004e1d31
    TEST EAX,EAX                        ; 004e1d34
    JZ 0x004e1d1b                       ; 004e1d36
        ;   XREF to: 004e1d1b (CONDITIONAL_JUMP)  ; LAB_004e1d1b
    MOV ESI,0x5dbf28                    ; 004e1d38
    LEA EDI,[EBX + 0x504]               ; 004e1d3d
    PUSH EDI                            ; 004e1d43
    MOV AL,byte ptr [ESI]               ; 004e1d44
        ;   Label: LAB_004e1d44
    MOV byte ptr [EDI],AL               ; 004e1d46
    CMP AL,0x0                          ; 004e1d48
    JZ 0x004e1d5c                       ; 004e1d4a
        ;   XREF to: 004e1d5c (CONDITIONAL_JUMP)  ; LAB_004e1d5c
    MOV AL,byte ptr [ESI + 0x1]         ; 004e1d4c
    ADD ESI,0x2                         ; 004e1d4f
    MOV byte ptr [EDI + 0x1],AL         ; 004e1d52
    ADD EDI,0x2                         ; 004e1d55
    CMP AL,0x0                          ; 004e1d58
    JNZ 0x004e1d44                      ; 004e1d5a
        ;   XREF to: 004e1d44 (CONDITIONAL_JUMP)  ; LAB_004e1d44
    POP EDI                             ; 004e1d5c
        ;   Label: LAB_004e1d5c
    POP EBP                             ; 004e1d5d
    POP EDI                             ; 004e1d5e
    POP ESI                             ; 004e1d5f
    POP EBX                             ; 004e1d60
    RET                                 ; 004e1d61

