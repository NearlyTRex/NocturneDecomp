; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051b500(int *param_1,int param_2,char *param_3)
;
;
; XREF[1]:
;   FUN_00544460 at 005464ae
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_005e974e
;   TerminatedCString s_CDemonMission_changeSetN_005e9762
;   TerminatedCString s_core_mission_cpp_005e979f
;   TerminatedCString s_Tried_to_change_the_set_005e97b3
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b500
        ;   Label: FUN_0051b500
    PUSH ESI                            ; 0051b501
    PUSH EDI                            ; 0051b502
    PUSH EBP                            ; 0051b503
    MOV EBP,dword ptr [ESP + 0x14]      ; 0051b504
    MOV EBX,dword ptr [ESP + 0x18]      ; 0051b508
    TEST EBX,EBX                        ; 0051b50c
    JL 0x0051b515                       ; 0051b50e
        ;   XREF to: 0051b515 (CONDITIONAL_JUMP)  ; LAB_0051b515
    CMP EBX,dword ptr [EBP + 0x4]       ; 0051b510
    JL 0x0051b53d                       ; 0051b513
        ;   XREF to: 0051b53d (CONDITIONAL_JUMP)  ; LAB_0051b53d
    MOV EDI,dword ptr [EBP + 0x4]       ; 0051b515
        ;   Label: LAB_0051b515
    PUSH EDI                            ; 0051b518
    PUSH EBX                            ; 0051b519
    MOV ECX,0x5e974e                    ; 0051b51a | = "..\\core\\mission.cpp"
    MOV ESI,0x3be                       ; 0051b51f
    PUSH 0x5e9762                       ; 0051b524 | = "CDemonMission::changeSetName - invali..."
    MOV dword ptr [0x01d1d400],ECX      ; 0051b529 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0051b52f | DAT_01d1d404
    CALL FUN_005030e0                   ; 0051b535
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0xc                         ; 0051b53a
    MOV EAX,EBX                         ; 0051b53d
        ;   Label: LAB_0051b53d
    LEA EDI,[EBP + 0x8]                 ; 0051b53f
    SHL EAX,0x8                         ; 0051b542
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0051b545
    ADD EDI,EAX                         ; 0051b549
    PUSH EDI                            ; 0051b54b
    MOV AL,byte ptr [ESI]               ; 0051b54c
        ;   Label: LAB_0051b54c
    MOV byte ptr [EDI],AL               ; 0051b54e
    CMP AL,0x0                          ; 0051b550
    JZ 0x0051b564                       ; 0051b552
        ;   XREF to: 0051b564 (CONDITIONAL_JUMP)  ; LAB_0051b564
    MOV AL,byte ptr [ESI + 0x1]         ; 0051b554
    ADD ESI,0x2                         ; 0051b557
    MOV byte ptr [EDI + 0x1],AL         ; 0051b55a
    ADD EDI,0x2                         ; 0051b55d
    CMP AL,0x0                          ; 0051b560
    JNZ 0x0051b54c                      ; 0051b562
        ;   XREF to: 0051b54c (CONDITIONAL_JUMP)  ; LAB_0051b54c
    POP EDI                             ; 0051b564
        ;   Label: LAB_0051b564
    CMP EBX,dword ptr [EBP]             ; 0051b565
    JZ 0x0051b56f                       ; 0051b568
        ;   XREF to: 0051b56f (CONDITIONAL_JUMP)  ; LAB_0051b56f
    POP EBP                             ; 0051b56a
    POP EDI                             ; 0051b56b
    POP ESI                             ; 0051b56c
    POP EBX                             ; 0051b56d
    RET                                 ; 0051b56e
    MOV EDX,0x5e979f                    ; 0051b56f | = "..\\core\\mission.cpp"
        ;   Label: LAB_0051b56f
    MOV ECX,0x3c8                       ; 0051b574
    PUSH 0x5e97b3                       ; 0051b579 | = "Tried to change the set file for the ..."
    MOV dword ptr [0x01d1d400],EDX      ; 0051b57e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0051b584 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0051b58a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0051b58f
    POP EBP                             ; 0051b592
    POP EDI                             ; 0051b593
    POP ESI                             ; 0051b594
    POP EBX                             ; 0051b595
    RET                                 ; 0051b596

