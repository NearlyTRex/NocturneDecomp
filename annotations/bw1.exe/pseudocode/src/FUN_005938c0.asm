; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005938c0(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   FUN_00593150 at 0059358c
;
; Referenced Globals:
;   undefined4 DAT_005f758f
;   undefined4 DAT_005f7597
;   undefined4 DAT_005f759f
;   undefined4 DAT_005f75a7
;   undefined4 DAT_005f75af
;   undefined4 DAT_005f75b7
;   undefined4 DAT_005f75bf
;   undefined4 DAT_005f75c3
;   undefined4 DAT_01d06ab4
;
; Called Functions:
;   FUN_0040cd60
;   FUN_00434c60
;   FUN_004ec350
;   FUN_00524770
;   FUN_005349a0
;   FUN_005351f0
;   FUN_005a7520
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005938c0
        ;   Label: FUN_005938c0
    PUSH ESI                            ; 005938c1
    PUSH EDI                            ; 005938c2
    PUSH EBP                            ; 005938c3
    MOV EBP,ESP                         ; 005938c4
    SUB ESP,0xe0                        ; 005938c6
    AND ESP,0xfffffff8                  ; 005938cc
    MOV EBX,dword ptr [EBP + 0x14]      ; 005938cf
    MOV ECX,0x3e800000                  ; 005938d2
    MOV ESI,0x3f490fdb                  ; 005938d7
    MOV EAX,[0x01d06ab4]                ; 005938dc | DAT_01d06ab4
    PUSH 0x30                           ; 005938e1
    XOR EDX,EDX                         ; 005938e3
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 005938e5
    PUSH EDX                            ; 005938ec
    MOV dword ptr [ESP + 0xc8],EAX      ; 005938ed
    LEA EAX,[EBX + 0xc1d8]              ; 005938f4
    MOV dword ptr [ESP + 0xd0],EDX      ; 005938fa
    PUSH EAX                            ; 00593901
    MOV dword ptr [ESP + 0xd8],ECX      ; 00593902
    MOV dword ptr [ESP + 0xc8],ESI      ; 00593909
    CALL FUN_005bfb70                   ; 00593910
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    MOV EDI,dword ptr [EBX + 0x1ffa8]   ; 00593915
    ADD ESP,0xc                         ; 0059391b
    TEST EDI,EDI                        ; 0059391e
    JZ 0x00593ddb                       ; 00593920
        ;   XREF to: 00593ddb (CONDITIONAL_JUMP)  ; LAB_00593ddb
    LEA EAX,[EBX + 0x20]                ; 00593926
    LEA EDI,[ESP + 0x14]                ; 00593929
    MOV ESI,dword ptr [0x01d06ab4]      ; 0059392d | DAT_01d06ab4
    FLD float ptr [EAX]                 ; 00593933
    FLD float ptr [EAX + 0x4]           ; 00593935
    MOV ESI,dword ptr [ESI*0x4 + 0x1d06aa4] ; 00593938
    FLD float ptr [EAX + 0x8]           ; 0059393f
    FXCH ST2                            ; 00593942
    FSUB float ptr [ESI + 0x20]         ; 00593944
    FXCH                                ; 00593947
    FSUB float ptr [ESI + 0x24]         ; 00593949
    FXCH ST2                            ; 0059394c
    FSUB float ptr [ESI + 0x28]         ; 0059394e
    FXCH                                ; 00593951
    FSTP float ptr [ESP + 0x68]         ; 00593953
    FXCH                                ; 00593957
    FSTP float ptr [ESP + 0x6c]         ; 00593959
    LEA ESI,[ESP + 0x68]                ; 0059395d
    FSTP float ptr [ESP + 0x70]         ; 00593961
    MOVSD ES:EDI,ESI                    ; 00593965
    MOVSD ES:EDI,ESI                    ; 00593966
    MOVSD ES:EDI,ESI                    ; 00593967
    FLD float ptr [ESP + 0x18]          ; 00593968
    FMUL ST0                            ; 0059396c
    FLD float ptr [ESP + 0x14]          ; 0059396e
    FMUL ST0                            ; 00593972
    FADDP                               ; 00593974
    FLD float ptr [ESP + 0x1c]          ; 00593976
    FMUL ST0                            ; 0059397a
    FADDP                               ; 0059397c
    FSQRT                               ; 0059397e
    MOV EAX,dword ptr [EBX + 0x1ffa8]   ; 00593980
    FSTP float ptr [ESP + 0xd4]         ; 00593986
    CMP EAX,0x3                         ; 0059398d
    JNZ 0x0059399b                      ; 00593990
        ;   XREF to: 0059399b (CONDITIONAL_JUMP)  ; LAB_0059399b
    XOR EDX,EDX                         ; 00593992
    MOV dword ptr [ESP + 0xd4],EDX      ; 00593994
    MOV EAX,[0x01d06ab4]                ; 0059399b | DAT_01d06ab4
        ;   Label: LAB_0059399b
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 005939a0
    MOV ECX,0x41a00000                  ; 005939a7
    PUSH EAX                            ; 005939ac
    MOV ESI,dword ptr [EAX + 0x154]     ; 005939ad
    MOV dword ptr [ESP + 0xbc],ECX      ; 005939b3
    CALL dword ptr [ESI + 0x148]        ; 005939ba
    ADD ESP,0x4                         ; 005939c0
    TEST EAX,EAX                        ; 005939c3
    JZ 0x005939d2                       ; 005939c5
        ;   XREF to: 005939d2 (CONDITIONAL_JUMP)  ; LAB_005939d2
    MOV dword ptr [ESP + 0xb8],0x41f00000 ; 005939c7
    FLD float ptr [ESP + 0xd4]          ; 005939d2
        ;   Label: LAB_005939d2
    FCOMP float ptr [ESP + 0xb8]        ; 005939d9
    FNSTSW AX                           ; 005939e0
    SAHF                                ; 005939e2
    JNC 0x00593a44                      ; 005939e3
        ;   XREF to: 00593a44 (CONDITIONAL_JUMP)  ; LAB_00593a44
    MOV EDI,dword ptr [EBX + 0x1ffa8]   ; 005939e5
    CMP EDI,0x2                         ; 005939eb
    JNZ 0x00593de2                      ; 005939ee
        ;   XREF to: 00593de2 (CONDITIONAL_JUMP)  ; LAB_00593de2
    LEA EAX,[ESP + 0xa4]                ; 005939f4
        ;   Label: LAB_005939f4
    PUSH EAX                            ; 005939fb
    MOV EDX,0x461c3f9a                  ; 005939fc
    PUSH EBX                            ; 00593a01
    MOV dword ptr [ESP + 0xac],EDX      ; 00593a02
    CALL FUN_004ec350                   ; 00593a09
        ;   XREF to: 004ec350 (UNCONDITIONAL_CALL)  ; undefined FUN_004ec350()
    MOV ESI,EAX                         ; 00593a0e
    ADD ESP,0x8                         ; 00593a10
    TEST EAX,EAX                        ; 00593a13
    JZ 0x00593df0                       ; 00593a15
        ;   XREF to: 00593df0 (CONDITIONAL_JUMP)  ; LAB_00593df0
    FLD float ptr [ESP + 0xa4]          ; 00593a1b
    FCOMP float ptr [ESP + 0xb8]        ; 00593a22
    FNSTSW AX                           ; 00593a29
    SAHF                                ; 00593a2b
    JNC 0x00593df0                      ; 00593a2c
        ;   XREF to: 00593df0 (CONDITIONAL_JUMP)  ; LAB_00593df0
    MOV dword ptr [ESP + 0xc0],ESI      ; 00593a32
    MOV dword ptr [ESP + 0xc8],0x1      ; 00593a39
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00593a44
        ;   Label: LAB_00593a44
    LEA EDI,[ESP + 0x50]                ; 00593a4b
    LEA EDX,[ESP + 0x50]                ; 00593a4f
    LEA ESI,[EBX + 0x20]                ; 00593a53
    FLD float ptr [EAX + 0x24]          ; 00593a56
    FLD float ptr [EAX + 0x28]          ; 00593a59
    FLD float ptr [EAX + 0x20]          ; 00593a5c
    LEA EAX,[ESP + 0x14]                ; 00593a5f
    FSUB float ptr [ESI]                ; 00593a63
    FXCH ST2                            ; 00593a65
    FSUB float ptr [ESI + 0x4]          ; 00593a67
    FXCH                                ; 00593a6a
    FSUB float ptr [ESI + 0x8]          ; 00593a6c
    FXCH ST2                            ; 00593a6f
    FSTP float ptr [ESP + 0x98]         ; 00593a71
    FSTP float ptr [ESP + 0x9c]         ; 00593a78
    LEA ESI,[ESP + 0x98]                ; 00593a7f
    FSTP float ptr [ESP + 0xa0]         ; 00593a86
    MOVSD ES:EDI,ESI                    ; 00593a8d
    MOVSD ES:EDI,ESI                    ; 00593a8e
    MOVSD ES:EDI,ESI                    ; 00593a8f
    CMP EAX,EDX                         ; 00593a90
    JZ 0x00593aac                       ; 00593a92
        ;   XREF to: 00593aac (CONDITIONAL_JUMP)  ; LAB_00593aac
    MOV EAX,dword ptr [ESP + 0x50]      ; 00593a94
    MOV dword ptr [ESP + 0x14],EAX      ; 00593a98
    MOV EAX,dword ptr [ESP + 0x54]      ; 00593a9c
    MOV dword ptr [ESP + 0x18],EAX      ; 00593aa0
    MOV EAX,dword ptr [ESP + 0x58]      ; 00593aa4
    MOV dword ptr [ESP + 0x1c],EAX      ; 00593aa8
    FLD float ptr [ESP + 0x18]          ; 00593aac
        ;   Label: LAB_00593aac
    FMUL ST0                            ; 00593ab0
    FLD float ptr [ESP + 0x14]          ; 00593ab2
    FMUL ST0                            ; 00593ab6
    FADDP                               ; 00593ab8
    FLD float ptr [ESP + 0x1c]          ; 00593aba
    FMUL ST0                            ; 00593abe
    FADDP                               ; 00593ac0
    FSQRT                               ; 00593ac2
    MOV dword ptr [EBX + 0x2508],0x0    ; 00593ac4
    FSTP float ptr [ESP + 0xd0]         ; 00593ace
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00593ad5
    FLD float ptr [ESP + 0xd0]          ; 00593adc
    MOV dword ptr [ESP + 0x10],EAX      ; 00593ae3
    FCOMP double ptr [0x005f758f]       ; 00593ae7 | DAT_005f758f
    FNSTSW AX                           ; 00593aed
    SAHF                                ; 00593aef
    JNC 0x00593eca                      ; 00593af0
        ;   XREF to: 00593eca (CONDITIONAL_JUMP)  ; LAB_00593eca
    MOV ECX,dword ptr [ESP + 0xc8]      ; 00593af6
    LEA EAX,[EBX + 0x158]               ; 00593afd
    CMP ECX,0x1                         ; 00593b03
    JNZ 0x00593e39                      ; 00593b06
        ;   XREF to: 00593e39 (CONDITIONAL_JUMP)  ; LAB_00593e39
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 00593b0c
    JNZ 0x00593e0c                      ; 00593b13
        ;   XREF to: 00593e0c (CONDITIONAL_JUMP)  ; LAB_00593e0c
    MOV dword ptr [EBX + 0xc1f0],ECX    ; 00593b19
    MOV dword ptr [EBX + 0x2fd0],0x0    ; 00593b1f
        ;   Label: LAB_00593b1f
    CMP dword ptr [ESP + 0xc8],0x1      ; 00593b29
        ;   Label: LAB_00593b29
    JNZ 0x00593c0d                      ; 00593b31
        ;   XREF to: 00593c0d (CONDITIONAL_JUMP)  ; LAB_00593c0d
    LEA EAX,[ESP + 0x14]                ; 00593b37
    PUSH EAX                            ; 00593b3b
    LEA ESI,[ESP + 0x3c]                ; 00593b3c
    LEA EDI,[ESP + 0x90]                ; 00593b40
    CALL FUN_005a7520                   ; 00593b47
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7520()
    LEA ESI,[ESP + 0x3c]                ; 00593b4c
    ADD ESP,0x4                         ; 00593b50
    MOVSD ES:EDI,ESI                    ; 00593b53
    MOVSD ES:EDI,ESI                    ; 00593b54
    MOVSD ES:EDI,ESI                    ; 00593b55
    FLD float ptr [ESP + 0x90]          ; 00593b56
    FSUB float ptr [EBX + 0x34]         ; 00593b5d
    SUB ESP,0x4                         ; 00593b60
    FSTP float ptr [ESP]                ; 00593b63
    CALL FUN_0040cd60                   ; 00593b66
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd60()
    MOV dword ptr [ESP + 0xe0],EAX      ; 00593b6b
    FLD float ptr [ESP + 0xe0]          ; 00593b72
    FMUL float ptr [0x005f7597]         ; 00593b79 | DAT_005f7597
    ADD ESP,0x4                         ; 00593b7f
    FMUL double ptr [0x005f759f]        ; 00593b82 | DAT_005f759f
    FLD float ptr [ESP + 0xcc]          ; 00593b88
    FCHS                                ; 00593b8f
    FSTP float ptr [ESP + 0xa8]         ; 00593b91
    FST float ptr [EBX + 0xc200]        ; 00593b98
    FCOMP float ptr [ESP + 0xa8]        ; 00593b9e
    FNSTSW AX                           ; 00593ba5
    SAHF                                ; 00593ba7
    JNC 0x00593bb7                      ; 00593ba8
        ;   XREF to: 00593bb7 (CONDITIONAL_JUMP)  ; LAB_00593bb7
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00593baa
    MOV dword ptr [EBX + 0xc200],EAX    ; 00593bb1
    FLD float ptr [EBX + 0xc200]        ; 00593bb7
        ;   Label: LAB_00593bb7
    FCOMP float ptr [ESP + 0xcc]        ; 00593bbd
    FNSTSW AX                           ; 00593bc4
    SAHF                                ; 00593bc6
    JBE 0x00593bd6                      ; 00593bc7
        ;   XREF to: 00593bd6 (CONDITIONAL_JUMP)  ; LAB_00593bd6
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00593bc9
    MOV dword ptr [EBX + 0xc200],EAX    ; 00593bd0
    FLD float ptr [EBX + 0xc200]        ; 00593bd6
        ;   Label: LAB_00593bd6
    FST double ptr [ESP + 0x8]          ; 00593bdc
    FCOMP double ptr [0x005f75af]       ; 00593be0 | DAT_005f75af
    FNSTSW AX                           ; 00593be6
    SAHF                                ; 00593be8
    JBE 0x00593c0d                      ; 00593be9
        ;   XREF to: 00593c0d (CONDITIONAL_JUMP)  ; LAB_00593c0d
    FLD double ptr [ESP + 0x8]          ; 00593beb
    FCOMP double ptr [0x005f75b7]       ; 00593bef | DAT_005f75b7
    FNSTSW AX                           ; 00593bf5
    SAHF                                ; 00593bf7
    JNC 0x00593c0d                      ; 00593bf8
        ;   XREF to: 00593c0d (CONDITIONAL_JUMP)  ; LAB_00593c0d
    CMP dword ptr [EBX + 0xc1e4],0x0    ; 00593bfa
    JZ 0x00593c0d                       ; 00593c01
        ;   XREF to: 00593c0d (CONDITIONAL_JUMP)  ; LAB_00593c0d
    MOV dword ptr [EBX + 0xc200],0x0    ; 00593c03
    FLDZ                                ; 00593c0d
        ;   Label: LAB_00593c0d
    FLD float ptr [EBX + 0x2508]        ; 00593c0f
    FSTP double ptr [ESP]               ; 00593c15
    FCOMP double ptr [ESP]              ; 00593c18
    FNSTSW AX                           ; 00593c1b
    SAHF                                ; 00593c1d
    JNC 0x00594073                      ; 00593c1e
        ;   XREF to: 00594073 (CONDITIONAL_JUMP)  ; LAB_00594073
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00593c24
    MOV dword ptr [EBX + 0x2508],0x0    ; 00593c2b
    MOV dword ptr [EBX + 0xc200],EAX    ; 00593c35
    MOV ESI,dword ptr [ESP + 0xc0]      ; 00593c3b
        ;   Label: LAB_00593c3b
    LEA EDI,[ESP + 0x5c]                ; 00593c42
    LEA EAX,[EBX + 0x20]                ; 00593c46
    FLD float ptr [ESI + 0x24]          ; 00593c49
    FLD float ptr [ESI + 0x28]          ; 00593c4c
    FLD float ptr [ESI + 0x20]          ; 00593c4f
    LEA ESI,[ESP + 0x74]                ; 00593c52
    FSUB float ptr [EAX]                ; 00593c56
    FXCH ST2                            ; 00593c58
    FSUB float ptr [EAX + 0x4]          ; 00593c5a
    FXCH                                ; 00593c5d
    FSUB float ptr [EAX + 0x8]          ; 00593c5f
    FXCH ST2                            ; 00593c62
    FSTP float ptr [ESP + 0x74]         ; 00593c64
    FSTP float ptr [ESP + 0x78]         ; 00593c68
    FSTP float ptr [ESP + 0x7c]         ; 00593c6c
    MOVSD ES:EDI,ESI                    ; 00593c70
    MOVSD ES:EDI,ESI                    ; 00593c71
    MOVSD ES:EDI,ESI                    ; 00593c72
    LEA EAX,[ESP + 0x14]                ; 00593c73
    LEA ESI,[ESP + 0x5c]                ; 00593c77
    CMP EAX,ESI                         ; 00593c7b
    JZ 0x00593c97                       ; 00593c7d
        ;   XREF to: 00593c97 (CONDITIONAL_JUMP)  ; LAB_00593c97
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00593c7f
    MOV dword ptr [ESP + 0x14],EAX      ; 00593c83
    MOV EAX,dword ptr [ESP + 0x60]      ; 00593c87
    MOV dword ptr [ESP + 0x18],EAX      ; 00593c8b
    MOV EAX,dword ptr [ESP + 0x64]      ; 00593c8f
    MOV dword ptr [ESP + 0x1c],EAX      ; 00593c93
    LEA EAX,[ESP + 0x14]                ; 00593c97
        ;   Label: LAB_00593c97
    PUSH EAX                            ; 00593c9b
    LEA ESI,[ESP + 0x48]                ; 00593c9c
    LEA EDI,[ESP + 0x84]                ; 00593ca0
    CALL FUN_005a7520                   ; 00593ca7
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7520()
    LEA ESI,[ESP + 0x48]                ; 00593cac
    ADD ESP,0x4                         ; 00593cb0
    MOVSD ES:EDI,ESI                    ; 00593cb3
    MOVSD ES:EDI,ESI                    ; 00593cb4
    MOVSD ES:EDI,ESI                    ; 00593cb5
    LEA EAX,[ESP + 0x14]                ; 00593cb6
    LEA ESI,[ESP + 0x80]                ; 00593cba
    CMP EAX,ESI                         ; 00593cc1
    JZ 0x00593ce6                       ; 00593cc3
        ;   XREF to: 00593ce6 (CONDITIONAL_JUMP)  ; LAB_00593ce6
    MOV EAX,dword ptr [ESP + 0x80]      ; 00593cc5
    MOV dword ptr [ESP + 0x14],EAX      ; 00593ccc
    MOV EAX,dword ptr [ESP + 0x84]      ; 00593cd0
    MOV dword ptr [ESP + 0x18],EAX      ; 00593cd7
    MOV EAX,dword ptr [ESP + 0x88]      ; 00593cdb
    MOV dword ptr [ESP + 0x1c],EAX      ; 00593ce2
    FLD float ptr [ESP + 0x18]          ; 00593ce6
        ;   Label: LAB_00593ce6
    FSUB float ptr [EBX + 0x34]         ; 00593cea
    SUB ESP,0x4                         ; 00593ced
    FSTP float ptr [ESP]                ; 00593cf0
    CALL FUN_0040cd60                   ; 00593cf3
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd60()
    MOV dword ptr [ESP + 0xe0],EAX      ; 00593cf8
    FLD float ptr [ESP + 0xe0]          ; 00593cff
    ADD ESP,0x4                         ; 00593d06
    FST float ptr [ESP + 0x30]          ; 00593d09
    FCOMP float ptr [ESP + 0xbc]        ; 00593d0d
    FNSTSW AX                           ; 00593d14
    SAHF                                ; 00593d16
    JBE 0x00593d24                      ; 00593d17
        ;   XREF to: 00593d24 (CONDITIONAL_JUMP)  ; LAB_00593d24
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00593d19
    MOV dword ptr [ESP + 0x30],EAX      ; 00593d20
    FLD float ptr [ESP + 0x30]          ; 00593d24
        ;   Label: LAB_00593d24
    FLD float ptr [ESP + 0xbc]          ; 00593d28
    FCHS                                ; 00593d2f
    FSTP float ptr [ESP + 0xd8]         ; 00593d31
    FCOMP float ptr [ESP + 0xd8]        ; 00593d38
    FNSTSW AX                           ; 00593d3f
    SAHF                                ; 00593d41
    JNC 0x00593d4f                      ; 00593d42
        ;   XREF to: 00593d4f (CONDITIONAL_JUMP)  ; LAB_00593d4f
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00593d44
    MOV dword ptr [ESP + 0x30],EAX      ; 00593d4b
    FLD float ptr [EBP + 0x18]          ; 00593d4f
        ;   Label: LAB_00593d4f
    FLD float ptr [ESP + 0x30]          ; 00593d52
    FSUB float ptr [EBX + 0x9561c]      ; 00593d56
    FXCH                                ; 00593d5c
    FMUL float ptr [0x005f75bf]         ; 00593d5e | DAT_005f75bf
    FXCH                                ; 00593d64
    FSTP float ptr [ESP + 0xc4]         ; 00593d66
    FSTP float ptr [ESP + 0xb0]         ; 00593d6d
    FLD float ptr [ESP + 0xc4]          ; 00593d74
    FCOMP float ptr [ESP + 0xb0]        ; 00593d7b
    FNSTSW AX                           ; 00593d82
    SAHF                                ; 00593d84
    JBE 0x00593d95                      ; 00593d85
        ;   XREF to: 00593d95 (CONDITIONAL_JUMP)  ; LAB_00593d95
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00593d87
    MOV dword ptr [ESP + 0xc4],EAX      ; 00593d8e
    FLD float ptr [EBP + 0x18]          ; 00593d95
        ;   Label: LAB_00593d95
    FMUL float ptr [0x005f75c3]         ; 00593d98 | DAT_005f75c3
    FLD float ptr [ESP + 0xc4]          ; 00593d9e
    FXCH                                ; 00593da5
    FSTP float ptr [ESP + 0xac]         ; 00593da7
    FCOMP float ptr [ESP + 0xac]        ; 00593dae
    FNSTSW AX                           ; 00593db5
    SAHF                                ; 00593db7
    JNC 0x00593dc8                      ; 00593db8
        ;   XREF to: 00593dc8 (CONDITIONAL_JUMP)  ; LAB_00593dc8
    MOV EAX,dword ptr [ESP + 0xac]      ; 00593dba
    MOV dword ptr [ESP + 0xc4],EAX      ; 00593dc1
    FLD float ptr [EBX + 0x9561c]       ; 00593dc8
        ;   Label: LAB_00593dc8
    FADD float ptr [ESP + 0xc4]         ; 00593dce
    FSTP float ptr [EBX + 0x9561c]      ; 00593dd5
    MOV ESP,EBP                         ; 00593ddb
        ;   Label: LAB_00593ddb
    POP EBP                             ; 00593ddd
    POP EDI                             ; 00593dde
    POP ESI                             ; 00593ddf
    POP EBX                             ; 00593de0
    RET                                 ; 00593de1
    CMP EDI,0x3                         ; 00593de2
        ;   Label: LAB_00593de2
    JZ 0x005939f4                       ; 00593de5
        ;   XREF to: 005939f4 (CONDITIONAL_JUMP)  ; LAB_005939f4
    JMP 0x00593a44                      ; 00593deb
        ;   XREF to: 00593a44 (UNCONDITIONAL_JUMP)  ; LAB_00593a44
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 00593df0
        ;   Label: LAB_00593df0
    JZ 0x00593a44                       ; 00593df7
        ;   XREF to: 00593a44 (CONDITIONAL_JUMP)  ; LAB_00593a44
    MOV dword ptr [EBX + 0xc1f0],0x1    ; 00593dfd
    JMP 0x00593a44                      ; 00593e07
        ;   XREF to: 00593a44 (UNCONDITIONAL_JUMP)  ; LAB_00593a44
    PUSH EAX                            ; 00593e0c
        ;   Label: LAB_00593e0c
    CALL FUN_00524770                   ; 00593e0d
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00593e12
    ADD ESP,0x4                         ; 00593e15
    CMP EAX,0x2                         ; 00593e18
    JZ 0x00593b1f                       ; 00593e1b
        ;   XREF to: 00593b1f (CONDITIONAL_JUMP)  ; LAB_00593b1f
    CMP EAX,0x1                         ; 00593e21
    JZ 0x00593b1f                       ; 00593e24
        ;   XREF to: 00593b1f (CONDITIONAL_JUMP)  ; LAB_00593b1f
    MOV dword ptr [EBX + 0xc1e4],0x1    ; 00593e2a
    JMP 0x00593b1f                      ; 00593e34
        ;   XREF to: 00593b1f (UNCONDITIONAL_JUMP)  ; LAB_00593b1f
    PUSH EAX                            ; 00593e39
        ;   Label: LAB_00593e39
    CALL FUN_00524770                   ; 00593e3a
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00593e3f
    ADD ESP,0x4                         ; 00593e42
    CMP EAX,0xa                         ; 00593e45
    JNZ 0x00593e5d                      ; 00593e48
        ;   XREF to: 00593e5d (CONDITIONAL_JUMP)  ; LAB_00593e5d
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 00593e4a
    JZ 0x00593e5d                       ; 00593e51
        ;   XREF to: 00593e5d (CONDITIONAL_JUMP)  ; LAB_00593e5d
    MOV dword ptr [EBX + 0xc1f0],0x1    ; 00593e53
    MOV EAX,[0x01d06ab4]                ; 00593e5d | DAT_01d06ab4
        ;   Label: LAB_00593e5d
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 00593e62
    PUSH EAX                            ; 00593e69
    MOV EDX,dword ptr [EAX + 0x154]     ; 00593e6a
    CALL dword ptr [EDX + 0x148]        ; 00593e70
    ADD ESP,0x4                         ; 00593e76
    TEST EAX,EAX                        ; 00593e79
    JNZ 0x00593b29                      ; 00593e7b
        ;   XREF to: 00593b29 (CONDITIONAL_JUMP)  ; LAB_00593b29
    PUSH dword ptr [EBP + 0x18]         ; 00593e81
    PUSH EBX                            ; 00593e84
    CALL FUN_00434c60                   ; 00593e85
        ;   XREF to: 00434c60 (UNCONDITIONAL_CALL)  ; undefined FUN_00434c60()
    ADD ESP,0x8                         ; 00593e8a
    CMP EAX,0x1                         ; 00593e8d
    JC 0x00593b29                       ; 00593e90
        ;   XREF to: 00593b29 (CONDITIONAL_JUMP)  ; LAB_00593b29
    JA 0x00593ec0                       ; 00593e96
        ;   XREF to: 00593ec0 (CONDITIONAL_JUMP)  ; LAB_00593ec0
    MOV dword ptr [EBX + 0xc1d8],0x1    ; 00593e98
    JMP 0x00593b29                      ; 00593ea2
        ;   XREF to: 00593b29 (UNCONDITIONAL_JUMP)  ; LAB_00593b29
    MOV dword ptr [EBX + 0xc1e0],0x1    ; 00593ea7
        ;   Label: LAB_00593ea7
    MOV dword ptr [EBX + 0xc1d8],0x1    ; 00593eb1
    JMP 0x00593b29                      ; 00593ebb
        ;   XREF to: 00593b29 (UNCONDITIONAL_JUMP)  ; LAB_00593b29
    CMP EAX,0x2                         ; 00593ec0
        ;   Label: LAB_00593ec0
    JZ 0x00593ea7                       ; 00593ec3
        ;   XREF to: 00593ea7 (CONDITIONAL_JUMP)  ; LAB_00593ea7
    JMP 0x00593b29                      ; 00593ec5
        ;   XREF to: 00593b29 (UNCONDITIONAL_JUMP)  ; LAB_00593b29
    MOV EDI,dword ptr [ESP + 0xc8]      ; 00593eca
        ;   Label: LAB_00593eca
    XOR ESI,ESI                         ; 00593ed1
    TEST EDI,EDI                        ; 00593ed3
    JNZ 0x0059403d                      ; 00593ed5
        ;   XREF to: 0059403d (CONDITIONAL_JUMP)  ; LAB_0059403d
    MOV EAX,[0x01d06ab4]                ; 00593edb | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 00593ee0
    PUSH EAX                            ; 00593ee7
    MOV ESI,dword ptr [EAX + 0x154]     ; 00593ee8
    CALL dword ptr [ESI + 0xc4]         ; 00593eee
    MOV ESI,EAX                         ; 00593ef4
    MOV EAX,[0x01d06ab4]                ; 00593ef6 | DAT_01d06ab4
    ADD ESP,0x4                         ; 00593efb
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 00593efe
    PUSH EAX                            ; 00593f05
    MOV EDX,dword ptr [EAX + 0x154]     ; 00593f06
    CALL dword ptr [EDX + 0x148]        ; 00593f0c
    ADD ESP,0x4                         ; 00593f12
    TEST EAX,EAX                        ; 00593f15
    JZ 0x0059401c                       ; 00593f17
        ;   XREF to: 0059401c (CONDITIONAL_JUMP)  ; LAB_0059401c
    TEST ESI,ESI                        ; 00593f1d
        ;   Label: LAB_00593f1d
    JNZ 0x00593f36                      ; 00593f1f
        ;   XREF to: 00593f36 (CONDITIONAL_JUMP)  ; LAB_00593f36
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00593f21
    ADD EAX,0x20                        ; 00593f28
    PUSH EAX                            ; 00593f2b
    CALL FUN_005351f0                   ; 00593f2c
        ;   XREF to: 005351f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005351f0()
    ADD ESP,0x4                         ; 00593f31
    MOV ESI,EAX                         ; 00593f34
    MOV EAX,dword ptr [EBX + 0x6c]      ; 00593f36
        ;   Label: LAB_00593f36
    PUSH EAX                            ; 00593f39
    LEA EAX,[ESP + 0x24]                ; 00593f3a
    PUSH EAX                            ; 00593f3e
    LEA EAX,[EBX + 0x20]                ; 00593f3f
    PUSH EAX                            ; 00593f42
    PUSH ESI                            ; 00593f43
    CALL FUN_005349a0                   ; 00593f44
        ;   XREF to: 005349a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005349a0()
    ADD ESP,0x10                        ; 00593f49
    TEST EAX,EAX                        ; 00593f4c
    JZ 0x00593c0d                       ; 00593f4e
        ;   XREF to: 00593c0d (CONDITIONAL_JUMP)  ; LAB_00593c0d
    FLD float ptr [ESP + 0x24]          ; 00593f54
    FSUB float ptr [EBX + 0x34]         ; 00593f58
    SUB ESP,0x4                         ; 00593f5b
    FSTP float ptr [ESP]                ; 00593f5e
    CALL FUN_0040cd60                   ; 00593f61
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd60()
    MOV dword ptr [ESP + 0xe0],EAX      ; 00593f66
    FLD float ptr [ESP + 0xe0]          ; 00593f6d
    FMUL float ptr [0x005f7597]         ; 00593f74 | DAT_005f7597
    ADD ESP,0x4                         ; 00593f7a
    FMUL double ptr [0x005f759f]        ; 00593f7d | DAT_005f759f
    FLD float ptr [ESP + 0xcc]          ; 00593f83
    FCHS                                ; 00593f8a
    FSTP float ptr [ESP + 0xb4]         ; 00593f8c
    FST float ptr [EBX + 0xc200]        ; 00593f93
    FCOMP float ptr [ESP + 0xb4]        ; 00593f99
    FNSTSW AX                           ; 00593fa0
    SAHF                                ; 00593fa2
    JC 0x00594048                       ; 00593fa3
        ;   XREF to: 00594048 (CONDITIONAL_JUMP)  ; LAB_00594048
    FLD float ptr [EBX + 0xc200]        ; 00593fa9
        ;   Label: LAB_00593fa9
    FCOMP float ptr [ESP + 0xcc]        ; 00593faf
    FNSTSW AX                           ; 00593fb6
    SAHF                                ; 00593fb8
    JBE 0x00593fc8                      ; 00593fb9
        ;   XREF to: 00593fc8 (CONDITIONAL_JUMP)  ; LAB_00593fc8
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00593fbb
    MOV dword ptr [EBX + 0xc200],EAX    ; 00593fc2
    FLD float ptr [ESP + 0x10]          ; 00593fc8
        ;   Label: LAB_00593fc8
    FCOMP double ptr [0x005f75a7]       ; 00593fcc | DAT_005f75a7
    FNSTSW AX                           ; 00593fd2
    SAHF                                ; 00593fd4
    JNC 0x0059405a                      ; 00593fd5
        ;   XREF to: 0059405a (CONDITIONAL_JUMP)  ; LAB_0059405a
    CMP dword ptr [ESP + 0xc8],0x1      ; 00593fdb
    JZ 0x0059405a                       ; 00593fe3
        ;   XREF to: 0059405a (CONDITIONAL_JUMP)  ; LAB_0059405a
    MOV dword ptr [EBX + 0xc1d8],0x1    ; 00593fe5
    JMP 0x00593c0d                      ; 00593fef
        ;   XREF to: 00593c0d (UNCONDITIONAL_JUMP)  ; LAB_00593c0d
    MOV dword ptr [EBX + 0xc1d8],0x1    ; 00593ff4
        ;   Label: LAB_00593ff4
    JMP 0x00593f1d                      ; 00593ffe
        ;   XREF to: 00593f1d (UNCONDITIONAL_JUMP)  ; LAB_00593f1d
    MOV dword ptr [EBX + 0xc1e0],0x1    ; 00594003
        ;   Label: LAB_00594003
    MOV dword ptr [EBX + 0xc1d8],0x1    ; 0059400d
    JMP 0x00593f1d                      ; 00594017
        ;   XREF to: 00593f1d (UNCONDITIONAL_JUMP)  ; LAB_00593f1d
    PUSH dword ptr [EBP + 0x18]         ; 0059401c
        ;   Label: LAB_0059401c
    PUSH EBX                            ; 0059401f
    CALL FUN_00434c60                   ; 00594020
        ;   XREF to: 00434c60 (UNCONDITIONAL_CALL)  ; undefined FUN_00434c60()
    ADD ESP,0x8                         ; 00594025
    CMP EAX,0x1                         ; 00594028
    JC 0x00593f1d                       ; 0059402b
        ;   XREF to: 00593f1d (CONDITIONAL_JUMP)  ; LAB_00593f1d
    JBE 0x00593ff4                      ; 00594031
        ;   XREF to: 00593ff4 (CONDITIONAL_JUMP)  ; LAB_00593ff4
    CMP EAX,0x2                         ; 00594033
    JZ 0x00594003                       ; 00594036
        ;   XREF to: 00594003 (CONDITIONAL_JUMP)  ; LAB_00594003
    JMP 0x00593f1d                      ; 00594038
        ;   XREF to: 00593f1d (UNCONDITIONAL_JUMP)  ; LAB_00593f1d
    MOV dword ptr [EBX + 0x2fd0],ESI    ; 0059403d
        ;   Label: LAB_0059403d
    JMP 0x00593f1d                      ; 00594043
        ;   XREF to: 00593f1d (UNCONDITIONAL_JUMP)  ; LAB_00593f1d
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00594048
        ;   Label: LAB_00594048
    MOV dword ptr [EBX + 0xc200],EAX    ; 0059404f
    JMP 0x00593fa9                      ; 00594055
        ;   XREF to: 00593fa9 (UNCONDITIONAL_JUMP)  ; LAB_00593fa9
    MOV dword ptr [EBX + 0xc1e0],0x1    ; 0059405a
        ;   Label: LAB_0059405a
    MOV dword ptr [EBX + 0xc1d8],0x1    ; 00594064
    JMP 0x00593c0d                      ; 0059406e
        ;   XREF to: 00593c0d (UNCONDITIONAL_JUMP)  ; LAB_00593c0d
    JBE 0x00593c3b                      ; 00594073
        ;   XREF to: 00593c3b (CONDITIONAL_JUMP)  ; LAB_00593c3b
        ;   Label: LAB_00594073
    FLD float ptr [ESP + 0xcc]          ; 00594079
    MOV dword ptr [EBX + 0x2508],0x0    ; 00594080
    FCHS                                ; 0059408a
    FSTP float ptr [EBX + 0xc200]       ; 0059408c
    JMP 0x00593c3b                      ; 00594092
        ;   XREF to: 00593c3b (UNCONDITIONAL_JUMP)  ; LAB_00593c3b

