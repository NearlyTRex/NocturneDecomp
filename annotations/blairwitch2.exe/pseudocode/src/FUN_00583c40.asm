; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00583c40(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005edc77
;   undefined4 DAT_005edc7f
;
; Called Functions:
;   FUN_00408a80
;   FUN_00438af0
;   FUN_0044fd00
;   FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00583c40
        ;   Label: FUN_00583c40
    PUSH ESI                            ; 00583c41
    PUSH EDI                            ; 00583c42
    PUSH EBP                            ; 00583c43
    SUB ESP,0x30                        ; 00583c44
    MOV EBX,dword ptr [ESP + 0x44]      ; 00583c47
    PUSH EBX                            ; 00583c4b
    CALL FUN_00408a80                   ; 00583c4c
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a80()
    ADD ESP,0x4                         ; 00583c51
    LEA EAX,[EBX + 0x2b4]               ; 00583c54
    PUSH EAX                            ; 00583c5a
    XOR EDI,EDI                         ; 00583c5b
    CALL FUN_0044fd00                   ; 00583c5d
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    MOV EDX,dword ptr [EBX + 0xa94]     ; 00583c62
    ADD ESP,0x4                         ; 00583c68
    TEST EDX,EDX                        ; 00583c6b
    JLE 0x00583c90                      ; 00583c6d
        ;   XREF to: 00583c90 (CONDITIONAL_JUMP)  ; LAB_00583c90
    LEA ESI,[EBX + 0xaac]               ; 00583c6f
    PUSH ESI                            ; 00583c75
        ;   Label: LAB_00583c75
    CALL FUN_0044fd00                   ; 00583c76
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd00()
    INC EDI                             ; 00583c7b
    ADD ESP,0x4                         ; 00583c7c
    MOV ECX,dword ptr [EBX + 0xa94]     ; 00583c7f
    ADD ESI,0x1b4                       ; 00583c85
    CMP EDI,ECX                         ; 00583c8b
    JL 0x00583c75                       ; 00583c8d
        ;   XREF to: 00583c75 (CONDITIONAL_JUMP)  ; LAB_00583c75
    NOP                                 ; 00583c8f
    LEA EAX,[EBX + 0x2b4]               ; 00583c90
        ;   Label: LAB_00583c90
    PUSH EAX                            ; 00583c96
    LEA EDI,[ESP + 0x4]                 ; 00583c97
    CALL FUN_0044fd20                   ; 00583c9b
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    MOV ECX,0x6                         ; 00583ca0
    MOV ESI,dword ptr [EAX + 0x350]     ; 00583ca5
    ADD ESP,0x4                         ; 00583cab
    LEA EDX,[EBX + 0xa88]               ; 00583cae
    MOVSD.REP ES:EDI,ESI                ; 00583cb4
    LEA EAX,[ESP + 0x24]                ; 00583cb6
    FLD float ptr [ESP + 0xc]           ; 00583cba
    FLD float ptr [ESP + 0x10]          ; 00583cbe
    FLD float ptr [ESP + 0x14]          ; 00583cc2
    LEA EDI,[ESP + 0x24]                ; 00583cc6
    LEA ESI,[ESP + 0x18]                ; 00583cca
    FXCH ST2                            ; 00583cce
    FSUB float ptr [ESP]                ; 00583cd0
    FXCH                                ; 00583cd3
    FSUB float ptr [ESP + 0x4]          ; 00583cd5
    FXCH ST2                            ; 00583cd9
    FSUB float ptr [ESP + 0x8]          ; 00583cdb
    FXCH                                ; 00583cdf
    FSTP float ptr [ESP + 0x18]         ; 00583ce1
    FXCH                                ; 00583ce5
    FSTP float ptr [ESP + 0x1c]         ; 00583ce7
    FSTP float ptr [ESP + 0x20]         ; 00583ceb
    MOVSD ES:EDI,ESI                    ; 00583cef
    MOVSD ES:EDI,ESI                    ; 00583cf0
    MOVSD ES:EDI,ESI                    ; 00583cf1
    CMP EDX,EAX                         ; 00583cf2
    JZ 0x00583d0a                       ; 00583cf4
        ;   XREF to: 00583d0a (CONDITIONAL_JUMP)  ; LAB_00583d0a
    MOV EAX,dword ptr [ESP + 0x24]      ; 00583cf6
    MOV dword ptr [EDX],EAX             ; 00583cfa
    MOV EAX,dword ptr [ESP + 0x28]      ; 00583cfc
    MOV dword ptr [EDX + 0x4],EAX       ; 00583d00
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00583d03
    MOV dword ptr [EDX + 0x8],EAX       ; 00583d07
    FLD float ptr [EBX + 0xa74]         ; 00583d0a
        ;   Label: LAB_00583d0a
    FMUL double ptr [0x005edc77]        ; 00583d10 | DAT_005edc77
    FLD float ptr [EBX + 0xa8c]         ; 00583d16
    FMUL ST0                            ; 00583d1c
    FLD float ptr [EBX + 0xa88]         ; 00583d1e
    FMUL ST0                            ; 00583d24
    FLD float ptr [EBX + 0xa88]         ; 00583d26
    FMUL ST0                            ; 00583d2c
    FLD float ptr [EBX + 0xa90]         ; 00583d2e
    FMUL ST0                            ; 00583d34
    FLD float ptr [EBX + 0xa90]         ; 00583d36
    FMUL ST0                            ; 00583d3c
    FLD float ptr [EBX + 0xa8c]         ; 00583d3e
    FMUL ST0                            ; 00583d44
    FXCH ST2                            ; 00583d46
    FADDP ST5,ST0                       ; 00583d48
    FXCH ST5                            ; 00583d4a
    FST float ptr [EBX + 0xa78]         ; 00583d4c
    FLD double ptr [0x005edc7f]         ; 00583d52 | DAT_005edc7f
    FXCH                                ; 00583d58
    FMUL ST1                            ; 00583d5a
    FXCH ST6                            ; 00583d5c
    FADDP ST4,ST0                       ; 00583d5e
    FXCH                                ; 00583d60
    FADDP ST2,ST0                       ; 00583d62
    FLD float ptr [EBX + 0xa78]         ; 00583d64
    FMUL ST1                            ; 00583d6a
    FLD float ptr [EBX + 0xa78]         ; 00583d6c
    FMULP ST2                           ; 00583d72
    FXCH ST5                            ; 00583d74
    FMULP ST4                           ; 00583d76
    FXCH ST4                            ; 00583d78
    FMULP ST2                           ; 00583d7a
    FMULP ST3                           ; 00583d7c
    LEA EAX,[EBX + 0xa44]               ; 00583d7e
    FXCH                                ; 00583d84
    FSTP float ptr [EBX + 0xa7c]        ; 00583d86
    FSTP float ptr [EBX + 0xa80]        ; 00583d8c
    FSTP float ptr [EBX + 0xa84]        ; 00583d92
    MOV dword ptr [EAX + 0x8],0x0       ; 00583d98
    MOV EDX,dword ptr [EAX + 0x8]       ; 00583d9f
    MOV dword ptr [EAX + 0x4],EDX       ; 00583da2
    MOV EDX,dword ptr [EAX + 0x4]       ; 00583da5
    MOV dword ptr [EAX],EDX             ; 00583da8
    LEA EAX,[EBX + 0xa68]               ; 00583daa
    MOV dword ptr [EAX + 0x8],0x0       ; 00583db0
    MOV EDX,dword ptr [EAX + 0x8]       ; 00583db7
    MOV dword ptr [EAX + 0x4],EDX       ; 00583dba
    MOV EDX,dword ptr [EAX + 0x4]       ; 00583dbd
    MOV dword ptr [EAX],EDX             ; 00583dc0
    LEA EAX,[EBX + 0xa2c]               ; 00583dc2
    MOV dword ptr [EAX + 0x8],0x0       ; 00583dc8
    MOV EDX,dword ptr [EAX + 0x8]       ; 00583dcf
    MOV dword ptr [EAX + 0x4],EDX       ; 00583dd2
    MOV EDX,dword ptr [EAX + 0x4]       ; 00583dd5
    MOV dword ptr [EAX],EDX             ; 00583dd8
    LEA EAX,[EBX + 0xa50]               ; 00583dda
    MOV dword ptr [EAX + 0x8],0x0       ; 00583de0
    MOV EDX,dword ptr [EAX + 0x8]       ; 00583de7
    MOV dword ptr [EAX + 0x4],EDX       ; 00583dea
    MOV EDX,dword ptr [EAX + 0x4]       ; 00583ded
    MOV dword ptr [EAX],EDX             ; 00583df0
    LEA EAX,[EBX + 0xa38]               ; 00583df2
    MOV dword ptr [EAX + 0x8],0x0       ; 00583df8
    MOV EDX,dword ptr [EAX + 0x8]       ; 00583dff
    MOV dword ptr [EAX + 0x4],EDX       ; 00583e02
    MOV EDX,dword ptr [EAX + 0x4]       ; 00583e05
    MOV dword ptr [EAX],EDX             ; 00583e08
    LEA EAX,[EBX + 0xa5c]               ; 00583e0a
    MOV dword ptr [EAX + 0x8],0x0       ; 00583e10
    MOV EDX,dword ptr [EAX + 0x8]       ; 00583e17
    MOV dword ptr [EAX + 0x4],EDX       ; 00583e1a
    MOV EDX,dword ptr [EAX + 0x4]       ; 00583e1d
    MOV dword ptr [EAX],EDX             ; 00583e20
    LEA EAX,[EBX + 0xa20]               ; 00583e22
    MOV dword ptr [EAX + 0x8],0x0       ; 00583e28
    MOV EDX,dword ptr [EAX + 0x8]       ; 00583e2f
    MOV dword ptr [EAX + 0x4],EDX       ; 00583e32
    MOV EDX,dword ptr [EAX + 0x4]       ; 00583e35
    MOV dword ptr [EAX],EDX             ; 00583e38
    MOV EDI,dword ptr [EBX + 0xa94]     ; 00583e3a
    XOR ESI,ESI                         ; 00583e40
    TEST EDI,EDI                        ; 00583e42
    JLE 0x00583eac                      ; 00583e44
        ;   XREF to: 00583eac (CONDITIONAL_JUMP)  ; LAB_00583eac
    LEA EDI,[EBX + 0xa98]               ; 00583e46
    LEA EDX,[EDI + 0x19c]               ; 00583e4c
    LEA EAX,[EDI + 0x190]               ; 00583e52
    IMUL ECX,ESI,0x1b4                  ; 00583e58
        ;   Label: LAB_00583e58
    ADD ECX,EDI                         ; 00583e5e
    CMP EDX,ECX                         ; 00583e60
    JZ 0x00583e74                       ; 00583e62
        ;   XREF to: 00583e74 (CONDITIONAL_JUMP)  ; LAB_00583e74
    MOV EBP,dword ptr [ECX]             ; 00583e64
    MOV dword ptr [EDX],EBP             ; 00583e66
    MOV EBP,dword ptr [ECX + 0x4]       ; 00583e68
    MOV dword ptr [EDX + 0x4],EBP       ; 00583e6b
    MOV EBP,dword ptr [ECX + 0x8]       ; 00583e6e
    MOV dword ptr [EDX + 0x8],EBP       ; 00583e71
    MOV dword ptr [EAX + 0x8],0x0       ; 00583e74
        ;   Label: LAB_00583e74
    ADD EDX,0x1b4                       ; 00583e7b
    MOV dword ptr [EAX + 0x20],0x0      ; 00583e81
    INC ESI                             ; 00583e88
    FLD float ptr [EAX + 0x20]          ; 00583e89
    MOV ECX,dword ptr [EAX + 0x8]       ; 00583e8c
    MOV dword ptr [EAX + 0x4],ECX       ; 00583e8f
    FST float ptr [EAX + 0x1c]          ; 00583e92
    MOV ECX,dword ptr [EAX + 0x4]       ; 00583e95
    MOV dword ptr [EAX],ECX             ; 00583e98
    FSTP float ptr [EAX + 0x18]         ; 00583e9a
    MOV EBP,dword ptr [EBX + 0xa94]     ; 00583e9d
    ADD EAX,0x1b4                       ; 00583ea3
    CMP ESI,EBP                         ; 00583ea8
    JL 0x00583e58                       ; 00583eaa
        ;   XREF to: 00583e58 (CONDITIONAL_JUMP)  ; LAB_00583e58
    MOV dword ptr [EBX + 0x1168],0x0    ; 00583eac
        ;   Label: LAB_00583eac
    LEA EAX,[EBX + 0x1190]              ; 00583eb6
    MOV dword ptr [EBX + 0x116c],0x3f800000 ; 00583ebc
    PUSH EAX                            ; 00583ec6
    LEA EAX,[EBX + 0x117c]              ; 00583ec7
    MOV dword ptr [EBX + 0x1170],0x0    ; 00583ecd
    PUSH EAX                            ; 00583ed7
    MOV dword ptr [EBX + 0x1174],0x0    ; 00583ed8
    CALL FUN_00438af0                   ; 00583ee2
        ;   XREF to: 00438af0 (UNCONDITIONAL_CALL)  ; undefined FUN_00438af0()
    MOV dword ptr [EBX + 0x11c8],0x1    ; 00583ee7
    MOV dword ptr [EBX + 0x11b0],0x0    ; 00583ef1
    MOV dword ptr [EBX + 0x11b4],0x0    ; 00583efb
    ADD ESP,0x8                         ; 00583f05
    MOV dword ptr [EBX + 0x11b8],0x0    ; 00583f08
    ADD ESP,0x30                        ; 00583f12
    POP EBP                             ; 00583f15
    POP EDI                             ; 00583f16
    POP ESI                             ; 00583f17
    POP EBX                             ; 00583f18
    RET                                 ; 00583f19

