; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_00505ec0(CMansionPuzzleCircle *this_ptr,int panel_index)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   panel_index
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_updateGem_FUN_005058e0 at 00505bad
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_00506210
;   core_manpuz.cpp_FUN_00504ee0
;   sound_sndmain.cpp_FUN_005727e0
;   sound_sndmain.cpp_FUN_00572ac0
;   sound_sndmain.cpp_FUN_00572b40
;   sound_sndmain.cpp_startSfx_FUN_00572d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505ec0
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_00505ec0
    PUSH ESI                            ; 00505ec1
    PUSH EDI                            ; 00505ec2
    PUSH EBP                            ; 00505ec3
    SUB ESP,0x4                         ; 00505ec4
    MOV EBP,dword ptr [ESP + 0x18]      ; 00505ec7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00505ecb
    PUSH EBX                            ; 00505ecf
    PUSH EBP                            ; 00505ed0
    CALL core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_00506210 ; 00505ed1
        ;   XREF to: 00506210 (UNCONDITIONAL_CALL)  ; int core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_00506210(CMansionPuzzleCircle * this_ptr, int panel_index)
    ADD ESP,0x8                         ; 00505ed6
    MOV EDX,EAX                         ; 00505ed9
    MOV dword ptr [ESP],EAX             ; 00505edb
    LEA EAX,[EBX*0x4 + 0x0]             ; 00505ede
    SUB EAX,EBX                         ; 00505ee5
    SHL EAX,0x3                         ; 00505ee7
    ADD EAX,EBX                         ; 00505eea
    LEA ESI,[EBP + 0x5f0]               ; 00505eec
    SHL EAX,0x2                         ; 00505ef2
    LEA EBX,[ESI + EAX*0x1]             ; 00505ef5
    LEA EAX,[EDX*0x4 + 0x0]             ; 00505ef8
    SUB EAX,EDX                         ; 00505eff
    SHL EAX,0x3                         ; 00505f01
    ADD EAX,EDX                         ; 00505f04
    SHL EAX,0x2                         ; 00505f06
    MOV EDX,dword ptr [EBX]             ; 00505f09
    ADD ESI,EAX                         ; 00505f0b
    TEST EDX,EDX                        ; 00505f0d
    JZ 0x00505f1a                       ; 00505f0f
        ;   XREF to: 00505f1a (CONDITIONAL_JUMP)  ; LAB_00505f1a
    CMP dword ptr [ESI],0x0             ; 00505f11
    JZ 0x00506039                       ; 00505f14
        ;   XREF to: 00506039 (CONDITIONAL_JUMP)  ; LAB_00506039
    MOV EDX,0x5e7545                    ; 00505f1a
        ;   Label: LAB_00505f1a
    MOV ECX,0x554                       ; 00505f1f
    PUSH 0x5e7558                       ; 00505f24
    MOV dword ptr [0x01d1d400],EDX      ; 00505f29 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00505f2f | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00505f35
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00505f3a
    MOV EAX,ESI                         ; 00505f3d
        ;   Label: LAB_00505f3d
    MOV ECX,dword ptr [EBX]             ; 00505f3f
    MOV EDX,EBX                         ; 00505f41
    MOV dword ptr [ESI],ECX             ; 00505f43
    LEA EDI,[EBX + 0xc]                 ; 00505f45
    FLD float ptr [EBX + 0x4]           ; 00505f48
    LEA ECX,[ESI + 0xc]                 ; 00505f4b
    FSTP float ptr [ESI + 0x4]          ; 00505f4e
    FLD float ptr [EBX + 0x8]           ; 00505f51
    FSTP float ptr [ESI + 0x8]          ; 00505f54
    CMP ECX,EDI                         ; 00505f57
    JZ 0x00505f6b                       ; 00505f59
        ;   XREF to: 00505f6b (CONDITIONAL_JUMP)  ; LAB_00505f6b
    FLD float ptr [EDI]                 ; 00505f5b
    FSTP float ptr [ECX]                ; 00505f5d
    FLD float ptr [EDI + 0x4]           ; 00505f5f
    FSTP float ptr [ECX + 0x4]          ; 00505f62
    FLD float ptr [EDI + 0x8]           ; 00505f65
    FSTP float ptr [ECX + 0x8]          ; 00505f68
    LEA EDI,[EDX + 0x18]                ; 00505f6b
        ;   Label: LAB_00505f6b
    LEA ECX,[EAX + 0x18]                ; 00505f6e
    CMP ECX,EDI                         ; 00505f71
    JZ 0x00505f85                       ; 00505f73
        ;   XREF to: 00505f85 (CONDITIONAL_JUMP)  ; LAB_00505f85
    FLD float ptr [EDI]                 ; 00505f75
    FSTP float ptr [ECX]                ; 00505f77
    FLD float ptr [EDI + 0x4]           ; 00505f79
    FSTP float ptr [ECX + 0x4]          ; 00505f7c
    FLD float ptr [EDI + 0x8]           ; 00505f7f
    FSTP float ptr [ECX + 0x8]          ; 00505f82
    MOV ECX,dword ptr [EDX + 0x24]      ; 00505f85
        ;   Label: LAB_00505f85
    MOV dword ptr [EAX + 0x24],ECX      ; 00505f88
    MOV ECX,dword ptr [EDX + 0x28]      ; 00505f8b
    MOV dword ptr [EAX + 0x28],ECX      ; 00505f8e
    MOV ECX,dword ptr [EDX + 0x2c]      ; 00505f91
    MOV dword ptr [EAX + 0x2c],ECX      ; 00505f94
    MOV ECX,dword ptr [EDX + 0x30]      ; 00505f97
    MOV dword ptr [EAX + 0x30],ECX      ; 00505f9a
    MOV ECX,dword ptr [EDX + 0x34]      ; 00505f9d
    MOV dword ptr [EAX + 0x34],ECX      ; 00505fa0
    MOV ECX,dword ptr [EDX + 0x38]      ; 00505fa3
    MOV dword ptr [EAX + 0x38],ECX      ; 00505fa6
    MOV ECX,dword ptr [EDX + 0x3c]      ; 00505fa9
    MOV dword ptr [EAX + 0x3c],ECX      ; 00505fac
    MOV ECX,dword ptr [EDX + 0x40]      ; 00505faf
    MOV dword ptr [EAX + 0x40],ECX      ; 00505fb2
    MOV ECX,dword ptr [EDX + 0x44]      ; 00505fb5
    MOV dword ptr [EAX + 0x44],ECX      ; 00505fb8
    MOV ECX,dword ptr [EDX + 0x48]      ; 00505fbb
    MOV dword ptr [EAX + 0x48],ECX      ; 00505fbe
    MOV ECX,dword ptr [EDX + 0x4c]      ; 00505fc1
    MOV dword ptr [EAX + 0x4c],ECX      ; 00505fc4
    MOV ECX,dword ptr [EDX + 0x50]      ; 00505fc7
    MOV dword ptr [EAX + 0x50],ECX      ; 00505fca
    ADD EAX,0x58                        ; 00505fcd
    MOV ECX,dword ptr [EDX + 0x54]      ; 00505fd0
    ADD EDX,0x58                        ; 00505fd3
    MOV dword ptr [EAX + -0x4],ECX      ; 00505fd6
    CMP EAX,EDX                         ; 00505fd9
    JZ 0x00505fed                       ; 00505fdb
        ;   XREF to: 00505fed (CONDITIONAL_JUMP)  ; LAB_00505fed
    MOV ECX,dword ptr [EDX]             ; 00505fdd
    MOV dword ptr [EAX],ECX             ; 00505fdf
    MOV ECX,dword ptr [EDX + 0x4]       ; 00505fe1
    MOV dword ptr [EAX + 0x4],ECX       ; 00505fe4
    MOV ECX,dword ptr [EDX + 0x8]       ; 00505fe7
    MOV dword ptr [EAX + 0x8],ECX       ; 00505fea
    MOV dword ptr [EBX],0x0             ; 00505fed
        ;   Label: LAB_00505fed
    MOV EBX,dword ptr [ESP]             ; 00505ff3
    PUSH EBX                            ; 00505ff6
    MOV dword ptr [ESI + 0x4],0x3f800000 ; 00505ff7
    PUSH EBP                            ; 00505ffe
    MOV dword ptr [ESI + 0x8],0xbf800000 ; 00505fff
    CALL core_manpuz.cpp_FUN_00504ee0   ; 00506006
        ;   XREF to: 00504ee0 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_FUN_00504ee0()
    ADD ESP,0x8                         ; 0050600b
    ADD ESI,0x58                        ; 0050600e
    CALL sound_sndmain.cpp_FUN_00572ac0 ; 00506011
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572ac0()
    PUSH ESI                            ; 00506016
    CALL sound_sndmain.cpp_FUN_005727e0 ; 00506017
        ;   XREF to: 005727e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005727e0(CVector3f * position_source_ptr)
    ADD ESP,0x4                         ; 0050601c
    PUSH 0x5e7588                       ; 0050601f
    CALL sound_sndmain.cpp_startSfx_FUN_00572d20 ; 00506024
        ;   XREF to: 00572d20 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_00572d20(char * filename)
    ADD ESP,0x4                         ; 00506029
    CALL sound_sndmain.cpp_FUN_00572b40 ; 0050602c
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00572b40()
    ADD ESP,0x4                         ; 00506031
    POP EBP                             ; 00506034
    POP EDI                             ; 00506035
    POP ESI                             ; 00506036
    POP EBX                             ; 00506037
    RET                                 ; 00506038
    TEST dword ptr [EBX + 0x4],0x7fffffff ; 00506039
        ;   Label: LAB_00506039
    JNZ 0x00505f1a                      ; 00506040
        ;   XREF to: 00505f1a (CONDITIONAL_JUMP)  ; LAB_00505f1a
    TEST dword ptr [EBX + 0x8],0x7fffffff ; 00506046
    JNZ 0x00505f1a                      ; 0050604d
        ;   XREF to: 00505f1a (CONDITIONAL_JUMP)  ; LAB_00505f1a
    JMP 0x00505f3d                      ; 00506053
        ;   XREF to: 00505f3d (UNCONDITIONAL_JUMP)  ; LAB_00505f3d

