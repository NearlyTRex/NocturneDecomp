; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049bd40(float *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d576a
;   undefined4 DAT_005f64e4
;   undefined4 DAT_0060b280
;   undefined4 DAT_00615874
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;   undefined4 DAT_00622040
;   undefined4 DAT_0062205c
;   undefined4 DAT_00622060
;   undefined4 DAT_00622070
;   undefined4 DAT_0062208c
;   undefined4 DAT_00622090
;   undefined4 DAT_006220a0
;   undefined4 DAT_006220bc
;   ... and 8 more
;
; Called Functions:
;   FUN_0046a930
;   FUN_0046b2b0
;   FUN_0046b300
;   FUN_0046b650
;   FUN_0046b8d0
;   FUN_0046ca00
;   FUN_0046cad0
;   FUN_005317c0
;   FUN_0055d723
;   FUN_0055d9ec
;   FUN_005b7ff0
;   thunk_FUN_004e9810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049bd40
        ;   Label: FUN_0049bd40
    PUSH ESI                            ; 0049bd41
    PUSH EBP                            ; 0049bd42
    SUB ESP,0x9c                        ; 0049bd43
    MOV EBP,dword ptr [ESP + 0xac]      ; 0049bd49
    MOV ESI,dword ptr [0x0060b280]      ; 0049bd50 | DAT_0060b280
    LEA EBX,[ESP + 0x40]                ; 0049bd56
    MOV EAX,EBP                         ; 0049bd5a
    MOV ESI,dword ptr [ESI]             ; 0049bd5c | DAT_01ba5c50
    FLD float ptr [EAX]                 ; 0049bd5e
    FMUL float ptr [0x005f64e4]         ; 0049bd60 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049bd66
    FLD float ptr [EAX + 0x4]           ; 0049bd68
    FMUL float ptr [0x005f64e4]         ; 0049bd6b | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049bd71
    FLD float ptr [EAX + 0x8]           ; 0049bd74
    FMUL float ptr [0x005f64e4]         ; 0049bd77 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049bd7d
    LEA EAX,[ESP + 0x40]                ; 0049bd80
    PUSH EAX                            ; 0049bd84
    PUSH ESI                            ; 0049bd85
    CALL FUN_0055d9ec                   ; 0049bd86
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; undefined FUN_0055d9ec()
    ADD ESP,0x8                         ; 0049bd8b
    PUSH ESI                            ; 0049bd8e
    MOV EDX,dword ptr [0x0060b280]      ; 0049bd8f | DAT_0060b280
    PUSH EDX                            ; 0049bd95 | DAT_01ba5c50
    CALL FUN_0046cad0                   ; 0049bd96
        ;   XREF to: 0046cad0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cad0()
    ADD ESP,0x8                         ; 0049bd9b
    TEST EAX,EAX                        ; 0049bd9e
    JNZ 0x0049bdac                      ; 0049bda0
        ;   XREF to: 0049bdac (CONDITIONAL_JUMP)  ; LAB_0049bdac
    ADD ESP,0x9c                        ; 0049bda2
    POP EBP                             ; 0049bda8
    POP ESI                             ; 0049bda9
    POP EBX                             ; 0049bdaa
    RET                                 ; 0049bdab
    PUSH EDI                            ; 0049bdac
        ;   Label: LAB_0049bdac
    PUSH EBP                            ; 0049bdad
    MOV ECX,dword ptr [0x0060b280]      ; 0049bdae | DAT_0060b280
    PUSH ECX                            ; 0049bdb4 | DAT_01ba5c50
    CALL FUN_0046b2b0                   ; 0049bdb5
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b2b0()
    ADD ESP,0x8                         ; 0049bdba
    MOV EBX,dword ptr [0x0060b280]      ; 0049bdbd | DAT_0060b280
    PUSH EBX                            ; 0049bdc3 | DAT_01ba5c50
    LEA ESI,[ESP + 0x90]                ; 0049bdc4
    LEA EDI,[ESP + 0x78]                ; 0049bdcb
    CALL FUN_0046b650                   ; 0049bdcf
        ;   XREF to: 0046b650 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b650()
    ADD ESP,0x4                         ; 0049bdd4
    LEA ESI,[ESP + 0x8c]                ; 0049bdd7
    LEA EAX,[ESP + 0x74]                ; 0049bdde
    PUSH 0x0                            ; 0049bde2
    MOVSD ES:EDI,ESI                    ; 0049bde4
    MOVSD ES:EDI,ESI                    ; 0049bde5
    MOVSD ES:EDI,ESI                    ; 0049bde6
    PUSH EAX                            ; 0049bde7
    MOV ESI,dword ptr [0x0060b280]      ; 0049bde8 | DAT_0060b280
    PUSH ESI                            ; 0049bdee | DAT_01ba5c50
    LEA EBX,[ESP + 0x68]                ; 0049bdef
    MOV EDI,0xbe000000                  ; 0049bdf3
    CALL FUN_0046b300                   ; 0049bdf8
        ;   XREF to: 0046b300 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b300()
    LEA EAX,[ESP + 0x5c]                ; 0049bdfd
    MOV ESI,dword ptr [0x0060b280]      ; 0049be01 | DAT_0060b280
    ADD ESP,0xc                         ; 0049be07
    XOR EDX,EDX                         ; 0049be0a
    MOV dword ptr [ESP + 0x50],EDI      ; 0049be0c
    MOV dword ptr [ESP + 0x54],EDI      ; 0049be10
    MOV dword ptr [ESP + 0x58],EDX      ; 0049be14
    FLD float ptr [EAX]                 ; 0049be18
    FMUL float ptr [0x005f64e4]         ; 0049be1a | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049be20
    FLD float ptr [EAX + 0x4]           ; 0049be22
    FMUL float ptr [0x005f64e4]         ; 0049be25 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049be2b
    FLD float ptr [EAX + 0x8]           ; 0049be2e
    FMUL float ptr [0x005f64e4]         ; 0049be31 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049be37
    LEA EAX,[ESP + 0x5c]                ; 0049be3a
    PUSH EAX                            ; 0049be3e
    MOV EAX,dword ptr [ESI]             ; 0049be3f | DAT_01ba5c50
    PUSH EAX                            ; 0049be41
    CALL FUN_0055d723                   ; 0049be42
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    XOR ESI,ESI                         ; 0049be47
    MOV ECX,0x3e000000                  ; 0049be49
    LEA EBX,[ESP + 0x34]                ; 0049be4e
    ADD ESP,0x8                         ; 0049be52
    LEA EAX,[ESP + 0x50]                ; 0049be55
    MOV dword ptr [ESP + 0x50],ECX      ; 0049be59
    MOV dword ptr [ESP + 0x54],EDI      ; 0049be5d
    MOV dword ptr [ESP + 0x58],ESI      ; 0049be61
    MOV ESI,dword ptr [0x0060b280]      ; 0049be65 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0049be6b
    FMUL float ptr [0x005f64e4]         ; 0049be6d | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049be73
    FLD float ptr [EAX + 0x4]           ; 0049be75
    FMUL float ptr [0x005f64e4]         ; 0049be78 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049be7e
    FLD float ptr [EAX + 0x8]           ; 0049be81
    FMUL float ptr [0x005f64e4]         ; 0049be84 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049be8a
    LEA EAX,[ESP + 0x2c]                ; 0049be8d
    PUSH EAX                            ; 0049be91
    MOV EAX,dword ptr [ESI]             ; 0049be92 | DAT_01ba5c50
    ADD EAX,0x30                        ; 0049be94
    PUSH EAX                            ; 0049be97
    MOV EDI,0x3e000000                  ; 0049be98
    CALL FUN_0055d723                   ; 0049be9d
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    MOV ESI,dword ptr [0x0060b280]      ; 0049bea2 | DAT_0060b280
    ADD ESP,0x8                         ; 0049bea8
    XOR EDX,EDX                         ; 0049beab
    MOV dword ptr [ESP + 0x50],EDI      ; 0049bead
    MOV dword ptr [ESP + 0x54],EDI      ; 0049beb1
    MOV dword ptr [ESP + 0x58],EDX      ; 0049beb5
    LEA EBX,[ESP + 0x38]                ; 0049beb9
    LEA EAX,[ESP + 0x50]                ; 0049bebd
    FLD float ptr [EAX]                 ; 0049bec1
    FMUL float ptr [0x005f64e4]         ; 0049bec3 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049bec9
    FLD float ptr [EAX + 0x4]           ; 0049becb
    FMUL float ptr [0x005f64e4]         ; 0049bece | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049bed4
    FLD float ptr [EAX + 0x8]           ; 0049bed7
    FMUL float ptr [0x005f64e4]         ; 0049beda | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049bee0
    LEA EAX,[ESP + 0x38]                ; 0049bee3
    PUSH EAX                            ; 0049bee7
    MOV EAX,dword ptr [ESI]             ; 0049bee8 | DAT_01ba5c50
    ADD EAX,0x60                        ; 0049beea
    PUSH EAX                            ; 0049beed
    XOR ESI,ESI                         ; 0049beee
    CALL FUN_0055d723                   ; 0049bef0
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    MOV ECX,0xbe000000                  ; 0049bef5
    LEA EBX,[ESP + 0x70]                ; 0049befa
    ADD ESP,0x8                         ; 0049befe
    LEA EAX,[ESP + 0x50]                ; 0049bf01
    MOV dword ptr [ESP + 0x50],ECX      ; 0049bf05
    MOV dword ptr [ESP + 0x54],EDI      ; 0049bf09
    MOV dword ptr [ESP + 0x58],ESI      ; 0049bf0d
    MOV ESI,dword ptr [0x0060b280]      ; 0049bf11 | DAT_0060b280
    FLD float ptr [EAX]                 ; 0049bf17
    FMUL float ptr [0x005f64e4]         ; 0049bf19 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049bf1f
    FLD float ptr [EAX + 0x4]           ; 0049bf21
    FMUL float ptr [0x005f64e4]         ; 0049bf24 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049bf2a
    FLD float ptr [EAX + 0x8]           ; 0049bf2d
    FMUL float ptr [0x005f64e4]         ; 0049bf30 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049bf36
    LEA EAX,[ESP + 0x68]                ; 0049bf39
    PUSH EAX                            ; 0049bf3d
    MOV EAX,dword ptr [ESI]             ; 0049bf3e | DAT_01ba5c50
    ADD EAX,0x90                        ; 0049bf40
    PUSH EAX                            ; 0049bf45
    CALL FUN_0055d723                   ; 0049bf46
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    ADD ESP,0x8                         ; 0049bf4b
    PUSH 0x615874                       ; 0049bf4e | DAT_00615874
    MOV EDI,dword ptr [0x0060b280]      ; 0049bf53 | DAT_0060b280
    PUSH EDI                            ; 0049bf59 | DAT_01ba5c50
    CALL FUN_0046ca00                   ; 0049bf5a
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ca00()
    ADD ESP,0x8                         ; 0049bf5f
    PUSH 0x0                            ; 0049bf62
    MOV EAX,[0x007bda74]                ; 0049bf64 | DAT_007bda74
    PUSH EBP                            ; 0049bf69
    MOV EBX,dword ptr [EAX + 0x3c]      ; 0049bf6a
    PUSH EAX                            ; 0049bf6d
    CALL dword ptr [EBX + 0x4]          ; 0049bf6e
    FLD float ptr [EBP + 0x24]          ; 0049bf71
    FMUL double ptr [0x005d576a]        ; 0049bf74 | DAT_005d576a
    MOV EAX,0xffff                      ; 0049bf7a
    MOV EDX,dword ptr [0x01c38aec]      ; 0049bf7f | DAT_01c38aec
    ADD ESP,0xc                         ; 0049bf85
    SUB EAX,EDX                         ; 0049bf88
    MOV dword ptr [ESP + 0x9c],EAX      ; 0049bf8a
    FILD dword ptr [ESP + 0x9c]         ; 0049bf91
    FMULP                               ; 0049bf98
    MOV ESI,0xd00000                    ; 0049bf9a
    MOV ECX,0x800000                    ; 0049bf9f | DAT_00800000
    MOV EBX,0xdc0000                    ; 0049bfa4
    MOV dword ptr [0x0062205c],ESI      ; 0049bfa9 | DAT_0062205c
    MOV dword ptr [0x0062202c],ECX      ; 0049bfaf | DAT_0062202c
    MOV dword ptr [0x00622030],EBX      ; 0049bfb5 | DAT_00622030
    MOV dword ptr [0x00622060],EBX      ; 0049bfbb | DAT_00622060
    MOV dword ptr [0x0062208c],ECX      ; 0049bfc1 | DAT_0062208c
    MOV dword ptr [0x006220bc],ECX      ; 0049bfc7 | DAT_006220bc
    MOV EDX,0x900000                    ; 0049bfcd
    MOV dword ptr [ESP + 0x98],EAX      ; 0049bfd2
    MOV dword ptr [0x00622090],EDX      ; 0049bfd9 | DAT_00622090
    CALL FUN_005b7ff0                   ; 0049bfdf
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x98]        ; 0049bfe4
    MOV EAX,dword ptr [ESP + 0x98]      ; 0049bfeb
    MOV dword ptr [0x006220c0],EDX      ; 0049bff2 | DAT_006220c0
    MOV [0x00622040],EAX                ; 0049bff8 | DAT_00622040
    MOV [0x00622070],EAX                ; 0049bffd | DAT_00622070
    MOV [0x006220a0],EAX                ; 0049c002 | DAT_006220a0
    MOV [0x006220d0],EAX                ; 0049c007 | DAT_006220d0
    LEA EBX,[ESP + 0x80]                ; 0049c00c
    MOV EAX,EBP                         ; 0049c013
    FLD float ptr [EAX]                 ; 0049c015
    FMUL float ptr [0x005f64e4]         ; 0049c017 | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049c01d
    FLD float ptr [EAX + 0x4]           ; 0049c01f
    FMUL float ptr [0x005f64e4]         ; 0049c022 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049c028
    FLD float ptr [EAX + 0x8]           ; 0049c02b
    FMUL float ptr [0x005f64e4]         ; 0049c02e | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049c034
    PUSH 0x4                            ; 0049c037
    PUSH 0x0                            ; 0049c039
    PUSH 0x1c3dec4                      ; 0049c03b | DAT_01c3dec4
    LEA EAX,[ESP + 0x8c]                ; 0049c040
    PUSH EAX                            ; 0049c047
    MOV ESI,dword ptr [0x0061b5a8]      ; 0049c048 | DAT_0061b5a8
    PUSH ESI                            ; 0049c04e | DAT_01e661b8
    CALL FUN_005317c0                   ; 0049c04f
        ;   XREF to: 005317c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005317c0()
    ADD ESP,0x14                        ; 0049c054
    PUSH 0x1                            ; 0049c057
    MOV EDI,dword ptr [0x0060b280]      ; 0049c059 | DAT_0060b280
    PUSH EDI                            ; 0049c05f | DAT_01ba5c50
    CALL FUN_0046b8d0                   ; 0049c060
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b8d0()
    ADD ESP,0x8                         ; 0049c065
    XOR EAX,EAX                         ; 0049c068
    MOV EBP,0x4                         ; 0049c06a
    MOV dword ptr [ESP + 0x18],EAX      ; 0049c06f
    MOV dword ptr [ESP + 0x14],EAX      ; 0049c073
    MOV dword ptr [ESP + 0x10],EAX      ; 0049c077
    MOV dword ptr [ESP + 0xc],EAX       ; 0049c07b
    MOV dword ptr [ESP + 0x1c],EAX      ; 0049c07f
    MOV EAX,0x3                         ; 0049c083
    MOV EDI,0x1                         ; 0049c088
    MOV dword ptr [ESP + 0x28],EAX      ; 0049c08d
    LEA EAX,[ESP + 0x4]                 ; 0049c091
    MOV EDX,dword ptr [0x0060b280]      ; 0049c095 | DAT_0060b280
    PUSH EAX                            ; 0049c09b
    MOV dword ptr [ESP + 0xc],EBP       ; 0049c09c
    MOV EBP,0x2                         ; 0049c0a0
    PUSH EDX                            ; 0049c0a5 | DAT_01ba5c50
    MOV dword ptr [ESP + 0x28],EDI      ; 0049c0a6
    MOV dword ptr [ESP + 0x2c],EBP      ; 0049c0aa
    CALL FUN_0046a930                   ; 0049c0ae
        ;   XREF to: 0046a930 (UNCONDITIONAL_CALL)  ; undefined FUN_0046a930()
    ADD ESP,0x8                         ; 0049c0b3
    XOR EBX,EBX                         ; 0049c0b6
    PUSH EBX                            ; 0049c0b8
    MOV ECX,dword ptr [0x0060b280]      ; 0049c0b9 | DAT_0060b280
    PUSH ECX                            ; 0049c0bf | DAT_01ba5c50
    CALL FUN_0046b8d0                   ; 0049c0c0
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b8d0()
    ADD ESP,0x8                         ; 0049c0c5
    MOV EBX,dword ptr [0x0060b280]      ; 0049c0c8 | DAT_0060b280
    PUSH EBX                            ; 0049c0ce | DAT_01ba5c50
    CALL thunk_FUN_004e9810             ; 0049c0cf
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e9810()
    ADD ESP,0x4                         ; 0049c0d4
    POP EDI                             ; 0049c0d7
    ADD ESP,0x9c                        ; 0049c0d8
    POP EBP                             ; 0049c0de
    POP ESI                             ; 0049c0df
    POP EBX                             ; 0049c0e0
    RET                                 ; 0049c0e1

