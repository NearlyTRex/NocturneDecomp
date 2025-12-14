; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_teleport.cpp_CTeleport_FUN_005dabe0(CTeleport * this_ptr)
;
; Parameters:
; CTeleport *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Teleport_has_no_destinat_00654d05
;   TerminatedCString s_Switch_to_destination_s_00654d22
;   double DOUBLE_00654d3b = 4
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CGame* g_CGamePtr = 02d81a9c
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CEditorTools g_CEditorToolsPtr
;   undefined4 g_CGameInstance.delta_time_float
;   void* g_CKeysPtr
;   CDemonMission g_CDemonMissionInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
;   core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
;   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dabe0
        ;   Label: core_teleport.cpp_CTeleport_FUN_005dabe0
    PUSH ESI                            ; 005dabe1
    PUSH EBP                            ; 005dabe2
    SUB ESP,0x8                         ; 005dabe3
    MOV EBX,dword ptr [ESP + 0x18]      ; 005dabe6
    PUSH 0x1d                           ; 005dabea
    MOV EAX,[0x0067cf44]                ; 005dabec | g_CKeysPtr
    PUSH EAX                            ; 005dabf1 | g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 005dabf2 | g_CKeysPtr
    CALL dword ptr [EDX]                ; 005dabf4
    ADD ESP,0x8                         ; 005dabf6
    TEST EAX,EAX                        ; 005dabf9
    JZ 0x005dad3c                       ; 005dabfb
        ;   XREF to: 005dad3c (CONDITIONAL_JUMP)  ; LAB_005dad3c
    MOV EAX,[0x0067b654]                ; 005dac01 | g_CGamePtr
    PUSH 0x4b                           ; 005dac06
    FLD float ptr [EAX + 0x264]         ; 005dac08 | g_CGameInstance.delta_time_float
    MOV EAX,[0x0067cf44]                ; 005dac0e | g_CKeysPtr
    FMUL double ptr [0x00654d3b]        ; 005dac13 | DOUBLE_00654d3b
    PUSH EAX                            ; 005dac19 | g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 005dac1a | g_CKeysPtr
    FSTP float ptr [ESP + 0xc]          ; 005dac1c
    CALL dword ptr [EDX]                ; 005dac20
    ADD ESP,0x8                         ; 005dac22
    TEST EAX,EAX                        ; 005dac25
    JZ 0x005dac39                       ; 005dac27
        ;   XREF to: 005dac39 (CONDITIONAL_JUMP)  ; LAB_005dac39
    FLD float ptr [EBX + 0x158]         ; 005dac29
    FSUB float ptr [ESP + 0x4]          ; 005dac2f
    FSTP float ptr [EBX + 0x158]        ; 005dac33
    PUSH 0x4d                           ; 005dac39
        ;   Label: LAB_005dac39
    MOV EAX,[0x0067cf44]                ; 005dac3b | g_CKeysPtr
    PUSH EAX                            ; 005dac40 | g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 005dac41 | g_CKeysPtr
    CALL dword ptr [EDX]                ; 005dac43
    ADD ESP,0x8                         ; 005dac45
    TEST EAX,EAX                        ; 005dac48
    JZ 0x005dac5c                       ; 005dac4a
        ;   XREF to: 005dac5c (CONDITIONAL_JUMP)  ; LAB_005dac5c
    FLD float ptr [EBX + 0x158]         ; 005dac4c
    FADD float ptr [ESP + 0x4]          ; 005dac52
    FSTP float ptr [EBX + 0x158]        ; 005dac56
    PUSH 0x1e                           ; 005dac5c
        ;   Label: LAB_005dac5c
    MOV EAX,[0x0067cf44]                ; 005dac5e | g_CKeysPtr
    PUSH EAX                            ; 005dac63 | g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 005dac64 | g_CKeysPtr
    CALL dword ptr [EDX]                ; 005dac66
    ADD ESP,0x8                         ; 005dac68
    TEST EAX,EAX                        ; 005dac6b
    JZ 0x005dac7f                       ; 005dac6d
        ;   XREF to: 005dac7f (CONDITIONAL_JUMP)  ; LAB_005dac7f
    FLD float ptr [EBX + 0x15c]         ; 005dac6f
    FSUB float ptr [ESP + 0x4]          ; 005dac75
    FSTP float ptr [EBX + 0x15c]        ; 005dac79
    PUSH 0x10                           ; 005dac7f
        ;   Label: LAB_005dac7f
    MOV EAX,[0x0067cf44]                ; 005dac81 | g_CKeysPtr
    PUSH EAX                            ; 005dac86 | g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 005dac87 | g_CKeysPtr
    CALL dword ptr [EDX]                ; 005dac89
    ADD ESP,0x8                         ; 005dac8b
    TEST EAX,EAX                        ; 005dac8e
    JZ 0x005daca2                       ; 005dac90
        ;   XREF to: 005daca2 (CONDITIONAL_JUMP)  ; LAB_005daca2
    FLD float ptr [EBX + 0x15c]         ; 005dac92
    FADD float ptr [ESP + 0x4]          ; 005dac98
    FSTP float ptr [EBX + 0x15c]        ; 005dac9c
    PUSH 0x50                           ; 005daca2
        ;   Label: LAB_005daca2
    MOV EAX,[0x0067cf44]                ; 005daca4 | g_CKeysPtr
    PUSH EAX                            ; 005daca9 | g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 005dacaa | g_CKeysPtr
    CALL dword ptr [EDX]                ; 005dacac
    ADD ESP,0x8                         ; 005dacae
    TEST EAX,EAX                        ; 005dacb1
    JZ 0x005dacc5                       ; 005dacb3
        ;   XREF to: 005dacc5 (CONDITIONAL_JUMP)  ; LAB_005dacc5
    FLD float ptr [EBX + 0x160]         ; 005dacb5
    FSUB float ptr [ESP + 0x4]          ; 005dacbb
    FSTP float ptr [EBX + 0x160]        ; 005dacbf
    PUSH 0x48                           ; 005dacc5
        ;   Label: LAB_005dacc5
    MOV EAX,[0x0067cf44]                ; 005dacc7 | g_CKeysPtr
    PUSH EAX                            ; 005daccc | g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 005daccd | g_CKeysPtr
    CALL dword ptr [EDX]                ; 005daccf
    ADD ESP,0x8                         ; 005dacd1
    TEST EAX,EAX                        ; 005dacd4
    JZ 0x005dace8                       ; 005dacd6
        ;   XREF to: 005dace8 (CONDITIONAL_JUMP)  ; LAB_005dace8
    FLD float ptr [EBX + 0x160]         ; 005dacd8
    FADD float ptr [ESP + 0x4]          ; 005dacde
    FSTP float ptr [EBX + 0x160]        ; 005dace2
    MOV EDX,0x3f000000                  ; 005dace8
        ;   Label: LAB_005dace8
    MOV ECX,dword ptr [EBX + 0x158]     ; 005daced
    MOV dword ptr [ESP],EDX             ; 005dacf3
    CMP ECX,EDX                         ; 005dacf6
    JGE 0x005dad00                      ; 005dacf8
        ;   XREF to: 005dad00 (CONDITIONAL_JUMP)  ; LAB_005dad00
    MOV dword ptr [EBX + 0x158],EDX     ; 005dacfa
    FLD float ptr [EBX + 0x15c]         ; 005dad00
        ;   Label: LAB_005dad00
    FCOMP float ptr [ESP]               ; 005dad06
    FNSTSW AX                           ; 005dad09
    SAHF                                ; 005dad0b
    JNC 0x005dad17                      ; 005dad0c
        ;   XREF to: 005dad17 (CONDITIONAL_JUMP)  ; LAB_005dad17
    MOV EAX,dword ptr [ESP]             ; 005dad0e
    MOV dword ptr [EBX + 0x15c],EAX     ; 005dad11
    FLD float ptr [EBX + 0x160]         ; 005dad17
        ;   Label: LAB_005dad17
    FCOMP float ptr [ESP]               ; 005dad1d
    FNSTSW AX                           ; 005dad20
    SAHF                                ; 005dad22
    JC 0x005dad2c                       ; 005dad23
        ;   XREF to: 005dad2c (CONDITIONAL_JUMP)  ; LAB_005dad2c
    ADD ESP,0x8                         ; 005dad25
        ;   Label: LAB_005dad25
    POP EBP                             ; 005dad28
    POP ESI                             ; 005dad29
    POP EBX                             ; 005dad2a
    RET                                 ; 005dad2b
    MOV EAX,dword ptr [ESP]             ; 005dad2c
        ;   Label: LAB_005dad2c
    MOV dword ptr [EBX + 0x160],EAX     ; 005dad2f
    ADD ESP,0x8                         ; 005dad35
    POP EBP                             ; 005dad38
    POP ESI                             ; 005dad39
    POP EBX                             ; 005dad3a
    RET                                 ; 005dad3b
    PUSH 0x14                           ; 005dad3c
        ;   Label: LAB_005dad3c
    MOV EAX,[0x0067cf44]                ; 005dad3e | g_CKeysPtr
    PUSH EAX                            ; 005dad43 | g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 005dad44 | g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 005dad46
    ADD ESP,0x8                         ; 005dad49
    TEST EAX,EAX                        ; 005dad4c
    JZ 0x005dadac                       ; 005dad4e
        ;   XREF to: 005dadac (CONDITIONAL_JUMP)  ; LAB_005dadac
    MOV EDX,dword ptr [EBX + 0x164]     ; 005dad50
    TEST EDX,EDX                        ; 005dad56
    JZ 0x005dad92                       ; 005dad58
        ;   XREF to: 005dad92 (CONDITIONAL_JUMP)  ; LAB_005dad92
    PUSH EDX                            ; 005dad5a
    PUSH 0x654d22                       ; 005dad5b | = "Switch to destination %s"
    MOV ESI,dword ptr [0x00678a60]      ; 005dad60 | g_CEditorToolsPtr
    PUSH ESI                            ; 005dad66 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060 ; 005dad67
        ;   XREF to: 0049f060 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0xc                         ; 005dad6c
    TEST EAX,EAX                        ; 005dad6f
    JZ 0x005dad25                       ; 005dad71
        ;   XREF to: 005dad25 (CONDITIONAL_JUMP)  ; LAB_005dad25
    PUSH EDI                            ; 005dad73
    MOV EDI,dword ptr [EBX + 0x164]     ; 005dad74
    PUSH EDI                            ; 005dad7a
    MOV EBP,dword ptr [0x0067d550]      ; 005dad7b | g_CDemonMissionPtr
    PUSH EBP                            ; 005dad81 | g_CDemonMissionInstance
    CALL core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140 ; 005dad82
        ;   XREF to: 0053c140 (UNCONDITIONAL_CALL)  ; undefined core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140()
    ADD ESP,0x8                         ; 005dad87
    POP EDI                             ; 005dad8a
    ADD ESP,0x8                         ; 005dad8b
    POP EBP                             ; 005dad8e
    POP ESI                             ; 005dad8f
    POP EBX                             ; 005dad90
    RET                                 ; 005dad91
    PUSH 0x654d05                       ; 005dad92 | = "Teleport has no destination!"
        ;   Label: LAB_005dad92
    MOV EAX,[0x00678a60]                ; 005dad97 | g_CEditorToolsPtr
    PUSH EAX                            ; 005dad9c | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 005dad9d
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 005dada2
    ADD ESP,0x8                         ; 005dada5
    POP EBP                             ; 005dada8
    POP ESI                             ; 005dada9
    POP EBX                             ; 005dadaa
    RET                                 ; 005dadab
    PUSH EBX                            ; 005dadac
        ;   Label: LAB_005dadac
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 005dadad
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005dadb2
    ADD ESP,0x8                         ; 005dadb5
    POP EBP                             ; 005dadb8
    POP ESI                             ; 005dadb9
    POP EBX                             ; 005dadba
    RET                                 ; 005dadbb

