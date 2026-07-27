; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_charactr_cpp_FUN_004259f0(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[38]:
;   core_armour.cpp_FUN_0040fa20 at 0040fa33
;   core_baron.cpp_FUN_00410490 at 00410538
;   core_batcreat.cpp_CBatCreature_process_FUN_00412480 at 0041249c
;   core_batman.cpp_CBatman_process_FUN_00413800 at 0041381c
;   core_beast.cpp_CBeast_process_FUN_004150d0 at 004150e2
;   core_biggs.cpp_CBiggs_process_FUN_004154b0 at 004154c2
;   core_boneguy.cpp_FUN_00418a00 at 00418a7a
;   core_bride.cpp_FUN_0041fe40 at 0041fe5c
;   core_bugs.cpp_FUN_00421480 at 0042148b
;   core_colonel.cpp_FUN_00439f50 at 00439f66
;   ... and 28 more
;
; Referenced Globals:
;   double DOUBLE_00579f62 = 0.0100000000000000
;   float FLOAT_0059b094 = 9999
;   undefined4 DAT_005b9354
;   undefined4 DAT_005be220
;   undefined4 DAT_01c775ec
;   undefined4 DAT_01e56da0
;
; Called Functions:
;   core_charactr.cpp_CCharacter_advanceGesture_FUN_00429660
;   core_charactr.cpp_CCharacter_computePickup_FUN_00429010
;   core_charactr.cpp_CCharacter_processFire_FUN_004269b0
;   core_game.cpp_CGame_setStatusDisplay_FUN_004a3ab0
;   core_hero.cpp_isAnyHeroWithinCylinder_FUN_004b4630
;   core_script.cpp_CScript_setSpeaker_FUN_00504bf0
;   sound_sndmain.cpp_killSfx_FUN_00527230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004259f0
        ;   Label: core_charactr.cpp_FUN_004259f0
    PUSH ESI                            ; 004259f1
    PUSH EDI                            ; 004259f2
    SUB ESP,0x4                         ; 004259f3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004259f6
    FLD float ptr [ESI + 0x2dd0]        ; 004259fa
    FSUB float ptr [ESP + 0x18]         ; 00425a00
    FST float ptr [ESI + 0x2dd0]        ; 00425a04
    FLDZ                                ; 00425a0a
    FCOMPP                              ; 00425a0c
    FNSTSW AX                           ; 00425a0e
    SAHF                                ; 00425a10
    JBE 0x00425a1d                      ; 00425a11
        ;   XREF to: 00425a1d (CONDITIONAL_JUMP)  ; LAB_00425a1d
    MOV dword ptr [ESI + 0x2dd0],0x0    ; 00425a13
    PUSH dword ptr [ESP + 0x18]         ; 00425a1d
        ;   Label: LAB_00425a1d
    PUSH ESI                            ; 00425a21
    CALL core_charactr.cpp_CCharacter_processFire_FUN_004269b0 ; 00425a22
        ;   XREF to: 004269b0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_processFire_FUN_004269b0()
    ADD ESP,0x8                         ; 00425a27
    PUSH dword ptr [ESP + 0x18]         ; 00425a2a
    PUSH ESI                            ; 00425a2e
    CALL core_charactr.cpp_CCharacter_advanceGesture_FUN_00429660 ; 00425a2f
        ;   XREF to: 00429660 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_advanceGesture_FUN_00429660()
    ADD ESP,0x8                         ; 00425a34
    FLD float ptr [ESI + 0xb648]        ; 00425a37
    FSUB float ptr [ESP + 0x18]         ; 00425a3d
    FST float ptr [ESI + 0xb648]        ; 00425a41
    FLDZ                                ; 00425a47
    FCOMPP                              ; 00425a49
    FNSTSW AX                           ; 00425a4b
    SAHF                                ; 00425a4d
    JBE 0x00425a5a                      ; 00425a4e
        ;   XREF to: 00425a5a (CONDITIONAL_JUMP)  ; LAB_00425a5a
    MOV dword ptr [ESI + 0xb648],0x0    ; 00425a50
    FLD float ptr [ESI + 0x2610]        ; 00425a5a
        ;   Label: LAB_00425a5a
    FLDZ                                ; 00425a60
    FCOMPP                              ; 00425a62
    FNSTSW AX                           ; 00425a64
    SAHF                                ; 00425a66
    JNC 0x00425a9c                      ; 00425a67
        ;   XREF to: 00425a9c (CONDITIONAL_JUMP)  ; LAB_00425a9c
    FLD float ptr [ESI + 0x2610]        ; 00425a69
    FSUB float ptr [ESP + 0x18]         ; 00425a6f
    FST float ptr [ESI + 0x2610]        ; 00425a73
    FLDZ                                ; 00425a79
    FCOMPP                              ; 00425a7b
    FNSTSW AX                           ; 00425a7d
    SAHF                                ; 00425a7f
    JBE 0x00425a9c                      ; 00425a80
        ;   XREF to: 00425a9c (CONDITIONAL_JUMP)  ; LAB_00425a9c
    PUSH ESI                            ; 00425a82
    MOV EDX,dword ptr [0x005be220]      ; 00425a83 | DAT_005be220
    PUSH EDX                            ; 00425a89 | DAT_01e56da0
    MOV dword ptr [ESI + 0x2610],0x0    ; 00425a8a
    CALL core_script.cpp_CScript_setSpeaker_FUN_00504bf0 ; 00425a94
        ;   XREF to: 00504bf0 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_CScript_setSpeaker_FUN_00504bf0()
    ADD ESP,0x8                         ; 00425a99
    CMP dword ptr [ESI + 0x243c],0x2    ; 00425a9c
        ;   Label: LAB_00425a9c
    JNZ 0x00425ad2                      ; 00425aa3
        ;   XREF to: 00425ad2 (CONDITIONAL_JUMP)  ; LAB_00425ad2
    FLD float ptr [ESI + 0x2434]        ; 00425aa5
    FDIV float ptr [ESI + 0x2438]       ; 00425aab
    PUSH 0x40000000                     ; 00425ab1
    SUB ESP,0x4                         ; 00425ab6
    LEA EAX,[ESI + 0x2440]              ; 00425ab9
    FSTP float ptr [ESP]                ; 00425abf
    PUSH EAX                            ; 00425ac2
    MOV EBX,dword ptr [0x005b9354]      ; 00425ac3 | DAT_005b9354
    PUSH EBX                            ; 00425ac9 | DAT_01c775ec
    CALL core_game.cpp_CGame_setStatusDisplay_FUN_004a3ab0 ; 00425aca
        ;   XREF to: 004a3ab0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_setStatusDisplay_FUN_004a3ab0()
    ADD ESP,0x10                        ; 00425acf
    CMP dword ptr [ESI + 0x2404],0x0    ; 00425ad2
        ;   Label: LAB_00425ad2
    JNZ 0x00425baf                      ; 00425ad9
        ;   XREF to: 00425baf (CONDITIONAL_JUMP)  ; LAB_00425baf
    FLD float ptr [ESI + 0x240c]        ; 00425adf
    FCOMP float ptr [0x0059b094]        ; 00425ae5 | FLOAT_0059b094
    FNSTSW AX                           ; 00425aeb
    SAHF                                ; 00425aed
    JZ 0x00425bb3                       ; 00425aee
        ;   XREF to: 00425bb3 (CONDITIONAL_JUMP)  ; LAB_00425bb3
    FLD float ptr [ESI + 0xe4]          ; 00425af4
        ;   Label: LAB_00425af4
    MOV dword ptr [ESI + 0xe4],0x0      ; 00425afa
    FADD float ptr [ESI + 0x24]         ; 00425b04
    FLD float ptr [ESI + 0x240c]        ; 00425b07
    FXCH                                ; 00425b0d
    FSTP float ptr [ESI + 0x24]         ; 00425b0f
    FCOMP float ptr [0x0059b094]        ; 00425b12 | FLOAT_0059b094
    FNSTSW AX                           ; 00425b18
    SAHF                                ; 00425b1a
    JZ 0x00425b26                       ; 00425b1b
        ;   XREF to: 00425b26 (CONDITIONAL_JUMP)  ; LAB_00425b26
    CMP dword ptr [ESI + 0xdc],0x0      ; 00425b1d
    JZ 0x00425b49                       ; 00425b24
        ;   XREF to: 00425b49 (CONDITIONAL_JUMP)  ; LAB_00425b49
    PUSH 0x0                            ; 00425b26
        ;   Label: LAB_00425b26
    MOV EAX,dword ptr [ESI + 0x14c]     ; 00425b28
    PUSH dword ptr [ESI + 0x2dd4]       ; 00425b2e
    PUSH ESI                            ; 00425b34
    CALL dword ptr [EAX + 0x38]         ; 00425b35
    MOV dword ptr [ESP + 0xc],EAX       ; 00425b38
    MOV EAX,dword ptr [ESP + 0xc]       ; 00425b3c
    MOV dword ptr [ESI + 0x240c],EAX    ; 00425b40
    ADD ESP,0xc                         ; 00425b46
    FLD float ptr [ESI + 0x240c]        ; 00425b49
        ;   Label: LAB_00425b49
    FADD double ptr [0x00579f62]        ; 00425b4f | DOUBLE_00579f62
    FLD float ptr [ESI + 0x24]          ; 00425b55
    FCOMPP                              ; 00425b58
    FNSTSW AX                           ; 00425b5a
    SAHF                                ; 00425b5c
    JNC 0x00425bdd                      ; 00425b5d
        ;   XREF to: 00425bdd (CONDITIONAL_JUMP)  ; LAB_00425bdd
    MOV EAX,0x1                         ; 00425b63
    LEA EBX,[ESI + 0x2414]              ; 00425b68
        ;   Label: LAB_00425b68
    MOV dword ptr [ESI + 0x2408],EAX    ; 00425b6e
    MOV dword ptr [EBX + 0x8],0x0       ; 00425b74
    MOV EAX,dword ptr [EBX + 0x8]       ; 00425b7b
    MOV dword ptr [EBX + 0x4],EAX       ; 00425b7e
    MOV EAX,dword ptr [EBX + 0x4]       ; 00425b81
    MOV dword ptr [EBX],EAX             ; 00425b84
    MOV EDX,dword ptr [ESI + 0xdc]      ; 00425b86
    MOV dword ptr [ESI + 0x2410],0x0    ; 00425b8c
    TEST EDX,EDX                        ; 00425b96
    JNZ 0x00425ba3                      ; 00425b98
        ;   XREF to: 00425ba3 (CONDITIONAL_JUMP)  ; LAB_00425ba3
    CMP dword ptr [ESI + 0x2598],0x0    ; 00425b9a
    JZ 0x00425be1                       ; 00425ba1
        ;   XREF to: 00425be1 (CONDITIONAL_JUMP)  ; LAB_00425be1
    MOV EAX,0x1                         ; 00425ba3
        ;   Label: LAB_00425ba3
    ADD ESP,0x4                         ; 00425ba8
        ;   Label: LAB_00425ba8
    POP EDI                             ; 00425bab
    POP ESI                             ; 00425bac
    POP EBX                             ; 00425bad
    RET                                 ; 00425bae
    XOR EAX,EAX                         ; 00425baf
        ;   Label: LAB_00425baf
    JMP 0x00425ba8                      ; 00425bb1
        ;   XREF to: 00425ba8 (UNCONDITIONAL_JUMP)  ; LAB_00425ba8
    MOV EDI,ESI                         ; 00425bb3
        ;   Label: LAB_00425bb3
    XOR EBX,EBX                         ; 00425bb5
    CMP dword ptr [EDI + 0x24ac],0x0    ; 00425bb7
        ;   Label: LAB_00425bb7
    JNZ 0x00425bcf                      ; 00425bbe
        ;   XREF to: 00425bcf (CONDITIONAL_JUMP)  ; LAB_00425bcf
    INC EBX                             ; 00425bc0
        ;   Label: LAB_00425bc0
    ADD EDI,0x44                        ; 00425bc1
    CMP EBX,0x2                         ; 00425bc4
    JGE 0x00425af4                      ; 00425bc7
        ;   XREF to: 00425af4 (CONDITIONAL_JUMP)  ; LAB_00425af4
    JMP 0x00425bb7                      ; 00425bcd
        ;   XREF to: 00425bb7 (UNCONDITIONAL_JUMP)  ; LAB_00425bb7
    PUSH 0x0                            ; 00425bcf
        ;   Label: LAB_00425bcf
    PUSH EBX                            ; 00425bd1
    PUSH ESI                            ; 00425bd2
    CALL core_charactr.cpp_CCharacter_computePickup_FUN_00429010 ; 00425bd3
        ;   XREF to: 00429010 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_computePickup_FUN_00429010()
    ADD ESP,0xc                         ; 00425bd8
    JMP 0x00425bc0                      ; 00425bdb
        ;   XREF to: 00425bc0 (UNCONDITIONAL_JUMP)  ; LAB_00425bc0
    XOR EAX,EAX                         ; 00425bdd
        ;   Label: LAB_00425bdd
    JMP 0x00425b68                      ; 00425bdf
        ;   XREF to: 00425b68 (UNCONDITIONAL_JUMP)  ; LAB_00425b68
    PUSH dword ptr [ESI + 0x2ddc]       ; 00425be1
        ;   Label: LAB_00425be1
    LEA EAX,[ESI + 0x20]                ; 00425be7
    PUSH dword ptr [ESI + 0x2de0]       ; 00425bea
    PUSH EAX                            ; 00425bf0
    CALL core_hero.cpp_isAnyHeroWithinCylinder_FUN_004b4630 ; 00425bf1
        ;   XREF to: 004b4630 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_isAnyHeroWithinCylinder_FUN_004b4630()
    ADD ESP,0xc                         ; 00425bf6
    TEST EAX,EAX                        ; 00425bf9
    JNZ 0x00425ba3                      ; 00425bfb
        ;   XREF to: 00425ba3 (CONDITIONAL_JUMP)  ; LAB_00425ba3
    MOV EBX,dword ptr [ESI + 0xb63c]    ; 00425bfd
    PUSH EBX                            ; 00425c03
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00425c04
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 00425c09
    XOR EAX,EAX                         ; 00425c0c
    ADD ESP,0x4                         ; 00425c0e
    POP EDI                             ; 00425c11
    POP ESI                             ; 00425c12
    POP EBX                             ; 00425c13
    RET                                 ; 00425c14

