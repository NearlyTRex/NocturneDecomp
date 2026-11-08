; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004077f0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_007dd9f0
;   undefined4 DAT_01c6cee8
;
; Called Functions:
;   FUN_004059a0
;   FUN_00565c70
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004077f0
        ;   Label: FUN_004077f0
    MOV EDX,dword ptr [0x007dd9f0]      ; 004077f1 | DAT_007dd9f0
    TEST EDX,EDX                        ; 004077f7
    JZ 0x00407836                       ; 004077f9
        ;   XREF to: 00407836 (CONDITIONAL_JUMP)  ; LAB_00407836
    PUSH ESI                            ; 004077fb
    CMP dword ptr [0x01c6cee8],0x0      ; 004077fc | DAT_01c6cee8
    JNZ 0x00407838                      ; 00407803
        ;   XREF to: 00407838 (CONDITIONAL_JUMP)  ; LAB_00407838
    XOR ESI,ESI                         ; 00407805
    TEST EDX,EDX                        ; 00407807
    JLE 0x0040782e                      ; 00407809
        ;   XREF to: 0040782e (CONDITIONAL_JUMP)  ; LAB_0040782e
    PUSH EDI                            ; 0040780b
    PUSH EBX                            ; 0040780c
    XOR EBX,EBX                         ; 0040780d
    MOV EDI,dword ptr [EBX + 0x7dd9f4]  ; 0040780f
        ;   Label: LAB_0040780f
    PUSH EDI                            ; 00407815
    ADD EBX,0x4                         ; 00407816
    INC ESI                             ; 00407819
    CALL FUN_004059a0                   ; 0040781a
        ;   XREF to: 004059a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004059a0()
    MOV EBP,dword ptr [0x007dd9f0]      ; 0040781f | DAT_007dd9f0
    ADD ESP,0x4                         ; 00407825
    CMP ESI,EBP                         ; 00407828
    JL 0x0040780f                       ; 0040782a
        ;   XREF to: 0040780f (CONDITIONAL_JUMP)  ; LAB_0040780f
    POP EBX                             ; 0040782c
    POP EDI                             ; 0040782d
    XOR EAX,EAX                         ; 0040782e
        ;   Label: LAB_0040782e
    MOV [0x007dd9f0],EAX                ; 00407830 | DAT_007dd9f0
    POP ESI                             ; 00407835
    POP EBP                             ; 00407836
        ;   Label: LAB_00407836
    RET                                 ; 00407837
    PUSH 0xcd                           ; 00407838
        ;   Label: LAB_00407838
    PUSH EDX                            ; 0040783d
    PUSH 0x7dd9f4                       ; 0040783e
    PUSH 0x60b014                       ; 00407843
    CALL FUN_00565c70                   ; 00407848
        ;   XREF to: 00565c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00565c70()
    ADD ESP,0x10                        ; 0040784d
    XOR EAX,EAX                         ; 00407850
    MOV [0x007dd9f0],EAX                ; 00407852 | DAT_007dd9f0
    POP ESI                             ; 00407857
    POP EBP                             ; 00407858
    RET                                 ; 00407859

