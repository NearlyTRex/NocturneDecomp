; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_lever_cpp_CLever_setup_FUN_004c6110(CLever *this_ptr)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_elevbutton_kfm_005878ff
;   TerminatedCString s_lever_metal_wav_0058790e
;   undefined4 s_lever_metal_wav_0058790e+1
;   undefined4 s_lever_metal_wav_0058790e+2
;   undefined4 s_lever_metal_wav_0058790e+3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6110
        ;   Label: core_lever.cpp_CLever_setup_FUN_004c6110
    PUSH ESI                            ; 004c6111
    PUSH EDI                            ; 004c6112
    PUSH EBP                            ; 004c6113
    MOV EBP,ESP                         ; 004c6114
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c6116
    LEA EAX,[EBX + 0x150]               ; 004c6119
    PUSH EAX                            ; 004c611f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 004c6120
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c6125
    PUSH EBX                            ; 004c6128
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 004c6129
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00409fc0(CDemonActor * this_ptr)
    MOV AH,byte ptr [EBX + 0x3a0]       ; 004c612e
    ADD ESP,0x4                         ; 004c6134
    TEST AH,AH                          ; 004c6137
    JZ 0x004c6140                       ; 004c6139
        ;   XREF to: 004c6140 (CONDITIONAL_JUMP)  ; LAB_004c6140
    POP EBP                             ; 004c613b
        ;   Label: LAB_004c613b
    POP EDI                             ; 004c613c
    POP ESI                             ; 004c613d
    POP EBX                             ; 004c613e
    RET                                 ; 004c613f
    PUSH 0x5878ff                       ; 004c6140 | = "elevbutton.kfm"
        ;   Label: LAB_004c6140
    LEA EAX,[EBX + 0x1c8]               ; 004c6145
    PUSH EAX                            ; 004c614b
    CALL crt_string.c__stricmp_FUN_00564520 ; 004c614c
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004c6151
    TEST EAX,EAX                        ; 004c6154
    JZ 0x004c613b                       ; 004c6156
        ;   XREF to: 004c613b (CONDITIONAL_JUMP)  ; LAB_004c613b
    MOV ESI,0x58790e                    ; 004c6158 | = "lever-metal.wav"
    LEA EDI,[EBX + 0x3a0]               ; 004c615d
    PUSH EDI                            ; 004c6163
    MOV AL,byte ptr [ESI]               ; 004c6164 | = "lever-metal.wav" | s_lever_metal_wav_0058790e+2
        ;   Label: LAB_004c6164
    MOV byte ptr [EDI],AL               ; 004c6166
    CMP AL,0x0                          ; 004c6168
    JZ 0x004c617c                       ; 004c616a
        ;   XREF to: 004c617c (CONDITIONAL_JUMP)  ; LAB_004c617c
    MOV AL,byte ptr [ESI + 0x1]         ; 004c616c | s_lever_metal_wav_0058790e+1 | s_lever_metal_wav_0058790e+3
    ADD ESI,0x2                         ; 004c616f
    MOV byte ptr [EDI + 0x1],AL         ; 004c6172
    ADD EDI,0x2                         ; 004c6175
    CMP AL,0x0                          ; 004c6178
    JNZ 0x004c6164                      ; 004c617a
        ;   XREF to: 004c6164 (CONDITIONAL_JUMP)  ; LAB_004c6164
    POP EDI                             ; 004c617c
        ;   Label: LAB_004c617c
    POP EBP                             ; 004c617d
    POP EDI                             ; 004c617e
    POP ESI                             ; 004c617f
    POP EBX                             ; 004c6180
    RET                                 ; 004c6181

