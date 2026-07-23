; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_drip_cpp_CDrip_ctor_FUN_00462060(undefined4 param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_stalag_kfm_0057ddde
;   TerminatedCString s_rock_x_wav_0057dde9
;   undefined4 s_rock_x_wav_0057dde9+1
;   undefined4 s_rock_x_wav_0057dde9+2
;   undefined4 s_rock_x_wav_0057dde9+3
;   undefined1* PTR_core_drip.cpp_CDrip_setup_FUN_00462140_0059c5e4 = 00462140
;
; Called Functions:
;   core_actor.cpp_FUN_00409d30
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462060
        ;   Label: core_drip.cpp_CDrip_ctor_FUN_00462060
    PUSH ESI                            ; 00462061
    PUSH EDI                            ; 00462062
    MOV EBX,dword ptr [ESP + 0x10]      ; 00462063
    PUSH EBX                            ; 00462067
    CALL core_actor.cpp_FUN_00409d30    ; 00462068
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00409d30()
    ADD ESP,0x4                         ; 0046206d
    ADD EAX,0x150                       ; 00462070
    PUSH EAX                            ; 00462075
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 00462076
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490()
    ADD ESP,0x4                         ; 0046207b
    LEA EBX,[EAX + 0xfffffeb0]          ; 0046207e
    PUSH 0x57ddde                       ; 00462084 | = "stalag.kfm"
    LEA EAX,[EBX + 0x150]               ; 00462089
    PUSH EAX                            ; 0046208f
    MOV dword ptr [EBX + 0x14c],0x59c5e4 ; 00462090 | PTR_core_drip.cpp_CDrip_setup_FUN_00462140_0059c5e4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0046209a
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    MOV dword ptr [EBX + 0x2cc],0x2     ; 0046209f
    LEA EAX,[EBX + 0x2fc]               ; 004620a9
    MOV dword ptr [EBX + 0x2d0],0x1     ; 004620af
    MOV dword ptr [EAX + 0x8],0x0       ; 004620b9
    MOV EDX,dword ptr [EAX + 0x8]       ; 004620c0
    MOV dword ptr [EAX + 0x4],EDX       ; 004620c3
    MOV EDX,dword ptr [EAX + 0x4]       ; 004620c6
    MOV dword ptr [EAX],EDX             ; 004620c9
    MOV dword ptr [EBX + 0x2d8],0x40a00000 ; 004620cb
    MOV dword ptr [EBX + 0x2dc],0x41200000 ; 004620d5
    MOV dword ptr [EBX + 0x2d4],0x0     ; 004620df
    MOV ESI,0x57dde9                    ; 004620e9 | = "rock-x.wav"
    MOV dword ptr [EBX + 0x2e0],0x0     ; 004620ee
    ADD ESP,0x8                         ; 004620f8
    MOV dword ptr [EBX + 0x308],0x41200000 ; 004620fb
    LEA EDI,[EBX + 0x30c]               ; 00462105
    MOV dword ptr [EBX + 0x330],0x0     ; 0046210b
    PUSH EDI                            ; 00462115
    MOV AL,byte ptr [ESI]               ; 00462116 | = "rock-x.wav" | s_rock_x_wav_0057dde9+2
        ;   Label: LAB_00462116
    MOV byte ptr [EDI],AL               ; 00462118
    CMP AL,0x0                          ; 0046211a
    JZ 0x0046212e                       ; 0046211c
        ;   XREF to: 0046212e (CONDITIONAL_JUMP)  ; LAB_0046212e
    MOV AL,byte ptr [ESI + 0x1]         ; 0046211e | s_rock_x_wav_0057dde9+1 | s_rock_x_wav_0057dde9+3
    ADD ESI,0x2                         ; 00462121
    MOV byte ptr [EDI + 0x1],AL         ; 00462124
    ADD EDI,0x2                         ; 00462127
    CMP AL,0x0                          ; 0046212a
    JNZ 0x00462116                      ; 0046212c
        ;   XREF to: 00462116 (CONDITIONAL_JUMP)  ; LAB_00462116
    POP EDI                             ; 0046212e
        ;   Label: LAB_0046212e
    MOV EAX,EBX                         ; 0046212f
    MOV dword ptr [EBX + 0x32c],0x0     ; 00462131
    POP EDI                             ; 0046213b
    POP ESI                             ; 0046213c
    POP EBX                             ; 0046213d
    RET                                 ; 0046213e

