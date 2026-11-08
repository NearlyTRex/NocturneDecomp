; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cc990(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_004cc964 = 004ccd0c
;   TerminatedCString s_s_confused_while_walking_005d9907
;   undefined4 DAT_005d9932
;   undefined4 DAT_005d9936
;   undefined4 DAT_005d993a
;   undefined4 DAT_005d993e
;   void* PTR_DAT_00609ed0 = 007c158c
;   undefined4 DAT_007c158c
;   undefined4 DAT_01cede20
;
; Called Functions:
;   FUN_00408ae0
;   FUN_00408de0
;   FUN_0040d0c0
;   FUN_00423a10
;   FUN_00423a60
;   FUN_00424470
;   FUN_004244b0
;   FUN_004287f0
;   FUN_00429e90
;   FUN_0042b2a0
;   FUN_00436710
;   FUN_004ccff0
;   FUN_004cd660
;   FUN_004cec50
;   FUN_004cee90
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc990
        ;   Label: FUN_004cc990
    PUSH ESI                            ; 004cc991
    PUSH EDI                            ; 004cc992
    PUSH EBP                            ; 004cc993
    SUB ESP,0xac                        ; 004cc994
    MOV EBX,dword ptr [ESP + 0xc0]      ; 004cc99a
    PUSH dword ptr [ESP + 0xc4]         ; 004cc9a1
    PUSH EBX                            ; 004cc9a8
    CALL FUN_004244b0                   ; 004cc9a9
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004244b0()
    ADD ESP,0x8                         ; 004cc9ae
    TEST EAX,EAX                        ; 004cc9b1
    JZ 0x004ccca9                       ; 004cc9b3
        ;   XREF to: 004ccca9 (CONDITIONAL_JUMP)  ; caseD_9
    CMP dword ptr [EBX + 0x10a64],0x2   ; 004cc9b9
    JZ 0x004cccb4                       ; 004cc9c0
        ;   XREF to: 004cccb4 (CONDITIONAL_JUMP)  ; LAB_004cccb4
    PUSH dword ptr [ESP + 0xc4]         ; 004cc9c6
        ;   Label: LAB_004cc9c6
    PUSH EBX                            ; 004cc9cd
    CALL FUN_0042b2a0                   ; 004cc9ce
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b2a0()
    ADD ESP,0x8                         ; 004cc9d3
    FLD float ptr [EBX + 0x10a60]       ; 004cc9d6
    FSUB float ptr [ESP + 0xc4]         ; 004cc9dc
    FST float ptr [EBX + 0x10a60]       ; 004cc9e3
    FLDZ                                ; 004cc9e9
    FCOMPP                              ; 004cc9eb
    FNSTSW AX                           ; 004cc9ed
    SAHF                                ; 004cc9ef
    JBE 0x004cc9fc                      ; 004cc9f0
        ;   XREF to: 004cc9fc (CONDITIONAL_JUMP)  ; LAB_004cc9fc
    MOV dword ptr [EBX + 0x10a60],0x0   ; 004cc9f2
    LEA EAX,[EBX + 0x2508]              ; 004cc9fc
        ;   Label: LAB_004cc9fc
    PUSH dword ptr [ESP + 0xc4]         ; 004cca02
    MOV dword ptr [EAX + 0x8],0x0       ; 004cca09
    PUSH EBX                            ; 004cca10
    MOV EDX,dword ptr [EAX + 0x8]       ; 004cca11
    MOV dword ptr [EAX + 0x4],EDX       ; 004cca14
    MOV EDX,dword ptr [EAX + 0x4]       ; 004cca17
    MOV dword ptr [EAX],EDX             ; 004cca1a
    CALL FUN_004cd660                   ; 004cca1c
        ;   XREF to: 004cd660 (UNCONDITIONAL_CALL)  ; undefined FUN_004cd660()
    ADD ESP,0x8                         ; 004cca21
    PUSH dword ptr [ESP + 0xc4]         ; 004cca24
    PUSH EBX                            ; 004cca2b
    CALL FUN_004287f0                   ; 004cca2c
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004287f0()
    MOV EDX,EAX                         ; 004cca31
    ADD ESP,0x8                         ; 004cca33
    LEA EAX,[EBX + 0x2b4]               ; 004cca36
    TEST EDX,EDX                        ; 004cca3c
    JZ 0x004cce7e                       ; 004cca3e
        ;   XREF to: 004cce7e (CONDITIONAL_JUMP)  ; LAB_004cce7e
    MOV EDX,dword ptr [EBX + 0x27ac]    ; 004cca44
    CMP EDX,0x2                         ; 004cca4a
    JNC 0x004cccf6                      ; 004cca4d
        ;   XREF to: 004cccf6 (CONDITIONAL_JUMP)  ; LAB_004cccf6
    CMP EDX,0x1                         ; 004cca53
    JNZ 0x004cccfd                      ; 004cca56
        ;   XREF to: 004cccfd (CONDITIONAL_JUMP)  ; LAB_004cccfd
    PUSH EDX                            ; 004cca5c
    PUSH EDX                            ; 004cca5d
    PUSH EAX                            ; 004cca5e
        ;   Label: LAB_004cca5e
    CALL FUN_00503620                   ; 004cca5f
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
        ;   Label: LAB_004cca5f
    ADD ESP,0xc                         ; 004cca64
        ;   Label: LAB_004cca64
    MOV EDI,dword ptr [EBX + 0x276c]    ; 004cca67
        ;   Label: caseD_4
    TEST EDI,EDI                        ; 004cca6d
    JZ 0x004ccebc                       ; 004cca6f
        ;   XREF to: 004ccebc (CONDITIONAL_JUMP)  ; LAB_004ccebc
    CMP dword ptr [EBX + 0x2770],0x0    ; 004cca75
    JNZ 0x004ccb97                      ; 004cca7c
        ;   XREF to: 004ccb97 (CONDITIONAL_JUMP)  ; LAB_004ccb97
    LEA EAX,[EDI + 0x20]                ; 004cca82
    PUSH EAX                            ; 004cca85
    PUSH EBX                            ; 004cca86
    LEA ESI,[ESP + 0x70]                ; 004cca87
    LEA EDI,[ESP + 0x64]                ; 004cca8b
    CALL FUN_00408de0                   ; 004cca8f
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408de0()
    LEA ESI,[ESP + 0x70]                ; 004cca94
    ADD ESP,0x8                         ; 004cca98
    LEA EAX,[ESP + 0x5c]                ; 004cca9b
    MOVSD ES:EDI,ESI                    ; 004cca9f
    MOVSD ES:EDI,ESI                    ; 004ccaa0
    MOVSD ES:EDI,ESI                    ; 004ccaa1
    PUSH EAX                            ; 004ccaa2
    LEA ESI,[ESP + 0x78]                ; 004ccaa3
    LEA EDI,[ESP + 0x48]                ; 004ccaa7
    CALL FUN_005838f0                   ; 004ccaab
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005838f0()
    LEA ESI,[ESP + 0x78]                ; 004ccab0
    ADD ESP,0x4                         ; 004ccab4
    MOVSD ES:EDI,ESI                    ; 004ccab7
    MOVSD ES:EDI,ESI                    ; 004ccab8
    MOVSD ES:EDI,ESI                    ; 004ccab9
    PUSH dword ptr [ESP + 0x48]         ; 004ccaba
    CALL FUN_0040d0c0                   ; 004ccabe
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    MOV dword ptr [ESP + 0xac],EAX      ; 004ccac3
    FLD float ptr [ESP + 0xac]          ; 004ccaca
    ADD ESP,0x4                         ; 004ccad1
    FST float ptr [ESP + 0xa0]          ; 004ccad4
    FCOMP float ptr [0x005d9932]        ; 004ccadb | DAT_005d9932
    FNSTSW AX                           ; 004ccae1
    SAHF                                ; 004ccae3
    JNC 0x004ccafa                      ; 004ccae4
        ;   XREF to: 004ccafa (CONDITIONAL_JUMP)  ; LAB_004ccafa
    FLD float ptr [ESP + 0xa0]          ; 004ccae6
    FADD float ptr [0x005d9936]         ; 004ccaed | DAT_005d9936
    FSTP float ptr [ESP + 0xa0]         ; 004ccaf3
    FLD float ptr [ESP + 0xa0]          ; 004ccafa
        ;   Label: LAB_004ccafa
    FCOMP float ptr [0x005d993a]        ; 004ccb01 | DAT_005d993a
    FNSTSW AX                           ; 004ccb07
    SAHF                                ; 004ccb09
    JBE 0x004ccb20                      ; 004ccb0a
        ;   XREF to: 004ccb20 (CONDITIONAL_JUMP)  ; LAB_004ccb20
    FLD float ptr [ESP + 0xa0]          ; 004ccb0c
    FADD float ptr [0x005d993e]         ; 004ccb13 | DAT_005d993e
    FSTP float ptr [ESP + 0xa0]         ; 004ccb19
    FLD float ptr [ESP + 0xc4]          ; 004ccb20
        ;   Label: LAB_004ccb20
    FMUL float ptr [0x005d9936]         ; 004ccb27 | DAT_005d9936
    FLD float ptr [ESP + 0xa0]          ; 004ccb2d
    FXCH                                ; 004ccb34
    FST float ptr [ESP + 0x98]          ; 004ccb36
    FCHS                                ; 004ccb3d
    FSTP float ptr [ESP + 0xa4]         ; 004ccb3f
    FCOMP float ptr [ESP + 0xa4]        ; 004ccb46
    FNSTSW AX                           ; 004ccb4d
    SAHF                                ; 004ccb4f
    JNC 0x004ccb60                      ; 004ccb50
        ;   XREF to: 004ccb60 (CONDITIONAL_JUMP)  ; LAB_004ccb60
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004ccb52
    MOV dword ptr [ESP + 0xa0],EAX      ; 004ccb59
    FLD float ptr [ESP + 0xa0]          ; 004ccb60
        ;   Label: LAB_004ccb60
    FCOMP float ptr [ESP + 0x98]        ; 004ccb67
    FNSTSW AX                           ; 004ccb6e
    SAHF                                ; 004ccb70
    JBE 0x004ccb81                      ; 004ccb71
        ;   XREF to: 004ccb81 (CONDITIONAL_JUMP)  ; LAB_004ccb81
    MOV EAX,dword ptr [ESP + 0x98]      ; 004ccb73
    MOV dword ptr [ESP + 0xa0],EAX      ; 004ccb7a
    FLD float ptr [EBX + 0x34]          ; 004ccb81
        ;   Label: LAB_004ccb81
    FADD float ptr [ESP + 0xa0]         ; 004ccb84
    PUSH EBX                            ; 004ccb8b
    FSTP float ptr [EBX + 0x34]         ; 004ccb8c
    CALL FUN_00408ae0                   ; 004ccb8f
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ae0()
    ADD ESP,0x4                         ; 004ccb94
    PUSH 0x0                            ; 004ccb97
        ;   Label: LAB_004ccb97
    LEA ESI,[ESP + 0x84]                ; 004ccb99
    MOV EAX,dword ptr [EBX + 0x276c]    ; 004ccba0
    LEA EBP,[EBX + 0x2b4]               ; 004ccba6
    MOV dword ptr [ESP + 0xa0],EAX      ; 004ccbac
    PUSH EBP                            ; 004ccbb3
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 004ccbb4
    LEA EDI,[ESP + 0x28]                ; 004ccbba
    MOV dword ptr [ESP + 0xb0],EAX      ; 004ccbbe
    CALL FUN_00546a90                   ; 004ccbc5
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00546a90()
    ADD ESP,0x8                         ; 004ccbca
    LEA EAX,[ESP + 0x20]                ; 004ccbcd
    LEA ESI,[ESP + 0x80]                ; 004ccbd1
    PUSH EAX                            ; 004ccbd8
    MOVSD ES:EDI,ESI                    ; 004ccbd9
    MOVSD ES:EDI,ESI                    ; 004ccbda
    MOVSD ES:EDI,ESI                    ; 004ccbdb
    PUSH EBX                            ; 004ccbdc
    MOV ESI,dword ptr [ESP + 0xa4]      ; 004ccbdd
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004ccbe4
    PUSH ESI                            ; 004ccbeb
    CALL dword ptr [EAX + 0x118]        ; 004ccbec
    ADD ESP,0xc                         ; 004ccbf2
    TEST EAX,EAX                        ; 004ccbf5
    JZ 0x004cce9a                       ; 004ccbf7
        ;   XREF to: 004cce9a (CONDITIONAL_JUMP)  ; LAB_004cce9a
    CMP dword ptr [EBX + 0x276c],0x0    ; 004ccbfd
    JNZ 0x004ccea5                      ; 004ccc04
        ;   XREF to: 004ccea5 (CONDITIONAL_JUMP)  ; LAB_004ccea5
    PUSH 0x1                            ; 004ccc0a
        ;   Label: LAB_004ccc0a
    PUSH 0x0                            ; 004ccc0c
    LEA EAX,[EBX + 0x2b4]               ; 004ccc0e
    PUSH EAX                            ; 004ccc14
    CALL FUN_00503620                   ; 004ccc15
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
        ;   Label: LAB_004ccc15
    ADD ESP,0xc                         ; 004ccc1a
    PUSH EBX                            ; 004ccc1d
        ;   Label: LAB_004ccc1d
    CALL FUN_00424470                   ; 004ccc1e
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; undefined FUN_00424470()
    ADD ESP,0x4                         ; 004ccc23
    LEA EBP,[EBX + 0x2b4]               ; 004ccc26
    PUSH EBP                            ; 004ccc2c
    CALL FUN_00544f00                   ; 004ccc2d
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00544f00()
    ADD ESP,0x4                         ; 004ccc32
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004ccc35
    PUSH EBX                            ; 004ccc3b
    CALL dword ptr [EAX + 0x114]        ; 004ccc3c
    ADD ESP,0x4                         ; 004ccc42
    TEST EAX,EAX                        ; 004ccc45
    JNZ 0x004ccc99                      ; 004ccc47
        ;   XREF to: 004ccc99 (CONDITIONAL_JUMP)  ; LAB_004ccc99
    PUSH EBP                            ; 004ccc49
    CALL FUN_005035c0                   ; 004ccc4a
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004ccc4f
    ADD ESP,0x4                         ; 004ccc52
    CMP EAX,0x13                        ; 004ccc55
    JZ 0x004ccc99                       ; 004ccc58
        ;   XREF to: 004ccc99 (CONDITIONAL_JUMP)  ; LAB_004ccc99
    PUSH 0x544cc0                       ; 004ccc5a | LAB_00544cc0
    MOV EDX,dword ptr [0x01cede20]      ; 004ccc5f | DAT_01cede20
    PUSH EDX                            ; 004ccc65
    LEA EAX,[EBX + 0x25648]             ; 004ccc66
    PUSH dword ptr [EBX + 0x25654]      ; 004ccc6c
    PUSH EAX                            ; 004ccc72
    LEA ESI,[ESP + 0x10]                ; 004ccc73
    CALL FUN_00594380                   ; 004ccc77
        ;   XREF to: 00594380 (UNCONDITIONAL_CALL)  ; undefined FUN_00594380()
    ADD ESP,0x4                         ; 004ccc7c
    LEA EAX,[ESP + 0x1c]                ; 004ccc7f
    PUSH EAX                            ; 004ccc83
    LEA EDI,[ESP + 0x20]                ; 004ccc84
    LEA ESI,[ESP + 0x10]                ; 004ccc88
    PUSH EBP                            ; 004ccc8c
    MOVSD ES:EDI,ESI                    ; 004ccc8d
    MOVSD ES:EDI,ESI                    ; 004ccc8e
    MOVSD ES:EDI,ESI                    ; 004ccc8f
    MOVSD ES:EDI,ESI                    ; 004ccc90
    CALL FUN_005466c0                   ; 004ccc91
        ;   XREF to: 005466c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005466c0()
    ADD ESP,0x14                        ; 004ccc96
    PUSH dword ptr [ESP + 0xc4]         ; 004ccc99
        ;   Label: LAB_004ccc99
    PUSH EBX                            ; 004ccca0
    CALL FUN_00429e90                   ; 004ccca1
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00429e90()
    ADD ESP,0x8                         ; 004ccca6
    ADD ESP,0xac                        ; 004ccca9
        ;   Label: caseD_9
    POP EBP                             ; 004cccaf
    POP EDI                             ; 004cccb0
    POP ESI                             ; 004cccb1
    POP EBX                             ; 004cccb2
    RET                                 ; 004cccb3
    PUSH dword ptr [ESP + 0xc4]         ; 004cccb4
        ;   Label: LAB_004cccb4
    PUSH EBX                            ; 004cccbb
    CALL FUN_004ccff0                   ; 004cccbc
        ;   XREF to: 004ccff0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ccff0()
    ADD ESP,0x8                         ; 004cccc1
    JMP 0x004cc9c6                      ; 004cccc4
        ;   XREF to: 004cc9c6 (UNCONDITIONAL_JUMP)  ; LAB_004cc9c6
    PUSH 0x1                            ; 004cccc9
        ;   Label: LAB_004cccc9
    PUSH 0x0                            ; 004ccccb
    PUSH EAX                            ; 004ccccd
    CALL FUN_00503620                   ; 004cccce
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004cccd3
    PUSH EBX                            ; 004cccd6
    PUSH 0x5d9907                       ; 004cccd7 | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x00609ed0]      ; 004cccdc | PTR_DAT_00609ed0
    PUSH ESI                            ; 004ccce2 | DAT_007c158c
    CALL FUN_00436710                   ; 004ccce3
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    JMP 0x004cca64                      ; 004ccce8
        ;   XREF to: 004cca64 (UNCONDITIONAL_JUMP)  ; LAB_004cca64
    PUSH 0x1                            ; 004ccced
        ;   Label: LAB_004ccced
    PUSH 0x2                            ; 004cccef
    JMP 0x004cca5e                      ; 004cccf1
        ;   XREF to: 004cca5e (UNCONDITIONAL_JUMP)  ; LAB_004cca5e
    JBE 0x004ccced                      ; 004cccf6
        ;   XREF to: 004ccced (CONDITIONAL_JUMP)  ; LAB_004ccced
        ;   Label: LAB_004cccf6
    CMP EDX,0x3                         ; 004cccf8
    JZ 0x004cccc9                       ; 004cccfb
        ;   XREF to: 004cccc9 (CONDITIONAL_JUMP)  ; LAB_004cccc9
    PUSH 0x1                            ; 004cccfd
        ;   Label: LAB_004cccfd
    PUSH 0x0                            ; 004cccff
    LEA EAX,[EBX + 0x2b4]               ; 004ccd01
    JMP 0x004cca5e                      ; 004ccd07
        ;   XREF to: 004cca5e (UNCONDITIONAL_JUMP)  ; LAB_004cca5e
    CMP dword ptr [EBX + 0x2570],0x0    ; 004ccd0c
        ;   Label: caseD_0
    JZ 0x004cca67                       ; 004ccd13
        ;   XREF to: 004cca67 (CONDITIONAL_JUMP)  ; caseD_8
    MOV EDI,dword ptr [EBX + 0x25640]   ; 004ccd19
    XOR ESI,ESI                         ; 004ccd1f
    TEST EDI,EDI                        ; 004ccd21
    JZ 0x004ccd2a                       ; 004ccd23
        ;   XREF to: 004ccd2a (CONDITIONAL_JUMP)  ; LAB_004ccd2a
    MOV ESI,0xa                         ; 004ccd25
    CMP dword ptr [EBX + 0x10a68],0x0   ; 004ccd2a
        ;   Label: LAB_004ccd2a
    JZ 0x004ccd45                       ; 004ccd31
        ;   XREF to: 004ccd45 (CONDITIONAL_JUMP)  ; LAB_004ccd45
    CMP dword ptr [EBX + 0x10a70],0x0   ; 004ccd33
    JZ 0x004ccdf5                       ; 004ccd3a
        ;   XREF to: 004ccdf5 (CONDITIONAL_JUMP)  ; LAB_004ccdf5
    MOV ESI,0x2                         ; 004ccd40
    CMP dword ptr [EBX + 0x10a6c],0x0   ; 004ccd45
        ;   Label: LAB_004ccd45
    JZ 0x004ccd53                       ; 004ccd4c
        ;   XREF to: 004ccd53 (CONDITIONAL_JUMP)  ; LAB_004ccd53
    MOV ESI,0x3                         ; 004ccd4e
    CMP dword ptr [EBX + 0x10a80],0x0   ; 004ccd53
        ;   Label: LAB_004ccd53
    JZ 0x004ccd87                       ; 004ccd5a
        ;   XREF to: 004ccd87 (CONDITIONAL_JUMP)  ; LAB_004ccd87
    MOV ESI,dword ptr [EBX + 0x25640]   ; 004ccd5c
    MOV dword ptr [EBX + 0x10a80],0x0   ; 004ccd62
    TEST ESI,ESI                        ; 004ccd6c
    SETZ AL                             ; 004ccd6e
    AND EAX,0xff                        ; 004ccd71
    MOV dword ptr [EBX + 0x25640],EAX   ; 004ccd76
    JZ 0x004ccdff                       ; 004ccd7c
        ;   XREF to: 004ccdff (CONDITIONAL_JUMP)  ; LAB_004ccdff
    MOV ESI,0xa                         ; 004ccd82
    CMP dword ptr [EBX + 0x10a74],0x0   ; 004ccd87
        ;   Label: LAB_004ccd87
    JZ 0x004ccdc0                       ; 004ccd8e
        ;   XREF to: 004ccdc0 (CONDITIONAL_JUMP)  ; LAB_004ccdc0
    MOV EAX,dword ptr [EBX + 0x25640]   ; 004ccd90
    MOV EBP,0x1                         ; 004ccd96
    TEST EAX,EAX                        ; 004ccd9b
    JZ 0x004cce03                       ; 004ccd9d
        ;   XREF to: 004cce03 (CONDITIONAL_JUMP)  ; LAB_004cce03
    TEST EBP,EBP                        ; 004ccd9f
        ;   Label: LAB_004ccd9f
    JZ 0x004ccdc0                       ; 004ccda1
        ;   XREF to: 004ccdc0 (CONDITIONAL_JUMP)  ; LAB_004ccdc0
    MOV ECX,dword ptr [EBX + 0x25644]   ; 004ccda3
        ;   Label: LAB_004ccda3
    MOV dword ptr [EBX + 0x10a74],0x0   ; 004ccda9
    TEST ECX,ECX                        ; 004ccdb3
    JZ 0x004cce74                       ; 004ccdb5
        ;   XREF to: 004cce74 (CONDITIONAL_JUMP)  ; LAB_004cce74
    MOV ESI,0xe                         ; 004ccdbb
    FLD float ptr [EBX + 0x10a90]       ; 004ccdc0
        ;   Label: LAB_004ccdc0
    LEA EBP,[EBX + 0x2b4]               ; 004ccdc6
    FMUL float ptr [EBX + 0x2598]       ; 004ccdcc
    PUSH EBP                            ; 004ccdd2
    FSTP float ptr [EBX + 0x2578]       ; 004ccdd3
    CALL FUN_005035c0                   ; 004ccdd9
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004ccdde
    ADD ESP,0x4                         ; 004ccde1
    CMP ESI,EAX                         ; 004ccde4
    JZ 0x004cca67                       ; 004ccde6
        ;   XREF to: 004cca67 (CONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 004ccdec
    PUSH ESI                            ; 004ccdee
    PUSH EBP                            ; 004ccdef
    JMP 0x004cca5f                      ; 004ccdf0
        ;   XREF to: 004cca5f (UNCONDITIONAL_JUMP)  ; LAB_004cca5f
    MOV ESI,0x1                         ; 004ccdf5
        ;   Label: LAB_004ccdf5
    JMP 0x004ccd45                      ; 004ccdfa
        ;   XREF to: 004ccd45 (UNCONDITIONAL_JUMP)  ; LAB_004ccd45
    XOR ESI,ESI                         ; 004ccdff
        ;   Label: LAB_004ccdff
    JMP 0x004ccd87                      ; 004cce01
        ;   XREF to: 004ccd87 (UNCONDITIONAL_JUMP)  ; LAB_004ccd87
    CMP dword ptr [EBX + 0x10a64],0x2   ; 004cce03
        ;   Label: LAB_004cce03
    JZ 0x004ccd9f                       ; 004cce0a
        ;   XREF to: 004ccd9f (CONDITIONAL_JUMP)  ; LAB_004ccd9f
    PUSH EBX                            ; 004cce0c
    CALL FUN_004cec50                   ; 004cce0d
        ;   XREF to: 004cec50 (UNCONDITIONAL_CALL)  ; undefined FUN_004cec50()
    XOR EBP,EBP                         ; 004cce12
    ADD ESP,0x4                         ; 004cce14
    TEST EAX,EAX                        ; 004cce17
    JNZ 0x004ccd9f                      ; 004cce19
        ;   XREF to: 004ccd9f (CONDITIONAL_JUMP)  ; LAB_004ccd9f
    PUSH EAX                            ; 004cce1b
    PUSH EBX                            ; 004cce1c
    CALL FUN_004cf030                   ; 004cce1d
        ;   XREF to: 004cf030 (UNCONDITIONAL_CALL)  ; undefined FUN_004cf030()
    ADD ESP,0x8                         ; 004cce22
    MOV EDI,EAX                         ; 004cce25
    TEST EAX,EAX                        ; 004cce27
    JBE 0x004cce30                      ; 004cce29
        ;   XREF to: 004cce30 (CONDITIONAL_JUMP)  ; LAB_004cce30
    CMP EAX,0x1                         ; 004cce2b
    JNZ 0x004cce5b                      ; 004cce2e
        ;   XREF to: 004cce5b (CONDITIONAL_JUMP)  ; LAB_004cce5b
    TEST EDI,EDI                        ; 004cce30
        ;   Label: LAB_004cce30
    JNZ 0x004ccd9f                      ; 004cce32
        ;   XREF to: 004ccd9f (CONDITIONAL_JUMP)  ; LAB_004ccd9f
    PUSH EBX                            ; 004cce38
    CALL FUN_004cee90                   ; 004cce39
        ;   XREF to: 004cee90 (UNCONDITIONAL_CALL)  ; undefined FUN_004cee90()
    ADD ESP,0x4                         ; 004cce3e
    TEST EAX,EAX                        ; 004cce41
    JNZ 0x004ccd9f                      ; 004cce43
        ;   XREF to: 004ccd9f (CONDITIONAL_JUMP)  ; LAB_004ccd9f
    PUSH EBX                            ; 004cce49
    CALL FUN_004cf2b0                   ; 004cce4a
        ;   XREF to: 004cf2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004cf2b0()
    ADD ESP,0x4                         ; 004cce4f
    TEST EAX,EAX                        ; 004cce52
    JNZ 0x004cce66                      ; 004cce54
        ;   XREF to: 004cce66 (CONDITIONAL_JUMP)  ; LAB_004cce66
    JMP 0x004ccda3                      ; 004cce56
        ;   XREF to: 004ccda3 (UNCONDITIONAL_JUMP)  ; LAB_004ccda3
    PUSH EBX                            ; 004cce5b
        ;   Label: LAB_004cce5b
    CALL FUN_004cf230                   ; 004cce5c
        ;   XREF to: 004cf230 (UNCONDITIONAL_CALL)  ; undefined FUN_004cf230()
    ADD ESP,0x4                         ; 004cce61
    JMP 0x004cce30                      ; 004cce64
        ;   XREF to: 004cce30 (UNCONDITIONAL_JUMP)  ; LAB_004cce30
    PUSH EBX                            ; 004cce66
        ;   Label: LAB_004cce66
    CALL FUN_004cf440                   ; 004cce67
        ;   XREF to: 004cf440 (UNCONDITIONAL_CALL)  ; undefined FUN_004cf440()
    ADD ESP,0x4                         ; 004cce6c
    JMP 0x004ccd9f                      ; 004cce6f
        ;   XREF to: 004ccd9f (UNCONDITIONAL_JUMP)  ; LAB_004ccd9f
    MOV ESI,0xf                         ; 004cce74
        ;   Label: LAB_004cce74
    JMP 0x004ccdc0                      ; 004cce79
        ;   XREF to: 004ccdc0 (UNCONDITIONAL_JUMP)  ; LAB_004ccdc0
    PUSH EAX                            ; 004cce7e
        ;   Label: LAB_004cce7e
    CALL FUN_005035c0                   ; 004cce7f
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004cce84
    ADD ESP,0x4                         ; 004cce87
    CMP EAX,0xa                         ; 004cce8a
    JA 0x004cca67                       ; 004cce8d
        ;   XREF to: 004cca67 (CONDITIONAL_JUMP)  ; caseD_8
    JMP dword ptr [EAX*0x4 + 0x4cc964]  ; 004cce93 | caseD_a | caseD_8 | caseD_9
        ;   Label: switchD
    MOV dword ptr [EBX + 0x276c],EAX    ; 004cce9a
        ;   Label: LAB_004cce9a
    JMP 0x004ccc0a                      ; 004ccea0
        ;   XREF to: 004ccc0a (UNCONDITIONAL_JUMP)  ; LAB_004ccc0a
    CMP dword ptr [EBX + 0x10a74],0x0   ; 004ccea5
        ;   Label: LAB_004ccea5
    JZ 0x004ccc1d                       ; 004cceac
        ;   XREF to: 004ccc1d (CONDITIONAL_JUMP)  ; LAB_004ccc1d
    PUSH 0x1                            ; 004cceb2
    PUSH 0x11                           ; 004cceb4
    PUSH EBP                            ; 004cceb6
    JMP 0x004ccc15                      ; 004cceb7
        ;   XREF to: 004ccc15 (UNCONDITIONAL_JUMP)  ; LAB_004ccc15
    PUSH dword ptr [ESP + 0xc4]         ; 004ccebc
        ;   Label: LAB_004ccebc
    PUSH EBX                            ; 004ccec3
    LEA EDI,[ESP + 0x40]                ; 004ccec4
    CALL FUN_00423a10                   ; 004ccec8
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00423a10()
    LEA EAX,[EBX + 0x2508]              ; 004ccecd
    LEA ESI,[ESP + 0x34]                ; 004cced3
    ADD ESP,0x8                         ; 004cced7
    FLD float ptr [EAX]                 ; 004cceda
    FLD float ptr [EAX + 0x4]           ; 004ccedc
    LEA EDX,[EBX + 0x257c]              ; 004ccedf
    FLD float ptr [EAX + 0x8]           ; 004ccee5
    FXCH ST2                            ; 004ccee8
    FADD float ptr [EDX]                ; 004cceea
    FXCH                                ; 004cceec
    FADD float ptr [EDX + 0x4]          ; 004cceee
    FXCH ST2                            ; 004ccef1
    FADD float ptr [EDX + 0x8]          ; 004ccef3
    FXCH                                ; 004ccef6
    FSTP float ptr [ESP + 0x2c]         ; 004ccef8
    FXCH                                ; 004ccefc
    FSTP float ptr [ESP + 0x30]         ; 004ccefe
    FSTP float ptr [ESP + 0x34]         ; 004ccf02
    MOVSD ES:EDI,ESI                    ; 004ccf06
    MOVSD ES:EDI,ESI                    ; 004ccf07
    MOVSD ES:EDI,ESI                    ; 004ccf08
    MOV dword ptr [EAX + 0x8],0x0       ; 004ccf09
    MOV ECX,dword ptr [EAX + 0x8]       ; 004ccf10
    MOV dword ptr [EAX + 0x4],ECX       ; 004ccf13
    MOV ECX,dword ptr [EAX + 0x4]       ; 004ccf16
    MOV dword ptr [EAX],ECX             ; 004ccf19
    MOV dword ptr [EDX + 0x8],0x0       ; 004ccf1b
    LEA EAX,[EBX + 0x2b4]               ; 004ccf22
    FLD float ptr [EDX + 0x8]           ; 004ccf28
    PUSH EAX                            ; 004ccf2b
    FST float ptr [EDX + 0x4]           ; 004ccf2c
    FSTP float ptr [EDX]                ; 004ccf2f
    CALL FUN_005035c0                   ; 004ccf31
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004ccf36
    ADD ESP,0x4                         ; 004ccf39
    CMP EAX,0xe                         ; 004ccf3c
    JNZ 0x004ccfd6                      ; 004ccf3f
        ;   XREF to: 004ccfd6 (CONDITIONAL_JUMP)  ; LAB_004ccfd6
    XOR EBP,EBP                         ; 004ccf45
        ;   Label: LAB_004ccf45
    MOV dword ptr [ESP + 0x3c],EBP      ; 004ccf47
    MOV dword ptr [ESP + 0x38],EBP      ; 004ccf4b
    MOV dword ptr [ESP + 0x40],EBP      ; 004ccf4f
    LEA EAX,[EBX + 0x2588]              ; 004ccf53
        ;   Label: LAB_004ccf53
    FLD float ptr [ESP + 0xc4]          ; 004ccf59
    FLD float ptr [EAX]                 ; 004ccf60
    FMUL ST1                            ; 004ccf62
    FLD float ptr [EAX + 0x4]           ; 004ccf64
    FMUL ST2                            ; 004ccf67
    FLD float ptr [EAX + 0x8]           ; 004ccf69
    FMULP ST3                           ; 004ccf6c
    FLD float ptr [ESP + 0x38]          ; 004ccf6e
    FLD float ptr [ESP + 0x3c]          ; 004ccf72
    FLD float ptr [ESP + 0x40]          ; 004ccf76
    LEA EDI,[ESP + 0x8c]                ; 004ccf7a
    LEA ESI,[ESP + 0x50]                ; 004ccf81
    LEA EAX,[ESP + 0x38]                ; 004ccf85
    FXCH ST4                            ; 004ccf89
    FSTP float ptr [ESP + 0x50]         ; 004ccf8b
    FXCH ST2                            ; 004ccf8f
    FSTP float ptr [ESP + 0x54]         ; 004ccf91
    FXCH ST3                            ; 004ccf95
    FSTP float ptr [ESP + 0x58]         ; 004ccf97
    PUSH EAX                            ; 004ccf9b
    MOVSD ES:EDI,ESI                    ; 004ccf9c
    MOVSD ES:EDI,ESI                    ; 004ccf9d
    MOVSD ES:EDI,ESI                    ; 004ccf9e
    PUSH EBX                            ; 004ccf9f
    FXCH ST2                            ; 004ccfa0
    FADD float ptr [ESP + 0x94]         ; 004ccfa2
    FXCH ST2                            ; 004ccfa9
    FADD float ptr [ESP + 0x98]         ; 004ccfab
    FXCH                                ; 004ccfb2
    FADD float ptr [ESP + 0x9c]         ; 004ccfb4
    FXCH ST2                            ; 004ccfbb
    FSTP float ptr [ESP + 0x40]         ; 004ccfbd
    FSTP float ptr [ESP + 0x44]         ; 004ccfc1
    FSTP float ptr [ESP + 0x48]         ; 004ccfc5
    CALL FUN_00423a60                   ; 004ccfc9
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00423a60()
    ADD ESP,0x8                         ; 004ccfce
    JMP 0x004ccc1d                      ; 004ccfd1
        ;   XREF to: 004ccc1d (UNCONDITIONAL_JUMP)  ; LAB_004ccc1d
    CMP EAX,0xf                         ; 004ccfd6
        ;   Label: LAB_004ccfd6
    JZ 0x004ccf45                       ; 004ccfd9
        ;   XREF to: 004ccf45 (CONDITIONAL_JUMP)  ; LAB_004ccf45
    JMP 0x004ccf53                      ; 004ccfdf
        ;   XREF to: 004ccf53 (UNCONDITIONAL_JUMP)  ; LAB_004ccf53

