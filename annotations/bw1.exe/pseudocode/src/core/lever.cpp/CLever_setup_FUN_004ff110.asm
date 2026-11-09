; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_lever_cpp_CLever_setup_FUN_004ff110(CLever *this_ptr)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_FUN_00408850
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ff110
        ;   Label: core_lever.cpp_CLever_setup_FUN_004ff110
    PUSH ESI                            ; 004ff111
    PUSH EDI                            ; 004ff112
    PUSH EBP                            ; 004ff113
    MOV EBP,ESP                         ; 004ff114
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ff116
    LEA EAX,[EBX + 0x158]               ; 004ff119
    PUSH EAX                            ; 004ff11f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0 ; 004ff120
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004ff125
    PUSH EBX                            ; 004ff128
    CALL core_actor.cpp_FUN_00408850    ; 004ff129
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408850(CDemonActor * this_ptr)
    MOV AH,byte ptr [EBX + 0x3a8]       ; 004ff12e
    ADD ESP,0x4                         ; 004ff134
    TEST AH,AH                          ; 004ff137
    JZ 0x004ff140                       ; 004ff139
        ;   XREF to: 004ff140 (CONDITIONAL_JUMP)  ; LAB_004ff140
    POP EBP                             ; 004ff13b
        ;   Label: LAB_004ff13b
    POP EDI                             ; 004ff13c
    POP ESI                             ; 004ff13d
    POP EBX                             ; 004ff13e
    RET                                 ; 004ff13f
    PUSH 0x5e6d21                       ; 004ff140
        ;   Label: LAB_004ff140
    LEA EAX,[EBX + 0x1d0]               ; 004ff145
    PUSH EAX                            ; 004ff14b
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004ff14c
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004ff151
    TEST EAX,EAX                        ; 004ff154
    JZ 0x004ff13b                       ; 004ff156
        ;   XREF to: 004ff13b (CONDITIONAL_JUMP)  ; LAB_004ff13b
    MOV ESI,0x5e6d30                    ; 004ff158
    LEA EDI,[EBX + 0x3a8]               ; 004ff15d
    PUSH EDI                            ; 004ff163
    MOV AL,byte ptr [ESI]               ; 004ff164
        ;   Label: LAB_004ff164
    MOV byte ptr [EDI],AL               ; 004ff166
    CMP AL,0x0                          ; 004ff168
    JZ 0x004ff17c                       ; 004ff16a
        ;   XREF to: 004ff17c (CONDITIONAL_JUMP)  ; LAB_004ff17c
    MOV AL,byte ptr [ESI + 0x1]         ; 004ff16c
    ADD ESI,0x2                         ; 004ff16f
    MOV byte ptr [EDI + 0x1],AL         ; 004ff172
    ADD EDI,0x2                         ; 004ff175
    CMP AL,0x0                          ; 004ff178
    JNZ 0x004ff164                      ; 004ff17a
        ;   XREF to: 004ff164 (CONDITIONAL_JUMP)  ; LAB_004ff164
    POP EDI                             ; 004ff17c
        ;   Label: LAB_004ff17c
    POP EBP                             ; 004ff17d
    POP EDI                             ; 004ff17e
    POP ESI                             ; 004ff17f
    POP EBX                             ; 004ff180
    RET                                 ; 004ff181

