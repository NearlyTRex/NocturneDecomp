; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlies * core_gore_cpp_FUN_004ced40(undefined4 param_1,undefined4 *param_2,undefined4 param_3,float param_4,undefined4 *param_5)
;
;
; XREF[1]:
;   core_gore.cpp_CGore_spawnFliesOnActor_FUN_004cee30 at 004cee4d
;
; Referenced Globals:
;   TerminatedCString s_core_gore_cpp_005c4751
;   TerminatedCString s_Can_t_create_flies_005c4762
;   undefined4 DAT_005c4779
;   undefined4 DAT_00600530
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01d81080
;
; Called Functions:
;   core_flies.cpp_CFlies_ctor_FUN_004ad7b0
;   core_main.c_FUN_004e4330
;   core_mission.cpp_CDemonMission_generateActorName_FUN_004f7530
;   core_mission.cpp_FUN_004f6930
;   crt_unknown.c_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ced40
        ;   Label: core_gore.cpp_FUN_004ced40
    PUSH ESI                            ; 004ced41
    PUSH EDI                            ; 004ced42
    MOV EDI,dword ptr [ESP + 0x14]      ; 004ced43
    MOV ESI,dword ptr [ESP + 0x20]      ; 004ced47
    PUSH 0x2a20                         ; 004ced4b
    CALL crt_unknown.c_FUN_005a3cb2     ; 004ced50
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004ced55
    TEST EAX,EAX                        ; 004ced58
    JNZ 0x004cee1a                      ; 004ced5a
        ;   XREF to: 004cee1a (CONDITIONAL_JUMP)  ; LAB_004cee1a
    MOV EBX,EAX                         ; 004ced60
        ;   Label: LAB_004ced60
    TEST EAX,EAX                        ; 004ced62
    JNZ 0x004ced89                      ; 004ced64
        ;   XREF to: 004ced89 (CONDITIONAL_JUMP)  ; LAB_004ced89
    MOV EDX,0x5c4751                    ; 004ced66 | = "..\\core\\gore.cpp"
    MOV ECX,0x6aa                       ; 004ced6b
    PUSH 0x5c4762                       ; 004ced70 | = "Can't create flies!"
    MOV dword ptr [0x01d71de0],EDX      ; 004ced75 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004ced7b | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004ced81
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004ced86
    FLD float ptr [ESP + 0x1c]          ; 004ced89
        ;   Label: LAB_004ced89
    FDIVR double ptr [0x005c4779]       ; 004ced8d | DAT_005c4779
    LEA EAX,[EBX + 0x20]                ; 004ced93
    MOV EDX,dword ptr [EDI]             ; 004ced96
    MOV dword ptr [EAX],EDX             ; 004ced98
    MOV EDX,dword ptr [EDI + 0x4]       ; 004ced9a
    MOV dword ptr [EAX + 0x4],EDX       ; 004ced9d
    MOV EDX,dword ptr [EDI + 0x8]       ; 004ceda0
    MOV dword ptr [EAX + 0x8],EDX       ; 004ceda3
    MOV EAX,[0x00600530]                ; 004ceda6 | DAT_00600530
    MOV EAX,dword ptr [EAX]             ; 004cedab | DAT_01d81080
    MOV dword ptr [EBX + 0x164],0x0     ; 004cedad
    MOV dword ptr [EBX + 0x2c],EAX      ; 004cedb7
    MOV EAX,dword ptr [ESP + 0x18]      ; 004cedba
    MOV dword ptr [EBX + 0x2a0c],EAX    ; 004cedbe
    FSTP float ptr [EBX + 0x2a14]       ; 004cedc4
    TEST ESI,ESI                        ; 004cedca
    JZ 0x004cede8                       ; 004cedcc
        ;   XREF to: 004cede8 (CONDITIONAL_JUMP)  ; LAB_004cede8
    LEA EAX,[EBX + 0x158]               ; 004cedce
    CMP EAX,ESI                         ; 004cedd4
    JZ 0x004cede8                       ; 004cedd6
        ;   XREF to: 004cede8 (CONDITIONAL_JUMP)  ; LAB_004cede8
    MOV EDX,dword ptr [ESI]             ; 004cedd8
    MOV dword ptr [EAX],EDX             ; 004cedda
    MOV EDX,dword ptr [ESI + 0x4]       ; 004ceddc
    MOV dword ptr [EAX + 0x4],EDX       ; 004ceddf
    MOV EDX,dword ptr [ESI + 0x8]       ; 004cede2
    MOV dword ptr [EAX + 0x8],EDX       ; 004cede5
    PUSH EBX                            ; 004cede8
        ;   Label: LAB_004cede8
    MOV EAX,dword ptr [EBX + 0x154]     ; 004cede9
    CALL dword ptr [EAX]                ; 004cedef
    ADD ESP,0x4                         ; 004cedf1
    PUSH EBX                            ; 004cedf4
    MOV ESI,dword ptr [0x00600530]      ; 004cedf5 | DAT_00600530
    PUSH ESI                            ; 004cedfb | DAT_01d81080
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004f7530 ; 004cedfc
        ;   XREF to: 004f7530 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_004f7530(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004cee01
    PUSH EBX                            ; 004cee04
    MOV EDI,dword ptr [0x00600530]      ; 004cee05 | DAT_00600530
    PUSH EDI                            ; 004cee0b | DAT_01d81080
    CALL core_mission.cpp_FUN_004f6930  ; 004cee0c
        ;   XREF to: 004f6930 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_FUN_004f6930(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004cee11
    MOV EAX,EBX                         ; 004cee14
    POP EDI                             ; 004cee16
    POP ESI                             ; 004cee17
    POP EBX                             ; 004cee18
    RET                                 ; 004cee19
    PUSH EAX                            ; 004cee1a
        ;   Label: LAB_004cee1a
    CALL core_flies.cpp_CFlies_ctor_FUN_004ad7b0 ; 004cee1b
        ;   XREF to: 004ad7b0 (UNCONDITIONAL_CALL)  ; CFlies * core_flies.cpp_CFlies_ctor_FUN_004ad7b0(CFlies * this_ptr)
    ADD ESP,0x4                         ; 004cee20
    JMP 0x004ced60                      ; 004cee23
        ;   XREF to: 004ced60 (UNCONDITIONAL_JUMP)  ; LAB_004ced60

