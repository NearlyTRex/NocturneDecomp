; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDrip * __cdecl core_drip_cpp_CDrip_ctor_FUN_0048e000(CDrip *this_ptr)
;
; Parameters:
; CDrip *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_drip.cpp_factoryFunc_FUN_0048dfc0 at 0048dfda
;
; Referenced Globals:
;   TerminatedCString s_stalag_kfm_00622216
;   TerminatedCString s_rock_x_wav_00622221
;   undefined4 s_ock-x.wav_00622222
;   undefined4 s_ck-x.wav_00622223
;   undefined4 s_k-x.wav_00622224
;   CDemonActor_vtable g_CDripVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e000
        ;   Label: core_drip.cpp_CDrip_ctor_FUN_0048e000
    PUSH ESI                            ; 0048e001
    PUSH EDI                            ; 0048e002
    MOV EBX,dword ptr [ESP + 0x10]      ; 0048e003
    PUSH EBX                            ; 0048e007
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 0048e008
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0048e00d
    ADD EAX,0x158                       ; 0048e010
    PUSH EAX                            ; 0048e015
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 0048e016
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0048e01b
    LEA EBX,[EAX + 0xfffffea8]          ; 0048e01e
    PUSH 0x622216                       ; 0048e024 | = "stalag.kfm"
    LEA EAX,[EBX + 0x158]               ; 0048e029
    PUSH EAX                            ; 0048e02f
    MOV dword ptr [EBX + 0x154],0x65cf84 ; 0048e030 | g_CDripVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 0048e03a
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d4],0x2     ; 0048e03f
    LEA EAX,[EBX + 0x304]               ; 0048e049
    MOV dword ptr [EBX + 0x2d8],0x1     ; 0048e04f
    MOV dword ptr [EAX + 0x8],0x0       ; 0048e059
    MOV EDX,dword ptr [EAX + 0x8]       ; 0048e060
    MOV dword ptr [EAX + 0x4],EDX       ; 0048e063
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048e066
    MOV dword ptr [EAX],EDX             ; 0048e069
    MOV dword ptr [EBX + 0x2e0],0x40a00000 ; 0048e06b
    MOV dword ptr [EBX + 0x2e4],0x41200000 ; 0048e075
    MOV dword ptr [EBX + 0x2dc],0x0     ; 0048e07f
    MOV ESI,0x622221                    ; 0048e089 | = "rock-x.wav"
    MOV dword ptr [EBX + 0x2e8],0x0     ; 0048e08e
    ADD ESP,0x8                         ; 0048e098
    MOV dword ptr [EBX + 0x310],0x41200000 ; 0048e09b
    LEA EDI,[EBX + 0x314]               ; 0048e0a5
    MOV dword ptr [EBX + 0x338],0x0     ; 0048e0ab
    PUSH EDI                            ; 0048e0b5
    MOV AL,byte ptr [ESI]               ; 0048e0b6 | = "rock-x.wav" | s_ck-x.wav_00622223
        ;   Label: LAB_0048e0b6
    MOV byte ptr [EDI],AL               ; 0048e0b8
    CMP AL,0x0                          ; 0048e0ba
    JZ 0x0048e0ce                       ; 0048e0bc
        ;   XREF to: 0048e0ce (CONDITIONAL_JUMP)  ; LAB_0048e0ce
    MOV AL,byte ptr [ESI + 0x1]         ; 0048e0be | s_ock-x.wav_00622222 | s_k-x.wav_00622224
    ADD ESI,0x2                         ; 0048e0c1
    MOV byte ptr [EDI + 0x1],AL         ; 0048e0c4
    ADD EDI,0x2                         ; 0048e0c7
    CMP AL,0x0                          ; 0048e0ca
    JNZ 0x0048e0b6                      ; 0048e0cc
        ;   XREF to: 0048e0b6 (CONDITIONAL_JUMP)  ; LAB_0048e0b6
    POP EDI                             ; 0048e0ce
        ;   Label: LAB_0048e0ce
    MOV EAX,EBX                         ; 0048e0cf
    MOV dword ptr [EBX + 0x334],0x0     ; 0048e0d1
    POP EDI                             ; 0048e0db
    POP ESI                             ; 0048e0dc
    POP EBX                             ; 0048e0dd
    RET                                 ; 0048e0de

