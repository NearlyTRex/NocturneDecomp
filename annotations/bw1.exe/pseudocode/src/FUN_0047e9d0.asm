; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047e9d0(uint param_1,uint param_2,int param_3)
;
;
; XREF[2]:
;   FUN_0047f4a0 at 0047f538
;   FUN_0047fe30 at 0047fe96
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01bc11f4
;   undefined4 DAT_01bc1204
;   undefined4 DAT_01bc1208
;   undefined4 DAT_01c4354c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047e9d0
        ;   Label: FUN_0047e9d0
    PUSH ESI                            ; 0047e9d1
    PUSH EDI                            ; 0047e9d2
    MOV EDI,dword ptr [0x01bc1204]      ; 0047e9d3 | DAT_01bc1204
    MOV EDX,dword ptr [ESP + 0x10]      ; 0047e9d9
    MOV ESI,dword ptr [ESP + 0x14]      ; 0047e9dd
    MOV ECX,dword ptr [0x0061b4a0]      ; 0047e9e1 | DAT_0061b4a0
    CMP ECX,0x8                         ; 0047e9e7
    JZ 0x0047ea60                       ; 0047e9ea
        ;   XREF to: 0047ea60 (CONDITIONAL_JUMP)  ; LAB_0047ea60
    MOV EBX,dword ptr [ESP + 0x18]      ; 0047e9f0
    SHL EBX,0x2                         ; 0047e9f4
    CMP ECX,0x10                        ; 0047e9f7
    JNZ 0x0047ea86                      ; 0047e9fa
        ;   XREF to: 0047ea86 (CONDITIONAL_JUMP)  ; LAB_0047ea86
    LEA ECX,[EDX + EDX*0x1]             ; 0047ea00
    MOV EAX,dword ptr [EBX + 0x1c4354c] ; 0047ea03 | DAT_01c4354c
    MOV EBX,EDX                         ; 0047ea09
    ADD EAX,ECX                         ; 0047ea0b
    TEST DL,0x1                         ; 0047ea0d
    JZ 0x0047ea2d                       ; 0047ea10
        ;   XREF to: 0047ea2d (CONDITIONAL_JUMP)  ; LAB_0047ea2d
    XOR EBX,EDX                         ; 0047ea12
    MOV CL,byte ptr [0x01bc11f4]        ; 0047ea14 | DAT_01bc11f4
    MOV BX,word ptr [EAX]               ; 0047ea1a
    SHR EBX,CL                          ; 0047ea1d
    MOV ECX,EBX                         ; 0047ea1f
    ADD EAX,0x2                         ; 0047ea21
    AND ECX,EDI                         ; 0047ea24
    LEA EBX,[EDX + 0x1]                 ; 0047ea26
    MOV word ptr [EAX + -0x2],CX        ; 0047ea29
    CMP EBX,ESI                         ; 0047ea2d
        ;   Label: LAB_0047ea2d
    JGE 0x0047ea50                      ; 0047ea2f
        ;   XREF to: 0047ea50 (CONDITIONAL_JUMP)  ; LAB_0047ea50
    MOV CL,byte ptr [0x01bc11f4]        ; 0047ea31 | DAT_01bc11f4
        ;   Label: LAB_0047ea31
    MOV EDX,dword ptr [EAX]             ; 0047ea37
    SHR EDX,CL                          ; 0047ea39
    MOV ECX,dword ptr [0x01bc1208]      ; 0047ea3b | DAT_01bc1208
    ADD EAX,0x4                         ; 0047ea41
    AND EDX,ECX                         ; 0047ea44
    ADD EBX,0x2                         ; 0047ea46
    MOV dword ptr [EAX + -0x4],EDX      ; 0047ea49
    CMP EBX,ESI                         ; 0047ea4c
    JL 0x0047ea31                       ; 0047ea4e
        ;   XREF to: 0047ea31 (CONDITIONAL_JUMP)  ; LAB_0047ea31
    JZ 0x0047ea6a                       ; 0047ea50
        ;   XREF to: 0047ea6a (CONDITIONAL_JUMP)  ; LAB_0047ea6a
        ;   Label: LAB_0047ea50
    LEA EAX,[EAX]                       ; 0047ea52
    LEA EDX,[EDX]                       ; 0047ea58
    MOV EAX,EAX                         ; 0047ea5e
    MOV dword ptr [0x01bc1204],EDI      ; 0047ea60 | DAT_01bc1204
        ;   Label: LAB_0047ea60
    POP EDI                             ; 0047ea66
    POP ESI                             ; 0047ea67
    POP EBX                             ; 0047ea68
    RET                                 ; 0047ea69
    XOR EDX,EDX                         ; 0047ea6a
        ;   Label: LAB_0047ea6a
    MOV CL,byte ptr [0x01bc11f4]        ; 0047ea6c | DAT_01bc11f4
    MOV DX,word ptr [EAX]               ; 0047ea72
    SHR EDX,CL                          ; 0047ea75
    AND EDX,EDI                         ; 0047ea77
    MOV word ptr [EAX],DX               ; 0047ea79
    MOV dword ptr [0x01bc1204],EDI      ; 0047ea7c | DAT_01bc1204
    POP EDI                             ; 0047ea82
    POP ESI                             ; 0047ea83
    POP EBX                             ; 0047ea84
    RET                                 ; 0047ea85
    CMP ECX,0x20                        ; 0047ea86
        ;   Label: LAB_0047ea86
    JNZ 0x0047ea60                      ; 0047ea89
        ;   XREF to: 0047ea60 (CONDITIONAL_JUMP)  ; LAB_0047ea60
    LEA EAX,[EDX*0x4 + 0x0]             ; 0047ea8b
    MOV ECX,dword ptr [EBX + 0x1c4354c] ; 0047ea92 | DAT_01c4354c
    MOV EBX,EDX                         ; 0047ea98
    ADD EAX,ECX                         ; 0047ea9a
    CMP EDX,ESI                         ; 0047ea9c
    JG 0x0047ea60                       ; 0047ea9e
        ;   XREF to: 0047ea60 (CONDITIONAL_JUMP)  ; LAB_0047ea60
    MOV CL,byte ptr [0x01bc11f4]        ; 0047eaa0 | DAT_01bc11f4
        ;   Label: LAB_0047eaa0
    MOV EDX,dword ptr [EAX]             ; 0047eaa6
    SHR EDX,CL                          ; 0047eaa8
    ADD EAX,0x4                         ; 0047eaaa
    AND EDX,EDI                         ; 0047eaad
    INC EBX                             ; 0047eaaf
    MOV dword ptr [EAX + -0x4],EDX      ; 0047eab0
    CMP EBX,ESI                         ; 0047eab3
    JLE 0x0047eaa0                      ; 0047eab5
        ;   XREF to: 0047eaa0 (CONDITIONAL_JUMP)  ; LAB_0047eaa0
    MOV dword ptr [0x01bc1204],EDI      ; 0047eab7 | DAT_01bc1204
    POP EDI                             ; 0047eabd
    POP ESI                             ; 0047eabe
    POP EBX                             ; 0047eabf
    RET                                 ; 0047eac0

