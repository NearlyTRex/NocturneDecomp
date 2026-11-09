; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mission_cpp_FUN_004f6cd0(int *param_1,int param_2,char *param_3)
;
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052bb95
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_005c8a50
;   TerminatedCString s_CDemonMission_changeSetN_005c8a64
;   TerminatedCString s_core_mission_cpp_005c8aa1
;   TerminatedCString s_Tried_to_change_the_set_005c8ab5
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6cd0
        ;   Label: core_mission.cpp_FUN_004f6cd0
    PUSH ESI                            ; 004f6cd1
    PUSH EDI                            ; 004f6cd2
    PUSH EBP                            ; 004f6cd3
    MOV EBP,dword ptr [ESP + 0x14]      ; 004f6cd4
    MOV EBX,dword ptr [ESP + 0x18]      ; 004f6cd8
    TEST EBX,EBX                        ; 004f6cdc
    JL 0x004f6ce5                       ; 004f6cde
        ;   XREF to: 004f6ce5 (CONDITIONAL_JUMP)  ; LAB_004f6ce5
    CMP EBX,dword ptr [EBP + 0x4]       ; 004f6ce0
    JL 0x004f6d0d                       ; 004f6ce3
        ;   XREF to: 004f6d0d (CONDITIONAL_JUMP)  ; LAB_004f6d0d
    MOV EDI,dword ptr [EBP + 0x4]       ; 004f6ce5
        ;   Label: LAB_004f6ce5
    PUSH EDI                            ; 004f6ce8
    PUSH EBX                            ; 004f6ce9
    MOV ECX,0x5c8a50                    ; 004f6cea | = "..\\core\\mission.cpp"
    MOV ESI,0x3be                       ; 004f6cef
    PUSH 0x5c8a64                       ; 004f6cf4 | = "CDemonMission::changeSetName - invali..."
    MOV dword ptr [0x01d71de0],ECX      ; 004f6cf9 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004f6cff | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f6d05
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 004f6d0a
    MOV EAX,EBX                         ; 004f6d0d
        ;   Label: LAB_004f6d0d
    LEA EDI,[EBP + 0x8]                 ; 004f6d0f
    SHL EAX,0x8                         ; 004f6d12
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004f6d15
    ADD EDI,EAX                         ; 004f6d19
    PUSH EDI                            ; 004f6d1b
    MOV AL,byte ptr [ESI]               ; 004f6d1c
        ;   Label: LAB_004f6d1c
    MOV byte ptr [EDI],AL               ; 004f6d1e
    CMP AL,0x0                          ; 004f6d20
    JZ 0x004f6d34                       ; 004f6d22
        ;   XREF to: 004f6d34 (CONDITIONAL_JUMP)  ; LAB_004f6d34
    MOV AL,byte ptr [ESI + 0x1]         ; 004f6d24
    ADD ESI,0x2                         ; 004f6d27
    MOV byte ptr [EDI + 0x1],AL         ; 004f6d2a
    ADD EDI,0x2                         ; 004f6d2d
    CMP AL,0x0                          ; 004f6d30
    JNZ 0x004f6d1c                      ; 004f6d32
        ;   XREF to: 004f6d1c (CONDITIONAL_JUMP)  ; LAB_004f6d1c
    POP EDI                             ; 004f6d34
        ;   Label: LAB_004f6d34
    CMP EBX,dword ptr [EBP]             ; 004f6d35
    JZ 0x004f6d3f                       ; 004f6d38
        ;   XREF to: 004f6d3f (CONDITIONAL_JUMP)  ; LAB_004f6d3f
    POP EBP                             ; 004f6d3a
    POP EDI                             ; 004f6d3b
    POP ESI                             ; 004f6d3c
    POP EBX                             ; 004f6d3d
    RET                                 ; 004f6d3e
    MOV EDX,0x5c8aa1                    ; 004f6d3f | = "..\\core\\mission.cpp"
        ;   Label: LAB_004f6d3f
    MOV ECX,0x3c8                       ; 004f6d44
    PUSH 0x5c8ab5                       ; 004f6d49 | = "Tried to change the set file for the ..."
    MOV dword ptr [0x01d71de0],EDX      ; 004f6d4e | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004f6d54 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f6d5a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f6d5f
    POP EBP                             ; 004f6d62
    POP EDI                             ; 004f6d63
    POP ESI                             ; 004f6d64
    POP EBX                             ; 004f6d65
    RET                                 ; 004f6d66

