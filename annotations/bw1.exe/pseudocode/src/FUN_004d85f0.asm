; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d85f0(int param_1)
;
; Local Variables:
; undefined1       Stack[-0x210]:1  local_210
; undefined1       Stack[-0x20f]:1  local_20f
; undefined        Stack[-0x10c]:1  local_10c
;
; XREF[2]:
;   FUN_004cf5e0 at 004cfc83
;   FUN_004d1a80 at 004d1d03
;
; Referenced Globals:
;   TerminatedCString s_noc_005e3484
;   TerminatedCString s_noc_005e3488
;   TerminatedCString s_noc_005e348d
;   TerminatedCString s_save_005e3493
;   TerminatedCString s_Select_file_to_load_005e3498
;   undefined4 DAT_0061abc0
;   undefined4 DAT_01cd05c0
;   undefined4 DAT_01cd05c1
;   undefined4 DAT_01cd05c2
;   undefined4 DAT_01cd05c3
;
; Called Functions:
;   FUN_00494fd0
;   FUN_00531090
;   FUN_005c04e0
;   FUN_005c2238
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d85f0
        ;   Label: FUN_004d85f0
    PUSH ESI                            ; 004d85f1
    PUSH EDI                            ; 004d85f2
    SUB ESP,0x204                       ; 004d85f3
    MOV EBX,dword ptr [ESP + 0x214]     ; 004d85f9
    LEA EAX,[ESP + 0x104]               ; 004d8600
    PUSH EAX                            ; 004d8607
    PUSH 0x0                            ; 004d8608
    PUSH 0x0                            ; 004d860a
    PUSH 0x0                            ; 004d860c
    MOV dword ptr [EBX + 0x9f8],0x0     ; 004d860e
    PUSH 0x1cd05c0                      ; 004d8618 | DAT_01cd05c0
    MOV byte ptr [EBX + 0x9fc],0x0      ; 004d861d
    CALL FUN_005c2238                   ; 004d8624
        ;   XREF to: 005c2238 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2238()
    ADD ESP,0x14                        ; 004d8629
    PUSH 0x5e3484                       ; 004d862c | = "noc"
    LEA EAX,[ESP + 0x108]               ; 004d8631
    PUSH EAX                            ; 004d8638
    CALL FUN_005c04e0                   ; 004d8639
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 004d863e
    TEST EAX,EAX                        ; 004d8641
    JZ 0x004d865e                       ; 004d8643
        ;   XREF to: 004d865e (CONDITIONAL_JUMP)  ; LAB_004d865e
    PUSH 0x5e3488                       ; 004d8645 | = ".noc"
    LEA EAX,[ESP + 0x108]               ; 004d864a
    PUSH EAX                            ; 004d8651
    CALL FUN_005c04e0                   ; 004d8652
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 004d8657
    TEST EAX,EAX                        ; 004d865a
    JNZ 0x004d86bb                      ; 004d865c
        ;   XREF to: 004d86bb (CONDITIONAL_JUMP)  ; LAB_004d86bb
    MOV ESI,0x1cd05c0                   ; 004d865e
        ;   Label: LAB_004d865e
    MOV EDI,ESP                         ; 004d8663
    PUSH EDI                            ; 004d8665
    MOV AL,byte ptr [ESI]               ; 004d8666 | DAT_01cd05c0 | DAT_01cd05c2
        ;   Label: LAB_004d8666
    MOV byte ptr [EDI],AL               ; 004d8668
    CMP AL,0x0                          ; 004d866a
    JZ 0x004d867e                       ; 004d866c
        ;   XREF to: 004d867e (CONDITIONAL_JUMP)  ; LAB_004d867e
    MOV AL,byte ptr [ESI + 0x1]         ; 004d866e | DAT_01cd05c1 | DAT_01cd05c3
    ADD ESI,0x2                         ; 004d8671
    MOV byte ptr [EDI + 0x1],AL         ; 004d8674
    ADD EDI,0x2                         ; 004d8677
    CMP AL,0x0                          ; 004d867a
    JNZ 0x004d8666                      ; 004d867c
        ;   XREF to: 004d8666 (CONDITIONAL_JUMP)  ; LAB_004d8666
    POP EDI                             ; 004d867e
        ;   Label: LAB_004d867e
    PUSH 0x1                            ; 004d867f
        ;   Label: LAB_004d867f
    LEA EAX,[ESP + 0x4]                 ; 004d8681
    PUSH EAX                            ; 004d8685
    PUSH 0x5e348d                       ; 004d8686 | = "*.noc"
    PUSH 0x5e3493                       ; 004d868b | = "save"
    PUSH 0x5e3498                       ; 004d8690 | = "Select file to load"
    CALL FUN_00531090                   ; 004d8695
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 004d869a
    PUSH EAX                            ; 004d869d
    MOV EDX,dword ptr [0x0061abc0]      ; 004d869e | DAT_0061abc0
    PUSH EDX                            ; 004d86a4
    CALL FUN_00494fd0                   ; 004d86a5
        ;   XREF to: 00494fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00494fd0()
    ADD ESP,0x18                        ; 004d86aa
    TEST EAX,EAX                        ; 004d86ad
    JNZ 0x004d86c2                      ; 004d86af
        ;   XREF to: 004d86c2 (CONDITIONAL_JUMP)  ; LAB_004d86c2
    ADD ESP,0x204                       ; 004d86b1
    POP EDI                             ; 004d86b7
    POP ESI                             ; 004d86b8
    POP EBX                             ; 004d86b9
    RET                                 ; 004d86ba
    XOR AH,AH                           ; 004d86bb
        ;   Label: LAB_004d86bb
    MOV byte ptr [ESP],AH               ; 004d86bd
    JMP 0x004d867f                      ; 004d86c0
        ;   XREF to: 004d867f (UNCONDITIONAL_JUMP)  ; LAB_004d867f
    MOV ESI,ESP                         ; 004d86c2
        ;   Label: LAB_004d86c2
    LEA EDI,[EBX + 0x9fc]               ; 004d86c4
    MOV dword ptr [EBX + 0x9f8],0x1     ; 004d86ca
    PUSH EDI                            ; 004d86d4
    MOV AL,byte ptr [ESI]               ; 004d86d5
        ;   Label: LAB_004d86d5
    MOV byte ptr [EDI],AL               ; 004d86d7
    CMP AL,0x0                          ; 004d86d9
    JZ 0x004d86ed                       ; 004d86db
        ;   XREF to: 004d86ed (CONDITIONAL_JUMP)  ; LAB_004d86ed
    MOV AL,byte ptr [ESI + 0x1]         ; 004d86dd
    ADD ESI,0x2                         ; 004d86e0
    MOV byte ptr [EDI + 0x1],AL         ; 004d86e3
    ADD EDI,0x2                         ; 004d86e6
    CMP AL,0x0                          ; 004d86e9
    JNZ 0x004d86d5                      ; 004d86eb
        ;   XREF to: 004d86d5 (CONDITIONAL_JUMP)  ; LAB_004d86d5
    POP EDI                             ; 004d86ed
        ;   Label: LAB_004d86ed
    ADD ESP,0x204                       ; 004d86ee
    POP EDI                             ; 004d86f4
    POP ESI                             ; 004d86f5
    POP EBX                             ; 004d86f6
    RET                                 ; 004d86f7

