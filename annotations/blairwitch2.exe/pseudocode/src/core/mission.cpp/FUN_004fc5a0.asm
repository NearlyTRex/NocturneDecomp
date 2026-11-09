; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mission_cpp_FUN_004fc5a0(int *param_1,int param_2,char *param_3)
;
;
; XREF[1]:
;   core_script.cpp_FUN_00522350 at 005245f9
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_005de70b
;   TerminatedCString s_CDemonMission_changeSetN_005de71f
;   TerminatedCString s_core_mission_cpp_005de75c
;   TerminatedCString s_Tried_to_change_the_set_005de770
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc5a0
        ;   Label: core_mission.cpp_FUN_004fc5a0
    PUSH ESI                            ; 004fc5a1
    PUSH EDI                            ; 004fc5a2
    PUSH EBP                            ; 004fc5a3
    MOV EBP,dword ptr [ESP + 0x14]      ; 004fc5a4
    MOV EBX,dword ptr [ESP + 0x18]      ; 004fc5a8
    TEST EBX,EBX                        ; 004fc5ac
    JL 0x004fc5b5                       ; 004fc5ae
        ;   XREF to: 004fc5b5 (CONDITIONAL_JUMP)  ; LAB_004fc5b5
    CMP EBX,dword ptr [EBP + 0x4]       ; 004fc5b0
    JL 0x004fc5dd                       ; 004fc5b3
        ;   XREF to: 004fc5dd (CONDITIONAL_JUMP)  ; LAB_004fc5dd
    MOV EDI,dword ptr [EBP + 0x4]       ; 004fc5b5
        ;   Label: LAB_004fc5b5
    PUSH EDI                            ; 004fc5b8
    PUSH EBX                            ; 004fc5b9
    MOV ECX,0x5de70b                    ; 004fc5ba | = "..\\core\\mission.cpp"
    MOV ESI,0x3bb                       ; 004fc5bf
    PUSH 0x5de71f                       ; 004fc5c4 | = "CDemonMission::changeSetName - invali..."
    MOV dword ptr [0x01d046a0],ECX      ; 004fc5c9 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004fc5cf | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004fc5d5
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 004fc5da
    MOV EAX,EBX                         ; 004fc5dd
        ;   Label: LAB_004fc5dd
    LEA EDI,[EBP + 0x8]                 ; 004fc5df
    SHL EAX,0x8                         ; 004fc5e2
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004fc5e5
    ADD EDI,EAX                         ; 004fc5e9
    PUSH EDI                            ; 004fc5eb
    MOV AL,byte ptr [ESI]               ; 004fc5ec
        ;   Label: LAB_004fc5ec
    MOV byte ptr [EDI],AL               ; 004fc5ee
    CMP AL,0x0                          ; 004fc5f0
    JZ 0x004fc604                       ; 004fc5f2
        ;   XREF to: 004fc604 (CONDITIONAL_JUMP)  ; LAB_004fc604
    MOV AL,byte ptr [ESI + 0x1]         ; 004fc5f4
    ADD ESI,0x2                         ; 004fc5f7
    MOV byte ptr [EDI + 0x1],AL         ; 004fc5fa
    ADD EDI,0x2                         ; 004fc5fd
    CMP AL,0x0                          ; 004fc600
    JNZ 0x004fc5ec                      ; 004fc602
        ;   XREF to: 004fc5ec (CONDITIONAL_JUMP)  ; LAB_004fc5ec
    POP EDI                             ; 004fc604
        ;   Label: LAB_004fc604
    CMP EBX,dword ptr [EBP]             ; 004fc605
    JZ 0x004fc60f                       ; 004fc608
        ;   XREF to: 004fc60f (CONDITIONAL_JUMP)  ; LAB_004fc60f
    POP EBP                             ; 004fc60a
    POP EDI                             ; 004fc60b
    POP ESI                             ; 004fc60c
    POP EBX                             ; 004fc60d
    RET                                 ; 004fc60e
    MOV EDX,0x5de75c                    ; 004fc60f | = "..\\core\\mission.cpp"
        ;   Label: LAB_004fc60f
    MOV ECX,0x3c5                       ; 004fc614
    PUSH 0x5de770                       ; 004fc619 | = "Tried to change the set file for the ..."
    MOV dword ptr [0x01d046a0],EDX      ; 004fc61e | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004fc624 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004fc62a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004fc62f
    POP EBP                             ; 004fc632
    POP EDI                             ; 004fc633
    POP ESI                             ; 004fc634
    POP EBX                             ; 004fc635
    RET                                 ; 004fc636

