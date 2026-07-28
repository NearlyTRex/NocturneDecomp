; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte * crt_time_c_parse_timezone_spec_FUN_0056d658(byte *param_1,byte *param_2,int *param_3)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_time.c_parse_tz_string_FUN_0056d87c at 0056d8a0
;
; Called Functions:
;   crt_string.c_parse_uint_FUN_0056d628
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056d658
        ;   Label: crt_time.c_parse_timezone_spec_FUN_0056d658
    PUSH ESI                            ; 0056d659
    PUSH EDI                            ; 0056d65a
    PUSH EBP                            ; 0056d65b
    SUB ESP,0xc                         ; 0056d65c
    MOV EBX,dword ptr [ESP + 0x20]      ; 0056d65f
    CMP byte ptr [EBX],0x3a             ; 0056d663
    JNZ 0x0056d669                      ; 0056d666
        ;   XREF to: 0056d669 (CONDITIONAL_JUMP)  ; LAB_0056d669
    INC EBX                             ; 0056d668
    MOV ESI,EBX                         ; 0056d669
        ;   Label: LAB_0056d669
    MOV DL,byte ptr [EBX]               ; 0056d66b
        ;   Label: LAB_0056d66b
    TEST DL,DL                          ; 0056d66d
    JZ 0x0056d68d                       ; 0056d66f
        ;   XREF to: 0056d68d (CONDITIONAL_JUMP)  ; LAB_0056d68d
    CMP DL,0x2c                         ; 0056d671
    JZ 0x0056d68d                       ; 0056d674
        ;   XREF to: 0056d68d (CONDITIONAL_JUMP)  ; LAB_0056d68d
    CMP DL,0x2d                         ; 0056d676
    JZ 0x0056d68d                       ; 0056d679
        ;   XREF to: 0056d68d (CONDITIONAL_JUMP)  ; LAB_0056d68d
    CMP DL,0x2b                         ; 0056d67b
    JZ 0x0056d68d                       ; 0056d67e
        ;   XREF to: 0056d68d (CONDITIONAL_JUMP)  ; LAB_0056d68d
    CMP DL,0x30                         ; 0056d680
    JC 0x0056d68a                       ; 0056d683
        ;   XREF to: 0056d68a (CONDITIONAL_JUMP)  ; LAB_0056d68a
    CMP DL,0x39                         ; 0056d685
    JBE 0x0056d68d                      ; 0056d688
        ;   XREF to: 0056d68d (CONDITIONAL_JUMP)  ; LAB_0056d68d
    INC EBX                             ; 0056d68a
        ;   Label: LAB_0056d68a
    JMP 0x0056d66b                      ; 0056d68b
        ;   XREF to: 0056d66b (UNCONDITIONAL_JUMP)  ; LAB_0056d66b
    MOV EBP,EBX                         ; 0056d68d
        ;   Label: LAB_0056d68d
    SUB EBP,ESI                         ; 0056d68f
    CMP EBP,0x80                        ; 0056d691
    JLE 0x0056d69e                      ; 0056d697
        ;   XREF to: 0056d69e (CONDITIONAL_JUMP)  ; LAB_0056d69e
    MOV EBP,0x80                        ; 0056d699
    MOV EDI,dword ptr [ESP + 0x24]      ; 0056d69e
        ;   Label: LAB_0056d69e
    MOV ECX,EBP                         ; 0056d6a2
    PUSH ES                             ; 0056d6a4
    MOV AX,DS                           ; 0056d6a5
    MOV ES,AX                           ; 0056d6a7
    PUSH EDI                            ; 0056d6a9
    MOV EAX,ECX                         ; 0056d6aa
    SHR ECX,0x2                         ; 0056d6ac
    MOVSD.REP ES:EDI,ESI                ; 0056d6af
    MOV CL,AL                           ; 0056d6b1
    AND CL,0x3                          ; 0056d6b3
    MOVSB.REP ES:EDI,ESI                ; 0056d6b6
    POP EDI                             ; 0056d6b8
    POP ES                              ; 0056d6b9
    ADD EBP,EDI                         ; 0056d6ba
    LEA EAX,[EBX + 0x1]                 ; 0056d6bc
    XOR ESI,ESI                         ; 0056d6bf
    MOV byte ptr [EBP],0x0              ; 0056d6c1
    CMP DL,0x2d                         ; 0056d6c5
    JNZ 0x0056d6d1                      ; 0056d6c8
        ;   XREF to: 0056d6d1 (CONDITIONAL_JUMP)  ; LAB_0056d6d1
    MOV ESI,0x1                         ; 0056d6ca
    JMP 0x0056d6d6                      ; 0056d6cf
        ;   XREF to: 0056d6d6 (UNCONDITIONAL_JUMP)  ; LAB_0056d6d6
    CMP DL,0x2b                         ; 0056d6d1
        ;   Label: LAB_0056d6d1
    JNZ 0x0056d6d8                      ; 0056d6d4
        ;   XREF to: 0056d6d8 (CONDITIONAL_JUMP)  ; LAB_0056d6d8
    MOV EBX,EAX                         ; 0056d6d6
        ;   Label: LAB_0056d6d6
    MOV AL,byte ptr [EBX]               ; 0056d6d8
        ;   Label: LAB_0056d6d8
    CMP AL,0x30                         ; 0056d6da
    JC 0x0056d769                       ; 0056d6dc
        ;   XREF to: 0056d769 (CONDITIONAL_JUMP)  ; LAB_0056d769
    CMP AL,0x39                         ; 0056d6e2
    JA 0x0056d769                       ; 0056d6e4
        ;   XREF to: 0056d769 (CONDITIONAL_JUMP)  ; LAB_0056d769
    LEA EAX,[ESP + 0x8]                 ; 0056d6ea
    XOR EDI,EDI                         ; 0056d6ee
    PUSH EAX                            ; 0056d6f0
    MOV dword ptr [ESP + 0x4],EDI       ; 0056d6f1
    PUSH EBX                            ; 0056d6f5
    MOV dword ptr [ESP + 0xc],EDI       ; 0056d6f6
    MOV dword ptr [ESP + 0x10],EDI      ; 0056d6fa
    CALL crt_string.c_parse_uint_FUN_0056d628 ; 0056d6fe
        ;   XREF to: 0056d628 (UNCONDITIONAL_CALL)  ; char * crt_string.c_parse_uint_FUN_0056d628(char * str, int * result)
    ADD ESP,0x8                         ; 0056d703
    MOV DL,byte ptr [EAX]               ; 0056d706
    MOV EBX,EAX                         ; 0056d708
    CMP DL,0x3a                         ; 0056d70a
    JNZ 0x0056d736                      ; 0056d70d
        ;   XREF to: 0056d736 (CONDITIONAL_JUMP)  ; LAB_0056d736
    LEA EBX,[ESP + 0x4]                 ; 0056d70f
    PUSH EBX                            ; 0056d713
    INC EAX                             ; 0056d714
    PUSH EAX                            ; 0056d715
    CALL crt_string.c_parse_uint_FUN_0056d628 ; 0056d716
        ;   XREF to: 0056d628 (UNCONDITIONAL_CALL)  ; char * crt_string.c_parse_uint_FUN_0056d628(char * str, int * result)
    ADD ESP,0x8                         ; 0056d71b
    MOV DH,byte ptr [EAX]               ; 0056d71e
    MOV EBX,EAX                         ; 0056d720
    CMP DH,0x3a                         ; 0056d722
    JNZ 0x0056d736                      ; 0056d725
        ;   XREF to: 0056d736 (CONDITIONAL_JUMP)  ; LAB_0056d736
    MOV EBX,ESP                         ; 0056d727
    PUSH EBX                            ; 0056d729
    INC EAX                             ; 0056d72a
    PUSH EAX                            ; 0056d72b
    CALL crt_string.c_parse_uint_FUN_0056d628 ; 0056d72c
        ;   XREF to: 0056d628 (UNCONDITIONAL_CALL)  ; char * crt_string.c_parse_uint_FUN_0056d628(char * str, int * result)
    ADD ESP,0x8                         ; 0056d731
    MOV EBX,EAX                         ; 0056d734
    MOV EBP,dword ptr [ESP + 0x8]       ; 0056d736
        ;   Label: LAB_0056d736
    MOV EAX,EBP                         ; 0056d73a
    SHL EAX,0x4                         ; 0056d73c
    SUB EAX,EBP                         ; 0056d73f
    MOV EBP,dword ptr [ESP + 0x4]       ; 0056d741
    SHL EAX,0x2                         ; 0056d745
    ADD EBP,EAX                         ; 0056d748
    MOV EAX,EBP                         ; 0056d74a
    SHL EAX,0x4                         ; 0056d74c
    SUB EAX,EBP                         ; 0056d74f
    MOV EBP,dword ptr [ESP]             ; 0056d751
    SHL EAX,0x2                         ; 0056d754
    ADD EBP,EAX                         ; 0056d757
    MOV EAX,dword ptr [ESP + 0x28]      ; 0056d759
    MOV dword ptr [EAX],EBP             ; 0056d75d
    TEST ESI,ESI                        ; 0056d75f
    JZ 0x0056d769                       ; 0056d761
        ;   XREF to: 0056d769 (CONDITIONAL_JUMP)  ; LAB_0056d769
    MOV EDX,EBP                         ; 0056d763
    NEG EDX                             ; 0056d765
    MOV dword ptr [EAX],EDX             ; 0056d767
    MOV EAX,EBX                         ; 0056d769
        ;   Label: LAB_0056d769
    ADD ESP,0xc                         ; 0056d76b
    POP EBP                             ; 0056d76e
    POP EDI                             ; 0056d76f
    POP ESI                             ; 0056d770
    POP EBX                             ; 0056d771
    RET                                 ; 0056d772

