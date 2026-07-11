; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00468af0(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00510a40 at 00510a96
;
; Referenced Globals:
;   undefined4 DAT_014b89e8
;   undefined4 DAT_014b89ec
;   undefined4 DAT_014b89f0
;   undefined4 DAT_014b89f4
;   undefined4 DAT_014b89f8
;   undefined4 DAT_014b89fc
;   undefined4 DAT_014b8a00
;   undefined4 DAT_014b8a04
;   undefined4 DAT_014b8a08
;   undefined4 DAT_02dd1184
;   undefined4 DAT_02dd1188
;   undefined4 DAT_02dd118c
;
; Called Functions:
;   FUN_0044b430
;   FUN_004678d0
;   FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468af0
        ;   Label: FUN_00468af0
    PUSH ESI                            ; 00468af1
    PUSH EDI                            ; 00468af2
    PUSH EBP                            ; 00468af3
    SUB ESP,0x1c                        ; 00468af4
    MOV EBP,dword ptr [ESP + 0x34]      ; 00468af7
    MOV EAX,0x14b8a00                   ; 00468afb
    CMP EAX,0x2dd1184                   ; 00468b00
    JNZ 0x00468c95                      ; 00468b05
        ;   XREF to: 00468c95 (CONDITIONAL_JUMP)  ; LAB_00468c95
    MOV EAX,0x14b89f4                   ; 00468b0b
        ;   Label: LAB_00468b0b
    CMP EAX,0x14b8a00                   ; 00468b10
    JZ 0x00468b39                       ; 00468b15
        ;   XREF to: 00468b39 (CONDITIONAL_JUMP)  ; LAB_00468b39
    FLD float ptr [0x014b8a00]          ; 00468b17 | DAT_014b8a00
    FLD float ptr [0x014b8a08]          ; 00468b1d | DAT_014b8a08
    MOV EAX,[0x014b8a04]                ; 00468b23 | DAT_014b8a04
    MOV [0x014b89f8],EAX                ; 00468b28 | DAT_014b89f8
    FSTP float ptr [0x014b89fc]         ; 00468b2d | DAT_014b89fc
    FSTP float ptr [0x014b89f4]         ; 00468b33 | DAT_014b89f4
    MOV EAX,0x14b89e8                   ; 00468b39
        ;   Label: LAB_00468b39
    CMP EAX,0x14b89f4                   ; 00468b3e
    JZ 0x00468b67                       ; 00468b43
        ;   XREF to: 00468b67 (CONDITIONAL_JUMP)  ; LAB_00468b67
    FLD float ptr [0x014b89f4]          ; 00468b45 | DAT_014b89f4
    FLD float ptr [0x014b89fc]          ; 00468b4b | DAT_014b89fc
    MOV EAX,[0x014b89f8]                ; 00468b51 | DAT_014b89f8
    MOV [0x014b89ec],EAX                ; 00468b56 | DAT_014b89ec
    FSTP float ptr [0x014b89f0]         ; 00468b5b | DAT_014b89f0
    FSTP float ptr [0x014b89e8]         ; 00468b61 | DAT_014b89e8
    FLDZ                                ; 00468b67
        ;   Label: LAB_00468b67
    FCOMP float ptr [EBP + 0x18]        ; 00468b69
    FNSTSW AX                           ; 00468b6c
    SAHF                                ; 00468b6e
    JNC 0x00468cbc                      ; 00468b6f
        ;   XREF to: 00468cbc (CONDITIONAL_JUMP)  ; LAB_00468cbc
    MOV EAX,dword ptr [ESP + 0x30]      ; 00468b75
    FLD float ptr [EBP + 0x10]          ; 00468b79
    FSUB float ptr [EAX + 0x10]         ; 00468b7c
    FSUB float ptr [EBP + 0x20]         ; 00468b7f
    FLD1                                ; 00468b82
    FDIV float ptr [EAX + 0x28]         ; 00468b84
    FLD float ptr [EBP + 0x10]          ; 00468b87
    FADD float ptr [EBP + 0x18]         ; 00468b8a
    FSUB float ptr [EAX + 0x10]         ; 00468b8d
        ;   Label: LAB_00468b8d
    FADD float ptr [EBP + 0x20]         ; 00468b90
    FXCH ST2                            ; 00468b93
    FMUL ST1                            ; 00468b95
    FXCH ST2                            ; 00468b97
    FMULP                               ; 00468b99
    FXCH                                ; 00468b9b
    CALL FUN_00563a30                   ; 00468b9d
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FXCH                                ; 00468ba2
    CALL FUN_00563a30                   ; 00468ba4
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP + 0x8]         ; 00468ba9
    FISTP dword ptr [ESP + 0x4]         ; 00468bad
    MOV EAX,dword ptr [ESP + 0x30]      ; 00468bb1
    FLD float ptr [EBP + 0x28]          ; 00468bb5
    FSUB float ptr [EAX + 0x14]         ; 00468bb8
    FLD1                                ; 00468bbb
    FDIV float ptr [EAX + 0x2c]         ; 00468bbd
    FLD float ptr [EBP + 0x24]          ; 00468bc0
    FSUB float ptr [EAX + 0x14]         ; 00468bc3
    FXCH ST2                            ; 00468bc6
    FMUL ST1                            ; 00468bc8
    FXCH ST2                            ; 00468bca
    FMULP                               ; 00468bcc
    FLDZ                                ; 00468bce
    FXCH ST2                            ; 00468bd0
    CALL FUN_00563a30                   ; 00468bd2
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FXCH                                ; 00468bd7
    CALL FUN_00563a30                   ; 00468bd9
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FXCH                                ; 00468bde
    FISTP dword ptr [ESP + 0xc]         ; 00468be0
    FISTP dword ptr [ESP + 0x10]        ; 00468be4
    FCOMP float ptr [EBP + 0x1c]        ; 00468be8
    FNSTSW AX                           ; 00468beb
    SAHF                                ; 00468bed
    JNC 0x00468cd9                      ; 00468bee
        ;   XREF to: 00468cd9 (CONDITIONAL_JUMP)  ; LAB_00468cd9
    MOV EAX,dword ptr [ESP + 0x30]      ; 00468bf4
    FLD float ptr [EBP + 0x14]          ; 00468bf8
    FSUB float ptr [EAX + 0x18]         ; 00468bfb
    FSUB float ptr [EBP + 0x20]         ; 00468bfe
    FLD1                                ; 00468c01
    FDIV float ptr [EAX + 0x30]         ; 00468c03
    FLD float ptr [EBP + 0x14]          ; 00468c06
    FADD float ptr [EBP + 0x1c]         ; 00468c09
    FSUB float ptr [EAX + 0x18]         ; 00468c0c
        ;   Label: LAB_00468c0c
    FADD float ptr [EBP + 0x20]         ; 00468c0f
    FXCH ST2                            ; 00468c12
    FMUL ST1                            ; 00468c14
    FXCH ST2                            ; 00468c16
    FMULP                               ; 00468c18
    FXCH                                ; 00468c1a
    CALL FUN_00563a30                   ; 00468c1c
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FXCH                                ; 00468c21
    CALL FUN_00563a30                   ; 00468c23
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP + 0x18]        ; 00468c28
    FISTP dword ptr [ESP + 0x14]        ; 00468c2c
    MOV EDX,dword ptr [ESP + 0x8]       ; 00468c30
    MOV EDI,dword ptr [ESP + 0x4]       ; 00468c34
    CMP EDI,EDX                         ; 00468c38
    JG 0x00468c8d                       ; 00468c3a
        ;   XREF to: 00468c8d (CONDITIONAL_JUMP)  ; LAB_00468c8d
    MOV EBX,dword ptr [ESP + 0x10]      ; 00468c3c
        ;   Label: LAB_00468c3c
    MOV ESI,dword ptr [ESP + 0xc]       ; 00468c40
    CMP ESI,EBX                         ; 00468c44
    JG 0x00468c84                       ; 00468c46
        ;   XREF to: 00468c84 (CONDITIONAL_JUMP)  ; LAB_00468c84
    MOV EDX,dword ptr [ESP + 0x18]      ; 00468c48
        ;   Label: LAB_00468c48
    MOV EBX,dword ptr [ESP + 0x14]      ; 00468c4c
    CMP EBX,EDX                         ; 00468c50
    JG 0x00468c7b                       ; 00468c52
        ;   XREF to: 00468c7b (CONDITIONAL_JUMP)  ; LAB_00468c7b
    PUSH EBX                            ; 00468c54
        ;   Label: LAB_00468c54
    PUSH ESI                            ; 00468c55
    PUSH EDI                            ; 00468c56
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00468c57
    PUSH EAX                            ; 00468c5b
    CALL FUN_004678d0                   ; 00468c5c
        ;   XREF to: 004678d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004678d0()
    ADD ESP,0x10                        ; 00468c61
    TEST EAX,EAX                        ; 00468c64
    JZ 0x00468c72                       ; 00468c66
        ;   XREF to: 00468c72 (CONDITIONAL_JUMP)  ; LAB_00468c72
    PUSH EBP                            ; 00468c68
    PUSH EAX                            ; 00468c69
    CALL FUN_0044b430                   ; 00468c6a
        ;   XREF to: 0044b430 (UNCONDITIONAL_CALL)  ; undefined FUN_0044b430()
    ADD ESP,0x8                         ; 00468c6f
    MOV ECX,dword ptr [ESP + 0x18]      ; 00468c72
        ;   Label: LAB_00468c72
    INC EBX                             ; 00468c76
    CMP EBX,ECX                         ; 00468c77
    JLE 0x00468c54                      ; 00468c79
        ;   XREF to: 00468c54 (CONDITIONAL_JUMP)  ; LAB_00468c54
    MOV EAX,dword ptr [ESP + 0x10]      ; 00468c7b
        ;   Label: LAB_00468c7b
    INC ESI                             ; 00468c7f
    CMP ESI,EAX                         ; 00468c80
    JLE 0x00468c48                      ; 00468c82
        ;   XREF to: 00468c48 (CONDITIONAL_JUMP)  ; LAB_00468c48
    MOV ECX,dword ptr [ESP + 0x8]       ; 00468c84
        ;   Label: LAB_00468c84
    INC EDI                             ; 00468c88
    CMP EDI,ECX                         ; 00468c89
    JLE 0x00468c3c                      ; 00468c8b
        ;   XREF to: 00468c3c (CONDITIONAL_JUMP)  ; LAB_00468c3c
    ADD ESP,0x1c                        ; 00468c8d
        ;   Label: LAB_00468c8d
    POP EBP                             ; 00468c90
    POP EDI                             ; 00468c91
    POP ESI                             ; 00468c92
    POP EBX                             ; 00468c93
    RET                                 ; 00468c94
    FLD float ptr [0x02dd1184]          ; 00468c95 | DAT_02dd1184
        ;   Label: LAB_00468c95
    FLD float ptr [0x02dd118c]          ; 00468c9b | DAT_02dd118c
    MOV EAX,[0x02dd1188]                ; 00468ca1 | DAT_02dd1188
    MOV [0x014b8a04],EAX                ; 00468ca6 | DAT_014b8a04
    FSTP float ptr [0x014b8a08]         ; 00468cab | DAT_014b8a08
    FSTP float ptr [0x014b8a00]         ; 00468cb1 | DAT_014b8a00
    JMP 0x00468b0b                      ; 00468cb7
        ;   XREF to: 00468b0b (UNCONDITIONAL_JUMP)  ; LAB_00468b0b
    FLD float ptr [EBP + 0x10]          ; 00468cbc
        ;   Label: LAB_00468cbc
    FADD float ptr [EBP + 0x18]         ; 00468cbf
    MOV EAX,dword ptr [ESP + 0x30]      ; 00468cc2
    FSUB float ptr [EAX + 0x10]         ; 00468cc6
    FSUB float ptr [EBP + 0x20]         ; 00468cc9
    FLD1                                ; 00468ccc
    FDIV float ptr [EAX + 0x28]         ; 00468cce
    FLD float ptr [EBP + 0x10]          ; 00468cd1
    JMP 0x00468b8d                      ; 00468cd4
        ;   XREF to: 00468b8d (UNCONDITIONAL_JUMP)  ; LAB_00468b8d
    FLD float ptr [EBP + 0x14]          ; 00468cd9
        ;   Label: LAB_00468cd9
    FADD float ptr [EBP + 0x1c]         ; 00468cdc
    MOV EAX,dword ptr [ESP + 0x30]      ; 00468cdf
    FSUB float ptr [EAX + 0x18]         ; 00468ce3
    FSUB float ptr [EBP + 0x20]         ; 00468ce6
    FLD1                                ; 00468ce9
    FDIV float ptr [EAX + 0x30]         ; 00468ceb
    FLD float ptr [EBP + 0x14]          ; 00468cee
    JMP 0x00468c0c                      ; 00468cf1
        ;   XREF to: 00468c0c (UNCONDITIONAL_JUMP)  ; LAB_00468c0c

