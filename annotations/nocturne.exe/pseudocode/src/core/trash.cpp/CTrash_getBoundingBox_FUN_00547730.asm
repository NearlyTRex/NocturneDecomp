; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_trash_cpp_CTrash_getBoundingBox_FUN_00547730(int param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547730
        ;   Label: core_trash.cpp_CTrash_getBoundingBox_FUN_00547730
    PUSH ESI                            ; 00547731
    SUB ESP,0x18                        ; 00547732
    MOV ESI,dword ptr [ESP + 0x24]      ; 00547735
    MOV EBX,dword ptr [ESP + 0x28]      ; 00547739
    LEA EAX,[ESI + 0x150]               ; 0054773d
    PUSH EAX                            ; 00547743
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 00547744
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    MOV EAX,dword ptr [EAX + 0x350]     ; 00547749
    MOV EDX,dword ptr [EAX]             ; 0054774f
    LEA ECX,[EAX + 0x4]                 ; 00547751
    MOV dword ptr [EBX],EDX             ; 00547754
    LEA EDX,[EBX + 0x4]                 ; 00547756
    MOV ECX,dword ptr [ECX]             ; 00547759
    MOV dword ptr [EDX],ECX             ; 0054775b
    LEA ECX,[EAX + 0x8]                 ; 0054775d
    MOV ECX,dword ptr [ECX]             ; 00547760
    MOV dword ptr [EDX + 0x4],ECX       ; 00547762
    MOV ECX,dword ptr [EAX + 0xc]       ; 00547765
    ADD EAX,0xc                         ; 00547768
    MOV dword ptr [EDX + 0x8],ECX       ; 0054776b
    LEA ECX,[EAX + 0x4]                 ; 0054776e
    MOV ECX,dword ptr [ECX]             ; 00547771
    MOV dword ptr [EDX + 0xc],ECX       ; 00547773
    MOV EAX,dword ptr [EAX + 0x8]       ; 00547776
    MOV dword ptr [EDX + 0x10],EAX      ; 00547779
    ADD ESP,0x4                         ; 0054777c
    MOV EAX,dword ptr [ESI + 0x308]     ; 0054777f
    MOV dword ptr [ESP + 0x10],EAX      ; 00547785
    LEA EAX,[ESP + 0xc]                 ; 00547789
    PUSH EAX                            ; 0054778d
    LEA EAX,[ESP + 0x4]                 ; 0054778e
    PUSH EAX                            ; 00547792
    XOR EDX,EDX                         ; 00547793
    PUSH ESI                            ; 00547795
    MOV dword ptr [ESP + 0x18],EDX      ; 00547796
    MOV dword ptr [ESP + 0x20],EDX      ; 0054779a
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220 ; 0054779e
        ;   XREF to: 0040a220 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220()
    ADD ESP,0xc                         ; 005477a3
    FLD float ptr [EBX]                 ; 005477a6
    FADD float ptr [ESP]                ; 005477a8
    FLD float ptr [EBX + 0x4]           ; 005477ab
    FXCH                                ; 005477ae
    FSTP float ptr [EBX]                ; 005477b0
    FADD float ptr [ESP + 0x4]          ; 005477b2
    FLD float ptr [EBX + 0x8]           ; 005477b6
    FXCH                                ; 005477b9
    FSTP float ptr [EBX + 0x4]          ; 005477bb
    FADD float ptr [ESP + 0x8]          ; 005477be
    LEA EAX,[EBX + 0xc]                 ; 005477c2
    FSTP float ptr [EBX + 0x8]          ; 005477c5
    FLD float ptr [EAX]                 ; 005477c8
    FADD float ptr [ESP]                ; 005477ca
    FLD float ptr [EAX + 0x4]           ; 005477cd
    FXCH                                ; 005477d0
    FSTP float ptr [EAX]                ; 005477d2
    FADD float ptr [ESP + 0x4]          ; 005477d4
    FLD float ptr [EAX + 0x8]           ; 005477d8
    FXCH                                ; 005477db
    FSTP float ptr [EAX + 0x4]          ; 005477dd
    FADD float ptr [ESP + 0x8]          ; 005477e0
    FSTP float ptr [EAX + 0x8]          ; 005477e4
    MOV EAX,EBX                         ; 005477e7
    ADD ESP,0x18                        ; 005477e9
    POP ESI                             ; 005477ec
    POP EBX                             ; 005477ed
    RET                                 ; 005477ee

