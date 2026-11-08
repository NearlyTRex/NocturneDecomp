; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00435830(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00435814 = 00435bac
;   TerminatedCString s_s_confused_while_walking_005cdbb4
;   undefined4 DAT_005cdbe1
;   undefined4 DAT_005cdbe5
;   undefined4 DAT_005cdbe9
;   undefined4 DAT_005cdbed
;   void* PTR_DAT_00609ed0 = 007c158c
;   undefined4 DAT_007c150c
;   undefined4 DAT_007c158c
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
;   FUN_00435e30
;   FUN_00436420
;   FUN_00436710
;   FUN_004cec50
;   FUN_004cee90
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435830
        ;   Label: FUN_00435830
    PUSH ESI                            ; 00435831
    PUSH EDI                            ; 00435832
    PUSH EBP                            ; 00435833
    SUB ESP,0xc4                        ; 00435834
    MOV EBX,dword ptr [ESP + 0xd8]      ; 0043583a
    PUSH dword ptr [ESP + 0xdc]         ; 00435841
    PUSH EBX                            ; 00435848
    CALL FUN_004244b0                   ; 00435849
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004244b0()
    ADD ESP,0x8                         ; 0043584e
    TEST EAX,EAX                        ; 00435851
    JZ 0x00435b5e                       ; 00435853
        ;   XREF to: 00435b5e (CONDITIONAL_JUMP)  ; caseD_6
    FLD float ptr [EBX + 0x10a60]       ; 00435859
    FSUB float ptr [ESP + 0xdc]         ; 0043585f
    FST float ptr [EBX + 0x10a60]       ; 00435866
    FLDZ                                ; 0043586c
    FCOMPP                              ; 0043586e
    FNSTSW AX                           ; 00435870
    SAHF                                ; 00435872
    JBE 0x0043587f                      ; 00435873
        ;   XREF to: 0043587f (CONDITIONAL_JUMP)  ; LAB_0043587f
    MOV dword ptr [EBX + 0x10a60],0x0   ; 00435875
    LEA EAX,[EBX + 0x2508]              ; 0043587f
        ;   Label: LAB_0043587f
    PUSH dword ptr [ESP + 0xdc]         ; 00435885
    MOV dword ptr [EAX + 0x8],0x0       ; 0043588c
    PUSH EBX                            ; 00435893
    MOV EDX,dword ptr [EAX + 0x8]       ; 00435894
    MOV dword ptr [EAX + 0x4],EDX       ; 00435897
    MOV EDX,dword ptr [EAX + 0x4]       ; 0043589a
    MOV dword ptr [EAX],EDX             ; 0043589d
    CALL FUN_00436420                   ; 0043589f
        ;   XREF to: 00436420 (UNCONDITIONAL_CALL)  ; undefined FUN_00436420()
    MOV EDX,dword ptr [EBX + 0x10a64]   ; 004358a4
    ADD ESP,0x8                         ; 004358aa
    CMP EDX,0x2                         ; 004358ad
    JNZ 0x004358c2                      ; 004358b0
        ;   XREF to: 004358c2 (CONDITIONAL_JUMP)  ; LAB_004358c2
    PUSH dword ptr [ESP + 0xdc]         ; 004358b2
    PUSH EBX                            ; 004358b9
    CALL FUN_00435e30                   ; 004358ba
        ;   XREF to: 00435e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00435e30()
    ADD ESP,0x8                         ; 004358bf
    PUSH dword ptr [ESP + 0xdc]         ; 004358c2
        ;   Label: LAB_004358c2
    FLD float ptr [EBX + 0x2510]        ; 004358c9
    PUSH EBX                            ; 004358cf
    FSTP float ptr [EBX + 0x2594]       ; 004358d0
    CALL FUN_0042b2a0                   ; 004358d6
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b2a0()
    ADD ESP,0x8                         ; 004358db
    PUSH dword ptr [ESP + 0xdc]         ; 004358de
    PUSH EBX                            ; 004358e5
    CALL FUN_004287f0                   ; 004358e6
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004287f0()
    MOV EDX,EAX                         ; 004358eb
    ADD ESP,0x8                         ; 004358ed
    LEA EAX,[EBX + 0x2b4]               ; 004358f0
    TEST EDX,EDX                        ; 004358f6
    JZ 0x00435ce2                       ; 004358f8
        ;   XREF to: 00435ce2 (CONDITIONAL_JUMP)  ; LAB_00435ce2
    MOV EDX,dword ptr [EBX + 0x27ac]    ; 004358fe
    CMP EDX,0x2                         ; 00435904
    JNC 0x00435b96                      ; 00435907
        ;   XREF to: 00435b96 (CONDITIONAL_JUMP)  ; LAB_00435b96
    CMP EDX,0x1                         ; 0043590d
    JNZ 0x00435b9d                      ; 00435910
        ;   XREF to: 00435b9d (CONDITIONAL_JUMP)  ; LAB_00435b9d
    PUSH EDX                            ; 00435916
    PUSH EDX                            ; 00435917
    PUSH EAX                            ; 00435918
        ;   Label: LAB_00435918
    CALL FUN_00503620                   ; 00435919
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
        ;   Label: LAB_00435919
    ADD ESP,0xc                         ; 0043591e
        ;   Label: LAB_0043591e
    MOV ESI,dword ptr [EBX + 0x276c]    ; 00435921
        ;   Label: caseD_4
    TEST ESI,ESI                        ; 00435927
    JZ 0x00435d20                       ; 00435929
        ;   XREF to: 00435d20 (CONDITIONAL_JUMP)  ; LAB_00435d20
    CMP dword ptr [EBX + 0x2770],0x0    ; 0043592f
    JNZ 0x00435a57                      ; 00435936
        ;   XREF to: 00435a57 (CONDITIONAL_JUMP)  ; LAB_00435a57
    LEA EAX,[ESI + 0x20]                ; 0043593c
    PUSH EAX                            ; 0043593f
    PUSH EBX                            ; 00435940
    LEA ESI,[ESP + 0x70]                ; 00435941
    LEA EDI,[ESP + 0x34]                ; 00435945
    CALL FUN_00408de0                   ; 00435949
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408de0()
    LEA ESI,[ESP + 0x70]                ; 0043594e
    ADD ESP,0x8                         ; 00435952
    LEA EAX,[ESP + 0x2c]                ; 00435955
    MOVSD ES:EDI,ESI                    ; 00435959
    MOVSD ES:EDI,ESI                    ; 0043595a
    MOVSD ES:EDI,ESI                    ; 0043595b
    PUSH EAX                            ; 0043595c
    LEA ESI,[ESP + 0xa8]                ; 0043595d
    LEA EDI,[ESP + 0x48]                ; 00435964
    CALL FUN_005838f0                   ; 00435968
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005838f0()
    LEA ESI,[ESP + 0xa8]                ; 0043596d
    ADD ESP,0x4                         ; 00435974
    MOVSD ES:EDI,ESI                    ; 00435977
    MOVSD ES:EDI,ESI                    ; 00435978
    MOVSD ES:EDI,ESI                    ; 00435979
    PUSH dword ptr [ESP + 0x48]         ; 0043597a
    CALL FUN_0040d0c0                   ; 0043597e
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    MOV dword ptr [ESP + 0xc4],EAX      ; 00435983
    FLD float ptr [ESP + 0xc4]          ; 0043598a
    ADD ESP,0x4                         ; 00435991
    FST float ptr [ESP + 0xbc]          ; 00435994
    FCOMP float ptr [0x005cdbe1]        ; 0043599b | DAT_005cdbe1
    FNSTSW AX                           ; 004359a1
    SAHF                                ; 004359a3
    JNC 0x004359ba                      ; 004359a4
        ;   XREF to: 004359ba (CONDITIONAL_JUMP)  ; LAB_004359ba
    FLD float ptr [ESP + 0xbc]          ; 004359a6
    FADD float ptr [0x005cdbe5]         ; 004359ad | DAT_005cdbe5
    FSTP float ptr [ESP + 0xbc]         ; 004359b3
    FLD float ptr [ESP + 0xbc]          ; 004359ba
        ;   Label: LAB_004359ba
    FCOMP float ptr [0x005cdbe9]        ; 004359c1 | DAT_005cdbe9
    FNSTSW AX                           ; 004359c7
    SAHF                                ; 004359c9
    JBE 0x004359e0                      ; 004359ca
        ;   XREF to: 004359e0 (CONDITIONAL_JUMP)  ; LAB_004359e0
    FLD float ptr [ESP + 0xbc]          ; 004359cc
    FADD float ptr [0x005cdbed]         ; 004359d3 | DAT_005cdbed
    FSTP float ptr [ESP + 0xbc]         ; 004359d9
    FLD float ptr [ESP + 0xdc]          ; 004359e0
        ;   Label: LAB_004359e0
    FMUL float ptr [0x005cdbe5]         ; 004359e7 | DAT_005cdbe5
    FLD float ptr [ESP + 0xbc]          ; 004359ed
    FXCH                                ; 004359f4
    FST float ptr [ESP + 0xb8]          ; 004359f6
    FCHS                                ; 004359fd
    FSTP float ptr [ESP + 0xb4]         ; 004359ff
    FCOMP float ptr [ESP + 0xb4]        ; 00435a06
    FNSTSW AX                           ; 00435a0d
    SAHF                                ; 00435a0f
    JNC 0x00435a20                      ; 00435a10
        ;   XREF to: 00435a20 (CONDITIONAL_JUMP)  ; LAB_00435a20
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00435a12
    MOV dword ptr [ESP + 0xbc],EAX      ; 00435a19
    FLD float ptr [ESP + 0xbc]          ; 00435a20
        ;   Label: LAB_00435a20
    FCOMP float ptr [ESP + 0xb8]        ; 00435a27
    FNSTSW AX                           ; 00435a2e
    SAHF                                ; 00435a30
    JBE 0x00435a41                      ; 00435a31
        ;   XREF to: 00435a41 (CONDITIONAL_JUMP)  ; LAB_00435a41
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00435a33
    MOV dword ptr [ESP + 0xbc],EAX      ; 00435a3a
    FLD float ptr [EBX + 0x34]          ; 00435a41
        ;   Label: LAB_00435a41
    FADD float ptr [ESP + 0xbc]         ; 00435a44
    PUSH EBX                            ; 00435a4b
    FSTP float ptr [EBX + 0x34]         ; 00435a4c
    CALL FUN_00408ae0                   ; 00435a4f
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ae0()
    ADD ESP,0x4                         ; 00435a54
    PUSH 0x0                            ; 00435a57
        ;   Label: LAB_00435a57
    MOV EAX,dword ptr [EBX + 0x276c]    ; 00435a59
    LEA EBP,[EBX + 0x2b4]               ; 00435a5f
    MOV dword ptr [ESP + 0xb4],EAX      ; 00435a65
    PUSH EBP                            ; 00435a6c
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 00435a6d
    LEA ESI,[ESP + 0xa0]                ; 00435a73
    MOV dword ptr [ESP + 0xc8],EAX      ; 00435a7a
    CALL FUN_00546a90                   ; 00435a81
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00546a90()
    ADD ESP,0x8                         ; 00435a86
    LEA EAX,[ESP + 0x8c]                ; 00435a89
    PUSH EAX                            ; 00435a90
    LEA EDI,[ESP + 0x90]                ; 00435a91
    PUSH EBX                            ; 00435a98
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00435a99
    LEA ESI,[ESP + 0xa0]                ; 00435aa0
    PUSH EAX                            ; 00435aa7
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00435aa8
    MOVSD ES:EDI,ESI                    ; 00435aaf
    MOVSD ES:EDI,ESI                    ; 00435ab0
    MOVSD ES:EDI,ESI                    ; 00435ab1
    CALL dword ptr [EAX + 0x118]        ; 00435ab2
    ADD ESP,0xc                         ; 00435ab8
    TEST EAX,EAX                        ; 00435abb
    JZ 0x00435cfe                       ; 00435abd
        ;   XREF to: 00435cfe (CONDITIONAL_JUMP)  ; LAB_00435cfe
    CMP dword ptr [EBX + 0x276c],0x0    ; 00435ac3
    JNZ 0x00435d09                      ; 00435aca
        ;   XREF to: 00435d09 (CONDITIONAL_JUMP)  ; LAB_00435d09
    PUSH 0x1                            ; 00435ad0
        ;   Label: LAB_00435ad0
    PUSH 0x0                            ; 00435ad2
    LEA EAX,[EBX + 0x2b4]               ; 00435ad4
    PUSH EAX                            ; 00435ada
    CALL FUN_00503620                   ; 00435adb
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
        ;   Label: LAB_00435adb
    ADD ESP,0xc                         ; 00435ae0
    PUSH EBX                            ; 00435ae3
        ;   Label: LAB_00435ae3
    CALL FUN_00424470                   ; 00435ae4
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; undefined FUN_00424470()
    ADD ESP,0x4                         ; 00435ae9
    LEA EBP,[EBX + 0x2b4]               ; 00435aec
    PUSH EBP                            ; 00435af2
    CALL FUN_00544f00                   ; 00435af3
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00544f00()
    ADD ESP,0x4                         ; 00435af8
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00435afb
    PUSH EBX                            ; 00435b01
    CALL dword ptr [EAX + 0x114]        ; 00435b02
    ADD ESP,0x4                         ; 00435b08
    TEST EAX,EAX                        ; 00435b0b
    JNZ 0x00435b4e                      ; 00435b0d
        ;   XREF to: 00435b4e (CONDITIONAL_JUMP)  ; LAB_00435b4e
    PUSH 0x544cc0                       ; 00435b0f | LAB_00544cc0
    MOV ESI,dword ptr [0x007c150c]      ; 00435b14 | DAT_007c150c
    PUSH ESI                            ; 00435b1a
    LEA EAX,[EBX + 0x25648]             ; 00435b1b
    PUSH dword ptr [EBX + 0x25654]      ; 00435b21
    PUSH EAX                            ; 00435b27
    LEA ESI,[ESP + 0x20]                ; 00435b28
    CALL FUN_00594380                   ; 00435b2c
        ;   XREF to: 00594380 (UNCONDITIONAL_CALL)  ; undefined FUN_00594380()
    ADD ESP,0x4                         ; 00435b31
    LEA EAX,[ESP + 0xc]                 ; 00435b34
    PUSH EAX                            ; 00435b38
    LEA EDI,[ESP + 0x10]                ; 00435b39
    LEA ESI,[ESP + 0x20]                ; 00435b3d
    PUSH EBP                            ; 00435b41
    MOVSD ES:EDI,ESI                    ; 00435b42
    MOVSD ES:EDI,ESI                    ; 00435b43
    MOVSD ES:EDI,ESI                    ; 00435b44
    MOVSD ES:EDI,ESI                    ; 00435b45
    CALL FUN_005466c0                   ; 00435b46
        ;   XREF to: 005466c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005466c0()
    ADD ESP,0x14                        ; 00435b4b
    PUSH dword ptr [ESP + 0xdc]         ; 00435b4e
        ;   Label: LAB_00435b4e
    PUSH EBX                            ; 00435b55
    CALL FUN_00429e90                   ; 00435b56
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00429e90()
    ADD ESP,0x8                         ; 00435b5b
    ADD ESP,0xc4                        ; 00435b5e
        ;   Label: caseD_6
    POP EBP                             ; 00435b64
    POP EDI                             ; 00435b65
    POP ESI                             ; 00435b66
    POP EBX                             ; 00435b67
    RET                                 ; 00435b68
    PUSH 0x1                            ; 00435b69
        ;   Label: LAB_00435b69
    PUSH 0x0                            ; 00435b6b
    PUSH EAX                            ; 00435b6d
    CALL FUN_00503620                   ; 00435b6e
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 00435b73
    PUSH EBX                            ; 00435b76
    PUSH 0x5cdbb4                       ; 00435b77 | = "%s confused while walking to scriptDe..."
    MOV ECX,dword ptr [0x00609ed0]      ; 00435b7c | PTR_DAT_00609ed0
    PUSH ECX                            ; 00435b82 | DAT_007c158c
    CALL FUN_00436710                   ; 00435b83
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    JMP 0x0043591e                      ; 00435b88
        ;   XREF to: 0043591e (UNCONDITIONAL_JUMP)  ; LAB_0043591e
    PUSH 0x1                            ; 00435b8d
        ;   Label: LAB_00435b8d
    PUSH 0x2                            ; 00435b8f
    JMP 0x00435918                      ; 00435b91
        ;   XREF to: 00435918 (UNCONDITIONAL_JUMP)  ; LAB_00435918
    JBE 0x00435b8d                      ; 00435b96
        ;   XREF to: 00435b8d (CONDITIONAL_JUMP)  ; LAB_00435b8d
        ;   Label: LAB_00435b96
    CMP EDX,0x3                         ; 00435b98
    JZ 0x00435b69                       ; 00435b9b
        ;   XREF to: 00435b69 (CONDITIONAL_JUMP)  ; LAB_00435b69
    PUSH 0x1                            ; 00435b9d
        ;   Label: LAB_00435b9d
    PUSH 0x0                            ; 00435b9f
    LEA EAX,[EBX + 0x2b4]               ; 00435ba1
    JMP 0x00435918                      ; 00435ba7
        ;   XREF to: 00435918 (UNCONDITIONAL_JUMP)  ; LAB_00435918
    CMP dword ptr [EBX + 0x2570],0x0    ; 00435bac
        ;   Label: caseD_0
    JZ 0x00435921                       ; 00435bb3
        ;   XREF to: 00435921 (CONDITIONAL_JUMP)  ; caseD_5
    MOV EDI,dword ptr [EBX + 0x10a68]   ; 00435bb9
    XOR ESI,ESI                         ; 00435bbf
    TEST EDI,EDI                        ; 00435bc1
    JZ 0x00435bd7                       ; 00435bc3
        ;   XREF to: 00435bd7 (CONDITIONAL_JUMP)  ; LAB_00435bd7
    CMP dword ptr [EBX + 0x10a70],0x0   ; 00435bc5
    JZ 0x00435c6b                       ; 00435bcc
        ;   XREF to: 00435c6b (CONDITIONAL_JUMP)  ; LAB_00435c6b
    MOV ESI,0x2                         ; 00435bd2
    CMP dword ptr [EBX + 0x10a6c],0x0   ; 00435bd7
        ;   Label: LAB_00435bd7
    JZ 0x00435be5                       ; 00435bde
        ;   XREF to: 00435be5 (CONDITIONAL_JUMP)  ; LAB_00435be5
    MOV ESI,0x3                         ; 00435be0
    CMP dword ptr [EBX + 0x10a80],0x0   ; 00435be5
        ;   Label: LAB_00435be5
    JZ 0x00435c10                       ; 00435bec
        ;   XREF to: 00435c10 (CONDITIONAL_JUMP)  ; LAB_00435c10
    MOV ECX,dword ptr [EBX + 0x25640]   ; 00435bee
    MOV dword ptr [EBX + 0x10a80],0x0   ; 00435bf4
    TEST ECX,ECX                        ; 00435bfe
    SETZ AL                             ; 00435c00
    AND EAX,0xff                        ; 00435c03
    XOR ESI,ESI                         ; 00435c08
    MOV dword ptr [EBX + 0x25640],EAX   ; 00435c0a
    CMP dword ptr [EBX + 0x10a74],0x0   ; 00435c10
        ;   Label: LAB_00435c10
    JZ 0x00435c36                       ; 00435c17
        ;   XREF to: 00435c36 (CONDITIONAL_JUMP)  ; LAB_00435c36
    MOV EAX,dword ptr [EBX + 0x25640]   ; 00435c19
    MOV EBP,0x1                         ; 00435c1f
    TEST EAX,EAX                        ; 00435c24
    JZ 0x00435c75                       ; 00435c26
        ;   XREF to: 00435c75 (CONDITIONAL_JUMP)  ; LAB_00435c75
    TEST EBP,EBP                        ; 00435c28
        ;   Label: LAB_00435c28
    JZ 0x00435c36                       ; 00435c2a
        ;   XREF to: 00435c36 (CONDITIONAL_JUMP)  ; LAB_00435c36
    MOV dword ptr [EBX + 0x10a74],0x0   ; 00435c2c
        ;   Label: LAB_00435c2c
    FLD float ptr [EBX + 0x10a90]       ; 00435c36
        ;   Label: LAB_00435c36
    LEA EBP,[EBX + 0x2b4]               ; 00435c3c
    FMUL float ptr [EBX + 0x2598]       ; 00435c42
    PUSH EBP                            ; 00435c48
    FSTP float ptr [EBX + 0x2578]       ; 00435c49
    CALL FUN_005035c0                   ; 00435c4f
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00435c54
    ADD ESP,0x4                         ; 00435c57
    CMP ESI,EAX                         ; 00435c5a
    JZ 0x00435921                       ; 00435c5c
        ;   XREF to: 00435921 (CONDITIONAL_JUMP)  ; caseD_5
    PUSH 0x1                            ; 00435c62
    PUSH ESI                            ; 00435c64
    PUSH EBP                            ; 00435c65
    JMP 0x00435919                      ; 00435c66
        ;   XREF to: 00435919 (UNCONDITIONAL_JUMP)  ; LAB_00435919
    MOV ESI,0x1                         ; 00435c6b
        ;   Label: LAB_00435c6b
    JMP 0x00435bd7                      ; 00435c70
        ;   XREF to: 00435bd7 (UNCONDITIONAL_JUMP)  ; LAB_00435bd7
    CMP dword ptr [EBX + 0x10a64],0x2   ; 00435c75
        ;   Label: LAB_00435c75
    JZ 0x00435c28                       ; 00435c7c
        ;   XREF to: 00435c28 (CONDITIONAL_JUMP)  ; LAB_00435c28
    PUSH EBX                            ; 00435c7e
    CALL FUN_004cec50                   ; 00435c7f
        ;   XREF to: 004cec50 (UNCONDITIONAL_CALL)  ; undefined FUN_004cec50()
    XOR EBP,EBP                         ; 00435c84
    ADD ESP,0x4                         ; 00435c86
    TEST EAX,EAX                        ; 00435c89
    JNZ 0x00435c28                      ; 00435c8b
        ;   XREF to: 00435c28 (CONDITIONAL_JUMP)  ; LAB_00435c28
    PUSH EAX                            ; 00435c8d
    PUSH EBX                            ; 00435c8e
    CALL FUN_004cf030                   ; 00435c8f
        ;   XREF to: 004cf030 (UNCONDITIONAL_CALL)  ; undefined FUN_004cf030()
    ADD ESP,0x8                         ; 00435c94
    MOV EDI,EAX                         ; 00435c97
    TEST EAX,EAX                        ; 00435c99
    JBE 0x00435ca2                      ; 00435c9b
        ;   XREF to: 00435ca2 (CONDITIONAL_JUMP)  ; LAB_00435ca2
    CMP EAX,0x1                         ; 00435c9d
    JNZ 0x00435cc9                      ; 00435ca0
        ;   XREF to: 00435cc9 (CONDITIONAL_JUMP)  ; LAB_00435cc9
    TEST EDI,EDI                        ; 00435ca2
        ;   Label: LAB_00435ca2
    JNZ 0x00435c28                      ; 00435ca4
        ;   XREF to: 00435c28 (CONDITIONAL_JUMP)  ; LAB_00435c28
    PUSH EBX                            ; 00435ca6
    CALL FUN_004cee90                   ; 00435ca7
        ;   XREF to: 004cee90 (UNCONDITIONAL_CALL)  ; undefined FUN_004cee90()
    ADD ESP,0x4                         ; 00435cac
    TEST EAX,EAX                        ; 00435caf
    JNZ 0x00435c28                      ; 00435cb1
        ;   XREF to: 00435c28 (CONDITIONAL_JUMP)  ; LAB_00435c28
    PUSH EBX                            ; 00435cb7
    CALL FUN_004cf2b0                   ; 00435cb8
        ;   XREF to: 004cf2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004cf2b0()
    ADD ESP,0x4                         ; 00435cbd
    TEST EAX,EAX                        ; 00435cc0
    JNZ 0x00435cd4                      ; 00435cc2
        ;   XREF to: 00435cd4 (CONDITIONAL_JUMP)  ; LAB_00435cd4
    JMP 0x00435c2c                      ; 00435cc4
        ;   XREF to: 00435c2c (UNCONDITIONAL_JUMP)  ; LAB_00435c2c
    PUSH EBX                            ; 00435cc9
        ;   Label: LAB_00435cc9
    CALL FUN_004cf230                   ; 00435cca
        ;   XREF to: 004cf230 (UNCONDITIONAL_CALL)  ; undefined FUN_004cf230()
    ADD ESP,0x4                         ; 00435ccf
    JMP 0x00435ca2                      ; 00435cd2
        ;   XREF to: 00435ca2 (UNCONDITIONAL_JUMP)  ; LAB_00435ca2
    PUSH EBX                            ; 00435cd4
        ;   Label: LAB_00435cd4
    CALL FUN_004cf440                   ; 00435cd5
        ;   XREF to: 004cf440 (UNCONDITIONAL_CALL)  ; undefined FUN_004cf440()
    ADD ESP,0x4                         ; 00435cda
    JMP 0x00435c28                      ; 00435cdd
        ;   XREF to: 00435c28 (UNCONDITIONAL_JUMP)  ; LAB_00435c28
    PUSH EAX                            ; 00435ce2
        ;   Label: LAB_00435ce2
    CALL FUN_005035c0                   ; 00435ce3
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00435ce8
    ADD ESP,0x4                         ; 00435ceb
    CMP EAX,0x6                         ; 00435cee
    JA 0x00435921                       ; 00435cf1
        ;   XREF to: 00435921 (CONDITIONAL_JUMP)  ; caseD_5
    JMP dword ptr [EAX*0x4 + 0x435814]  ; 00435cf7 | caseD_3 | caseD_5 | caseD_6
        ;   Label: switchD
    MOV dword ptr [EBX + 0x276c],EAX    ; 00435cfe
        ;   Label: LAB_00435cfe
    JMP 0x00435ad0                      ; 00435d04
        ;   XREF to: 00435ad0 (UNCONDITIONAL_JUMP)  ; LAB_00435ad0
    CMP dword ptr [EBX + 0x10a74],0x0   ; 00435d09
        ;   Label: LAB_00435d09
    JZ 0x00435ae3                       ; 00435d10
        ;   XREF to: 00435ae3 (CONDITIONAL_JUMP)  ; LAB_00435ae3
    PUSH 0x1                            ; 00435d16
    PUSH 0x9                            ; 00435d18
    PUSH EBP                            ; 00435d1a
    JMP 0x00435adb                      ; 00435d1b
        ;   XREF to: 00435adb (UNCONDITIONAL_JUMP)  ; LAB_00435adb
    PUSH dword ptr [ESP + 0xdc]         ; 00435d20
        ;   Label: LAB_00435d20
    PUSH EBX                            ; 00435d27
    CALL FUN_00423a10                   ; 00435d28
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00423a10()
    LEA EAX,[EBX + 0x2588]              ; 00435d2d
    ADD ESP,0x8                         ; 00435d33
    FLD float ptr [EAX]                 ; 00435d36
    FMUL float ptr [ESP + 0xdc]         ; 00435d38
    FLD float ptr [EAX + 0x4]           ; 00435d3f
    FMUL float ptr [ESP + 0xdc]         ; 00435d42
    FLD float ptr [EAX + 0x8]           ; 00435d49
    FMUL float ptr [ESP + 0xdc]         ; 00435d4c
    LEA EDI,[ESP + 0x38]                ; 00435d53
    LEA ESI,[ESP + 0x74]                ; 00435d57
    LEA EDX,[EBX + 0x2508]              ; 00435d5b
    FXCH ST2                            ; 00435d61
    FSTP float ptr [ESP + 0x74]         ; 00435d63
    FSTP float ptr [ESP + 0x78]         ; 00435d67
    FSTP float ptr [ESP + 0x7c]         ; 00435d6b
    MOVSD ES:EDI,ESI                    ; 00435d6f
    MOVSD ES:EDI,ESI                    ; 00435d70
    MOVSD ES:EDI,ESI                    ; 00435d71
    LEA EAX,[EBX + 0x257c]              ; 00435d72
    FLD float ptr [EDX]                 ; 00435d78
    FLD float ptr [EDX + 0x4]           ; 00435d7a
    FLD float ptr [EDX + 0x8]           ; 00435d7d
    LEA EDI,[ESP + 0x50]                ; 00435d80
    LEA ESI,[ESP + 0x80]                ; 00435d84
    FXCH ST2                            ; 00435d8b
    FADD float ptr [EAX]                ; 00435d8d
    FXCH                                ; 00435d8f
    FADD float ptr [EAX + 0x4]          ; 00435d91
    FXCH ST2                            ; 00435d94
    FADD float ptr [EAX + 0x8]          ; 00435d96
    FXCH                                ; 00435d99
    FSTP float ptr [ESP + 0x80]         ; 00435d9b
    FXCH                                ; 00435da2
    FSTP float ptr [ESP + 0x84]         ; 00435da4
    FSTP float ptr [ESP + 0x88]         ; 00435dab
    MOVSD ES:EDI,ESI                    ; 00435db2
    MOVSD ES:EDI,ESI                    ; 00435db3
    MOVSD ES:EDI,ESI                    ; 00435db4
    FLD float ptr [ESP + 0x50]          ; 00435db5
    FLD float ptr [ESP + 0x54]          ; 00435db9
    FLD float ptr [ESP + 0x58]          ; 00435dbd
    LEA EDI,[ESP + 0x20]                ; 00435dc1
    LEA ESI,[ESP + 0x5c]                ; 00435dc5
    FXCH ST2                            ; 00435dc9
    FADD float ptr [ESP + 0x38]         ; 00435dcb
    FXCH                                ; 00435dcf
    FADD float ptr [ESP + 0x3c]         ; 00435dd1
    FXCH ST2                            ; 00435dd5
    FADD float ptr [ESP + 0x40]         ; 00435dd7
    FXCH                                ; 00435ddb
    FSTP float ptr [ESP + 0x5c]         ; 00435ddd
    FXCH                                ; 00435de1
    FSTP float ptr [ESP + 0x60]         ; 00435de3
    FSTP float ptr [ESP + 0x64]         ; 00435de7
    MOVSD ES:EDI,ESI                    ; 00435deb
    MOVSD ES:EDI,ESI                    ; 00435dec
    MOVSD ES:EDI,ESI                    ; 00435ded
    MOV dword ptr [EDX + 0x8],0x0       ; 00435dee
    MOV ECX,dword ptr [EDX + 0x8]       ; 00435df5
    MOV dword ptr [EDX + 0x4],ECX       ; 00435df8
    MOV ECX,dword ptr [EDX + 0x4]       ; 00435dfb
    MOV dword ptr [EDX],ECX             ; 00435dfe
    MOV dword ptr [EAX + 0x8],0x0       ; 00435e00
    MOV EDX,dword ptr [EAX + 0x8]       ; 00435e07
    MOV dword ptr [EAX + 0x4],EDX       ; 00435e0a
    MOV EDX,dword ptr [EAX + 0x4]       ; 00435e0d
    MOV dword ptr [EAX],EDX             ; 00435e10
    LEA EAX,[ESP + 0x20]                ; 00435e12
    PUSH EAX                            ; 00435e16
    PUSH EBX                            ; 00435e17
    CALL FUN_00423a60                   ; 00435e18
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00423a60()
    ADD ESP,0x8                         ; 00435e1d
    JMP 0x00435ae3                      ; 00435e20
        ;   XREF to: 00435ae3 (UNCONDITIONAL_JUMP)  ; LAB_00435ae3

