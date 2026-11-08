; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00437b80(int param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   FUN_00437250 at 004372d0
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b0
;   undefined4 DAT_01c6b5b4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00437b80
        ;   Label: FUN_00437b80
    MOV ECX,dword ptr [ESP + 0x8]       ; 00437b81
    MOV EDX,dword ptr [ESP + 0xc]       ; 00437b85
    MOV EBX,dword ptr [ESP + 0x10]      ; 00437b89
    CMP ECX,dword ptr [0x01c6b5a8]      ; 00437b8d | DAT_01c6b5a8
    JL 0x00437bbf                       ; 00437b93
        ;   XREF to: 00437bbf (CONDITIONAL_JUMP)  ; LAB_00437bbf
    CMP ECX,dword ptr [0x01c6b5b0]      ; 00437b95 | DAT_01c6b5b0
    JG 0x00437bbf                       ; 00437b9b
        ;   XREF to: 00437bbf (CONDITIONAL_JUMP)  ; LAB_00437bbf
    CMP EDX,dword ptr [0x01c6b5ac]      ; 00437b9d | DAT_01c6b5ac
    JL 0x00437bbf                       ; 00437ba3
        ;   XREF to: 00437bbf (CONDITIONAL_JUMP)  ; LAB_00437bbf
    CMP EDX,dword ptr [0x01c6b5b4]      ; 00437ba5 | DAT_01c6b5b4
    JG 0x00437bbf                       ; 00437bab
        ;   XREF to: 00437bbf (CONDITIONAL_JUMP)  ; LAB_00437bbf
    MOV EAX,[0x005fba20]                ; 00437bad | DAT_005fba20
    SHL EDX,0x2                         ; 00437bb2
    CMP EAX,0x10                        ; 00437bb5
    JNC 0x00437bf9                      ; 00437bb8
        ;   XREF to: 00437bf9 (CONDITIONAL_JUMP)  ; LAB_00437bf9
    CMP EAX,0x8                         ; 00437bba
    JZ 0x00437bc1                       ; 00437bbd
        ;   XREF to: 00437bc1 (CONDITIONAL_JUMP)  ; LAB_00437bc1
    POP EBX                             ; 00437bbf
        ;   Label: LAB_00437bbf
    RET                                 ; 00437bc0
    MOV EAX,dword ptr [EDX + 0x1c5faec] ; 00437bc1
        ;   Label: LAB_00437bc1
    MOV byte ptr [ECX + EAX*0x1],BL     ; 00437bc7
    POP EBX                             ; 00437bca
    RET                                 ; 00437bcb
    MOV EAX,dword ptr [EDX + 0x1c5faec] ; 00437bcc
        ;   Label: LAB_00437bcc
    ADD ECX,ECX                         ; 00437bd2
    ADD ECX,EAX                         ; 00437bd4
    MOV AX,word ptr [EBX*0x2 + 0x1c6ad74] ; 00437bd6
    MOV word ptr [ECX],AX               ; 00437bde
    POP EBX                             ; 00437be1
    RET                                 ; 00437be2
    SHL ECX,0x2                         ; 00437be3
        ;   Label: LAB_00437be3
    MOV EAX,dword ptr [EDX + 0x1c5faec] ; 00437be6
    ADD ECX,EAX                         ; 00437bec
    MOV EAX,dword ptr [EBX*0x4 + 0x1c6a974] ; 00437bee
    MOV dword ptr [ECX],EAX             ; 00437bf5
    POP EBX                             ; 00437bf7
    RET                                 ; 00437bf8
    JBE 0x00437bcc                      ; 00437bf9
        ;   XREF to: 00437bcc (CONDITIONAL_JUMP)  ; LAB_00437bcc
        ;   Label: LAB_00437bf9
    CMP EAX,0x20                        ; 00437bfb
    JZ 0x00437be3                       ; 00437bfe
        ;   XREF to: 00437be3 (CONDITIONAL_JUMP)  ; LAB_00437be3
    POP EBX                             ; 00437c00
    RET                                 ; 00437c01

