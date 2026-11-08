; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ba280(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00603b28
;   undefined4 DAT_01d22c6c
;
; Called Functions:
;   FUN_00534890
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004ba280
        ;   Label: FUN_004ba280
    MOV ECX,dword ptr [ESP + 0x8]       ; 004ba281
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ba285
    CMP EDX,dword ptr [ECX + 0x268]     ; 004ba289
    JZ 0x004ba29d                       ; 004ba28f
        ;   XREF to: 004ba29d (CONDITIONAL_JUMP)  ; LAB_004ba29d
    TEST EDX,EDX                        ; 004ba291
    JNZ 0x004ba29f                      ; 004ba293
        ;   XREF to: 004ba29f (CONDITIONAL_JUMP)  ; LAB_004ba29f
    MOV dword ptr [ECX + 0x268],EDX     ; 004ba295
    JZ 0x004ba2b9                       ; 004ba29b
        ;   XREF to: 004ba2b9 (CONDITIONAL_JUMP)  ; LAB_004ba2b9
    POP EBP                             ; 004ba29d
        ;   Label: LAB_004ba29d
    RET                                 ; 004ba29e
    MOV EAX,[0x00603b28]                ; 004ba29f | DAT_00603b28
        ;   Label: LAB_004ba29f
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 004ba2a4
    MOV [0x01d22c6c],EAX                ; 004ba2aa | DAT_01d22c6c
    MOV dword ptr [ECX + 0x268],EDX     ; 004ba2af
    JZ 0x004ba2b9                       ; 004ba2b5
        ;   XREF to: 004ba2b9 (CONDITIONAL_JUMP)  ; LAB_004ba2b9
    POP EBP                             ; 004ba2b7
    RET                                 ; 004ba2b8
    PUSH EDI                            ; 004ba2b9
        ;   Label: LAB_004ba2b9
    MOV EDI,dword ptr [0x01d22c6c]      ; 004ba2ba | DAT_01d22c6c
    PUSH EDI                            ; 004ba2c0
    MOV EBP,dword ptr [0x00603b28]      ; 004ba2c1 | DAT_00603b28
    PUSH EBP                            ; 004ba2c7
    CALL FUN_00534890                   ; 004ba2c8
        ;   XREF to: 00534890 (UNCONDITIONAL_CALL)  ; undefined FUN_00534890()
    ADD ESP,0x8                         ; 004ba2cd
    POP EDI                             ; 004ba2d0
    POP EBP                             ; 004ba2d1
    RET                                 ; 004ba2d2

