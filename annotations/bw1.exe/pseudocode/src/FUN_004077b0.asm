; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004077b0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_007c1070
;   undefined4 DAT_01c50948
;
; Called Functions:
;   FUN_004059a0
;   FUN_005823a0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004077b0
        ;   Label: FUN_004077b0
    MOV EDX,dword ptr [0x007c1070]      ; 004077b1 | DAT_007c1070
    TEST EDX,EDX                        ; 004077b7
    JZ 0x004077f6                       ; 004077b9
        ;   XREF to: 004077f6 (CONDITIONAL_JUMP)  ; LAB_004077f6
    PUSH ESI                            ; 004077bb
    CMP dword ptr [0x01c50948],0x0      ; 004077bc | DAT_01c50948
    JNZ 0x004077f8                      ; 004077c3
        ;   XREF to: 004077f8 (CONDITIONAL_JUMP)  ; LAB_004077f8
    XOR ESI,ESI                         ; 004077c5
    TEST EDX,EDX                        ; 004077c7
    JLE 0x004077ee                      ; 004077c9
        ;   XREF to: 004077ee (CONDITIONAL_JUMP)  ; LAB_004077ee
    PUSH EDI                            ; 004077cb
    PUSH EBX                            ; 004077cc
    XOR EBX,EBX                         ; 004077cd
    MOV EDI,dword ptr [EBX + 0x7c1074]  ; 004077cf
        ;   Label: LAB_004077cf
    PUSH EDI                            ; 004077d5
    ADD EBX,0x4                         ; 004077d6
    INC ESI                             ; 004077d9
    CALL FUN_004059a0                   ; 004077da
        ;   XREF to: 004059a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004059a0()
    MOV EBP,dword ptr [0x007c1070]      ; 004077df | DAT_007c1070
    ADD ESP,0x4                         ; 004077e5
    CMP ESI,EBP                         ; 004077e8
    JL 0x004077cf                       ; 004077ea
        ;   XREF to: 004077cf (CONDITIONAL_JUMP)  ; LAB_004077cf
    POP EBX                             ; 004077ec
    POP EDI                             ; 004077ed
    XOR EAX,EAX                         ; 004077ee
        ;   Label: LAB_004077ee
    MOV [0x007c1070],EAX                ; 004077f0 | DAT_007c1070
    POP ESI                             ; 004077f5
    POP EBP                             ; 004077f6
        ;   Label: LAB_004077f6
    RET                                 ; 004077f7
    PUSH 0xcd                           ; 004077f8
        ;   Label: LAB_004077f8
    PUSH EDX                            ; 004077fd
    PUSH 0x7c1074                       ; 004077fe
    PUSH 0x629014                       ; 00407803
    CALL FUN_005823a0                   ; 00407808
        ;   XREF to: 005823a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005823a0()
    ADD ESP,0x10                        ; 0040780d
    XOR EAX,EAX                         ; 00407810
    MOV [0x007c1070],EAX                ; 00407812 | DAT_007c1070
    POP ESI                             ; 00407817
    POP EBP                             ; 00407818
    RET                                 ; 00407819

