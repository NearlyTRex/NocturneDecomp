; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fcb00(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_004bbf70 at 004bc796
;   FUN_004bc840 at 004bca55
;   FUN_004bd3a0 at 004bd424
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_005de874
;   TerminatedCString s_CDemonMission_run_hero_l_005de888
;   TerminatedCString s_core_mission_cpp_005de8ad
;   TerminatedCString s_CDemonMission_run_no_gLo_005de8c1
;   TerminatedCString s_hq_geo_005de8e4
;   undefined4 DAT_00616044
;   undefined4 DAT_00616494
;   undefined4 DAT_00617e10
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01cb6b78
;   undefined4 DAT_01cedee0
;   undefined4 DAT_01cedef4
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d1c630
;
; Called Functions:
;   FUN_004032b0
;   FUN_004a50b0
;   FUN_004b6170
;   FUN_004bdfb0
;   FUN_004e1480
;   FUN_004e4500
;   FUN_004fb450
;   FUN_004fb490
;   FUN_004fc270
;   FUN_004fc570
;   FUN_004fc6b0
;   FUN_004fc820
;   FUN_004fce00
;   FUN_004fd0e0
;   FUN_00589560
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fcb00
        ;   Label: FUN_004fcb00
    PUSH ESI                            ; 004fcb01
    PUSH EDI                            ; 004fcb02
    PUSH EBP                            ; 004fcb03
    MOV EBX,dword ptr [ESP + 0x14]      ; 004fcb04
    MOV EBP,0x1                         ; 004fcb08
    CMP EBP,dword ptr [0x01cedee0]      ; 004fcb0d | DAT_01cedee0
        ;   Label: LAB_004fcb0d
    JG 0x004fcbf4                       ; 004fcb13
        ;   XREF to: 004fcbf4 (CONDITIONAL_JUMP)  ; LAB_004fcbf4
    MOV EAX,[0x01cedef4]                ; 004fcb19 | DAT_01cedef4
        ;   Label: LAB_004fcb19
    CMP dword ptr [EAX*0x4 + 0x1cedee4],0x0 ; 004fcb1e
    JNZ 0x004fcb4a                      ; 004fcb26
        ;   XREF to: 004fcb4a (CONDITIONAL_JUMP)  ; LAB_004fcb4a
    MOV EAX,0x5de8ad                    ; 004fcb28 | = "..\\core\\mission.cpp"
    MOV EDX,0x512                       ; 004fcb2d
    PUSH 0x5de8c1                       ; 004fcb32 | = "CDemonMission::run - no gLocalHero"
    MOV [0x01d046a0],EAX                ; 004fcb37 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 004fcb3c | DAT_01d046a4
    CALL FUN_004e4500                   ; 004fcb42
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004fcb47
    MOV EAX,[0x01cedef4]                ; 004fcb4a | DAT_01cedef4
        ;   Label: LAB_004fcb4a
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004fcb4f
    MOV ECX,dword ptr [EAX + 0x2c]      ; 004fcb56
    PUSH ECX                            ; 004fcb59
    PUSH EBX                            ; 004fcb5a
    CALL FUN_004fc6b0                   ; 004fcb5b
        ;   XREF to: 004fc6b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc6b0()
    ADD ESP,0x8                         ; 004fcb60
    XOR AH,AH                           ; 004fcb63
    PUSH EBX                            ; 004fcb65
    MOV byte ptr [0x01d1c630],AH        ; 004fcb66 | DAT_01d1c630
    CALL FUN_004fc820                   ; 004fcb6c
        ;   XREF to: 004fc820 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc820()
    ADD ESP,0x4                         ; 004fcb71
    MOV ESI,dword ptr [0x00616494]      ; 004fcb74 | DAT_00616494
    PUSH ESI                            ; 004fcb7a
    CALL FUN_004b6170                   ; 004fcb7b
        ;   XREF to: 004b6170 (UNCONDITIONAL_CALL)  ; undefined FUN_004b6170()
    MOV ESI,dword ptr [0x01cedef4]      ; 004fcb80 | DAT_01cedef4
    ADD ESP,0x4                         ; 004fcb86
    MOV ESI,dword ptr [ESI*0x4 + 0x1cedee4] ; 004fcb89
    PUSH ESI                            ; 004fcb90
    PUSH EBX                            ; 004fcb91
    MOV EDI,EAX                         ; 004fcb92
    CALL FUN_004fc270                   ; 004fcb94
        ;   XREF to: 004fc270 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc270()
    ADD ESP,0x8                         ; 004fcb99
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 004fcb9c
    PUSH ESI                            ; 004fcba2
    CALL dword ptr [EAX + 0x158]        ; 004fcba3
    ADD ESP,0x4                         ; 004fcba9
    PUSH EBX                            ; 004fcbac
    CALL FUN_004fb450                   ; 004fcbad
        ;   XREF to: 004fb450 (UNCONDITIONAL_CALL)  ; undefined FUN_004fb450()
    ADD ESP,0x4                         ; 004fcbb2
    TEST EDI,EDI                        ; 004fcbb5
    JZ 0x004fcbc2                       ; 004fcbb7
        ;   XREF to: 004fcbc2 (CONDITIONAL_JUMP)  ; LAB_004fcbc2
    CMP byte ptr [0x01d1c630],0x0       ; 004fcbb9 | DAT_01d1c630
    JNZ 0x004fcc1c                      ; 004fcbc0
        ;   XREF to: 004fcc1c (CONDITIONAL_JUMP)  ; LAB_004fcc1c
    PUSH 0x1                            ; 004fcbc2
        ;   Label: LAB_004fcbc2
    PUSH ESI                            ; 004fcbc4
    PUSH EBX                            ; 004fcbc5
    CALL FUN_004fc570                   ; 004fcbc6
        ;   XREF to: 004fc570 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc570()
    ADD ESP,0xc                         ; 004fcbcb
    MOV EAX,[0x00616494]                ; 004fcbce | DAT_00616494
        ;   Label: LAB_004fcbce
    CMP dword ptr [EAX + 0x278],0x0     ; 004fcbd3 | DAT_01cb6b78
    JNZ 0x004fcca6                      ; 004fcbda
        ;   XREF to: 004fcca6 (CONDITIONAL_JUMP)  ; LAB_004fcca6
    MOV EBX,dword ptr [0x00616044]      ; 004fcbe0 | DAT_00616044
    PUSH EBX                            ; 004fcbe6
    CALL FUN_004a50b0                   ; 004fcbe7
        ;   XREF to: 004a50b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a50b0()
    ADD ESP,0x4                         ; 004fcbec
    POP EBP                             ; 004fcbef
    POP EDI                             ; 004fcbf0
    POP ESI                             ; 004fcbf1
    POP EBX                             ; 004fcbf2
    RET                                 ; 004fcbf3
    MOV ECX,0x5de874                    ; 004fcbf4 | = "..\\core\\mission.cpp"
        ;   Label: LAB_004fcbf4
    MOV ESI,0x511                       ; 004fcbf9
    PUSH 0x5de888                       ; 004fcbfe | = "CDemonMission::run - hero list empty"
    MOV dword ptr [0x01d046a0],ECX      ; 004fcc03 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004fcc09 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004fcc0f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004fcc14
    JMP 0x004fcb19                      ; 004fcc17
        ;   XREF to: 004fcb19 (UNCONDITIONAL_JUMP)  ; LAB_004fcb19
    MOV EAX,[0x0061b5a8]                ; 004fcc1c | DAT_0061b5a8
        ;   Label: LAB_004fcc1c
    PUSH 0x5de8e4                       ; 004fcc21 | = "hq.geo"
    ADD EAX,0x14d0f0                    ; 004fcc26
    PUSH EAX                            ; 004fcc2b
    XOR EDI,EDI                         ; 004fcc2c
    CALL thunk_FUN_005b8130             ; 004fcc2e
        ;   XREF to: 005bada0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005b8130()
    ADD ESP,0x8                         ; 004fcc33
    TEST EAX,EAX                        ; 004fcc36
    JNZ 0x004fcc99                      ; 004fcc38
        ;   XREF to: 004fcc99 (CONDITIONAL_JUMP)  ; LAB_004fcc99
    PUSH EBP                            ; 004fcc3a
    PUSH EAX                            ; 004fcc3b
    PUSH 0x9                            ; 004fcc3c
    MOV EDX,dword ptr [0x00617e10]      ; 004fcc3e | DAT_00617e10
    PUSH EDX                            ; 004fcc44
    MOV EDI,EBP                         ; 004fcc45
    CALL FUN_004e1480                   ; 004fcc47
        ;   XREF to: 004e1480 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1480()
        ;   Label: LAB_004fcc47
    ADD ESP,0x10                        ; 004fcc4c
    PUSH 0x0                            ; 004fcc4f
    PUSH 0x1d1c630                      ; 004fcc51 | DAT_01d1c630
    PUSH EBX                            ; 004fcc56
    CALL FUN_004fb490                   ; 004fcc57
        ;   XREF to: 004fb490 (UNCONDITIONAL_CALL)  ; undefined FUN_004fb490()
    ADD ESP,0xc                         ; 004fcc5c
    PUSH ESI                            ; 004fcc5f
    PUSH EBX                            ; 004fcc60
    CALL FUN_004fd0e0                   ; 004fcc61
        ;   XREF to: 004fd0e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd0e0()
    ADD ESP,0x8                         ; 004fcc66
    TEST EAX,EAX                        ; 004fcc69
    JZ 0x004fcbce                       ; 004fcc6b
        ;   XREF to: 004fcbce (CONDITIONAL_JUMP)  ; LAB_004fcbce
    PUSH EBX                            ; 004fcc71
    CALL FUN_004fce00                   ; 004fcc72
        ;   XREF to: 004fce00 (UNCONDITIONAL_CALL)  ; undefined FUN_004fce00()
    ADD ESP,0x4                         ; 004fcc77
    TEST EAX,EAX                        ; 004fcc7a
    JZ 0x004fcbce                       ; 004fcc7c
        ;   XREF to: 004fcbce (CONDITIONAL_JUMP)  ; LAB_004fcbce
    TEST EDI,EDI                        ; 004fcc82
    JNZ 0x004fcb0d                      ; 004fcc84
        ;   XREF to: 004fcb0d (CONDITIONAL_JUMP)  ; LAB_004fcb0d
    CALL FUN_00589560                   ; 004fcc8a
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; undefined FUN_00589560()
    CALL FUN_004032b0                   ; 004fcc8f
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    JMP 0x004fcb0d                      ; 004fcc94
        ;   XREF to: 004fcb0d (UNCONDITIONAL_JUMP)  ; LAB_004fcb0d
    PUSH -0x1                           ; 004fcc99
        ;   Label: LAB_004fcc99
    PUSH EBP                            ; 004fcc9b
    PUSH 0x9                            ; 004fcc9c
    MOV EAX,[0x00617e10]                ; 004fcc9e | DAT_00617e10
    PUSH EAX                            ; 004fcca3
    JMP 0x004fcc47                      ; 004fcca4
        ;   XREF to: 004fcc47 (UNCONDITIONAL_JUMP)  ; LAB_004fcc47
    PUSH EAX                            ; 004fcca6
        ;   Label: LAB_004fcca6
    CALL FUN_004bdfb0                   ; 004fcca7
        ;   XREF to: 004bdfb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004bdfb0()
    ADD ESP,0x4                         ; 004fccac
    MOV EBX,dword ptr [0x00616044]      ; 004fccaf | DAT_00616044
    PUSH EBX                            ; 004fccb5
    CALL FUN_004a50b0                   ; 004fccb6
        ;   XREF to: 004a50b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a50b0()
    ADD ESP,0x4                         ; 004fccbb
    POP EBP                             ; 004fccbe
    POP EDI                             ; 004fccbf
    POP ESI                             ; 004fccc0
    POP EBX                             ; 004fccc1
    RET                                 ; 004fccc2

