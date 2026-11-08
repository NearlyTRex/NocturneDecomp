; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0053a760(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_0052d980 at 0052db76
;   FUN_00538d10 at 00539051
;
; Called Functions:
;   FUN_0053a090
;   FUN_0053a720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053a760
        ;   Label: FUN_0053a760
    PUSH ESI                            ; 0053a761
    PUSH EDI                            ; 0053a762
    MOV ESI,dword ptr [ESP + 0x10]      ; 0053a763
    MOV EDI,dword ptr [ESP + 0x14]      ; 0053a767
    MOV EDX,dword ptr [ESI + 0x15b424]  ; 0053a76b
    XOR EBX,EBX                         ; 0053a771
    TEST EDX,EDX                        ; 0053a773
    JLE 0x0053a78f                      ; 0053a775
        ;   XREF to: 0053a78f (CONDITIONAL_JUMP)  ; LAB_0053a78f
    PUSH EDI                            ; 0053a777
        ;   Label: LAB_0053a777
    PUSH EBX                            ; 0053a778
    PUSH ESI                            ; 0053a779
    CALL FUN_0053a090                   ; 0053a77a
        ;   XREF to: 0053a090 (UNCONDITIONAL_CALL)  ; undefined FUN_0053a090()
    ADD ESP,0xc                         ; 0053a77f
    TEST EAX,EAX                        ; 0053a782
    JNZ 0x0053a798                      ; 0053a784
        ;   XREF to: 0053a798 (CONDITIONAL_JUMP)  ; LAB_0053a798
    INC EBX                             ; 0053a786
    CMP EBX,dword ptr [ESI + 0x15b424]  ; 0053a787
    JL 0x0053a777                       ; 0053a78d
        ;   XREF to: 0053a777 (CONDITIONAL_JUMP)  ; LAB_0053a777
    MOV EAX,0xffffffff                  ; 0053a78f
        ;   Label: LAB_0053a78f
    POP EDI                             ; 0053a794
    POP ESI                             ; 0053a795
    POP EBX                             ; 0053a796
    RET                                 ; 0053a797
    PUSH EBX                            ; 0053a798
        ;   Label: LAB_0053a798
    PUSH ESI                            ; 0053a799
    CALL FUN_0053a720                   ; 0053a79a
        ;   XREF to: 0053a720 (UNCONDITIONAL_CALL)  ; undefined FUN_0053a720()
    ADD ESP,0x8                         ; 0053a79f
    POP EDI                             ; 0053a7a2
    POP ESI                             ; 0053a7a3
    POP EBX                             ; 0053a7a4
    RET                                 ; 0053a7a5

