; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00554980(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined8       Stack[-0x38]:8  local_38
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
;   FUN_004a6010 at 004a63de
;
; Referenced Globals:
;   undefined4 s_noLightningFlash_00597c18+1
;   string s_noLightningFlash_00597c2a
;   string s_rain.wav_@_.1_00597c3b
;   undefined4 DAT_00597c49
;   undefined4 DAT_00597c51
;   undefined4 DAT_00597c59
;   undefined4 DAT_00597c61
;   undefined4 DAT_00597c69
;   undefined4 DAT_005b7650
;   undefined4 DAT_005b80f0
;   undefined4 DAT_005b9354
;   undefined4 DAT_005bed68
;   undefined4 DAT_01c77850
;   undefined4 DAT_01fb96f0
;   undefined4 DAT_02de0770
;
; Called Functions:
;   FUN_0040dda0
;   FUN_0040dea0
;   FUN_00446740
;   FUN_0047dc30
;   FUN_0048c760
;   FUN_00526c50
;   FUN_00527230
;   FUN_0052ea40
;   FUN_00554d40
;   FUN_00554fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554980
        ;   Label: FUN_00554980
    PUSH ESI                            ; 00554981
    PUSH EDI                            ; 00554982
    PUSH EBP                            ; 00554983
    MOV EBP,ESP                         ; 00554984
    SUB ESP,0x28                        ; 00554986
    AND ESP,0xfffffff8                  ; 00554989
    MOV EAX,[0x005b9354]                ; 0055498c | DAT_005b9354
    MOV EAX,dword ptr [EAX + 0x264]     ; 00554991 | DAT_01c77850
    MOV dword ptr [ESP + 0x1c],EAX      ; 00554997
    MOV dword ptr [ESP + 0x8],EAX       ; 0055499b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0055499f
    CMP dword ptr [EAX + 0x24],0x0      ; 005549a2
    JNZ 0x00554b77                      ; 005549a6
        ;   XREF to: 00554b77 (CONDITIONAL_JUMP)  ; LAB_00554b77
    MOV EAX,dword ptr [EBP + 0x14]      ; 005549ac
        ;   Label: LAB_005549ac
    CMP dword ptr [EAX],0x0             ; 005549af
    JZ 0x00554c22                       ; 005549b2
        ;   XREF to: 00554c22 (CONDITIONAL_JUMP)  ; LAB_00554c22
    XOR ESI,ESI                         ; 005549b8
    XOR EDI,EDI                         ; 005549ba
    XOR EBX,EBX                         ; 005549bc
    XOR AH,AH                           ; 005549be
        ;   Label: LAB_005549be
    MOV byte ptr [ESI + 0x2de06a8],AH   ; 005549c0
    MOV EAX,dword ptr [EBP + 0x14]      ; 005549c6
    FLD float ptr [EAX + 0x4]           ; 005549c9
    FMUL float ptr [ESP + 0x8]          ; 005549cc
    FSUBR float ptr [EBX + 0x2ddfa2c]   ; 005549d0
    FST float ptr [EBX + 0x2ddfa2c]     ; 005549d6
    FCOMP float ptr [EDI + 0x2de0388]   ; 005549dc
    FNSTSW AX                           ; 005549e2
    SAHF                                ; 005549e4
    JNC 0x00554a89                      ; 005549e5
        ;   XREF to: 00554a89 (CONDITIONAL_JUMP)  ; LAB_00554a89
    FLD float ptr [EBX + 0x2ddfa2c]     ; 005549eb
    FADD float ptr [0x00597c69]         ; 005549f1 | DAT_00597c69
    MOV EAX,dword ptr [EBP + 0x14]      ; 005549f7
    FSTP float ptr [EBX + 0x2ddfa2c]    ; 005549fa
    CMP dword ptr [EAX],0x1             ; 00554a00
    JNZ 0x00554a89                      ; 00554a03
        ;   XREF to: 00554a89 (CONDITIONAL_JUMP)  ; LAB_00554a89
    MOV EDX,0x2ddfa28                   ; 00554a09
    ADD EDX,EBX                         ; 00554a0e
    MOV EAX,dword ptr [EDX]             ; 00554a10
    MOV dword ptr [ESP + 0x10],EAX      ; 00554a12
    LEA EAX,[EDX + 0x4]                 ; 00554a16
    MOV EAX,dword ptr [EAX]             ; 00554a19
    MOV dword ptr [ESP + 0x14],EAX      ; 00554a1b
    LEA EAX,[EDX + 0x8]                 ; 00554a1f
    MOV EAX,dword ptr [EAX]             ; 00554a22
    MOV dword ptr [ESP + 0x18],EAX      ; 00554a24
    MOV EAX,dword ptr [EDI + 0x2de0388] ; 00554a28
    PUSH 0x0                            ; 00554a2e
    MOV dword ptr [ESP + 0x18],EAX      ; 00554a30
    LEA EAX,[ESP + 0x14]                ; 00554a34
    PUSH EAX                            ; 00554a38
    MOV ECX,dword ptr [0x005b80f0]      ; 00554a39 | DAT_005b80f0
    PUSH ECX                            ; 00554a3f
    CALL FUN_0048c760                   ; 00554a40
        ;   XREF to: 0048c760 (UNCONDITIONAL_CALL)  ; undefined FUN_0048c760()
    ADD ESP,0xc                         ; 00554a45
    PUSH 0x0                            ; 00554a48
    LEA EAX,[ESP + 0x14]                ; 00554a4a
    PUSH EAX                            ; 00554a4e
    MOV EAX,[0x005b80f0]                ; 00554a4f | DAT_005b80f0
    PUSH EAX                            ; 00554a54
    CALL FUN_0048c760                   ; 00554a55
        ;   XREF to: 0048c760 (UNCONDITIONAL_CALL)  ; undefined FUN_0048c760()
    ADD ESP,0xc                         ; 00554a5a
    PUSH 0x0                            ; 00554a5d
    LEA EAX,[ESP + 0x14]                ; 00554a5f
    PUSH EAX                            ; 00554a63
    MOV EDX,dword ptr [0x005b80f0]      ; 00554a64 | DAT_005b80f0
    PUSH EDX                            ; 00554a6a
    CALL FUN_0048c760                   ; 00554a6b
        ;   XREF to: 0048c760 (UNCONDITIONAL_CALL)  ; undefined FUN_0048c760()
    ADD ESP,0xc                         ; 00554a70
    PUSH 0x0                            ; 00554a73
    LEA EAX,[ESP + 0x14]                ; 00554a75
    PUSH EAX                            ; 00554a79
    MOV ECX,dword ptr [0x005b80f0]      ; 00554a7a | DAT_005b80f0
    PUSH ECX                            ; 00554a80
    CALL FUN_0048c760                   ; 00554a81
        ;   XREF to: 0048c760 (UNCONDITIONAL_CALL)  ; undefined FUN_0048c760()
    ADD ESP,0xc                         ; 00554a86
    ADD EBX,0xc                         ; 00554a89
        ;   Label: LAB_00554a89
    INC ESI                             ; 00554a8c
    ADD EDI,0x4                         ; 00554a8d
    CMP ESI,0xc8                        ; 00554a90
    JL 0x005549be                       ; 00554a96
        ;   XREF to: 005549be (CONDITIONAL_JUMP)  ; LAB_005549be
    MOV EAX,dword ptr [EBP + 0x14]      ; 00554a9c
    MOV EBX,dword ptr [EAX]             ; 00554a9f
    CMP EBX,0x1                         ; 00554aa1
    JNZ 0x00554b70                      ; 00554aa4
        ;   XREF to: 00554b70 (CONDITIONAL_JUMP)  ; LAB_00554b70
    FLD float ptr [EAX + 0x20]          ; 00554aaa
    FSUB float ptr [ESP + 0x8]          ; 00554aad
    FST float ptr [EAX + 0x20]          ; 00554ab1
    FLDZ                                ; 00554ab4
    FCOMPP                              ; 00554ab6
    FNSTSW AX                           ; 00554ab8
    SAHF                                ; 00554aba
    JA 0x00554c38                       ; 00554abb
        ;   XREF to: 00554c38 (CONDITIONAL_JUMP)  ; LAB_00554c38
    MOV EAX,dword ptr [EBP + 0x14]      ; 00554ac1
    FLD float ptr [EAX + 0x2c]          ; 00554ac4
    FSUB float ptr [ESP + 0x8]          ; 00554ac7
    FST float ptr [EAX + 0x2c]          ; 00554acb
    FLDZ                                ; 00554ace
    FCOMPP                              ; 00554ad0
    FNSTSW AX                           ; 00554ad2
    SAHF                                ; 00554ad4
    JBE 0x00554b14                      ; 00554ad5
        ;   XREF to: 00554b14 (CONDITIONAL_JUMP)  ; LAB_00554b14
    MOV EAX,dword ptr [EBP + 0x14]      ; 00554ad7
    PUSH dword ptr [EAX + 0x34]         ; 00554ada
    PUSH 0x3dcccccd                     ; 00554add
    CALL FUN_0040dda0                   ; 00554ae2
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0x2c],EAX      ; 00554ae7
    FLD float ptr [ESP + 0x2c]          ; 00554aeb
    ADD ESP,0x8                         ; 00554aef
    PUSH 0x597c2a                       ; 00554af2 | = "noLightningFlash"
    MOV ESI,dword ptr [0x005b7650]      ; 00554af7 | DAT_005b7650
    MOV EAX,dword ptr [EBP + 0x14]      ; 00554afd
    PUSH ESI                            ; 00554b00
    FSTP float ptr [EAX + 0x2c]         ; 00554b01
    CALL FUN_0047dc30                   ; 00554b04
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined FUN_0047dc30()
    ADD ESP,0x8                         ; 00554b09
    TEST EAX,EAX                        ; 00554b0c
    JZ 0x00554c71                       ; 00554b0e
        ;   XREF to: 00554c71 (CONDITIONAL_JUMP)  ; LAB_00554c71
    MOV EAX,dword ptr [EBP + 0x14]      ; 00554b14
        ;   Label: LAB_00554b14
    FLD float ptr [EAX + 0x34]          ; 00554b17
    FST double ptr [ESP]                ; 00554b1a
    FCOMP double ptr [0x00597c59]       ; 00554b1d | DAT_00597c59
    FNSTSW AX                           ; 00554b23
    SAHF                                ; 00554b25
    JNC 0x00554d0c                      ; 00554b26
        ;   XREF to: 00554d0c (CONDITIONAL_JUMP)  ; LAB_00554d0c
    FLD double ptr [ESP]                ; 00554b2c
    FLDLN2                              ; 00554b2f
    FXCH                                ; 00554b31
    FYL2X                               ; 00554b33
    FLD float ptr [ESP + 0x8]           ; 00554b35
    FMUL double ptr [0x00597c61]        ; 00554b39 | DAT_00597c61
    FADDP                               ; 00554b3f
    FLD1                                ; 00554b41
    FLDL2E                              ; 00554b43
    FMUL ST2                            ; 00554b45
    FST ST2                             ; 00554b47
    FPREM                               ; 00554b49
    F2XM1                               ; 00554b4b
    FADDP                               ; 00554b4d
    FSCALE                              ; 00554b4f
    FSTP ST1                            ; 00554b51
    MOV EAX,dword ptr [EBP + 0x14]      ; 00554b53
    FSTP float ptr [EAX + 0x34]         ; 00554b56
    MOV ECX,dword ptr [0x02de0770]      ; 00554b59 | DAT_02de0770
        ;   Label: LAB_00554b59
    PUSH ECX                            ; 00554b5f
    CALL FUN_00526c50                   ; 00554b60
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00526c50()
    ADD ESP,0x4                         ; 00554b65
    TEST EAX,EAX                        ; 00554b68
    JZ 0x00554d1b                       ; 00554b6a
        ;   XREF to: 00554d1b (CONDITIONAL_JUMP)  ; LAB_00554d1b
    MOV ESP,EBP                         ; 00554b70
        ;   Label: LAB_00554b70
    POP EBP                             ; 00554b72
    POP EDI                             ; 00554b73
    POP ESI                             ; 00554b74
    POP EBX                             ; 00554b75
    RET                                 ; 00554b76
    FLD float ptr [EAX + 0x28]          ; 00554b77
        ;   Label: LAB_00554b77
    FSUB float ptr [ESP + 0x1c]         ; 00554b7a
    FST float ptr [EAX + 0x28]          ; 00554b7e
    FLDZ                                ; 00554b81
    FCOMPP                              ; 00554b83
    FNSTSW AX                           ; 00554b85
    SAHF                                ; 00554b87
    JA 0x00554bf9                       ; 00554b88
        ;   XREF to: 00554bf9 (CONDITIONAL_JUMP)  ; LAB_00554bf9
    PUSH 0x597c19                       ; 00554b8a | s_noLightningFlash_00597c18+1
    MOV ECX,dword ptr [0x005b7650]      ; 00554b8f | DAT_005b7650
    PUSH ECX                            ; 00554b95
    CALL FUN_0047dc30                   ; 00554b96
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined FUN_0047dc30()
    ADD ESP,0x8                         ; 00554b9b
    TEST EAX,EAX                        ; 00554b9e
    JNZ 0x00554bf9                      ; 00554ba0
        ;   XREF to: 00554bf9 (CONDITIONAL_JUMP)  ; LAB_00554bf9
    MOV EAX,[0x01fb96f0]                ; 00554ba2 | DAT_01fb96f0
    MOV dword ptr [ESP + 0x24],EAX      ; 00554ba7
    FILD dword ptr [ESP + 0x24]         ; 00554bab
    FMUL double ptr [0x00597c49]        ; 00554baf | DAT_00597c49
    FSUB float ptr [ESP + 0x1c]         ; 00554bb5
    MOV EAX,dword ptr [EBP + 0x14]      ; 00554bb9
    FST float ptr [ESP + 0x20]          ; 00554bbc
    FCOMP float ptr [EAX + 0x30]        ; 00554bc0
    FNSTSW AX                           ; 00554bc3
    SAHF                                ; 00554bc5
    JNC 0x00554be3                      ; 00554bc6
        ;   XREF to: 00554be3 (CONDITIONAL_JUMP)  ; LAB_00554be3
    MOV EAX,dword ptr [EBP + 0x14]      ; 00554bc8
    MOV EAX,dword ptr [EAX + 0x30]      ; 00554bcb
    MOV dword ptr [ESP + 0x20],EAX      ; 00554bce
    MOV EAX,dword ptr [EBP + 0x14]      ; 00554bd2
    MOV dword ptr [EAX + 0x24],0x0      ; 00554bd5
    MOV dword ptr [EAX + 0x28],0x0      ; 00554bdc
    PUSH dword ptr [ESP + 0x20]         ; 00554be3
        ;   Label: LAB_00554be3
    PUSH 0x1fb8508                      ; 00554be7
    CALL FUN_00446740                   ; 00554bec
        ;   XREF to: 00446740 (UNCONDITIONAL_CALL)  ; undefined FUN_00446740()
    ADD ESP,0x8                         ; 00554bf1
    JMP 0x005549ac                      ; 00554bf4
        ;   XREF to: 005549ac (UNCONDITIONAL_JUMP)  ; LAB_005549ac
    MOV EAX,dword ptr [EBP + 0x14]      ; 00554bf9
        ;   Label: LAB_00554bf9
    PUSH dword ptr [EAX + 0x30]         ; 00554bfc
    PUSH 0x1fb8508                      ; 00554bff
    CALL FUN_00446740                   ; 00554c04
        ;   XREF to: 00446740 (UNCONDITIONAL_CALL)  ; undefined FUN_00446740()
    ADD ESP,0x8                         ; 00554c09
    MOV EAX,dword ptr [EBP + 0x14]      ; 00554c0c
    MOV dword ptr [EAX + 0x24],0x0      ; 00554c0f
    MOV dword ptr [EAX + 0x28],0x0      ; 00554c16
    JMP 0x005549ac                      ; 00554c1d
        ;   XREF to: 005549ac (UNCONDITIONAL_JUMP)  ; LAB_005549ac
    MOV ESI,dword ptr [0x02de0770]      ; 00554c22 | DAT_02de0770
        ;   Label: LAB_00554c22
    PUSH ESI                            ; 00554c28
    CALL FUN_00527230                   ; 00554c29
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined FUN_00527230()
    ADD ESP,0x4                         ; 00554c2e
    MOV ESP,EBP                         ; 00554c31
    POP EBP                             ; 00554c33
    POP EDI                             ; 00554c34
    POP ESI                             ; 00554c35
    POP EBX                             ; 00554c36
    RET                                 ; 00554c37
    PUSH 0x3ecccccd                     ; 00554c38
        ;   Label: LAB_00554c38
    CALL FUN_0040dea0                   ; 00554c3d
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dea0()
    ADD ESP,0x4                         ; 00554c42
    TEST EAX,EAX                        ; 00554c45
    JZ 0x00554c60                       ; 00554c47
        ;   XREF to: 00554c60 (CONDITIONAL_JUMP)  ; LAB_00554c60
    PUSH EBX                            ; 00554c49
    MOV EDX,dword ptr [EBP + 0x14]      ; 00554c4a
    PUSH 0x3dcccccd                     ; 00554c4d
    PUSH EDX                            ; 00554c52
    CALL FUN_00554d40                   ; 00554c53
        ;   XREF to: 00554d40 (UNCONDITIONAL_CALL)  ; undefined FUN_00554d40()
    ADD ESP,0xc                         ; 00554c58
    JMP 0x00554b14                      ; 00554c5b
        ;   XREF to: 00554b14 (UNCONDITIONAL_JUMP)  ; LAB_00554b14
    MOV EAX,dword ptr [EBP + 0x14]      ; 00554c60
        ;   Label: LAB_00554c60
    PUSH EAX                            ; 00554c63
    CALL FUN_00554fd0                   ; 00554c64
        ;   XREF to: 00554fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00554fd0()
    ADD ESP,0x4                         ; 00554c69
    JMP 0x00554b14                      ; 00554c6c
        ;   XREF to: 00554b14 (UNCONDITIONAL_JUMP)  ; LAB_00554b14
    MOV EAX,dword ptr [EBP + 0x14]      ; 00554c71
        ;   Label: LAB_00554c71
    MOV dword ptr [EAX + 0x24],EBX      ; 00554c74
    MOV EAX,[0x01fb96f0]                ; 00554c77 | DAT_01fb96f0
    MOV dword ptr [ESP + 0x24],EAX      ; 00554c7c
    FILD dword ptr [ESP + 0x24]         ; 00554c80
    FMUL double ptr [0x00597c49]        ; 00554c84 | DAT_00597c49
    PUSH 0x3e99999a                     ; 00554c8a
    MOV EDX,dword ptr [EBP + 0x14]      ; 00554c8f
    FSTP float ptr [ESP + 0x10]         ; 00554c92
    MOV EAX,dword ptr [ESP + 0x10]      ; 00554c96
    PUSH 0x3dcccccd                     ; 00554c9a
    MOV dword ptr [EDX + 0x30],EAX      ; 00554c9f
    CALL FUN_0040dda0                   ; 00554ca2
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0x2c],EAX      ; 00554ca7
    FLD float ptr [ESP + 0x2c]          ; 00554cab
    ADD ESP,0x8                         ; 00554caf
    FADD float ptr [ESP + 0xc]          ; 00554cb2
    FST float ptr [ESP + 0xc]           ; 00554cb6
    FLD1                                ; 00554cba
    FCOMPP                              ; 00554cbc
    FNSTSW AX                           ; 00554cbe
    SAHF                                ; 00554cc0
    JNC 0x00554ccb                      ; 00554cc1
        ;   XREF to: 00554ccb (CONDITIONAL_JUMP)  ; LAB_00554ccb
    MOV dword ptr [ESP + 0xc],0x3f800000 ; 00554cc3
    FLD float ptr [ESP + 0xc]           ; 00554ccb
        ;   Label: LAB_00554ccb
    FMUL double ptr [0x00597c51]        ; 00554ccf | DAT_00597c51
    SUB ESP,0x4                         ; 00554cd5
    FSTP float ptr [ESP]                ; 00554cd8
    PUSH 0x3c23d70a                     ; 00554cdb
    CALL FUN_0040dda0                   ; 00554ce0
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dda0()
    MOV dword ptr [ESP + 0x2c],EAX      ; 00554ce5
    FLD float ptr [ESP + 0x2c]          ; 00554ce9
    ADD ESP,0x8                         ; 00554ced
    PUSH dword ptr [ESP + 0xc]          ; 00554cf0
    MOV EAX,dword ptr [EBP + 0x14]      ; 00554cf4
    PUSH 0x1fb8508                      ; 00554cf7
    FSTP float ptr [EAX + 0x28]         ; 00554cfc
    CALL FUN_00446740                   ; 00554cff
        ;   XREF to: 00446740 (UNCONDITIONAL_CALL)  ; undefined FUN_00446740()
    ADD ESP,0x8                         ; 00554d04
    JMP 0x00554b14                      ; 00554d07
        ;   XREF to: 00554b14 (UNCONDITIONAL_JUMP)  ; LAB_00554b14
    MOV EAX,dword ptr [EBP + 0x14]      ; 00554d0c
        ;   Label: LAB_00554d0c
    MOV dword ptr [EAX + 0x34],0x41700000 ; 00554d0f
    JMP 0x00554b59                      ; 00554d16
        ;   XREF to: 00554b59 (UNCONDITIONAL_JUMP)  ; LAB_00554b59
    PUSH 0x597c3b                       ; 00554d1b | = "rain.wav @ .1"
        ;   Label: LAB_00554d1b
    MOV EBX,dword ptr [EBP + 0x14]      ; 00554d20
    PUSH EBX                            ; 00554d23
    MOV ESI,dword ptr [0x005bed68]      ; 00554d24 | DAT_005bed68
    PUSH ESI                            ; 00554d2a
    CALL FUN_0052ea40                   ; 00554d2b
        ;   XREF to: 0052ea40 (UNCONDITIONAL_CALL)  ; undefined FUN_0052ea40()
    ADD ESP,0xc                         ; 00554d30
    MOV [0x02de0770],EAX                ; 00554d33 | DAT_02de0770
    MOV ESP,EBP                         ; 00554d38
    POP EBP                             ; 00554d3a
    POP EDI                             ; 00554d3b
    POP ESI                             ; 00554d3c
    POP EBX                             ; 00554d3d
    RET                                 ; 00554d3e

