; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004208d0(int param_1)
;
;
; XREF[1]:
;   FUN_004203f0 at 004203f6
;
; Referenced Globals:
;   undefined4 DAT_005b76e9
;   undefined4 DAT_005b76f1
;   undefined4 DAT_007e1778
;
; Called Functions:
;   FUN_00459980
;   FUN_0045db40
;   FUN_00462580
;   FUN_004625f0
;   FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004208d0
        ;   Label: FUN_004208d0
    PUSH ESI                            ; 004208d1
    PUSH EDI                            ; 004208d2
    PUSH EBP                            ; 004208d3
    MOV EBP,ESP                         ; 004208d4
    SUB ESP,0x150                       ; 004208d6
    AND ESP,0xfffffff8                  ; 004208dc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004208df
    MOV EAX,dword ptr [EBX + 0x6e8]     ; 004208e2
    CMP EAX,0x1                         ; 004208e8
    JC 0x00420918                       ; 004208eb
        ;   XREF to: 00420918 (CONDITIONAL_JUMP)  ; LAB_00420918
    LEA ESI,[EBX + 0x6ec]               ; 004208ed
    MOV dword ptr [ESP + 0x148],ESI     ; 004208f3
    LEA ESI,[EBX + 0x36a4]              ; 004208fa
    MOV dword ptr [ESP + 0x14c],ESI     ; 00420900
    LEA ESI,[EBX + 0x158]               ; 00420907
    JBE 0x0042091f                      ; 0042090d
        ;   XREF to: 0042091f (CONDITIONAL_JUMP)  ; LAB_0042091f
    CMP EAX,0x2                         ; 0042090f
    JZ 0x00420ae4                       ; 00420912
        ;   XREF to: 00420ae4 (CONDITIONAL_JUMP)  ; LAB_00420ae4
    MOV ESP,EBP                         ; 00420918
        ;   Label: LAB_00420918
    POP EBP                             ; 0042091a
    POP EDI                             ; 0042091b
    POP ESI                             ; 0042091c
    POP EBX                             ; 0042091d
    RET                                 ; 0042091e
    PUSH 0x5b76c2                       ; 0042091f
        ;   Label: LAB_0042091f
    PUSH ESI                            ; 00420924
    CALL FUN_004625f0                   ; 00420925
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 0042092a
    PUSH ESI                            ; 0042092d
    CALL FUN_00462580                   ; 0042092e
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 00420933
    MOV EAX,dword ptr [EBX + 0x154]     ; 00420936
    PUSH EBX                            ; 0042093c
    LEA ESI,[ESP + 0x2c]                ; 0042093d
    LEA EDI,[ESP + 0x74]                ; 00420941
    CALL dword ptr [EAX + 0x1c]         ; 00420945
    MOV ECX,0x6                         ; 00420948
    LEA ESI,[ESP + 0x2c]                ; 0042094d
    ADD ESP,0x4                         ; 00420951
    MOVSD.REP ES:EDI,ESI                ; 00420954
    FLD float ptr [ESP + 0x70]          ; 00420956
    FLD float ptr [ESP + 0x74]          ; 0042095a
    FLD float ptr [ESP + 0x78]          ; 0042095e
    LEA EDI,[ESP + 0xd0]                ; 00420962
    LEA ESI,[ESP + 0xb8]                ; 00420969
    FXCH ST2                            ; 00420970
    FADD float ptr [ESP + 0x7c]         ; 00420972
    FXCH                                ; 00420976
    FADD float ptr [ESP + 0x80]         ; 00420978
    FXCH ST2                            ; 0042097f
    FADD float ptr [ESP + 0x84]         ; 00420981
    FXCH                                ; 00420988
    FSTP float ptr [ESP + 0xb8]         ; 0042098a
    FXCH                                ; 00420991
    FSTP float ptr [ESP + 0xbc]         ; 00420993
    FSTP float ptr [ESP + 0xc0]         ; 0042099a
    MOVSD ES:EDI,ESI                    ; 004209a1
    MOVSD ES:EDI,ESI                    ; 004209a2
    MOVSD ES:EDI,ESI                    ; 004209a3
    FLD float ptr [0x005b76e9]          ; 004209a4 | DAT_005b76e9
    FLD float ptr [ESP + 0xd0]          ; 004209aa
    FMUL ST1                            ; 004209b1
    FLD float ptr [ESP + 0xd4]          ; 004209b3
    FMUL ST2                            ; 004209ba
    FLD float ptr [ESP + 0xd8]          ; 004209bc
    FMUL ST3                            ; 004209c3
    LEA EDI,[ESP + 0xdc]                ; 004209c5
    LEA ESI,[ESP + 0x10c]               ; 004209cc
    FXCH ST2                            ; 004209d3
    FSTP float ptr [ESP + 0x10c]        ; 004209d5
    FSTP float ptr [ESP + 0x110]        ; 004209dc
    FSTP float ptr [ESP + 0x114]        ; 004209e3
    MOVSD ES:EDI,ESI                    ; 004209ea
    MOVSD ES:EDI,ESI                    ; 004209eb
    MOVSD ES:EDI,ESI                    ; 004209ec
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004209ed
    MOV dword ptr [EBX + 0x3698],EAX    ; 004209f4
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004209fa
    MOV dword ptr [ESP + 0xf4],EAX      ; 00420a01
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00420a08
    LEA EDI,[ESP + 0x94]                ; 00420a0f
    MOV dword ptr [ESP + 0xf8],EAX      ; 00420a16
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00420a1d
    LEA ESI,[ESP + 0xf4]                ; 00420a24
    MOV dword ptr [ESP + 0xfc],EAX      ; 00420a2b
    MOVSD ES:EDI,ESI                    ; 00420a32
    MOVSD ES:EDI,ESI                    ; 00420a33
    MOVSD ES:EDI,ESI                    ; 00420a34
    FLD float ptr [ESP + 0x94]          ; 00420a35
    FMUL ST1                            ; 00420a3c
    FLD float ptr [ESP + 0x98]          ; 00420a3e
    FMUL ST2                            ; 00420a45
    FLD float ptr [ESP + 0x9c]          ; 00420a47
    FMULP ST3                           ; 00420a4e
    LEA EDI,[ESP + 0xc4]                ; 00420a50
    LEA ESI,[ESP + 0x130]               ; 00420a57
    FXCH                                ; 00420a5e
    FSTP float ptr [ESP + 0x130]        ; 00420a60
    FSTP float ptr [ESP + 0x134]        ; 00420a67
    FSTP float ptr [ESP + 0x138]        ; 00420a6e
    MOVSD ES:EDI,ESI                    ; 00420a75
    MOVSD ES:EDI,ESI                    ; 00420a76
    MOVSD ES:EDI,ESI                    ; 00420a77
    FLD float ptr [ESP + 0x84]          ; 00420a78
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00420a7f
    FADD double ptr [0x005b76f1]        ; 00420a86 | DAT_005b76f1
    MOV dword ptr [EBX + 0x369c],EAX    ; 00420a8c
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00420a92
    FSTP float ptr [EBX + 0x36a0]       ; 00420a99
    MOV dword ptr [EAX + 0x8],0x0       ; 00420a9f
    MOV EDX,dword ptr [EAX + 0x8]       ; 00420aa6
    MOV dword ptr [EAX + 0x4],EDX       ; 00420aa9
    MOV EDX,dword ptr [EAX + 0x4]       ; 00420aac
    MOV dword ptr [EAX],EDX             ; 00420aaf
    MOV EAX,dword ptr [ESP + 0x148]     ; 00420ab1
    MOV dword ptr [EBX + 0x23a0],0x0    ; 00420ab8
    MOV dword ptr [EAX + 0x38],0x42600000 ; 00420ac2
    MOV dword ptr [EBX + 0x82c],0x42000000 ; 00420ac9
    MOV dword ptr [EBX + 0x314],0x3     ; 00420ad3
    MOV ESP,EBP                         ; 00420add
    POP EBP                             ; 00420adf
    POP EDI                             ; 00420ae0
    POP ESI                             ; 00420ae1
    POP EBX                             ; 00420ae2
    RET                                 ; 00420ae3
    PUSH 0x5b76cf                       ; 00420ae4
        ;   Label: LAB_00420ae4
    PUSH ESI                            ; 00420ae9
    CALL FUN_004625f0                   ; 00420aea
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 00420aef
    PUSH ESI                            ; 00420af2
    CALL FUN_00462580                   ; 00420af3
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 00420af8
    MOV EAX,dword ptr [EBX + 0x154]     ; 00420afb
    PUSH EBX                            ; 00420b01
    LEA ESI,[ESP + 0x5c]                ; 00420b02
    LEA EDI,[ESP + 0x44]                ; 00420b06
    CALL dword ptr [EAX + 0x1c]         ; 00420b0a
    MOV ECX,0x6                         ; 00420b0d
    LEA ESI,[ESP + 0x5c]                ; 00420b12
    ADD ESP,0x4                         ; 00420b16
    MOVSD.REP ES:EDI,ESI                ; 00420b19
    FLD float ptr [ESP + 0x40]          ; 00420b1b
    FLD float ptr [ESP + 0x44]          ; 00420b1f
    FLD float ptr [ESP + 0x48]          ; 00420b23
    LEA EDI,[ESP + 0x100]               ; 00420b27
    LEA ESI,[ESP + 0x118]               ; 00420b2e
    FXCH ST2                            ; 00420b35
    FADD float ptr [ESP + 0x4c]         ; 00420b37
    FXCH                                ; 00420b3b
    FADD float ptr [ESP + 0x50]         ; 00420b3d
    FXCH ST2                            ; 00420b41
    FADD float ptr [ESP + 0x54]         ; 00420b43
    FXCH                                ; 00420b47
    FSTP float ptr [ESP + 0x118]        ; 00420b49
    FXCH                                ; 00420b50
    FSTP float ptr [ESP + 0x11c]        ; 00420b52
    FSTP float ptr [ESP + 0x120]        ; 00420b59
    MOVSD ES:EDI,ESI                    ; 00420b60
    MOVSD ES:EDI,ESI                    ; 00420b61
    MOVSD ES:EDI,ESI                    ; 00420b62
    FLD float ptr [0x005b76e9]          ; 00420b63 | DAT_005b76e9
    FLD float ptr [ESP + 0x100]         ; 00420b69
    FMUL ST1                            ; 00420b70
    FLD float ptr [ESP + 0x104]         ; 00420b72
    FMUL ST2                            ; 00420b79
    FLD float ptr [ESP + 0x108]         ; 00420b7b
    FMUL ST3                            ; 00420b82
    LEA EDI,[ESP + 0x13c]               ; 00420b84
    LEA ESI,[ESP + 0x124]               ; 00420b8b
    FXCH ST2                            ; 00420b92
    FSTP float ptr [ESP + 0x124]        ; 00420b94
    FSTP float ptr [ESP + 0x128]        ; 00420b9b
    FSTP float ptr [ESP + 0x12c]        ; 00420ba2
    MOVSD ES:EDI,ESI                    ; 00420ba9
    MOVSD ES:EDI,ESI                    ; 00420baa
    MOVSD ES:EDI,ESI                    ; 00420bab
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00420bac
    MOV dword ptr [EBX + 0x3698],EAX    ; 00420bb3
    MOV EAX,dword ptr [ESP + 0x118]     ; 00420bb9
    MOV dword ptr [ESP + 0xa0],EAX      ; 00420bc0
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00420bc7
    LEA EDI,[ESP + 0xac]                ; 00420bce
    MOV dword ptr [ESP + 0xa4],EAX      ; 00420bd5
    MOV EAX,dword ptr [ESP + 0x120]     ; 00420bdc
    LEA ESI,[ESP + 0xa0]                ; 00420be3
    MOV dword ptr [ESP + 0xa8],EAX      ; 00420bea
    MOVSD ES:EDI,ESI                    ; 00420bf1
    MOVSD ES:EDI,ESI                    ; 00420bf2
    MOVSD ES:EDI,ESI                    ; 00420bf3
    FLD float ptr [ESP + 0xac]          ; 00420bf4
    FMUL ST1                            ; 00420bfb
    FLD float ptr [ESP + 0xb0]          ; 00420bfd
    FMUL ST2                            ; 00420c04
    FLD float ptr [ESP + 0xb4]          ; 00420c06
    FMULP ST3                           ; 00420c0d
    LEA EDI,[ESP + 0xe8]                ; 00420c0f
    LEA ESI,[ESP + 0x88]                ; 00420c16
    FXCH                                ; 00420c1d
    FSTP float ptr [ESP + 0x88]         ; 00420c1f
    FSTP float ptr [ESP + 0x8c]         ; 00420c26
    FSTP float ptr [ESP + 0x90]         ; 00420c2d
    MOVSD ES:EDI,ESI                    ; 00420c34
    MOVSD ES:EDI,ESI                    ; 00420c35
    MOVSD ES:EDI,ESI                    ; 00420c36
    MOV EAX,dword ptr [ESP + 0xec]      ; 00420c37
    MOV dword ptr [EBX + 0x369c],EAX    ; 00420c3e
    MOV EAX,dword ptr [ESP + 0x54]      ; 00420c44
    MOV dword ptr [EBX + 0x36a0],EAX    ; 00420c48
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00420c4e
    MOV dword ptr [EAX + 0x8],0x0       ; 00420c55
    MOV EDX,dword ptr [EAX + 0x8]       ; 00420c5c
    MOV dword ptr [EAX + 0x4],EDX       ; 00420c5f
    MOV EDX,dword ptr [EAX + 0x4]       ; 00420c62
    MOV dword ptr [EAX],EDX             ; 00420c65
    MOV dword ptr [EBX + 0x36a4],0x3e860a92 ; 00420c67
    MOV dword ptr [EBX + 0x23a0],0x0    ; 00420c71
    MOV EAX,dword ptr [ESP + 0x148]     ; 00420c7b
    MOV dword ptr [EBX + 0x23a8],0x1    ; 00420c82
    MOV dword ptr [EAX + 0x38],0x42b40000 ; 00420c8c
    MOV dword ptr [EBX + 0x82c],0x42400000 ; 00420c93
    MOV EDX,dword ptr [0x007e1778]      ; 00420c9d | DAT_007e1778
    MOV dword ptr [EBX + 0x314],0x2     ; 00420ca3
    TEST EDX,EDX                        ; 00420cad
    JNZ 0x00420cea                      ; 00420caf
        ;   XREF to: 00420cea (CONDITIONAL_JUMP)  ; LAB_00420cea
    MOV EDI,0x7e17b8                    ; 00420cb1
    XOR ESI,ESI                         ; 00420cb6
    PUSH ESI                            ; 00420cb8
        ;   Label: LAB_00420cb8
    PUSH 0x5b76db                       ; 00420cb9
    LEA EAX,[ESP + 0x8]                 ; 00420cbe
    PUSH EAX                            ; 00420cc2
    CALL FUN_005a28c0                   ; 00420cc3
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0xc                         ; 00420cc8
    MOV EAX,ESP                         ; 00420ccb
    PUSH EAX                            ; 00420ccd
    PUSH EDI                            ; 00420cce
    INC ESI                             ; 00420ccf
    CALL FUN_00459980                   ; 00420cd0
        ;   XREF to: 00459980 (UNCONDITIONAL_CALL)  ; undefined FUN_00459980()
    ADD ESP,0x8                         ; 00420cd5
    ADD EDI,0x4c                        ; 00420cd8
    CMP ESI,0x8                         ; 00420cdb
    JL 0x00420cb8                       ; 00420cde
        ;   XREF to: 00420cb8 (CONDITIONAL_JUMP)  ; LAB_00420cb8
    MOV dword ptr [0x007e1778],0x1      ; 00420ce0 | DAT_007e1778
    PUSH 0x0                            ; 00420cea
        ;   Label: LAB_00420cea
    PUSH 0x0                            ; 00420cec
    PUSH 0x0                            ; 00420cee
    PUSH 0x7e17b8                       ; 00420cf0
    ADD EBX,0x6ec                       ; 00420cf5
    PUSH EBX                            ; 00420cfb
    CALL FUN_0045db40                   ; 00420cfc
        ;   XREF to: 0045db40 (UNCONDITIONAL_CALL)  ; undefined FUN_0045db40()
    ADD ESP,0x14                        ; 00420d01
    MOV ESP,EBP                         ; 00420d04
    POP EBP                             ; 00420d06
    POP EDI                             ; 00420d07
    POP ESI                             ; 00420d08
    POP EBX                             ; 00420d09
    RET                                 ; 00420d0a

