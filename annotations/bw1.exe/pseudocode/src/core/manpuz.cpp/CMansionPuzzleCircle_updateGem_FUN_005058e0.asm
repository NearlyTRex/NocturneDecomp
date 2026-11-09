; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateGem_FUN_005058e0(CMansionPuzzleCircle *this_ptr,int gem_index,float delta_time)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   gem_index
; float            Stack[0xc]:4   delta_time
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_process_FUN_00504400 at 00504469
;
; Referenced Globals:
;   undefined4 DAT_005e7539
;   undefined4 DAT_00603444
;   undefined4 DAT_00603448
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_manpuz.cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_00506200
;   core_manpuz.cpp_CMansionPuzzleCircle_getPanelColor_FUN_005056f0
;   core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_00506210
;   core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_00506390
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_00505ec0
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_00506060
;   core_manpuz.cpp_updateGemHumChannel_FUN_005057c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005058e0
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_updateGem_FUN_005058e0
    PUSH ESI                            ; 005058e1
    PUSH EDI                            ; 005058e2
    PUSH EBP                            ; 005058e3
    SUB ESP,0x38                        ; 005058e4
    MOV EBP,dword ptr [ESP + 0x4c]      ; 005058e7
    FLD float ptr [ESP + 0x54]          ; 005058eb
    FMUL float ptr [0x005e7539]         ; 005058ef | DAT_005e7539
    FST float ptr [ESP + 0x1c]          ; 005058f5
    FDIV float ptr [0x00603444]         ; 005058f9 | DAT_00603444
    MOV EDX,dword ptr [ESP + 0x50]      ; 005058ff
    LEA EAX,[EDX*0x4 + 0x0]             ; 00505903
    SUB EAX,EDX                         ; 0050590a
    SHL EAX,0x3                         ; 0050590c
    SUB EAX,EDX                         ; 0050590f
    LEA EBX,[EBP + 0xaa0]               ; 00505911
    SHL EAX,0x3                         ; 00505917
    ADD EBX,EAX                         ; 0050591a
    LEA EAX,[EBX + 0x24]                ; 0050591c
    PUSH EAX                            ; 0050591f
    LEA ESI,[ESP + 0x4]                 ; 00505920
    PUSH EBP                            ; 00505924
    FSTP float ptr [ESP + 0x3c]         ; 00505925
    CALL core_actor.cpp_FUN_00408b40    ; 00505929
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0050592e
    LEA EAX,[ESP + 0xc]                 ; 00505931
    PUSH EAX                            ; 00505935
    LEA EDI,[ESP + 0x10]                ; 00505936
    PUSH 0x5e74dd                       ; 0050593a
    LEA EAX,[EBX + 0xac]                ; 0050593f
    LEA ESI,[ESP + 0x8]                 ; 00505945
    PUSH EAX                            ; 00505949
    MOVSD ES:EDI,ESI                    ; 0050594a
    MOVSD ES:EDI,ESI                    ; 0050594b
    MOVSD ES:EDI,ESI                    ; 0050594c
    PUSH dword ptr [ESP + 0x40]         ; 0050594d
    LEA EAX,[EBX + 0xc]                 ; 00505951
    PUSH dword ptr [EBX + 0x18]         ; 00505954
    PUSH EAX                            ; 00505957
    CALL core_manpuz.cpp_updateGemHumChannel_FUN_005057c0 ; 00505958
        ;   XREF to: 005057c0 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_updateGemHumChannel_FUN_005057c0()
    ADD ESP,0x18                        ; 0050595d
    MOV ESI,EAX                         ; 00505960
    LEA EAX,[ESP + 0xc]                 ; 00505962
    PUSH EAX                            ; 00505966
    PUSH 0x5e74fa                       ; 00505967
    LEA EAX,[EBX + 0xb0]                ; 0050596c
    PUSH EAX                            ; 00505972
    PUSH dword ptr [ESP + 0x40]         ; 00505973
    LEA EAX,[EBX + 0x10]                ; 00505977
    PUSH dword ptr [EBX + 0x1c]         ; 0050597a
    PUSH EAX                            ; 0050597d
    AND ESI,0x1                         ; 0050597e
    CALL core_manpuz.cpp_updateGemHumChannel_FUN_005057c0 ; 00505981
        ;   XREF to: 005057c0 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_updateGemHumChannel_FUN_005057c0()
    ADD ESP,0x18                        ; 00505986
    AND ESI,EAX                         ; 00505989
    LEA EAX,[ESP + 0xc]                 ; 0050598b
    PUSH EAX                            ; 0050598f
    PUSH 0x5e7519                       ; 00505990
    LEA EAX,[EBX + 0xb4]                ; 00505995
    PUSH EAX                            ; 0050599b
    PUSH dword ptr [ESP + 0x40]         ; 0050599c
    LEA EAX,[EBX + 0x14]                ; 005059a0
    PUSH dword ptr [EBX + 0x20]         ; 005059a3
    PUSH EAX                            ; 005059a6
    CALL core_manpuz.cpp_updateGemHumChannel_FUN_005057c0 ; 005059a7
        ;   XREF to: 005057c0 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_updateGemHumChannel_FUN_005057c0()
    ADD ESP,0x18                        ; 005059ac
    AND ESI,EAX                         ; 005059af
    LEA EAX,[ESP + 0x20]                ; 005059b1
    MOV dword ptr [EBX + 0x20],0x0      ; 005059b5
    PUSH EAX                            ; 005059bc
    LEA EAX,[ESP + 0x1c]                ; 005059bd
    FLD float ptr [EBX + 0x20]          ; 005059c1
    PUSH EAX                            ; 005059c4
    LEA EAX,[ESP + 0x2c]                ; 005059c5
    MOV EDX,dword ptr [ESP + 0x58]      ; 005059c9
    PUSH EAX                            ; 005059cd
    FSTP float ptr [EBX + 0x1c]         ; 005059ce
    PUSH EDX                            ; 005059d1
    FLD float ptr [EBX + 0x1c]          ; 005059d2
    PUSH EBP                            ; 005059d5
    FSTP float ptr [EBX + 0x18]         ; 005059d6
    CALL core_manpuz.cpp_CMansionPuzzleCircle_getPanelColor_FUN_005056f0 ; 005059d9
        ;   XREF to: 005056f0 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_CMansionPuzzleCircle_getPanelColor_FUN_005056f0(CMansionPuzzleCircle * this_ptr, int panel_index, float * out_r, float * out_g, ...)
    ADD ESP,0x14                        ; 005059de
    FLD float ptr [ESP + 0x1c]          ; 005059e1
    FDIV float ptr [0x00603448]         ; 005059e5 | DAT_00603448
    FLD float ptr [ESP + 0x24]          ; 005059eb
    FSUB float ptr [EBX]                ; 005059ef
    MOV EDX,0x1                         ; 005059f1
    FSTP float ptr [ESP + 0x2c]         ; 005059f6
    FST float ptr [ESP + 0x34]          ; 005059fa
    FCHS                                ; 005059fe
    FCOMP float ptr [ESP + 0x2c]        ; 00505a00
    FNSTSW AX                           ; 00505a04
    SAHF                                ; 00505a06
    JA 0x00505ad3                       ; 00505a07
        ;   XREF to: 00505ad3 (CONDITIONAL_JUMP)  ; LAB_00505ad3
    FLD float ptr [ESP + 0x2c]          ; 00505a0d
    FCOMP float ptr [ESP + 0x34]        ; 00505a11
    FNSTSW AX                           ; 00505a15
    SAHF                                ; 00505a17
    JBE 0x00505ade                      ; 00505a18
        ;   XREF to: 00505ade (CONDITIONAL_JUMP)  ; LAB_00505ade
    FLD float ptr [EBX]                 ; 00505a1e
    FADD float ptr [ESP + 0x34]         ; 00505a20
    FSTP float ptr [EBX]                ; 00505a24
        ;   Label: LAB_00505a24
    XOR EAX,EAX                         ; 00505a26
    FLD float ptr [ESP + 0x18]          ; 00505a28
        ;   Label: LAB_00505a28
    FLD float ptr [ESP + 0x34]          ; 00505a2c
    LEA ECX,[EBX + 0x4]                 ; 00505a30
    FCHS                                ; 00505a33
    FXCH                                ; 00505a35
    FSUB float ptr [ECX]                ; 00505a37
    AND EDX,EAX                         ; 00505a39
    FSTP float ptr [ESP + 0x30]         ; 00505a3b
    FCOMP float ptr [ESP + 0x30]        ; 00505a3f
    FNSTSW AX                           ; 00505a43
    SAHF                                ; 00505a45
    JBE 0x00505aeb                      ; 00505a46
        ;   XREF to: 00505aeb (CONDITIONAL_JUMP)  ; LAB_00505aeb
    FLD float ptr [ECX]                 ; 00505a4c
    FSUB float ptr [ESP + 0x34]         ; 00505a4e
    FSTP float ptr [ECX]                ; 00505a52
        ;   Label: LAB_00505a52
    XOR EAX,EAX                         ; 00505a54
    FLD float ptr [ESP + 0x20]          ; 00505a56
        ;   Label: LAB_00505a56
    FLD float ptr [ESP + 0x34]          ; 00505a5a
    LEA ECX,[EBX + 0x8]                 ; 00505a5e
    FCHS                                ; 00505a61
    FXCH                                ; 00505a63
    FSUB float ptr [ECX]                ; 00505a65
    AND EDX,EAX                         ; 00505a67
    FSTP float ptr [ESP + 0x28]         ; 00505a69
    FCOMP float ptr [ESP + 0x28]        ; 00505a6d
    FNSTSW AX                           ; 00505a71
    SAHF                                ; 00505a73
    JBE 0x00505b13                      ; 00505a74
        ;   XREF to: 00505b13 (CONDITIONAL_JUMP)  ; LAB_00505b13
    FLD float ptr [ECX]                 ; 00505a7a
    FSUB float ptr [ESP + 0x34]         ; 00505a7c
    FSTP float ptr [ECX]                ; 00505a80
        ;   Label: LAB_00505a80
    XOR EAX,EAX                         ; 00505a82
    AND EDX,EAX                         ; 00505a84
        ;   Label: LAB_00505a84
    JZ 0x00505acb                       ; 00505a86
        ;   XREF to: 00505acb (CONDITIONAL_JUMP)  ; LAB_00505acb
    TEST ESI,ESI                        ; 00505a88
    JZ 0x00505acb                       ; 00505a8a
        ;   XREF to: 00505acb (CONDITIONAL_JUMP)  ; LAB_00505acb
    MOV EDX,dword ptr [ESP + 0x50]      ; 00505a8c
    LEA EAX,[EDX*0x4 + 0x0]             ; 00505a90
    SUB EAX,EDX                         ; 00505a97
    SHL EAX,0x3                         ; 00505a99
    ADD EAX,EDX                         ; 00505a9c
    SHL EAX,0x2                         ; 00505a9e
    LEA EDX,[EBP + 0x5f0]               ; 00505aa1
    ADD EDX,EAX                         ; 00505aa7
    CMP dword ptr [EDX],0x0             ; 00505aa9
    JZ 0x00505acb                       ; 00505aac
        ;   XREF to: 00505acb (CONDITIONAL_JUMP)  ; LAB_00505acb
    TEST dword ptr [EDX + 0x8],0x7fffffff ; 00505aae
    JNZ 0x00505acb                      ; 00505ab5
        ;   XREF to: 00505acb (CONDITIONAL_JUMP)  ; LAB_00505acb
    TEST dword ptr [EDX + 0x4],0x7fffffff ; 00505ab7
    JNZ 0x00505acb                      ; 00505abe
        ;   XREF to: 00505acb (CONDITIONAL_JUMP)  ; LAB_00505acb
    FILD dword ptr [EDX + 0x4c]         ; 00505ac0
    FCOMP float ptr [EBX + 0xc]         ; 00505ac3
    FNSTSW AX                           ; 00505ac6
    SAHF                                ; 00505ac8
    JZ 0x00505b3b                       ; 00505ac9
        ;   XREF to: 00505b3b (CONDITIONAL_JUMP)  ; LAB_00505b3b
    ADD ESP,0x38                        ; 00505acb
        ;   Label: LAB_00505acb
    POP EBP                             ; 00505ace
    POP EDI                             ; 00505acf
    POP ESI                             ; 00505ad0
    POP EBX                             ; 00505ad1
    RET                                 ; 00505ad2
    FLD float ptr [EBX]                 ; 00505ad3
        ;   Label: LAB_00505ad3
    FSUB float ptr [ESP + 0x34]         ; 00505ad5
    JMP 0x00505a24                      ; 00505ad9
        ;   XREF to: 00505a24 (UNCONDITIONAL_JUMP)  ; LAB_00505a24
    MOV EAX,dword ptr [ESP + 0x24]      ; 00505ade
        ;   Label: LAB_00505ade
    MOV dword ptr [EBX],EAX             ; 00505ae2
    MOV EAX,EDX                         ; 00505ae4
    JMP 0x00505a28                      ; 00505ae6
        ;   XREF to: 00505a28 (UNCONDITIONAL_JUMP)  ; LAB_00505a28
    FLD float ptr [ESP + 0x30]          ; 00505aeb
        ;   Label: LAB_00505aeb
    FCOMP float ptr [ESP + 0x34]        ; 00505aef
    FNSTSW AX                           ; 00505af3
    SAHF                                ; 00505af5
    JBE 0x00505b03                      ; 00505af6
        ;   XREF to: 00505b03 (CONDITIONAL_JUMP)  ; LAB_00505b03
    FLD float ptr [ECX]                 ; 00505af8
    FADD float ptr [ESP + 0x34]         ; 00505afa
    JMP 0x00505a52                      ; 00505afe
        ;   XREF to: 00505a52 (UNCONDITIONAL_JUMP)  ; LAB_00505a52
    MOV EAX,dword ptr [ESP + 0x18]      ; 00505b03
        ;   Label: LAB_00505b03
    MOV dword ptr [ECX],EAX             ; 00505b07
    MOV EAX,0x1                         ; 00505b09
    JMP 0x00505a56                      ; 00505b0e
        ;   XREF to: 00505a56 (UNCONDITIONAL_JUMP)  ; LAB_00505a56
    FLD float ptr [ESP + 0x28]          ; 00505b13
        ;   Label: LAB_00505b13
    FCOMP float ptr [ESP + 0x34]        ; 00505b17
    FNSTSW AX                           ; 00505b1b
    SAHF                                ; 00505b1d
    JBE 0x00505b2b                      ; 00505b1e
        ;   XREF to: 00505b2b (CONDITIONAL_JUMP)  ; LAB_00505b2b
    FLD float ptr [ECX]                 ; 00505b20
    FADD float ptr [ESP + 0x34]         ; 00505b22
    JMP 0x00505a80                      ; 00505b26
        ;   XREF to: 00505a80 (UNCONDITIONAL_JUMP)  ; LAB_00505a80
    MOV EAX,dword ptr [ESP + 0x20]      ; 00505b2b
        ;   Label: LAB_00505b2b
    MOV dword ptr [ECX],EAX             ; 00505b2f
    MOV EAX,0x1                         ; 00505b31
    JMP 0x00505a84                      ; 00505b36
        ;   XREF to: 00505a84 (UNCONDITIONAL_JUMP)  ; LAB_00505a84
    FILD dword ptr [EDX + 0x50]         ; 00505b3b
        ;   Label: LAB_00505b3b
    FCOMP float ptr [EBX + 0x10]        ; 00505b3e
    FNSTSW AX                           ; 00505b41
    SAHF                                ; 00505b43
    JNZ 0x00505acb                      ; 00505b44
        ;   XREF to: 00505acb (CONDITIONAL_JUMP)  ; LAB_00505acb
    FILD dword ptr [EDX + 0x54]         ; 00505b46
    FCOMP float ptr [EBX + 0x14]        ; 00505b49
    FNSTSW AX                           ; 00505b4c
    SAHF                                ; 00505b4e
    JNZ 0x00505acb                      ; 00505b4f
        ;   XREF to: 00505acb (CONDITIONAL_JUMP)  ; LAB_00505acb
    MOV EAX,dword ptr [ESP + 0x50]      ; 00505b55
    PUSH EAX                            ; 00505b59
    PUSH EBP                            ; 00505b5a
    CALL core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_00506210 ; 00505b5b
        ;   XREF to: 00506210 (UNCONDITIONAL_CALL)  ; int core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_00506210(CMansionPuzzleCircle * this_ptr, int panel_index)
    ADD ESP,0x8                         ; 00505b60
    PUSH EAX                            ; 00505b63
    PUSH EBP                            ; 00505b64
    CALL core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_00506390 ; 00505b65
        ;   XREF to: 00506390 (UNCONDITIONAL_CALL)  ; int core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_00506390(CMansionPuzzleCircle * this_ptr, int panel_index)
    ADD ESP,0x8                         ; 00505b6a
    TEST EAX,EAX                        ; 00505b6d
    JZ 0x00505ba7                       ; 00505b6f
        ;   XREF to: 00505ba7 (CONDITIONAL_JUMP)  ; LAB_00505ba7
    MOV ECX,dword ptr [ESP + 0x50]      ; 00505b71
    PUSH ECX                            ; 00505b75
    PUSH EBP                            ; 00505b76
    CALL core_manpuz.cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_00506200 ; 00505b77
        ;   XREF to: 00506200 (UNCONDITIONAL_CALL)  ; int core_manpuz.cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_00506200(CMansionPuzzleCircle * this_ptr, int panel_index)
    ADD ESP,0x8                         ; 00505b7c
    PUSH EAX                            ; 00505b7f
    PUSH EBP                            ; 00505b80
    CALL core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_00506390 ; 00505b81
        ;   XREF to: 00506390 (UNCONDITIONAL_CALL)  ; int core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_00506390(CMansionPuzzleCircle * this_ptr, int panel_index)
    ADD ESP,0x8                         ; 00505b86
    TEST EAX,EAX                        ; 00505b89
    JNZ 0x00505acb                      ; 00505b8b
        ;   XREF to: 00505acb (CONDITIONAL_JUMP)  ; LAB_00505acb
    MOV EBX,dword ptr [ESP + 0x50]      ; 00505b91
    PUSH EBX                            ; 00505b95
    PUSH EBP                            ; 00505b96
    CALL core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_00506060 ; 00505b97
        ;   XREF to: 00506060 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_00506060(CMansionPuzzleCircle * this_ptr, int panel_index)
    ADD ESP,0x8                         ; 00505b9c
    ADD ESP,0x38                        ; 00505b9f
    POP EBP                             ; 00505ba2
    POP EDI                             ; 00505ba3
    POP ESI                             ; 00505ba4
    POP EBX                             ; 00505ba5
    RET                                 ; 00505ba6
    MOV EDX,dword ptr [ESP + 0x50]      ; 00505ba7
        ;   Label: LAB_00505ba7
    PUSH EDX                            ; 00505bab
    PUSH EBP                            ; 00505bac
    CALL core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_00505ec0 ; 00505bad
        ;   XREF to: 00505ec0 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_00505ec0(CMansionPuzzleCircle * this_ptr, int panel_index)
    ADD ESP,0x8                         ; 00505bb2
    ADD ESP,0x38                        ; 00505bb5
    POP EBP                             ; 00505bb8
    POP EDI                             ; 00505bb9
    POP ESI                             ; 00505bba
    POP EBX                             ; 00505bbb
    RET                                 ; 00505bbc

