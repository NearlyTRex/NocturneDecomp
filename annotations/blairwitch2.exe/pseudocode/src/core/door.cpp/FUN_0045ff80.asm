; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_door_cpp_FUN_0045ff80(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 s_modelName_005d0a1f+1
;   TerminatedCString s_doorType_005d0a2a
;   TerminatedCString s_doorSide_005d0a33
;   TerminatedCString s_doorState_005d0a3c
;   TerminatedCString s_doorSwing_005d0a46
;   TerminatedCString s_openEvent_005d0a50
;   TerminatedCString s_closeEvent_005d0a5a
;   TerminatedCString s_openSound_005d0a65
;   TerminatedCString s_closeSound_005d0a6f
;   TerminatedCString s_keyMask_005d0a7a
;   TerminatedCString s_origPos_005d0a82
;   TerminatedCString s_origOrient_005d0a8a
;   TerminatedCString s_param_005d0a95
;   TerminatedCString s_maxParam_005d0a9b
;   TerminatedCString s_openSpeed_005d0aa4
;   ... and 20 more
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60
;   core_actor.cpp_archiveRules_FUN_0040c170
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_actor.cpp_archiveVector_FUN_0040b4b0
;   core_actor.cpp_CDemonActor_archive_FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ff80
        ;   Label: core_door.cpp_FUN_0045ff80
    PUSH EDI                            ; 0045ff81
    MOV EBX,dword ptr [ESP + 0xc]       ; 0045ff82
    PUSH EBX                            ; 0045ff86
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040c330 ; 0045ff87
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_archive_FUN_0040c330(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0045ff8c
    PUSH 0x5d0a20                       ; 0045ff8f | s_modelName_005d0a1f+1
    LEA EDI,[EBX + 0x2b4]               ; 0045ff94
    PUSH EDI                            ; 0045ff9a
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60 ; 0045ff9b
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ba60()
    ADD ESP,0x8                         ; 0045ffa0
    PUSH 0x5d0a2a                       ; 0045ffa3 | = "doorType"
    LEA EDI,[EBX + 0x434]               ; 0045ffa8
    PUSH EDI                            ; 0045ffae
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0045ffaf
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0045ffb4
    PUSH 0x5d0a33                       ; 0045ffb7 | = "doorSide"
    LEA EDI,[EBX + 0x438]               ; 0045ffbc
    PUSH EDI                            ; 0045ffc2
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0045ffc3
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0045ffc8
    PUSH 0x5d0a3c                       ; 0045ffcb | = "doorState"
    LEA EDI,[EBX + 0x43c]               ; 0045ffd0
    PUSH EDI                            ; 0045ffd6
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0045ffd7
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0045ffdc
    PUSH 0x5d0a46                       ; 0045ffdf | = "doorSwing"
    LEA EDI,[EBX + 0x440]               ; 0045ffe4
    PUSH EDI                            ; 0045ffea
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0045ffeb
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0045fff0
    PUSH 0x5d0a50                       ; 0045fff3 | = "openEvent"
    LEA EDI,[EBX + 0x444]               ; 0045fff8
    PUSH EDI                            ; 0045fffe
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 0045ffff
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00460004
    PUSH 0x5d0a5a                       ; 00460007 | = "closeEvent"
    LEA EDI,[EBX + 0x4a8]               ; 0046000c
    PUSH EDI                            ; 00460012
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 00460013
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00460018
    PUSH 0x5d0a65                       ; 0046001b | = "openSound"
    LEA EDI,[EBX + 0x9c0]               ; 00460020
    PUSH EDI                            ; 00460026
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 00460027
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0046002c
    PUSH 0x5d0a6f                       ; 0046002f | = "closeSound"
    LEA EDI,[EBX + 0xa24]               ; 00460034
    PUSH EDI                            ; 0046003a
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 0046003b
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00460040
    PUSH 0x5d0a7a                       ; 00460043 | = "keyMask"
    LEA EDI,[EBX + 0xaec]               ; 00460048
    PUSH EDI                            ; 0046004e
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0046004f
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00460054
    PUSH 0x5d0a82                       ; 00460057 | = "origPos"
    LEA EDI,[EBX + 0xaf0]               ; 0046005c
    PUSH EDI                            ; 00460062
    CALL core_actor.cpp_archiveVector_FUN_0040b4b0 ; 00460063
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b4b0()
    ADD ESP,0x8                         ; 00460068
    PUSH 0x5d0a8a                       ; 0046006b | = "origOrient"
    LEA EDI,[EBX + 0xafc]               ; 00460070
    PUSH EDI                            ; 00460076
    CALL core_actor.cpp_archiveVector_FUN_0040b4b0 ; 00460077
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b4b0()
    ADD ESP,0x8                         ; 0046007c
    PUSH 0x5d0a95                       ; 0046007f | = "param"
    LEA EDI,[EBX + 0xb08]               ; 00460084
    PUSH EDI                            ; 0046008a
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0046008b
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 00460090
    PUSH 0x5d0a9b                       ; 00460093 | = "maxParam"
    LEA EDI,[EBX + 0xb0c]               ; 00460098
    PUSH EDI                            ; 0046009e
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0046009f
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 004600a4
    PUSH 0x5d0aa4                       ; 004600a7 | = "openSpeed"
    LEA EDI,[EBX + 0xb10]               ; 004600ac
    PUSH EDI                            ; 004600b2
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 004600b3
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 004600b8
    PUSH 0x5d0aae                       ; 004600bb | = "closeSpeed"
    LEA EDI,[EBX + 0xb14]               ; 004600c0
    PUSH EDI                            ; 004600c6
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 004600c7
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    MOV EDX,dword ptr [0x0060b214]      ; 004600cc | g_CDoorClassVersion
    ADD ESP,0x8                         ; 004600d2
    CMP EDX,0x2                         ; 004600d5
    JGE 0x00460221                      ; 004600d8
        ;   XREF to: 00460221 (CONDITIONAL_JUMP)  ; LAB_00460221
    CMP dword ptr [0x0060b214],0x3      ; 004600de | g_CDoorClassVersion
        ;   Label: LAB_004600de
    JL 0x0046010f                       ; 004600e5
        ;   XREF to: 0046010f (CONDITIONAL_JUMP)  ; LAB_0046010f
    PUSH 0x5d0ac4                       ; 004600e7 | = "eventToTriggerWhenOpen"
    LEA EDI,[EBX + 0x50c]               ; 004600ec
    PUSH EDI                            ; 004600f2
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004600f3
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004600f8
    PUSH 0x5d0adb                       ; 004600fb | = "eventToTriggerWhenClosed"
    LEA EDI,[EBX + 0x570]               ; 00460100
    PUSH EDI                            ; 00460106
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 00460107
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 0046010c
    CMP dword ptr [0x0060b214],0x4      ; 0046010f | g_CDoorClassVersion
        ;   Label: LAB_0046010f
    JL 0x0046012c                       ; 00460116
        ;   XREF to: 0046012c (CONDITIONAL_JUMP)  ; LAB_0046012c
    PUSH 0x5d0af4                       ; 00460118 | = "oneShot"
    LEA EDI,[EBX + 0xb24]               ; 0046011d
    PUSH EDI                            ; 00460123
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00460124
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00460129
    MOV EDI,dword ptr [0x0060b214]      ; 0046012c | g_CDoorClassVersion
        ;   Label: LAB_0046012c
    CMP EDI,0x7                         ; 00460132
    JL 0x0046023a                       ; 00460135
        ;   XREF to: 0046023a (CONDITIONAL_JUMP)  ; LAB_0046023a
    PUSH 0x5d0afc                       ; 0046013b | = "openRules"
    LEA EDI,[EBX + 0x5d4]               ; 00460140
    PUSH EDI                            ; 00460146
    CALL core_actor.cpp_archiveRules_FUN_0040c170 ; 00460147
        ;   XREF to: 0040c170 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveRules_FUN_0040c170()
    ADD ESP,0x8                         ; 0046014c
    CMP dword ptr [0x0060b214],0x6      ; 0046014f | g_CDoorClassVersion
        ;   Label: LAB_0046014f
    JL 0x0046016c                       ; 00460156
        ;   XREF to: 0046016c (CONDITIONAL_JUMP)  ; LAB_0046016c
    PUSH 0x5d0b1b                       ; 00460158 | = "blockVirtualDirectorFlag"
    LEA EDI,[EBX + 0xb2c]               ; 0046015d
    PUSH EDI                            ; 00460163
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00460164
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00460169
    CMP dword ptr [0x0060b214],0x8      ; 0046016c | g_CDoorClassVersion
        ;   Label: LAB_0046016c
    JL 0x00460189                       ; 00460173
        ;   XREF to: 00460189 (CONDITIONAL_JUMP)  ; LAB_00460189
    PUSH 0x5d0b34                       ; 00460175 | = "plotAsBoxInShadow"
    LEA EDI,[EBX + 0xb30]               ; 0046017a
    PUSH EDI                            ; 00460180
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00460181
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00460186
    CMP dword ptr [0x0060b214],0x9      ; 00460189 | g_CDoorClassVersion
        ;   Label: LAB_00460189
    JL 0x004601a6                       ; 00460190
        ;   XREF to: 004601a6 (CONDITIONAL_JUMP)  ; LAB_004601a6
    PUSH 0x5d0b46                       ; 00460192 | = "allowedSides"
    LEA EDI,[EBX + 0xb34]               ; 00460197
    PUSH EDI                            ; 0046019d
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0046019e
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004601a3
    CMP dword ptr [0x0060b214],0xa      ; 004601a6 | g_CDoorClassVersion
        ;   Label: LAB_004601a6
    JL 0x004601c3                       ; 004601ad
        ;   XREF to: 004601c3 (CONDITIONAL_JUMP)  ; LAB_004601c3
    PUSH 0x5d0b53                       ; 004601af | = "allowBulletHoles"
    LEA EDI,[EBX + 0xb38]               ; 004601b4
    PUSH EDI                            ; 004601ba
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004601bb
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004601c0
    CMP dword ptr [0x0060b214],0xb      ; 004601c3 | g_CDoorClassVersion
        ;   Label: LAB_004601c3
    JL 0x004601e0                       ; 004601ca
        ;   XREF to: 004601e0 (CONDITIONAL_JUMP)  ; LAB_004601e0
    PUSH 0x5d0b64                       ; 004601cc | = "lockedSound"
    LEA EDI,[EBX + 0xa88]               ; 004601d1
    PUSH EDI                            ; 004601d7
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004601d8
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004601dd
    CMP dword ptr [0x0060b214],0xc      ; 004601e0 | g_CDoorClassVersion
        ;   Label: LAB_004601e0
    JL 0x00460211                       ; 004601e7
        ;   XREF to: 00460211 (CONDITIONAL_JUMP)  ; LAB_00460211
    PUSH 0x5d0b70                       ; 004601e9 | = "shakeMeEvent"
    LEA EDI,[EBX + 0xb40]               ; 004601ee
    PUSH EDI                            ; 004601f4
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 004601f5
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 004601fa
    PUSH 0x5d0b7d                       ; 004601fd | = "shakeMeStrength"
    LEA EDI,[EBX + 0xb3c]               ; 00460202
    PUSH EDI                            ; 00460208
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00460209
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 0046020e
    CMP dword ptr [0x0060b214],0xd      ; 00460211 | g_CDoorClassVersion
        ;   Label: LAB_00460211
    JGE 0x004602a6                      ; 00460218
        ;   XREF to: 004602a6 (CONDITIONAL_JUMP)  ; LAB_004602a6
    POP EDI                             ; 0046021e
    POP EBX                             ; 0046021f
    RET                                 ; 00460220
    PUSH 0x5d0ab9                       ; 00460221 | = "groundType"
        ;   Label: LAB_00460221
    LEA EDI,[EBX + 0x430]               ; 00460226
    PUSH EDI                            ; 0046022c
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0046022d
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00460232
    JMP 0x004600de                      ; 00460235
        ;   XREF to: 004600de (UNCONDITIONAL_JUMP)  ; LAB_004600de
    CMP EDI,0x5                         ; 0046023a
        ;   Label: LAB_0046023a
    JL 0x0046014f                       ; 0046023d
        ;   XREF to: 0046014f (CONDITIONAL_JUMP)  ; LAB_0046014f
    PUSH 0x5d0b06                       ; 00460243 | = "scriptOpenEvent"
    LEA EDI,[EBX + 0x7cc]               ; 00460248
    PUSH EDI                            ; 0046024e
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 0046024f
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    MOV AH,byte ptr [EBX + 0x7cc]       ; 00460254
    ADD ESP,0x8                         ; 0046025a
    TEST AH,AH                          ; 0046025d
    JNZ 0x00460270                      ; 0046025f
        ;   XREF to: 00460270 (CONDITIONAL_JUMP)  ; LAB_00460270
    MOV dword ptr [EBX + 0x5d4],0x0     ; 00460261
    JMP 0x0046014f                      ; 0046026b
        ;   XREF to: 0046014f (UNCONDITIONAL_JUMP)  ; LAB_0046014f
    PUSH ESI                            ; 00460270
        ;   Label: LAB_00460270
    MOV ESI,0x5d0b16                    ; 00460271 | DAT_005d0b16
    LEA EDI,[EBX + 0x5d8]               ; 00460276
    PUSH EDI                            ; 0046027c
    MOV AL,byte ptr [ESI]               ; 0046027d | DAT_005d0b16 | DAT_005d0b18
        ;   Label: LAB_0046027d
    MOV byte ptr [EDI],AL               ; 0046027f
    CMP AL,0x0                          ; 00460281
    JZ 0x00460295                       ; 00460283
        ;   XREF to: 00460295 (CONDITIONAL_JUMP)  ; LAB_00460295
    MOV AL,byte ptr [ESI + 0x1]         ; 00460285 | DAT_005d0b17 | DAT_005d0b19
    ADD ESI,0x2                         ; 00460288
    MOV byte ptr [EDI + 0x1],AL         ; 0046028b
    ADD EDI,0x2                         ; 0046028e
    CMP AL,0x0                          ; 00460291
    JNZ 0x0046027d                      ; 00460293
        ;   XREF to: 0046027d (CONDITIONAL_JUMP)  ; LAB_0046027d
    POP EDI                             ; 00460295
        ;   Label: LAB_00460295
    MOV dword ptr [EBX + 0x5d4],0x1     ; 00460296
    POP ESI                             ; 004602a0
    JMP 0x0046014f                      ; 004602a1
        ;   XREF to: 0046014f (UNCONDITIONAL_JUMP)  ; LAB_0046014f
    PUSH 0x5d0b8d                       ; 004602a6 | = "handleVertexIndex"
        ;   Label: LAB_004602a6
    ADD EBX,0xba4                       ; 004602ab
    PUSH EBX                            ; 004602b1
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 004602b2
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 004602b7
    POP EDI                             ; 004602ba
    POP EBX                             ; 004602bb
    RET                                 ; 004602bc

