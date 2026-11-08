; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049cd50(undefined4 param_1,float *param_2,int param_3,undefined4 param_4,int param_5)
;
; Local Variables:
; undefined8       Stack[-0x78]:8  local_78
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   FUN_00485b40 at 0048634a
;   FUN_004cbdc0 at 004cc66a
;   FUN_0053f170 at 0053f97d
;   FUN_00575800 at 005760e9
;   FUN_0057fc20 at 005801cf
;
; Referenced Globals:
;   undefined1* switchdataD_0049ccf4 = 0049cec0
;   undefined1* switchdataD_0049cd1c = 0049cee3
;   TerminatedCString s_ric_s_wav_005d5772
;   TerminatedCString s_ric_s_wav_005d577f
;   TerminatedCString s_ric_s_wav_005d578c
;   TerminatedCString s_ric_s_wav_005d5799
;   undefined4 DAT_005d57aa
;   undefined4 DAT_005d57b2
;   undefined4 DAT_005d57ba
;   undefined4 DAT_00615890
;   undefined2 DAT_00615894
;   undefined4 DAT_0061c068
;   undefined4 DAT_01c3f8dc
;   undefined4 DAT_01c3f8e0
;   undefined4 DAT_01c558e0
;   ... and 2 more
;
; Called Functions:
;   FUN_0040d060
;   FUN_00441cd0
;   FUN_00493510
;   FUN_00493a40
;   FUN_0049c120
;   FUN_0049d090
;   FUN_004ca7c0
;   FUN_0055aef0
;   FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049cd50
        ;   Label: FUN_0049cd50
    PUSH ESI                            ; 0049cd51
    PUSH EDI                            ; 0049cd52
    PUSH EBP                            ; 0049cd53
    MOV EBP,ESP                         ; 0049cd54
    SUB ESP,0x68                        ; 0049cd56
    AND ESP,0xfffffff8                  ; 0049cd59
    MOV EBX,dword ptr [EBP + 0x18]      ; 0049cd5c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0049cd5f
    FLD float ptr [EAX + 0x4]           ; 0049cd62
    FST double ptr [ESP]                ; 0049cd65
    FCOMP double ptr [0x005d57aa]       ; 0049cd68 | DAT_005d57aa
    FNSTSW AX                           ; 0049cd6e
    SAHF                                ; 0049cd70
    JNC 0x0049ce50                      ; 0049cd71
        ;   XREF to: 0049ce50 (CONDITIONAL_JUMP)  ; LAB_0049ce50
    FLD double ptr [ESP]                ; 0049cd77
    FCOMP double ptr [0x005d57b2]       ; 0049cd7a | DAT_005d57b2
    FNSTSW AX                           ; 0049cd80
    SAHF                                ; 0049cd82
    JBE 0x0049ce50                      ; 0049cd83
        ;   XREF to: 0049ce50 (CONDITIONAL_JUMP)  ; LAB_0049ce50
    MOV ECX,0x1                         ; 0049cd89
    MOV EDX,0x1c558e8                   ; 0049cd8e
    MOV ESI,dword ptr [EBP + 0x24]      ; 0049cd93
    MOV dword ptr [ESP + 0x60],ECX      ; 0049cd96
    MOV dword ptr [ESP + 0x64],EDX      ; 0049cd9a
    TEST ESI,ESI                        ; 0049cd9e
    JZ 0x0049cdb7                       ; 0049cda0
        ;   XREF to: 0049cdb7 (CONDITIONAL_JUMP)  ; LAB_0049cdb7
    PUSH ESI                            ; 0049cda2
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 0049cda3
    CALL dword ptr [EAX + 0x54]         ; 0049cda9
    ADD ESP,0x4                         ; 0049cdac
    TEST EAX,EAX                        ; 0049cdaf
    JZ 0x0049ce50                       ; 0049cdb1
        ;   XREF to: 0049ce50 (CONDITIONAL_JUMP)  ; LAB_0049ce50
    CMP dword ptr [ESP + 0x60],0x0      ; 0049cdb7
        ;   Label: LAB_0049cdb7
    JZ 0x0049cf0f                       ; 0049cdbc
        ;   XREF to: 0049cf0f (CONDITIONAL_JUMP)  ; LAB_0049cf0f
    MOV ECX,dword ptr [0x01c558e0]      ; 0049cdc2 | DAT_01c558e0
    XOR EDX,EDX                         ; 0049cdc8
    TEST ECX,ECX                        ; 0049cdca
    JLE 0x0049cf0f                      ; 0049cdcc
        ;   XREF to: 0049cf0f (CONDITIONAL_JUMP)  ; LAB_0049cf0f
    FLD float ptr [EBX]                 ; 0049cdd2
        ;   Label: LAB_0049cdd2
    FLD float ptr [EBX + 0x4]           ; 0049cdd4
    FLD float ptr [EBX + 0x8]           ; 0049cdd7
    MOV EAX,dword ptr [ESP + 0x64]      ; 0049cdda
    LEA EDI,[ESP + 0x48]                ; 0049cdde
    LEA ESI,[ESP + 0x3c]                ; 0049cde2
    FXCH ST2                            ; 0049cde6
    FSUB float ptr [EAX]                ; 0049cde8 | DAT_01c558e8
    FXCH                                ; 0049cdea
    FSUB float ptr [EAX + 0x4]          ; 0049cdec | DAT_01c558ec
    FXCH ST2                            ; 0049cdef
    FSUB float ptr [EAX + 0x8]          ; 0049cdf1
    FXCH ST2                            ; 0049cdf4
    FSTP float ptr [ESP + 0x40]         ; 0049cdf6
    FXCH                                ; 0049cdfa
    FSTP float ptr [ESP + 0x44]         ; 0049cdfc
    FSTP float ptr [ESP + 0x3c]         ; 0049ce00
    MOVSD ES:EDI,ESI                    ; 0049ce04
    MOVSD ES:EDI,ESI                    ; 0049ce05
    MOVSD ES:EDI,ESI                    ; 0049ce06
    LEA EAX,[ESP + 0x54]                ; 0049ce07
    LEA ESI,[ESP + 0x48]                ; 0049ce0b
    CMP EAX,ESI                         ; 0049ce0f
    JZ 0x0049ce2b                       ; 0049ce11
        ;   XREF to: 0049ce2b (CONDITIONAL_JUMP)  ; LAB_0049ce2b
    MOV EAX,dword ptr [ESP + 0x48]      ; 0049ce13
    MOV dword ptr [ESP + 0x54],EAX      ; 0049ce17
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0049ce1b
    MOV dword ptr [ESP + 0x58],EAX      ; 0049ce1f
    MOV EAX,dword ptr [ESP + 0x50]      ; 0049ce23
    MOV dword ptr [ESP + 0x5c],EAX      ; 0049ce27
    FLD float ptr [ESP + 0x58]          ; 0049ce2b
        ;   Label: LAB_0049ce2b
    FMUL ST0                            ; 0049ce2f
    FLD float ptr [ESP + 0x54]          ; 0049ce31
    FMUL ST0                            ; 0049ce35
    FADDP                               ; 0049ce37
    FLD float ptr [ESP + 0x5c]          ; 0049ce39
    FMUL ST0                            ; 0049ce3d
    FADDP                               ; 0049ce3f
    FCOMP double ptr [0x005d57ba]       ; 0049ce41 | DAT_005d57ba
    FNSTSW AX                           ; 0049ce47
    SAHF                                ; 0049ce49
    JNC 0x0049cef5                      ; 0049ce4a
        ;   XREF to: 0049cef5 (CONDITIONAL_JUMP)  ; LAB_0049cef5
    PUSH 0x3f000000                     ; 0049ce50
        ;   Label: LAB_0049ce50
    PUSH EBX                            ; 0049ce55
    PUSH 0x1fc7838                      ; 0049ce56
    CALL FUN_00441cd0                   ; 0049ce5b
        ;   XREF to: 00441cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441cd0()
    ADD ESP,0xc                         ; 0049ce60
    TEST EAX,EAX                        ; 0049ce63
    JZ 0x0049cec0                       ; 0049ce65
        ;   XREF to: 0049cec0 (CONDITIONAL_JUMP)  ; caseD_9
    XOR ESI,ESI                         ; 0049ce67
    MOV EDI,dword ptr [0x01c3f8dc]      ; 0049ce69 | DAT_01c3f8dc
        ;   Label: LAB_0049ce69
    IMUL EAX,EDI,0x2c                   ; 0049ce6f
    LEA EDX,[EDI + 0x1]                 ; 0049ce72
    ADD EAX,0x1c3f8e0                   ; 0049ce75
    MOV dword ptr [0x01c3f8dc],EDX      ; 0049ce7a | DAT_01c3f8dc
    CMP EDX,0x800                       ; 0049ce80
    JL 0x0049ce90                       ; 0049ce86
        ;   XREF to: 0049ce90 (CONDITIONAL_JUMP)  ; LAB_0049ce90
    XOR EDI,EDI                         ; 0049ce88
    MOV dword ptr [0x01c3f8dc],EDI      ; 0049ce8a | DAT_01c3f8dc
    PUSH 0xffff                         ; 0049ce90
        ;   Label: LAB_0049ce90
    PUSH 0x0                            ; 0049ce95
    PUSH 0x3e99999a                     ; 0049ce97
    PUSH EBX                            ; 0049ce9c
    PUSH EAX                            ; 0049ce9d | DAT_01c3f8e0
    INC ESI                             ; 0049ce9e
    CALL FUN_00493510                   ; 0049ce9f
        ;   XREF to: 00493510 (UNCONDITIONAL_CALL)  ; undefined FUN_00493510()
    ADD ESP,0x14                        ; 0049cea4
    CMP ESI,0x8                         ; 0049cea7
    JL 0x0049ce69                       ; 0049ceaa
        ;   XREF to: 0049ce69 (CONDITIONAL_JUMP)  ; LAB_0049ce69
    MOV EAX,dword ptr [EBP + 0x20]      ; 0049ceac
    CMP EAX,0x9                         ; 0049ceaf
    JA 0x0049cec0                       ; 0049ceb2
        ;   XREF to: 0049cec0 (CONDITIONAL_JUMP)  ; caseD_9
    JMP dword ptr [EAX*0x4 + 0x49ccf4]  ; 0049ceb4 | caseD_9 | caseD_8 | switchdataD_0049ccf4
        ;   Label: switchD
    MOV ECX,0xc                         ; 0049cec0
        ;   Label: caseD_0
    LEA EDI,[ESP + 0x8]                 ; 0049cec5
    MOV ESI,0x615890                    ; 0049cec9 | DAT_00615890
    MOVSD.REP ES:EDI,ESI                ; 0049cece | DAT_00615890 | DAT_00615894
    MOVSW ES:EDI,ESI                    ; 0049ced0 | DAT_00615894
    MOV ECX,dword ptr [EBP + 0x20]      ; 0049ced2
    CMP ECX,0x9                         ; 0049ced5
    JA 0x0049cee3                       ; 0049ced8
        ;   XREF to: 0049cee3 (CONDITIONAL_JUMP)  ; caseD_9
    MOV EAX,ECX                         ; 0049ceda
    JMP dword ptr [EAX*0x4 + 0x49cd1c]  ; 0049cedc | caseD_9 | caseD_8 | caseD_4
        ;   Label: switchD
    CMP byte ptr [ESP + 0x8],0x0        ; 0049cee3
        ;   Label: caseD_0
    JNZ 0x0049d06b                      ; 0049cee8
        ;   XREF to: 0049d06b (CONDITIONAL_JUMP)  ; LAB_0049d06b
    MOV ESP,EBP                         ; 0049ceee
    POP EBP                             ; 0049cef0
    POP EDI                             ; 0049cef1
    POP ESI                             ; 0049cef2
    POP EBX                             ; 0049cef3
    RET                                 ; 0049cef4
    MOV ESI,dword ptr [ESP + 0x64]      ; 0049cef5
        ;   Label: LAB_0049cef5
    MOV EDI,dword ptr [0x01c558e0]      ; 0049cef9 | DAT_01c558e0
    ADD ESI,0x3c                        ; 0049ceff
    INC EDX                             ; 0049cf02
    MOV dword ptr [ESP + 0x64],ESI      ; 0049cf03
    CMP EDX,EDI                         ; 0049cf07
    JL 0x0049cdd2                       ; 0049cf09
        ;   XREF to: 0049cdd2 (CONDITIONAL_JUMP)  ; LAB_0049cdd2
    CMP dword ptr [ESP + 0x60],0x0      ; 0049cf0f
        ;   Label: LAB_0049cf0f
    JZ 0x0049ce50                       ; 0049cf14
        ;   XREF to: 0049ce50 (CONDITIONAL_JUMP)  ; LAB_0049ce50
    CALL FUN_0049c120                   ; 0049cf1a
        ;   XREF to: 0049c120 (UNCONDITIONAL_CALL)  ; undefined FUN_0049c120()
    MOV EDX,dword ptr [EBP + 0x24]      ; 0049cf1f
    PUSH EDX                            ; 0049cf22
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0049cf23
    PUSH ECX                            ; 0049cf26
    PUSH EBX                            ; 0049cf27
    PUSH EAX                            ; 0049cf28
    CALL FUN_00493a40                   ; 0049cf29
        ;   XREF to: 00493a40 (UNCONDITIONAL_CALL)  ; undefined FUN_00493a40()
    ADD ESP,0x10                        ; 0049cf2e
    JMP 0x0049ce50                      ; 0049cf31
        ;   XREF to: 0049ce50 (UNCONDITIONAL_JUMP)  ; LAB_0049ce50
    XOR ESI,ESI                         ; 0049cf36
        ;   Label: caseD_2
    PUSH 0xffff                         ; 0049cf38
        ;   Label: LAB_0049cf38
    PUSH 0x0                            ; 0049cf3d
    PUSH 0x10000                        ; 0049cf3f
    PUSH 0x20000                        ; 0049cf44
    PUSH 0x0                            ; 0049cf49
    PUSH EBX                            ; 0049cf4b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049cf4c
    PUSH EDX                            ; 0049cf4f
    INC ESI                             ; 0049cf50
    CALL FUN_0049d090                   ; 0049cf51
        ;   XREF to: 0049d090 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d090()
    ADD ESP,0x1c                        ; 0049cf56
    CMP ESI,0x8                         ; 0049cf59
    JL 0x0049cf38                       ; 0049cf5c
        ;   XREF to: 0049cf38 (CONDITIONAL_JUMP)  ; LAB_0049cf38
    JMP 0x0049cec0                      ; 0049cf5e
        ;   XREF to: 0049cec0 (UNCONDITIONAL_JUMP)  ; caseD_9
    PUSH 0x3e2aaaab                     ; 0049cf63
        ;   Label: caseD_2
    CALL FUN_0040d060                   ; 0049cf68
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d060()
    ADD ESP,0x4                         ; 0049cf6d
    TEST EAX,EAX                        ; 0049cf70
    JZ 0x0049cee3                       ; 0049cf72
        ;   XREF to: 0049cee3 (CONDITIONAL_JUMP)  ; caseD_9
    PUSH 0x2                            ; 0049cf78
    CALL FUN_004ca7c0                   ; 0049cf7a
        ;   XREF to: 004ca7c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ca7c0()
    ADD ESP,0x4                         ; 0049cf7f
    PUSH EAX                            ; 0049cf82
    PUSH 0x5d5772                       ; 0049cf83 | = "ric-%s!?.wav"
    LEA EAX,[ESP + 0x10]                ; 0049cf88
    PUSH EAX                            ; 0049cf8c
    CALL FUN_005b7790                   ; 0049cf8d
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 0049cf92
    CMP byte ptr [ESP + 0x8],0x0        ; 0049cf95
    JNZ 0x0049d06b                      ; 0049cf9a
        ;   XREF to: 0049d06b (CONDITIONAL_JUMP)  ; LAB_0049d06b
    MOV ESP,EBP                         ; 0049cfa0
    POP EBP                             ; 0049cfa2
    POP EDI                             ; 0049cfa3
    POP ESI                             ; 0049cfa4
    POP EBX                             ; 0049cfa5
    RET                                 ; 0049cfa6
    PUSH 0x3e2aaaab                     ; 0049cfa7
        ;   Label: caseD_5
    CALL FUN_0040d060                   ; 0049cfac
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d060()
    ADD ESP,0x4                         ; 0049cfb1
    TEST EAX,EAX                        ; 0049cfb4
    JZ 0x0049cee3                       ; 0049cfb6
        ;   XREF to: 0049cee3 (CONDITIONAL_JUMP)  ; caseD_9
    PUSH 0x5                            ; 0049cfbc
    CALL FUN_004ca7c0                   ; 0049cfbe
        ;   XREF to: 004ca7c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ca7c0()
    ADD ESP,0x4                         ; 0049cfc3
    PUSH EAX                            ; 0049cfc6
    PUSH 0x5d577f                       ; 0049cfc7 | = "ric-%s!?.wav"
    LEA EAX,[ESP + 0x10]                ; 0049cfcc
    PUSH EAX                            ; 0049cfd0
    CALL FUN_005b7790                   ; 0049cfd1
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 0049cfd6
    CMP byte ptr [ESP + 0x8],0x0        ; 0049cfd9
    JNZ 0x0049d06b                      ; 0049cfde
        ;   XREF to: 0049d06b (CONDITIONAL_JUMP)  ; LAB_0049d06b
    MOV ESP,EBP                         ; 0049cfe4
    POP EBP                             ; 0049cfe6
    POP EDI                             ; 0049cfe7
    POP ESI                             ; 0049cfe8
    POP EBX                             ; 0049cfe9
    RET                                 ; 0049cfea
    PUSH 0x3e2aaaab                     ; 0049cfeb
        ;   Label: caseD_7
    CALL FUN_0040d060                   ; 0049cff0
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d060()
    ADD ESP,0x4                         ; 0049cff5
    TEST EAX,EAX                        ; 0049cff8
    JZ 0x0049cee3                       ; 0049cffa
        ;   XREF to: 0049cee3 (CONDITIONAL_JUMP)  ; caseD_9
    PUSH 0x7                            ; 0049d000
    CALL FUN_004ca7c0                   ; 0049d002
        ;   XREF to: 004ca7c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ca7c0()
    ADD ESP,0x4                         ; 0049d007
    PUSH EAX                            ; 0049d00a
    PUSH 0x5d578c                       ; 0049d00b | = "ric-%s!?.wav"
    LEA EAX,[ESP + 0x10]                ; 0049d010
    PUSH EAX                            ; 0049d014
    CALL FUN_005b7790                   ; 0049d015
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 0049d01a
    CMP byte ptr [ESP + 0x8],0x0        ; 0049d01d
    JNZ 0x0049d06b                      ; 0049d022
        ;   XREF to: 0049d06b (CONDITIONAL_JUMP)  ; LAB_0049d06b
    MOV ESP,EBP                         ; 0049d024
    POP EBP                             ; 0049d026
    POP EDI                             ; 0049d027
    POP ESI                             ; 0049d028
    POP EBX                             ; 0049d029
    RET                                 ; 0049d02a
    PUSH 0x3e2aaaab                     ; 0049d02b
        ;   Label: caseD_3
    CALL FUN_0040d060                   ; 0049d030
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d060()
    ADD ESP,0x4                         ; 0049d035
    TEST EAX,EAX                        ; 0049d038
    JZ 0x0049cee3                       ; 0049d03a
        ;   XREF to: 0049cee3 (CONDITIONAL_JUMP)  ; caseD_9
    PUSH 0x3                            ; 0049d040
    CALL FUN_004ca7c0                   ; 0049d042
        ;   XREF to: 004ca7c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ca7c0()
    ADD ESP,0x4                         ; 0049d047
    PUSH EAX                            ; 0049d04a
    PUSH 0x5d5799                       ; 0049d04b | = "ric-%s.wav"
    LEA EAX,[ESP + 0x10]                ; 0049d050
    PUSH EAX                            ; 0049d054
    CALL FUN_005b7790                   ; 0049d055
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 0049d05a
    CMP byte ptr [ESP + 0x8],0x0        ; 0049d05d
    JNZ 0x0049d06b                      ; 0049d062
        ;   XREF to: 0049d06b (CONDITIONAL_JUMP)  ; LAB_0049d06b
    MOV ESP,EBP                         ; 0049d064
    POP EBP                             ; 0049d066
    POP EDI                             ; 0049d067
    POP ESI                             ; 0049d068
    POP EBX                             ; 0049d069
    RET                                 ; 0049d06a
    PUSH 0x3e2e147b                     ; 0049d06b
        ;   Label: LAB_0049d06b
    PUSH EBX                            ; 0049d070
    LEA EAX,[ESP + 0x10]                ; 0049d071
    PUSH EAX                            ; 0049d075
    PUSH 0x0                            ; 0049d076
    MOV EBX,dword ptr [0x0061c068]      ; 0049d078 | DAT_0061c068
    PUSH EBX                            ; 0049d07e
    CALL FUN_0055aef0                   ; 0049d07f
        ;   XREF to: 0055aef0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055aef0()
    ADD ESP,0x14                        ; 0049d084
    MOV ESP,EBP                         ; 0049d087
    POP EBP                             ; 0049d089
    POP EDI                             ; 0049d08a
    POP ESI                             ; 0049d08b
    POP EBX                             ; 0049d08c
    RET                                 ; 0049d08d

