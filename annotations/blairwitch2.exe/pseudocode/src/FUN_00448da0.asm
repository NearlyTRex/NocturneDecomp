; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00448da0(int param_1,int *param_2,int *param_3)
;
; Local Variables:
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005311e0 at 005312bf
;
; Referenced Globals:
;   undefined4 DAT_005f5028
;   undefined4 DAT_005f502c
;   undefined4 DAT_01caf5b8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448da0
        ;   Label: FUN_00448da0
    PUSH ESI                            ; 00448da1
    PUSH EDI                            ; 00448da2
    PUSH EBP                            ; 00448da3
    MOV EBP,ESP                         ; 00448da4
    SUB ESP,0x44                        ; 00448da6
    MOV EDX,dword ptr [EBP + 0x14]      ; 00448da9
    MOV EAX,dword ptr [EBP + 0x18]      ; 00448dac
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00448daf
    LEA EBX,[EBP + -0x20]               ; 00448db2
    LEA EDI,[EBP + -0x2c]               ; 00448db5
    LEA ESI,[EBP + -0x44]               ; 00448db8
    FILD dword ptr [EAX]                ; 00448dbb
    FMUL float ptr [0x005f5028]         ; 00448dbd | DAT_005f5028
    FSTP float ptr [EBX]                ; 00448dc3
    FILD dword ptr [EAX + 0x4]          ; 00448dc5
    FMUL float ptr [0x005f5028]         ; 00448dc8 | DAT_005f5028
    FSTP float ptr [EBX + 0x4]          ; 00448dce
    FILD dword ptr [EAX + 0x8]          ; 00448dd1
    FMUL float ptr [0x005f5028]         ; 00448dd4 | DAT_005f5028
    FSTP float ptr [EBX + 0x8]          ; 00448dda
    FLD float ptr [EBP + -0x20]         ; 00448ddd
    FLD float ptr [EBP + -0x1c]         ; 00448de0
    LEA EAX,[EDX + 0x24]                ; 00448de3
    FLD float ptr [EBP + -0x18]         ; 00448de6
    LEA EBX,[EBP + -0x20]               ; 00448de9
    FXCH ST2                            ; 00448dec
    FSUB float ptr [EAX]                ; 00448dee
    FXCH                                ; 00448df0
    FSUB float ptr [EAX + 0x4]          ; 00448df2
    FXCH ST2                            ; 00448df5
    FSUB float ptr [EAX + 0x8]          ; 00448df7
    FXCH                                ; 00448dfa
    FSTP float ptr [EBP + -0x44]        ; 00448dfc
    FXCH                                ; 00448dff
    FSTP float ptr [EBP + -0x40]        ; 00448e01
    FSTP float ptr [EBP + -0x3c]        ; 00448e04
    LEA EAX,[EBP + -0x2c]               ; 00448e07
    MOVSD ES:EDI,ESI                    ; 00448e0a
    MOVSD ES:EDI,ESI                    ; 00448e0b
    MOVSD ES:EDI,ESI                    ; 00448e0c
    CMP EBX,EAX                         ; 00448e0d
    JNZ 0x00448ee7                      ; 00448e0f
        ;   XREF to: 00448ee7 (CONDITIONAL_JUMP)  ; LAB_00448ee7
    FLD float ptr [EBP + -0x1c]         ; 00448e15
        ;   Label: LAB_00448e15
    FMUL ST0                            ; 00448e18
    FLD float ptr [EBP + -0x20]         ; 00448e1a
    FMUL ST0                            ; 00448e1d
    FADDP                               ; 00448e1f
    FLD float ptr [EBP + -0x18]         ; 00448e21
    FMUL ST0                            ; 00448e24
    FADDP                               ; 00448e26
    FST float ptr [EBP + -0x4]          ; 00448e28
    FCOMP float ptr [EDX + 0x18]        ; 00448e2b
    FNSTSW AX                           ; 00448e2e
    SAHF                                ; 00448e30
    JA 0x00448efe                       ; 00448e31
        ;   XREF to: 00448efe (CONDITIONAL_JUMP)  ; LAB_00448efe
    FLD float ptr [EDX + 0x18]          ; 00448e37
    FSUB float ptr [EBP + -0x4]         ; 00448e3a
    FMUL float ptr [EDX + 0x38]         ; 00448e3d
    FILD dword ptr [EDX + 0x3c]         ; 00448e40
    FMULP                               ; 00448e43
    FSTP float ptr [EBP + -0x10]        ; 00448e45
    TEST ECX,ECX                        ; 00448e48
    JZ 0x00448ed1                       ; 00448e4a
        ;   XREF to: 00448ed1 (CONDITIONAL_JUMP)  ; LAB_00448ed1
    MOV EAX,dword ptr [EBP + -0x4]      ; 00448e50
    MOV EDX,dword ptr [0x01caf5b8]      ; 00448e53 | DAT_01caf5b8
    SAR EAX,0x1                         ; 00448e59
    SUB EDX,EAX                         ; 00448e5b
    MOV dword ptr [EBP + -0xc],EDX      ; 00448e5d
    FLD float ptr [EBP + -0x20]         ; 00448e60
    FMUL float ptr [EBP + -0xc]         ; 00448e63
    FLD float ptr [EBP + -0x1c]         ; 00448e66
    FMUL float ptr [EBP + -0xc]         ; 00448e69
    FLD float ptr [EBP + -0x18]         ; 00448e6c
    FMUL float ptr [EBP + -0xc]         ; 00448e6f
    LEA EBX,[EBP + -0x38]               ; 00448e72
    MOV EAX,ECX                         ; 00448e75
    FXCH ST2                            ; 00448e77
    FSTP float ptr [EBP + -0x20]        ; 00448e79
    FSTP float ptr [EBP + -0x1c]        ; 00448e7c
    FSTP float ptr [EBP + -0x18]        ; 00448e7f
    FILD dword ptr [EAX]                ; 00448e82
    FMUL float ptr [0x005f502c]         ; 00448e84 | DAT_005f502c
    FSTP float ptr [EBX]                ; 00448e8a
    FILD dword ptr [EAX + 0x4]          ; 00448e8c
    FMUL float ptr [0x005f502c]         ; 00448e8f | DAT_005f502c
    FSTP float ptr [EBX + 0x4]          ; 00448e95
    FILD dword ptr [EAX + 0x8]          ; 00448e98
    FMUL float ptr [0x005f502c]         ; 00448e9b | DAT_005f502c
    FSTP float ptr [EBX + 0x8]          ; 00448ea1
    FLD float ptr [EBP + -0x1c]         ; 00448ea4
    FMUL float ptr [EBP + -0x34]        ; 00448ea7
    FLD float ptr [EBP + -0x20]         ; 00448eaa
    FMUL float ptr [EBP + -0x38]        ; 00448ead
    FADDP                               ; 00448eb0
    FLD float ptr [EBP + -0x18]         ; 00448eb2
    FMUL float ptr [EBP + -0x30]        ; 00448eb5
    FADDP                               ; 00448eb8
    FST float ptr [EBP + -0x8]          ; 00448eba
    FLDZ                                ; 00448ebd
    FCOMPP                              ; 00448ebf
    FNSTSW AX                           ; 00448ec1
    SAHF                                ; 00448ec3
    JC 0x00448efe                       ; 00448ec4
        ;   XREF to: 00448efe (CONDITIONAL_JUMP)  ; LAB_00448efe
    FLD float ptr [EBP + -0x8]          ; 00448ec6
    FCHS                                ; 00448ec9
    FMUL float ptr [EBP + -0x10]        ; 00448ecb
    FSTP float ptr [EBP + -0x10]        ; 00448ece
    FLD float ptr [EBP + 0xfffffff0]    ; 00448ed1
        ;   Label: LAB_00448ed1
    FISTP dword ptr [EBP + 0xffffffec]  ; 00448ed7
    MOV EAX,dword ptr [EBP + -0x14]     ; 00448edd
    MOV ESP,EBP                         ; 00448ee0
    POP EBP                             ; 00448ee2
    POP EDI                             ; 00448ee3
    POP ESI                             ; 00448ee4
    POP EBX                             ; 00448ee5
    RET                                 ; 00448ee6
    MOV EAX,dword ptr [EBP + -0x2c]     ; 00448ee7
        ;   Label: LAB_00448ee7
    MOV dword ptr [EBP + -0x20],EAX     ; 00448eea
    MOV EAX,dword ptr [EBP + -0x28]     ; 00448eed
    MOV dword ptr [EBP + -0x1c],EAX     ; 00448ef0
    MOV EAX,dword ptr [EBP + -0x24]     ; 00448ef3
    MOV dword ptr [EBP + -0x18],EAX     ; 00448ef6
    JMP 0x00448e15                      ; 00448ef9
        ;   XREF to: 00448e15 (UNCONDITIONAL_JUMP)  ; LAB_00448e15
    XOR EAX,EAX                         ; 00448efe
        ;   Label: LAB_00448efe
    MOV ESP,EBP                         ; 00448f00
    POP EBP                             ; 00448f02
    POP EDI                             ; 00448f03
    POP ESI                             ; 00448f04
    POP EBX                             ; 00448f05
    RET                                 ; 00448f06

