; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00491960(int param_1,char *param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_00489670 at 0048c270
;
; Referenced Globals:
;   TerminatedCString s_core_event_cpp_005d4ef8
;   TerminatedCString s_CEventList_setSfxHandle_005d4f0a
;   TerminatedCString s_core_event_cpp_005d4f33
;   TerminatedCString s_CEventList_setSfxHandle_005d4f45
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_00491a40
;   FUN_00491a90
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00491960
        ;   Label: FUN_00491960
    PUSH ESI                            ; 00491961
    PUSH EDI                            ; 00491962
    PUSH EBP                            ; 00491963
    MOV EBX,dword ptr [ESP + 0x14]      ; 00491964
    MOV ESI,dword ptr [ESP + 0x18]      ; 00491968
    PUSH EBX                            ; 0049196c
    CALL FUN_00491a90                   ; 0049196d
        ;   XREF to: 00491a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00491a90()
    ADD ESP,0x4                         ; 00491972
    PUSH ESI                            ; 00491975
    PUSH EBX                            ; 00491976
    CALL FUN_00491a40                   ; 00491977
        ;   XREF to: 00491a40 (UNCONDITIONAL_CALL)  ; undefined FUN_00491a40()
    ADD ESP,0x8                         ; 0049197c
    MOV EDX,EAX                         ; 0049197f
    TEST EAX,EAX                        ; 00491981
    JGE 0x004919c0                      ; 00491983
        ;   XREF to: 004919c0 (CONDITIONAL_JUMP)  ; LAB_004919c0
    CMP dword ptr [EBX + 0x3ac8],0x14   ; 00491985
    JL 0x004919b1                       ; 0049198c
        ;   XREF to: 004919b1 (CONDITIONAL_JUMP)  ; LAB_004919b1
    MOV ECX,0x5d4ef8                    ; 0049198e | = "..\\core\\event.cpp"
    MOV EDI,0xeb8                       ; 00491993
    PUSH 0x5d4f0a                       ; 00491998 | = "CEventList::setSfxHandle - too many sfx!"
    MOV dword ptr [0x01d046a0],ECX      ; 0049199d | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 004919a3 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004919a9
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004919ae
    MOV EDX,dword ptr [EBX + 0x3ac8]    ; 004919b1
        ;   Label: LAB_004919b1
    LEA EAX,[EDX + 0x1]                 ; 004919b7
    MOV dword ptr [EBX + 0x3ac8],EAX    ; 004919ba
    LEA EAX,[EDX*0x8 + 0x0]             ; 004919c0
        ;   Label: LAB_004919c0
    ADD EAX,EDX                         ; 004919c7
    LEA EBP,[EBX + 0x3acc]              ; 004919c9
    SHL EAX,0x5                         ; 004919cf
    MOV EDI,ESI                         ; 004919d2
    ADD EBP,EAX                         ; 004919d4
    SUB ECX,ECX                         ; 004919d6
    DEC ECX                             ; 004919d8
    XOR EAX,EAX                         ; 004919d9
    SCASB.REPNE ES:EDI                  ; 004919db
    NOT ECX                             ; 004919dd
    DEC ECX                             ; 004919df
    CMP ECX,0x14                        ; 004919e0
    JNC 0x00491a17                      ; 004919e3
        ;   XREF to: 00491a17 (CONDITIONAL_JUMP)  ; LAB_00491a17
    LEA EDI,[EBP + 0x4]                 ; 004919e5
        ;   Label: LAB_004919e5
    PUSH EDI                            ; 004919e8
    MOV AL,byte ptr [ESI]               ; 004919e9
        ;   Label: LAB_004919e9
    MOV byte ptr [EDI],AL               ; 004919eb
    CMP AL,0x0                          ; 004919ed
    JZ 0x00491a01                       ; 004919ef
        ;   XREF to: 00491a01 (CONDITIONAL_JUMP)  ; LAB_00491a01
    MOV AL,byte ptr [ESI + 0x1]         ; 004919f1
    ADD ESI,0x2                         ; 004919f4
    MOV byte ptr [EDI + 0x1],AL         ; 004919f7
    ADD EDI,0x2                         ; 004919fa
    CMP AL,0x0                          ; 004919fd
    JNZ 0x004919e9                      ; 004919ff
        ;   XREF to: 004919e9 (CONDITIONAL_JUMP)  ; LAB_004919e9
    POP EDI                             ; 00491a01
        ;   Label: LAB_00491a01
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00491a02
    PUSH EBX                            ; 00491a06
    MOV dword ptr [EBP],EAX             ; 00491a07
    CALL FUN_00491a90                   ; 00491a0a
        ;   XREF to: 00491a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00491a90()
    ADD ESP,0x4                         ; 00491a0f
    POP EBP                             ; 00491a12
    POP EDI                             ; 00491a13
    POP ESI                             ; 00491a14
    POP EBX                             ; 00491a15
    RET                                 ; 00491a16
    PUSH 0x13                           ; 00491a17
        ;   Label: LAB_00491a17
    PUSH ESI                            ; 00491a19
    MOV EAX,0x5d4f33                    ; 00491a1a | = "..\\core\\event.cpp"
    MOV EDX,0xec0                       ; 00491a1f
    PUSH 0x5d4f45                       ; 00491a24 | = "CEventList::setSfxHandle - sfx handle..."
    MOV [0x01d046a0],EAX                ; 00491a29 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00491a2e | DAT_01d046a4
    CALL FUN_004e4500                   ; 00491a34
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0xc                         ; 00491a39
    JMP 0x004919e5                      ; 00491a3c
        ;   XREF to: 004919e5 (UNCONDITIONAL_JUMP)  ; LAB_004919e5

