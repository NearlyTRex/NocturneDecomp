; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateGem_FUN_004e6c40(CMansionPuzzleCircle *this_ptr,int gem_index,float delta_time)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   gem_index
; float            Stack[0xc]:4   delta_time
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_process_FUN_004e57f0 at 004e5859
;
; Referenced Globals:
;   undefined4 DAT_005dc5e9
;   undefined4 DAT_005f98c4
;   undefined4 DAT_005f98c8
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_manpuz.cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004e7560
;   core_manpuz.cpp_CMansionPuzzleCircle_getPanelColor_FUN_004e6a50
;   core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004e7570
;   core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_004e76f0
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004e7220
;   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_004e73c0
;   core_manpuz.cpp_updateGemHumChannel_FUN_004e6b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6c40
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_updateGem_FUN_004e6c40
    PUSH ESI                            ; 004e6c41
    PUSH EDI                            ; 004e6c42
    PUSH EBP                            ; 004e6c43
    SUB ESP,0x38                        ; 004e6c44
    MOV EBP,dword ptr [ESP + 0x4c]      ; 004e6c47
    FLD float ptr [ESP + 0x54]          ; 004e6c4b
    FMUL float ptr [0x005dc5e9]         ; 004e6c4f | DAT_005dc5e9
    FST float ptr [ESP + 0x1c]          ; 004e6c55
    FDIV float ptr [0x005f98c4]         ; 004e6c59 | DAT_005f98c4
    MOV EDX,dword ptr [ESP + 0x50]      ; 004e6c5f
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e6c63
    SUB EAX,EDX                         ; 004e6c6a
    SHL EAX,0x3                         ; 004e6c6c
    SUB EAX,EDX                         ; 004e6c6f
    LEA EBX,[EBP + 0xbfc]               ; 004e6c71
    SHL EAX,0x3                         ; 004e6c77
    ADD EBX,EAX                         ; 004e6c7a
    LEA EAX,[EBX + 0x24]                ; 004e6c7c
    PUSH EAX                            ; 004e6c7f
    LEA ESI,[ESP + 0x4]                 ; 004e6c80
    PUSH EBP                            ; 004e6c84
    FSTP float ptr [ESP + 0x3c]         ; 004e6c85
    CALL core_actor.cpp_FUN_00408d70    ; 004e6c89
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004e6c8e
    LEA EAX,[ESP + 0xc]                 ; 004e6c91
    PUSH EAX                            ; 004e6c95
    LEA EDI,[ESP + 0x10]                ; 004e6c96
    PUSH 0x5dc58d                       ; 004e6c9a
    LEA EAX,[EBX + 0xac]                ; 004e6c9f
    LEA ESI,[ESP + 0x8]                 ; 004e6ca5
    PUSH EAX                            ; 004e6ca9
    MOVSD ES:EDI,ESI                    ; 004e6caa
    MOVSD ES:EDI,ESI                    ; 004e6cab
    MOVSD ES:EDI,ESI                    ; 004e6cac
    PUSH dword ptr [ESP + 0x40]         ; 004e6cad
    LEA EAX,[EBX + 0xc]                 ; 004e6cb1
    PUSH dword ptr [EBX + 0x18]         ; 004e6cb4
    PUSH EAX                            ; 004e6cb7
    CALL core_manpuz.cpp_updateGemHumChannel_FUN_004e6b20 ; 004e6cb8
        ;   XREF to: 004e6b20 (UNCONDITIONAL_CALL)  ; int core_manpuz.cpp_updateGemHumChannel_FUN_004e6b20(float * hum_value, float target, float max_step, uint * sfx_handle, ...)
    ADD ESP,0x18                        ; 004e6cbd
    MOV ESI,EAX                         ; 004e6cc0
    LEA EAX,[ESP + 0xc]                 ; 004e6cc2
    PUSH EAX                            ; 004e6cc6
    PUSH 0x5dc5aa                       ; 004e6cc7
    LEA EAX,[EBX + 0xb0]                ; 004e6ccc
    PUSH EAX                            ; 004e6cd2
    PUSH dword ptr [ESP + 0x40]         ; 004e6cd3
    LEA EAX,[EBX + 0x10]                ; 004e6cd7
    PUSH dword ptr [EBX + 0x1c]         ; 004e6cda
    PUSH EAX                            ; 004e6cdd
    AND ESI,0x1                         ; 004e6cde
    CALL core_manpuz.cpp_updateGemHumChannel_FUN_004e6b20 ; 004e6ce1
        ;   XREF to: 004e6b20 (UNCONDITIONAL_CALL)  ; int core_manpuz.cpp_updateGemHumChannel_FUN_004e6b20(float * hum_value, float target, float max_step, uint * sfx_handle, ...)
    ADD ESP,0x18                        ; 004e6ce6
    AND ESI,EAX                         ; 004e6ce9
    LEA EAX,[ESP + 0xc]                 ; 004e6ceb
    PUSH EAX                            ; 004e6cef
    PUSH 0x5dc5c9                       ; 004e6cf0
    LEA EAX,[EBX + 0xb4]                ; 004e6cf5
    PUSH EAX                            ; 004e6cfb
    PUSH dword ptr [ESP + 0x40]         ; 004e6cfc
    LEA EAX,[EBX + 0x14]                ; 004e6d00
    PUSH dword ptr [EBX + 0x20]         ; 004e6d03
    PUSH EAX                            ; 004e6d06
    CALL core_manpuz.cpp_updateGemHumChannel_FUN_004e6b20 ; 004e6d07
        ;   XREF to: 004e6b20 (UNCONDITIONAL_CALL)  ; int core_manpuz.cpp_updateGemHumChannel_FUN_004e6b20(float * hum_value, float target, float max_step, uint * sfx_handle, ...)
    ADD ESP,0x18                        ; 004e6d0c
    AND ESI,EAX                         ; 004e6d0f
    LEA EAX,[ESP + 0x20]                ; 004e6d11
    MOV dword ptr [EBX + 0x20],0x0      ; 004e6d15
    PUSH EAX                            ; 004e6d1c
    LEA EAX,[ESP + 0x1c]                ; 004e6d1d
    FLD float ptr [EBX + 0x20]          ; 004e6d21
    PUSH EAX                            ; 004e6d24
    LEA EAX,[ESP + 0x2c]                ; 004e6d25
    MOV EDX,dword ptr [ESP + 0x58]      ; 004e6d29
    PUSH EAX                            ; 004e6d2d
    FSTP float ptr [EBX + 0x1c]         ; 004e6d2e
    PUSH EDX                            ; 004e6d31
    FLD float ptr [EBX + 0x1c]          ; 004e6d32
    PUSH EBP                            ; 004e6d35
    FSTP float ptr [EBX + 0x18]         ; 004e6d36
    CALL core_manpuz.cpp_CMansionPuzzleCircle_getPanelColor_FUN_004e6a50 ; 004e6d39
        ;   XREF to: 004e6a50 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_CMansionPuzzleCircle_getPanelColor_FUN_004e6a50(CMansionPuzzleCircle * this_ptr, int panel_index, float * out_r, float * out_g, ...)
    ADD ESP,0x14                        ; 004e6d3e
    FLD float ptr [ESP + 0x1c]          ; 004e6d41
    FDIV float ptr [0x005f98c8]         ; 004e6d45 | DAT_005f98c8
    FLD float ptr [ESP + 0x24]          ; 004e6d4b
    FSUB float ptr [EBX]                ; 004e6d4f
    MOV EDX,0x1                         ; 004e6d51
    FSTP float ptr [ESP + 0x2c]         ; 004e6d56
    FST float ptr [ESP + 0x34]          ; 004e6d5a
    FCHS                                ; 004e6d5e
    FCOMP float ptr [ESP + 0x2c]        ; 004e6d60
    FNSTSW AX                           ; 004e6d64
    SAHF                                ; 004e6d66
    JA 0x004e6e33                       ; 004e6d67
        ;   XREF to: 004e6e33 (CONDITIONAL_JUMP)  ; LAB_004e6e33
    FLD float ptr [ESP + 0x2c]          ; 004e6d6d
    FCOMP float ptr [ESP + 0x34]        ; 004e6d71
    FNSTSW AX                           ; 004e6d75
    SAHF                                ; 004e6d77
    JBE 0x004e6e3e                      ; 004e6d78
        ;   XREF to: 004e6e3e (CONDITIONAL_JUMP)  ; LAB_004e6e3e
    FLD float ptr [EBX]                 ; 004e6d7e
    FADD float ptr [ESP + 0x34]         ; 004e6d80
    FSTP float ptr [EBX]                ; 004e6d84
        ;   Label: LAB_004e6d84
    XOR EAX,EAX                         ; 004e6d86
    FLD float ptr [ESP + 0x18]          ; 004e6d88
        ;   Label: LAB_004e6d88
    FLD float ptr [ESP + 0x34]          ; 004e6d8c
    LEA ECX,[EBX + 0x4]                 ; 004e6d90
    FCHS                                ; 004e6d93
    FXCH                                ; 004e6d95
    FSUB float ptr [ECX]                ; 004e6d97
    AND EDX,EAX                         ; 004e6d99
    FSTP float ptr [ESP + 0x30]         ; 004e6d9b
    FCOMP float ptr [ESP + 0x30]        ; 004e6d9f
    FNSTSW AX                           ; 004e6da3
    SAHF                                ; 004e6da5
    JBE 0x004e6e4b                      ; 004e6da6
        ;   XREF to: 004e6e4b (CONDITIONAL_JUMP)  ; LAB_004e6e4b
    FLD float ptr [ECX]                 ; 004e6dac
    FSUB float ptr [ESP + 0x34]         ; 004e6dae
    FSTP float ptr [ECX]                ; 004e6db2
        ;   Label: LAB_004e6db2
    XOR EAX,EAX                         ; 004e6db4
    FLD float ptr [ESP + 0x20]          ; 004e6db6
        ;   Label: LAB_004e6db6
    FLD float ptr [ESP + 0x34]          ; 004e6dba
    LEA ECX,[EBX + 0x8]                 ; 004e6dbe
    FCHS                                ; 004e6dc1
    FXCH                                ; 004e6dc3
    FSUB float ptr [ECX]                ; 004e6dc5
    AND EDX,EAX                         ; 004e6dc7
    FSTP float ptr [ESP + 0x28]         ; 004e6dc9
    FCOMP float ptr [ESP + 0x28]        ; 004e6dcd
    FNSTSW AX                           ; 004e6dd1
    SAHF                                ; 004e6dd3
    JBE 0x004e6e73                      ; 004e6dd4
        ;   XREF to: 004e6e73 (CONDITIONAL_JUMP)  ; LAB_004e6e73
    FLD float ptr [ECX]                 ; 004e6dda
    FSUB float ptr [ESP + 0x34]         ; 004e6ddc
    FSTP float ptr [ECX]                ; 004e6de0
        ;   Label: LAB_004e6de0
    XOR EAX,EAX                         ; 004e6de2
    AND EDX,EAX                         ; 004e6de4
        ;   Label: LAB_004e6de4
    JZ 0x004e6e2b                       ; 004e6de6
        ;   XREF to: 004e6e2b (CONDITIONAL_JUMP)  ; LAB_004e6e2b
    TEST ESI,ESI                        ; 004e6de8
    JZ 0x004e6e2b                       ; 004e6dea
        ;   XREF to: 004e6e2b (CONDITIONAL_JUMP)  ; LAB_004e6e2b
    MOV EDX,dword ptr [ESP + 0x50]      ; 004e6dec
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e6df0
    SUB EAX,EDX                         ; 004e6df7
    SHL EAX,0x3                         ; 004e6df9
    ADD EAX,EDX                         ; 004e6dfc
    SHL EAX,0x2                         ; 004e6dfe
    LEA EDX,[EBP + 0x74c]               ; 004e6e01
    ADD EDX,EAX                         ; 004e6e07
    CMP dword ptr [EDX],0x0             ; 004e6e09
    JZ 0x004e6e2b                       ; 004e6e0c
        ;   XREF to: 004e6e2b (CONDITIONAL_JUMP)  ; LAB_004e6e2b
    TEST dword ptr [EDX + 0x8],0x7fffffff ; 004e6e0e
    JNZ 0x004e6e2b                      ; 004e6e15
        ;   XREF to: 004e6e2b (CONDITIONAL_JUMP)  ; LAB_004e6e2b
    TEST dword ptr [EDX + 0x4],0x7fffffff ; 004e6e17
    JNZ 0x004e6e2b                      ; 004e6e1e
        ;   XREF to: 004e6e2b (CONDITIONAL_JUMP)  ; LAB_004e6e2b
    FILD dword ptr [EDX + 0x4c]         ; 004e6e20
    FCOMP float ptr [EBX + 0xc]         ; 004e6e23
    FNSTSW AX                           ; 004e6e26
    SAHF                                ; 004e6e28
    JZ 0x004e6e9b                       ; 004e6e29
        ;   XREF to: 004e6e9b (CONDITIONAL_JUMP)  ; LAB_004e6e9b
    ADD ESP,0x38                        ; 004e6e2b
        ;   Label: LAB_004e6e2b
    POP EBP                             ; 004e6e2e
    POP EDI                             ; 004e6e2f
    POP ESI                             ; 004e6e30
    POP EBX                             ; 004e6e31
    RET                                 ; 004e6e32
    FLD float ptr [EBX]                 ; 004e6e33
        ;   Label: LAB_004e6e33
    FSUB float ptr [ESP + 0x34]         ; 004e6e35
    JMP 0x004e6d84                      ; 004e6e39
        ;   XREF to: 004e6d84 (UNCONDITIONAL_JUMP)  ; LAB_004e6d84
    MOV EAX,dword ptr [ESP + 0x24]      ; 004e6e3e
        ;   Label: LAB_004e6e3e
    MOV dword ptr [EBX],EAX             ; 004e6e42
    MOV EAX,EDX                         ; 004e6e44
    JMP 0x004e6d88                      ; 004e6e46
        ;   XREF to: 004e6d88 (UNCONDITIONAL_JUMP)  ; LAB_004e6d88
    FLD float ptr [ESP + 0x30]          ; 004e6e4b
        ;   Label: LAB_004e6e4b
    FCOMP float ptr [ESP + 0x34]        ; 004e6e4f
    FNSTSW AX                           ; 004e6e53
    SAHF                                ; 004e6e55
    JBE 0x004e6e63                      ; 004e6e56
        ;   XREF to: 004e6e63 (CONDITIONAL_JUMP)  ; LAB_004e6e63
    FLD float ptr [ECX]                 ; 004e6e58
    FADD float ptr [ESP + 0x34]         ; 004e6e5a
    JMP 0x004e6db2                      ; 004e6e5e
        ;   XREF to: 004e6db2 (UNCONDITIONAL_JUMP)  ; LAB_004e6db2
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e6e63
        ;   Label: LAB_004e6e63
    MOV dword ptr [ECX],EAX             ; 004e6e67
    MOV EAX,0x1                         ; 004e6e69
    JMP 0x004e6db6                      ; 004e6e6e
        ;   XREF to: 004e6db6 (UNCONDITIONAL_JUMP)  ; LAB_004e6db6
    FLD float ptr [ESP + 0x28]          ; 004e6e73
        ;   Label: LAB_004e6e73
    FCOMP float ptr [ESP + 0x34]        ; 004e6e77
    FNSTSW AX                           ; 004e6e7b
    SAHF                                ; 004e6e7d
    JBE 0x004e6e8b                      ; 004e6e7e
        ;   XREF to: 004e6e8b (CONDITIONAL_JUMP)  ; LAB_004e6e8b
    FLD float ptr [ECX]                 ; 004e6e80
    FADD float ptr [ESP + 0x34]         ; 004e6e82
    JMP 0x004e6de0                      ; 004e6e86
        ;   XREF to: 004e6de0 (UNCONDITIONAL_JUMP)  ; LAB_004e6de0
    MOV EAX,dword ptr [ESP + 0x20]      ; 004e6e8b
        ;   Label: LAB_004e6e8b
    MOV dword ptr [ECX],EAX             ; 004e6e8f
    MOV EAX,0x1                         ; 004e6e91
    JMP 0x004e6de4                      ; 004e6e96
        ;   XREF to: 004e6de4 (UNCONDITIONAL_JUMP)  ; LAB_004e6de4
    FILD dword ptr [EDX + 0x50]         ; 004e6e9b
        ;   Label: LAB_004e6e9b
    FCOMP float ptr [EBX + 0x10]        ; 004e6e9e
    FNSTSW AX                           ; 004e6ea1
    SAHF                                ; 004e6ea3
    JNZ 0x004e6e2b                      ; 004e6ea4
        ;   XREF to: 004e6e2b (CONDITIONAL_JUMP)  ; LAB_004e6e2b
    FILD dword ptr [EDX + 0x54]         ; 004e6ea6
    FCOMP float ptr [EBX + 0x14]        ; 004e6ea9
    FNSTSW AX                           ; 004e6eac
    SAHF                                ; 004e6eae
    JNZ 0x004e6e2b                      ; 004e6eaf
        ;   XREF to: 004e6e2b (CONDITIONAL_JUMP)  ; LAB_004e6e2b
    MOV EAX,dword ptr [ESP + 0x50]      ; 004e6eb5
    PUSH EAX                            ; 004e6eb9
    PUSH EBP                            ; 004e6eba
    CALL core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004e7570 ; 004e6ebb
        ;   XREF to: 004e7570 (UNCONDITIONAL_CALL)  ; int core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004e7570(CMansionPuzzleCircle * this_ptr, int panel_index)
    ADD ESP,0x8                         ; 004e6ec0
    PUSH EAX                            ; 004e6ec3
    PUSH EBP                            ; 004e6ec4
    CALL core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_004e76f0 ; 004e6ec5
        ;   XREF to: 004e76f0 (UNCONDITIONAL_CALL)  ; int core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_004e76f0(CMansionPuzzleCircle * this_ptr, int panel_index)
    ADD ESP,0x8                         ; 004e6eca
    TEST EAX,EAX                        ; 004e6ecd
    JZ 0x004e6f07                       ; 004e6ecf
        ;   XREF to: 004e6f07 (CONDITIONAL_JUMP)  ; LAB_004e6f07
    MOV ECX,dword ptr [ESP + 0x50]      ; 004e6ed1
    PUSH ECX                            ; 004e6ed5
    PUSH EBP                            ; 004e6ed6
    CALL core_manpuz.cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004e7560 ; 004e6ed7
        ;   XREF to: 004e7560 (UNCONDITIONAL_CALL)  ; int core_manpuz.cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004e7560(CMansionPuzzleCircle * this_ptr, int panel_index)
    ADD ESP,0x8                         ; 004e6edc
    PUSH EAX                            ; 004e6edf
    PUSH EBP                            ; 004e6ee0
    CALL core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_004e76f0 ; 004e6ee1
        ;   XREF to: 004e76f0 (UNCONDITIONAL_CALL)  ; int core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_004e76f0(CMansionPuzzleCircle * this_ptr, int panel_index)
    ADD ESP,0x8                         ; 004e6ee6
    TEST EAX,EAX                        ; 004e6ee9
    JNZ 0x004e6e2b                      ; 004e6eeb
        ;   XREF to: 004e6e2b (CONDITIONAL_JUMP)  ; LAB_004e6e2b
    MOV EBX,dword ptr [ESP + 0x50]      ; 004e6ef1
    PUSH EBX                            ; 004e6ef5
    PUSH EBP                            ; 004e6ef6
    CALL core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_004e73c0 ; 004e6ef7
        ;   XREF to: 004e73c0 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_004e73c0(CMansionPuzzleCircle * this_ptr, int panel_index)
    ADD ESP,0x8                         ; 004e6efc
    ADD ESP,0x38                        ; 004e6eff
    POP EBP                             ; 004e6f02
    POP EDI                             ; 004e6f03
    POP ESI                             ; 004e6f04
    POP EBX                             ; 004e6f05
    RET                                 ; 004e6f06
    MOV EDX,dword ptr [ESP + 0x50]      ; 004e6f07
        ;   Label: LAB_004e6f07
    PUSH EDX                            ; 004e6f0b
    PUSH EBP                            ; 004e6f0c
    CALL core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004e7220 ; 004e6f0d
        ;   XREF to: 004e7220 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004e7220(CMansionPuzzleCircle * this_ptr, int panel_index)
    ADD ESP,0x8                         ; 004e6f12
    ADD ESP,0x38                        ; 004e6f15
    POP EBP                             ; 004e6f18
    POP EDI                             ; 004e6f19
    POP ESI                             ; 004e6f1a
    POP EBX                             ; 004e6f1b
    RET                                 ; 004e6f1c

