; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d0d10(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_0055f770 at 0055f7de
;   FUN_00589270 at 0058940a
;   FUN_00589430 at 00589533
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_0061c8d0
;   undefined4 DAT_0061c8d8
;   undefined4 DAT_0061c8e0
;   undefined4 DAT_0061c8e8
;   undefined4 DAT_0061c908
;   undefined4 DAT_0061c928
;   undefined4 DAT_0061c930
;   undefined4 DAT_0061c950
;   undefined4 DAT_0061c970
;   undefined4 DAT_01c35814
;   undefined4 DAT_01c35818
;   undefined4 DAT_01c3581c
;   undefined4 DAT_01c35820
;   undefined4 DAT_01c35824
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d0d10
        ;   Label: FUN_004d0d10
    PUSH ESI                            ; 004d0d11
    PUSH EDI                            ; 004d0d12
    PUSH EBP                            ; 004d0d13
    SUB ESP,0x8                         ; 004d0d14
    CMP dword ptr [0x006141c0],0x10     ; 004d0d17 | DAT_006141c0
    JNZ 0x004d0e4f                      ; 004d0d1e
        ;   XREF to: 004d0e4f (CONDITIONAL_JUMP)  ; LAB_004d0e4f
    XOR EBX,EBX                         ; 004d0d24
    XOR ESI,ESI                         ; 004d0d26
    XOR EAX,EAX                         ; 004d0d28
        ;   Label: LAB_004d0d28
    MOV EDI,dword ptr [0x01c35818]      ; 004d0d2a | DAT_01c35818
    MOV AL,byte ptr [EBX + 0x1c35838]   ; 004d0d30 | DAT_01c35838
    XOR EDX,EDX                         ; 004d0d36
    MOV dword ptr [ESP],EAX             ; 004d0d38
    DIV EDI                             ; 004d0d3b
    MOVZX EBP,byte ptr [EBX + 0x1c35839] ; 004d0d3d | DAT_01c35839
    MOV dword ptr [ESP + 0x4],EBP       ; 004d0d44
    MOV dword ptr [ESP],EAX             ; 004d0d48
    XOR EDX,EDX                         ; 004d0d4b
    MOV EAX,EBP                         ; 004d0d4d
    DIV dword ptr [0x01c35824]          ; 004d0d4f | DAT_01c35824
    XOR ECX,ECX                         ; 004d0d55
    MOV CL,byte ptr [EBX + 0x1c3583a]   ; 004d0d57 | DAT_01c3583a
    MOV dword ptr [ESP + 0x4],EAX       ; 004d0d5d
    XOR EDX,EDX                         ; 004d0d61
    MOV EAX,ECX                         ; 004d0d63
    DIV dword ptr [0x01c35830]          ; 004d0d65 | DAT_01c35830
    MOV EDX,dword ptr [ESP]             ; 004d0d6b
    MOV CL,byte ptr [0x01c35814]        ; 004d0d6e | DAT_01c35814
    MOV EDI,EAX                         ; 004d0d74
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d0d76
    SHL EDX,CL                          ; 004d0d7a
    MOV CL,byte ptr [0x01c35820]        ; 004d0d7c | DAT_01c35820
    SHL EAX,CL                          ; 004d0d82
    MOV CL,byte ptr [0x01c3582c]        ; 004d0d84 | DAT_01c3582c
    OR EDX,EAX                          ; 004d0d8a
    MOV EAX,EDI                         ; 004d0d8c
    SHL EAX,CL                          ; 004d0d8e
    ADD ESI,0x2                         ; 004d0d90
    OR EAX,EDX                          ; 004d0d93
    ADD EBX,0x3                         ; 004d0d95
    MOV word ptr [ESI + 0x1c3490e],AX   ; 004d0d98
    CMP ESI,0x200                       ; 004d0d9f
    JNZ 0x004d0d28                      ; 004d0da5
        ;   XREF to: 004d0d28 (CONDITIONAL_JUMP)  ; LAB_004d0d28
    MOV EAX,0xff                        ; 004d0da7
    MOV CL,byte ptr [0x01c3581c]        ; 004d0dac | DAT_01c3581c
    SHR EAX,CL                          ; 004d0db2
    MOV ECX,dword ptr [0x01c35814]      ; 004d0db4 | DAT_01c35814
    MOV EBX,EAX                         ; 004d0dba
    SHL EBX,CL                          ; 004d0dbc
    MOV CL,byte ptr [0x01c35828]        ; 004d0dbe | DAT_01c35828
    MOV dword ptr [0x0061c8d0],EBX      ; 004d0dc4 | DAT_0061c8d0
    MOV EBX,0xff                        ; 004d0dca
    SHR EBX,CL                          ; 004d0dcf
    MOV ECX,dword ptr [0x01c35820]      ; 004d0dd1 | DAT_01c35820
    MOV ESI,EBX                         ; 004d0dd7
    SHL ESI,CL                          ; 004d0dd9
    MOV CL,byte ptr [0x01c35834]        ; 004d0ddb | DAT_01c35834
    MOV dword ptr [0x0061c8d8],ESI      ; 004d0de1 | DAT_0061c8d8
    MOV ESI,0xff                        ; 004d0de7
    SHR ESI,CL                          ; 004d0dec
    MOV ECX,dword ptr [0x01c3582c]      ; 004d0dee | DAT_01c3582c
    MOV EDI,ESI                         ; 004d0df4
    SHL EDI,CL                          ; 004d0df6
    MOV CL,byte ptr [0x01c3581c]        ; 004d0df8 | DAT_01c3581c
    MOV dword ptr [0x0061c8e0],EDI      ; 004d0dfe | DAT_0061c8e0
    SHL EAX,CL                          ; 004d0e04
    MOV CL,byte ptr [0x01c35828]        ; 004d0e06 | DAT_01c35828
    SHL EAX,0x10                        ; 004d0e0c
    SHL EBX,CL                          ; 004d0e0f
    MOV [0x0061c8e8],EAX                ; 004d0e11 | DAT_0061c8e8
    SHL EBX,0x8                         ; 004d0e16
    MOV EAX,[0x01c3581c]                ; 004d0e19 | DAT_01c3581c
    MOV dword ptr [0x0061c908],EBX      ; 004d0e1e | DAT_0061c908
    MOV EBX,dword ptr [0x01c35828]      ; 004d0e24 | DAT_01c35828
    MOV ECX,dword ptr [0x01c35834]      ; 004d0e2a | DAT_01c35834
    ADD EAX,EBX                         ; 004d0e30
    MOV dword ptr [0x0061c970],ECX      ; 004d0e32 | DAT_0061c970
    ADD EAX,ECX                         ; 004d0e38
    SHL ESI,CL                          ; 004d0e3a
    MOV [0x0061c930],EAX                ; 004d0e3c | DAT_0061c930
    LEA EAX,[EBX + ECX*0x1]             ; 004d0e41
    MOV dword ptr [0x0061c928],ESI      ; 004d0e44 | DAT_0061c928
    MOV [0x0061c950],EAX                ; 004d0e4a | DAT_0061c950
    CMP dword ptr [0x006141c0],0x20     ; 004d0e4f | DAT_006141c0
        ;   Label: LAB_004d0e4f
    JNZ 0x004d0ead                      ; 004d0e56
        ;   XREF to: 004d0ead (CONDITIONAL_JUMP)  ; LAB_004d0ead
    MOV EDX,dword ptr [0x006141c0]      ; 004d0e58 | DAT_006141c0
    XOR EAX,EAX                         ; 004d0e5e
    XOR EBX,EBX                         ; 004d0e60
    MOVZX EDI,byte ptr [EBX + 0x1c35839] ; 004d0e62 | DAT_01c35839
        ;   Label: LAB_004d0e62
    MOVZX ESI,byte ptr [EBX + 0x1c3583a] ; 004d0e69 | DAT_01c3583a
    MOVZX EBP,byte ptr [EBX + 0x1c35838] ; 004d0e70 | DAT_01c35838
    CMP EDX,0x20                        ; 004d0e77
    JNZ 0x004d0eb5                      ; 004d0e7a
        ;   XREF to: 004d0eb5 (CONDITIONAL_JUMP)  ; LAB_004d0eb5
    MOV CL,byte ptr [0x01c35814]        ; 004d0e7c | DAT_01c35814
    SHL EBP,CL                          ; 004d0e82
    MOV CL,byte ptr [0x01c35820]        ; 004d0e84 | DAT_01c35820
    SHL EDI,CL                          ; 004d0e8a
    MOV CL,byte ptr [0x01c3582c]        ; 004d0e8c | DAT_01c3582c
    SHL ESI,CL                          ; 004d0e92
    OR EDI,EBP                          ; 004d0e94
    MOV ECX,ESI                         ; 004d0e96
    OR ECX,EDI                          ; 004d0e98
    ADD EAX,0x4                         ; 004d0e9a
        ;   Label: LAB_004d0e9a
    ADD EBX,0x3                         ; 004d0e9d
    MOV dword ptr [EAX + 0x1c34b0c],ECX ; 004d0ea0
    CMP EAX,0x400                       ; 004d0ea6
    JNZ 0x004d0e62                      ; 004d0eab
        ;   XREF to: 004d0e62 (CONDITIONAL_JUMP)  ; LAB_004d0e62
    ADD ESP,0x8                         ; 004d0ead
        ;   Label: LAB_004d0ead
    POP EBP                             ; 004d0eb0
    POP EDI                             ; 004d0eb1
    POP ESI                             ; 004d0eb2
    POP EBX                             ; 004d0eb3
    RET                                 ; 004d0eb4
    MOV ECX,EBP                         ; 004d0eb5
        ;   Label: LAB_004d0eb5
    SHL EDI,0x8                         ; 004d0eb7
    SHL ECX,0x10                        ; 004d0eba
    OR ECX,EDI                          ; 004d0ebd
    OR ECX,ESI                          ; 004d0ebf
    JMP 0x004d0e9a                      ; 004d0ec1
        ;   XREF to: 004d0e9a (UNCONDITIONAL_JUMP)  ; LAB_004d0e9a

