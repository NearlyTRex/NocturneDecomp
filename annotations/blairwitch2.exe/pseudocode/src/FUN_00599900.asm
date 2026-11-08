; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00599900(int param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_005998e8 = 0059998e
;   undefined4 DAT_005ef3ca
;   undefined4 DAT_005ef3d2
;   undefined4 DAT_005ef3da
;
; Called Functions:
;   FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599900
        ;   Label: FUN_00599900
    PUSH ESI                            ; 00599901
    PUSH EDI                            ; 00599902
    PUSH EBP                            ; 00599903
    MOV EBP,ESP                         ; 00599904
    SUB ESP,0x90                        ; 00599906
    AND ESP,0xfffffff8                  ; 0059990c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0059990f
    MOV EDX,dword ptr [EBX + 0x10bac]   ; 00599912
    PUSH EDX                            ; 00599918
    LEA EAX,[EBX + 0x2b4]               ; 00599919
    PUSH EAX                            ; 0059991f
    LEA ESI,[ESP + 0x20]                ; 00599920
    LEA EDI,[ESP + 0x2c]                ; 00599924
    CALL FUN_00546a90                   ; 00599928
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00546a90()
    LEA ESI,[ESP + 0x20]                ; 0059992d
    ADD ESP,0x8                         ; 00599931
    LEA EAX,[ESP + 0x24]                ; 00599934
    MOV ECX,dword ptr [EBP + 0x18]      ; 00599938
    MOVSD ES:EDI,ESI                    ; 0059993b
    MOVSD ES:EDI,ESI                    ; 0059993c
    MOVSD ES:EDI,ESI                    ; 0059993d
    CMP EAX,ECX                         ; 0059993e
    JNZ 0x00599a78                      ; 00599940
        ;   XREF to: 00599a78 (CONDITIONAL_JUMP)  ; LAB_00599a78
    MOV ESI,0x1                         ; 00599946
        ;   Label: LAB_00599946
    XOR EDI,EDI                         ; 0059994b
    LEA EAX,[EBX + 0x2b4]               ; 0059994d
    MOV dword ptr [ESP + 0x84],EDI      ; 00599953
    MOV dword ptr [ESP + 0x88],EAX      ; 0059995a
    MOV dword ptr [ESP + 0x8c],ESI      ; 00599961
    MOV EDX,dword ptr [ESP + 0x84]      ; 00599968
        ;   Label: LAB_00599968
    ADD EDX,dword ptr [EBX + 0x6c]      ; 0059996f
    MOV ESI,0x4                         ; 00599972
    MOV EAX,EDX                         ; 00599977
    SAR EDX,0x1f                        ; 00599979
    IDIV ESI                            ; 0059997c
    CMP EDX,0x3                         ; 0059997e
    JA 0x00599a52                       ; 00599981
        ;   XREF to: 00599a52 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x5998e8]  ; 00599987 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0x10bb4]   ; 0059998e
        ;   Label: caseD_0
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 00599994
    JZ 0x00599a52                       ; 0059999c
        ;   XREF to: 00599a52 (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBX + 0x10b9c]   ; 005999a2
    PUSH ECX                            ; 005999a8
    MOV ESI,dword ptr [ESP + 0x8c]      ; 005999a9
    PUSH ESI                            ; 005999b0
    LEA ESI,[ESP + 0x74]                ; 005999b1
    LEA EDI,[ESP + 0x68]                ; 005999b5
    CALL FUN_00546a90                   ; 005999b9
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00546a90()
    LEA ESI,[ESP + 0x74]                ; 005999be
    LEA EAX,[ESP + 0x68]                ; 005999c2
    ADD ESP,0x8                         ; 005999c6
    LEA EDX,[ESP + 0x30]                ; 005999c9
    MOVSD ES:EDI,ESI                    ; 005999cd
    MOVSD ES:EDI,ESI                    ; 005999ce
    MOVSD ES:EDI,ESI                    ; 005999cf
    CMP EDX,EAX                         ; 005999d0
    JZ 0x005999ec                       ; 005999d2
        ;   XREF to: 005999ec (CONDITIONAL_JUMP)  ; LAB_005999ec
    MOV EAX,dword ptr [ESP + 0x60]      ; 005999d4
    MOV dword ptr [ESP + 0x30],EAX      ; 005999d8
    MOV EAX,dword ptr [ESP + 0x64]      ; 005999dc
    MOV dword ptr [ESP + 0x34],EAX      ; 005999e0
    MOV EAX,dword ptr [ESP + 0x68]      ; 005999e4
    MOV dword ptr [ESP + 0x38],EAX      ; 005999e8
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 005999ec
        ;   Label: LAB_005999ec
    FLD double ptr [0x005ef3ca]         ; 005999f4 | DAT_005ef3ca
    FLD float ptr [ESP + 0x30]          ; 005999fa
    FMUL ST1                            ; 005999fe
    FLD float ptr [ESP + 0x34]          ; 00599a00
    FMUL double ptr [0x005ef3d2]        ; 00599a04 | DAT_005ef3d2
    FLD float ptr [ESP + 0x24]          ; 00599a0a
    FMULP ST3                           ; 00599a0e
    FLD float ptr [ESP + 0x28]          ; 00599a10
    FMUL double ptr [0x005ef3da]        ; 00599a14 | DAT_005ef3da
    MOV EAX,dword ptr [EBP + 0x18]      ; 00599a1a
    FADDP                               ; 00599a1d
    FXCH ST2                            ; 00599a1f
    FADDP                               ; 00599a21
    FXCH                                ; 00599a23
    FSTP float ptr [ESP + 0x34]         ; 00599a25
    ADD EDX,EAX                         ; 00599a29
    LEA EAX,[ESP + 0x30]                ; 00599a2b
    FSTP float ptr [ESP + 0x30]         ; 00599a2f
        ;   Label: LAB_00599a2f
    CMP EDX,EAX                         ; 00599a33
    JZ 0x00599a4b                       ; 00599a35
        ;   XREF to: 00599a4b (CONDITIONAL_JUMP)  ; LAB_00599a4b
    MOV EAX,dword ptr [ESP + 0x30]      ; 00599a37
    MOV dword ptr [EDX],EAX             ; 00599a3b
    MOV EAX,dword ptr [ESP + 0x34]      ; 00599a3d
    MOV dword ptr [EDX + 0x4],EAX       ; 00599a41
    MOV EAX,dword ptr [ESP + 0x38]      ; 00599a44
    MOV dword ptr [EDX + 0x8],EAX       ; 00599a48
        ;   Label: LAB_00599a48
    INC dword ptr [ESP + 0x8c]          ; 00599a4b
        ;   Label: LAB_00599a4b
    MOV ECX,dword ptr [ESP + 0x84]      ; 00599a52
        ;   Label: default
    INC ECX                             ; 00599a59
    MOV dword ptr [ESP + 0x84],ECX      ; 00599a5a
    CMP ECX,0x4                         ; 00599a61
    JL 0x00599968                       ; 00599a64
        ;   XREF to: 00599968 (CONDITIONAL_JUMP)  ; LAB_00599968
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00599a6a
    MOV ESP,EBP                         ; 00599a71
    POP EBP                             ; 00599a73
    POP EDI                             ; 00599a74
    POP ESI                             ; 00599a75
    POP EBX                             ; 00599a76
    RET                                 ; 00599a77
    MOV EAX,dword ptr [ESP + 0x24]      ; 00599a78
        ;   Label: LAB_00599a78
    MOV dword ptr [ECX],EAX             ; 00599a7c
    MOV EAX,dword ptr [ESP + 0x28]      ; 00599a7e
    MOV dword ptr [ECX + 0x4],EAX       ; 00599a82
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00599a85
    MOV dword ptr [ECX + 0x8],EAX       ; 00599a89
    JMP 0x00599946                      ; 00599a8c
        ;   XREF to: 00599946 (UNCONDITIONAL_JUMP)  ; LAB_00599946
    MOV EAX,dword ptr [EBX + 0x10bbc]   ; 00599a91
        ;   Label: caseD_1
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 00599a97
    JZ 0x00599a52                       ; 00599a9f
        ;   XREF to: 00599a52 (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBX + 0x10ba0]   ; 00599aa1
    PUSH EAX                            ; 00599aa7
    MOV EDX,dword ptr [ESP + 0x8c]      ; 00599aa8
    PUSH EDX                            ; 00599aaf
    LEA ESI,[ESP + 0x50]                ; 00599ab0
    LEA EDI,[ESP + 0x14]                ; 00599ab4
    CALL FUN_00546a90                   ; 00599ab8
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00546a90()
    LEA ESI,[ESP + 0x50]                ; 00599abd
    LEA EAX,[ESP + 0x14]                ; 00599ac1
    ADD ESP,0x8                         ; 00599ac5
    LEA EDX,[ESP + 0x30]                ; 00599ac8
    MOVSD ES:EDI,ESI                    ; 00599acc
    MOVSD ES:EDI,ESI                    ; 00599acd
    MOVSD ES:EDI,ESI                    ; 00599ace
    CMP EDX,EAX                         ; 00599acf
    JZ 0x00599aeb                       ; 00599ad1
        ;   XREF to: 00599aeb (CONDITIONAL_JUMP)  ; LAB_00599aeb
    MOV EAX,dword ptr [ESP + 0xc]       ; 00599ad3
    MOV dword ptr [ESP + 0x30],EAX      ; 00599ad7
    MOV EAX,dword ptr [ESP + 0x10]      ; 00599adb
    MOV dword ptr [ESP + 0x34],EAX      ; 00599adf
    MOV EAX,dword ptr [ESP + 0x14]      ; 00599ae3
    MOV dword ptr [ESP + 0x38],EAX      ; 00599ae7
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 00599aeb
        ;   Label: LAB_00599aeb
    FLD double ptr [0x005ef3ca]         ; 00599af3 | DAT_005ef3ca
    FLD float ptr [ESP + 0x30]          ; 00599af9
    FMUL ST1                            ; 00599afd
    FLD float ptr [ESP + 0x34]          ; 00599aff
    FMUL double ptr [0x005ef3d2]        ; 00599b03 | DAT_005ef3d2
    FLD float ptr [ESP + 0x24]          ; 00599b09
    FMULP ST3                           ; 00599b0d
    FLD float ptr [ESP + 0x28]          ; 00599b0f
    FMUL double ptr [0x005ef3da]        ; 00599b13 | DAT_005ef3da
    MOV ESI,dword ptr [EBP + 0x18]      ; 00599b19
    LEA EAX,[ESP + 0x30]                ; 00599b1c
    FADDP                               ; 00599b20
    FXCH ST2                            ; 00599b22
    FADDP                               ; 00599b24
    FXCH                                ; 00599b26
    FSTP float ptr [ESP + 0x34]         ; 00599b28
    ADD EDX,ESI                         ; 00599b2c
    JMP 0x00599a2f                      ; 00599b2e
        ;   XREF to: 00599a2f (UNCONDITIONAL_JUMP)  ; LAB_00599a2f
    MOV EAX,dword ptr [EBX + 0x10bcc]   ; 00599b33
        ;   Label: caseD_2
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 00599b39
    JZ 0x00599a52                       ; 00599b41
        ;   XREF to: 00599a52 (CONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [EBX + 0x10b88]   ; 00599b47
    PUSH ESI                            ; 00599b4d
    MOV EDI,dword ptr [ESP + 0x8c]      ; 00599b4e
    PUSH EDI                            ; 00599b55
    LEA ESI,[ESP + 0x8]                 ; 00599b56
    CALL FUN_00546a90                   ; 00599b5a
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00546a90()
    ADD ESP,0x8                         ; 00599b5f
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 00599b62
    LEA EDI,[ESP + 0x78]                ; 00599b6a
    MOV ESI,ESP                         ; 00599b6e
    MOV ECX,dword ptr [EBP + 0x18]      ; 00599b70
    LEA EAX,[ESP + 0x78]                ; 00599b73
    ADD EDX,ECX                         ; 00599b77
    MOVSD ES:EDI,ESI                    ; 00599b79
    MOVSD ES:EDI,ESI                    ; 00599b7a
    MOVSD ES:EDI,ESI                    ; 00599b7b
    CMP EDX,EAX                         ; 00599b7c
    JZ 0x00599a4b                       ; 00599b7e
        ;   XREF to: 00599a4b (CONDITIONAL_JUMP)  ; LAB_00599a4b
    MOV EAX,dword ptr [ESP + 0x78]      ; 00599b84
    MOV dword ptr [EDX],EAX             ; 00599b88
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00599b8a
    MOV dword ptr [EDX + 0x4],EAX       ; 00599b8e
    MOV EAX,dword ptr [ESP + 0x80]      ; 00599b91
    JMP 0x00599a48                      ; 00599b98
        ;   XREF to: 00599a48 (UNCONDITIONAL_JUMP)  ; LAB_00599a48
    MOV EAX,dword ptr [EBX + 0x10bc8]   ; 00599b9d
        ;   Label: caseD_3
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 00599ba3
    JZ 0x00599a52                       ; 00599bab
        ;   XREF to: 00599a52 (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBX + 0x10bb0]   ; 00599bb1
    PUSH ECX                            ; 00599bb7
    MOV ESI,dword ptr [ESP + 0x8c]      ; 00599bb8
    PUSH ESI                            ; 00599bbf
    LEA ESI,[ESP + 0x44]                ; 00599bc0
    LEA EDI,[ESP + 0x5c]                ; 00599bc4
    CALL FUN_00546a90                   ; 00599bc8
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00546a90()
    LEA ESI,[ESP + 0x44]                ; 00599bcd
    ADD ESP,0x8                         ; 00599bd1
    MOVSD ES:EDI,ESI                    ; 00599bd4
    MOVSD ES:EDI,ESI                    ; 00599bd5
    MOVSD ES:EDI,ESI                    ; 00599bd6
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 00599bd7
    ADD EDX,dword ptr [EBP + 0x18]      ; 00599bdf
    LEA EAX,[ESP + 0x54]                ; 00599be2
    CMP EDX,EAX                         ; 00599be6
    JZ 0x00599a4b                       ; 00599be8
        ;   XREF to: 00599a4b (CONDITIONAL_JUMP)  ; LAB_00599a4b
    MOV EAX,dword ptr [ESP + 0x54]      ; 00599bee
    MOV dword ptr [EDX],EAX             ; 00599bf2
    MOV EAX,dword ptr [ESP + 0x58]      ; 00599bf4
    MOV dword ptr [EDX + 0x4],EAX       ; 00599bf8
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00599bfb
    JMP 0x00599a48                      ; 00599bff
        ;   XREF to: 00599a48 (UNCONDITIONAL_JUMP)  ; LAB_00599a48

