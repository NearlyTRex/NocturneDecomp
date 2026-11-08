; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044ac60(int param_1)
;
; Local Variables:
; undefined4       Stack[-0xd8]:4  local_d8
; undefined        Stack[-0xd4]:1  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00440000 at 00440084
;
; Referenced Globals:
;   undefined4 DAT_005cf43f
;   undefined4 DAT_005cf447
;   undefined4 DAT_005cf44f
;   undefined4 DAT_005cf457
;   undefined4 DAT_005cf45f
;   undefined4 DAT_005f5050
;   undefined4 DAT_0060b280
;   undefined4 DAT_01b1387c
;   undefined4 DAT_01b13880
;   undefined4 DAT_01b13884
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   FUN_0043f820
;   FUN_004495a0
;   FUN_004496e0
;   FUN_0044c830
;   FUN_0046b2b0
;   FUN_0046b350
;   FUN_0046b5e0
;   FUN_0046b750
;   FUN_0046b880
;   FUN_0055d723
;   FUN_005b7ff0
;   thunk_FUN_004e9810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044ac60
        ;   Label: FUN_0044ac60
    PUSH ESI                            ; 0044ac61
    PUSH EDI                            ; 0044ac62
    PUSH EBP                            ; 0044ac63
    MOV EBP,ESP                         ; 0044ac64
    SUB ESP,0xc8                        ; 0044ac66
    AND ESP,0xfffffff8                  ; 0044ac6c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044ac6f
    ADD EAX,0x4                         ; 0044ac72
    PUSH EAX                            ; 0044ac75
    MOV EDX,dword ptr [0x0060b280]      ; 0044ac76 | DAT_0060b280
    PUSH EDX                            ; 0044ac7c | DAT_01ba5c50
    CALL FUN_0046b2b0                   ; 0044ac7d
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b2b0()
    ADD ESP,0x8                         ; 0044ac82
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044ac85
    ADD EAX,0x10                        ; 0044ac88
    PUSH EAX                            ; 0044ac8b
    LEA ESI,[ESP + 0x60]                ; 0044ac8c
    CALL FUN_004496e0                   ; 0044ac90
        ;   XREF to: 004496e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004496e0()
    ADD ESP,0x4                         ; 0044ac95
    PUSH 0x0                            ; 0044ac98
    LEA EAX,[ESP + 0x54]                ; 0044ac9a
    LEA EDI,[ESP + 0x54]                ; 0044ac9e
    PUSH EAX                            ; 0044aca2
    MOV ECX,dword ptr [0x0060b280]      ; 0044aca3 | DAT_0060b280
    LEA ESI,[ESP + 0x64]                ; 0044aca9
    PUSH ECX                            ; 0044acad | DAT_01ba5c50
    MOVSD ES:EDI,ESI                    ; 0044acae
    MOVSD ES:EDI,ESI                    ; 0044acaf
    MOVSD ES:EDI,ESI                    ; 0044acb0
    CALL FUN_0046b350                   ; 0044acb1
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b350()
    ADD ESP,0xc                         ; 0044acb6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044acb9
    FLD float ptr [EAX + 0x38]          ; 0044acbc
    FDIVR double ptr [0x005cf43f]       ; 0044acbf | DAT_005cf43f
    FMUL float ptr [EAX + 0x140]        ; 0044acc5
    XOR ESI,ESI                         ; 0044accb
    XOR EDI,EDI                         ; 0044accd
    MOV EAX,dword ptr [EAX + 0x140]     ; 0044accf
    FSTP float ptr [ESP]                ; 0044acd5
    MOV dword ptr [ESP + 0x40],EAX      ; 0044acd8
    MOV dword ptr [ESP + 0xc4],ESI      ; 0044acdc
        ;   Label: LAB_0044acdc
    FILD dword ptr [ESP + 0xc4]         ; 0044ace3
    FMUL double ptr [0x005cf447]        ; 0044acea | DAT_005cf447
    FMUL double ptr [0x005cf44f]        ; 0044acf0 | DAT_005cf44f
    FLD ST0                             ; 0044acf6
    FCOS                                ; 0044acf8
    FXCH                                ; 0044acfa
    FSIN                                ; 0044acfc
    FLD float ptr [ESP]                 ; 0044acfe
    FXCH ST2                            ; 0044ad01
    FMUL ST2                            ; 0044ad03
    FXCH                                ; 0044ad05
    FMULP ST2                           ; 0044ad07
    LEA EBX,[ESP + 0x8c]                ; 0044ad09
    MOV EDX,dword ptr [0x0060b280]      ; 0044ad10 | DAT_0060b280
    LEA EAX,[ESP + 0x38]                ; 0044ad16
    FSTP float ptr [ESP + 0x38]         ; 0044ad1a
    FSTP float ptr [ESP + 0x3c]         ; 0044ad1e
    FLD float ptr [EAX]                 ; 0044ad22
    FMUL float ptr [0x005f5050]         ; 0044ad24 | DAT_005f5050
    FISTP dword ptr [EBX]               ; 0044ad2a
    FLD float ptr [EAX + 0x4]           ; 0044ad2c
    FMUL float ptr [0x005f5050]         ; 0044ad2f | DAT_005f5050
    FISTP dword ptr [EBX + 0x4]         ; 0044ad35
    FLD float ptr [EAX + 0x8]           ; 0044ad38
    FMUL float ptr [0x005f5050]         ; 0044ad3b | DAT_005f5050
    FISTP dword ptr [EBX + 0x8]         ; 0044ad41
    LEA EAX,[ESP + 0x8c]                ; 0044ad44
    PUSH EAX                            ; 0044ad4b
    MOV EAX,dword ptr [EDX]             ; 0044ad4c | DAT_01ba5c50
    ADD EAX,EDI                         ; 0044ad4e
    PUSH EAX                            ; 0044ad50
    CALL FUN_0055d723                   ; 0044ad51
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    MOV EDX,dword ptr [0x0060b280]      ; 0044ad56 | DAT_0060b280
    ADD EDI,0x30                        ; 0044ad5c
    MOV EAX,dword ptr [EDX]             ; 0044ad5f | DAT_01ba5c50
    INC ESI                             ; 0044ad61
    ADD ESP,0x8                         ; 0044ad62
    MOV dword ptr [EDI + EAX*0x1 + -0x10],0x0 ; 0044ad65
    CMP ESI,0x10                        ; 0044ad6d
    JL 0x0044acdc                       ; 0044ad70
        ;   XREF to: 0044acdc (CONDITIONAL_JUMP)  ; LAB_0044acdc
    LEA EBX,[ESP + 0x2c]                ; 0044ad76
    MOV EAX,0x1b1387c                   ; 0044ad7a
    FLD float ptr [EAX]                 ; 0044ad7f | DAT_01b1387c
    FMUL float ptr [0x005f5050]         ; 0044ad81 | DAT_005f5050
    FISTP dword ptr [EBX]               ; 0044ad87
    FLD float ptr [EAX + 0x4]           ; 0044ad89 | DAT_01b13880
    FMUL float ptr [0x005f5050]         ; 0044ad8c | DAT_005f5050
    FISTP dword ptr [EBX + 0x4]         ; 0044ad92
    FLD float ptr [EAX + 0x8]           ; 0044ad95 | DAT_01b13884
    FMUL float ptr [0x005f5050]         ; 0044ad98 | DAT_005f5050
    FISTP dword ptr [EBX + 0x8]         ; 0044ad9e
    LEA EAX,[ESP + 0x2c]                ; 0044ada1
    PUSH EAX                            ; 0044ada5
    MOV EAX,dword ptr [EDX]             ; 0044ada6 | DAT_01ba5c50
    ADD EAX,0x300                       ; 0044ada8
    PUSH EAX                            ; 0044adad
    CALL FUN_0055d723                   ; 0044adae
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    ADD ESP,0x8                         ; 0044adb3
    MOV EAX,[0x0060b280]                ; 0044adb6 | DAT_0060b280
    PUSH 0x1                            ; 0044adbb
    MOV EDX,dword ptr [EAX]             ; 0044adbd | DAT_01ba5c50
    PUSH EAX                            ; 0044adbf | DAT_01ba5c50
    MOV dword ptr [EDX + 0x320],0xffff  ; 0044adc0
    CALL FUN_0046b880                   ; 0044adca
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b880()
    ADD ESP,0x8                         ; 0044adcf
    MOV ESI,dword ptr [0x0060b280]      ; 0044add2 | DAT_0060b280
    PUSH ESI                            ; 0044add8 | DAT_01ba5c50
    LEA ESI,[ESP + 0x84]                ; 0044add9
    LEA EDI,[ESP + 0x6c]                ; 0044ade0
    CALL FUN_0046b5e0                   ; 0044ade4
        ;   XREF to: 0046b5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b5e0()
    LEA ESI,[ESP + 0x84]                ; 0044ade9
    ADD ESP,0x4                         ; 0044adf0
    XOR EBX,EBX                         ; 0044adf3
    MOVSD ES:EDI,ESI                    ; 0044adf5
    MOVSD ES:EDI,ESI                    ; 0044adf6
    MOVSD ES:EDI,ESI                    ; 0044adf7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044adf8
    FLD float ptr [ESP + 0x68]          ; 0044adfb
    FLD float ptr [ESP + 0x6c]          ; 0044adff
    FLD float ptr [ESP + 0x70]          ; 0044ae03
    LEA EDI,[ESP + 0x74]                ; 0044ae07
    LEA ESI,[ESP + 0xa4]                ; 0044ae0b
    FXCH ST2                            ; 0044ae12
    FSUB float ptr [EAX + 0x4]          ; 0044ae14
    FXCH                                ; 0044ae17
    FSUB float ptr [EAX + 0x8]          ; 0044ae19
    FXCH ST2                            ; 0044ae1c
    FSUB float ptr [EAX + 0xc]          ; 0044ae1e
    FXCH                                ; 0044ae21
    FSTP float ptr [ESP + 0xa4]         ; 0044ae23
    LEA EAX,[ESP + 0x74]                ; 0044ae2a
    FXCH                                ; 0044ae2e
    FSTP float ptr [ESP + 0xa8]         ; 0044ae30
    PUSH EAX                            ; 0044ae37
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044ae38
    FSTP float ptr [ESP + 0xb0]         ; 0044ae3b
    ADD EAX,0x10                        ; 0044ae42
    MOVSD ES:EDI,ESI                    ; 0044ae45
    MOVSD ES:EDI,ESI                    ; 0044ae46
    MOVSD ES:EDI,ESI                    ; 0044ae47
    PUSH EAX                            ; 0044ae48
    LEA ESI,[ESP + 0x4c]                ; 0044ae49
    LEA EDI,[ESP + 0xa0]                ; 0044ae4d
    CALL FUN_004495a0                   ; 0044ae54
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004495a0()
    LEA ESI,[ESP + 0x4c]                ; 0044ae59
    LEA EDX,[ESP + 0xa0]                ; 0044ae5d
    ADD ESP,0x8                         ; 0044ae64
    LEA EAX,[ESP + 0x74]                ; 0044ae67
    MOVSD ES:EDI,ESI                    ; 0044ae6b
    MOVSD ES:EDI,ESI                    ; 0044ae6c
    MOVSD ES:EDI,ESI                    ; 0044ae6d
    CMP EAX,EDX                         ; 0044ae6e
    JNZ 0x0044afe7                      ; 0044ae70
        ;   XREF to: 0044afe7 (CONDITIONAL_JUMP)  ; LAB_0044afe7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044ae76
        ;   Label: LAB_0044ae76
    FLD double ptr [0x005cf457]         ; 0044ae79 | DAT_005cf457
    FLD float ptr [EAX + 0x38]          ; 0044ae7f
    FMUL ST1                            ; 0044ae82
    FMUL float ptr [ESP + 0x74]         ; 0044ae84
    FSTP float ptr [ESP + 0x74]         ; 0044ae88
    FMUL float ptr [EAX + 0x38]         ; 0044ae8c
    FLD float ptr [ESP + 0x78]          ; 0044ae8f
    FXCH                                ; 0044ae93
    FMUL ST1                            ; 0044ae95
    FLD float ptr [ESP + 0x74]          ; 0044ae97
    FXCH                                ; 0044ae9b
    FSTP ST2                            ; 0044ae9d
    FXCH                                ; 0044ae9f
    FSTP float ptr [ESP + 0x78]         ; 0044aea1
    FCOMP float ptr [ESP + 0x7c]        ; 0044aea5
    FNSTSW AX                           ; 0044aea9
    SAHF                                ; 0044aeab
    JNC 0x0044aeff                      ; 0044aeac
        ;   XREF to: 0044aeff (CONDITIONAL_JUMP)  ; LAB_0044aeff
    FLD float ptr [ESP + 0x74]          ; 0044aeae
    FLD float ptr [ESP + 0x7c]          ; 0044aeb2
    FCHS                                ; 0044aeb6
    FSTP float ptr [ESP + 0xc0]         ; 0044aeb8
    FCOMP float ptr [ESP + 0xc0]        ; 0044aebf
    FNSTSW AX                           ; 0044aec6
    SAHF                                ; 0044aec8
    JBE 0x0044aeff                      ; 0044aec9
        ;   XREF to: 0044aeff (CONDITIONAL_JUMP)  ; LAB_0044aeff
    FLD float ptr [ESP + 0x78]          ; 0044aecb
    FCOMP float ptr [ESP + 0x7c]        ; 0044aecf
    FNSTSW AX                           ; 0044aed3
    SAHF                                ; 0044aed5
    JNC 0x0044aeff                      ; 0044aed6
        ;   XREF to: 0044aeff (CONDITIONAL_JUMP)  ; LAB_0044aeff
    FLD float ptr [ESP + 0x78]          ; 0044aed8
    FCOMP float ptr [ESP + 0xc0]        ; 0044aedc
    FNSTSW AX                           ; 0044aee3
    SAHF                                ; 0044aee5
    JBE 0x0044aeff                      ; 0044aee6
        ;   XREF to: 0044aeff (CONDITIONAL_JUMP)  ; LAB_0044aeff
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044aee8
    FLD float ptr [ESP + 0x7c]          ; 0044aeeb
    FCOMP float ptr [EAX + 0x140]       ; 0044aeef
    FNSTSW AX                           ; 0044aef5
    SAHF                                ; 0044aef7
    JNC 0x0044aeff                      ; 0044aef8
        ;   XREF to: 0044aeff (CONDITIONAL_JUMP)  ; LAB_0044aeff
    MOV EBX,0x1                         ; 0044aefa
    XOR EAX,EAX                         ; 0044aeff
        ;   Label: LAB_0044aeff
    MOV EDI,0x3                         ; 0044af01
    MOV dword ptr [ESP + 0x18],EAX      ; 0044af06
    MOV dword ptr [ESP + 0x14],EAX      ; 0044af0a
    MOV dword ptr [ESP + 0x10],EAX      ; 0044af0e
    MOV dword ptr [ESP + 0xc],EAX       ; 0044af12
    MOV dword ptr [ESP + 0x8],EDI       ; 0044af16
    TEST EBX,EBX                        ; 0044af1a
    JNZ 0x0044b015                      ; 0044af1c
        ;   XREF to: 0044b015 (CONDITIONAL_JUMP)  ; LAB_0044b015
    MOV dword ptr [ESP + 0x24],0x10     ; 0044af22
    MOV dword ptr [ESP + 0x20],EBX      ; 0044af2a
        ;   Label: LAB_0044af2a
    CMP EBX,0xf                         ; 0044af2e
    JNZ 0x0044b00d                      ; 0044af31
        ;   XREF to: 0044b00d (CONDITIONAL_JUMP)  ; LAB_0044b00d
    XOR EAX,EAX                         ; 0044af37
    MOV dword ptr [ESP + 0x1c],EAX      ; 0044af39
        ;   Label: LAB_0044af39
    PUSH 0x43f860                       ; 0044af3d | LAB_0043f860
    LEA EAX,[ESP + 0x8]                 ; 0044af42
    PUSH EAX                            ; 0044af46
    MOV EDX,dword ptr [0x0060b280]      ; 0044af47 | DAT_0060b280
    PUSH EDX                            ; 0044af4d | DAT_01ba5c50
    INC EBX                             ; 0044af4e
    CALL FUN_0046b750                   ; 0044af4f
        ;   XREF to: 0046b750 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b750()
    ADD ESP,0xc                         ; 0044af54
    CMP EBX,0x10                        ; 0044af57
    JL 0x0044af2a                       ; 0044af5a
        ;   XREF to: 0044af2a (CONDITIONAL_JUMP)  ; LAB_0044af2a
    MOV ESI,0xffff                      ; 0044af5c
        ;   Label: LAB_0044af5c
    XOR ECX,ECX                         ; 0044af61
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044af63
    MOV dword ptr [ESP + 0xc],ECX       ; 0044af66
    MOV dword ptr [ESP + 0x10],ECX      ; 0044af6a
    MOV dword ptr [ESP + 0x14],ESI      ; 0044af6e
    FLD float ptr [EAX + 0x140]         ; 0044af72
    FMUL double ptr [0x005cf45f]        ; 0044af78 | DAT_005cf45f
    XOR EBX,EBX                         ; 0044af7e
    CALL FUN_005b7ff0                   ; 0044af80
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x18]        ; 0044af85
    PUSH 0x43f860                       ; 0044af89 | LAB_0043f860
        ;   Label: LAB_0044af89
    LEA EAX,[ESP + 0x8]                 ; 0044af8e
    MOV dword ptr [ESP + 0x24],EBX      ; 0044af92
    XOR EDI,EDI                         ; 0044af96
    PUSH EAX                            ; 0044af98
    MOV EAX,[0x0060b280]                ; 0044af99 | DAT_0060b280
    INC EBX                             ; 0044af9e
    PUSH EAX                            ; 0044af9f | DAT_01ba5c50
    MOV dword ptr [ESP + 0x28],EDI      ; 0044afa0
    MOV dword ptr [ESP + 0x30],EBX      ; 0044afa4
    CALL FUN_0046b750                   ; 0044afa8
        ;   XREF to: 0046b750 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b750()
    ADD ESP,0xc                         ; 0044afad
    CMP EBX,0xe                         ; 0044afb0
    JL 0x0044af89                       ; 0044afb3
        ;   XREF to: 0044af89 (CONDITIONAL_JUMP)  ; LAB_0044af89
    MOV EDX,dword ptr [0x0060b280]      ; 0044afb5 | DAT_0060b280
    PUSH EDX                            ; 0044afbb | DAT_01ba5c50
    CALL thunk_FUN_004e9810             ; 0044afbc
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e9810()
    ADD ESP,0x4                         ; 0044afc1
    PUSH EDI                            ; 0044afc4
    MOV ECX,dword ptr [0x0060b280]      ; 0044afc5 | DAT_0060b280
    PUSH ECX                            ; 0044afcb | DAT_01ba5c50
    CALL FUN_0046b880                   ; 0044afcc
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b880()
    ADD ESP,0x8                         ; 0044afd1
    MOV EBX,dword ptr [EBP + 0x14]      ; 0044afd4
    PUSH EBX                            ; 0044afd7
    CALL FUN_0044c830                   ; 0044afd8
        ;   XREF to: 0044c830 (UNCONDITIONAL_CALL)  ; undefined FUN_0044c830()
    ADD ESP,0x4                         ; 0044afdd
    MOV ESP,EBP                         ; 0044afe0
    POP EBP                             ; 0044afe2
    POP EDI                             ; 0044afe3
    POP ESI                             ; 0044afe4
    POP EBX                             ; 0044afe5
    RET                                 ; 0044afe6
    MOV EAX,dword ptr [ESP + 0x98]      ; 0044afe7
        ;   Label: LAB_0044afe7
    MOV dword ptr [ESP + 0x74],EAX      ; 0044afee
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0044aff2
    MOV dword ptr [ESP + 0x78],EAX      ; 0044aff9
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0044affd
    MOV dword ptr [ESP + 0x7c],EAX      ; 0044b004
    JMP 0x0044ae76                      ; 0044b008
        ;   XREF to: 0044ae76 (UNCONDITIONAL_JUMP)  ; LAB_0044ae76
    LEA EAX,[EBX + 0x1]                 ; 0044b00d
        ;   Label: LAB_0044b00d
    JMP 0x0044af39                      ; 0044b010
        ;   XREF to: 0044af39 (UNCONDITIONAL_JUMP)  ; LAB_0044af39
    CALL FUN_0043f820                   ; 0044b015
        ;   XREF to: 0043f820 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f820()
        ;   Label: LAB_0044b015
    JMP 0x0044af5c                      ; 0044b01a
        ;   XREF to: 0044af5c (UNCONDITIONAL_JUMP)  ; LAB_0044af5c

