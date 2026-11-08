; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004efe20(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d76c6c
;   undefined4 DAT_01d76c70
;   undefined4 DAT_01d76c74
;   undefined4 DAT_01d76c78
;   undefined4 DAT_01d76c7c
;   undefined4 DAT_01d76c80
;   undefined4 DAT_01d76c84
;   undefined4 DAT_01d76c88
;   undefined4 DAT_01d76c8c
;   undefined4 DAT_01d76c90
;   undefined4 DAT_01d76c94
;   undefined4 DAT_01d76c98
;   undefined4 DAT_01d76cfc
;   undefined4 DAT_01d76d00
;   undefined4 DAT_01d7f4f8
;   ... and 15 more
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004efe20
        ;   Label: FUN_004efe20
    SUB ESP,0x10                        ; 004efe21
    MOV EDX,dword ptr [0x01d76d00]      ; 004efe24 | DAT_01d76d00
    TEST EDX,EDX                        ; 004efe2a
    JZ 0x004f00d4                       ; 004efe2c
        ;   XREF to: 004f00d4 (CONDITIONAL_JUMP)  ; LAB_004f00d4
    MOV EAX,[0x01d76cfc]                ; 004efe32 | DAT_01d76cfc
    FLD float ptr [EAX + 0x4]           ; 004efe37
    FMUL float ptr [0x01d76c78]         ; 004efe3a | DAT_01d76c78
    FLD float ptr [EAX + 0x4]           ; 004efe40
    FMUL float ptr [0x01d76c7c]         ; 004efe43 | DAT_01d76c7c
    FLD float ptr [EAX + 0x4]           ; 004efe49
    FMUL float ptr [0x01d76c80]         ; 004efe4c | DAT_01d76c80
    FLD float ptr [EAX + 0xc]           ; 004efe52
    FMUL float ptr [0x01d76c6c]         ; 004efe55 | DAT_01d76c6c
    FLD float ptr [EAX]                 ; 004efe5b
    FMUL float ptr [0x01d76c6c]         ; 004efe5d | DAT_01d76c6c
    FLD float ptr [EAX + 0xc]           ; 004efe63
    FXCH                                ; 004efe66
    FADDP ST5,ST0                       ; 004efe68
    FMUL float ptr [0x01d76c70]         ; 004efe6a | DAT_01d76c70
    FLD float ptr [EAX + 0x8]           ; 004efe70
    FMUL float ptr [0x01d76c84]         ; 004efe73 | DAT_01d76c84
    FLD float ptr [EAX]                 ; 004efe79
    FXCH                                ; 004efe7b
    FADDP ST6,ST0                       ; 004efe7d
    FMUL float ptr [0x01d76c70]         ; 004efe7f | DAT_01d76c70
    FXCH ST5                            ; 004efe85
    FSTP float ptr [0x01d7f4f8]         ; 004efe87 | DAT_01d7f4f8
    FLD float ptr [EAX + 0xc]           ; 004efe8d
    FXCH ST5                            ; 004efe90
    FADDP ST4,ST0                       ; 004efe92
    FXCH ST4                            ; 004efe94
    FMUL float ptr [0x01d76c74]         ; 004efe96 | DAT_01d76c74
    FLD float ptr [EAX + 0x8]           ; 004efe9c
    FMUL float ptr [0x01d76c88]         ; 004efe9f | DAT_01d76c88
    FLD float ptr [EAX]                 ; 004efea5
    FXCH                                ; 004efea7
    FADDP ST5,ST0                       ; 004efea9
    FMUL float ptr [0x01d76c74]         ; 004efeab | DAT_01d76c74
    FXCH ST4                            ; 004efeb1
    FSTP float ptr [0x01d7f4fc]         ; 004efeb3 | DAT_01d7f4fc
    FLD float ptr [EAX + 0x18]          ; 004efeb9
    FXCH ST4                            ; 004efebc
    FADDP ST3,ST0                       ; 004efebe
    FXCH ST3                            ; 004efec0
    FMUL float ptr [0x01d76c6c]         ; 004efec2 | DAT_01d76c6c
    FLD float ptr [EAX + 0x8]           ; 004efec8
    FMUL float ptr [0x01d76c8c]         ; 004efecb | DAT_01d76c8c
    FLD float ptr [EAX + 0x10]          ; 004efed1
    FXCH                                ; 004efed4
    FADDP ST4,ST0                       ; 004efed6
    FMUL float ptr [0x01d76c78]         ; 004efed8 | DAT_01d76c78
    FXCH ST3                            ; 004efede
    FSTP float ptr [0x01d7f500]         ; 004efee0 | DAT_01d7f500
    FLD float ptr [EAX + 0x18]          ; 004efee6
    FXCH ST3                            ; 004efee9
    FADDP ST2,ST0                       ; 004efeeb
    FXCH ST2                            ; 004efeed
    FMUL float ptr [0x01d76c70]         ; 004efeef | DAT_01d76c70
    FLD float ptr [EAX + 0x14]          ; 004efef5
    FMUL float ptr [0x01d76c84]         ; 004efef8 | DAT_01d76c84
    FLD float ptr [EAX + 0x10]          ; 004efefe
    FXCH                                ; 004eff01
    FADDP ST3,ST0                       ; 004eff03
    FMUL float ptr [0x01d76c7c]         ; 004eff05 | DAT_01d76c7c
    FXCH ST2                            ; 004eff0b
    FSTP float ptr [0x01d7f508]         ; 004eff0d | DAT_01d7f508
    FLD float ptr [EAX + 0x18]          ; 004eff13
    FMUL float ptr [0x01d76c74]         ; 004eff16 | DAT_01d76c74
    FXCH ST2                            ; 004eff1c
    FADDP ST5,ST0                       ; 004eff1e
    XOR ECX,ECX                         ; 004eff20
    FLD float ptr [EAX + 0x14]          ; 004eff22
    FMUL float ptr [0x01d76c88]         ; 004eff25 | DAT_01d76c88
    FLD float ptr [EAX + 0x10]          ; 004eff2b
    FXCH                                ; 004eff2e
    FADDP ST6,ST0                       ; 004eff30
    FMUL float ptr [0x01d76c80]         ; 004eff32 | DAT_01d76c80
    FXCH ST5                            ; 004eff38
    FSTP float ptr [0x01d7f50c]         ; 004eff3a | DAT_01d7f50c
    FLD float ptr [EAX + 0x28]          ; 004eff40
    FMUL float ptr [EAX + 0xc]          ; 004eff43
    FXCH ST5                            ; 004eff46
    FADDP ST4,ST0                       ; 004eff48
    MOV dword ptr [0x01d7f504],ECX      ; 004eff4a | DAT_01d7f504
    FLD float ptr [EAX + 0x14]          ; 004eff50
    FMUL float ptr [0x01d76c8c]         ; 004eff53 | DAT_01d76c8c
    FLD float ptr [EAX + 0x1c]          ; 004eff59
    FXCH                                ; 004eff5c
    FADDP ST5,ST0                       ; 004eff5e
    FMUL float ptr [0x01d76c78]         ; 004eff60 | DAT_01d76c78
    FXCH ST4                            ; 004eff66
    FSTP float ptr [0x01d7f510]         ; 004eff68 | DAT_01d7f510
    FLD float ptr [EAX + 0x1c]          ; 004eff6e
    FMUL float ptr [0x01d76c7c]         ; 004eff71 | DAT_01d76c7c
    FLD float ptr [EAX + 0x1c]          ; 004eff77
    FXCH ST5                            ; 004eff7a
    FADDP ST4,ST0                       ; 004eff7c
    FXCH ST4                            ; 004eff7e
    FMUL float ptr [0x01d76c80]         ; 004eff80 | DAT_01d76c80
    FLD float ptr [EAX + 0x20]          ; 004eff86
    FMUL float ptr [0x01d76c84]         ; 004eff89 | DAT_01d76c84
    FXCH ST5                            ; 004eff8f
    FADDP ST2,ST0                       ; 004eff91
    FLD float ptr [EAX + 0x24]          ; 004eff93
    FCHS                                ; 004eff96
    FST float ptr [ESP + 0x4]           ; 004eff98
    FMUL float ptr [EAX]                ; 004eff9c
    FXCH                                ; 004eff9e
    FADDP ST3,ST0                       ; 004effa0
    FXCH ST4                            ; 004effa2
    FADDP ST3,ST0                       ; 004effa4
    FLD float ptr [EAX + 0x20]          ; 004effa6
    FMUL float ptr [0x01d76c88]         ; 004effa9 | DAT_01d76c88
    FLD float ptr [EAX + 0x20]          ; 004effaf
    FMUL float ptr [0x01d76c8c]         ; 004effb2 | DAT_01d76c8c
    FXCH ST5                            ; 004effb8
    FSUBRP ST6,ST0                      ; 004effba
    MOV dword ptr [0x01d7f514],ECX      ; 004effbc | DAT_01d7f514
    FLD float ptr [EAX + 0x2c]          ; 004effc2
    FMUL float ptr [EAX + 0x18]         ; 004effc5
    MOV dword ptr [0x01d7f524],ECX      ; 004effc8 | DAT_01d7f524
    FXCH                                ; 004effce
    FADDP ST2,ST0                       ; 004effd0
    FXCH ST4                            ; 004effd2
    FADDP ST2,ST0                       ; 004effd4
    FXCH ST2                            ; 004effd6
    FSTP float ptr [0x01d7f518]         ; 004effd8 | DAT_01d7f518
    FXCH                                ; 004effde
    FSTP float ptr [0x01d7f51c]         ; 004effe0 | DAT_01d7f51c
    FXCH                                ; 004effe6
    FSUBP ST2,ST0                       ; 004effe8
    FSTP float ptr [0x01d7f520]         ; 004effea | DAT_01d7f520
    FSTP float ptr [ESP + 0xc]          ; 004efff0
    PUSH EDI                            ; 004efff4
    FLD float ptr [ESP + 0x10]          ; 004efff5
    FLD ST0                             ; 004efff9
    FMUL float ptr [0x01d76c6c]         ; 004efffb | DAT_01d76c6c
    FLD ST1                             ; 004f0001
    FMUL float ptr [0x01d76c70]         ; 004f0003 | DAT_01d76c70
    FXCH ST2                            ; 004f0009
    FMUL float ptr [0x01d76c74]         ; 004f000b | DAT_01d76c74
    FLD float ptr [ESP + 0x8]           ; 004f0011
    FLD ST0                             ; 004f0015
    FMUL float ptr [EAX + 0x4]          ; 004f0017
    FXCH                                ; 004f001a
    FMUL float ptr [EAX + 0x8]          ; 004f001c
    FLD float ptr [EAX + 0x28]          ; 004f001f
    FMUL float ptr [EAX + 0x10]         ; 004f0022
    FLD float ptr [EAX + 0x28]          ; 004f0025
    FMUL float ptr [EAX + 0x14]         ; 004f0028
    FXCH                                ; 004f002b
    FSUBP ST3,ST0                       ; 004f002d
    FSUBP                               ; 004f002f
    FLD float ptr [EAX + 0x2c]          ; 004f0031
    FMUL float ptr [EAX + 0x1c]         ; 004f0034
    FLD float ptr [EAX + 0x2c]          ; 004f0037
    FMUL float ptr [EAX + 0x20]         ; 004f003a
    FXCH                                ; 004f003d
    FSUBP ST3,ST0                       ; 004f003f
    FXCH ST2                            ; 004f0041
    FST float ptr [ESP + 0xc]           ; 004f0043
    FMUL float ptr [0x01d76c78]         ; 004f0047 | DAT_01d76c78
    FLD float ptr [ESP + 0xc]           ; 004f004d
    FMUL float ptr [0x01d76c7c]         ; 004f0051 | DAT_01d76c7c
    FXCH ST3                            ; 004f0057
    FSUBP ST2,ST0                       ; 004f0059
    FLD float ptr [ESP + 0xc]           ; 004f005b
    FMUL float ptr [0x01d76c80]         ; 004f005f | DAT_01d76c80
    FXCH                                ; 004f0065
    FADDP ST5,ST0                       ; 004f0067
    FXCH ST2                            ; 004f0069
    FADDP ST5,ST0                       ; 004f006b
    FLD ST0                             ; 004f006d
    FMUL float ptr [0x01d76c84]         ; 004f006f | DAT_01d76c84
    FLD ST1                             ; 004f0075
    FMUL float ptr [0x01d76c88]         ; 004f0077 | DAT_01d76c88
    FXCH ST3                            ; 004f007d
    FADDP ST4,ST0                       ; 004f007f
    MOV EDI,0x3f800000                  ; 004f0081
    FXCH                                ; 004f0086
    FMUL float ptr [0x01d76c8c]         ; 004f0088 | DAT_01d76c8c
    MOV dword ptr [0x01d7f534],EDI      ; 004f008e | DAT_01d7f534
    FXCH                                ; 004f0094
    FADDP ST4,ST0                       ; 004f0096
    FXCH                                ; 004f0098
    FADDP ST4,ST0                       ; 004f009a
    FADDP                               ; 004f009c
    FLD float ptr [0x01d76c90]          ; 004f009e | DAT_01d76c90
    FLD float ptr [0x01d76c94]          ; 004f00a4 | DAT_01d76c94
    FLD float ptr [0x01d76c98]          ; 004f00aa | DAT_01d76c98
    FXCH ST2                            ; 004f00b0
    FADDP ST4,ST0                       ; 004f00b2
    FADDP ST4,ST0                       ; 004f00b4
    FADDP                               ; 004f00b6
    FXCH                                ; 004f00b8
    FSTP float ptr [0x01d7f528]         ; 004f00ba | DAT_01d7f528
    FXCH                                ; 004f00c0
    FSTP float ptr [0x01d7f52c]         ; 004f00c2 | DAT_01d7f52c
    FSTP float ptr [0x01d7f530]         ; 004f00c8 | DAT_01d7f530
    POP EDI                             ; 004f00ce
    ADD ESP,0x10                        ; 004f00cf
    POP EBP                             ; 004f00d2
    RET                                 ; 004f00d3
    FLD float ptr [0x01d76c90]          ; 004f00d4 | DAT_01d76c90
        ;   Label: LAB_004f00d4
    FLD float ptr [0x01d76c94]          ; 004f00da | DAT_01d76c94
    FLD float ptr [0x01d76c98]          ; 004f00e0 | DAT_01d76c98
    MOV EBP,0x3f800000                  ; 004f00e6
    MOV EAX,[0x01d76cfc]                ; 004f00eb | DAT_01d76cfc
    MOV dword ptr [0x01d7f4fc],EDX      ; 004f00f0 | DAT_01d7f4fc
    MOV dword ptr [0x01d7f500],EDX      ; 004f00f6 | DAT_01d7f500
    MOV dword ptr [0x01d7f504],EDX      ; 004f00fc | DAT_01d7f504
    MOV dword ptr [0x01d7f508],EDX      ; 004f0102 | DAT_01d7f508
    MOV dword ptr [0x01d7f510],EDX      ; 004f0108 | DAT_01d7f510
    MOV dword ptr [0x01d7f514],EDX      ; 004f010e | DAT_01d7f514
    MOV dword ptr [0x01d7f518],EDX      ; 004f0114 | DAT_01d7f518
    MOV dword ptr [0x01d7f51c],EDX      ; 004f011a | DAT_01d7f51c
    MOV dword ptr [0x01d7f524],EDX      ; 004f0120 | DAT_01d7f524
    MOV dword ptr [0x01d7f4f8],EBP      ; 004f0126 | DAT_01d7f4f8
    MOV dword ptr [0x01d7f50c],EBP      ; 004f012c | DAT_01d7f50c
    MOV dword ptr [0x01d7f520],EBP      ; 004f0132 | DAT_01d7f520
    MOV dword ptr [0x01d7f534],EBP      ; 004f0138 | DAT_01d7f534
    FXCH ST2                            ; 004f013e
    FSUB float ptr [EAX + 0x24]         ; 004f0140
    FXCH                                ; 004f0143
    FSUB float ptr [EAX + 0x28]         ; 004f0145
    FXCH ST2                            ; 004f0148
    FSUB float ptr [EAX + 0x2c]         ; 004f014a
    FXCH                                ; 004f014d
    FSTP float ptr [0x01d7f528]         ; 004f014f | DAT_01d7f528
    FXCH                                ; 004f0155
    FSTP float ptr [0x01d7f52c]         ; 004f0157 | DAT_01d7f52c
    FSTP float ptr [0x01d7f530]         ; 004f015d | DAT_01d7f530
    ADD ESP,0x10                        ; 004f0163
    POP EBP                             ; 004f0166
    RET                                 ; 004f0167

