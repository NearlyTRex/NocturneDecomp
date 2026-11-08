; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f6bf0(int *param_1)
;
;
; XREF[4]:
;   FUN_0048c2e0 at 0048f4df
;   FUN_004f6d70 at 004f6d9f
;   FUN_004f6de0 at 004f6e15
;   FUN_004f7880 at 004f797e
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_005c89f9
;   TerminatedCString s_CDemonMission_buildSetAc_005c8a0d
;   undefined4 DAT_00603b28
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01ed78c8
;   undefined4 DAT_02024a2c
;   undefined4 DAT_02024a30
;
; Called Functions:
;   FUN_004e4330
;   FUN_0053b460
;   FUN_0053eda0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6bf0
        ;   Label: FUN_004f6bf0
    PUSH ESI                            ; 004f6bf1
    PUSH EDI                            ; 004f6bf2
    PUSH EBP                            ; 004f6bf3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004f6bf4
    MOV EAX,[0x00603b28]                ; 004f6bf8 | DAT_00603b28
    MOV dword ptr [EAX + 0x14d164],0x0  ; 004f6bfd | DAT_02024a2c
    MOV EBX,dword ptr [ESI + 0x143c]    ; 004f6c07
    TEST EBX,EBX                        ; 004f6c0d
    JZ 0x004f6c2c                       ; 004f6c0f
        ;   XREF to: 004f6c2c (CONDITIONAL_JUMP)  ; LAB_004f6c2c
    MOV EDI,0x5c89f9                    ; 004f6c11 | = "..\\core\\mission.cpp"
    MOV EBP,0x394                       ; 004f6c16
    MOV EDX,dword ptr [ESI]             ; 004f6c1b
        ;   Label: LAB_004f6c1b
    CMP EDX,dword ptr [EBX + 0x2c]      ; 004f6c1d
    JZ 0x004f6c4f                       ; 004f6c20
        ;   XREF to: 004f6c4f (CONDITIONAL_JUMP)  ; LAB_004f6c4f
    MOV EBX,dword ptr [EBX + 0x14c]     ; 004f6c22
        ;   Label: LAB_004f6c22
    TEST EBX,EBX                        ; 004f6c28
    JNZ 0x004f6c1b                      ; 004f6c2a
        ;   XREF to: 004f6c1b (CONDITIONAL_JUMP)  ; LAB_004f6c1b
    MOV ECX,dword ptr [0x00603b28]      ; 004f6c2c | DAT_00603b28
        ;   Label: LAB_004f6c2c
    PUSH ECX                            ; 004f6c32 | DAT_01ed78c8
    CALL FUN_0053eda0                   ; 004f6c33
        ;   XREF to: 0053eda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053eda0()
    ADD ESP,0x4                         ; 004f6c38
    MOV EBX,dword ptr [0x00603b28]      ; 004f6c3b | DAT_00603b28
    PUSH EBX                            ; 004f6c41 | DAT_01ed78c8
    CALL FUN_0053b460                   ; 004f6c42
        ;   XREF to: 0053b460 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b460()
    ADD ESP,0x4                         ; 004f6c47
    POP EBP                             ; 004f6c4a
    POP EDI                             ; 004f6c4b
    POP ESI                             ; 004f6c4c
    POP EBX                             ; 004f6c4d
    RET                                 ; 004f6c4e
    MOV EAX,[0x00603b28]                ; 004f6c4f | DAT_00603b28
        ;   Label: LAB_004f6c4f
    CMP dword ptr [EAX + 0x14d164],0x7d0 ; 004f6c54 | DAT_02024a2c
    JL 0x004f6c79                       ; 004f6c5e
        ;   XREF to: 004f6c79 (CONDITIONAL_JUMP)  ; LAB_004f6c79
    PUSH 0x5c8a0d                       ; 004f6c60 | = "CDemonMission::buildSetActorList - To..."
    MOV dword ptr [0x01d71de0],EDI      ; 004f6c65 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 004f6c6b | DAT_01d71de4
    CALL FUN_004e4330                   ; 004f6c71
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004f6c76
    MOV EAX,[0x00603b28]                ; 004f6c79 | DAT_00603b28
        ;   Label: LAB_004f6c79
    MOV EDX,dword ptr [EAX + 0x14d164]  ; 004f6c7e | DAT_02024a2c
    MOV dword ptr [EAX + EDX*0x4 + 0x14d168],EBX ; 004f6c84 | DAT_02024a30
    INC dword ptr [EAX + 0x14d164]      ; 004f6c8b | DAT_02024a2c
    JMP 0x004f6c22                      ; 004f6c91
        ;   XREF to: 004f6c22 (UNCONDITIONAL_JUMP)  ; LAB_004f6c22

