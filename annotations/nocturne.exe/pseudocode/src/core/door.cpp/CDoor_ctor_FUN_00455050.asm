; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDoor * __cdecl core_door_cpp_CDoor_ctor_FUN_00455050(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_door.cpp_FUN_00455020 at 00455033
;
; Referenced Globals:
;   TerminatedCString s_churchd01_kfm_0057d008
;   TerminatedCString s_defaultDoorOpen_0057d016
;   undefined4 s_efaultDoorOpen_0057d016+1
;   undefined4 s_faultDoorOpen_0057d016+2
;   undefined4 s_aultDoorOpen_0057d016+3
;   TerminatedCString s_defaultDoorClose_0057d026
;   undefined4 s_efaultDoorClose_0057d026+1
;   undefined4 s_faultDoorClose_0057d026+2
;   undefined4 s_aultDoorClose_0057d026+3
;   TerminatedCString s_door_locked_wav_0057d037
;   undefined4 s_door_locked_wav_0057d037+1
;   undefined4 s_door_locked_wav_0057d037+2
;   undefined4 s_door_locked_wav_0057d037+3
;   undefined1* PTR_core_door.cpp_CDoor_setup_FUN_004551f0_0059c284 = 004551f0
;
; Called Functions:
;   core_actor.cpp_FUN_00409d30
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   core_event.cpp_FUN_00481620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00455050
        ;   Label: core_door.cpp_CDoor_ctor_FUN_00455050
    PUSH ESI                            ; 00455051
    PUSH EDI                            ; 00455052
    MOV EBX,dword ptr [ESP + 0x10]      ; 00455053
    PUSH EBX                            ; 00455057
    CALL core_actor.cpp_FUN_00409d30    ; 00455058
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00409d30()
    ADD ESP,0x4                         ; 0045505d
    ADD EAX,0x150                       ; 00455060
    PUSH EAX                            ; 00455065
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 00455066
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0045506b
    LEA EBX,[EAX + 0x320]               ; 0045506e
    PUSH EBX                            ; 00455074
    CALL core_event.cpp_FUN_00481620    ; 00455075
        ;   XREF to: 00481620 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_00481620()
    ADD ESP,0x4                         ; 0045507a
    SUB EBX,0x470                       ; 0045507d
    PUSH 0x57d008                       ; 00455083 | = "churchd01.kfm"
    LEA EAX,[EBX + 0x150]               ; 00455088
    PUSH EAX                            ; 0045508e
    MOV dword ptr [EBX + 0x14c],0x59c284 ; 0045508f | PTR_core_door.cpp_CDoor_setup_FUN_004551f0_0059c284
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 00455099
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d0],0x0     ; 0045509e
    ADD ESP,0x8                         ; 004550a8
    MOV dword ptr [EBX + 0x2d4],0x1     ; 004550ab
    LEA EAX,[EBX + 0x98c]               ; 004550b5
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004550bb
    LEA EDX,[EBX + 0x20]                ; 004550c5
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004550c8
    CMP EAX,EDX                         ; 004550d2
    JZ 0x004550e6                       ; 004550d4
        ;   XREF to: 004550e6 (CONDITIONAL_JUMP)  ; LAB_004550e6
    MOV ECX,dword ptr [EDX]             ; 004550d6
    MOV dword ptr [EAX],ECX             ; 004550d8
    MOV ECX,dword ptr [EDX + 0x4]       ; 004550da
    MOV dword ptr [EAX + 0x4],ECX       ; 004550dd
    MOV ECX,dword ptr [EDX + 0x8]       ; 004550e0
    MOV dword ptr [EAX + 0x8],ECX       ; 004550e3
    MOV ESI,0x57d016                    ; 004550e6 | = "defaultDoorOpen"
        ;   Label: LAB_004550e6
    LEA EDI,[EBX + 0x2e0]               ; 004550eb
    PUSH EDI                            ; 004550f1
    MOV AL,byte ptr [ESI]               ; 004550f2 | = "defaultDoorOpen" | s_faultDoorOpen_0057d016+2
        ;   Label: LAB_004550f2
    MOV byte ptr [EDI],AL               ; 004550f4
    CMP AL,0x0                          ; 004550f6
    JZ 0x0045510a                       ; 004550f8
        ;   XREF to: 0045510a (CONDITIONAL_JUMP)  ; LAB_0045510a
    MOV AL,byte ptr [ESI + 0x1]         ; 004550fa | s_efaultDoorOpen_0057d016+1 | s_aultDoorOpen_0057d016+3
    ADD ESI,0x2                         ; 004550fd
    MOV byte ptr [EDI + 0x1],AL         ; 00455100
    ADD EDI,0x2                         ; 00455103
    CMP AL,0x0                          ; 00455106
    JNZ 0x004550f2                      ; 00455108
        ;   XREF to: 004550f2 (CONDITIONAL_JUMP)  ; LAB_004550f2
    POP EDI                             ; 0045510a
        ;   Label: LAB_0045510a
    MOV ESI,0x57d026                    ; 0045510b | = "defaultDoorClose"
    LEA EDI,[EBX + 0x344]               ; 00455110
    PUSH EDI                            ; 00455116
    MOV AL,byte ptr [ESI]               ; 00455117 | = "defaultDoorClose" | s_faultDoorClose_0057d026+2
        ;   Label: LAB_00455117
    MOV byte ptr [EDI],AL               ; 00455119
    CMP AL,0x0                          ; 0045511b
    JZ 0x0045512f                       ; 0045511d
        ;   XREF to: 0045512f (CONDITIONAL_JUMP)  ; LAB_0045512f
    MOV AL,byte ptr [ESI + 0x1]         ; 0045511f | s_efaultDoorClose_0057d026+1 | s_aultDoorClose_0057d026+3
    ADD ESI,0x2                         ; 00455122
    MOV byte ptr [EDI + 0x1],AL         ; 00455125
    ADD EDI,0x2                         ; 00455128
    CMP AL,0x0                          ; 0045512b
    JNZ 0x00455117                      ; 0045512d
        ;   XREF to: 00455117 (CONDITIONAL_JUMP)  ; LAB_00455117
    POP EDI                             ; 0045512f
        ;   Label: LAB_0045512f
    MOV ESI,0x57d037                    ; 00455130 | = "door-locked.wav"
    MOV byte ptr [EBX + 0x85c],0x0      ; 00455135
    LEA EDI,[EBX + 0x924]               ; 0045513c
    MOV byte ptr [EBX + 0x8c0],0x0      ; 00455142
    PUSH EDI                            ; 00455149
    MOV AL,byte ptr [ESI]               ; 0045514a | = "door-locked.wav" | s_door_locked_wav_0057d037+2
        ;   Label: LAB_0045514a
    MOV byte ptr [EDI],AL               ; 0045514c
    CMP AL,0x0                          ; 0045514e
    JZ 0x00455162                       ; 00455150
        ;   XREF to: 00455162 (CONDITIONAL_JUMP)  ; LAB_00455162
    MOV AL,byte ptr [ESI + 0x1]         ; 00455152 | s_door_locked_wav_0057d037+1 | s_door_locked_wav_0057d037+3
    ADD ESI,0x2                         ; 00455155
    MOV byte ptr [EDI + 0x1],AL         ; 00455158
    ADD EDI,0x2                         ; 0045515b
    CMP AL,0x0                          ; 0045515e
    JNZ 0x0045514a                      ; 00455160
        ;   XREF to: 0045514a (CONDITIONAL_JUMP)  ; LAB_0045514a
    POP EDI                             ; 00455162
        ;   Label: LAB_00455162
    MOV dword ptr [EBX + 0x988],0x0     ; 00455163
    MOV dword ptr [EBX + 0x9a4],0x0     ; 0045516d
    MOV dword ptr [EBX + 0x9a8],0x3f800000 ; 00455177
    MOV dword ptr [EBX + 0x9ac],0x3f800000 ; 00455181
    MOV dword ptr [EBX + 0x9b0],0x3f800000 ; 0045518b
    MOV dword ptr [EBX + 0x2cc],0x0     ; 00455195
    MOV byte ptr [EBX + 0x3a8],0x0      ; 0045519f
    MOV byte ptr [EBX + 0x40c],0x0      ; 004551a6
    MOV dword ptr [EBX + 0x9c0],0x0     ; 004551ad
    MOV dword ptr [EBX + 0x9c4],0x0     ; 004551b7
    MOV dword ptr [EBX + 0x9c8],0x1     ; 004551c1
    MOV dword ptr [EBX + 0x9cc],0x0     ; 004551cb
    MOV dword ptr [EBX + 0x9d0],0x3     ; 004551d5
    MOV EAX,EBX                         ; 004551df
    MOV dword ptr [EBX + 0x9d4],0x1     ; 004551e1
    POP EDI                             ; 004551eb
    POP ESI                             ; 004551ec
    POP EBX                             ; 004551ed
    RET                                 ; 004551ee

