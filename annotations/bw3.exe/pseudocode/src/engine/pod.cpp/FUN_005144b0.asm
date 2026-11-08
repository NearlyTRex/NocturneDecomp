; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005144b0(int *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_engine_pod_cpp_005cc86f
;   TerminatedCString s_Can_t_re_mount_s_s_005cc881
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;   FUN_00512fb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005144b0
        ;   Label: FUN_005144b0
    PUSH ESI                            ; 005144b1
    PUSH EDI                            ; 005144b2
    PUSH EBP                            ; 005144b3
    SUB ESP,0x300                       ; 005144b4
    MOV EAX,dword ptr [ESP + 0x314]     ; 005144ba
    MOV EDX,dword ptr [EAX]             ; 005144c1
    XOR EBP,EBP                         ; 005144c3
    TEST EDX,EDX                        ; 005144c5
    JLE 0x0051451e                      ; 005144c7
        ;   XREF to: 0051451e (CONDITIONAL_JUMP)  ; LAB_0051451e
    MOV EBX,EAX                         ; 005144c9
    MOV ESI,dword ptr [EBX + 0x4]       ; 005144cb
        ;   Label: LAB_005144cb
    LEA EDI,[ESP + 0x200]               ; 005144ce
    ADD ESI,0x4                         ; 005144d5
    PUSH EDI                            ; 005144d8
    MOV AL,byte ptr [ESI]               ; 005144d9
        ;   Label: LAB_005144d9
    MOV byte ptr [EDI],AL               ; 005144db
    CMP AL,0x0                          ; 005144dd
    JZ 0x005144f1                       ; 005144df
        ;   XREF to: 005144f1 (CONDITIONAL_JUMP)  ; LAB_005144f1
    MOV AL,byte ptr [ESI + 0x1]         ; 005144e1
    ADD ESI,0x2                         ; 005144e4
    MOV byte ptr [EDI + 0x1],AL         ; 005144e7
    ADD EDI,0x2                         ; 005144ea
    CMP AL,0x0                          ; 005144ed
    JNZ 0x005144d9                      ; 005144ef
        ;   XREF to: 005144d9 (CONDITIONAL_JUMP)  ; LAB_005144d9
    POP EDI                             ; 005144f1
        ;   Label: LAB_005144f1
    MOV EAX,ESP                         ; 005144f2
    PUSH EAX                            ; 005144f4
    LEA EAX,[ESP + 0x204]               ; 005144f5
    PUSH EAX                            ; 005144fc
    MOV ESI,dword ptr [EBX + 0x4]       ; 005144fd
    PUSH ESI                            ; 00514500
    CALL FUN_00512fb0                   ; 00514501
        ;   XREF to: 00512fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00512fb0()
    ADD ESP,0xc                         ; 00514506
    TEST EAX,EAX                        ; 00514509
    JZ 0x00514529                       ; 0051450b
        ;   XREF to: 00514529 (CONDITIONAL_JUMP)  ; LAB_00514529
    MOV EAX,dword ptr [ESP + 0x314]     ; 0051450d
        ;   Label: LAB_0051450d
    INC EBP                             ; 00514514
    MOV ECX,dword ptr [EAX]             ; 00514515
    ADD EBX,0x4                         ; 00514517
    CMP EBP,ECX                         ; 0051451a
    JL 0x005144cb                       ; 0051451c
        ;   XREF to: 005144cb (CONDITIONAL_JUMP)  ; LAB_005144cb
    ADD ESP,0x300                       ; 0051451e
        ;   Label: LAB_0051451e
    POP EBP                             ; 00514524
    POP EDI                             ; 00514525
    POP ESI                             ; 00514526
    POP EBX                             ; 00514527
    RET                                 ; 00514528
    MOV dword ptr [0x01d71de4],0x474    ; 00514529 | DAT_01d71de4
        ;   Label: LAB_00514529
    MOV EAX,ESP                         ; 00514533
    PUSH EAX                            ; 00514535
    LEA EAX,[ESP + 0x204]               ; 00514536
    PUSH EAX                            ; 0051453d
    MOV EDI,0x5cc86f                    ; 0051453e | = "..\\engine\\pod.cpp"
    PUSH 0x5cc881                       ; 00514543 | = "Can't re-mount %s: %s"
    MOV dword ptr [0x01d71de0],EDI      ; 00514548 | DAT_01d71de0
    CALL FUN_004e4330                   ; 0051454e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0xc                         ; 00514553
    JMP 0x0051450d                      ; 00514556
        ;   XREF to: 0051450d (UNCONDITIONAL_JUMP)  ; LAB_0051450d

