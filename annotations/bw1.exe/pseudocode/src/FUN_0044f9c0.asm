; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0044f9c0(undefined4 param_1,int *param_2,int param_3,int *param_4)
;
; Local Variables:
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
;   FUN_00552490 at 005524f2
;
; Referenced Globals:
;   undefined4 DAT_005fe600
;   undefined4 DAT_005fe604
;   undefined4 DAT_01cc8050
;
; Called Functions:
;   FUN_0044f360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044f9c0
        ;   Label: FUN_0044f9c0
    PUSH ESI                            ; 0044f9c1
    PUSH EDI                            ; 0044f9c2
    PUSH EBP                            ; 0044f9c3
    SUB ESP,0x38                        ; 0044f9c4
    MOV EBP,dword ptr [ESP + 0x50]      ; 0044f9c7
    MOV ECX,dword ptr [ESP + 0x58]      ; 0044f9cb
    TEST ECX,ECX                        ; 0044f9cf
    JNZ 0x0044f9f4                      ; 0044f9d1
        ;   XREF to: 0044f9f4 (CONDITIONAL_JUMP)  ; LAB_0044f9f4
    MOV EAX,0xaaaa                      ; 0044f9d3
    PUSH EAX                            ; 0044f9d8
        ;   Label: LAB_0044f9d8
    MOV EDX,dword ptr [ESP + 0x58]      ; 0044f9d9
    PUSH EDX                            ; 0044f9dd
    PUSH EBP                            ; 0044f9de
    MOV ECX,dword ptr [ESP + 0x58]      ; 0044f9df
    PUSH ECX                            ; 0044f9e3
    CALL FUN_0044f360                   ; 0044f9e4
        ;   XREF to: 0044f360 (UNCONDITIONAL_CALL)  ; undefined FUN_0044f360()
    ADD ESP,0x10                        ; 0044f9e9
    ADD ESP,0x38                        ; 0044f9ec
    POP EBP                             ; 0044f9ef
    POP EDI                             ; 0044f9f0
    POP ESI                             ; 0044f9f1
    POP EBX                             ; 0044f9f2
    RET                                 ; 0044f9f3
    MOV EBX,ESP                         ; 0044f9f4
        ;   Label: LAB_0044f9f4
    LEA EDI,[ESP + 0xc]                 ; 0044f9f6
    MOV EAX,EBP                         ; 0044f9fa
    LEA ESI,[ESP + 0x24]                ; 0044f9fc
    FILD dword ptr [EAX]                ; 0044fa00
    FMUL float ptr [0x005fe604]         ; 0044fa02 | DAT_005fe604
    FSTP float ptr [EBX]                ; 0044fa08
    FILD dword ptr [EAX + 0x4]          ; 0044fa0a
    FMUL float ptr [0x005fe604]         ; 0044fa0d | DAT_005fe604
    FSTP float ptr [EBX + 0x4]          ; 0044fa13
    FILD dword ptr [EAX + 0x8]          ; 0044fa16
    FMUL float ptr [0x005fe604]         ; 0044fa19 | DAT_005fe604
    FSTP float ptr [EBX + 0x8]          ; 0044fa1f
    FLD float ptr [ESP]                 ; 0044fa22
    FLD float ptr [ESP + 0x4]           ; 0044fa25
    MOV EAX,dword ptr [ESP + 0x54]      ; 0044fa29
    FLD float ptr [ESP + 0x8]           ; 0044fa2d
    FXCH ST2                            ; 0044fa31
    FSUB float ptr [EAX + 0x4]          ; 0044fa33
    FXCH                                ; 0044fa36
    FSUB float ptr [EAX + 0x8]          ; 0044fa38
    FXCH ST2                            ; 0044fa3b
    FSUB float ptr [EAX + 0xc]          ; 0044fa3d
    FXCH                                ; 0044fa40
    FSTP float ptr [ESP + 0x24]         ; 0044fa42
    FXCH                                ; 0044fa46
    FSTP float ptr [ESP + 0x28]         ; 0044fa48
    FSTP float ptr [ESP + 0x2c]         ; 0044fa4c
    MOVSD ES:EDI,ESI                    ; 0044fa50
    MOVSD ES:EDI,ESI                    ; 0044fa51
    MOVSD ES:EDI,ESI                    ; 0044fa52
    FLD float ptr [ESP + 0x10]          ; 0044fa53
    FMUL ST0                            ; 0044fa57
    FLD float ptr [ESP + 0xc]           ; 0044fa59
    FMUL ST0                            ; 0044fa5d
    FADDP                               ; 0044fa5f
    FLD float ptr [ESP + 0x14]          ; 0044fa61
    FMUL ST0                            ; 0044fa65
    FADDP                               ; 0044fa67
    FSTP float ptr [ESP + 0x30]         ; 0044fa69
    MOV EAX,dword ptr [ESP + 0x30]      ; 0044fa6d
    MOV EDX,dword ptr [0x01cc8050]      ; 0044fa71 | DAT_01cc8050
    SAR EAX,0x1                         ; 0044fa77
    SUB EDX,EAX                         ; 0044fa79
    MOV dword ptr [ESP + 0x34],EDX      ; 0044fa7b
    FLD float ptr [ESP + 0xc]           ; 0044fa7f
    FMUL float ptr [ESP + 0x34]         ; 0044fa83
    FLD float ptr [ESP + 0x10]          ; 0044fa87
    FMUL float ptr [ESP + 0x34]         ; 0044fa8b
    FLD float ptr [ESP + 0x14]          ; 0044fa8f
    FMUL float ptr [ESP + 0x34]         ; 0044fa93
    LEA EBX,[ESP + 0x18]                ; 0044fa97
    LEA EAX,[ESP + 0xc]                 ; 0044fa9b
    FXCH ST2                            ; 0044fa9f
    FSTP float ptr [ESP + 0xc]          ; 0044faa1
    FSTP float ptr [ESP + 0x10]         ; 0044faa5
    FSTP float ptr [ESP + 0x14]         ; 0044faa9
    FLD float ptr [EAX]                 ; 0044faad
    FMUL float ptr [0x005fe600]         ; 0044faaf | DAT_005fe600
    FISTP dword ptr [EBX]               ; 0044fab5
    FLD float ptr [EAX + 0x4]           ; 0044fab7
    FMUL float ptr [0x005fe600]         ; 0044faba | DAT_005fe600
    FISTP dword ptr [EBX + 0x4]         ; 0044fac0
    FLD float ptr [EAX + 0x8]           ; 0044fac3
    FMUL float ptr [0x005fe600]         ; 0044fac6 | DAT_005fe600
    FISTP dword ptr [EBX + 0x8]         ; 0044facc
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044facf
    MOV EDX,dword ptr [ECX]             ; 0044fad3
    IMUL EDX                            ; 0044fad5
    SHRD EAX,EDX,0x10                   ; 0044fad7
    MOV EBX,EAX                         ; 0044fadb
    MOV EDX,dword ptr [ECX + 0x4]       ; 0044fadd
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0044fae0
    IMUL EDX                            ; 0044fae4
    SHRD EAX,EDX,0x10                   ; 0044fae6
    MOV EDX,dword ptr [ECX + 0x8]       ; 0044faea
    ADD EBX,EAX                         ; 0044faed
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044faef
    IMUL EDX                            ; 0044faf3
    SHRD EAX,EDX,0x10                   ; 0044faf5
    ADD EAX,EBX                         ; 0044faf9
    TEST EAX,EAX                        ; 0044fafb
    JL 0x0044fb09                       ; 0044fafd
        ;   XREF to: 0044fb09 (CONDITIONAL_JUMP)  ; LAB_0044fb09
    XOR EAX,EAX                         ; 0044faff
    ADD ESP,0x38                        ; 0044fb01
    POP EBP                             ; 0044fb04
    POP EDI                             ; 0044fb05
    POP ESI                             ; 0044fb06
    POP EBX                             ; 0044fb07
    RET                                 ; 0044fb08
    NEG EAX                             ; 0044fb09
        ;   Label: LAB_0044fb09
    JMP 0x0044f9d8                      ; 0044fb0b
        ;   XREF to: 0044f9d8 (UNCONDITIONAL_JUMP)  ; LAB_0044f9d8

