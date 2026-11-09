; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dracbrid_cpp_FUN_00464cc0(CEnemy *param_1)
;
;
; Referenced Globals:
;   undefined4 s_speed_005d10cb+1
;   TerminatedCString s_modelName_005d10d2
;   TerminatedCString s_guardDistance_005d10dc
;   TerminatedCString s_riseEvent_005d10ea
;   TerminatedCString s_initialState_005d10f4
;   TerminatedCString s_vincoffin_005d1101
;   TerminatedCString s_incoffin_005d110b
;   TerminatedCString s_motionState_005d1114
;   TerminatedCString s_clothCount_005d1120
;   TerminatedCString s_freakyVoiceNumber_005d112b
;   TerminatedCString s_exploded_005d113d
;   TerminatedCString s_partCount_005d1146
;   TerminatedCString s_fadeTimer_005d1150
;   TerminatedCString s_partList_005d115a
;   TerminatedCString s_mistState_005d1163
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b9e0
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_actor.cpp_archiveMotionState_FUN_0040bb60
;   core_actor.cpp_archiveString_FUN_0040b730
;   core_actor.cpp_archiveVector_FUN_0040b4b0
;   core_enemy.cpp_CEnemy_archive_FUN_00487ec0
;   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00503950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00464cc0
        ;   Label: core_dracbrid.cpp_FUN_00464cc0
    PUSH ESI                            ; 00464cc1
    PUSH EDI                            ; 00464cc2
    PUSH EBP                            ; 00464cc3
    SUB ESP,0x4                         ; 00464cc4
    MOV EDI,dword ptr [ESP + 0x18]      ; 00464cc7
    PUSH EDI                            ; 00464ccb
    CALL core_enemy.cpp_CEnemy_archive_FUN_00487ec0 ; 00464ccc
        ;   XREF to: 00487ec0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_archive_FUN_00487ec0(CEnemy * this_ptr)
    MOV EDX,dword ptr [0x0060b244]      ; 00464cd1 | g_CDraculaBrideClassVersion
    ADD ESP,0x4                         ; 00464cd7
    CMP EDX,0x2                         ; 00464cda
    JL 0x00464ea1                       ; 00464cdd
        ;   XREF to: 00464ea1 (CONDITIONAL_JUMP)  ; LAB_00464ea1
    PUSH 0x5d10d2                       ; 00464ce3 | = "modelName"
        ;   Label: LAB_00464ce3
    LEA EAX,[EDI + 0x2b4]               ; 00464ce8
    PUSH EAX                            ; 00464cee
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0 ; 00464cef
        ;   XREF to: 0040bae0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040bae0()
    MOV ECX,dword ptr [0x0060b244]      ; 00464cf4 | g_CDraculaBrideClassVersion
    ADD ESP,0x8                         ; 00464cfa
    CMP ECX,0x2                         ; 00464cfd
    JL 0x00464d1b                       ; 00464d00
        ;   XREF to: 00464d1b (CONDITIONAL_JUMP)  ; LAB_00464d1b
    CMP ECX,0x6                         ; 00464d02
    JGE 0x00464d1b                      ; 00464d05
        ;   XREF to: 00464d1b (CONDITIONAL_JUMP)  ; LAB_00464d1b
    PUSH 0x5d10dc                       ; 00464d07 | = "guardDistance"
    LEA EAX,[EDI + 0x10a70]             ; 00464d0c
    PUSH EAX                            ; 00464d12
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00464d13
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 00464d18
    CMP dword ptr [0x0060b244],0x3      ; 00464d1b | g_CDraculaBrideClassVersion
        ;   Label: LAB_00464d1b
    JL 0x00464d81                       ; 00464d22
        ;   XREF to: 00464d81 (CONDITIONAL_JUMP)  ; LAB_00464d81
    PUSH 0x5d10ea                       ; 00464d24 | = "riseEvent"
    LEA EAX,[EDI + 0x10b1c]             ; 00464d29
    PUSH EAX                            ; 00464d2f
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 00464d30
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    MOV EBP,dword ptr [0x0060b244]      ; 00464d35 | g_CDraculaBrideClassVersion
    ADD ESP,0x8                         ; 00464d3b
    CMP EBP,0x4                         ; 00464d3e
    JGE 0x00464d81                      ; 00464d41
        ;   XREF to: 00464d81 (CONDITIONAL_JUMP)  ; LAB_00464d81
    PUSH 0x5d10f4                       ; 00464d43 | = "initialState"
    LEA EAX,[ESP + 0x4]                 ; 00464d48
    PUSH EAX                            ; 00464d4c
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00464d4d
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    MOV EAX,[0x007bc038]                ; 00464d52 | DAT_007bc038
    ADD ESP,0x8                         ; 00464d57
    CMP EAX,0x1                         ; 00464d5a
    JNZ 0x00464d81                      ; 00464d5d
        ;   XREF to: 00464d81 (CONDITIONAL_JUMP)  ; LAB_00464d81
    MOV EDX,dword ptr [ESP]             ; 00464d5f
    LEA EAX,[EDI + 0x2b4]               ; 00464d62
    CMP EDX,0x1                         ; 00464d68
    JNZ 0x00464eba                      ; 00464d6b
        ;   XREF to: 00464eba (CONDITIONAL_JUMP)  ; LAB_00464eba
    PUSH 0x0                            ; 00464d71
    PUSH 0x5d1101                       ; 00464d73 | = "vincoffin"
    PUSH EAX                            ; 00464d78
        ;   Label: LAB_00464d78
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00503950 ; 00464d79
        ;   XREF to: 00503950 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_00503950(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 00464d7e
    CMP dword ptr [0x0060b244],0x4      ; 00464d81 | g_CDraculaBrideClassVersion
        ;   Label: LAB_00464d81
    JL 0x00464d9e                       ; 00464d88
        ;   XREF to: 00464d9e (CONDITIONAL_JUMP)  ; LAB_00464d9e
    PUSH 0x5d1114                       ; 00464d8a | = "motionState"
    LEA EAX,[EDI + 0x2b4]               ; 00464d8f
    PUSH EAX                            ; 00464d95
    CALL core_actor.cpp_archiveMotionState_FUN_0040bb60 ; 00464d96
        ;   XREF to: 0040bb60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveMotionState_FUN_0040bb60()
    ADD ESP,0x8                         ; 00464d9b
    CMP dword ptr [0x0060b244],0x4      ; 00464d9e | g_CDraculaBrideClassVersion
        ;   Label: LAB_00464d9e
    JNZ 0x00464df0                      ; 00464da5
        ;   XREF to: 00464df0 (CONDITIONAL_JUMP)  ; LAB_00464df0
    PUSH 0x5d1120                       ; 00464da7 | = "clothCount"
    LEA EAX,[EDI + 0x2d0c]              ; 00464dac
    PUSH EAX                            ; 00464db2
    XOR EBX,EBX                         ; 00464db3
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00464db5
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    MOV ESI,dword ptr [EDI + 0x2d0c]    ; 00464dba
    ADD ESP,0x8                         ; 00464dc0
    TEST ESI,ESI                        ; 00464dc3
    JLE 0x00464df0                      ; 00464dc5
        ;   XREF to: 00464df0 (CONDITIONAL_JUMP)  ; LAB_00464df0
    LEA ESI,[EDI + 0x2d10]              ; 00464dc7
    PUSH 0x0                            ; 00464dcd
        ;   Label: LAB_00464dcd
    PUSH ESI                            ; 00464dcf
    INC EBX                             ; 00464dd0
    CALL core_actor.cpp_archiveString_FUN_0040b730 ; 00464dd1
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveString_FUN_0040b730(char * string_buffer, char * property_type)
    ADD ESP,0x8                         ; 00464dd6
    MOV EBP,dword ptr [EDI + 0x2d0c]    ; 00464dd9
    ADD ESI,0x28                        ; 00464ddf
    CMP EBX,EBP                         ; 00464de2
    JL 0x00464dcd                       ; 00464de4
        ;   XREF to: 00464dcd (CONDITIONAL_JUMP)  ; LAB_00464dcd
    LEA EAX,[EAX]                       ; 00464de6
    LEA EDX,[EDX]                       ; 00464dec
    CMP dword ptr [0x0060b244],0x7      ; 00464df0 | g_CDraculaBrideClassVersion
        ;   Label: LAB_00464df0
    JL 0x00464e0d                       ; 00464df7
        ;   XREF to: 00464e0d (CONDITIONAL_JUMP)  ; LAB_00464e0d
    PUSH 0x5d112b                       ; 00464df9 | = "freakyVoiceNumber"
    LEA EAX,[EDI + 0x10b80]             ; 00464dfe
    PUSH EAX                            ; 00464e04
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00464e05
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00464e0a
    CMP dword ptr [0x0060b244],0x8      ; 00464e0d | g_CDraculaBrideClassVersion
        ;   Label: LAB_00464e0d
    JL 0x00464e90                       ; 00464e14
        ;   XREF to: 00464e90 (CONDITIONAL_JUMP)  ; LAB_00464e90
    PUSH 0x5d113d                       ; 00464e1a | = "exploded"
    LEA EAX,[EDI + 0x10c20]             ; 00464e1f
    PUSH EAX                            ; 00464e25
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00464e26
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00464e2b
    PUSH 0x5d1146                       ; 00464e2e | = "partCount"
    LEA EAX,[EDI + 0x10ba4]             ; 00464e33
    PUSH EAX                            ; 00464e39
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00464e3a
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00464e3f
    PUSH 0x5d1150                       ; 00464e42 | = "fadeTimer"
    LEA EAX,[EDI + 0x10c24]             ; 00464e47
    PUSH EAX                            ; 00464e4d
    XOR EBX,EBX                         ; 00464e4e
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00464e50
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    MOV ECX,dword ptr [EDI + 0x10ba4]   ; 00464e55
    ADD ESP,0x8                         ; 00464e5b
    TEST ECX,ECX                        ; 00464e5e
    JLE 0x00464e90                      ; 00464e60
        ;   XREF to: 00464e90 (CONDITIONAL_JUMP)  ; LAB_00464e90
    LEA ESI,[EDI + 0x10ba8]             ; 00464e62
    PUSH 0x5d115a                       ; 00464e68 | = "partList"
        ;   Label: LAB_00464e68
    PUSH ESI                            ; 00464e6d
    INC EBX                             ; 00464e6e
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 00464e6f
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b9e0()
    ADD ESP,0x8                         ; 00464e74
    MOV EBP,dword ptr [EDI + 0x10ba4]   ; 00464e77
    ADD ESI,0x4                         ; 00464e7d
    CMP EBX,EBP                         ; 00464e80
    JL 0x00464e68                       ; 00464e82
        ;   XREF to: 00464e68 (CONDITIONAL_JUMP)  ; LAB_00464e68
    LEA EAX,[EAX]                       ; 00464e84
    LEA EDX,[EDX]                       ; 00464e8a
    CMP dword ptr [0x0060b244],0x9      ; 00464e90 | g_CDraculaBrideClassVersion
        ;   Label: LAB_00464e90
    JGE 0x00464ec6                      ; 00464e97
        ;   XREF to: 00464ec6 (CONDITIONAL_JUMP)  ; LAB_00464ec6
    ADD ESP,0x4                         ; 00464e99
    POP EBP                             ; 00464e9c
    POP EDI                             ; 00464e9d
    POP ESI                             ; 00464e9e
    POP EBX                             ; 00464e9f
    RET                                 ; 00464ea0
    PUSH 0x5d10cc                       ; 00464ea1 | s_speed_005d10cb+1
        ;   Label: LAB_00464ea1
    LEA EAX,[EDI + 0x10a60]             ; 00464ea6
    PUSH EAX                            ; 00464eac
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00464ead
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 00464eb2
    JMP 0x00464ce3                      ; 00464eb5
        ;   XREF to: 00464ce3 (UNCONDITIONAL_JUMP)  ; LAB_00464ce3
    PUSH 0x0                            ; 00464eba
        ;   Label: LAB_00464eba
    PUSH 0x5d110b                       ; 00464ebc | = "incoffin"
    JMP 0x00464d78                      ; 00464ec1
        ;   XREF to: 00464d78 (UNCONDITIONAL_JUMP)  ; LAB_00464d78
    PUSH 0x5d1163                       ; 00464ec6 | = "mistState"
        ;   Label: LAB_00464ec6
    LEA EAX,[EDI + 0x10b84]             ; 00464ecb
    PUSH EAX                            ; 00464ed1
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 00464ed2
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 00464ed7
    PUSH 0x5d116d                       ; 00464eda | = "vanishTimer"
    LEA EAX,[EDI + 0x10b88]             ; 00464edf
    PUSH EAX                            ; 00464ee5
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 00464ee6
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 00464eeb
    PUSH 0x5d1179                       ; 00464eee | = "newPos"
    ADD EDI,0x10b94                     ; 00464ef3
    PUSH EDI                            ; 00464ef9
    CALL core_actor.cpp_archiveVector_FUN_0040b4b0 ; 00464efa
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040b4b0()
    ADD ESP,0x8                         ; 00464eff
    ADD ESP,0x4                         ; 00464f02
    POP EBP                             ; 00464f05
    POP EDI                             ; 00464f06
    POP ESI                             ; 00464f07
    POP EBX                             ; 00464f08
    RET                                 ; 00464f09

