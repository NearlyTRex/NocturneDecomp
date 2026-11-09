; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateLaser_FUN_00505bc0(CMansionPuzzleCircle *this_ptr,int panel_index,float delta_time)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   panel_index
; float            Stack[0xc]:4   delta_time
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_process_FUN_00504400 at 00504453
;
; Referenced Globals:
;   undefined4 DAT_005e753d
;   undefined4 DAT_005e7541
;   undefined4 DAT_0061c010
;   CDemonSet* g_CDemonSetPtr = 01e82168
;
; Called Functions:
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b40
;   core_dirmat.cpp_FUN_0045f690
;   core_fire.cpp_FUN_004b6420
;   core_fire.cpp_SLaserInfo_ctor_FUN_004b63e0
;   core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_00506210
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505bc0
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_updateLaser_FUN_00505bc0
    PUSH ESI                            ; 00505bc1
    PUSH EDI                            ; 00505bc2
    PUSH EBP                            ; 00505bc3
    MOV EBP,ESP                         ; 00505bc4
    SUB ESP,0xe8                        ; 00505bc6
    AND ESP,0xfffffff8                  ; 00505bcc
    MOV EBX,dword ptr [EBP + 0x14]      ; 00505bcf
    MOV EDX,dword ptr [EBP + 0x18]      ; 00505bd2
    LEA EAX,[EDX*0x4 + 0x0]             ; 00505bd5
    SUB EAX,EDX                         ; 00505bdc
    SHL EAX,0x3                         ; 00505bde
    ADD EAX,EDX                         ; 00505be1
    LEA EDI,[EBX + 0x5f0]               ; 00505be3
    SHL EAX,0x2                         ; 00505be9
    LEA EDX,[EDI + EAX*0x1]             ; 00505bec
    MOV dword ptr [ESP + 0xe4],EDX      ; 00505bef
    MOV EDX,dword ptr [EDX]             ; 00505bf6
    XOR ESI,ESI                         ; 00505bf8
    TEST EDX,EDX                        ; 00505bfa
    JZ 0x00505e55                       ; 00505bfc
        ;   XREF to: 00505e55 (CONDITIONAL_JUMP)  ; LAB_00505e55
    TEST ESI,ESI                        ; 00505c02
        ;   Label: LAB_00505c02
    JZ 0x00505e92                       ; 00505c04
        ;   XREF to: 00505e92 (CONDITIONAL_JUMP)  ; LAB_00505e92
    MOV EAX,dword ptr [EBP + 0x18]      ; 00505c0a
    FLD float ptr [EBX + EAX*0x4 + 0x1490] ; 00505c0d
    FADD float ptr [EBP + 0x1c]         ; 00505c14
    FSTP float ptr [EBX + EAX*0x4 + 0x1490] ; 00505c17
        ;   Label: LAB_00505c17
    MOV ESI,dword ptr [EBP + 0x18]      ; 00505c1e
    SHL ESI,0x2                         ; 00505c21
    ADD ESI,EBX                         ; 00505c24
    FLDZ                                ; 00505c26
    FLD float ptr [ESI + 0x1490]        ; 00505c28
    FSTP double ptr [ESP]               ; 00505c2e
    FCOMP double ptr [ESP]              ; 00505c31
    FNSTSW AX                           ; 00505c34
    SAHF                                ; 00505c36
    JNC 0x00505ea4                      ; 00505c37
        ;   XREF to: 00505ea4 (CONDITIONAL_JUMP)  ; LAB_00505ea4
    FLD1                                ; 00505c3d
    FCOMP double ptr [ESP]              ; 00505c3f
    FNSTSW AX                           ; 00505c42
    SAHF                                ; 00505c44
    JNC 0x00505c51                      ; 00505c45
        ;   XREF to: 00505c51 (CONDITIONAL_JUMP)  ; LAB_00505c51
    MOV dword ptr [ESI + 0x1490],0x3f800000 ; 00505c47
    LEA EAX,[EBX + 0x5e4]               ; 00505c51
        ;   Label: LAB_00505c51
    PUSH EAX                            ; 00505c57
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00505c58
    ADD EAX,0x24                        ; 00505c5f
    LEA ESI,[ESP + 0x60]                ; 00505c62
    PUSH EAX                            ; 00505c66
    LEA EDI,[ESP + 0x94]                ; 00505c67
    MOV dword ptr [ESP + 0xe8],EAX      ; 00505c6e
    CALL core_dirmat.cpp_FUN_0045f690   ; 00505c75
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    ADD ESP,0x8                         ; 00505c7a
    LEA ESI,[ESP + 0x5c]                ; 00505c7d
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00505c81
    MOVSD ES:EDI,ESI                    ; 00505c88
    MOVSD ES:EDI,ESI                    ; 00505c89
    MOVSD ES:EDI,ESI                    ; 00505c8a
    FLD float ptr [EAX + 0x10]          ; 00505c8b
    FLD float ptr [EAX + 0x14]          ; 00505c8e
    FLD float ptr [EAX + 0xc]           ; 00505c91
    LEA EDI,[ESP + 0xa4]                ; 00505c94
    LEA ESI,[ESP + 0x68]                ; 00505c9b
    LEA EAX,[ESP + 0xa4]                ; 00505c9f
    FADD float ptr [ESP + 0x8c]         ; 00505ca6
    FXCH ST2                            ; 00505cad
    FADD float ptr [ESP + 0x90]         ; 00505caf
    FXCH                                ; 00505cb6
    FADD float ptr [ESP + 0x94]         ; 00505cb8
    FXCH ST2                            ; 00505cbf
    FSTP float ptr [ESP + 0x68]         ; 00505cc1
    FSTP float ptr [ESP + 0x6c]         ; 00505cc5
    FSTP float ptr [ESP + 0x70]         ; 00505cc9
    PUSH EAX                            ; 00505ccd
    MOVSD ES:EDI,ESI                    ; 00505cce
    MOVSD ES:EDI,ESI                    ; 00505ccf
    MOVSD ES:EDI,ESI                    ; 00505cd0
    PUSH EBX                            ; 00505cd1
    LEA ESI,[ESP + 0x88]                ; 00505cd2
    LEA EDI,[ESP + 0x7c]                ; 00505cd9
    CALL core_actor.cpp_FUN_00408b40    ; 00505cdd
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00505ce2
    XOR EDX,EDX                         ; 00505ce5
    LEA ESI,[ESP + 0x80]                ; 00505ce7
    MOV dword ptr [ESP + 0x98],EDX      ; 00505cee
    MOVSD ES:EDI,ESI                    ; 00505cf5
    MOVSD ES:EDI,ESI                    ; 00505cf6
    MOVSD ES:EDI,ESI                    ; 00505cf7
    FLD float ptr [EBX + 0x5d0]         ; 00505cf8
    FSUB float ptr [EBX + 0x5e8]        ; 00505cfe
    FSTP float ptr [ESP + 0x9c]         ; 00505d04
    FLD float ptr [EBX + 0x150c]        ; 00505d0b
    FMUL float ptr [0x005e753d]         ; 00505d11 | DAT_005e753d
    FLD float ptr [ESP + 0x9c]          ; 00505d17
    FXCH                                ; 00505d1e
    FADD float ptr [EBX + 0x5ec]        ; 00505d20
    FXCH                                ; 00505d26
    FLD float ptr [0x005e7541]          ; 00505d28 | DAT_005e7541
    FXCH                                ; 00505d2e
    FMUL ST1                            ; 00505d30
    FXCH ST2                            ; 00505d32
    FADD float ptr [EBX + 0x5d4]        ; 00505d34
    LEA EAX,[ESP + 0x98]                ; 00505d3a
    FCHS                                ; 00505d41
    FMULP                               ; 00505d43
    PUSH EAX                            ; 00505d45
    MOV ESI,dword ptr [ESP + 0xe4]      ; 00505d46
    LEA EDI,[ESP + 0xb4]                ; 00505d4d
    PUSH ESI                            ; 00505d54
    LEA ESI,[ESP + 0xd0]                ; 00505d55
    FXCH                                ; 00505d5c
    FSTP float ptr [ESP + 0xa4]         ; 00505d5e
    FSTP float ptr [ESP + 0xa8]         ; 00505d65
    CALL core_dirmat.cpp_FUN_0045f690   ; 00505d6c
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    ADD ESP,0x8                         ; 00505d71
    LEA EAX,[ESP + 0xb0]                ; 00505d74
    LEA ESI,[ESP + 0xc8]                ; 00505d7b
    PUSH EAX                            ; 00505d82
    MOVSD ES:EDI,ESI                    ; 00505d83
    MOVSD ES:EDI,ESI                    ; 00505d84
    MOVSD ES:EDI,ESI                    ; 00505d85
    PUSH EBX                            ; 00505d86
    LEA ESI,[ESP + 0xdc]                ; 00505d87
    LEA EDI,[ESP + 0xc4]                ; 00505d8e
    CALL core_actor.cpp_FUN_00408ac0    ; 00505d95
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0xdc]                ; 00505d9a
    ADD ESP,0x8                         ; 00505da1
    MOVSD ES:EDI,ESI                    ; 00505da4
    MOVSD ES:EDI,ESI                    ; 00505da5
    MOVSD ES:EDI,ESI                    ; 00505da6
    MOV EDI,dword ptr [0x00622c18]      ; 00505da7 | g_CDemonSetPtr
    PUSH EDI                            ; 00505dad
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 00505dae
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00505db3
    LEA EAX,[ESP + 0x8]                 ; 00505db6
    PUSH EAX                            ; 00505dba
    CALL core_fire.cpp_SLaserInfo_ctor_FUN_004b63e0 ; 00505dbb
        ;   XREF to: 004b63e0 (UNCONDITIONAL_CALL)  ; SLaserInfo * core_fire.cpp_SLaserInfo_ctor_FUN_004b63e0(SLaserInfo * this_ptr)
    MOV EAX,0x2                         ; 00505dc0
    ADD ESP,0x4                         ; 00505dc5
    MOV dword ptr [ESP + 0x10],EAX      ; 00505dc8
    MOV EAX,dword ptr [EBP + 0x18]      ; 00505dcc
    SHL EAX,0x2                         ; 00505dcf
    MOV EDX,0x3da3d70a                  ; 00505dd2
    ADD EBX,EAX                         ; 00505dd7
    MOV dword ptr [ESP + 0xc],EDX       ; 00505dd9
    MOV EAX,dword ptr [EBX + 0x1400]    ; 00505ddd
    MOV dword ptr [ESP + 0x14],EAX      ; 00505de3
    MOV EAX,dword ptr [EBX + 0x1430]    ; 00505de7
    MOV dword ptr [ESP + 0x18],EAX      ; 00505ded
    MOV EAX,dword ptr [EBX + 0x1460]    ; 00505df1
    MOV dword ptr [ESP + 0x1c],EAX      ; 00505df7
    XOR ECX,ECX                         ; 00505dfb
    MOV EAX,dword ptr [EBX + 0x1490]    ; 00505dfd
    PUSH ECX                            ; 00505e03
    MOV dword ptr [ESP + 0xc],EAX       ; 00505e04
    MOV dword ptr [ESP + 0x24],ECX      ; 00505e08
    MOV dword ptr [ESP + 0x28],ECX      ; 00505e0c
    SUB ESP,0x54                        ; 00505e10
    LEA ESI,[ESP + 0x60]                ; 00505e13
    MOV EDI,ESP                         ; 00505e17
    LEA EAX,[ESP + 0x114]               ; 00505e19
    MOV ECX,0x15                        ; 00505e20
    PUSH EAX                            ; 00505e25
    LEA EAX,[ESP + 0xd0]                ; 00505e26
    MOVSD.REP ES:EDI,ESI                ; 00505e2d
    PUSH EAX                            ; 00505e2f
    MOV ESI,dword ptr [0x0061c010]      ; 00505e30 | DAT_0061c010
    PUSH ESI                            ; 00505e36
    CALL core_fire.cpp_FUN_004b6420     ; 00505e37
        ;   XREF to: 004b6420 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004b6420()
    ADD ESP,0x64                        ; 00505e3c
    MOV EDI,dword ptr [0x00622c18]      ; 00505e3f | g_CDemonSetPtr
    PUSH EDI                            ; 00505e45
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 00505e46
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00505e4b
    MOV ESP,EBP                         ; 00505e4e
    POP EBP                             ; 00505e50
    POP EDI                             ; 00505e51
    POP ESI                             ; 00505e52
    POP EBX                             ; 00505e53
    RET                                 ; 00505e54
    MOV ECX,dword ptr [EBP + 0x18]      ; 00505e55
        ;   Label: LAB_00505e55
    PUSH ECX                            ; 00505e58
    PUSH EBX                            ; 00505e59
    CALL core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_00506210 ; 00505e5a
        ;   XREF to: 00506210 (UNCONDITIONAL_CALL)  ; int core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_00506210(CMansionPuzzleCircle * this_ptr, int panel_index)
    MOV EDX,EAX                         ; 00505e5f
    SHL EAX,0x2                         ; 00505e61
    SUB EAX,EDX                         ; 00505e64
    SHL EAX,0x3                         ; 00505e66
    ADD EAX,EDX                         ; 00505e69
    SHL EAX,0x2                         ; 00505e6b
    ADD EAX,EDI                         ; 00505e6e
    MOV ESI,0x1                         ; 00505e70
    MOV EDI,dword ptr [EAX]             ; 00505e75
    ADD ESP,0x8                         ; 00505e77
    TEST EDI,EDI                        ; 00505e7a
    JZ 0x00505c02                       ; 00505e7c
        ;   XREF to: 00505c02 (CONDITIONAL_JUMP)  ; LAB_00505c02
    FLD float ptr [EAX + 0x8]           ; 00505e82
    FLDZ                                ; 00505e85
    FCOMPP                              ; 00505e87
    FNSTSW AX                           ; 00505e89
    SAHF                                ; 00505e8b
    JNC 0x00505c02                      ; 00505e8c
        ;   XREF to: 00505c02 (CONDITIONAL_JUMP)  ; LAB_00505c02
    MOV EAX,dword ptr [EBP + 0x18]      ; 00505e92
        ;   Label: LAB_00505e92
    FLD float ptr [EBX + EAX*0x4 + 0x1490] ; 00505e95
    FSUB float ptr [EBP + 0x1c]         ; 00505e9c
    JMP 0x00505c17                      ; 00505e9f
        ;   XREF to: 00505c17 (UNCONDITIONAL_JUMP)  ; LAB_00505c17
    MOV dword ptr [ESI + 0x1490],0x0    ; 00505ea4
        ;   Label: LAB_00505ea4
    MOV ESP,EBP                         ; 00505eae
    POP EBP                             ; 00505eb0
    POP EDI                             ; 00505eb1
    POP ESI                             ; 00505eb2
    POP EBX                             ; 00505eb3
    RET                                 ; 00505eb4

