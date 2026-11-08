; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040f950(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_0040f938 = 0040fe44
;   TerminatedCString s_s_confused_while_walking_005cb535
;   undefined4 DAT_00609810
;   void* PTR_DAT_00609ed0 = 007c158c
;   undefined4 DAT_006141f0
;   undefined4 DAT_00614d30
;   undefined4 DAT_007bc498
;   undefined4 DAT_007bc4cc
;   undefined4 DAT_007bc4d0
;   undefined4 DAT_007bc4dc
;   undefined4 DAT_007c158c
;   undefined4 DAT_0265370c
;
; Called Functions:
;   FUN_00408d70
;   FUN_0040cf60
;   FUN_00410080
;   FUN_00410590
;   FUN_00423a10
;   FUN_00424470
;   FUN_004244b0
;   FUN_004287f0
;   FUN_00429e90
;   FUN_0042b2a0
;   FUN_00436710
;   FUN_0048e340
;   FUN_0049d230
;   FUN_0049e850
;   FUN_005035c0
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f950
        ;   Label: FUN_0040f950
    PUSH ESI                            ; 0040f951
    PUSH EDI                            ; 0040f952
    PUSH EBP                            ; 0040f953
    SUB ESP,0xa8                        ; 0040f954
    MOV EBX,dword ptr [ESP + 0xbc]      ; 0040f95a
    MOV EDX,dword ptr [EBX + 0x25738]   ; 0040f961
    LEA ESI,[EBX + 0x2b4]               ; 0040f967
    TEST EDX,EDX                        ; 0040f96d
    JZ 0x0040f9b5                       ; 0040f96f
        ;   XREF to: 0040f9b5 (CONDITIONAL_JUMP)  ; LAB_0040f9b5
    LEA EAX,[EBX + 0x256a4]             ; 0040f971
    PUSH EAX                            ; 0040f977
    MOV ECX,dword ptr [0x006141f0]      ; 0040f978 | DAT_006141f0
    PUSH ECX                            ; 0040f97e
    CALL FUN_0048e340                   ; 0040f97f
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 0040f984
    TEST EAX,EAX                        ; 0040f987
    JZ 0x0040f998                       ; 0040f989
        ;   XREF to: 0040f998 (CONDITIONAL_JUMP)  ; LAB_0040f998
    PUSH 0x1                            ; 0040f98b
    PUSH 0x7                            ; 0040f98d
    PUSH ESI                            ; 0040f98f
    CALL FUN_00503620                   ; 0040f990
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 0040f995
    CMP dword ptr [EBX + 0x25738],0x0   ; 0040f998
        ;   Label: LAB_0040f998
    JNZ 0x0040f9f2                      ; 0040f99f
        ;   XREF to: 0040f9f2 (CONDITIONAL_JUMP)  ; LAB_0040f9f2
    CMP dword ptr [EBX + 0x10a64],0x2   ; 0040f9a1
    JNZ 0x0040f9f2                      ; 0040f9a8
        ;   XREF to: 0040f9f2 (CONDITIONAL_JUMP)  ; LAB_0040f9f2
    ADD ESP,0xa8                        ; 0040f9aa
        ;   Label: LAB_0040f9aa
    POP EBP                             ; 0040f9b0
    POP EDI                             ; 0040f9b1
    POP ESI                             ; 0040f9b2
    POP EBX                             ; 0040f9b3
    RET                                 ; 0040f9b4
    LEA EAX,[EBX + 0x25640]             ; 0040f9b5
        ;   Label: LAB_0040f9b5
    PUSH EAX                            ; 0040f9bb
    MOV EDI,dword ptr [0x006141f0]      ; 0040f9bc | DAT_006141f0
    PUSH EDI                            ; 0040f9c2
    CALL FUN_0048e340                   ; 0040f9c3
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 0040f9c8
    TEST EAX,EAX                        ; 0040f9cb
    JZ 0x0040f998                       ; 0040f9cd
        ;   XREF to: 0040f998 (CONDITIONAL_JUMP)  ; LAB_0040f998
    PUSH 0x1                            ; 0040f9cf
    PUSH 0x6                            ; 0040f9d1
    PUSH ESI                            ; 0040f9d3
    MOV dword ptr [EBX + 0x25738],0x1   ; 0040f9d4
    CALL FUN_00503620                   ; 0040f9de
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 0040f9e3
    MOV dword ptr [EBX + 0x2573c],0x1   ; 0040f9e6
    JMP 0x0040f998                      ; 0040f9f0
        ;   XREF to: 0040f998 (UNCONDITIONAL_JUMP)  ; LAB_0040f998
    PUSH dword ptr [ESP + 0xc0]         ; 0040f9f2
        ;   Label: LAB_0040f9f2
    PUSH EBX                            ; 0040f9f9
    CALL FUN_004244b0                   ; 0040f9fa
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004244b0()
    ADD ESP,0x8                         ; 0040f9ff
    TEST EAX,EAX                        ; 0040fa02
    JZ 0x0040f9aa                       ; 0040fa04
        ;   XREF to: 0040f9aa (CONDITIONAL_JUMP)  ; LAB_0040f9aa
    CMP dword ptr [EBX + 0x10a64],0x2   ; 0040fa06
    JZ 0x0040fc14                       ; 0040fa0d
        ;   XREF to: 0040fc14 (CONDITIONAL_JUMP)  ; LAB_0040fc14
    PUSH dword ptr [ESP + 0xc0]         ; 0040fa13
        ;   Label: LAB_0040fa13
    PUSH EBX                            ; 0040fa1a
    CALL FUN_0042b2a0                   ; 0040fa1b
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b2a0()
    ADD ESP,0x8                         ; 0040fa20
    FLD float ptr [EBX + 0x10a60]       ; 0040fa23
    FSUB float ptr [ESP + 0xc0]         ; 0040fa29
    FST float ptr [EBX + 0x10a60]       ; 0040fa30
    FLDZ                                ; 0040fa36
    FCOMPP                              ; 0040fa38
    FNSTSW AX                           ; 0040fa3a
    SAHF                                ; 0040fa3c
    JBE 0x0040fa49                      ; 0040fa3d
        ;   XREF to: 0040fa49 (CONDITIONAL_JUMP)  ; LAB_0040fa49
    MOV dword ptr [EBX + 0x10a60],0x0   ; 0040fa3f
    LEA EAX,[EBX + 0x2508]              ; 0040fa49
        ;   Label: LAB_0040fa49
    PUSH dword ptr [ESP + 0xc0]         ; 0040fa4f
    MOV dword ptr [EAX + 0x8],0x0       ; 0040fa56
    PUSH EBX                            ; 0040fa5d
    MOV EDX,dword ptr [EAX + 0x8]       ; 0040fa5e
    MOV dword ptr [EAX + 0x4],EDX       ; 0040fa61
    MOV EDX,dword ptr [EAX + 0x4]       ; 0040fa64
    MOV dword ptr [EAX],EDX             ; 0040fa67
    CALL FUN_00410590                   ; 0040fa69
        ;   XREF to: 00410590 (UNCONDITIONAL_CALL)  ; undefined FUN_00410590()
    MOV ECX,dword ptr [EBX + 0x25738]   ; 0040fa6e
    ADD ESP,0x8                         ; 0040fa74
    TEST ECX,ECX                        ; 0040fa77
    JZ 0x0040f9aa                       ; 0040fa79
        ;   XREF to: 0040f9aa (CONDITIONAL_JUMP)  ; LAB_0040f9aa
    PUSH dword ptr [ESP + 0xc0]         ; 0040fa7f
    PUSH EBX                            ; 0040fa86
    CALL FUN_004287f0                   ; 0040fa87
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004287f0()
    MOV ESI,EAX                         ; 0040fa8c
    ADD ESP,0x8                         ; 0040fa8e
    LEA EAX,[EBX + 0x2b4]               ; 0040fa91
    TEST ESI,ESI                        ; 0040fa97
    JZ 0x0040feca                       ; 0040fa99
        ;   XREF to: 0040feca (CONDITIONAL_JUMP)  ; LAB_0040feca
    MOV ESI,dword ptr [EBX + 0x27ac]    ; 0040fa9f
    CMP ESI,0x2                         ; 0040faa5
    JNC 0x0040fc56                      ; 0040faa8
        ;   XREF to: 0040fc56 (CONDITIONAL_JUMP)  ; LAB_0040fc56
    CMP ESI,0x1                         ; 0040faae
    JNZ 0x0040fc5d                      ; 0040fab1
        ;   XREF to: 0040fc5d (CONDITIONAL_JUMP)  ; LAB_0040fc5d
    PUSH ESI                            ; 0040fab7
    PUSH ESI                            ; 0040fab8
    PUSH EAX                            ; 0040fab9
        ;   Label: LAB_0040fab9
    CALL FUN_00503620                   ; 0040faba
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
        ;   Label: LAB_0040faba
    ADD ESP,0xc                         ; 0040fabf
        ;   Label: LAB_0040fabf
    LEA EAX,[EBX + 0x2508]              ; 0040fac2
        ;   Label: default
    PUSH dword ptr [ESP + 0xc0]         ; 0040fac8
    MOV dword ptr [EAX + 0x8],0x0       ; 0040facf
    PUSH EBX                            ; 0040fad6
    MOV EDX,dword ptr [EAX + 0x8]       ; 0040fad7
    MOV dword ptr [EAX + 0x4],EDX       ; 0040fada
    MOV EDX,dword ptr [EAX + 0x4]       ; 0040fadd
    MOV dword ptr [EAX],EDX             ; 0040fae0
    CALL FUN_00423a10                   ; 0040fae2
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00423a10()
    ADD ESP,0x8                         ; 0040fae7
    PUSH EBX                            ; 0040faea
    CALL FUN_00424470                   ; 0040faeb
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; undefined FUN_00424470()
    ADD ESP,0x4                         ; 0040faf0
    LEA EBP,[EBX + 0x2b4]               ; 0040faf3
    PUSH EBP                            ; 0040faf9
    CALL FUN_00544f00                   ; 0040fafa
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00544f00()
    ADD ESP,0x4                         ; 0040faff
    PUSH 0x544cc0                       ; 0040fb02 | LAB_00544cc0
    MOV EAX,[0x007bc498]                ; 0040fb07 | DAT_007bc498
    PUSH EAX                            ; 0040fb0c
    LEA EAX,[EBX + 0x25708]             ; 0040fb0d
    PUSH dword ptr [EBX + 0x25714]      ; 0040fb13
    PUSH EAX                            ; 0040fb19
    LEA ESI,[ESP + 0x10]                ; 0040fb1a
    CALL FUN_00594380                   ; 0040fb1e
        ;   XREF to: 00594380 (UNCONDITIONAL_CALL)  ; undefined FUN_00594380()
    ADD ESP,0x4                         ; 0040fb23
    LEA EAX,[ESP + 0x1c]                ; 0040fb26
    PUSH EAX                            ; 0040fb2a
    LEA EDI,[ESP + 0x20]                ; 0040fb2b
    LEA ESI,[ESP + 0x10]                ; 0040fb2f
    PUSH EBP                            ; 0040fb33
    MOVSD ES:EDI,ESI                    ; 0040fb34
    MOVSD ES:EDI,ESI                    ; 0040fb35
    MOVSD ES:EDI,ESI                    ; 0040fb36
    MOVSD ES:EDI,ESI                    ; 0040fb37
    CALL FUN_005466c0                   ; 0040fb38
        ;   XREF to: 005466c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005466c0()
    ADD ESP,0x14                        ; 0040fb3d
    PUSH dword ptr [ESP + 0xc0]         ; 0040fb40
    PUSH EBX                            ; 0040fb47
    XOR ESI,ESI                         ; 0040fb48
    CALL FUN_00429e90                   ; 0040fb4a
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00429e90()
    ADD ESP,0x8                         ; 0040fb4f
    ADD EBX,0x20                        ; 0040fb52
    PUSH 0x40000000                     ; 0040fb55
        ;   Label: LAB_0040fb55
    PUSH 0xc0000000                     ; 0040fb5a
    CALL FUN_0040cf60                   ; 0040fb5f
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0xac],EAX      ; 0040fb64
    FLD float ptr [ESP + 0xac]          ; 0040fb6b
    ADD ESP,0x8                         ; 0040fb72
    INC ESI                             ; 0040fb75
    MOV EDX,0x40000000                  ; 0040fb76
    PUSH 0x40000000                     ; 0040fb7b
    FSTP float ptr [ESP + 0x54]         ; 0040fb80
    PUSH 0xc0000000                     ; 0040fb84
    MOV dword ptr [ESP + 0x5c],EDX      ; 0040fb89
    CALL FUN_0040cf60                   ; 0040fb8d
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0xac],EAX      ; 0040fb92
    MOV ECX,dword ptr [0x00614d30]      ; 0040fb99 | DAT_00614d30
    FLD float ptr [ESP + 0xac]          ; 0040fb9f
    ADD ESP,0x8                         ; 0040fba6
    LEA EAX,[ESP + 0x50]                ; 0040fba9
    FLD float ptr [ESP + 0x50]          ; 0040fbad
    FLD float ptr [ESP + 0x54]          ; 0040fbb1
    FXCH ST2                            ; 0040fbb5
    FSTP float ptr [ESP + 0x58]         ; 0040fbb7
    PUSH 0xffff                         ; 0040fbbb
    FLD float ptr [ESP + 0x5c]          ; 0040fbc0
    PUSH 0x0                            ; 0040fbc4
    FXCH                                ; 0040fbc6
    FADD float ptr [EBX]                ; 0040fbc8
    PUSH 0x40000000                     ; 0040fbca
    FSTP float ptr [ESP + 0x5c]         ; 0040fbcf
    FXCH                                ; 0040fbd3
    FADD float ptr [EBX + 0x4]          ; 0040fbd5
    PUSH EAX                            ; 0040fbd8
    FSTP float ptr [ESP + 0x64]         ; 0040fbd9
    FADD float ptr [EBX + 0x8]          ; 0040fbdd
    PUSH ECX                            ; 0040fbe0
    FSTP float ptr [ESP + 0x6c]         ; 0040fbe1
    CALL FUN_0049d230                   ; 0040fbe5
        ;   XREF to: 0049d230 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d230()
    ADD ESP,0x14                        ; 0040fbea
    CMP ESI,0x2                         ; 0040fbed
    JL 0x0040fb55                       ; 0040fbf0
        ;   XREF to: 0040fb55 (CONDITIONAL_JUMP)  ; LAB_0040fb55
    FLD float ptr [0x007bc4dc]          ; 0040fbf6 | DAT_007bc4dc
    FADD float ptr [ESP + 0xc0]         ; 0040fbfc
    FSTP float ptr [0x007bc4dc]         ; 0040fc03 | DAT_007bc4dc
    ADD ESP,0xa8                        ; 0040fc09
    POP EBP                             ; 0040fc0f
    POP EDI                             ; 0040fc10
    POP ESI                             ; 0040fc11
    POP EBX                             ; 0040fc12
    RET                                 ; 0040fc13
    PUSH dword ptr [ESP + 0xc0]         ; 0040fc14
        ;   Label: LAB_0040fc14
    PUSH EBX                            ; 0040fc1b
    CALL FUN_00410080                   ; 0040fc1c
        ;   XREF to: 00410080 (UNCONDITIONAL_CALL)  ; undefined FUN_00410080()
    ADD ESP,0x8                         ; 0040fc21
    JMP 0x0040fa13                      ; 0040fc24
        ;   XREF to: 0040fa13 (UNCONDITIONAL_JUMP)  ; LAB_0040fa13
    PUSH 0x1                            ; 0040fc29
        ;   Label: LAB_0040fc29
    PUSH 0x0                            ; 0040fc2b
    PUSH EAX                            ; 0040fc2d
    CALL FUN_00503620                   ; 0040fc2e
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 0040fc33
    PUSH EBX                            ; 0040fc36
    PUSH 0x5cb535                       ; 0040fc37 | = "%s confused while walking to scriptDe..."
    MOV EBP,dword ptr [0x00609ed0]      ; 0040fc3c | PTR_DAT_00609ed0
    PUSH EBP                            ; 0040fc42 | DAT_007c158c
    CALL FUN_00436710                   ; 0040fc43
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    JMP 0x0040fabf                      ; 0040fc48
        ;   XREF to: 0040fabf (UNCONDITIONAL_JUMP)  ; LAB_0040fabf
    PUSH 0x1                            ; 0040fc4d
        ;   Label: LAB_0040fc4d
    PUSH 0x3                            ; 0040fc4f
    JMP 0x0040fab9                      ; 0040fc51
        ;   XREF to: 0040fab9 (UNCONDITIONAL_JUMP)  ; LAB_0040fab9
    JBE 0x0040fc4d                      ; 0040fc56
        ;   XREF to: 0040fc4d (CONDITIONAL_JUMP)  ; LAB_0040fc4d
        ;   Label: LAB_0040fc56
    CMP ESI,0x3                         ; 0040fc58
    JZ 0x0040fc29                       ; 0040fc5b
        ;   XREF to: 0040fc29 (CONDITIONAL_JUMP)  ; LAB_0040fc29
    PUSH 0x1                            ; 0040fc5d
        ;   Label: LAB_0040fc5d
    PUSH 0x0                            ; 0040fc5f
    LEA EAX,[EBX + 0x2b4]               ; 0040fc61
    JMP 0x0040fab9                      ; 0040fc67
        ;   XREF to: 0040fab9 (UNCONDITIONAL_JUMP)  ; LAB_0040fab9
    MOV ESI,dword ptr [0x007bc4cc]      ; 0040fc6c | DAT_007bc4cc
        ;   Label: caseD_4
    LEA EAX,[ESI*0x4 + 0x0]             ; 0040fc72
    SUB EAX,ESI                         ; 0040fc79
    MOV ESI,EAX                         ; 0040fc7b
    SHL ESI,0x4                         ; 0040fc7d
    LEA EAX,[EBX + 0x1134]              ; 0040fc80
    ADD EAX,ESI                         ; 0040fc86
    PUSH EAX                            ; 0040fc88
    PUSH 0x265370c                      ; 0040fc89 | DAT_0265370c
    LEA ESI,[ESP + 0x94]                ; 0040fc8e
    LEA EDI,[ESP + 0x88]                ; 0040fc95
    CALL FUN_00591530                   ; 0040fc9c
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    ADD ESP,0x8                         ; 0040fca1
    LEA EAX,[ESP + 0x80]                ; 0040fca4
    LEA ESI,[ESP + 0x8c]                ; 0040fcab
    PUSH EAX                            ; 0040fcb2
    MOVSD ES:EDI,ESI                    ; 0040fcb3
    MOVSD ES:EDI,ESI                    ; 0040fcb4
    MOVSD ES:EDI,ESI                    ; 0040fcb5
    PUSH EBX                            ; 0040fcb6
    LEA ESI,[ESP + 0x4c]                ; 0040fcb7
    LEA EDI,[ESP + 0x28]                ; 0040fcbb
    CALL FUN_00408d70                   ; 0040fcbf
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA ESI,[ESP + 0x4c]                ; 0040fcc4
    ADD ESP,0x8                         ; 0040fcc8
    MOVSD ES:EDI,ESI                    ; 0040fccb
    MOVSD ES:EDI,ESI                    ; 0040fccc
    MOVSD ES:EDI,ESI                    ; 0040fccd
    LEA EAX,[ESP + 0x74]                ; 0040fcce
    LEA ESI,[ESP + 0x20]                ; 0040fcd2
    CMP EAX,ESI                         ; 0040fcd6
    JZ 0x0040fcf2                       ; 0040fcd8
        ;   XREF to: 0040fcf2 (CONDITIONAL_JUMP)  ; LAB_0040fcf2
    MOV EAX,dword ptr [ESP + 0x20]      ; 0040fcda
    MOV dword ptr [ESP + 0x74],EAX      ; 0040fcde
    MOV EAX,dword ptr [ESP + 0x24]      ; 0040fce2
    MOV dword ptr [ESP + 0x78],EAX      ; 0040fce6
    MOV EAX,dword ptr [ESP + 0x28]      ; 0040fcea
    MOV dword ptr [ESP + 0x7c],EAX      ; 0040fcee
    MOV ESI,dword ptr [0x007bc4d0]      ; 0040fcf2 | DAT_007bc4d0
        ;   Label: LAB_0040fcf2
    LEA EAX,[ESI*0x4 + 0x0]             ; 0040fcf8
    SUB EAX,ESI                         ; 0040fcff
    MOV ESI,EAX                         ; 0040fd01
    SHL ESI,0x4                         ; 0040fd03
    LEA EAX,[EBX + 0x1134]              ; 0040fd06
    ADD EAX,ESI                         ; 0040fd0c
    PUSH EAX                            ; 0040fd0e
    PUSH 0x265370c                      ; 0040fd0f | DAT_0265370c
    LEA ESI,[ESP + 0x40]                ; 0040fd14
    LEA EDI,[ESP + 0x70]                ; 0040fd18
    CALL FUN_00591530                   ; 0040fd1c
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    ADD ESP,0x8                         ; 0040fd21
    LEA EAX,[ESP + 0x68]                ; 0040fd24
    LEA ESI,[ESP + 0x38]                ; 0040fd28
    PUSH EAX                            ; 0040fd2c
    MOVSD ES:EDI,ESI                    ; 0040fd2d
    MOVSD ES:EDI,ESI                    ; 0040fd2e
    MOVSD ES:EDI,ESI                    ; 0040fd2f
    PUSH EBX                            ; 0040fd30
    LEA ESI,[ESP + 0x34]                ; 0040fd31
    LEA EDI,[ESP + 0x64]                ; 0040fd35
    CALL FUN_00408d70                   ; 0040fd39
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA ESI,[ESP + 0x34]                ; 0040fd3e
    ADD ESP,0x8                         ; 0040fd42
    MOVSD ES:EDI,ESI                    ; 0040fd45
    MOVSD ES:EDI,ESI                    ; 0040fd46
    MOVSD ES:EDI,ESI                    ; 0040fd47
    LEA EAX,[ESP + 0x5c]                ; 0040fd48
    LEA ESI,[ESP + 0x98]                ; 0040fd4c
    CMP ESI,EAX                         ; 0040fd53
    JZ 0x0040fd78                       ; 0040fd55
        ;   XREF to: 0040fd78 (CONDITIONAL_JUMP)  ; LAB_0040fd78
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0040fd57
    MOV dword ptr [ESP + 0x98],EAX      ; 0040fd5b
    MOV EAX,dword ptr [ESP + 0x60]      ; 0040fd62
    MOV dword ptr [ESP + 0x9c],EAX      ; 0040fd66
    MOV EAX,dword ptr [ESP + 0x64]      ; 0040fd6d
    MOV dword ptr [ESP + 0xa0],EAX      ; 0040fd71
    CMP dword ptr [EBX + 0x2571c],0x0   ; 0040fd78
        ;   Label: LAB_0040fd78
    JNZ 0x0040fde5                      ; 0040fd7f
        ;   XREF to: 0040fde5 (CONDITIONAL_JUMP)  ; LAB_0040fde5
    PUSH 0x609810                       ; 0040fd81 | DAT_00609810
    PUSH 0x3f000000                     ; 0040fd86
    PUSH 0x3f000000                     ; 0040fd8b
    LEA EAX,[EBX + 0x25720]             ; 0040fd90
    PUSH 0x40000000                     ; 0040fd96
    PUSH EAX                            ; 0040fd9b
    LEA EAX,[ESP + 0x88]                ; 0040fd9c
    PUSH EAX                            ; 0040fda3
    MOV EDI,dword ptr [0x00614d30]      ; 0040fda4 | DAT_00614d30
    PUSH EDI                            ; 0040fdaa
    CALL FUN_0049e850                   ; 0040fdab
        ;   XREF to: 0049e850 (UNCONDITIONAL_CALL)  ; undefined FUN_0049e850()
    ADD ESP,0x1c                        ; 0040fdb0
    PUSH 0x609810                       ; 0040fdb3 | DAT_00609810
    PUSH 0x3f000000                     ; 0040fdb8
    PUSH 0x3f000000                     ; 0040fdbd
    LEA EAX,[EBX + 0x2572c]             ; 0040fdc2
    PUSH 0x40000000                     ; 0040fdc8
    PUSH EAX                            ; 0040fdcd
    LEA EAX,[ESP + 0xac]                ; 0040fdce
    PUSH EAX                            ; 0040fdd5
    MOV EBP,dword ptr [0x00614d30]      ; 0040fdd6 | DAT_00614d30
    PUSH EBP                            ; 0040fddc
    CALL FUN_0049e850                   ; 0040fddd
        ;   XREF to: 0049e850 (UNCONDITIONAL_CALL)  ; undefined FUN_0049e850()
    ADD ESP,0x1c                        ; 0040fde2
    LEA EAX,[ESP + 0x74]                ; 0040fde5
        ;   Label: LAB_0040fde5
    LEA ESI,[EBX + 0x25720]             ; 0040fde9
    CMP ESI,EAX                         ; 0040fdef
    JZ 0x0040fe07                       ; 0040fdf1
        ;   XREF to: 0040fe07 (CONDITIONAL_JUMP)  ; LAB_0040fe07
    MOV EAX,dword ptr [ESP + 0x74]      ; 0040fdf3
    MOV dword ptr [ESI],EAX             ; 0040fdf7
    MOV EAX,dword ptr [ESP + 0x78]      ; 0040fdf9
    MOV dword ptr [ESI + 0x4],EAX       ; 0040fdfd
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0040fe00
    MOV dword ptr [ESI + 0x8],EAX       ; 0040fe04
    LEA EAX,[ESP + 0x98]                ; 0040fe07
        ;   Label: LAB_0040fe07
    LEA ESI,[EBX + 0x2572c]             ; 0040fe0e
    CMP ESI,EAX                         ; 0040fe14
    JZ 0x0040fe35                       ; 0040fe16
        ;   XREF to: 0040fe35 (CONDITIONAL_JUMP)  ; LAB_0040fe35
    MOV EAX,dword ptr [ESP + 0x98]      ; 0040fe18
    MOV dword ptr [ESI],EAX             ; 0040fe1f
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0040fe21
    MOV dword ptr [ESI + 0x4],EAX       ; 0040fe28
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0040fe2b
    MOV dword ptr [ESI + 0x8],EAX       ; 0040fe32
    MOV dword ptr [EBX + 0x2571c],0x0   ; 0040fe35
        ;   Label: LAB_0040fe35
    JMP 0x0040fac2                      ; 0040fe3f
        ;   XREF to: 0040fac2 (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBX + 0x10a68]   ; 0040fe44
        ;   Label: caseD_0
    XOR ESI,ESI                         ; 0040fe4a
    TEST EAX,EAX                        ; 0040fe4c
    JZ 0x0040fe5e                       ; 0040fe4e
        ;   XREF to: 0040fe5e (CONDITIONAL_JUMP)  ; LAB_0040fe5e
    CMP dword ptr [EBX + 0x10a70],0x0   ; 0040fe50
    JZ 0x0040fec3                       ; 0040fe57
        ;   XREF to: 0040fec3 (CONDITIONAL_JUMP)  ; LAB_0040fec3
    MOV ESI,0x3                         ; 0040fe59
    CMP dword ptr [EBX + 0x10a6c],0x0   ; 0040fe5e
        ;   Label: LAB_0040fe5e
    JZ 0x0040fe6c                       ; 0040fe65
        ;   XREF to: 0040fe6c (CONDITIONAL_JUMP)  ; LAB_0040fe6c
    MOV ESI,0x2                         ; 0040fe67
    CMP dword ptr [EBX + 0x10a74],0x0   ; 0040fe6c
        ;   Label: LAB_0040fe6c
    JZ 0x0040fe8e                       ; 0040fe73
        ;   XREF to: 0040fe8e (CONDITIONAL_JUMP)  ; LAB_0040fe8e
    MOV dword ptr [EBX + 0x2571c],0x1   ; 0040fe75
    MOV ESI,0x4                         ; 0040fe7f
    MOV dword ptr [EBX + 0x10a74],0x0   ; 0040fe84
    FLD float ptr [EBX + 0x10a90]       ; 0040fe8e
        ;   Label: LAB_0040fe8e
    LEA EBP,[EBX + 0x2b4]               ; 0040fe94
    FMUL float ptr [EBX + 0x2598]       ; 0040fe9a
    PUSH EBP                            ; 0040fea0
    FSTP float ptr [EBX + 0x2578]       ; 0040fea1
    CALL FUN_005035c0                   ; 0040fea7
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0040feac
    ADD ESP,0x4                         ; 0040feaf
    CMP ESI,EAX                         ; 0040feb2
    JZ 0x0040fac2                       ; 0040feb4
        ;   XREF to: 0040fac2 (CONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 0040feba
    PUSH ESI                            ; 0040febc
    PUSH EBP                            ; 0040febd
    JMP 0x0040faba                      ; 0040febe
        ;   XREF to: 0040faba (UNCONDITIONAL_JUMP)  ; LAB_0040faba
    MOV ESI,0x1                         ; 0040fec3
        ;   Label: LAB_0040fec3
    JMP 0x0040fe5e                      ; 0040fec8
        ;   XREF to: 0040fe5e (UNCONDITIONAL_JUMP)  ; LAB_0040fe5e
    PUSH EAX                            ; 0040feca
        ;   Label: LAB_0040feca
    CALL FUN_005035c0                   ; 0040fecb
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0040fed0
    ADD ESP,0x4                         ; 0040fed3
    CMP EAX,0x4                         ; 0040fed6
    JA 0x0040fac2                       ; 0040fed9
        ;   XREF to: 0040fac2 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x40f938]  ; 0040fedf | caseD_3 | caseD_4 | switchdataD_0040f938
        ;   Label: switchD

