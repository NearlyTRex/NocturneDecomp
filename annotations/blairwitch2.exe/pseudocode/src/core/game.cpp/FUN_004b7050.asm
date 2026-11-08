; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b7050(int param_1)
;
;
; XREF[1]:
;   FUN_004b6170 at 004b65b4
;
; Referenced Globals:
;   void* switchdataD_004b7038 = 004b7095
;   TerminatedCString s_core_game_cpp_005d7884
;   TerminatedCString s_CGame_playerControls_unk_005d7895
;   undefined4 DAT_00616044
;   undefined4 DAT_0061b120
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01c2a384
;   undefined4 DAT_01c37790
;   undefined4 DAT_01c37794
;   undefined4 DAT_01caf5ac
;   undefined4 DAT_01cb7528
;   undefined4 DAT_01cb752c
;   undefined4 DAT_01cb7780
;   undefined4 DAT_01cb7784
;   undefined4 DAT_01cb7788
;   ... and 5 more
;
; Called Functions:
;   FUN_004b7510
;   FUN_004b76c0
;   FUN_004b80a0
;   FUN_004b8250
;   FUN_004be8a0
;   FUN_004e4500
;   FUN_0050f430
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004b7050
        ;   Label: FUN_004b7050
    MOV ESI,dword ptr [ESP + 0x8]       ; 004b7051
    CMP dword ptr [0x01cb7788],0x0      ; 004b7055 | DAT_01cb7788
    JNZ 0x004b708a                      ; 004b705c
        ;   XREF to: 004b708a (CONDITIONAL_JUMP)  ; LAB_004b708a
    MOV EAX,[0x00616044]                ; 004b705e | DAT_00616044
    CMP dword ptr [EAX + 0x40],0x0      ; 004b7063 | DAT_01caf5ac
    JNZ 0x004b708a                      ; 004b7067
        ;   XREF to: 004b708a (CONDITIONAL_JUMP)  ; LAB_004b708a
    CMP dword ptr [0x026677e0],0x0      ; 004b7069 | DAT_026677e0
    JNZ 0x004b708a                      ; 004b7070
        ;   XREF to: 004b708a (CONDITIONAL_JUMP)  ; LAB_004b708a
    CMP dword ptr [ESI + 0x218],0x0     ; 004b7072
    JNZ 0x004b7088                      ; 004b7079
        ;   XREF to: 004b7088 (CONDITIONAL_JUMP)  ; LAB_004b7088
    CMP dword ptr [ESI + 0x254],0x0     ; 004b707b
    JZ 0x004b711c                       ; 004b7082
        ;   XREF to: 004b711c (CONDITIONAL_JUMP)  ; LAB_004b711c
    POP ESI                             ; 004b7088
        ;   Label: LAB_004b7088
    RET                                 ; 004b7089
    PUSH ESI                            ; 004b708a
        ;   Label: LAB_004b708a
    CALL FUN_004b8250                   ; 004b708b
        ;   XREF to: 004b8250 (UNCONDITIONAL_CALL)  ; undefined FUN_004b8250()
    ADD ESP,0x4                         ; 004b7090
    POP ESI                             ; 004b7093
    RET                                 ; 004b7094
    PUSH EAX                            ; 004b7095
        ;   Label: caseD_0
    PUSH ESI                            ; 004b7096
    CALL FUN_004b76c0                   ; 004b7097
        ;   XREF to: 004b76c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b76c0()
    ADD ESP,0x8                         ; 004b709c
        ;   Label: LAB_004b709c
    PUSH EDI                            ; 004b709f
        ;   Label: LAB_004b709f
    MOV ECX,0x258                       ; 004b70a0
    MOV ESI,0x1c37790                   ; 004b70a5
    MOV EDI,0x1cb7528                   ; 004b70aa
    PUSH EDI                            ; 004b70af | DAT_01cb7528
    MOV EAX,ECX                         ; 004b70b0
    SHR ECX,0x2                         ; 004b70b2
    MOVSD.REP ES:EDI,ESI                ; 004b70b5 | DAT_01c37790 | DAT_01cb7528 | DAT_01c37794
    MOV CL,AL                           ; 004b70b7
    AND CL,0x3                          ; 004b70b9
    MOVSB.REP ES:EDI,ESI                ; 004b70bc | DAT_01c37794 | DAT_01cb752c
    POP EDI                             ; 004b70be
    MOV EAX,[0x01c2a384]                ; 004b70bf | DAT_01c2a384
    MOV [0x01cb7780],EAX                ; 004b70c4 | DAT_01cb7780
    MOV EAX,[0x0061b5a8]                ; 004b70c9 | DAT_0061b5a8
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 004b70ce | DAT_01fc1070
    MOV [0x01cb7784],EAX                ; 004b70d4 | DAT_01cb7784
    POP EDI                             ; 004b70d9
    POP ESI                             ; 004b70da
    RET                                 ; 004b70db
    PUSH EAX                            ; 004b70dc
        ;   Label: caseD_2
    PUSH ESI                            ; 004b70dd
    CALL FUN_004b7510                   ; 004b70de
        ;   XREF to: 004b7510 (UNCONDITIONAL_CALL)  ; undefined FUN_004b7510()
    JMP 0x004b709c                      ; 004b70e3
        ;   XREF to: 004b709c (UNCONDITIONAL_JUMP)  ; LAB_004b709c
    PUSH EAX                            ; 004b70e5
        ;   Label: caseD_1
    PUSH ESI                            ; 004b70e6
    CALL FUN_004b80a0                   ; 004b70e7
        ;   XREF to: 004b80a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b80a0()
    JMP 0x004b709c                      ; 004b70ec
        ;   XREF to: 004b709c (UNCONDITIONAL_JUMP)  ; LAB_004b709c
    PUSH EAX                            ; 004b70ee
        ;   Label: caseD_3
    PUSH ESI                            ; 004b70ef
    CALL FUN_004be8a0                   ; 004b70f0
        ;   XREF to: 004be8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004be8a0()
    JMP 0x004b709c                      ; 004b70f5
        ;   XREF to: 004b709c (UNCONDITIONAL_JUMP)  ; LAB_004b709c
    MOV EDX,0x5d7884                    ; 004b70f7 | = "..\\core\\game.cpp"
        ;   Label: default
    MOV ECX,0x7d9                       ; 004b70fc
    PUSH 0x5d7895                       ; 004b7101 | = "CGame::playerControls - unknown contr..."
    MOV dword ptr [0x01d046a0],EDX      ; 004b7106 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004b710c | DAT_01d046a4
    CALL FUN_004e4500                   ; 004b7112
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004b7117
    JMP 0x004b709f                      ; 004b711a
        ;   XREF to: 004b709f (UNCONDITIONAL_JUMP)  ; LAB_004b709f
    MOV EAX,[0x0061b120]                ; 004b711c | DAT_0061b120
        ;   Label: LAB_004b711c
    PUSH EAX                            ; 004b7121 | DAT_01d34cb0
    CALL FUN_0050f430                   ; 004b7122
        ;   XREF to: 0050f430 (UNCONDITIONAL_CALL)  ; undefined FUN_0050f430()
    MOV EDX,dword ptr [ESI + 0xd0]      ; 004b7127
    ADD ESP,0x4                         ; 004b712d
    CMP EDX,0x3                         ; 004b7130
    JA 0x004b70f7                       ; 004b7133
        ;   XREF to: 004b70f7 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4b7038]  ; 004b7135 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD

