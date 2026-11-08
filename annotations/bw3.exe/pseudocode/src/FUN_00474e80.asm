; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00474e80(int param_1,int param_2)
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
;   FUN_0053de10 at 0053de63
;
; Referenced Globals:
;   undefined4 DAT_01548b58
;   undefined4 DAT_01548b5c
;   undefined4 DAT_01548b60
;   undefined4 DAT_01548b64
;   undefined4 DAT_01548b68
;   undefined4 DAT_01548b6c
;   undefined4 DAT_01548b70
;   undefined4 DAT_01548b74
;   undefined4 DAT_01548b78
;   undefined4 DAT_02cfd900
;   undefined4 DAT_02cfd904
;   undefined4 DAT_02cfd908
;
; Called Functions:
;   FUN_00454520
;   FUN_00473b60
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00474e80
        ;   Label: FUN_00474e80
    PUSH ESI                            ; 00474e81
    PUSH EDI                            ; 00474e82
    PUSH EBP                            ; 00474e83
    SUB ESP,0x1c                        ; 00474e84
    MOV EBP,dword ptr [ESP + 0x34]      ; 00474e87
    MOV EAX,0x1548b70                   ; 00474e8b
    CMP EAX,0x2cfd900                   ; 00474e90
    JNZ 0x00475025                      ; 00474e95
        ;   XREF to: 00475025 (CONDITIONAL_JUMP)  ; LAB_00475025
    MOV EAX,0x1548b64                   ; 00474e9b
        ;   Label: LAB_00474e9b
    CMP EAX,0x1548b70                   ; 00474ea0
    JZ 0x00474ec9                       ; 00474ea5
        ;   XREF to: 00474ec9 (CONDITIONAL_JUMP)  ; LAB_00474ec9
    FLD float ptr [0x01548b70]          ; 00474ea7 | DAT_01548b70
    FLD float ptr [0x01548b78]          ; 00474ead | DAT_01548b78
    MOV EAX,[0x01548b74]                ; 00474eb3 | DAT_01548b74
    MOV [0x01548b68],EAX                ; 00474eb8 | DAT_01548b68
    FSTP float ptr [0x01548b6c]         ; 00474ebd | DAT_01548b6c
    FSTP float ptr [0x01548b64]         ; 00474ec3 | DAT_01548b64
    MOV EAX,0x1548b58                   ; 00474ec9
        ;   Label: LAB_00474ec9
    CMP EAX,0x1548b64                   ; 00474ece
    JZ 0x00474ef7                       ; 00474ed3
        ;   XREF to: 00474ef7 (CONDITIONAL_JUMP)  ; LAB_00474ef7
    FLD float ptr [0x01548b64]          ; 00474ed5 | DAT_01548b64
    FLD float ptr [0x01548b6c]          ; 00474edb | DAT_01548b6c
    MOV EAX,[0x01548b68]                ; 00474ee1 | DAT_01548b68
    MOV [0x01548b5c],EAX                ; 00474ee6 | DAT_01548b5c
    FSTP float ptr [0x01548b60]         ; 00474eeb | DAT_01548b60
    FSTP float ptr [0x01548b58]         ; 00474ef1 | DAT_01548b58
    FLDZ                                ; 00474ef7
        ;   Label: LAB_00474ef7
    FCOMP float ptr [EBP + 0x18]        ; 00474ef9
    FNSTSW AX                           ; 00474efc
    SAHF                                ; 00474efe
    JNC 0x0047504c                      ; 00474eff
        ;   XREF to: 0047504c (CONDITIONAL_JUMP)  ; LAB_0047504c
    MOV EAX,dword ptr [ESP + 0x30]      ; 00474f05
    FLD float ptr [EBP + 0x10]          ; 00474f09
    FSUB float ptr [EAX + 0x10]         ; 00474f0c
    FSUB float ptr [EBP + 0x20]         ; 00474f0f
    FLD1                                ; 00474f12
    FDIV float ptr [EAX + 0x28]         ; 00474f14
    FLD float ptr [EBP + 0x10]          ; 00474f17
    FADD float ptr [EBP + 0x18]         ; 00474f1a
    FSUB float ptr [EAX + 0x10]         ; 00474f1d
        ;   Label: LAB_00474f1d
    FADD float ptr [EBP + 0x20]         ; 00474f20
    FXCH ST2                            ; 00474f23
    FMUL ST1                            ; 00474f25
    FXCH ST2                            ; 00474f27
    FMULP                               ; 00474f29
    FXCH                                ; 00474f2b
    CALL FUN_005a3120                   ; 00474f2d
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH                                ; 00474f32
    CALL FUN_005a3120                   ; 00474f34
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x8]         ; 00474f39
    FISTP dword ptr [ESP + 0x4]         ; 00474f3d
    MOV EAX,dword ptr [ESP + 0x30]      ; 00474f41
    FLD float ptr [EBP + 0x28]          ; 00474f45
    FSUB float ptr [EAX + 0x14]         ; 00474f48
    FLD1                                ; 00474f4b
    FDIV float ptr [EAX + 0x2c]         ; 00474f4d
    FLD float ptr [EBP + 0x24]          ; 00474f50
    FSUB float ptr [EAX + 0x14]         ; 00474f53
    FXCH ST2                            ; 00474f56
    FMUL ST1                            ; 00474f58
    FXCH ST2                            ; 00474f5a
    FMULP                               ; 00474f5c
    FLDZ                                ; 00474f5e
    FXCH ST2                            ; 00474f60
    CALL FUN_005a3120                   ; 00474f62
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH                                ; 00474f67
    CALL FUN_005a3120                   ; 00474f69
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH                                ; 00474f6e
    FISTP dword ptr [ESP + 0xc]         ; 00474f70
    FISTP dword ptr [ESP + 0x10]        ; 00474f74
    FCOMP float ptr [EBP + 0x1c]        ; 00474f78
    FNSTSW AX                           ; 00474f7b
    SAHF                                ; 00474f7d
    JNC 0x00475069                      ; 00474f7e
        ;   XREF to: 00475069 (CONDITIONAL_JUMP)  ; LAB_00475069
    MOV EAX,dword ptr [ESP + 0x30]      ; 00474f84
    FLD float ptr [EBP + 0x14]          ; 00474f88
    FSUB float ptr [EAX + 0x18]         ; 00474f8b
    FSUB float ptr [EBP + 0x20]         ; 00474f8e
    FLD1                                ; 00474f91
    FDIV float ptr [EAX + 0x30]         ; 00474f93
    FLD float ptr [EBP + 0x14]          ; 00474f96
    FADD float ptr [EBP + 0x1c]         ; 00474f99
    FSUB float ptr [EAX + 0x18]         ; 00474f9c
        ;   Label: LAB_00474f9c
    FADD float ptr [EBP + 0x20]         ; 00474f9f
    FXCH ST2                            ; 00474fa2
    FMUL ST1                            ; 00474fa4
    FXCH ST2                            ; 00474fa6
    FMULP                               ; 00474fa8
    FXCH                                ; 00474faa
    CALL FUN_005a3120                   ; 00474fac
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH                                ; 00474fb1
    CALL FUN_005a3120                   ; 00474fb3
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x18]        ; 00474fb8
    FISTP dword ptr [ESP + 0x14]        ; 00474fbc
    MOV EDX,dword ptr [ESP + 0x8]       ; 00474fc0
    MOV EDI,dword ptr [ESP + 0x4]       ; 00474fc4
    CMP EDI,EDX                         ; 00474fc8
    JG 0x0047501d                       ; 00474fca
        ;   XREF to: 0047501d (CONDITIONAL_JUMP)  ; LAB_0047501d
    MOV EBX,dword ptr [ESP + 0x10]      ; 00474fcc
        ;   Label: LAB_00474fcc
    MOV ESI,dword ptr [ESP + 0xc]       ; 00474fd0
    CMP ESI,EBX                         ; 00474fd4
    JG 0x00475014                       ; 00474fd6
        ;   XREF to: 00475014 (CONDITIONAL_JUMP)  ; LAB_00475014
    MOV EDX,dword ptr [ESP + 0x18]      ; 00474fd8
        ;   Label: LAB_00474fd8
    MOV EBX,dword ptr [ESP + 0x14]      ; 00474fdc
    CMP EBX,EDX                         ; 00474fe0
    JG 0x0047500b                       ; 00474fe2
        ;   XREF to: 0047500b (CONDITIONAL_JUMP)  ; LAB_0047500b
    PUSH EBX                            ; 00474fe4
        ;   Label: LAB_00474fe4
    PUSH ESI                            ; 00474fe5
    PUSH EDI                            ; 00474fe6
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00474fe7
    PUSH EAX                            ; 00474feb
    CALL FUN_00473b60                   ; 00474fec
        ;   XREF to: 00473b60 (UNCONDITIONAL_CALL)  ; undefined FUN_00473b60()
    ADD ESP,0x10                        ; 00474ff1
    TEST EAX,EAX                        ; 00474ff4
    JZ 0x00475002                       ; 00474ff6
        ;   XREF to: 00475002 (CONDITIONAL_JUMP)  ; LAB_00475002
    PUSH EBP                            ; 00474ff8
    PUSH EAX                            ; 00474ff9
    CALL FUN_00454520                   ; 00474ffa
        ;   XREF to: 00454520 (UNCONDITIONAL_CALL)  ; undefined FUN_00454520()
    ADD ESP,0x8                         ; 00474fff
    MOV ECX,dword ptr [ESP + 0x18]      ; 00475002
        ;   Label: LAB_00475002
    INC EBX                             ; 00475006
    CMP EBX,ECX                         ; 00475007
    JLE 0x00474fe4                      ; 00475009
        ;   XREF to: 00474fe4 (CONDITIONAL_JUMP)  ; LAB_00474fe4
    MOV EAX,dword ptr [ESP + 0x10]      ; 0047500b
        ;   Label: LAB_0047500b
    INC ESI                             ; 0047500f
    CMP ESI,EAX                         ; 00475010
    JLE 0x00474fd8                      ; 00475012
        ;   XREF to: 00474fd8 (CONDITIONAL_JUMP)  ; LAB_00474fd8
    MOV ECX,dword ptr [ESP + 0x8]       ; 00475014
        ;   Label: LAB_00475014
    INC EDI                             ; 00475018
    CMP EDI,ECX                         ; 00475019
    JLE 0x00474fcc                      ; 0047501b
        ;   XREF to: 00474fcc (CONDITIONAL_JUMP)  ; LAB_00474fcc
    ADD ESP,0x1c                        ; 0047501d
        ;   Label: LAB_0047501d
    POP EBP                             ; 00475020
    POP EDI                             ; 00475021
    POP ESI                             ; 00475022
    POP EBX                             ; 00475023
    RET                                 ; 00475024
    FLD float ptr [0x02cfd900]          ; 00475025 | DAT_02cfd900
        ;   Label: LAB_00475025
    FLD float ptr [0x02cfd908]          ; 0047502b | DAT_02cfd908
    MOV EAX,[0x02cfd904]                ; 00475031 | DAT_02cfd904
    MOV [0x01548b74],EAX                ; 00475036 | DAT_01548b74
    FSTP float ptr [0x01548b78]         ; 0047503b | DAT_01548b78
    FSTP float ptr [0x01548b70]         ; 00475041 | DAT_01548b70
    JMP 0x00474e9b                      ; 00475047
        ;   XREF to: 00474e9b (UNCONDITIONAL_JUMP)  ; LAB_00474e9b
    FLD float ptr [EBP + 0x10]          ; 0047504c
        ;   Label: LAB_0047504c
    FADD float ptr [EBP + 0x18]         ; 0047504f
    MOV EAX,dword ptr [ESP + 0x30]      ; 00475052
    FSUB float ptr [EAX + 0x10]         ; 00475056
    FSUB float ptr [EBP + 0x20]         ; 00475059
    FLD1                                ; 0047505c
    FDIV float ptr [EAX + 0x28]         ; 0047505e
    FLD float ptr [EBP + 0x10]          ; 00475061
    JMP 0x00474f1d                      ; 00475064
        ;   XREF to: 00474f1d (UNCONDITIONAL_JUMP)  ; LAB_00474f1d
    FLD float ptr [EBP + 0x14]          ; 00475069
        ;   Label: LAB_00475069
    FADD float ptr [EBP + 0x1c]         ; 0047506c
    MOV EAX,dword ptr [ESP + 0x30]      ; 0047506f
    FSUB float ptr [EAX + 0x18]         ; 00475073
    FSUB float ptr [EBP + 0x20]         ; 00475076
    FLD1                                ; 00475079
    FDIV float ptr [EAX + 0x30]         ; 0047507b
    FLD float ptr [EBP + 0x14]          ; 0047507e
    JMP 0x00474f9c                      ; 00475081
        ;   XREF to: 00474f9c (UNCONDITIONAL_JUMP)  ; LAB_00474f9c

