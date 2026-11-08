; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0045ef00(int param_1,int *param_2,int *param_3)
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
;   FUN_00552490 at 0055256f
;
; Referenced Globals:
;   undefined4 DAT_005fe9d8
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_01cc8050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ef00
        ;   Label: FUN_0045ef00
    PUSH ESI                            ; 0045ef01
    PUSH EDI                            ; 0045ef02
    PUSH EBP                            ; 0045ef03
    MOV EBP,ESP                         ; 0045ef04
    SUB ESP,0x44                        ; 0045ef06
    MOV EDX,dword ptr [EBP + 0x14]      ; 0045ef09
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045ef0c
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0045ef0f
    LEA EBX,[EBP + -0x20]               ; 0045ef12
    LEA EDI,[EBP + -0x2c]               ; 0045ef15
    LEA ESI,[EBP + -0x44]               ; 0045ef18
    FILD dword ptr [EAX]                ; 0045ef1b
    FMUL float ptr [0x005fe9d8]         ; 0045ef1d | DAT_005fe9d8
    FSTP float ptr [EBX]                ; 0045ef23
    FILD dword ptr [EAX + 0x4]          ; 0045ef25
    FMUL float ptr [0x005fe9d8]         ; 0045ef28 | DAT_005fe9d8
    FSTP float ptr [EBX + 0x4]          ; 0045ef2e
    FILD dword ptr [EAX + 0x8]          ; 0045ef31
    FMUL float ptr [0x005fe9d8]         ; 0045ef34 | DAT_005fe9d8
    FSTP float ptr [EBX + 0x8]          ; 0045ef3a
    FLD float ptr [EBP + -0x20]         ; 0045ef3d
    FLD float ptr [EBP + -0x1c]         ; 0045ef40
    LEA EAX,[EDX + 0x24]                ; 0045ef43
    FLD float ptr [EBP + -0x18]         ; 0045ef46
    LEA EBX,[EBP + -0x20]               ; 0045ef49
    FXCH ST2                            ; 0045ef4c
    FSUB float ptr [EAX]                ; 0045ef4e
    FXCH                                ; 0045ef50
    FSUB float ptr [EAX + 0x4]          ; 0045ef52
    FXCH ST2                            ; 0045ef55
    FSUB float ptr [EAX + 0x8]          ; 0045ef57
    FXCH                                ; 0045ef5a
    FSTP float ptr [EBP + -0x44]        ; 0045ef5c
    FXCH                                ; 0045ef5f
    FSTP float ptr [EBP + -0x40]        ; 0045ef61
    FSTP float ptr [EBP + -0x3c]        ; 0045ef64
    LEA EAX,[EBP + -0x2c]               ; 0045ef67
    MOVSD ES:EDI,ESI                    ; 0045ef6a
    MOVSD ES:EDI,ESI                    ; 0045ef6b
    MOVSD ES:EDI,ESI                    ; 0045ef6c
    CMP EBX,EAX                         ; 0045ef6d
    JNZ 0x0045f047                      ; 0045ef6f
        ;   XREF to: 0045f047 (CONDITIONAL_JUMP)  ; LAB_0045f047
    FLD float ptr [EBP + -0x1c]         ; 0045ef75
        ;   Label: LAB_0045ef75
    FMUL ST0                            ; 0045ef78
    FLD float ptr [EBP + -0x20]         ; 0045ef7a
    FMUL ST0                            ; 0045ef7d
    FADDP                               ; 0045ef7f
    FLD float ptr [EBP + -0x18]         ; 0045ef81
    FMUL ST0                            ; 0045ef84
    FADDP                               ; 0045ef86
    FST float ptr [EBP + -0x4]          ; 0045ef88
    FCOMP float ptr [EDX + 0x18]        ; 0045ef8b
    FNSTSW AX                           ; 0045ef8e
    SAHF                                ; 0045ef90
    JA 0x0045f05e                       ; 0045ef91
        ;   XREF to: 0045f05e (CONDITIONAL_JUMP)  ; LAB_0045f05e
    FLD float ptr [EDX + 0x18]          ; 0045ef97
    FSUB float ptr [EBP + -0x4]         ; 0045ef9a
    FMUL float ptr [EDX + 0x38]         ; 0045ef9d
    FILD dword ptr [EDX + 0x3c]         ; 0045efa0
    FMULP                               ; 0045efa3
    FSTP float ptr [EBP + -0x10]        ; 0045efa5
    TEST ECX,ECX                        ; 0045efa8
    JZ 0x0045f031                       ; 0045efaa
        ;   XREF to: 0045f031 (CONDITIONAL_JUMP)  ; LAB_0045f031
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045efb0
    MOV EDX,dword ptr [0x01cc8050]      ; 0045efb3 | DAT_01cc8050
    SAR EAX,0x1                         ; 0045efb9
    SUB EDX,EAX                         ; 0045efbb
    MOV dword ptr [EBP + -0xc],EDX      ; 0045efbd
    FLD float ptr [EBP + -0x20]         ; 0045efc0
    FMUL float ptr [EBP + -0xc]         ; 0045efc3
    FLD float ptr [EBP + -0x1c]         ; 0045efc6
    FMUL float ptr [EBP + -0xc]         ; 0045efc9
    FLD float ptr [EBP + -0x18]         ; 0045efcc
    FMUL float ptr [EBP + -0xc]         ; 0045efcf
    LEA EBX,[EBP + -0x38]               ; 0045efd2
    MOV EAX,ECX                         ; 0045efd5
    FXCH ST2                            ; 0045efd7
    FSTP float ptr [EBP + -0x20]        ; 0045efd9
    FSTP float ptr [EBP + -0x1c]        ; 0045efdc
    FSTP float ptr [EBP + -0x18]        ; 0045efdf
    FILD dword ptr [EAX]                ; 0045efe2
    FMUL float ptr [0x005fe9dc]         ; 0045efe4 | DAT_005fe9dc
    FSTP float ptr [EBX]                ; 0045efea
    FILD dword ptr [EAX + 0x4]          ; 0045efec
    FMUL float ptr [0x005fe9dc]         ; 0045efef | DAT_005fe9dc
    FSTP float ptr [EBX + 0x4]          ; 0045eff5
    FILD dword ptr [EAX + 0x8]          ; 0045eff8
    FMUL float ptr [0x005fe9dc]         ; 0045effb | DAT_005fe9dc
    FSTP float ptr [EBX + 0x8]          ; 0045f001
    FLD float ptr [EBP + -0x1c]         ; 0045f004
    FMUL float ptr [EBP + -0x34]        ; 0045f007
    FLD float ptr [EBP + -0x20]         ; 0045f00a
    FMUL float ptr [EBP + -0x38]        ; 0045f00d
    FADDP                               ; 0045f010
    FLD float ptr [EBP + -0x18]         ; 0045f012
    FMUL float ptr [EBP + -0x30]        ; 0045f015
    FADDP                               ; 0045f018
    FST float ptr [EBP + -0x8]          ; 0045f01a
    FLDZ                                ; 0045f01d
    FCOMPP                              ; 0045f01f
    FNSTSW AX                           ; 0045f021
    SAHF                                ; 0045f023
    JC 0x0045f05e                       ; 0045f024
        ;   XREF to: 0045f05e (CONDITIONAL_JUMP)  ; LAB_0045f05e
    FLD float ptr [EBP + -0x8]          ; 0045f026
    FCHS                                ; 0045f029
    FMUL float ptr [EBP + -0x10]        ; 0045f02b
    FSTP float ptr [EBP + -0x10]        ; 0045f02e
    FLD float ptr [EBP + 0xfffffff0]    ; 0045f031
        ;   Label: LAB_0045f031
    FISTP dword ptr [EBP + 0xffffffec]  ; 0045f037
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045f03d
    MOV ESP,EBP                         ; 0045f040
    POP EBP                             ; 0045f042
    POP EDI                             ; 0045f043
    POP ESI                             ; 0045f044
    POP EBX                             ; 0045f045
    RET                                 ; 0045f046
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0045f047
        ;   Label: LAB_0045f047
    MOV dword ptr [EBP + -0x20],EAX     ; 0045f04a
    MOV EAX,dword ptr [EBP + -0x28]     ; 0045f04d
    MOV dword ptr [EBP + -0x1c],EAX     ; 0045f050
    MOV EAX,dword ptr [EBP + -0x24]     ; 0045f053
    MOV dword ptr [EBP + -0x18],EAX     ; 0045f056
    JMP 0x0045ef75                      ; 0045f059
        ;   XREF to: 0045ef75 (UNCONDITIONAL_JUMP)  ; LAB_0045ef75
    XOR EAX,EAX                         ; 0045f05e
        ;   Label: LAB_0045f05e
    MOV ESP,EBP                         ; 0045f060
    POP EBP                             ; 0045f062
    POP EDI                             ; 0045f063
    POP ESI                             ; 0045f064
    POP EBX                             ; 0045f065
    RET                                 ; 0045f066

