; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_door_cpp_CDoor_serialize_FUN_00480aa0(CDoor *this_ptr)
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
    CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 ; 00480aa7
        ;   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00480aac
    PUSH 0x621159                       ; 00480aaf | = "modelName"
    LEA EDI,[EBX + 0x158]               ; 00480ab4
    PUSH EDI                            ; 00480aba
    CALL core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0 ; 00480abb
        ;   XREF to: 0040b8f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00480ac0
    PUSH 0x621163                       ; 00480ac3 | = "doorType"
    LEA EDI,[EBX + 0x2d8]               ; 00480ac8
    PUSH EDI                            ; 00480ace
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00480acf
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00480ad4
    PUSH 0x62116c                       ; 00480ad7 | = "doorSide"
    LEA EDI,[EBX + 0x2dc]               ; 00480adc
    PUSH EDI                            ; 00480ae2
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00480ae3
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00480ae8
    PUSH 0x621175                       ; 00480aeb | = "doorState"
    LEA EDI,[EBX + 0x2e0]               ; 00480af0
    PUSH EDI                            ; 00480af6
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00480af7
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00480afc
    PUSH 0x62117f                       ; 00480aff | = "doorSwing"
    LEA EDI,[EBX + 0x2e4]               ; 00480b04
    PUSH EDI                            ; 00480b0a
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00480b0b
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00480b10
    PUSH 0x621189                       ; 00480b13 | = "openEvent"
    LEA EDI,[EBX + 0x2e8]               ; 00480b18
    PUSH EDI                            ; 00480b1e
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 00480b1f
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00480b24
    PUSH 0x621193                       ; 00480b27 | = "closeEvent"
    LEA EDI,[EBX + 0x34c]               ; 00480b2c
    PUSH EDI                            ; 00480b32
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 00480b33
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00480b38
    PUSH 0x62119e                       ; 00480b3b | = "openSound"
    LEA EDI,[EBX + 0x864]               ; 00480b40
    PUSH EDI                            ; 00480b46
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 00480b47
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00480b4c
    PUSH 0x6211a8                       ; 00480b4f | = "closeSound"
    LEA EDI,[EBX + 0x8c8]               ; 00480b54
    PUSH EDI                            ; 00480b5a
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 00480b5b
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00480b60
    PUSH 0x6211b3                       ; 00480b63 | = "keyMask"
    LEA EDI,[EBX + 0x990]               ; 00480b68
    PUSH EDI                            ; 00480b6e
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00480b6f
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00480b74
    PUSH 0x6211bb                       ; 00480b77 | = "origPos"
    LEA EDI,[EBX + 0x994]               ; 00480b7c
    PUSH EDI                            ; 00480b82
    CALL core_actor.cpp_serializeVector_FUN_0040b340 ; 00480b83
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 00480b88
    PUSH 0x6211c3                       ; 00480b8b | = "origOrient"
    LEA EDI,[EBX + 0x9a0]               ; 00480b90
    PUSH EDI                            ; 00480b96
    CALL core_actor.cpp_serializeVector_FUN_0040b340 ; 00480b97
        ;   XREF to: 0040b340 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeVector_FUN_0040b340(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 00480b9c
    PUSH 0x6211ce                       ; 00480b9f | = "param"
    LEA EDI,[EBX + 0x9ac]               ; 00480ba4
    PUSH EDI                            ; 00480baa
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 00480bab
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00480bb0
    PUSH 0x6211d4                       ; 00480bb3 | = "maxParam"
    LEA EDI,[EBX + 0x9b0]               ; 00480bb8
    PUSH EDI                            ; 00480bbe
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 00480bbf
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00480bc4
    PUSH 0x6211dd                       ; 00480bc7 | = "openSpeed"
    LEA EDI,[EBX + 0x9b4]               ; 00480bcc
    PUSH EDI                            ; 00480bd2
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 00480bd3
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00480bd8
    PUSH 0x6211e7                       ; 00480bdb | = "closeSpeed"
    LEA EDI,[EBX + 0x9b8]               ; 00480be0
    PUSH EDI                            ; 00480be6
    CALL core_actor.cpp_serializeFloat_FUN_0040b770 ; 00480be7
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
    MOV EDX,dword ptr [0x00670378]      ; 00480bec | g_CDoorClassVersion
    ADD ESP,0x8                         ; 00480bf2
    CMP EDX,0x2                         ; 00480bf5
    JGE 0x00480cf3                      ; 00480bf8
        ;   XREF to: 00480cf3 (CONDITIONAL_JUMP)  ; LAB_00480cf3
    CMP dword ptr [0x00670378],0x3      ; 00480bfe | g_CDoorClassVersion
        ;   Label: LAB_00480bfe
    JL 0x00480c2f                       ; 00480c05
        ;   XREF to: 00480c2f (CONDITIONAL_JUMP)  ; LAB_00480c2f
    PUSH 0x6211fd                       ; 00480c07 | = "eventToTriggerWhenOpen"
    LEA EDI,[EBX + 0x3b0]               ; 00480c0c
    PUSH EDI                            ; 00480c12
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 00480c13
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00480c18
    PUSH 0x621214                       ; 00480c1b | = "eventToTriggerWhenClosed"
    LEA EDI,[EBX + 0x414]               ; 00480c20
    PUSH EDI                            ; 00480c26
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 00480c27
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00480c2c
    CMP dword ptr [0x00670378],0x4      ; 00480c2f | g_CDoorClassVersion
        ;   Label: LAB_00480c2f
    JL 0x00480c4c                       ; 00480c36
        ;   XREF to: 00480c4c (CONDITIONAL_JUMP)  ; LAB_00480c4c
    PUSH 0x62122d                       ; 00480c38 | = "oneShot"
    LEA EDI,[EBX + 0x9c8]               ; 00480c3d
    PUSH EDI                            ; 00480c43
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00480c44
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00480c49
    MOV EDI,dword ptr [0x00670378]      ; 00480c4c | g_CDoorClassVersion
        ;   Label: LAB_00480c4c
    CMP EDI,0x7                         ; 00480c52
    JL 0x00480d0c                       ; 00480c55
        ;   XREF to: 00480d0c (CONDITIONAL_JUMP)  ; LAB_00480d0c
    PUSH 0x621235                       ; 00480c5b | = "openRules"
    LEA EDI,[EBX + 0x478]               ; 00480c60
    PUSH EDI                            ; 00480c66
    CALL core_actor.cpp_serializeRules_FUN_0040c000 ; 00480c67
        ;   XREF to: 0040c000 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeRules_FUN_0040c000(void * rules, char * property_name)
    ADD ESP,0x8                         ; 00480c6c
    CMP dword ptr [0x00670378],0x6      ; 00480c6f | g_CDoorClassVersion
        ;   Label: LAB_00480c6f
    JL 0x00480c8c                       ; 00480c76
        ;   XREF to: 00480c8c (CONDITIONAL_JUMP)  ; LAB_00480c8c
    PUSH 0x621254                       ; 00480c78 | = "blockVirtualDirectorFlag"
    LEA EDI,[EBX + 0x9d0]               ; 00480c7d
    PUSH EDI                            ; 00480c83
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00480c84
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00480c89
    CMP dword ptr [0x00670378],0x8      ; 00480c8c | g_CDoorClassVersion
        ;   Label: LAB_00480c8c
    JL 0x00480ca9                       ; 00480c93
        ;   XREF to: 00480ca9 (CONDITIONAL_JUMP)  ; LAB_00480ca9
    PUSH 0x62126d                       ; 00480c95 | = "plotAsBoxInShadow"
    LEA EDI,[EBX + 0x9d4]               ; 00480c9a
    PUSH EDI                            ; 00480ca0
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00480ca1
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00480ca6
    CMP dword ptr [0x00670378],0x9      ; 00480ca9 | g_CDoorClassVersion
        ;   Label: LAB_00480ca9
    JL 0x00480cc6                       ; 00480cb0
        ;   XREF to: 00480cc6 (CONDITIONAL_JUMP)  ; LAB_00480cc6
    PUSH 0x62127f                       ; 00480cb2 | = "allowedSides"
    LEA EDI,[EBX + 0x9d8]               ; 00480cb7
    PUSH EDI                            ; 00480cbd
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00480cbe
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00480cc3
    CMP dword ptr [0x00670378],0xa      ; 00480cc6 | g_CDoorClassVersion
        ;   Label: LAB_00480cc6
    JL 0x00480ce3                       ; 00480ccd
        ;   XREF to: 00480ce3 (CONDITIONAL_JUMP)  ; LAB_00480ce3
    PUSH 0x62128c                       ; 00480ccf | = "allowBulletHoles"
    LEA EDI,[EBX + 0x9dc]               ; 00480cd4
    PUSH EDI                            ; 00480cda
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00480cdb
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00480ce0
    CMP dword ptr [0x00670378],0xb      ; 00480ce3 | g_CDoorClassVersion
        ;   Label: LAB_00480ce3
    JGE 0x00480d78                      ; 00480cea
        ;   XREF to: 00480d78 (CONDITIONAL_JUMP)  ; LAB_00480d78
    POP EDI                             ; 00480cf0
    POP EBX                             ; 00480cf1
    RET                                 ; 00480cf2
    PUSH 0x6211f2                       ; 00480cf3 | = "groundType"
        ;   Label: LAB_00480cf3
    LEA EDI,[EBX + 0x2d4]               ; 00480cf8
    PUSH EDI                            ; 00480cfe
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 00480cff
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00480d04
    JMP 0x00480bfe                      ; 00480d07
        ;   XREF to: 00480bfe (UNCONDITIONAL_JUMP)  ; LAB_00480bfe
    CMP EDI,0x5                         ; 00480d0c
        ;   Label: LAB_00480d0c
    JL 0x00480c6f                       ; 00480d0f
        ;   XREF to: 00480c6f (CONDITIONAL_JUMP)  ; LAB_00480c6f
    PUSH 0x62123f                       ; 00480d15 | = "scriptOpenEvent"
    LEA EDI,[EBX + 0x670]               ; 00480d1a
    PUSH EDI                            ; 00480d20
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 00480d21
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    MOV AH,byte ptr [EBX + 0x670]       ; 00480d26
    ADD ESP,0x8                         ; 00480d2c
    TEST AH,AH                          ; 00480d2f
    JNZ 0x00480d42                      ; 00480d31
        ;   XREF to: 00480d42 (CONDITIONAL_JUMP)  ; LAB_00480d42
    MOV dword ptr [EBX + 0x478],0x0     ; 00480d33
    JMP 0x00480c6f                      ; 00480d3d
        ;   XREF to: 00480c6f (UNCONDITIONAL_JUMP)  ; LAB_00480c6f
    PUSH ESI                            ; 00480d42
        ;   Label: LAB_00480d42
    MOV ESI,0x62124f                    ; 00480d43 | = "true"
    LEA EDI,[EBX + 0x47c]               ; 00480d48
    PUSH EDI                            ; 00480d4e
    MOV AL,byte ptr [ESI]               ; 00480d4f | = "true" | DAT_00621251
        ;   Label: LAB_00480d4f
    MOV byte ptr [EDI],AL               ; 00480d51
    CMP AL,0x0                          ; 00480d53
    JZ 0x00480d67                       ; 00480d55
        ;   XREF to: 00480d67 (CONDITIONAL_JUMP)  ; LAB_00480d67
    MOV AL,byte ptr [ESI + 0x1]         ; 00480d57 | DAT_00621250 | DAT_00621252
    ADD ESI,0x2                         ; 00480d5a
    MOV byte ptr [EDI + 0x1],AL         ; 00480d5d
    ADD EDI,0x2                         ; 00480d60
    CMP AL,0x0                          ; 00480d63
    JNZ 0x00480d4f                      ; 00480d65
        ;   XREF to: 00480d4f (CONDITIONAL_JUMP)  ; LAB_00480d4f
    POP EDI                             ; 00480d67
        ;   Label: LAB_00480d67
    MOV dword ptr [EBX + 0x478],0x1     ; 00480d68
    POP ESI                             ; 00480d72
    JMP 0x00480c6f                      ; 00480d73
        ;   XREF to: 00480c6f (UNCONDITIONAL_JUMP)  ; LAB_00480c6f
    PUSH 0x62129d                       ; 00480d78 | = "lockedSound"
        ;   Label: LAB_00480d78
    ADD EBX,0x92c                       ; 00480d7d
    PUSH EBX                            ; 00480d83
    CALL core_actor.cpp_serializeString_FUN_0040b5c0 ; 00480d84
        ;   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00480d89
    POP EDI                             ; 00480d8c
    POP EBX                             ; 00480d8d
    RET                                 ; 00480d8e

