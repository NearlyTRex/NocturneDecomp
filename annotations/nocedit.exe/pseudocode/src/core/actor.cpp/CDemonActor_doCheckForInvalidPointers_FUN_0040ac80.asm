; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 (CDemonActor *this_ptr,char *context_file,int context_line)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   context_file
; int              Stack[0xc]:4   context_line
; Local Variables:
; undefined8       Stack[-0x30]:8  temp_z
; undefined8       Stack[-0x28]:8  temp_y
; undefined8       Stack[-0x20]:8  temp_x
; int              Stack[-0x18]:4  char_index
; CDemonActor *    Stack[-0x14]:4  current_ptr
;
; XREF[50]:
;   core_actor.cpp_CDemonActor_allowBulletHoles_FUN_004098a0 at 004098af
;   core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409ec0 at 00409ed5
;   core_actor.cpp_CDemonActor_canPickup_FUN_00409000 at 0040900f
;   core_actor.cpp_CDemonActor_customGetFloorHeight_FUN_00408d50 at 00408d60
;   core_actor.cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10 at 00408d20
;   core_actor.cpp_CDemonActor_customRayIntersect_FUN_00408cc0 at 00408cd6
;   core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0 at 00408dca
;   core_actor.cpp_CDemonActor_drop_FUN_00409080 at 0040908f
;   core_actor.cpp_CDemonActor_evaluateTriggerCondition_FUN_00409f40 at 00409f4f
;   core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0 at 0040abd5
;   ... and 40 more
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_00613ac2
;   TerminatedCString s_NULL_actor_pointer_detec_00613ad4
;   TerminatedCString s_core_actor_cpp_00613afc
;   TerminatedCString s_Invalid_actor_pointer_08_00613b0e
;   TerminatedCString s_core_actor_cpp_00613b41
;   TerminatedCString s_Dangling_corrupt_actor_p_00613b53
;   TerminatedCString s_core_actor_cpp_00613bb1
;   TerminatedCString s_Dangling_corrupt_actor_p_00613bc3
;   TerminatedCString s_core_actor_cpp_00613c1e
;   TerminatedCString s_Dangling_corrupt_actor_p_00613c30
;   float g_MaxValidPosition = 99999
;   char[256] g_CharacterClassificationTable
;   int g_ActorMagicNumber
;   char[50] g_ActorDebugBuffer
;   undefined4 CHAR_ARRAY_00821fc4
;   ... and 2 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ac80
        ;   Label: core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
    PUSH ESI                            ; 0040ac81
    PUSH EDI                            ; 0040ac82
    PUSH EBP                            ; 0040ac83
    MOV EBP,ESP                         ; 0040ac84
    SUB ESP,0x8                         ; 0040ac86
    MOV EBX,dword ptr [EBP + 0x14]      ; 0040ac89
    TEST EBX,EBX                        ; 0040ac8c
    JZ 0x0040ae7e                       ; 0040ac8e
        ;   XREF to: 0040ae7e (CONDITIONAL_JUMP)  ; LAB_0040ae7e
    CMP EBX,0xff000000                  ; 0040ac94
        ;   Label: LAB_0040ac94
    JC 0x0040aeae                       ; 0040ac9a
        ;   XREF to: 0040aeae (CONDITIONAL_JUMP)  ; LAB_0040aeae
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0040aca0
        ;   Label: LAB_0040aca0
    PUSH ECX                            ; 0040aca3
    MOV ESI,dword ptr [EBP + 0x18]      ; 0040aca4
    PUSH ESI                            ; 0040aca7
    PUSH EBX                            ; 0040aca8
    MOV EAX,0x613afc                    ; 0040aca9 | = "..\\core\\actor.cpp"
    MOV EDX,0x70e                       ; 0040acae
    PUSH 0x613b0e                       ; 0040acb3 | = "Invalid actor pointer %08X detected a..."
    MOV [0x02f0ca48],EAX                ; 0040acb8 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0040acbd | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0040acc3
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x10                        ; 0040acc8
    MOV EDI,dword ptr [EBX + 0x68]      ; 0040accb
        ;   Label: LAB_0040accb
    CMP EDI,0x78a123                    ; 0040acce | g_ActorMagicNumber
    JZ 0x0040ad30                       ; 0040acd4
        ;   XREF to: 0040ad30 (CONDITIONAL_JUMP)  ; LAB_0040ad30
    PUSH EDI                            ; 0040acd6
    PUSH 0x32                           ; 0040acd7
    MOV EAX,0x613b41                    ; 0040acd9 | = "..\\core\\actor.cpp"
    PUSH 0x0                            ; 0040acde
    MOV EDX,0x718                       ; 0040ace0
    MOV ESI,EBX                         ; 0040ace5
    PUSH 0x821fc0                       ; 0040ace7 | g_ActorDebugBuffer
    MOV [0x02f0ca48],EAX                ; 0040acec | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0040acf1 | g_CurrentLineNumber
    CALL crt_memory.c_memset_FUN_005fde40 ; 0040acf7
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0040acfc
    MOV EDI,0x821fc0                    ; 0040acff | g_ActorDebugBuffer
    MOV ECX,0x31                        ; 0040ad04
    PUSH EDI                            ; 0040ad09 | g_ActorDebugBuffer
    MOV EAX,ECX                         ; 0040ad0a
    SHR ECX,0x2                         ; 0040ad0c
    MOVSD.REP ES:EDI,ESI                ; 0040ad0f | g_ActorDebugBuffer | CHAR_ARRAY_00821fc4
    MOV CL,AL                           ; 0040ad11
    AND CL,0x3                          ; 0040ad13
    MOVSB.REP ES:EDI,ESI                ; 0040ad16 | g_ActorDebugBuffer | CHAR_ARRAY_00821fc4
    POP EDI                             ; 0040ad18
    PUSH EDI                            ; 0040ad19 | g_ActorDebugBuffer
    PUSH EBX                            ; 0040ad1a
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0040ad1b
    PUSH ESI                            ; 0040ad1e
    MOV EDI,dword ptr [EBP + 0x18]      ; 0040ad1f
    PUSH EDI                            ; 0040ad22
    PUSH 0x613b53                       ; 0040ad23 | = "Dangling/corrupt actor pointer detect..."
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0040ad28
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x18                        ; 0040ad2d
    LEA EAX,[EBX + 0x20]                ; 0040ad30
        ;   Label: LAB_0040ad30
    FLD float ptr [EAX + 0x4]           ; 0040ad33
    FMUL ST0                            ; 0040ad36
    FLD float ptr [EAX]                 ; 0040ad38
    FMUL ST0                            ; 0040ad3a
    FADDP                               ; 0040ad3c
    FLD float ptr [EAX + 0x8]           ; 0040ad3e
    FMUL ST0                            ; 0040ad41
    FADDP                               ; 0040ad43
    FSQRT                               ; 0040ad45
    FCOMP float ptr [0x00613c7c]        ; 0040ad47 | g_MaxValidPosition
    FNSTSW AX                           ; 0040ad4d
    SAHF                                ; 0040ad4f
    JBE 0x0040adc6                      ; 0040ad50
        ;   XREF to: 0040adc6 (CONDITIONAL_JUMP)  ; LAB_0040adc6
    SUB ESP,0x8                         ; 0040ad52
    FLD float ptr [EBX + 0x28]          ; 0040ad55
    FSTP double ptr [ESP]               ; 0040ad58
    SUB ESP,0x8                         ; 0040ad5b
    FLD float ptr [EBX + 0x24]          ; 0040ad5e
    FSTP double ptr [ESP]               ; 0040ad61
    SUB ESP,0x8                         ; 0040ad64
    FLD float ptr [EBX + 0x20]          ; 0040ad67
    FSTP double ptr [ESP]               ; 0040ad6a
    PUSH 0x32                           ; 0040ad6d
    MOV EAX,0x613bb1                    ; 0040ad6f | = "..\\core\\actor.cpp"
    PUSH 0x0                            ; 0040ad74
    MOV EDX,0x723                       ; 0040ad76
    MOV EDI,0x821fc0                    ; 0040ad7b | g_ActorDebugBuffer
    PUSH 0x821fc0                       ; 0040ad80 | g_ActorDebugBuffer
    MOV [0x02f0ca48],EAX                ; 0040ad85 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0040ad8a | g_CurrentLineNumber
    CALL crt_memory.c_memset_FUN_005fde40 ; 0040ad90
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0040ad95
    MOV ESI,EBX                         ; 0040ad98
    MOV ECX,0x31                        ; 0040ad9a
    PUSH EDI                            ; 0040ad9f | g_ActorDebugBuffer
    MOV EAX,ECX                         ; 0040ada0
    SHR ECX,0x2                         ; 0040ada2
    MOVSD.REP ES:EDI,ESI                ; 0040ada5 | g_ActorDebugBuffer | CHAR_ARRAY_00821fc4
    MOV CL,AL                           ; 0040ada7
    AND CL,0x3                          ; 0040ada9
    MOVSB.REP ES:EDI,ESI                ; 0040adac | g_ActorDebugBuffer | CHAR_ARRAY_00821fc4
    POP EDI                             ; 0040adae
    PUSH EDI                            ; 0040adaf | g_ActorDebugBuffer
    PUSH EBX                            ; 0040adb0
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0040adb1
    PUSH ECX                            ; 0040adb4
    MOV ESI,dword ptr [EBP + 0x18]      ; 0040adb5
    PUSH ESI                            ; 0040adb8
    PUSH 0x613bc3                       ; 0040adb9 | = "Dangling/corrupt actor pointer detect..."
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0040adbe
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x2c                        ; 0040adc3
    MOV dword ptr [EBP + -0x4],EBX      ; 0040adc6
        ;   Label: LAB_0040adc6
    XOR EDI,EDI                         ; 0040adc9
    MOV AH,byte ptr [EBX]               ; 0040adcb
    MOV dword ptr [EBP + -0x8],EDI      ; 0040adcd
    TEST AH,AH                          ; 0040add0
    JZ 0x0040ae77                       ; 0040add2
        ;   XREF to: 0040ae77 (CONDITIONAL_JUMP)  ; LAB_0040ae77
    CMP dword ptr [EBP + -0x8],0x1d     ; 0040add8
        ;   Label: LAB_0040add8
    JC 0x0040aebf                       ; 0040addc
        ;   XREF to: 0040aebf (CONDITIONAL_JUMP)  ; LAB_0040aebf
    SUB ESP,0x8                         ; 0040ade2
        ;   Label: LAB_0040ade2
    FLD float ptr [EBX + 0x28]          ; 0040ade5
    FSTP double ptr [ESP]               ; 0040ade8
    SUB ESP,0x8                         ; 0040adeb
    FLD float ptr [EBX + 0x24]          ; 0040adee
    FSTP double ptr [ESP]               ; 0040adf1
    SUB ESP,0x8                         ; 0040adf4
    FLD float ptr [EBX + 0x20]          ; 0040adf7
    FSTP double ptr [ESP]               ; 0040adfa
    PUSH 0x32                           ; 0040adfd
    PUSH 0x0                            ; 0040adff
    MOV ESI,0x613c1e                    ; 0040ae01 | = "..\\core\\actor.cpp"
    MOV EDI,0x731                       ; 0040ae06
    PUSH 0x821fc0                       ; 0040ae0b | g_ActorDebugBuffer
    MOV dword ptr [0x02f0ca48],ESI      ; 0040ae10 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0040ae16 | g_CurrentLineNumber
    CALL crt_memory.c_memset_FUN_005fde40 ; 0040ae1c
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0040ae21
    TEST EBX,EBX                        ; 0040ae24
    JZ 0x0040ae44                       ; 0040ae26
        ;   XREF to: 0040ae44 (CONDITIONAL_JUMP)  ; LAB_0040ae44
    MOV ECX,0x31                        ; 0040ae28
    MOV EDI,0x821fc0                    ; 0040ae2d | g_ActorDebugBuffer
    MOV ESI,EBX                         ; 0040ae32
    PUSH EDI                            ; 0040ae34 | g_ActorDebugBuffer
    MOV EAX,ECX                         ; 0040ae35
    SHR ECX,0x2                         ; 0040ae37
    MOVSD.REP ES:EDI,ESI                ; 0040ae3a | g_ActorDebugBuffer | CHAR_ARRAY_00821fc4
    MOV CL,AL                           ; 0040ae3c
    AND CL,0x3                          ; 0040ae3e
    MOVSB.REP ES:EDI,ESI                ; 0040ae41 | g_ActorDebugBuffer | CHAR_ARRAY_00821fc4
    POP EDI                             ; 0040ae43
    PUSH 0x821fc0                       ; 0040ae44 | g_ActorDebugBuffer
        ;   Label: LAB_0040ae44
    PUSH EBX                            ; 0040ae49
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0040ae4a
    PUSH EAX                            ; 0040ae4d
    MOV EDX,dword ptr [EBP + 0x18]      ; 0040ae4e
    PUSH EDX                            ; 0040ae51
    PUSH 0x613c30                       ; 0040ae52 | = "Dangling/corrupt actor pointer detect..."
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0040ae57
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x2c                        ; 0040ae5c
    MOV EDX,dword ptr [EBP + -0x8]      ; 0040ae5f
        ;   Label: LAB_0040ae5f
    MOV EAX,dword ptr [EBP + -0x4]      ; 0040ae62
    INC EDX                             ; 0040ae65
    INC EAX                             ; 0040ae66
    MOV dword ptr [EBP + -0x8],EDX      ; 0040ae67
    MOV DL,byte ptr [EAX]               ; 0040ae6a
    MOV dword ptr [EBP + -0x4],EAX      ; 0040ae6c
    TEST DL,DL                          ; 0040ae6f
    JNZ 0x0040add8                      ; 0040ae71
        ;   XREF to: 0040add8 (CONDITIONAL_JUMP)  ; LAB_0040add8
    MOV ESP,EBP                         ; 0040ae77
        ;   Label: LAB_0040ae77
    POP EBP                             ; 0040ae79
    POP EDI                             ; 0040ae7a
    POP ESI                             ; 0040ae7b
    POP EBX                             ; 0040ae7c
    RET                                 ; 0040ae7d
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0040ae7e
        ;   Label: LAB_0040ae7e
    PUSH ESI                            ; 0040ae81
    MOV EDI,dword ptr [EBP + 0x18]      ; 0040ae82
    PUSH EDI                            ; 0040ae85
    MOV EDX,0x613ac2                    ; 0040ae86 | = "..\\core\\actor.cpp"
    MOV ECX,0x70a                       ; 0040ae8b
    PUSH 0x613ad4                       ; 0040ae90 | = "NULL actor pointer detected, %s line %d"
    MOV dword ptr [0x02f0ca48],EDX      ; 0040ae95 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0040ae9b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0040aea1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 0040aea6
    JMP 0x0040ac94                      ; 0040aea9
        ;   XREF to: 0040ac94 (UNCONDITIONAL_JUMP)  ; LAB_0040ac94
    CMP EBX,0x1000                      ; 0040aeae
        ;   Label: LAB_0040aeae
    JL 0x0040aca0                       ; 0040aeb4
        ;   XREF to: 0040aca0 (CONDITIONAL_JUMP)  ; LAB_0040aca0
    JMP 0x0040accb                      ; 0040aeba
        ;   XREF to: 0040accb (UNCONDITIONAL_JUMP)  ; LAB_0040accb
    MOV EAX,dword ptr [EBP + -0x4]      ; 0040aebf
        ;   Label: LAB_0040aebf
    MOV AL,byte ptr [EAX]               ; 0040aec2
    INC AL                              ; 0040aec4
    AND EAX,0xff                        ; 0040aec6
    TEST byte ptr [EAX + 0x6849c4],0x8  ; 0040aecb | g_CharacterClassificationTable
    JNZ 0x0040ae5f                      ; 0040aed2
        ;   XREF to: 0040ae5f (CONDITIONAL_JUMP)  ; LAB_0040ae5f
    JMP 0x0040ade2                      ; 0040aed4
        ;   XREF to: 0040ade2 (UNCONDITIONAL_JUMP)  ; LAB_0040ade2

