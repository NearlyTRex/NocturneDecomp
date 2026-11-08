; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056ede0(int param_1,int param_2)
;
;
; XREF[9]:
;   FUN_00409f60 at 0040a42e
;   FUN_00410490 at 00411175
;   FUN_00424550 at 00424d1e
;   FUN_00486d40 at 00487274
;   FUN_0048b020 at 0048b526
;   FUN_004ae850 at 004af385
;   FUN_004d0fc0 at 004d17c6
;   FUN_00527d70 at 00528449
;   FUN_0056b410 at 0056bc5b
;
; Called Functions:
;   FUN_00486a40
;
; *****************************************************************************

section .text

    XOR EAX,EAX                         ; 0056e8b0
        ;   Label: LAB_0056e8b0
    RET                                 ; 0056e8b2
    MOV EAX,dword ptr [ESP + 0x4]       ; 0056ede0
        ;   Label: FUN_0056ede0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0056ede4
    TEST EDX,EDX                        ; 0056ede8
    JZ 0x0056e8b0                       ; 0056edea
        ;   XREF to: 0056e8b0 (CONDITIONAL_JUMP)  ; LAB_0056e8b0
    CMP dword ptr [EAX + 0x174],0x7     ; 0056edf0
    JNZ 0x0056e8b0                      ; 0056edf7
        ;   XREF to: 0056e8b0 (CONDITIONAL_JUMP)  ; LAB_0056e8b0
    CMP byte ptr [EAX + 0x308],0x0      ; 0056edfd
    JNZ 0x0056ee0c                      ; 0056ee04
        ;   XREF to: 0056ee0c (CONDITIONAL_JUMP)  ; LAB_0056ee0c
    MOV EAX,0x1                         ; 0056ee06
    RET                                 ; 0056ee0b
    PUSH 0x0                            ; 0056ee0c
        ;   Label: LAB_0056ee0c
    PUSH EDX                            ; 0056ee0e
    ADD EAX,0x308                       ; 0056ee0f
    PUSH EAX                            ; 0056ee14
    CALL FUN_00486a40                   ; 0056ee15
        ;   XREF to: 00486a40 (UNCONDITIONAL_CALL)  ; undefined FUN_00486a40()
    ADD ESP,0xc                         ; 0056ee1a
    RET                                 ; 0056ee1d

