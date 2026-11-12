; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_door_cpp_CDoor_archive_FUN_00464cd0(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_modelName_005bbd92+1
;   TerminatedCString s_doorType_005bbd9d
;   TerminatedCString s_doorSide_005bbda6
;   TerminatedCString s_doorState_005bbdaf
;   TerminatedCString s_doorSwing_005bbdb9
;   TerminatedCString s_openEvent_005bbdc3
;   TerminatedCString s_closeEvent_005bbdcd
;   TerminatedCString s_openSound_005bbdd8
;   TerminatedCString s_closeSound_005bbde2
;   TerminatedCString s_keyMask_005bbded
;   TerminatedCString s_origPos_005bbdf5
;   TerminatedCString s_origOrient_005bbdfd
;   TerminatedCString s_param_005bbe08
;   TerminatedCString s_maxParam_005bbe0e
;   TerminatedCString s_openSpeed_005bbe17
;   ... and 20 more
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b830
;   core_actor.cpp_archiveInteger_FUN_0040b8b0
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0
;   core_actor.cpp_archiveRules_FUN_0040c0c0
;   core_actor.cpp_archiveString_FUN_0040b680
;   core_actor.cpp_archiveVector_FUN_0040b400
;   core_actor.cpp_CDemonActor_archive_FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00464cd0
        ;   Label: core_door.cpp_CDoor_archive_FUN_00464cd0
    PUSH EDI                            ; 00464cd1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00464cd2
    PUSH EBX                            ; 00464cd6
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c280 ; 00464cd7
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c280(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00464cdc
    PUSH 0x5bbd93                       ; 00464cdf | s_modelName_005bbd92+1
    LEA EDI,[EBX + 0x158]               ; 00464ce4
    PUSH EDI                            ; 00464cea
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0 ; 00464ceb
        ;   XREF to: 0040b9b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveKeyframedModelInstance_FUN_0040b9b0(CKeyFramedModelInstance * model_ptr, char * property_name)
    ADD ESP,0x8                         ; 00464cf0
    PUSH 0x5bbd9d                       ; 00464cf3 | = "doorType"
    LEA EDI,[EBX + 0x2d8]               ; 00464cf8
    PUSH EDI                            ; 00464cfe
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00464cff
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00464d04
    PUSH 0x5bbda6                       ; 00464d07 | = "doorSide"
    LEA EDI,[EBX + 0x2dc]               ; 00464d0c
    PUSH EDI                            ; 00464d12
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00464d13
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00464d18
    PUSH 0x5bbdaf                       ; 00464d1b | = "doorState"
    LEA EDI,[EBX + 0x2e0]               ; 00464d20
    PUSH EDI                            ; 00464d26
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00464d27
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00464d2c
    PUSH 0x5bbdb9                       ; 00464d2f | = "doorSwing"
    LEA EDI,[EBX + 0x2e4]               ; 00464d34
    PUSH EDI                            ; 00464d3a
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00464d3b
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00464d40
    PUSH 0x5bbdc3                       ; 00464d43 | = "openEvent"
    LEA EDI,[EBX + 0x2e8]               ; 00464d48
    PUSH EDI                            ; 00464d4e
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00464d4f
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00464d54
    PUSH 0x5bbdcd                       ; 00464d57 | = "closeEvent"
    LEA EDI,[EBX + 0x34c]               ; 00464d5c
    PUSH EDI                            ; 00464d62
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00464d63
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00464d68
    PUSH 0x5bbdd8                       ; 00464d6b | = "openSound"
    LEA EDI,[EBX + 0x864]               ; 00464d70
    PUSH EDI                            ; 00464d76
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00464d77
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00464d7c
    PUSH 0x5bbde2                       ; 00464d7f | = "closeSound"
    LEA EDI,[EBX + 0x8c8]               ; 00464d84
    PUSH EDI                            ; 00464d8a
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00464d8b
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00464d90
    PUSH 0x5bbded                       ; 00464d93 | = "keyMask"
    LEA EDI,[EBX + 0x990]               ; 00464d98
    PUSH EDI                            ; 00464d9e
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00464d9f
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00464da4
    PUSH 0x5bbdf5                       ; 00464da7 | = "origPos"
    LEA EDI,[EBX + 0x994]               ; 00464dac
    PUSH EDI                            ; 00464db2
    CALL core_actor.cpp_archiveVector_FUN_0040b400 ; 00464db3
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b400(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 00464db8
    PUSH 0x5bbdfd                       ; 00464dbb | = "origOrient"
    LEA EDI,[EBX + 0x9a0]               ; 00464dc0
    PUSH EDI                            ; 00464dc6
    CALL core_actor.cpp_archiveVector_FUN_0040b400 ; 00464dc7
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveVector_FUN_0040b400(CVector3f * vector_ptr, char * property_name)
    ADD ESP,0x8                         ; 00464dcc
    PUSH 0x5bbe08                       ; 00464dcf | = "param"
    LEA EDI,[EBX + 0x9ac]               ; 00464dd4
    PUSH EDI                            ; 00464dda
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00464ddb
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00464de0
    PUSH 0x5bbe0e                       ; 00464de3 | = "maxParam"
    LEA EDI,[EBX + 0x9b0]               ; 00464de8
    PUSH EDI                            ; 00464dee
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00464def
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00464df4
    PUSH 0x5bbe17                       ; 00464df7 | = "openSpeed"
    LEA EDI,[EBX + 0x9b4]               ; 00464dfc
    PUSH EDI                            ; 00464e02
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00464e03
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00464e08
    PUSH 0x5bbe21                       ; 00464e0b | = "closeSpeed"
    LEA EDI,[EBX + 0x9b8]               ; 00464e10
    PUSH EDI                            ; 00464e16
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00464e17
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    MOV EDX,dword ptr [0x005f2abc]      ; 00464e1c | g_CDoorClassVersion
    ADD ESP,0x8                         ; 00464e22
    CMP EDX,0x2                         ; 00464e25
    JGE 0x00464f71                      ; 00464e28
        ;   XREF to: 00464f71 (CONDITIONAL_JUMP)  ; LAB_00464f71
    CMP dword ptr [0x005f2abc],0x3      ; 00464e2e | g_CDoorClassVersion
        ;   Label: LAB_00464e2e
    JL 0x00464e5f                       ; 00464e35
        ;   XREF to: 00464e5f (CONDITIONAL_JUMP)  ; LAB_00464e5f
    PUSH 0x5bbe37                       ; 00464e37 | = "eventToTriggerWhenOpen"
    LEA EDI,[EBX + 0x3b0]               ; 00464e3c
    PUSH EDI                            ; 00464e42
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00464e43
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00464e48
    PUSH 0x5bbe4e                       ; 00464e4b | = "eventToTriggerWhenClosed"
    LEA EDI,[EBX + 0x414]               ; 00464e50
    PUSH EDI                            ; 00464e56
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00464e57
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00464e5c
    CMP dword ptr [0x005f2abc],0x4      ; 00464e5f | g_CDoorClassVersion
        ;   Label: LAB_00464e5f
    JL 0x00464e7c                       ; 00464e66
        ;   XREF to: 00464e7c (CONDITIONAL_JUMP)  ; LAB_00464e7c
    PUSH 0x5bbe67                       ; 00464e68 | = "oneShot"
    LEA EDI,[EBX + 0x9c8]               ; 00464e6d
    PUSH EDI                            ; 00464e73
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00464e74
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00464e79
    MOV EDI,dword ptr [0x005f2abc]      ; 00464e7c | g_CDoorClassVersion
        ;   Label: LAB_00464e7c
    CMP EDI,0x7                         ; 00464e82
    JL 0x00464f8a                       ; 00464e85
        ;   XREF to: 00464f8a (CONDITIONAL_JUMP)  ; LAB_00464f8a
    PUSH 0x5bbe6f                       ; 00464e8b | = "openRules"
    LEA EDI,[EBX + 0x478]               ; 00464e90
    PUSH EDI                            ; 00464e96
    CALL core_actor.cpp_archiveRules_FUN_0040c0c0 ; 00464e97
        ;   XREF to: 0040c0c0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveRules_FUN_0040c0c0(CRuleList * rules, char * property_name)
    ADD ESP,0x8                         ; 00464e9c
    CMP dword ptr [0x005f2abc],0x6      ; 00464e9f | g_CDoorClassVersion
        ;   Label: LAB_00464e9f
    JL 0x00464ebc                       ; 00464ea6
        ;   XREF to: 00464ebc (CONDITIONAL_JUMP)  ; LAB_00464ebc
    PUSH 0x5bbe8e                       ; 00464ea8 | = "blockVirtualDirectorFlag"
    LEA EDI,[EBX + 0x9d0]               ; 00464ead
    PUSH EDI                            ; 00464eb3
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00464eb4
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00464eb9
    CMP dword ptr [0x005f2abc],0x8      ; 00464ebc | g_CDoorClassVersion
        ;   Label: LAB_00464ebc
    JL 0x00464ed9                       ; 00464ec3
        ;   XREF to: 00464ed9 (CONDITIONAL_JUMP)  ; LAB_00464ed9
    PUSH 0x5bbea7                       ; 00464ec5 | = "plotAsBoxInShadow"
    LEA EDI,[EBX + 0x9d4]               ; 00464eca
    PUSH EDI                            ; 00464ed0
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00464ed1
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00464ed6
    CMP dword ptr [0x005f2abc],0x9      ; 00464ed9 | g_CDoorClassVersion
        ;   Label: LAB_00464ed9
    JL 0x00464ef6                       ; 00464ee0
        ;   XREF to: 00464ef6 (CONDITIONAL_JUMP)  ; LAB_00464ef6
    PUSH 0x5bbeb9                       ; 00464ee2 | = "allowedSides"
    LEA EDI,[EBX + 0x9d8]               ; 00464ee7
    PUSH EDI                            ; 00464eed
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00464eee
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00464ef3
    CMP dword ptr [0x005f2abc],0xa      ; 00464ef6 | g_CDoorClassVersion
        ;   Label: LAB_00464ef6
    JL 0x00464f13                       ; 00464efd
        ;   XREF to: 00464f13 (CONDITIONAL_JUMP)  ; LAB_00464f13
    PUSH 0x5bbec6                       ; 00464eff | = "allowBulletHoles"
    LEA EDI,[EBX + 0x9dc]               ; 00464f04
    PUSH EDI                            ; 00464f0a
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00464f0b
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00464f10
    CMP dword ptr [0x005f2abc],0xb      ; 00464f13 | g_CDoorClassVersion
        ;   Label: LAB_00464f13
    JL 0x00464f30                       ; 00464f1a
        ;   XREF to: 00464f30 (CONDITIONAL_JUMP)  ; LAB_00464f30
    PUSH 0x5bbed7                       ; 00464f1c | = "lockedSound"
    LEA EDI,[EBX + 0x92c]               ; 00464f21
    PUSH EDI                            ; 00464f27
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00464f28
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00464f2d
    CMP dword ptr [0x005f2abc],0xc      ; 00464f30 | g_CDoorClassVersion
        ;   Label: LAB_00464f30
    JL 0x00464f61                       ; 00464f37
        ;   XREF to: 00464f61 (CONDITIONAL_JUMP)  ; LAB_00464f61
    PUSH 0x5bbee3                       ; 00464f39 | = "shakeMeEvent"
    LEA EDI,[EBX + 0x9e4]               ; 00464f3e
    PUSH EDI                            ; 00464f44
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00464f45
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00464f4a
    PUSH 0x5bbef0                       ; 00464f4d | = "shakeMeStrength"
    LEA EDI,[EBX + 0x9e0]               ; 00464f52
    PUSH EDI                            ; 00464f58
    CALL core_actor.cpp_archiveFloat_FUN_0040b830 ; 00464f59
        ;   XREF to: 0040b830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveFloat_FUN_0040b830(float * float_ptr, char * property_name)
    ADD ESP,0x8                         ; 00464f5e
    CMP dword ptr [0x005f2abc],0xd      ; 00464f61 | g_CDoorClassVersion
        ;   Label: LAB_00464f61
    JGE 0x00464ff6                      ; 00464f68
        ;   XREF to: 00464ff6 (CONDITIONAL_JUMP)  ; LAB_00464ff6
    POP EDI                             ; 00464f6e
    POP EBX                             ; 00464f6f
    RET                                 ; 00464f70
    PUSH 0x5bbe2c                       ; 00464f71 | = "groundType"
        ;   Label: LAB_00464f71
    LEA EDI,[EBX + 0x2d4]               ; 00464f76
    PUSH EDI                            ; 00464f7c
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00464f7d
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00464f82
    JMP 0x00464e2e                      ; 00464f85
        ;   XREF to: 00464e2e (UNCONDITIONAL_JUMP)  ; LAB_00464e2e
    CMP EDI,0x5                         ; 00464f8a
        ;   Label: LAB_00464f8a
    JL 0x00464e9f                       ; 00464f8d
        ;   XREF to: 00464e9f (CONDITIONAL_JUMP)  ; LAB_00464e9f
    PUSH 0x5bbe79                       ; 00464f93 | = "scriptOpenEvent"
    LEA EDI,[EBX + 0x670]               ; 00464f98
    PUSH EDI                            ; 00464f9e
    CALL core_actor.cpp_archiveString_FUN_0040b680 ; 00464f9f
        ;   XREF to: 0040b680 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b680(char * string_buffer, char * property_type)
    MOV AH,byte ptr [EBX + 0x670]       ; 00464fa4
    ADD ESP,0x8                         ; 00464faa
    TEST AH,AH                          ; 00464fad
    JNZ 0x00464fc0                      ; 00464faf
        ;   XREF to: 00464fc0 (CONDITIONAL_JUMP)  ; LAB_00464fc0
    MOV dword ptr [EBX + 0x478],0x0     ; 00464fb1
    JMP 0x00464e9f                      ; 00464fbb
        ;   XREF to: 00464e9f (UNCONDITIONAL_JUMP)  ; LAB_00464e9f
    PUSH ESI                            ; 00464fc0
        ;   Label: LAB_00464fc0
    MOV ESI,0x5bbe89                    ; 00464fc1 | DAT_005bbe89
    LEA EDI,[EBX + 0x47c]               ; 00464fc6
    PUSH EDI                            ; 00464fcc
    MOV AL,byte ptr [ESI]               ; 00464fcd | DAT_005bbe89 | DAT_005bbe8b
        ;   Label: LAB_00464fcd
    MOV byte ptr [EDI],AL               ; 00464fcf
    CMP AL,0x0                          ; 00464fd1
    JZ 0x00464fe5                       ; 00464fd3
        ;   XREF to: 00464fe5 (CONDITIONAL_JUMP)  ; LAB_00464fe5
    MOV AL,byte ptr [ESI + 0x1]         ; 00464fd5 | DAT_005bbe8a | DAT_005bbe8c
    ADD ESI,0x2                         ; 00464fd8
    MOV byte ptr [EDI + 0x1],AL         ; 00464fdb
    ADD EDI,0x2                         ; 00464fde
    CMP AL,0x0                          ; 00464fe1
    JNZ 0x00464fcd                      ; 00464fe3
        ;   XREF to: 00464fcd (CONDITIONAL_JUMP)  ; LAB_00464fcd
    POP EDI                             ; 00464fe5
        ;   Label: LAB_00464fe5
    MOV dword ptr [EBX + 0x478],0x1     ; 00464fe6
    POP ESI                             ; 00464ff0
    JMP 0x00464e9f                      ; 00464ff1
        ;   XREF to: 00464e9f (UNCONDITIONAL_JUMP)  ; LAB_00464e9f
    PUSH 0x5bbf00                       ; 00464ff6 | = "handleVertexIndex"
        ;   Label: LAB_00464ff6
    ADD EBX,0xa48                       ; 00464ffb
    PUSH EBX                            ; 00465001
    CALL core_actor.cpp_archiveInteger_FUN_0040b8b0 ; 00465002
        ;   XREF to: 0040b8b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b8b0(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00465007
    POP EDI                             ; 0046500a
    POP EBX                             ; 0046500b
    RET                                 ; 0046500c

