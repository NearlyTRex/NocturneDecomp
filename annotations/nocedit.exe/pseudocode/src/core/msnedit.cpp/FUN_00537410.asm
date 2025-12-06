; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_msnedit.cpp_FUN_00537410()
;
; Local Variables:
; undefined1       Stack[-0x2c]:1  local_2c
; undefined1       Stack[-0x2b]:1  local_2b
;
; Referenced Globals:
;   TerminatedCString s_Confirm_new_actor_name_0063b7b6
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   int g_ConfirmNewActorNames = 0x1
;   CEditorTools g_CEditorToolsPtr
;   CDemonMission g_CDemonMissionInstance
;
; Called Functions:
;   core_msnedit.cpp_FUN_0053d220
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537410
        ;   Label: core_msnedit.cpp_FUN_00537410
    PUSH ESI                            ; 00537411
    PUSH EDI                            ; 00537412
    SUB ESP,0x20                        ; 00537413
    MOV EBX,dword ptr [ESP + 0x30]      ; 00537416
    CMP dword ptr [0x00680814],0x0      ; 0053741a | int g_ConfirmNewActorNames
    JNZ 0x0053742f                      ; 00537421 | LAB_0053742f
        ;   XREF to: 0053742f (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 00537423
    ADD ESP,0x20                        ; 00537428
        ;   Label: LAB_00537428
    POP EDI                             ; 0053742b
    POP ESI                             ; 0053742c
    POP EBX                             ; 0053742d
    RET                                 ; 0053742e
    MOV EDI,ESP                         ; 0053742f
        ;   Label: LAB_0053742f
    MOV ESI,EBX                         ; 00537431
    PUSH EDI                            ; 00537433
    MOV AL,byte ptr [ESI]               ; 00537434
        ;   Label: LAB_00537434
    MOV byte ptr [EDI],AL               ; 00537436
    CMP AL,0x0                          ; 00537438
    JZ 0x0053744c                       ; 0053743a | LAB_0053744c
        ;   XREF to: 0053744c (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0053743c
    ADD ESI,0x2                         ; 0053743f
    MOV byte ptr [EDI + 0x1],AL         ; 00537442
    ADD EDI,0x2                         ; 00537445
    CMP AL,0x0                          ; 00537448
    JNZ 0x00537434                      ; 0053744a | LAB_00537434
        ;   XREF to: 00537434 (CONDITIONAL_JUMP)
    POP EDI                             ; 0053744c
        ;   Label: LAB_0053744c
    PUSH 0x1                            ; 0053744d
        ;   Label: LAB_0053744d
    PUSH 0x1e                           ; 0053744f
    LEA EAX,[ESP + 0x8]                 ; 00537451
    PUSH EAX                            ; 00537455
    PUSH 0x63b7b6                       ; 00537456 | = "Confirm new actor name" | s_Confirm_new_actor_name_0063b7b6 = Confirm new actor name
    MOV ECX,dword ptr [0x00678a60]      ; 0053745b | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 00537461 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 00537462 | int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00537467
    TEST EAX,EAX                        ; 0053746a
    JZ 0x00537428                       ; 0053746c | LAB_00537428
        ;   XREF to: 00537428 (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 0053746e
    PUSH EAX                            ; 00537470
    PUSH EBX                            ; 00537471
    MOV EDI,dword ptr [0x0067d550]      ; 00537472 | CDemonMission * g_CDemonMissionPtr
    PUSH EDI                            ; 00537478 | CDemonMission g_CDemonMissionInstance
    CALL core_msnedit.cpp_FUN_0053d220  ; 00537479 | int core_msnedit.cpp_FUN_0053d220(CDemonMission * this_ptr)
        ;   XREF to: 0053d220 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0053747e
    TEST EAX,EAX                        ; 00537481
    JZ 0x0053744d                       ; 00537483 | LAB_0053744d
        ;   XREF to: 0053744d (CONDITIONAL_JUMP)
    MOV ESI,ESP                         ; 00537485
    MOV EDI,EBX                         ; 00537487
    PUSH EDI                            ; 00537489
    MOV AL,byte ptr [ESI]               ; 0053748a
        ;   Label: LAB_0053748a
    MOV byte ptr [EDI],AL               ; 0053748c
    CMP AL,0x0                          ; 0053748e
    JZ 0x005374a2                       ; 00537490 | LAB_005374a2
        ;   XREF to: 005374a2 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00537492
    ADD ESI,0x2                         ; 00537495
    MOV byte ptr [EDI + 0x1],AL         ; 00537498
    ADD EDI,0x2                         ; 0053749b
    CMP AL,0x0                          ; 0053749e
    JNZ 0x0053748a                      ; 005374a0 | LAB_0053748a
        ;   XREF to: 0053748a (CONDITIONAL_JUMP)
    POP EDI                             ; 005374a2
        ;   Label: LAB_005374a2
    MOV EAX,0x1                         ; 005374a3
    ADD ESP,0x20                        ; 005374a8
    POP EDI                             ; 005374ab
    POP ESI                             ; 005374ac
    POP EBX                             ; 005374ad
    RET                                 ; 005374ae

