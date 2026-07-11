; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fad00(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004349a0 at 00434b55
;
; Referenced Globals:
;   void* switchdataD_004facd8 = 004fae11
;   undefined4 DAT_005b7644
;   undefined4 DAT_006b0278
;   undefined4 DAT_006b0280
;   undefined4 DAT_01c00c48
;   undefined4 DAT_01c00c4c
;   undefined4 DAT_01c00c50
;   undefined4 DAT_01c00c54
;   undefined4 DAT_01c02594
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;   undefined4 DAT_01e52ef8
;   undefined4 DAT_01e52efc
;   undefined4 DAT_01e52f00
;   undefined4 DAT_01e52f48
;   ... and 2 more
;
; Called Functions:
;   FUN_004f9870
;   FUN_004f98e0
;   FUN_004f9960
;   FUN_004f99d0
;   FUN_004f9a10
;   FUN_00530710
;   FUN_00532620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fad00
        ;   Label: FUN_004fad00
    PUSH ESI                            ; 004fad01
    PUSH EDI                            ; 004fad02
    PUSH EBP                            ; 004fad03
    SUB ESP,0x14                        ; 004fad04
    CMP dword ptr [0x005b7644],0x0      ; 004fad07 | DAT_005b7644
    JZ 0x004fad77                       ; 004fad0e
        ;   XREF to: 004fad77 (CONDITIONAL_JUMP)  ; LAB_004fad77
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004fad10
    MOV ECX,dword ptr [ESP + 0x28]      ; 004fad14
    XOR ESI,ESI                         ; 004fad18
    TEST EBX,EBX                        ; 004fad1a
    JLE 0x004fad77                      ; 004fad1c
        ;   XREF to: 004fad77 (CONDITIONAL_JUMP)  ; LAB_004fad77
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004fad1e
    TEST byte ptr [ECX + 0x13],0x80     ; 004fad22
        ;   Label: LAB_004fad22
    JZ 0x004fad6f                       ; 004fad26
        ;   XREF to: 004fad6f (CONDITIONAL_JUMP)  ; LAB_004fad6f
    MOV EAX,0x7fffffff                  ; 004fad28
    MOV EDX,EAX                         ; 004fad2d
    MOV EBX,dword ptr [ECX + 0x8]       ; 004fad2f
    SAR EDX,0x1f                        ; 004fad32
    IDIV EBX                            ; 004fad35
    MOV dword ptr [ECX + 0xc],EAX       ; 004fad37
    MOV EDX,dword ptr [0x01c00c48]      ; 004fad3a | DAT_01c00c48
    MOV EBX,dword ptr [ECX + 0x8]       ; 004fad40
    MOV EAX,dword ptr [ECX]             ; 004fad43
    IMUL EDX                            ; 004fad45
    IDIV EBX                            ; 004fad47
    MOV EDX,dword ptr [0x01c00c50]      ; 004fad49 | DAT_01c00c50
    ADD EAX,EDX                         ; 004fad4f
    MOV EBX,dword ptr [ECX + 0x8]       ; 004fad51
    MOV dword ptr [ECX + 0x10],EAX      ; 004fad54
    MOV EDX,dword ptr [0x01c00c4c]      ; 004fad57 | DAT_01c00c4c
    MOV EAX,dword ptr [ECX + 0x4]       ; 004fad5d
    IMUL EDX                            ; 004fad60
    IDIV EBX                            ; 004fad62
    MOV EDX,dword ptr [0x01c00c54]      ; 004fad64 | DAT_01c00c54
    ADD EAX,EDX                         ; 004fad6a
    MOV dword ptr [ECX + 0x14],EAX      ; 004fad6c
    INC ESI                             ; 004fad6f
        ;   Label: LAB_004fad6f
    ADD ECX,0x30                        ; 004fad70
    CMP ESI,EDI                         ; 004fad73
    JL 0x004fad22                       ; 004fad75
        ;   XREF to: 004fad22 (CONDITIONAL_JUMP)  ; LAB_004fad22
    CMP dword ptr [0x006b0280],0x0      ; 004fad77 | DAT_006b0280
        ;   Label: LAB_004fad77
    JZ 0x004faddc                       ; 004fad7e
        ;   XREF to: 004faddc (CONDITIONAL_JUMP)  ; LAB_004faddc
    MOV EAX,dword ptr [ESP + 0x28]      ; 004fad80
    MOV ESI,dword ptr [ESP + 0x28]      ; 004fad84
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004fad88
    ADD EAX,0x30                        ; 004fad8c
    ADD ESI,0x60                        ; 004fad8f
    CMP EDX,0x3                         ; 004fad92
    JLE 0x004fafa9                      ; 004fad95
        ;   XREF to: 004fafa9 (CONDITIONAL_JUMP)  ; LAB_004fafa9
    SUB EDX,0x2                         ; 004fad9b
    MOV EBX,EAX                         ; 004fad9e
    XOR EDI,EDI                         ; 004fada0
    XOR EBP,EBP                         ; 004fada2
    MOV dword ptr [ESP + 0x4],EDX       ; 004fada4
    TEST EDX,EDX                        ; 004fada8
    JLE 0x004fadd2                      ; 004fadaa
        ;   XREF to: 004fadd2 (CONDITIONAL_JUMP)  ; LAB_004fadd2
    PUSH ESI                            ; 004fadac
        ;   Label: LAB_004fadac
    PUSH EBX                            ; 004fadad
    MOV EAX,dword ptr [ESP + 0x30]      ; 004fadae
    PUSH EAX                            ; 004fadb2
    CALL FUN_004f9a10                   ; 004fadb3
        ;   XREF to: 004f9a10 (UNCONDITIONAL_CALL)  ; undefined FUN_004f9a10()
    ADD ESP,0xc                         ; 004fadb8
    TEST EAX,EAX                        ; 004fadbb
    JZ 0x004fafa3                       ; 004fadbd
        ;   XREF to: 004fafa3 (CONDITIONAL_JUMP)  ; LAB_004fafa3
    MOV EDX,dword ptr [ESP + 0x4]       ; 004fadc3
        ;   Label: LAB_004fadc3
    ADD EBX,0x30                        ; 004fadc7
    INC EDI                             ; 004fadca
    ADD ESI,0x30                        ; 004fadcb
    CMP EDI,EDX                         ; 004fadce
    JL 0x004fadac                       ; 004fadd0
        ;   XREF to: 004fadac (CONDITIONAL_JUMP)  ; LAB_004fadac
    CMP EBP,dword ptr [ESP + 0x4]       ; 004fadd2
        ;   Label: LAB_004fadd2
    JZ 0x004faf9b                       ; 004fadd6
        ;   XREF to: 004faf9b (CONDITIONAL_JUMP)  ; LAB_004faf9b
    MOV EDX,dword ptr [0x01e52ef8]      ; 004faddc | DAT_01e52ef8
        ;   Label: LAB_004faddc
    INC EDX                             ; 004fade2
    MOV ECX,dword ptr [0x01c02594]      ; 004fade3 | DAT_01c02594
    MOV dword ptr [0x01e52ef8],EDX      ; 004fade9 | DAT_01e52ef8
    TEST ECX,ECX                        ; 004fadef
    JZ 0x004fae00                       ; 004fadf1
        ;   XREF to: 004fae00 (CONDITIONAL_JUMP)  ; LAB_004fae00
    CMP dword ptr [0x006b0278],0x0      ; 004fadf3 | DAT_006b0278
    JZ 0x004fafc8                       ; 004fadfa
        ;   XREF to: 004fafc8 (CONDITIONAL_JUMP)  ; LAB_004fafc8
    MOV EAX,[0x01c039a4]                ; 004fae00 | DAT_01c039a4
        ;   Label: LAB_004fae00
    CMP EAX,0x6                         ; 004fae05
    JA 0x004fae11                       ; 004fae08
        ;   XREF to: 004fae11 (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [EAX*0x4 + 0x4facd8]  ; 004fae0a | caseD_4 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,0x4b0                       ; 004fae11
        ;   Label: caseD_0
    XOR EDX,EDX                         ; 004fae16
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004fae18
    MOV dword ptr [0x01e53384],EDX      ; 004fae1c | DAT_01e53384
    MOV dword ptr [0x01e52efc],EDX      ; 004fae22 | DAT_01e52efc
    MOV dword ptr [ESP + 0x8],EDX       ; 004fae28
    MOV [0x01e53380],EAX                ; 004fae2c | DAT_01e53380
    TEST ESI,ESI                        ; 004fae31
    JLE 0x004fae7f                      ; 004fae33
        ;   XREF to: 004fae7f (CONDITIONAL_JUMP)  ; LAB_004fae7f
    MOV EAX,dword ptr [ESP + 0x8]       ; 004fae35
        ;   Label: LAB_004fae35
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004fae39
    INC EAX                             ; 004fae3d
    CMP EAX,EDI                         ; 004fae3e
    JL 0x004fae44                       ; 004fae40
        ;   XREF to: 004fae44 (CONDITIONAL_JUMP)  ; LAB_004fae44
    XOR EAX,EAX                         ; 004fae42
    IMUL EAX,EAX,0x30                   ; 004fae44
        ;   Label: LAB_004fae44
    IMUL ECX,dword ptr [ESP + 0x8],0x30 ; 004fae47
    MOV ESI,dword ptr [ESP + 0x28]      ; 004fae4c
    ADD ESI,EAX                         ; 004fae50
    ADD ECX,dword ptr [ESP + 0x28]      ; 004fae52
    MOV EDI,ESI                         ; 004fae56
    MOV EDX,dword ptr [ECX + 0x14]      ; 004fae58
    MOV EAX,dword ptr [ESI + 0x14]      ; 004fae5b
    SAR EDX,0x10                        ; 004fae5e
    SAR EAX,0x10                        ; 004fae61
    MOV EBX,ECX                         ; 004fae64
    CMP EDX,EAX                         ; 004fae66
    JNZ 0x004fb05c                      ; 004fae68
        ;   XREF to: 004fb05c (CONDITIONAL_JUMP)  ; LAB_004fb05c
    MOV EDX,dword ptr [ESP + 0x8]       ; 004fae6e
        ;   Label: LAB_004fae6e
    INC EDX                             ; 004fae72
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004fae73
    MOV dword ptr [ESP + 0x8],EDX       ; 004fae77
    CMP EDX,ECX                         ; 004fae7b
    JL 0x004fae35                       ; 004fae7d
        ;   XREF to: 004fae35 (CONDITIONAL_JUMP)  ; LAB_004fae35
    MOV EAX,0x1e52f00                   ; 004fae7f
        ;   Label: LAB_004fae7f
    MOV ESI,dword ptr [0x01e52efc]      ; 004fae84 | DAT_01e52efc
    MOV EBX,dword ptr [0x01e53380]      ; 004fae8a | DAT_01e53380
    XOR ECX,ECX                         ; 004fae90
    TEST ESI,ESI                        ; 004fae92
    JLE 0x004fb24a                      ; 004fae94
        ;   XREF to: 004fb24a (CONDITIONAL_JUMP)  ; LAB_004fb24a
    MOV EDX,dword ptr [0x01e52efc]      ; 004fae9a | DAT_01e52efc
    CMP EBX,dword ptr [EAX]             ; 004faea0 | DAT_01e52f00 | DAT_01e52f48
        ;   Label: LAB_004faea0
    JNZ 0x004fb23e                      ; 004faea2
        ;   XREF to: 004fb23e (CONDITIONAL_JUMP)  ; LAB_004fb23e
    TEST EAX,EAX                        ; 004faea8
    JZ 0x004fb23e                       ; 004faeaa
        ;   XREF to: 004fb23e (CONDITIONAL_JUMP)  ; LAB_004fb23e
    MOV EBP,EAX                         ; 004faeb0
        ;   Label: LAB_004faeb0
    TEST EAX,EAX                        ; 004faeb2
    JZ 0x004faf9b                       ; 004faeb4
        ;   XREF to: 004faf9b (CONDITIONAL_JUMP)  ; LAB_004faf9b
    MOV EDI,dword ptr [0x01e52efc]      ; 004faeba | DAT_01e52efc
    MOV EBX,dword ptr [0x01e53380]      ; 004faec0 | DAT_01e53380
    MOV ECX,EAX                         ; 004faec6
    XOR EDX,EDX                         ; 004faec8
    MOV EAX,0x1e52f00                   ; 004faeca
    TEST EDI,EDI                        ; 004faecf
    JLE 0x004fb25d                      ; 004faed1
        ;   XREF to: 004fb25d (CONDITIONAL_JUMP)  ; LAB_004fb25d
    MOV ESI,dword ptr [0x01e52efc]      ; 004faed7 | DAT_01e52efc
    CMP EBX,dword ptr [EAX]             ; 004faedd | DAT_01e52f00 | DAT_01e52f48
        ;   Label: LAB_004faedd
    JNZ 0x004fb251                      ; 004faedf
        ;   XREF to: 004fb251 (CONDITIONAL_JUMP)  ; LAB_004fb251
    CMP EAX,ECX                         ; 004faee5
    JZ 0x004fb251                       ; 004faee7
        ;   XREF to: 004fb251 (CONDITIONAL_JUMP)  ; LAB_004fb251
    MOV dword ptr [ESP + 0x10],EAX      ; 004faeed | DAT_01e52f00 | DAT_01e52f48
        ;   Label: LAB_004faeed
    TEST EAX,EAX                        ; 004faef1
    JZ 0x004faf9b                       ; 004faef3
        ;   XREF to: 004faf9b (CONDITIONAL_JUMP)  ; LAB_004faf9b
    MOV EAX,[0x01e53380]                ; 004faef9 | DAT_01e53380
    MOV dword ptr [ESP + 0xc],EAX       ; 004faefe
    MOV EAX,dword ptr [ESP + 0xc]       ; 004faf02
        ;   Label: LAB_004faf02
    CMP EAX,dword ptr [EBP + 0x4]       ; 004faf06
    JL 0x004faf49                       ; 004faf09
        ;   XREF to: 004faf49 (CONDITIONAL_JUMP)  ; LAB_004faf49
    MOV ECX,dword ptr [ESP + 0x10]      ; 004faf0b
    MOV ESI,dword ptr [0x01e52efc]      ; 004faf0f | DAT_01e52efc
    MOV EBX,EAX                         ; 004faf15
    MOV dword ptr [EBP],0xffffffff      ; 004faf17
    XOR EDX,EDX                         ; 004faf1e
    MOV EAX,0x1e52f00                   ; 004faf20
    TEST ESI,ESI                        ; 004faf25
    JLE 0x004fb270                      ; 004faf27
        ;   XREF to: 004fb270 (CONDITIONAL_JUMP)  ; LAB_004fb270
    MOV EDI,dword ptr [0x01e52efc]      ; 004faf2d | DAT_01e52efc
    CMP EBX,dword ptr [EAX]             ; 004faf33 | DAT_01e52f00 | DAT_01e52f48
        ;   Label: LAB_004faf33
    JNZ 0x004fb264                      ; 004faf35
        ;   XREF to: 004fb264 (CONDITIONAL_JUMP)  ; LAB_004fb264
    CMP EAX,ECX                         ; 004faf3b
    JZ 0x004fb264                       ; 004faf3d
        ;   XREF to: 004fb264 (CONDITIONAL_JUMP)  ; LAB_004fb264
    MOV EBP,EAX                         ; 004faf43
        ;   Label: LAB_004faf43
    TEST EAX,EAX                        ; 004faf45
    JZ 0x004faf9b                       ; 004faf47
        ;   XREF to: 004faf9b (CONDITIONAL_JUMP)  ; LAB_004faf9b
    MOV EDX,dword ptr [ESP + 0x10]      ; 004faf49
        ;   Label: LAB_004faf49
    MOV EAX,dword ptr [ESP + 0xc]       ; 004faf4d
    CMP EAX,dword ptr [EDX + 0x4]       ; 004faf51
    JL 0x004fb295                       ; 004faf54
        ;   XREF to: 004fb295 (CONDITIONAL_JUMP)  ; LAB_004fb295
    MOV ESI,dword ptr [0x01e52efc]      ; 004faf5a | DAT_01e52efc
    MOV EBX,EAX                         ; 004faf60
    MOV ECX,EBP                         ; 004faf62
    MOV dword ptr [EDX],0xffffffff      ; 004faf64
    MOV EAX,0x1e52f00                   ; 004faf6a
    XOR EDX,EDX                         ; 004faf6f
    TEST ESI,ESI                        ; 004faf71
    JLE 0x004fb283                      ; 004faf73
        ;   XREF to: 004fb283 (CONDITIONAL_JUMP)  ; LAB_004fb283
    MOV EDI,dword ptr [0x01e52efc]      ; 004faf79 | DAT_01e52efc
    CMP EBX,dword ptr [EAX]             ; 004faf7f | DAT_01e52f00 | DAT_01e52f48
        ;   Label: LAB_004faf7f
    JNZ 0x004fb277                      ; 004faf81
        ;   XREF to: 004fb277 (CONDITIONAL_JUMP)  ; LAB_004fb277
    CMP EAX,ECX                         ; 004faf87
    JZ 0x004fb277                       ; 004faf89
        ;   XREF to: 004fb277 (CONDITIONAL_JUMP)  ; LAB_004fb277
    MOV dword ptr [ESP + 0x10],EAX      ; 004faf8f | DAT_01e52f48 | DAT_01e52f00
    TEST EAX,EAX                        ; 004faf93
    JNZ 0x004fb295                      ; 004faf95
        ;   XREF to: 004fb295 (CONDITIONAL_JUMP)  ; LAB_004fb295
    ADD ESP,0x14                        ; 004faf9b
        ;   Label: LAB_004faf9b
    POP EBP                             ; 004faf9e
    POP EDI                             ; 004faf9f
    POP ESI                             ; 004fafa0
    POP EBX                             ; 004fafa1
    RET                                 ; 004fafa2
    INC EBP                             ; 004fafa3
        ;   Label: LAB_004fafa3
    JMP 0x004fadc3                      ; 004fafa4
        ;   XREF to: 004fadc3 (UNCONDITIONAL_JUMP)  ; LAB_004fadc3
    PUSH ESI                            ; 004fafa9
        ;   Label: LAB_004fafa9
    PUSH EAX                            ; 004fafaa
    MOV ECX,dword ptr [ESP + 0x30]      ; 004fafab
    PUSH ECX                            ; 004fafaf
    CALL FUN_004f9a10                   ; 004fafb0
        ;   XREF to: 004f9a10 (UNCONDITIONAL_CALL)  ; undefined FUN_004f9a10()
    ADD ESP,0xc                         ; 004fafb5
    TEST EAX,EAX                        ; 004fafb8
    JNZ 0x004faddc                      ; 004fafba
        ;   XREF to: 004faddc (CONDITIONAL_JUMP)  ; LAB_004faddc
    ADD ESP,0x14                        ; 004fafc0
    POP EBP                             ; 004fafc3
    POP EDI                             ; 004fafc4
    POP ESI                             ; 004fafc5
    POP EBX                             ; 004fafc6
    RET                                 ; 004fafc7
    MOV EDI,dword ptr [0x01c039a0]      ; 004fafc8 | DAT_01c039a0
        ;   Label: LAB_004fafc8
    PUSH EDI                            ; 004fafce
    MOV EBP,dword ptr [ESP + 0x30]      ; 004fafcf
    PUSH EBP                            ; 004fafd3
    MOV EAX,dword ptr [ESP + 0x30]      ; 004fafd4
    PUSH EAX                            ; 004fafd8
    CALL FUN_00532620                   ; 004fafd9
        ;   XREF to: 00532620 (UNCONDITIONAL_CALL)  ; undefined FUN_00532620()
    ADD ESP,0xc                         ; 004fafde
    ADD ESP,0x14                        ; 004fafe1
    POP EBP                             ; 004fafe4
    POP EDI                             ; 004fafe5
    POP ESI                             ; 004fafe6
    POP EBX                             ; 004fafe7
    RET                                 ; 004fafe8
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004fafe9
        ;   Label: caseD_1
    PUSH EDI                            ; 004fafed
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004fafee
    PUSH EBP                            ; 004faff2
    CALL FUN_004f9870                   ; 004faff3
        ;   XREF to: 004f9870 (UNCONDITIONAL_CALL)  ; undefined FUN_004f9870()
    ADD ESP,0x8                         ; 004faff8
    JMP 0x004fae11                      ; 004faffb
        ;   XREF to: 004fae11 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004fb000
        ;   Label: caseD_2
    PUSH EBX                            ; 004fb004
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004fb005
    PUSH ESI                            ; 004fb009
    CALL FUN_004f98e0                   ; 004fb00a
        ;   XREF to: 004f98e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f98e0()
    ADD ESP,0x8                         ; 004fb00f
    JMP 0x004fae11                      ; 004fb012
        ;   XREF to: 004fae11 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004fb017
        ;   Label: caseD_3
    PUSH EDX                            ; 004fb01b
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004fb01c
    PUSH ECX                            ; 004fb020
    CALL FUN_004f9960                   ; 004fb021
        ;   XREF to: 004f9960 (UNCONDITIONAL_CALL)  ; undefined FUN_004f9960()
    ADD ESP,0x8                         ; 004fb026
    JMP 0x004fae11                      ; 004fb029
        ;   XREF to: 004fae11 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004fb02e
        ;   Label: caseD_5
    PUSH EBP                            ; 004fb032
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004fb033
    PUSH EAX                            ; 004fb037
    CALL FUN_004f98e0                   ; 004fb038
        ;   XREF to: 004f98e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f98e0()
    ADD ESP,0x8                         ; 004fb03d
    JMP 0x004fae11                      ; 004fb040
        ;   XREF to: 004fae11 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004fb045
        ;   Label: caseD_6
    PUSH ESI                            ; 004fb049
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004fb04a
    PUSH EDI                            ; 004fb04e
    CALL FUN_004f99d0                   ; 004fb04f
        ;   XREF to: 004f99d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f99d0()
    ADD ESP,0x8                         ; 004fb054
    JMP 0x004fae11                      ; 004fb057
        ;   XREF to: 004fae11 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EBP,dword ptr [ECX + 0x14]      ; 004fb05c
        ;   Label: LAB_004fb05c
    CMP EBP,dword ptr [ESI + 0x14]      ; 004fb05f
    JLE 0x004fb06e                      ; 004fb062
        ;   XREF to: 004fb06e (CONDITIONAL_JUMP)  ; LAB_004fb06e
    MOV EDI,ECX                         ; 004fb064
    MOV EBX,ESI                         ; 004fb066
    MOV ECX,EDX                         ; 004fb068
    MOV EDX,EAX                         ; 004fb06a
    MOV EAX,ECX                         ; 004fb06c
    IMUL EBP,dword ptr [0x01e52efc],0x48 ; 004fb06e | DAT_01e52efc
        ;   Label: LAB_004fb06e
    ADD EBP,0x1e52f00                   ; 004fb075
    MOV dword ptr [EBP],EDX             ; 004fb07b | DAT_01e52f00
    MOV ESI,dword ptr [0x01e53380]      ; 004fb07e | DAT_01e53380
    MOV dword ptr [EBP + 0x4],EAX       ; 004fb084
    CMP EDX,ESI                         ; 004fb087
    JGE 0x004fb091                      ; 004fb089
        ;   XREF to: 004fb091 (CONDITIONAL_JUMP)  ; LAB_004fb091
    MOV dword ptr [0x01e53380],EDX      ; 004fb08b | DAT_01e53380
    CMP EAX,dword ptr [0x01e53384]      ; 004fb091 | DAT_01e53384
        ;   Label: LAB_004fb091
    JLE 0x004fb09e                      ; 004fb097
        ;   XREF to: 004fb09e (CONDITIONAL_JUMP)  ; LAB_004fb09e
    MOV [0x01e53384],EAX                ; 004fb099 | DAT_01e53384
    MOV ESI,dword ptr [EBX + 0x14]      ; 004fb09e
        ;   Label: LAB_004fb09e
    MOV ECX,dword ptr [EDI + 0x14]      ; 004fb0a1
    SUB ECX,ESI                         ; 004fb0a4
    CMP ECX,0x10000                     ; 004fb0a6
    JNC 0x004fb22e                      ; 004fb0ac
        ;   XREF to: 004fb22e (CONDITIONAL_JUMP)  ; LAB_004fb22e
    XOR ECX,ECX                         ; 004fb0b2
    MOV EAX,dword ptr [EDI + 0x10]      ; 004fb0b4
        ;   Label: LAB_004fb0b4
    MOV EDX,dword ptr [EBX + 0x10]      ; 004fb0b7
    MOV ESI,dword ptr [EBX + 0x14]      ; 004fb0ba
    SUB EAX,EDX                         ; 004fb0bd
    AND ESI,0xffff                      ; 004fb0bf
    MOV EDX,EAX                         ; 004fb0c5
    MOV EAX,ECX                         ; 004fb0c7
    XOR SI,0xffff                       ; 004fb0c9
    IMUL EDX                            ; 004fb0cd
    SHRD EAX,EDX,0x10                   ; 004fb0cf
    MOV EDX,EAX                         ; 004fb0d3
    MOV dword ptr [EBP + 0xc],EAX       ; 004fb0d5
    MOV EAX,ESI                         ; 004fb0d8
    IMUL EDX                            ; 004fb0da
    SHRD EAX,EDX,0x10                   ; 004fb0dc
    MOV dword ptr [ESP],EAX             ; 004fb0e0
    MOV EDX,dword ptr [ESP]             ; 004fb0e3
    MOV EAX,dword ptr [EBX + 0x10]      ; 004fb0e6
    ADD EAX,EDX                         ; 004fb0e9
    MOV dword ptr [EBP + 0x8],EAX       ; 004fb0eb
    MOV EAX,dword ptr [EDI + 0x18]      ; 004fb0ee
    MOV EDX,dword ptr [EBX + 0x18]      ; 004fb0f1
    SUB EAX,EDX                         ; 004fb0f4
    MOV EDX,EAX                         ; 004fb0f6
    MOV EAX,ECX                         ; 004fb0f8
    IMUL EDX                            ; 004fb0fa
    SHRD EAX,EDX,0x10                   ; 004fb0fc
    MOV EDX,EAX                         ; 004fb100
    MOV dword ptr [EBP + 0x1c],EAX      ; 004fb102
    MOV EAX,ESI                         ; 004fb105
    IMUL EDX                            ; 004fb107
    SHRD EAX,EDX,0x10                   ; 004fb109
    MOV dword ptr [ESP],EAX             ; 004fb10d
    MOV EDX,dword ptr [ESP]             ; 004fb110
    MOV EAX,dword ptr [EBX + 0x18]      ; 004fb113
    ADD EAX,EDX                         ; 004fb116
    MOV dword ptr [EBP + 0x18],EAX      ; 004fb118
    MOV EAX,dword ptr [EDI + 0x1c]      ; 004fb11b
    MOV EDX,dword ptr [EBX + 0x1c]      ; 004fb11e
    SUB EAX,EDX                         ; 004fb121
    MOV EDX,EAX                         ; 004fb123
    MOV EAX,ECX                         ; 004fb125
    IMUL EDX                            ; 004fb127
    SHRD EAX,EDX,0x10                   ; 004fb129
    MOV EDX,EAX                         ; 004fb12d
    MOV dword ptr [EBP + 0x24],EAX      ; 004fb12f
    MOV EAX,ESI                         ; 004fb132
    IMUL EDX                            ; 004fb134
    SHRD EAX,EDX,0x10                   ; 004fb136
    MOV dword ptr [ESP],EAX             ; 004fb13a
    MOV EDX,dword ptr [ESP]             ; 004fb13d
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004fb140
    ADD EAX,EDX                         ; 004fb143
    MOV dword ptr [EBP + 0x20],EAX      ; 004fb145
    MOV EAX,dword ptr [EDI + 0x20]      ; 004fb148
    MOV EDX,dword ptr [EBX + 0x20]      ; 004fb14b
    SUB EAX,EDX                         ; 004fb14e
    MOV EDX,EAX                         ; 004fb150
    MOV EAX,ECX                         ; 004fb152
    IMUL EDX                            ; 004fb154
    SHRD EAX,EDX,0x10                   ; 004fb156
    MOV EDX,EAX                         ; 004fb15a
    MOV dword ptr [EBP + 0x14],EAX      ; 004fb15c
    MOV EAX,ESI                         ; 004fb15f
    IMUL EDX                            ; 004fb161
    SHRD EAX,EDX,0x10                   ; 004fb163
    MOV dword ptr [ESP],EAX             ; 004fb167
    MOV EDX,dword ptr [ESP]             ; 004fb16a
    MOV EAX,dword ptr [EBX + 0x20]      ; 004fb16d
    ADD EAX,EDX                         ; 004fb170
    MOV dword ptr [EBP + 0x10],EAX      ; 004fb172
    MOV EAX,dword ptr [EDI + 0x2c]      ; 004fb175
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004fb178
    SUB EAX,EDX                         ; 004fb17b
    MOV EDX,EAX                         ; 004fb17d
    MOV EAX,ECX                         ; 004fb17f
    IMUL EDX                            ; 004fb181
    SHRD EAX,EDX,0x10                   ; 004fb183
    MOV EDX,EAX                         ; 004fb187
    MOV dword ptr [EBP + 0x34],EAX      ; 004fb189
    MOV EAX,ESI                         ; 004fb18c
    IMUL EDX                            ; 004fb18e
    SHRD EAX,EDX,0x10                   ; 004fb190
    MOV dword ptr [ESP],EAX             ; 004fb194
    MOV EDX,dword ptr [ESP]             ; 004fb197
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004fb19a
    ADD EAX,EDX                         ; 004fb19d
    MOV dword ptr [EBP + 0x30],EAX      ; 004fb19f
    MOV EAX,dword ptr [EDI + 0x8]       ; 004fb1a2
    MOV EDX,dword ptr [EBX + 0x8]       ; 004fb1a5
    SUB EAX,EDX                         ; 004fb1a8
    MOV EDX,EAX                         ; 004fb1aa
    MOV EAX,ECX                         ; 004fb1ac
    IMUL EDX                            ; 004fb1ae
    SHRD EAX,EDX,0x10                   ; 004fb1b0
    MOV EDX,EAX                         ; 004fb1b4
    MOV dword ptr [EBP + 0x2c],EAX      ; 004fb1b6
    MOV EAX,ESI                         ; 004fb1b9
    IMUL EDX                            ; 004fb1bb
    SHRD EAX,EDX,0x10                   ; 004fb1bd
    MOV dword ptr [ESP],EAX             ; 004fb1c1
    MOV EDX,dword ptr [ESP]             ; 004fb1c4
    MOV EAX,dword ptr [EBX + 0x8]       ; 004fb1c7
    ADD EAX,EDX                         ; 004fb1ca
    MOV dword ptr [EBP + 0x28],EAX      ; 004fb1cc
    MOV EAX,dword ptr [EDI + 0x24]      ; 004fb1cf
    MOV EDX,dword ptr [EBX + 0x24]      ; 004fb1d2
    SUB EAX,EDX                         ; 004fb1d5
    MOV EDX,EAX                         ; 004fb1d7
    MOV EAX,ECX                         ; 004fb1d9
    IMUL EDX                            ; 004fb1db
    SHRD EAX,EDX,0x10                   ; 004fb1dd
    MOV EDX,EAX                         ; 004fb1e1
    MOV dword ptr [EBP + 0x3c],EAX      ; 004fb1e3
    MOV EAX,ESI                         ; 004fb1e6
    IMUL EDX                            ; 004fb1e8
    SHRD EAX,EDX,0x10                   ; 004fb1ea
    MOV dword ptr [ESP],EAX             ; 004fb1ee
    MOV EDX,dword ptr [ESP]             ; 004fb1f1
    MOV EAX,dword ptr [EBX + 0x24]      ; 004fb1f4
    ADD EAX,EDX                         ; 004fb1f7
    MOV dword ptr [EBP + 0x38],EAX      ; 004fb1f9
    MOV EDX,dword ptr [EDI + 0x28]      ; 004fb1fc
    MOV EDI,dword ptr [EBX + 0x28]      ; 004fb1ff
    MOV EAX,ECX                         ; 004fb202
    SUB EDX,EDI                         ; 004fb204
    IMUL EDX                            ; 004fb206
    SHRD EAX,EDX,0x10                   ; 004fb208
    MOV EDX,EAX                         ; 004fb20c
    MOV dword ptr [EBP + 0x44],EAX      ; 004fb20e
    MOV EAX,ESI                         ; 004fb211
    IMUL EDX                            ; 004fb213
    SHRD EAX,EDX,0x10                   ; 004fb215
    MOV EDX,EAX                         ; 004fb219
    MOV EAX,dword ptr [EBX + 0x28]      ; 004fb21b
    ADD EAX,EDX                         ; 004fb21e
    MOV dword ptr [EBP + 0x40],EAX      ; 004fb220
    INC dword ptr [0x01e52efc]          ; 004fb223 | DAT_01e52efc
    JMP 0x004fae6e                      ; 004fb229
        ;   XREF to: 004fae6e (UNCONDITIONAL_JUMP)  ; LAB_004fae6e
    MOV EAX,0xffffffff                  ; 004fb22e
        ;   Label: LAB_004fb22e
    XOR EDX,EDX                         ; 004fb233
    DIV ECX                             ; 004fb235
    MOV ECX,EAX                         ; 004fb237
    JMP 0x004fb0b4                      ; 004fb239
        ;   XREF to: 004fb0b4 (UNCONDITIONAL_JUMP)  ; LAB_004fb0b4
    INC ECX                             ; 004fb23e
        ;   Label: LAB_004fb23e
    ADD EAX,0x48                        ; 004fb23f
    CMP ECX,EDX                         ; 004fb242
    JL 0x004faea0                       ; 004fb244
        ;   XREF to: 004faea0 (CONDITIONAL_JUMP)  ; LAB_004faea0
    XOR EAX,EAX                         ; 004fb24a
        ;   Label: LAB_004fb24a
    JMP 0x004faeb0                      ; 004fb24c
        ;   XREF to: 004faeb0 (UNCONDITIONAL_JUMP)  ; LAB_004faeb0
    INC EDX                             ; 004fb251
        ;   Label: LAB_004fb251
    ADD EAX,0x48                        ; 004fb252
    CMP EDX,ESI                         ; 004fb255
    JL 0x004faedd                       ; 004fb257
        ;   XREF to: 004faedd (CONDITIONAL_JUMP)  ; LAB_004faedd
    XOR EAX,EAX                         ; 004fb25d
        ;   Label: LAB_004fb25d
    JMP 0x004faeed                      ; 004fb25f
        ;   XREF to: 004faeed (UNCONDITIONAL_JUMP)  ; LAB_004faeed
    INC EDX                             ; 004fb264
        ;   Label: LAB_004fb264
    ADD EAX,0x48                        ; 004fb265
    CMP EDX,EDI                         ; 004fb268
    JL 0x004faf33                       ; 004fb26a
        ;   XREF to: 004faf33 (CONDITIONAL_JUMP)  ; LAB_004faf33
    XOR EAX,EAX                         ; 004fb270
        ;   Label: LAB_004fb270
    JMP 0x004faf43                      ; 004fb272
        ;   XREF to: 004faf43 (UNCONDITIONAL_JUMP)  ; LAB_004faf43
    INC EDX                             ; 004fb277
        ;   Label: LAB_004fb277
    ADD EAX,0x48                        ; 004fb278 | DAT_01e52f48
    CMP EDX,EDI                         ; 004fb27b
    JL 0x004faf7f                       ; 004fb27d
        ;   XREF to: 004faf7f (CONDITIONAL_JUMP)  ; LAB_004faf7f
    XOR EAX,EAX                         ; 004fb283
        ;   Label: LAB_004fb283
    MOV dword ptr [ESP + 0x10],EAX      ; 004fb285
    TEST EAX,EAX                        ; 004fb289
    JNZ 0x004fb295                      ; 004fb28b
        ;   XREF to: 004fb295 (CONDITIONAL_JUMP)  ; LAB_004fb295
    ADD ESP,0x14                        ; 004fb28d
    POP EBP                             ; 004fb290
    POP EDI                             ; 004fb291
    POP ESI                             ; 004fb292
    POP EBX                             ; 004fb293
    RET                                 ; 004fb294
    MOV EDI,dword ptr [ESP + 0x10]      ; 004fb295
        ;   Label: LAB_004fb295
    MOV EBX,dword ptr [ESP + 0xc]       ; 004fb299
    MOV ESI,EBP                         ; 004fb29d
    CALL FUN_00530710                   ; 004fb29f
        ;   XREF to: 00530710 (UNCONDITIONAL_CALL)  ; undefined FUN_00530710()
    MOV EAX,dword ptr [EBP + 0xc]       ; 004fb2a4
    MOV EDI,dword ptr [EBP + 0x8]       ; 004fb2a7
    MOV EDX,dword ptr [EBP + 0x18]      ; 004fb2aa
    MOV ECX,dword ptr [EBP + 0x20]      ; 004fb2ad
    ADD EDI,EAX                         ; 004fb2b0
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004fb2b2
    MOV dword ptr [EBP + 0x8],EDI       ; 004fb2b5
    ADD EDX,EAX                         ; 004fb2b8
    MOV EAX,dword ptr [EBP + 0x24]      ; 004fb2ba
    MOV dword ptr [EBP + 0x18],EDX      ; 004fb2bd
    ADD ECX,EAX                         ; 004fb2c0
    MOV dword ptr [EBP + 0x20],ECX      ; 004fb2c2
    MOV EBX,dword ptr [EBP + 0x28]      ; 004fb2c5
    MOV ESI,dword ptr [EBP + 0x10]      ; 004fb2c8
    MOV EDI,dword ptr [EBP + 0x38]      ; 004fb2cb
    MOV EDX,dword ptr [EBP + 0x40]      ; 004fb2ce
    MOV EAX,dword ptr [EBP + 0x2c]      ; 004fb2d1
    MOV ECX,dword ptr [EBP + 0x30]      ; 004fb2d4
    ADD EBX,EAX                         ; 004fb2d7
    MOV EAX,dword ptr [EBP + 0x14]      ; 004fb2d9
    MOV dword ptr [EBP + 0x28],EBX      ; 004fb2dc
    ADD ESI,EAX                         ; 004fb2df
    MOV EAX,dword ptr [EBP + 0x3c]      ; 004fb2e1
    MOV dword ptr [EBP + 0x10],ESI      ; 004fb2e4
    ADD EDI,EAX                         ; 004fb2e7
    MOV EAX,dword ptr [EBP + 0x44]      ; 004fb2e9
    MOV dword ptr [EBP + 0x38],EDI      ; 004fb2ec
    ADD EDX,EAX                         ; 004fb2ef
    MOV EAX,dword ptr [EBP + 0x34]      ; 004fb2f1
    MOV dword ptr [EBP + 0x40],EDX      ; 004fb2f4
    ADD ECX,EAX                         ; 004fb2f7
    MOV EAX,dword ptr [ESP + 0x10]      ; 004fb2f9
    MOV dword ptr [EBP + 0x30],ECX      ; 004fb2fd
    MOV EDX,dword ptr [ESP + 0x10]      ; 004fb300
    MOV EAX,dword ptr [EAX + 0xc]       ; 004fb304
    MOV EBX,dword ptr [EDX + 0x8]       ; 004fb307
    MOV ESI,dword ptr [EDX + 0x18]      ; 004fb30a
    MOV EDI,dword ptr [EDX + 0x20]      ; 004fb30d
    MOV ECX,dword ptr [EDX + 0x28]      ; 004fb310
    ADD EBX,EAX                         ; 004fb313
    MOV EAX,dword ptr [EDX + 0x1c]      ; 004fb315
    MOV dword ptr [EDX + 0x8],EBX       ; 004fb318
    ADD ESI,EAX                         ; 004fb31b
    MOV EAX,dword ptr [EDX + 0x24]      ; 004fb31d
    MOV dword ptr [EDX + 0x18],ESI      ; 004fb320
    ADD EDI,EAX                         ; 004fb323
    MOV EAX,dword ptr [EDX + 0x2c]      ; 004fb325
    MOV dword ptr [EDX + 0x20],EDI      ; 004fb328
    ADD ECX,EAX                         ; 004fb32b
    MOV dword ptr [EDX + 0x28],ECX      ; 004fb32d
    MOV EBX,dword ptr [EDX + 0x10]      ; 004fb330
    MOV ESI,dword ptr [EDX + 0x38]      ; 004fb333
    MOV EDI,dword ptr [EDX + 0x40]      ; 004fb336
    MOV EAX,dword ptr [EDX + 0x14]      ; 004fb339
    MOV ECX,dword ptr [EDX + 0x30]      ; 004fb33c
    ADD EBX,EAX                         ; 004fb33f
    MOV EAX,dword ptr [EDX + 0x3c]      ; 004fb341
    MOV dword ptr [EDX + 0x10],EBX      ; 004fb344
    MOV EBX,dword ptr [ESP + 0xc]       ; 004fb347
    ADD ESI,EAX                         ; 004fb34b
    INC EBX                             ; 004fb34d
    MOV EAX,dword ptr [EDX + 0x44]      ; 004fb34e
    MOV dword ptr [EDX + 0x38],ESI      ; 004fb351
    ADD EDI,EAX                         ; 004fb354
    MOV EAX,dword ptr [EDX + 0x34]      ; 004fb356
    MOV dword ptr [EDX + 0x40],EDI      ; 004fb359
    ADD ECX,EAX                         ; 004fb35c
    MOV dword ptr [ESP + 0xc],EBX       ; 004fb35e
    MOV dword ptr [EDX + 0x30],ECX      ; 004fb362
    JMP 0x004faf02                      ; 004fb365
        ;   XREF to: 004faf02 (UNCONDITIONAL_JUMP)  ; LAB_004faf02

