; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_lever_cpp_CLever_setup_FUN_005048a0(CLever *this_ptr)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_elevbutton_kfm_0063107c
;   TerminatedCString s_lever_metal_wav_0063108b
;   undefined4 s_ever-metal.wav_0063108c
;   undefined4 s_ver-metal.wav_0063108d
;   undefined4 s_lever_metal_wav_0063108b+3
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;   crt_string.c__stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005048a0
        ;   Label: core_lever.cpp_CLever_setup_FUN_005048a0
    PUSH ESI                            ; 005048a1
    PUSH EDI                            ; 005048a2
    PUSH EBP                            ; 005048a3
    MOV EBP,ESP                         ; 005048a4
    MOV EBX,dword ptr [EBP + 0x14]      ; 005048a6
    LEA EAX,[EBX + 0x158]               ; 005048a9
    PUSH EAX                            ; 005048af
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 005048b0
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005048b5
    PUSH EBX                            ; 005048b8
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 005048b9
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)
    MOV AH,byte ptr [EBX + 0x3a8]       ; 005048be
    ADD ESP,0x4                         ; 005048c4
    TEST AH,AH                          ; 005048c7
    JZ 0x005048d0                       ; 005048c9
        ;   XREF to: 005048d0 (CONDITIONAL_JUMP)  ; LAB_005048d0
    POP EBP                             ; 005048cb
        ;   Label: LAB_005048cb
    POP EDI                             ; 005048cc
    POP ESI                             ; 005048cd
    POP EBX                             ; 005048ce
    RET                                 ; 005048cf
    PUSH 0x63107c                       ; 005048d0 | = "elevbutton.kfm"
        ;   Label: LAB_005048d0
    LEA EAX,[EBX + 0x1d0]               ; 005048d5
    PUSH EAX                            ; 005048db
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 005048dc
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005048e1
    TEST EAX,EAX                        ; 005048e4
    JZ 0x005048cb                       ; 005048e6
        ;   XREF to: 005048cb (CONDITIONAL_JUMP)  ; LAB_005048cb
    MOV ESI,0x63108b                    ; 005048e8 | = "lever-metal.wav"
    LEA EDI,[EBX + 0x3a8]               ; 005048ed
    PUSH EDI                            ; 005048f3
    MOV AL,byte ptr [ESI]               ; 005048f4 | = "lever-metal.wav" | s_ver-metal.wav_0063108d
        ;   Label: LAB_005048f4
    MOV byte ptr [EDI],AL               ; 005048f6
    CMP AL,0x0                          ; 005048f8
    JZ 0x0050490c                       ; 005048fa
        ;   XREF to: 0050490c (CONDITIONAL_JUMP)  ; LAB_0050490c
    MOV AL,byte ptr [ESI + 0x1]         ; 005048fc | s_ever-metal.wav_0063108c | s_lever_metal_wav_0063108b+3
    ADD ESI,0x2                         ; 005048ff
    MOV byte ptr [EDI + 0x1],AL         ; 00504902
    ADD EDI,0x2                         ; 00504905
    CMP AL,0x0                          ; 00504908
    JNZ 0x005048f4                      ; 0050490a
        ;   XREF to: 005048f4 (CONDITIONAL_JUMP)  ; LAB_005048f4
    POP EDI                             ; 0050490c
        ;   Label: LAB_0050490c
    POP EBP                             ; 0050490d
    POP EDI                             ; 0050490e
    POP ESI                             ; 0050490f
    POP EBX                             ; 00504910
    RET                                 ; 00504911

