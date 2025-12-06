; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_door.cpp_CDoor_serialize_FUN_00480aa0(CDoor * this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_modelName_00621159
;   TerminatedCString s_doorType_00621163
;   TerminatedCString s_doorSide_0062116c
;   TerminatedCString s_doorState_00621175
;   TerminatedCString s_doorSwing_0062117f
;   TerminatedCString s_openEvent_00621189
;   TerminatedCString s_closeEvent_00621193
;   TerminatedCString s_openSound_0062119e
;   TerminatedCString s_closeSound_006211a8
;   TerminatedCString s_keyMask_006211b3
;   TerminatedCString s_origPos_006211bb
;   TerminatedCString s_origOrient_006211c3
;   TerminatedCString s_param_006211ce
;   TerminatedCString s_maxParam_006211d4
;   TerminatedCString s_openSpeed_006211dd
;   ... and 17 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
;   core_actor.cpp_serializeFloat_FUN_0040b770
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0
;   core_actor.cpp_serializeRules_FUN_0040c000
;   core_actor.cpp_serializeString_FUN_0040b5c0
;   core_actor.cpp_serializeVector_FUN_0040b340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480aa0
        ;   Label: core_door.cpp_CDoor_serialize_FUN_00480aa0
    PUSH EDI                            ; 00480aa1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00480aa2
    PUSH EBX                            ; 00480aa6
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 00480aa7 | void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00480aac
    PUSH 0x621159                       ; 00480aaf | = "modelName" | s_modelName_00621159 = modelName
    LEA EDI,[EBX + 0x158]               ; 00480ab4
    PUSH EDI                            ; 00480aba
    CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0 ; 00480abb | void core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00480ac0
    PUSH 0x621163                       ; 00480ac3 | = "doorType" | s_doorType_00621163 = doorType
    LEA EDI,[EBX + 0x2d8]               ; 00480ac8
    PUSH EDI                            ; 00480ace
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00480acf | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00480ad4
    PUSH 0x62116c                       ; 00480ad7 | = "doorSide" | s_doorSide_0062116c = doorSide
    LEA EDI,[EBX + 0x2dc]               ; 00480adc
    PUSH EDI                            ; 00480ae2
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00480ae3 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00480ae8
    PUSH 0x621175                       ; 00480aeb | = "doorState" | s_doorState_00621175 = doorState
    LEA EDI,[EBX + 0x2e0]               ; 00480af0
    PUSH EDI                            ; 00480af6
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00480af7 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00480afc
    PUSH 0x62117f                       ; 00480aff | = "doorSwing" | s_doorSwing_0062117f = doorSwing
    LEA EDI,[EBX + 0x2e4]               ; 00480b04
    PUSH EDI                            ; 00480b0a
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00480b0b | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00480b10
    PUSH 0x621189                       ; 00480b13 | = "openEvent" | s_openEvent_00621189 = openEvent
    LEA EDI,[EBX + 0x2e8]               ; 00480b18
    PUSH EDI                            ; 00480b1e
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 00480b1f | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00480b24
    PUSH 0x621193                       ; 00480b27 | = "closeEvent" | s_closeEvent_00621193 = closeEvent
    LEA EDI,[EBX + 0x34c]               ; 00480b2c
    PUSH EDI                            ; 00480b32
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 00480b33 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00480b38
    PUSH 0x62119e                       ; 00480b3b | = "openSound" | s_openSound_0062119e = openSound
    LEA EDI,[EBX + 0x864]               ; 00480b40
    PUSH EDI                            ; 00480b46
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 00480b47 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00480b4c
    PUSH 0x6211a8                       ; 00480b4f | = "closeSound" | s_closeSound_006211a8 = closeSound
    LEA EDI,[EBX + 0x8c8]               ; 00480b54
    PUSH EDI                            ; 00480b5a
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 00480b5b | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00480b60
    PUSH 0x6211b3                       ; 00480b63 | = "keyMask" | s_keyMask_006211b3 = keyMask
    LEA EDI,[EBX + 0x990]               ; 00480b68
    PUSH EDI                            ; 00480b6e
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00480b6f | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00480b74
    PUSH 0x6211bb                       ; 00480b77 | = "origPos" | s_origPos_006211bb = origPos
    LEA EDI,[EBX + 0x994]               ; 00480b7c
    PUSH EDI                            ; 00480b82
    CALL core_actor.cpp_serializeVector_FUN_0040b340 ; 00480b83 | void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00480b88
    PUSH 0x6211c3                       ; 00480b8b | = "origOrient" | s_origOrient_006211c3 = origOrient
    LEA EDI,[EBX + 0x9a0]               ; 00480b90
    PUSH EDI                            ; 00480b96
    CALL core_actor.cpp_serializeVector_FUN_0040b340 ; 00480b97 | void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00480b9c
    PUSH 0x6211ce                       ; 00480b9f | = "param" | s_param_006211ce = param
    LEA EDI,[EBX + 0x9ac]               ; 00480ba4
    PUSH EDI                            ; 00480baa
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 00480bab | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00480bb0
    PUSH 0x6211d4                       ; 00480bb3 | = "maxParam" | s_maxParam_006211d4 = maxParam
    LEA EDI,[EBX + 0x9b0]               ; 00480bb8
    PUSH EDI                            ; 00480bbe
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 00480bbf | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00480bc4
    PUSH 0x6211dd                       ; 00480bc7 | = "openSpeed" | s_openSpeed_006211dd = openSpeed
    LEA EDI,[EBX + 0x9b4]               ; 00480bcc
    PUSH EDI                            ; 00480bd2
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 00480bd3 | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00480bd8
    PUSH 0x6211e7                       ; 00480bdb | = "closeSpeed" | s_closeSpeed_006211e7 = closeSpeed
    LEA EDI,[EBX + 0x9b8]               ; 00480be0
    PUSH EDI                            ; 00480be6
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 00480be7 | void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x00670378]      ; 00480bec | undefined4 g_CDoorClassVersion
    ADD ESP,0x8                         ; 00480bf2
    CMP EDX,0x2                         ; 00480bf5
    JGE 0x00480cf3                      ; 00480bf8 | LAB_00480cf3
        ;   XREF to: 00480cf3 (CONDITIONAL_JUMP)
    CMP dword ptr [0x00670378],0x3      ; 00480bfe | undefined4 g_CDoorClassVersion
        ;   Label: LAB_00480bfe
    JL 0x00480c2f                       ; 00480c05 | LAB_00480c2f
        ;   XREF to: 00480c2f (CONDITIONAL_JUMP)
    PUSH 0x6211fd                       ; 00480c07 | = "eventToTriggerWhenOpen" | s_eventToTriggerWhenOpen_006211fd = eventToTriggerWhenOpen
    LEA EDI,[EBX + 0x3b0]               ; 00480c0c
    PUSH EDI                            ; 00480c12
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 00480c13 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00480c18
    PUSH 0x621214                       ; 00480c1b | = "eventToTriggerWhenClosed" | s_eventToTriggerWhenClosed_00621214 = eventToTriggerWhenClosed
    LEA EDI,[EBX + 0x414]               ; 00480c20
    PUSH EDI                            ; 00480c26
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 00480c27 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00480c2c
    CMP dword ptr [0x00670378],0x4      ; 00480c2f | undefined4 g_CDoorClassVersion
        ;   Label: LAB_00480c2f
    JL 0x00480c4c                       ; 00480c36 | LAB_00480c4c
        ;   XREF to: 00480c4c (CONDITIONAL_JUMP)
    PUSH 0x62122d                       ; 00480c38 | = "oneShot" | s_oneShot_0062122d = oneShot
    LEA EDI,[EBX + 0x9c8]               ; 00480c3d
    PUSH EDI                            ; 00480c43
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00480c44 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00480c49
    MOV EDI,dword ptr [0x00670378]      ; 00480c4c | undefined4 g_CDoorClassVersion
        ;   Label: LAB_00480c4c
    CMP EDI,0x7                         ; 00480c52
    JL 0x00480d0c                       ; 00480c55 | LAB_00480d0c
        ;   XREF to: 00480d0c (CONDITIONAL_JUMP)
    PUSH 0x621235                       ; 00480c5b | = "openRules" | s_openRules_00621235 = openRules
    LEA EDI,[EBX + 0x478]               ; 00480c60
    PUSH EDI                            ; 00480c66
    CALL core_actor.cpp_serializeRules_FUN_0040c000 ; 00480c67 | void core_actor.cpp_serializeRules_FUN_0040c000(void * rules, char * property_name)
        ;   XREF to: 0040c000 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00480c6c
    CMP dword ptr [0x00670378],0x6      ; 00480c6f | undefined4 g_CDoorClassVersion
        ;   Label: LAB_00480c6f
    JL 0x00480c8c                       ; 00480c76 | LAB_00480c8c
        ;   XREF to: 00480c8c (CONDITIONAL_JUMP)
    PUSH 0x621254                       ; 00480c78 | = "blockVirtualDirectorFlag" | s_blockVirtualDirectorFlag_00621254 = blockVirtualDirectorFlag
    LEA EDI,[EBX + 0x9d0]               ; 00480c7d
    PUSH EDI                            ; 00480c83
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00480c84 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00480c89
    CMP dword ptr [0x00670378],0x8      ; 00480c8c | undefined4 g_CDoorClassVersion
        ;   Label: LAB_00480c8c
    JL 0x00480ca9                       ; 00480c93 | LAB_00480ca9
        ;   XREF to: 00480ca9 (CONDITIONAL_JUMP)
    PUSH 0x62126d                       ; 00480c95 | = "plotAsBoxInShadow" | s_plotAsBoxInShadow_0062126d = plotAsBoxInShadow
    LEA EDI,[EBX + 0x9d4]               ; 00480c9a
    PUSH EDI                            ; 00480ca0
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00480ca1 | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00480ca6
    CMP dword ptr [0x00670378],0x9      ; 00480ca9 | undefined4 g_CDoorClassVersion
        ;   Label: LAB_00480ca9
    JL 0x00480cc6                       ; 00480cb0 | LAB_00480cc6
        ;   XREF to: 00480cc6 (CONDITIONAL_JUMP)
    PUSH 0x62127f                       ; 00480cb2 | = "allowedSides" | s_allowedSides_0062127f = allowedSides
    LEA EDI,[EBX + 0x9d8]               ; 00480cb7
    PUSH EDI                            ; 00480cbd
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00480cbe | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00480cc3
    CMP dword ptr [0x00670378],0xa      ; 00480cc6 | undefined4 g_CDoorClassVersion
        ;   Label: LAB_00480cc6
    JL 0x00480ce3                       ; 00480ccd | LAB_00480ce3
        ;   XREF to: 00480ce3 (CONDITIONAL_JUMP)
    PUSH 0x62128c                       ; 00480ccf | = "allowBulletHoles" | s_allowBulletHoles_0062128c = allowBulletHoles
    LEA EDI,[EBX + 0x9dc]               ; 00480cd4
    PUSH EDI                            ; 00480cda
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00480cdb | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00480ce0
    CMP dword ptr [0x00670378],0xb      ; 00480ce3 | undefined4 g_CDoorClassVersion
        ;   Label: LAB_00480ce3
    JGE 0x00480d78                      ; 00480cea | LAB_00480d78
        ;   XREF to: 00480d78 (CONDITIONAL_JUMP)
    POP EDI                             ; 00480cf0
    POP EBX                             ; 00480cf1
    RET                                 ; 00480cf2
    PUSH 0x6211f2                       ; 00480cf3 | = "groundType" | s_groundType_006211f2 = groundType
        ;   Label: LAB_00480cf3
    LEA EDI,[EBX + 0x2d4]               ; 00480cf8
    PUSH EDI                            ; 00480cfe
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00480cff | void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00480d04
    JMP 0x00480bfe                      ; 00480d07 | LAB_00480bfe
        ;   XREF to: 00480bfe (UNCONDITIONAL_JUMP)
    CMP EDI,0x5                         ; 00480d0c
        ;   Label: LAB_00480d0c
    JL 0x00480c6f                       ; 00480d0f | LAB_00480c6f
        ;   XREF to: 00480c6f (CONDITIONAL_JUMP)
    PUSH 0x62123f                       ; 00480d15 | = "scriptOpenEvent" | s_scriptOpenEvent_0062123f = scriptOpenEvent
    LEA EDI,[EBX + 0x670]               ; 00480d1a
    PUSH EDI                            ; 00480d20
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 00480d21 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    MOV AH,byte ptr [EBX + 0x670]       ; 00480d26
    ADD ESP,0x8                         ; 00480d2c
    TEST AH,AH                          ; 00480d2f
    JNZ 0x00480d42                      ; 00480d31 | LAB_00480d42
        ;   XREF to: 00480d42 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x478],0x0     ; 00480d33
    JMP 0x00480c6f                      ; 00480d3d | LAB_00480c6f
        ;   XREF to: 00480c6f (UNCONDITIONAL_JUMP)
    PUSH ESI                            ; 00480d42
        ;   Label: LAB_00480d42
    MOV ESI,0x62124f                    ; 00480d43 | = "true" | s_true_0062124f = true
    LEA EDI,[EBX + 0x47c]               ; 00480d48
    PUSH EDI                            ; 00480d4e
    MOV AL,byte ptr [ESI]               ; 00480d4f | = "true" | s_true_0062124f = true
        ;   Label: LAB_00480d4f
    MOV byte ptr [EDI],AL               ; 00480d51
    CMP AL,0x0                          ; 00480d53
    JZ 0x00480d67                       ; 00480d55 | LAB_00480d67
        ;   XREF to: 00480d67 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00480d57 | DAT_00621250
    ADD ESI,0x2                         ; 00480d5a
    MOV byte ptr [EDI + 0x1],AL         ; 00480d5d
    ADD EDI,0x2                         ; 00480d60
    CMP AL,0x0                          ; 00480d63
    JNZ 0x00480d4f                      ; 00480d65 | LAB_00480d4f
        ;   XREF to: 00480d4f (CONDITIONAL_JUMP)
    POP EDI                             ; 00480d67
        ;   Label: LAB_00480d67
    MOV dword ptr [EBX + 0x478],0x1     ; 00480d68
    POP ESI                             ; 00480d72
    JMP 0x00480c6f                      ; 00480d73 | LAB_00480c6f
        ;   XREF to: 00480c6f (UNCONDITIONAL_JUMP)
    PUSH 0x62129d                       ; 00480d78 | = "lockedSound" | s_lockedSound_0062129d = lockedSound
        ;   Label: LAB_00480d78
    ADD EBX,0x92c                       ; 00480d7d
    PUSH EBX                            ; 00480d83
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 00480d84 | void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00480d89
    POP EDI                             ; 00480d8c
    POP EBX                             ; 00480d8d
    RET                                 ; 00480d8e

