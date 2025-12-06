; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_svetlana.cpp_AttackWithParentBone_FUN_005d9a10()
;
; Local Variables:
; undefined1       Stack[-0x84]:1  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined1       Stack[-0x48]:1  local_48
; undefined1       Stack[-0x3c]:1  local_3c
; undefined1       Stack[-0x30]:1  local_30
; undefined1       Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_svetlana.cpp_MotionControllerAdvance_ParentBones_FUN_005d9970 at 005d99a0
;
; Referenced Globals:
;   TerminatedCString s_core_svetlana_cpp_00654b0a
;   TerminatedCString s_Can_t_find_svetlana_s_pa_00654b1f
;   TerminatedCString s_svetlana_attack_wav_00654b41
;   TerminatedCString s_svetlana_miss_wav_00654b56
;   CDemonSet* g_CDemonSetPtr = 03114278
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 g_CDemonSetInstance.damage_listener_count
;   undefined4 g_CDemonSetInstance.damage_listeners
;   undefined4 DAT_03263318
;   undefined4 DAT_0326331c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d9a10
        ;   Label: core_svetlana.cpp_AttackWithParentBone_FUN_005d9a10
    PUSH ESI                            ; 005d9a11
    PUSH EDI                            ; 005d9a12
    PUSH EBP                            ; 005d9a13
    SUB ESP,0x74                        ; 005d9a14
    MOV EBP,dword ptr [ESP + 0x88]      ; 005d9a17
    MOV EDI,dword ptr [ESP + 0x8c]      ; 005d9a1e
    LEA EAX,[EBP + 0x158]               ; 005d9a25
    PUSH EAX                            ; 005d9a2b
    XOR EBX,EBX                         ; 005d9a2c
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 005d9a2e | CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)
    MOV EDX,0xffffffff                  ; 005d9a33
    MOV ESI,EAX                         ; 005d9a38
    ADD ESP,0x4                         ; 005d9a3a
    MOV ECX,dword ptr [EAX + 0x28558]   ; 005d9a3d
    MOV dword ptr [ESP + 0x6c],EDX      ; 005d9a43
    TEST ECX,ECX                        ; 005d9a47
    JLE 0x005d9a65                      ; 005d9a49 | LAB_005d9a65
        ;   XREF to: 005d9a65 (CONDITIONAL_JUMP)
    CMP EDI,dword ptr [ESI + 0x2857c]   ; 005d9a4b
        ;   Label: LAB_005d9a4b
    JZ 0x005d9ae2                       ; 005d9a51 | LAB_005d9ae2
        ;   XREF to: 005d9ae2 (CONDITIONAL_JUMP)
    INC EBX                             ; 005d9a57
    MOV EDX,dword ptr [EAX + 0x28558]   ; 005d9a58
    ADD ESI,0x24                        ; 005d9a5e
    CMP EBX,EDX                         ; 005d9a61
    JL 0x005d9a4b                       ; 005d9a63 | LAB_005d9a4b
        ;   XREF to: 005d9a4b (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x6c],-0x1     ; 005d9a65
        ;   Label: LAB_005d9a65
    JZ 0x005d9aeb                       ; 005d9a6a | LAB_005d9aeb
        ;   XREF to: 005d9aeb (CONDITIONAL_JUMP)
    PUSH EDI                            ; 005d9a70
        ;   Label: LAB_005d9a70
    LEA EAX,[ESP + 0x58]                ; 005d9a71
    PUSH EAX                            ; 005d9a75
    LEA EBX,[EBP + 0x158]               ; 005d9a76
    PUSH EBX                            ; 005d9a7c
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 005d9a7d | CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005d9a82
    PUSH EAX                            ; 005d9a85
    LEA EAX,[ESP + 0x64]                ; 005d9a86
    PUSH EAX                            ; 005d9a8a
    PUSH EBP                            ; 005d9a8b
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005d9a8c | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005d9a91
    MOV EDX,dword ptr [ESP + 0x6c]      ; 005d9a94
    PUSH EDX                            ; 005d9a98
    LEA EAX,[ESP + 0x40]                ; 005d9a99
    PUSH EAX                            ; 005d9a9d
    PUSH EBX                            ; 005d9a9e
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 005d9a9f | CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005d9aa4
    PUSH EAX                            ; 005d9aa7
    LEA EAX,[ESP + 0x4c]                ; 005d9aa8
    PUSH EAX                            ; 005d9aac
    PUSH EBP                            ; 005d9aad
    XOR ESI,ESI                         ; 005d9aae
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005d9ab0 | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005d9ab5
    XOR ECX,ECX                         ; 005d9ab8
    XOR EDI,EDI                         ; 005d9aba
    MOV dword ptr [ESP + 0x70],ECX      ; 005d9abc
    MOV EAX,[0x006810c8]                ; 005d9ac0 | CDemonSet * g_CDemonSetPtr
        ;   Label: LAB_005d9ac0
    CMP EDI,dword ptr [EAX + 0x14f098]  ; 005d9ac5 | g_CDemonSetInstance.damage_listener_count
    JGE 0x005d9b7b                      ; 005d9acb | LAB_005d9b7b
        ;   XREF to: 005d9b7b (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x14f09c] ; 005d9ad1 | g_CDemonSetInstance.damage_listeners
    CMP EBX,EBP                         ; 005d9ad8
    JNZ 0x005d9b12                      ; 005d9ada | LAB_005d9b12
        ;   XREF to: 005d9b12 (CONDITIONAL_JUMP)
    INC EDI                             ; 005d9adc
        ;   Label: LAB_005d9adc
    ADD ESI,0x4                         ; 005d9add
    JMP 0x005d9ac0                      ; 005d9ae0 | LAB_005d9ac0
        ;   XREF to: 005d9ac0 (UNCONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x6c],EBX      ; 005d9ae2
        ;   Label: LAB_005d9ae2
    JMP 0x005d9a65                      ; 005d9ae6 | LAB_005d9a65
        ;   XREF to: 005d9a65 (UNCONDITIONAL_JUMP)
    MOV ESI,0x654b0a                    ; 005d9aeb | = "..\\core\\svetlana.cpp" | s_core_svetlana_cpp_00654b0a = ..\core\svetlana.cpp
        ;   Label: LAB_005d9aeb
    MOV EAX,0x2f0                       ; 005d9af0
    PUSH 0x654b1f                       ; 005d9af5 | = "Can't find svetlana's parent bone" | s_Can_t_find_svetlana_s_pa_00654b1f = Can't find svetlana's parent bone
    MOV dword ptr [0x02f0ca48],ESI      ; 005d9afa | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005d9b00 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005d9b05 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005d9b0a
    JMP 0x005d9a70                      ; 005d9b0d | LAB_005d9a70
        ;   XREF to: 005d9a70 (UNCONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 005d9b12
        ;   Label: LAB_005d9b12
    PUSH EAX                            ; 005d9b14
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 005d9b15 | SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)
    MOV EAX,0x41700000                  ; 005d9b1a
    ADD ESP,0x4                         ; 005d9b1f
    MOV EDX,0x3f333333                  ; 005d9b22
    MOV dword ptr [ESP + 0x4],EAX       ; 005d9b27
    MOV EAX,0x3                         ; 005d9b2b
    PUSH 0x0                            ; 005d9b30
    MOV dword ptr [ESP + 0x2c],EAX      ; 005d9b32
    LEA EAX,[ESP + 0x4]                 ; 005d9b36
    MOV ECX,0x67                        ; 005d9b3a
    PUSH EAX                            ; 005d9b3f
    LEA EAX,[ESP + 0x50]                ; 005d9b40
    MOV dword ptr [ESP + 0x34],EDX      ; 005d9b44
    PUSH EAX                            ; 005d9b48
    LEA EAX,[ESP + 0x6c]                ; 005d9b49
    MOV dword ptr [ESP + 0x3c],ECX      ; 005d9b4d
    PUSH EAX                            ; 005d9b51
    MOV EDX,dword ptr [EBX + 0x154]     ; 005d9b52
    PUSH EBX                            ; 005d9b58
    CALL dword ptr [EDX + 0x118]        ; 005d9b59
    ADD ESP,0x14                        ; 005d9b5f
    TEST EAX,EAX                        ; 005d9b62
    JZ 0x005d9adc                       ; 005d9b64 | LAB_005d9adc
        ;   XREF to: 005d9adc (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x70],0x1      ; 005d9b6a
    INC EDI                             ; 005d9b72
    ADD ESI,0x4                         ; 005d9b73
    JMP 0x005d9ac0                      ; 005d9b76 | LAB_005d9ac0
        ;   XREF to: 005d9ac0 (UNCONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x70],0x0      ; 005d9b7b
        ;   Label: LAB_005d9b7b
    JZ 0x005d9b9c                       ; 005d9b80 | LAB_005d9b9c
        ;   XREF to: 005d9b9c (CONDITIONAL_JUMP)
    PUSH 0x654b41                       ; 005d9b82 | = "svetlana-attack?.wav" | s_svetlana_attack_wav_00654b41 = svetlana-attack?.wav
    MOV EAX,dword ptr [EBP + 0x154]     ; 005d9b87
        ;   Label: LAB_005d9b87
    PUSH EBP                            ; 005d9b8d
    CALL dword ptr [EAX + 0x24]         ; 005d9b8e
    ADD ESP,0x8                         ; 005d9b91
    ADD ESP,0x74                        ; 005d9b94
    POP EBP                             ; 005d9b97
    POP EDI                             ; 005d9b98
    POP ESI                             ; 005d9b99
    POP EBX                             ; 005d9b9a
    RET                                 ; 005d9b9b
    PUSH 0x654b56                       ; 005d9b9c | = "svetlana-miss?.wav" | s_svetlana_miss_wav_00654b56 = svetlana-miss?.wav
        ;   Label: LAB_005d9b9c
    JMP 0x005d9b87                      ; 005d9ba1 | LAB_005d9b87
        ;   XREF to: 005d9b87 (UNCONDITIONAL_JUMP)

