; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053c750(int *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_engine_pod_cpp_005eda07
;   TerminatedCString s_Can_t_re_mount_s_s_005eda19
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_0053b250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053c750
        ;   Label: FUN_0053c750
    PUSH ESI                            ; 0053c751
    PUSH EDI                            ; 0053c752
    PUSH EBP                            ; 0053c753
    SUB ESP,0x300                       ; 0053c754
    MOV EAX,dword ptr [ESP + 0x314]     ; 0053c75a
    MOV EDX,dword ptr [EAX]             ; 0053c761
    XOR EBP,EBP                         ; 0053c763
    TEST EDX,EDX                        ; 0053c765
    JLE 0x0053c7be                      ; 0053c767
        ;   XREF to: 0053c7be (CONDITIONAL_JUMP)  ; LAB_0053c7be
    MOV EBX,EAX                         ; 0053c769
    MOV ESI,dword ptr [EBX + 0x4]       ; 0053c76b
        ;   Label: LAB_0053c76b
    LEA EDI,[ESP + 0x200]               ; 0053c76e
    ADD ESI,0x4                         ; 0053c775
    PUSH EDI                            ; 0053c778
    MOV AL,byte ptr [ESI]               ; 0053c779
        ;   Label: LAB_0053c779
    MOV byte ptr [EDI],AL               ; 0053c77b
    CMP AL,0x0                          ; 0053c77d
    JZ 0x0053c791                       ; 0053c77f
        ;   XREF to: 0053c791 (CONDITIONAL_JUMP)  ; LAB_0053c791
    MOV AL,byte ptr [ESI + 0x1]         ; 0053c781
    ADD ESI,0x2                         ; 0053c784
    MOV byte ptr [EDI + 0x1],AL         ; 0053c787
    ADD EDI,0x2                         ; 0053c78a
    CMP AL,0x0                          ; 0053c78d
    JNZ 0x0053c779                      ; 0053c78f
        ;   XREF to: 0053c779 (CONDITIONAL_JUMP)  ; LAB_0053c779
    POP EDI                             ; 0053c791
        ;   Label: LAB_0053c791
    MOV EAX,ESP                         ; 0053c792
    PUSH EAX                            ; 0053c794
    LEA EAX,[ESP + 0x204]               ; 0053c795
    PUSH EAX                            ; 0053c79c
    MOV ESI,dword ptr [EBX + 0x4]       ; 0053c79d
    PUSH ESI                            ; 0053c7a0
    CALL FUN_0053b250                   ; 0053c7a1
        ;   XREF to: 0053b250 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b250()
    ADD ESP,0xc                         ; 0053c7a6
    TEST EAX,EAX                        ; 0053c7a9
    JZ 0x0053c7c9                       ; 0053c7ab
        ;   XREF to: 0053c7c9 (CONDITIONAL_JUMP)  ; LAB_0053c7c9
    MOV EAX,dword ptr [ESP + 0x314]     ; 0053c7ad
        ;   Label: LAB_0053c7ad
    INC EBP                             ; 0053c7b4
    MOV ECX,dword ptr [EAX]             ; 0053c7b5
    ADD EBX,0x4                         ; 0053c7b7
    CMP EBP,ECX                         ; 0053c7ba
    JL 0x0053c76b                       ; 0053c7bc
        ;   XREF to: 0053c76b (CONDITIONAL_JUMP)  ; LAB_0053c76b
    ADD ESP,0x300                       ; 0053c7be
        ;   Label: LAB_0053c7be
    POP EBP                             ; 0053c7c4
    POP EDI                             ; 0053c7c5
    POP ESI                             ; 0053c7c6
    POP EBX                             ; 0053c7c7
    RET                                 ; 0053c7c8
    MOV dword ptr [0x01d1d404],0x474    ; 0053c7c9 | DAT_01d1d404
        ;   Label: LAB_0053c7c9
    MOV EAX,ESP                         ; 0053c7d3
    PUSH EAX                            ; 0053c7d5
    LEA EAX,[ESP + 0x204]               ; 0053c7d6
    PUSH EAX                            ; 0053c7dd
    MOV EDI,0x5eda07                    ; 0053c7de | = "..\\engine\\pod.cpp"
    PUSH 0x5eda19                       ; 0053c7e3 | = "Can't re-mount %s: %s"
    MOV dword ptr [0x01d1d400],EDI      ; 0053c7e8 | DAT_01d1d400
    CALL FUN_005030e0                   ; 0053c7ee
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0xc                         ; 0053c7f3
    JMP 0x0053c7ad                      ; 0053c7f6
        ;   XREF to: 0053c7ad (UNCONDITIONAL_JUMP)  ; LAB_0053c7ad

