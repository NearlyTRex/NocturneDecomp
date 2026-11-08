; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042f260(int param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   FUN_0042e930 at 0042e9b0
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042f260
        ;   Label: FUN_0042f260
    MOV ECX,dword ptr [ESP + 0x8]       ; 0042f261
    MOV EDX,dword ptr [ESP + 0xc]       ; 0042f265
    MOV EBX,dword ptr [ESP + 0x10]      ; 0042f269
    CMP ECX,dword ptr [0x01c35e48]      ; 0042f26d | DAT_01c35e48
    JL 0x0042f29f                       ; 0042f273
        ;   XREF to: 0042f29f (CONDITIONAL_JUMP)  ; LAB_0042f29f
    CMP ECX,dword ptr [0x01c35e50]      ; 0042f275 | DAT_01c35e50
    JG 0x0042f29f                       ; 0042f27b
        ;   XREF to: 0042f29f (CONDITIONAL_JUMP)  ; LAB_0042f29f
    CMP EDX,dword ptr [0x01c35e4c]      ; 0042f27d | DAT_01c35e4c
    JL 0x0042f29f                       ; 0042f283
        ;   XREF to: 0042f29f (CONDITIONAL_JUMP)  ; LAB_0042f29f
    CMP EDX,dword ptr [0x01c35e54]      ; 0042f285 | DAT_01c35e54
    JG 0x0042f29f                       ; 0042f28b
        ;   XREF to: 0042f29f (CONDITIONAL_JUMP)  ; LAB_0042f29f
    MOV EAX,[0x006141c0]                ; 0042f28d | DAT_006141c0
    SHL EDX,0x2                         ; 0042f292
    CMP EAX,0x10                        ; 0042f295
    JNC 0x0042f2d9                      ; 0042f298
        ;   XREF to: 0042f2d9 (CONDITIONAL_JUMP)  ; LAB_0042f2d9
    CMP EAX,0x8                         ; 0042f29a
    JZ 0x0042f2a1                       ; 0042f29d
        ;   XREF to: 0042f2a1 (CONDITIONAL_JUMP)  ; LAB_0042f2a1
    POP EBX                             ; 0042f29f
        ;   Label: LAB_0042f29f
    RET                                 ; 0042f2a0
    MOV EAX,dword ptr [EDX + 0x1c2a38c] ; 0042f2a1
        ;   Label: LAB_0042f2a1
    MOV byte ptr [ECX + EAX*0x1],BL     ; 0042f2a7
    POP EBX                             ; 0042f2aa
    RET                                 ; 0042f2ab
    MOV EAX,dword ptr [EDX + 0x1c2a38c] ; 0042f2ac
        ;   Label: LAB_0042f2ac
    ADD ECX,ECX                         ; 0042f2b2
    ADD ECX,EAX                         ; 0042f2b4
    MOV AX,word ptr [EBX*0x2 + 0x1c35614] ; 0042f2b6
    MOV word ptr [ECX],AX               ; 0042f2be
    POP EBX                             ; 0042f2c1
    RET                                 ; 0042f2c2
    SHL ECX,0x2                         ; 0042f2c3
        ;   Label: LAB_0042f2c3
    MOV EAX,dword ptr [EDX + 0x1c2a38c] ; 0042f2c6
    ADD ECX,EAX                         ; 0042f2cc
    MOV EAX,dword ptr [EBX*0x4 + 0x1c35214] ; 0042f2ce
    MOV dword ptr [ECX],EAX             ; 0042f2d5
    POP EBX                             ; 0042f2d7
    RET                                 ; 0042f2d8
    JBE 0x0042f2ac                      ; 0042f2d9
        ;   XREF to: 0042f2ac (CONDITIONAL_JUMP)  ; LAB_0042f2ac
        ;   Label: LAB_0042f2d9
    CMP EAX,0x20                        ; 0042f2db
    JZ 0x0042f2c3                       ; 0042f2de
        ;   XREF to: 0042f2c3 (CONDITIONAL_JUMP)  ; LAB_0042f2c3
    POP EBX                             ; 0042f2e0
    RET                                 ; 0042f2e1

