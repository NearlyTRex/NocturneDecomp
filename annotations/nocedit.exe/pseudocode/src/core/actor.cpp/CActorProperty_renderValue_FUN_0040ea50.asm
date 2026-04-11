; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CActorProperty_renderValue_FUN_0040ea50(CActorProperty *this_ptr,CDemonActor *actor,char *output_buffer)
;
; Parameters:
; CActorProperty * Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; char *           Stack[0xc]:4   output_buffer
;
; XREF[6]:
;   core_actor.cpp_CActorPropertyList_render_FUN_0040e850 at 0040e8b2
;   core_actor.cpp_CActorProperty_getValueWidth_FUN_0040ee50 at 0040ee69
;   core_msnedit.cpp_CDemonMission_buildScriptCrossReferences_FUN_0053ea30 at 0053ea8c
;   core_msnedit.cpp_CDemonMission_editActorPropertiesDialog_FUN_0053c730 at 0053c7c8
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 0053adaf
;   core_msnedit.cpp_CDemonMission_showSoundFilesInMission_FUN_0053ec80 at 0053ed25
;
; Referenced Globals:
;   void* switchdataD_0040ea00 = 0040ea6e
;   TerminatedCString s_d_006144c2
;   TerminatedCString s_g_006144c5
;   TerminatedCString s_g_g_g_006144c8
;   TerminatedCString s_TRUE_006144d1
;   undefined4 s_RUE_006144d1+1
;   undefined4 s_UE_006144d1+2
;   undefined4 s_E_006144d1+3
;   string s_FALSE_006144d6
;   undefined4 s_ALSE_006144d7
;   TerminatedCString s_none_006144dc
;   undefined4 s_none_006144dc+1
;   undefined4 s_none_006144dc+2
;   undefined4 s_ne)_006144df
;   TerminatedCString s_none_006144e3
;   ... and 29 more
;
; Called Functions:
;   core_ground.cpp_getGroundTypeName_FUN_004eed80
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ea50
        ;   Label: core_actor.cpp_CActorProperty_renderValue_FUN_0040ea50
    PUSH ESI                            ; 0040ea51
    PUSH EDI                            ; 0040ea52
    PUSH EBP                            ; 0040ea53
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040ea54
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0040ea58
    MOV EAX,dword ptr [EBX]             ; 0040ea5c
    CMP EAX,0x12                        ; 0040ea5e
    JA 0x0040ee01                       ; 0040ea61
        ;   XREF to: 0040ee01 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x40ea00]  ; 0040ea67 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0x68]      ; 0040ea6e
        ;   Label: caseD_0
    MOV EDI,dword ptr [EAX]             ; 0040ea71
    PUSH EDI                            ; 0040ea73
    MOV EAX,0x6144c2                    ; 0040ea74 | = "%d"
    PUSH EAX                            ; 0040ea79 | = "%d"
    PUSH EBP                            ; 0040ea7a
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0040ea7b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0040ea80
    POP EBP                             ; 0040ea83
        ;   Label: LAB_0040ea83
    POP EDI                             ; 0040ea84
    POP ESI                             ; 0040ea85
    POP EBX                             ; 0040ea86
    RET                                 ; 0040ea87
    MOV EAX,dword ptr [EBX + 0x68]      ; 0040ea88
        ;   Label: caseD_1
    SUB ESP,0x8                         ; 0040ea8b
    FLD float ptr [EAX]                 ; 0040ea8e
    FSTP double ptr [ESP]               ; 0040ea90
    PUSH 0x6144c5                       ; 0040ea93 | = "%g"
    PUSH EBP                            ; 0040ea98
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0040ea99
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0040ea9e
    POP EBP                             ; 0040eaa1
    POP EDI                             ; 0040eaa2
    POP ESI                             ; 0040eaa3
    POP EBX                             ; 0040eaa4
    RET                                 ; 0040eaa5
    MOV EAX,dword ptr [EBX + 0x68]      ; 0040eaa6
        ;   Label: caseD_2
    SUB ESP,0x8                         ; 0040eaa9
    FLD float ptr [EAX + 0x8]           ; 0040eaac
    FSTP double ptr [ESP]               ; 0040eaaf
    SUB ESP,0x8                         ; 0040eab2
    FLD float ptr [EAX + 0x4]           ; 0040eab5
    FSTP double ptr [ESP]               ; 0040eab8
    SUB ESP,0x8                         ; 0040eabb
    FLD float ptr [EAX]                 ; 0040eabe
    FSTP double ptr [ESP]               ; 0040eac0
    PUSH 0x6144c8                       ; 0040eac3 | = "%g,%g,%g"
    PUSH EBP                            ; 0040eac8
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0040eac9
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x20                        ; 0040eace
    POP EBP                             ; 0040ead1
    POP EDI                             ; 0040ead2
    POP ESI                             ; 0040ead3
    POP EBX                             ; 0040ead4
    RET                                 ; 0040ead5
    MOV EAX,dword ptr [EBX + 0x68]      ; 0040ead6
        ;   Label: caseD_4
    CMP dword ptr [EAX],0x0             ; 0040ead9
    JZ 0x0040eb04                       ; 0040eadc
        ;   XREF to: 0040eb04 (CONDITIONAL_JUMP)  ; LAB_0040eb04
    MOV ESI,0x6144d1                    ; 0040eade | = "TRUE"
    MOV EDI,EBP                         ; 0040eae3
        ;   Label: LAB_0040eae3
    PUSH EDI                            ; 0040eae5
    MOV AL,byte ptr [ESI]               ; 0040eae6 | = "TRUE" | s_UE_006144d1+2 | s_FALSE_006144d6
        ;   Label: LAB_0040eae6
    MOV byte ptr [EDI],AL               ; 0040eae8
    CMP AL,0x0                          ; 0040eaea
    JZ 0x0040eafe                       ; 0040eaec
        ;   XREF to: 0040eafe (CONDITIONAL_JUMP)  ; LAB_0040eafe
    MOV AL,byte ptr [ESI + 0x1]         ; 0040eaee | s_RUE_006144d1+1 | s_E_006144d1+3 | s_ALSE_006144d7
    ADD ESI,0x2                         ; 0040eaf1
    MOV byte ptr [EDI + 0x1],AL         ; 0040eaf4
    ADD EDI,0x2                         ; 0040eaf7
    CMP AL,0x0                          ; 0040eafa
    JNZ 0x0040eae6                      ; 0040eafc
        ;   XREF to: 0040eae6 (CONDITIONAL_JUMP)  ; LAB_0040eae6
    POP EDI                             ; 0040eafe
        ;   Label: LAB_0040eafe
    POP EBP                             ; 0040eaff
    POP EDI                             ; 0040eb00
    POP ESI                             ; 0040eb01
    POP EBX                             ; 0040eb02
    RET                                 ; 0040eb03
    MOV ESI,0x6144d6                    ; 0040eb04 | = "FALSE"
        ;   Label: LAB_0040eb04
    JMP 0x0040eae3                      ; 0040eb09
        ;   XREF to: 0040eae3 (UNCONDITIONAL_JUMP)  ; LAB_0040eae3
    MOV EDI,EBP                         ; 0040eb0b
        ;   Label: caseD_c
    MOV ESI,dword ptr [EBX + 0x68]      ; 0040eb0d
    PUSH EDI                            ; 0040eb10
    MOV AL,byte ptr [ESI]               ; 0040eb11
        ;   Label: LAB_0040eb11
    MOV byte ptr [EDI],AL               ; 0040eb13
    CMP AL,0x0                          ; 0040eb15
    JZ 0x0040eb29                       ; 0040eb17
        ;   XREF to: 0040eb29 (CONDITIONAL_JUMP)  ; LAB_0040eb29
    MOV AL,byte ptr [ESI + 0x1]         ; 0040eb19
    ADD ESI,0x2                         ; 0040eb1c
    MOV byte ptr [EDI + 0x1],AL         ; 0040eb1f
    ADD EDI,0x2                         ; 0040eb22
    CMP AL,0x0                          ; 0040eb25
    JNZ 0x0040eb11                      ; 0040eb27
        ;   XREF to: 0040eb11 (CONDITIONAL_JUMP)  ; LAB_0040eb11
    POP EDI                             ; 0040eb29
        ;   Label: LAB_0040eb29
    POP EBP                             ; 0040eb2a
    POP EDI                             ; 0040eb2b
    POP ESI                             ; 0040eb2c
    POP EBX                             ; 0040eb2d
    RET                                 ; 0040eb2e
    MOV ESI,dword ptr [EBX + 0x68]      ; 0040eb2f
        ;   Label: caseD_a
    CMP byte ptr [ESI],0x0              ; 0040eb32
    JNZ 0x0040eb3c                      ; 0040eb35
        ;   XREF to: 0040eb3c (CONDITIONAL_JUMP)  ; LAB_0040eb3c
    MOV ESI,0x6144dc                    ; 0040eb37 | = "(none)"
    MOV EDI,EBP                         ; 0040eb3c
        ;   Label: LAB_0040eb3c
    PUSH EDI                            ; 0040eb3e
    MOV AL,byte ptr [ESI]               ; 0040eb3f | = "(none)" | s_none_006144dc+2
        ;   Label: LAB_0040eb3f
    MOV byte ptr [EDI],AL               ; 0040eb41
    CMP AL,0x0                          ; 0040eb43
    JZ 0x0040eb57                       ; 0040eb45
        ;   XREF to: 0040eb57 (CONDITIONAL_JUMP)  ; LAB_0040eb57
    MOV AL,byte ptr [ESI + 0x1]         ; 0040eb47 | s_none_006144dc+1 | s_ne)_006144df
    ADD ESI,0x2                         ; 0040eb4a
    MOV byte ptr [EDI + 0x1],AL         ; 0040eb4d
    ADD EDI,0x2                         ; 0040eb50
    CMP AL,0x0                          ; 0040eb53
    JNZ 0x0040eb3f                      ; 0040eb55
        ;   XREF to: 0040eb3f (CONDITIONAL_JUMP)  ; LAB_0040eb3f
    POP EDI                             ; 0040eb57
        ;   Label: LAB_0040eb57
    POP EBP                             ; 0040eb58
    POP EDI                             ; 0040eb59
    POP ESI                             ; 0040eb5a
    POP EBX                             ; 0040eb5b
    RET                                 ; 0040eb5c
    MOV ESI,dword ptr [EBX + 0x68]      ; 0040eb5d
        ;   Label: caseD_5
    MOV EBX,dword ptr [ESI]             ; 0040eb60
    TEST EBX,EBX                        ; 0040eb62
    JNZ 0x0040eb8c                      ; 0040eb64
        ;   XREF to: 0040eb8c (CONDITIONAL_JUMP)  ; LAB_0040eb8c
    MOV ESI,0x6144e3                    ; 0040eb66 | = "(none)"
    MOV EDI,EBP                         ; 0040eb6b
    PUSH EDI                            ; 0040eb6d
    MOV AL,byte ptr [ESI]               ; 0040eb6e | = "(none)" | s_none_006144e3+2
        ;   Label: LAB_0040eb6e
    MOV byte ptr [EDI],AL               ; 0040eb70
    CMP AL,0x0                          ; 0040eb72
    JZ 0x0040eb86                       ; 0040eb74
        ;   XREF to: 0040eb86 (CONDITIONAL_JUMP)  ; LAB_0040eb86
    MOV AL,byte ptr [ESI + 0x1]         ; 0040eb76 | s_none_006144e3+1 | s_ne)_006144e6
    ADD ESI,0x2                         ; 0040eb79
    MOV byte ptr [EDI + 0x1],AL         ; 0040eb7c
    ADD EDI,0x2                         ; 0040eb7f
    CMP AL,0x0                          ; 0040eb82
    JNZ 0x0040eb6e                      ; 0040eb84
        ;   XREF to: 0040eb6e (CONDITIONAL_JUMP)  ; LAB_0040eb6e
    POP EDI                             ; 0040eb86
        ;   Label: LAB_0040eb86
    POP EBP                             ; 0040eb87
    POP EDI                             ; 0040eb88
    POP ESI                             ; 0040eb89
    POP EBX                             ; 0040eb8a
    RET                                 ; 0040eb8b
    MOV ESI,EBX                         ; 0040eb8c
        ;   Label: LAB_0040eb8c
    MOV EDI,EBP                         ; 0040eb8e
    PUSH EDI                            ; 0040eb90
    MOV AL,byte ptr [ESI]               ; 0040eb91
        ;   Label: LAB_0040eb91
    MOV byte ptr [EDI],AL               ; 0040eb93
    CMP AL,0x0                          ; 0040eb95
    JZ 0x0040eba9                       ; 0040eb97
        ;   XREF to: 0040eba9 (CONDITIONAL_JUMP)  ; LAB_0040eba9
    MOV AL,byte ptr [ESI + 0x1]         ; 0040eb99
    ADD ESI,0x2                         ; 0040eb9c
    MOV byte ptr [EDI + 0x1],AL         ; 0040eb9f
    ADD EDI,0x2                         ; 0040eba2
    CMP AL,0x0                          ; 0040eba5
    JNZ 0x0040eb91                      ; 0040eba7
        ;   XREF to: 0040eb91 (CONDITIONAL_JUMP)  ; LAB_0040eb91
    POP EDI                             ; 0040eba9
        ;   Label: LAB_0040eba9
    POP EBP                             ; 0040ebaa
    POP EDI                             ; 0040ebab
    POP ESI                             ; 0040ebac
    POP EBX                             ; 0040ebad
    RET                                 ; 0040ebae
    MOV ESI,dword ptr [EBX + 0x68]      ; 0040ebaf
        ;   Label: caseD_6
    MOV EDI,EBP                         ; 0040ebb2
    ADD ESI,0x78                        ; 0040ebb4
    PUSH EDI                            ; 0040ebb7
    MOV AL,byte ptr [ESI]               ; 0040ebb8
        ;   Label: LAB_0040ebb8
    MOV byte ptr [EDI],AL               ; 0040ebba
    CMP AL,0x0                          ; 0040ebbc
    JZ 0x0040ebd0                       ; 0040ebbe
        ;   XREF to: 0040ebd0 (CONDITIONAL_JUMP)  ; LAB_0040ebd0
    MOV AL,byte ptr [ESI + 0x1]         ; 0040ebc0
    ADD ESI,0x2                         ; 0040ebc3
    MOV byte ptr [EDI + 0x1],AL         ; 0040ebc6
    ADD EDI,0x2                         ; 0040ebc9
    CMP AL,0x0                          ; 0040ebcc
    JNZ 0x0040ebb8                      ; 0040ebce
        ;   XREF to: 0040ebb8 (CONDITIONAL_JUMP)  ; LAB_0040ebb8
    POP EDI                             ; 0040ebd0
        ;   Label: LAB_0040ebd0
    POP EBP                             ; 0040ebd1
    POP EDI                             ; 0040ebd2
    POP ESI                             ; 0040ebd3
    POP EBX                             ; 0040ebd4
    RET                                 ; 0040ebd5
    MOV ESI,dword ptr [EBX + 0x68]      ; 0040ebd6
        ;   Label: caseD_7
    MOV EDI,EBP                         ; 0040ebd9
    ADD ESI,0x2260                      ; 0040ebdb
    PUSH EDI                            ; 0040ebe1
    MOV AL,byte ptr [ESI]               ; 0040ebe2
        ;   Label: LAB_0040ebe2
    MOV byte ptr [EDI],AL               ; 0040ebe4
    CMP AL,0x0                          ; 0040ebe6
    JZ 0x0040ebfa                       ; 0040ebe8
        ;   XREF to: 0040ebfa (CONDITIONAL_JUMP)  ; LAB_0040ebfa
    MOV AL,byte ptr [ESI + 0x1]         ; 0040ebea
    ADD ESI,0x2                         ; 0040ebed
    MOV byte ptr [EDI + 0x1],AL         ; 0040ebf0
    ADD EDI,0x2                         ; 0040ebf3
    CMP AL,0x0                          ; 0040ebf6
    JNZ 0x0040ebe2                      ; 0040ebf8
        ;   XREF to: 0040ebe2 (CONDITIONAL_JUMP)  ; LAB_0040ebe2
    POP EDI                             ; 0040ebfa
        ;   Label: LAB_0040ebfa
    POP EBP                             ; 0040ebfb
    POP EDI                             ; 0040ebfc
    POP ESI                             ; 0040ebfd
    POP EBX                             ; 0040ebfe
    RET                                 ; 0040ebff
    MOV EAX,dword ptr [EBX + 0x68]      ; 0040ec00
        ;   Label: caseD_9
    MOV ECX,dword ptr [EAX]             ; 0040ec03
    PUSH ECX                            ; 0040ec05
    CALL core_ground.cpp_getGroundTypeName_FUN_004eed80 ; 0040ec06
        ;   XREF to: 004eed80 (UNCONDITIONAL_CALL)  ; char * core_ground.cpp_getGroundTypeName_FUN_004eed80(EGroundType type)
    ADD ESP,0x4                         ; 0040ec0b
    MOV EDI,EBP                         ; 0040ec0e
    MOV ESI,EAX                         ; 0040ec10
    PUSH EDI                            ; 0040ec12
    MOV AL,byte ptr [ESI]               ; 0040ec13
        ;   Label: LAB_0040ec13
    MOV byte ptr [EDI],AL               ; 0040ec15
    CMP AL,0x0                          ; 0040ec17
    JZ 0x0040ec2b                       ; 0040ec19
        ;   XREF to: 0040ec2b (CONDITIONAL_JUMP)  ; LAB_0040ec2b
    MOV AL,byte ptr [ESI + 0x1]         ; 0040ec1b
    ADD ESI,0x2                         ; 0040ec1e
    MOV byte ptr [EDI + 0x1],AL         ; 0040ec21
    ADD EDI,0x2                         ; 0040ec24
    CMP AL,0x0                          ; 0040ec27
    JNZ 0x0040ec13                      ; 0040ec29
        ;   XREF to: 0040ec13 (CONDITIONAL_JUMP)  ; LAB_0040ec13
    POP EDI                             ; 0040ec2b
        ;   Label: LAB_0040ec2b
    POP EBP                             ; 0040ec2c
    POP EDI                             ; 0040ec2d
    POP ESI                             ; 0040ec2e
    POP EBX                             ; 0040ec2f
    RET                                 ; 0040ec30
    MOV EAX,dword ptr [EBX + 0x68]      ; 0040ec31
        ;   Label: caseD_d
    PUSH EAX                            ; 0040ec34
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 0040ec35
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0040ec3a
    MOV EDX,dword ptr [EBX + 0x68]      ; 0040ec3d
    PUSH EDX                            ; 0040ec40
    MOV ESI,EAX                         ; 0040ec41
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0040ec43
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EBX,EAX                         ; 0040ec48
    MOV EAX,dword ptr [EAX + 0x24]      ; 0040ec4a
    ADD EAX,EAX                         ; 0040ec4d
    MOV EDX,EAX                         ; 0040ec4f
    SHL EAX,0x4                         ; 0040ec51
    SUB EAX,EDX                         ; 0040ec54
    MOV EDX,EAX                         ; 0040ec56
    LEA EAX,[ESI + 0x4]                 ; 0040ec58
    ADD ESP,0x4                         ; 0040ec5b
    ADD EAX,EDX                         ; 0040ec5e
    PUSH EAX                            ; 0040ec60
    PUSH EBX                            ; 0040ec61
    PUSH 0x6144ea                       ; 0040ec62 | = "%s (%s)"
    PUSH EBP                            ; 0040ec67
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0040ec68
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0040ec6d
    POP EBP                             ; 0040ec70
    POP EDI                             ; 0040ec71
    POP ESI                             ; 0040ec72
    POP EBX                             ; 0040ec73
    RET                                 ; 0040ec74
    MOV EDX,dword ptr [EBX + 0x68]      ; 0040ec75
        ;   Label: caseD_e
    MOV EAX,dword ptr [EBX + 0x5c]      ; 0040ec78
    CMP EAX,dword ptr [EDX]             ; 0040ec7b
    JL 0x0040eca5                       ; 0040ec7d
        ;   XREF to: 0040eca5 (CONDITIONAL_JUMP)  ; LAB_0040eca5
    MOV ESI,0x6144f2                    ; 0040ec7f | = "(add a new cloth)"
    MOV EDI,EBP                         ; 0040ec84
    PUSH EDI                            ; 0040ec86
    MOV AL,byte ptr [ESI]               ; 0040ec87 | = "(add a new cloth)" | s_dd_a_new_cloth)_006144f4
        ;   Label: LAB_0040ec87
    MOV byte ptr [EDI],AL               ; 0040ec89
    CMP AL,0x0                          ; 0040ec8b
    JZ 0x0040ec9f                       ; 0040ec8d
        ;   XREF to: 0040ec9f (CONDITIONAL_JUMP)  ; LAB_0040ec9f
    MOV AL,byte ptr [ESI + 0x1]         ; 0040ec8f | s_add_a_new_cloth)_006144f3 | s_d_a_new_cloth)_006144f5
    ADD ESI,0x2                         ; 0040ec92
    MOV byte ptr [EDI + 0x1],AL         ; 0040ec95
    ADD EDI,0x2                         ; 0040ec98
    CMP AL,0x0                          ; 0040ec9b
    JNZ 0x0040ec87                      ; 0040ec9d
        ;   XREF to: 0040ec87 (CONDITIONAL_JUMP)  ; LAB_0040ec87
    POP EDI                             ; 0040ec9f
        ;   Label: LAB_0040ec9f
    POP EBP                             ; 0040eca0
    POP EDI                             ; 0040eca1
    POP ESI                             ; 0040eca2
    POP EBX                             ; 0040eca3
    RET                                 ; 0040eca4
    MOV ECX,EAX                         ; 0040eca5
        ;   Label: LAB_0040eca5
    SHL EAX,0x2                         ; 0040eca7
    ADD EAX,ECX                         ; 0040ecaa
    ADD EDX,0x4                         ; 0040ecac
    SHL EAX,0x3                         ; 0040ecaf
    MOV EDI,EBP                         ; 0040ecb2
    LEA ESI,[EDX + EAX*0x1]             ; 0040ecb4
    PUSH EDI                            ; 0040ecb7
    MOV AL,byte ptr [ESI]               ; 0040ecb8
        ;   Label: LAB_0040ecb8
    MOV byte ptr [EDI],AL               ; 0040ecba
    CMP AL,0x0                          ; 0040ecbc
    JZ 0x0040ecd0                       ; 0040ecbe
        ;   XREF to: 0040ecd0 (CONDITIONAL_JUMP)  ; LAB_0040ecd0
    MOV AL,byte ptr [ESI + 0x1]         ; 0040ecc0
    ADD ESI,0x2                         ; 0040ecc3
    MOV byte ptr [EDI + 0x1],AL         ; 0040ecc6
    ADD EDI,0x2                         ; 0040ecc9
    CMP AL,0x0                          ; 0040eccc
    JNZ 0x0040ecb8                      ; 0040ecce
        ;   XREF to: 0040ecb8 (CONDITIONAL_JUMP)  ; LAB_0040ecb8
    POP EDI                             ; 0040ecd0
        ;   Label: LAB_0040ecd0
    POP EBP                             ; 0040ecd1
    POP EDI                             ; 0040ecd2
    POP ESI                             ; 0040ecd3
    POP EBX                             ; 0040ecd4
    RET                                 ; 0040ecd5
    MOV EDX,dword ptr [EBX + 0x68]      ; 0040ecd6
        ;   Label: caseD_10
    MOV EAX,dword ptr [EBX + 0x5c]      ; 0040ecd9
    CMP EAX,dword ptr [EDX]             ; 0040ecdc
    JL 0x0040ed06                       ; 0040ecde
        ;   XREF to: 0040ed06 (CONDITIONAL_JUMP)  ; LAB_0040ed06
    MOV ESI,0x614504                    ; 0040ece0 | = "(add a rule)"
    MOV EDI,EBP                         ; 0040ece5
    PUSH EDI                            ; 0040ece7
    MOV AL,byte ptr [ESI]               ; 0040ece8 | = "(add a rule)" | s_dd_a_rule)_00614506
        ;   Label: LAB_0040ece8
    MOV byte ptr [EDI],AL               ; 0040ecea
    CMP AL,0x0                          ; 0040ecec
    JZ 0x0040ed00                       ; 0040ecee
        ;   XREF to: 0040ed00 (CONDITIONAL_JUMP)  ; LAB_0040ed00
    MOV AL,byte ptr [ESI + 0x1]         ; 0040ecf0 | s_add_a_rule)_00614505 | s_d_a_rule)_00614507
    ADD ESI,0x2                         ; 0040ecf3
    MOV byte ptr [EDI + 0x1],AL         ; 0040ecf6
    ADD EDI,0x2                         ; 0040ecf9
    CMP AL,0x0                          ; 0040ecfc
    JNZ 0x0040ece8                      ; 0040ecfe
        ;   XREF to: 0040ece8 (CONDITIONAL_JUMP)  ; LAB_0040ece8
    POP EDI                             ; 0040ed00
        ;   Label: LAB_0040ed00
    POP EBP                             ; 0040ed01
    POP EDI                             ; 0040ed02
    POP ESI                             ; 0040ed03
    POP EBX                             ; 0040ed04
    RET                                 ; 0040ed05
    MOV ECX,EAX                         ; 0040ed06
        ;   Label: LAB_0040ed06
    SHL EAX,0x2                         ; 0040ed08
    SUB EAX,ECX                         ; 0040ed0b
    SHL EAX,0x3                         ; 0040ed0d
    ADD EAX,ECX                         ; 0040ed10
    SHL EAX,0x2                         ; 0040ed12
    LEA ECX,[EDX + 0x1f8]               ; 0040ed15
    ADD ECX,EAX                         ; 0040ed1b
    ADD EDX,0x4                         ; 0040ed1d
    PUSH ECX                            ; 0040ed20
    ADD EAX,EDX                         ; 0040ed21
    PUSH EAX                            ; 0040ed23
    PUSH 0x614511                       ; 0040ed24 | = "%s => %s"
    PUSH EBP                            ; 0040ed29
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0040ed2a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0040ed2f
    POP EBP                             ; 0040ed32
    POP EDI                             ; 0040ed33
    POP ESI                             ; 0040ed34
    POP EBX                             ; 0040ed35
    RET                                 ; 0040ed36
    MOV ECX,0x61451a                    ; 0040ed37 | = "??????"
        ;   Label: caseD_f
    MOV ESI,dword ptr [EBX + 0x5c]      ; 0040ed3c
    XOR EDI,EDI                         ; 0040ed3f
    TEST ESI,ESI                        ; 0040ed41
    JLE 0x0040ed54                      ; 0040ed43
        ;   XREF to: 0040ed54 (CONDITIONAL_JUMP)  ; LAB_0040ed54
    MOV EDX,dword ptr [EBX + 0x68]      ; 0040ed45
    MOV ESI,dword ptr [EBX + 0x60]      ; 0040ed48
    MOV EAX,dword ptr [EDX]             ; 0040ed4b
        ;   Label: LAB_0040ed4b
    CMP EAX,dword ptr [ESI + 0x4]       ; 0040ed4d
    JNZ 0x0040ed77                      ; 0040ed50
        ;   XREF to: 0040ed77 (CONDITIONAL_JUMP)  ; LAB_0040ed77
    MOV ECX,dword ptr [ESI]             ; 0040ed52
    MOV ESI,ECX                         ; 0040ed54
        ;   Label: LAB_0040ed54
    MOV EDI,EBP                         ; 0040ed56
    PUSH EDI                            ; 0040ed58
    MOV AL,byte ptr [ESI]               ; 0040ed59 | = "??????"
        ;   Label: LAB_0040ed59
    MOV byte ptr [EDI],AL               ; 0040ed5b
    CMP AL,0x0                          ; 0040ed5d
    JZ 0x0040ed71                       ; 0040ed5f
        ;   XREF to: 0040ed71 (CONDITIONAL_JUMP)  ; LAB_0040ed71
    MOV AL,byte ptr [ESI + 0x1]         ; 0040ed61 | s_?????_0061451b
    ADD ESI,0x2                         ; 0040ed64
    MOV byte ptr [EDI + 0x1],AL         ; 0040ed67
    ADD EDI,0x2                         ; 0040ed6a
    CMP AL,0x0                          ; 0040ed6d
    JNZ 0x0040ed59                      ; 0040ed6f
        ;   XREF to: 0040ed59 (CONDITIONAL_JUMP)  ; LAB_0040ed59
    POP EDI                             ; 0040ed71
        ;   Label: LAB_0040ed71
    POP EBP                             ; 0040ed72
    POP EDI                             ; 0040ed73
    POP ESI                             ; 0040ed74
    POP EBX                             ; 0040ed75
    RET                                 ; 0040ed76
    INC EDI                             ; 0040ed77
        ;   Label: LAB_0040ed77
    MOV EAX,dword ptr [EBX + 0x5c]      ; 0040ed78
    ADD ESI,0x8                         ; 0040ed7b
    CMP EDI,EAX                         ; 0040ed7e
    JL 0x0040ed4b                       ; 0040ed80
        ;   XREF to: 0040ed4b (CONDITIONAL_JUMP)  ; LAB_0040ed4b
    JMP 0x0040ed54                      ; 0040ed82
        ;   XREF to: 0040ed54 (UNCONDITIONAL_JUMP)  ; LAB_0040ed54
    MOV ESI,0x614521                    ; 0040ed84 | = "(none)"
        ;   Label: caseD_12
    MOV EDI,EBP                         ; 0040ed89
    PUSH EDI                            ; 0040ed8b
    MOV AL,byte ptr [ESI]               ; 0040ed8c | = "(none)" | s_none_00614521+2
        ;   Label: LAB_0040ed8c
    MOV byte ptr [EDI],AL               ; 0040ed8e
    CMP AL,0x0                          ; 0040ed90
    JZ 0x0040eda4                       ; 0040ed92
        ;   XREF to: 0040eda4 (CONDITIONAL_JUMP)  ; LAB_0040eda4
    MOV AL,byte ptr [ESI + 0x1]         ; 0040ed94 | s_none_00614521+1 | s_ne)_00614524
    ADD ESI,0x2                         ; 0040ed97
    MOV byte ptr [EDI + 0x1],AL         ; 0040ed9a
    ADD EDI,0x2                         ; 0040ed9d
    CMP AL,0x0                          ; 0040eda0
    JNZ 0x0040ed8c                      ; 0040eda2
        ;   XREF to: 0040ed8c (CONDITIONAL_JUMP)  ; LAB_0040ed8c
    POP EDI                             ; 0040eda4
        ;   Label: LAB_0040eda4
    MOV ESI,EBP                         ; 0040eda5
    XOR EDI,EBP                         ; 0040eda7
    MOV EAX,dword ptr [EBX + 0x68]      ; 0040eda9
        ;   Label: LAB_0040eda9
    MOV EDX,dword ptr [EDI + 0x66e30c]  ; 0040edac | g_PropertyFlagDefinitions | g_PropertyFlagDefinitions[1].mask
    TEST dword ptr [EAX],EDX            ; 0040edb2
    JZ 0x0040ede1                       ; 0040edb4
        ;   XREF to: 0040ede1 (CONDITIONAL_JUMP)  ; LAB_0040ede1
    CMP ESI,EBP                         ; 0040edb6
    JBE 0x0040edca                      ; 0040edb8
        ;   XREF to: 0040edca (CONDITIONAL_JUMP)  ; LAB_0040edca
    PUSH 0x614528                       ; 0040edba | = ", "
    PUSH ESI                            ; 0040edbf
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0040edc0
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0040edc5
    ADD ESI,EAX                         ; 0040edc8
    MOV ECX,dword ptr [EDI + 0x66e310]  ; 0040edca | g_PropertyFlagDefinitions[0].name | PTR_s_swing_0066e318
        ;   Label: LAB_0040edca
    PUSH ECX                            ; 0040edd0
    PUSH 0x61452b                       ; 0040edd1 | = "%s"
    PUSH ESI                            ; 0040edd6
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0040edd7
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0040eddc
    ADD ESI,EAX                         ; 0040eddf
    ADD EDI,0x8                         ; 0040ede1
        ;   Label: LAB_0040ede1
    CMP EDI,0x10                        ; 0040ede4
    JZ 0x0040ea83                       ; 0040ede7
        ;   XREF to: 0040ea83 (CONDITIONAL_JUMP)  ; LAB_0040ea83
    JMP 0x0040eda9                      ; 0040eded
        ;   XREF to: 0040eda9 (UNCONDITIONAL_JUMP)  ; LAB_0040eda9
    PUSH EBP                            ; 0040edef
        ;   Label: caseD_11
    PUSH EBX                            ; 0040edf0
    MOV EDI,dword ptr [ESP + 0x20]      ; 0040edf1
    PUSH EDI                            ; 0040edf5
    CALL dword ptr [EBX + 0x68]         ; 0040edf6
    ADD ESP,0xc                         ; 0040edf9
    POP EBP                             ; 0040edfc
    POP EDI                             ; 0040edfd
    POP ESI                             ; 0040edfe
    POP EBX                             ; 0040edff
    RET                                 ; 0040ee00
    MOV ESI,dword ptr [EBX]             ; 0040ee01
        ;   Label: default
    PUSH ESI                            ; 0040ee03
    MOV EDX,0x61452e                    ; 0040ee04 | = "..\\core\\actor.cpp"
    MOV ECX,0xfc9                       ; 0040ee09
    PUSH 0x614540                       ; 0040ee0e | = "Unknown CActorProperty type: %d"
    MOV dword ptr [0x02f0ca48],EDX      ; 0040ee13 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0040ee19 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0040ee1f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0040ee24
    POP EBP                             ; 0040ee27
    POP EDI                             ; 0040ee28
    POP ESI                             ; 0040ee29
    POP EBX                             ; 0040ee2a
    RET                                 ; 0040ee2b

