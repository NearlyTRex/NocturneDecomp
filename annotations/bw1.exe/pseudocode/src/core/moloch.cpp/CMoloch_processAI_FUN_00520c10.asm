; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moloch_cpp_CMoloch_processAI_FUN_00520c10(CMoloch *this_ptr,float delta_time)
;
; Parameters:
; CMoloch *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_moloch.cpp_CMoloch_process_FUN_005204e0 at 00520872
;
; Referenced Globals:
;   undefined4 DAT_005ea296
;   undefined4 DAT_005ea29e
;   undefined4 DAT_005ea2a6
;   undefined4 DAT_005ea2ae
;   undefined4 DAT_005ea2b2
;   undefined4 DAT_01d06ab4
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_charactr.cpp_FUN_00434c60
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00520c10
        ;   Label: core_moloch.cpp_CMoloch_processAI_FUN_00520c10
    PUSH ESI                            ; 00520c11
    PUSH EDI                            ; 00520c12
    PUSH EBP                            ; 00520c13
    MOV EBP,ESP                         ; 00520c14
    SUB ESP,0xa8                        ; 00520c16
    AND ESP,0xfffffff8                  ; 00520c1c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00520c1f
    MOV EAX,[0x01d06ab4]                ; 00520c22 | DAT_01d06ab4
    PUSH 0x30                           ; 00520c27
    MOV EDX,0x3e800000                  ; 00520c29
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 00520c2e
    PUSH 0x0                            ; 00520c35
    MOV dword ptr [ESP + 0xa8],EAX      ; 00520c37
    LEA EAX,[EBX + 0xc1d8]              ; 00520c3e
    MOV ECX,0x3f490fdb                  ; 00520c44
    PUSH EAX                            ; 00520c49
    MOV dword ptr [ESP + 0xa0],EDX      ; 00520c4a
    MOV dword ptr [ESP + 0x9c],ECX      ; 00520c51
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00520c58
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    MOV ESI,dword ptr [EBX + 0x1ffa8]   ; 00520c5d
    ADD ESP,0xc                         ; 00520c63
    TEST ESI,ESI                        ; 00520c66
    JZ 0x00520fbb                       ; 00520c68
        ;   XREF to: 00520fbb (CONDITIONAL_JUMP)  ; LAB_00520fbb
    CMP ESI,0x1                         ; 00520c6e
    JNZ 0x00520fbb                      ; 00520c71
        ;   XREF to: 00520fbb (CONDITIONAL_JUMP)  ; LAB_00520fbb
    MOV EAX,[0x01d06ab4]                ; 00520c77 | DAT_01d06ab4
    MOV EDX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 00520c7c
    LEA EAX,[EBX + 0x20]                ; 00520c83
    LEA EDI,[ESP + 0x20]                ; 00520c86
    LEA ESI,[ESP + 0x5c]                ; 00520c8a
    FLD float ptr [EAX]                 ; 00520c8e
    FLD float ptr [EAX + 0x4]           ; 00520c90
    FLD float ptr [EAX + 0x8]           ; 00520c93
    FXCH ST2                            ; 00520c96
    FSUB float ptr [EDX + 0x20]         ; 00520c98
    FXCH                                ; 00520c9b
    FSUB float ptr [EDX + 0x24]         ; 00520c9d
    FXCH ST2                            ; 00520ca0
    FSUB float ptr [EDX + 0x28]         ; 00520ca2
    FXCH                                ; 00520ca5
    FSTP float ptr [ESP + 0x5c]         ; 00520ca7
    FXCH                                ; 00520cab
    FSTP float ptr [ESP + 0x60]         ; 00520cad
    FSTP float ptr [ESP + 0x64]         ; 00520cb1
    MOV EDX,dword ptr [ESP + 0xa0]      ; 00520cb5
    MOVSD ES:EDI,ESI                    ; 00520cbc
    MOVSD ES:EDI,ESI                    ; 00520cbd
    MOVSD ES:EDI,ESI                    ; 00520cbe
    FLD float ptr [EDX + 0x24]          ; 00520cbf
    FLD float ptr [EDX + 0x28]          ; 00520cc2
    FLD float ptr [EDX + 0x20]          ; 00520cc5
    LEA EDI,[ESP + 0x50]                ; 00520cc8
    LEA ESI,[ESP + 0x68]                ; 00520ccc
    LEA EDX,[ESP + 0x20]                ; 00520cd0
    FSUB float ptr [EAX]                ; 00520cd4
    FXCH ST2                            ; 00520cd6
    FSUB float ptr [EAX + 0x4]          ; 00520cd8
    FXCH                                ; 00520cdb
    FSUB float ptr [EAX + 0x8]          ; 00520cdd
    FXCH ST2                            ; 00520ce0
    FSTP float ptr [ESP + 0x68]         ; 00520ce2
    FSTP float ptr [ESP + 0x6c]         ; 00520ce6
    FSTP float ptr [ESP + 0x70]         ; 00520cea
    LEA EAX,[ESP + 0x50]                ; 00520cee
    MOVSD ES:EDI,ESI                    ; 00520cf2
    MOVSD ES:EDI,ESI                    ; 00520cf3
    MOVSD ES:EDI,ESI                    ; 00520cf4
    CMP EDX,EAX                         ; 00520cf5
    JNZ 0x00520fc2                      ; 00520cf7
        ;   XREF to: 00520fc2 (CONDITIONAL_JUMP)  ; LAB_00520fc2
    FLD float ptr [ESP + 0x24]          ; 00520cfd
        ;   Label: LAB_00520cfd
    FMUL ST0                            ; 00520d01
    FLD float ptr [ESP + 0x20]          ; 00520d03
    FMUL ST0                            ; 00520d07
    FADDP                               ; 00520d09
    FLD float ptr [ESP + 0x28]          ; 00520d0b
    FMUL ST0                            ; 00520d0f
    FADDP                               ; 00520d11
    FSQRT                               ; 00520d13
    MOV EDX,dword ptr [0x01d06ab4]      ; 00520d15 | DAT_01d06ab4
    SHL EDX,0x2                         ; 00520d1b
    MOV dword ptr [EBX + 0x2508],0x0    ; 00520d1e
    FCOMP double ptr [0x005ea296]       ; 00520d28 | DAT_005ea296
    FNSTSW AX                           ; 00520d2e
    SAHF                                ; 00520d30
    JBE 0x00520fdf                      ; 00520d31
        ;   XREF to: 00520fdf (CONDITIONAL_JUMP)  ; LAB_00520fdf
    MOV EAX,dword ptr [EDX + 0x1d06aa4] ; 00520d37
    PUSH EAX                            ; 00520d3d
    MOV EDX,dword ptr [EAX + 0x154]     ; 00520d3e
    CALL dword ptr [EDX + 0xc4]         ; 00520d44
    ADD ESP,0x4                         ; 00520d4a
    MOV EDX,dword ptr [EBX + 0x6c]      ; 00520d4d
    PUSH EDX                            ; 00520d50
    LEA EDX,[ESP + 0xc]                 ; 00520d51
    PUSH EDX                            ; 00520d55
    LEA EDX,[EBX + 0x20]                ; 00520d56
    PUSH EDX                            ; 00520d59
    PUSH EAX                            ; 00520d5a
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0 ; 00520d5b
        ;   XREF to: 005349a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_005349a0(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 00520d60
    TEST EAX,EAX                        ; 00520d63
    JZ 0x00520df2                       ; 00520d65
        ;   XREF to: 00520df2 (CONDITIONAL_JUMP)  ; LAB_00520df2
    FLD float ptr [ESP + 0xc]           ; 00520d6b
    FSUB float ptr [EBX + 0x34]         ; 00520d6f
    SUB ESP,0x4                         ; 00520d72
    FSTP float ptr [ESP]                ; 00520d75
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00520d78
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0xa8],EAX      ; 00520d7d
    FLD float ptr [ESP + 0xa8]          ; 00520d84
    FMUL float ptr [0x005ea29e]         ; 00520d8b | DAT_005ea29e
    ADD ESP,0x4                         ; 00520d91
    FMUL double ptr [0x005ea2a6]        ; 00520d94 | DAT_005ea2a6
    FLD float ptr [ESP + 0x94]          ; 00520d9a
    FCHS                                ; 00520da1
    FSTP float ptr [ESP + 0x84]         ; 00520da3
    FST float ptr [EBX + 0xc200]        ; 00520daa
    FCOMP float ptr [ESP + 0x84]        ; 00520db0
    FNSTSW AX                           ; 00520db7
    SAHF                                ; 00520db9
    JNC 0x00520dc9                      ; 00520dba
        ;   XREF to: 00520dc9 (CONDITIONAL_JUMP)  ; LAB_00520dc9
    MOV EAX,dword ptr [ESP + 0x84]      ; 00520dbc
    MOV dword ptr [EBX + 0xc200],EAX    ; 00520dc3
    FLD float ptr [EBX + 0xc200]        ; 00520dc9
        ;   Label: LAB_00520dc9
    FCOMP float ptr [ESP + 0x94]        ; 00520dcf
    FNSTSW AX                           ; 00520dd6
    SAHF                                ; 00520dd8
    JBE 0x00520de8                      ; 00520dd9
        ;   XREF to: 00520de8 (CONDITIONAL_JUMP)  ; LAB_00520de8
    MOV EAX,dword ptr [ESP + 0x94]      ; 00520ddb
    MOV dword ptr [EBX + 0xc200],EAX    ; 00520de2
    MOV dword ptr [EBX + 0xc1d8],0x1    ; 00520de8
        ;   Label: LAB_00520de8
    MOV dword ptr [EBX + 0x2fd0],0x0    ; 00520df2
        ;   Label: LAB_00520df2
    FLDZ                                ; 00520dfc
        ;   Label: LAB_00520dfc
    FLD float ptr [EBX + 0x2508]        ; 00520dfe
    FSTP double ptr [ESP]               ; 00520e04
    FCOMP double ptr [ESP]              ; 00520e07
    FNSTSW AX                           ; 00520e0a
    SAHF                                ; 00520e0c
    JNC 0x00521046                      ; 00520e0d
        ;   XREF to: 00521046 (CONDITIONAL_JUMP)  ; LAB_00521046
    MOV EAX,dword ptr [ESP + 0x94]      ; 00520e13
    MOV dword ptr [EBX + 0x2508],0x0    ; 00520e1a
    MOV dword ptr [EBX + 0xc200],EAX    ; 00520e24
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00520e2a
        ;   Label: LAB_00520e2a
    LEA EDI,[ESP + 0x2c]                ; 00520e31
    LEA ESI,[ESP + 0x14]                ; 00520e35
    LEA EDX,[EBX + 0x20]                ; 00520e39
    FLD float ptr [EAX + 0x24]          ; 00520e3c
    FLD float ptr [EAX + 0x28]          ; 00520e3f
    FLD float ptr [EAX + 0x20]          ; 00520e42
    LEA EAX,[ESP + 0x2c]                ; 00520e45
    FSUB float ptr [EDX]                ; 00520e49
    FXCH ST2                            ; 00520e4b
    FSUB float ptr [EDX + 0x4]          ; 00520e4d
    FXCH                                ; 00520e50
    FSUB float ptr [EDX + 0x8]          ; 00520e52
    FXCH ST2                            ; 00520e55
    FSTP float ptr [ESP + 0x14]         ; 00520e57
    FSTP float ptr [ESP + 0x18]         ; 00520e5b
    FSTP float ptr [ESP + 0x1c]         ; 00520e5f
    LEA EDX,[ESP + 0x20]                ; 00520e63
    MOVSD ES:EDI,ESI                    ; 00520e67
    MOVSD ES:EDI,ESI                    ; 00520e68
    MOVSD ES:EDI,ESI                    ; 00520e69
    CMP EDX,EAX                         ; 00520e6a
    JZ 0x00520e86                       ; 00520e6c
        ;   XREF to: 00520e86 (CONDITIONAL_JUMP)  ; LAB_00520e86
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00520e6e
    MOV dword ptr [ESP + 0x20],EAX      ; 00520e72
    MOV EAX,dword ptr [ESP + 0x30]      ; 00520e76
    MOV dword ptr [ESP + 0x24],EAX      ; 00520e7a
    MOV EAX,dword ptr [ESP + 0x34]      ; 00520e7e
    MOV dword ptr [ESP + 0x28],EAX      ; 00520e82
    LEA EAX,[ESP + 0x20]                ; 00520e86
        ;   Label: LAB_00520e86
    PUSH EAX                            ; 00520e8a
    LEA ESI,[ESP + 0x48]                ; 00520e8b
    LEA EDI,[ESP + 0x3c]                ; 00520e8f
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 00520e93
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x48]                ; 00520e98
    LEA EDX,[ESP + 0x3c]                ; 00520e9c
    ADD ESP,0x4                         ; 00520ea0
    LEA EAX,[ESP + 0x20]                ; 00520ea3
    MOVSD ES:EDI,ESI                    ; 00520ea7
    MOVSD ES:EDI,ESI                    ; 00520ea8
    MOVSD ES:EDI,ESI                    ; 00520ea9
    CMP EAX,EDX                         ; 00520eaa
    JZ 0x00520ec6                       ; 00520eac
        ;   XREF to: 00520ec6 (CONDITIONAL_JUMP)  ; LAB_00520ec6
    MOV EAX,dword ptr [ESP + 0x38]      ; 00520eae
    MOV dword ptr [ESP + 0x20],EAX      ; 00520eb2
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00520eb6
    MOV dword ptr [ESP + 0x24],EAX      ; 00520eba
    MOV EAX,dword ptr [ESP + 0x40]      ; 00520ebe
    MOV dword ptr [ESP + 0x28],EAX      ; 00520ec2
    FLD float ptr [ESP + 0x24]          ; 00520ec6
        ;   Label: LAB_00520ec6
    FSUB float ptr [EBX + 0x34]         ; 00520eca
    SUB ESP,0x4                         ; 00520ecd
    FSTP float ptr [ESP]                ; 00520ed0
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 00520ed3
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0xa8],EAX      ; 00520ed8
    FLD float ptr [ESP + 0xa8]          ; 00520edf
    ADD ESP,0x4                         ; 00520ee6
    FST float ptr [ESP + 0x78]          ; 00520ee9
    FCOMP float ptr [ESP + 0x90]        ; 00520eed
    FNSTSW AX                           ; 00520ef4
    SAHF                                ; 00520ef6
    JBE 0x00520f04                      ; 00520ef7
        ;   XREF to: 00520f04 (CONDITIONAL_JUMP)  ; LAB_00520f04
    MOV EAX,dword ptr [ESP + 0x90]      ; 00520ef9
    MOV dword ptr [ESP + 0x78],EAX      ; 00520f00
    FLD float ptr [ESP + 0x78]          ; 00520f04
        ;   Label: LAB_00520f04
    FLD float ptr [ESP + 0x90]          ; 00520f08
    FCHS                                ; 00520f0f
    FSTP float ptr [ESP + 0x88]         ; 00520f11
    FCOMP float ptr [ESP + 0x88]        ; 00520f18
    FNSTSW AX                           ; 00520f1f
    SAHF                                ; 00520f21
    JNC 0x00520f2f                      ; 00520f22
        ;   XREF to: 00520f2f (CONDITIONAL_JUMP)  ; LAB_00520f2f
    MOV EAX,dword ptr [ESP + 0x88]      ; 00520f24
    MOV dword ptr [ESP + 0x78],EAX      ; 00520f2b
    FLD float ptr [EBP + 0x18]          ; 00520f2f
        ;   Label: LAB_00520f2f
    FLD float ptr [ESP + 0x78]          ; 00520f32
    FSUB float ptr [EBX + 0x23054]      ; 00520f36
    FXCH                                ; 00520f3c
    FMUL float ptr [0x005ea2ae]         ; 00520f3e | DAT_005ea2ae
    FXCH                                ; 00520f44
    FSTP float ptr [ESP + 0x98]         ; 00520f46
    FSTP float ptr [ESP + 0x9c]         ; 00520f4d
    FLD float ptr [ESP + 0x98]          ; 00520f54
    FCOMP float ptr [ESP + 0x9c]        ; 00520f5b
    FNSTSW AX                           ; 00520f62
    SAHF                                ; 00520f64
    JBE 0x00520f75                      ; 00520f65
        ;   XREF to: 00520f75 (CONDITIONAL_JUMP)  ; LAB_00520f75
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00520f67
    MOV dword ptr [ESP + 0x98],EAX      ; 00520f6e
    FLD float ptr [EBP + 0x18]          ; 00520f75
        ;   Label: LAB_00520f75
    FMUL float ptr [0x005ea2b2]         ; 00520f78 | DAT_005ea2b2
    FLD float ptr [ESP + 0x98]          ; 00520f7e
    FXCH                                ; 00520f85
    FSTP float ptr [ESP + 0x8c]         ; 00520f87
    FCOMP float ptr [ESP + 0x8c]        ; 00520f8e
    FNSTSW AX                           ; 00520f95
    SAHF                                ; 00520f97
    JNC 0x00520fa8                      ; 00520f98
        ;   XREF to: 00520fa8 (CONDITIONAL_JUMP)  ; LAB_00520fa8
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00520f9a
    MOV dword ptr [ESP + 0x98],EAX      ; 00520fa1
    FLD float ptr [EBX + 0x23054]       ; 00520fa8
        ;   Label: LAB_00520fa8
    FADD float ptr [ESP + 0x98]         ; 00520fae
    FSTP float ptr [EBX + 0x23054]      ; 00520fb5
    MOV ESP,EBP                         ; 00520fbb
        ;   Label: LAB_00520fbb
    POP EBP                             ; 00520fbd
    POP EDI                             ; 00520fbe
    POP ESI                             ; 00520fbf
    POP EBX                             ; 00520fc0
    RET                                 ; 00520fc1
    MOV EAX,dword ptr [ESP + 0x50]      ; 00520fc2
        ;   Label: LAB_00520fc2
    MOV dword ptr [ESP + 0x20],EAX      ; 00520fc6
    MOV EAX,dword ptr [ESP + 0x54]      ; 00520fca
    MOV dword ptr [ESP + 0x24],EAX      ; 00520fce
    MOV EAX,dword ptr [ESP + 0x58]      ; 00520fd2
    MOV dword ptr [ESP + 0x28],EAX      ; 00520fd6
    JMP 0x00520cfd                      ; 00520fda
        ;   XREF to: 00520cfd (UNCONDITIONAL_JUMP)  ; LAB_00520cfd
    MOV EAX,dword ptr [EDX + 0x1d06aa4] ; 00520fdf
        ;   Label: LAB_00520fdf
    PUSH EAX                            ; 00520fe5
    MOV EDX,dword ptr [EAX + 0x154]     ; 00520fe6
    CALL dword ptr [EDX + 0x148]        ; 00520fec
    ADD ESP,0x4                         ; 00520ff2
    TEST EAX,EAX                        ; 00520ff5
    JNZ 0x00520dfc                      ; 00520ff7
        ;   XREF to: 00520dfc (CONDITIONAL_JUMP)  ; LAB_00520dfc
    PUSH dword ptr [EBP + 0x18]         ; 00520ffd
    PUSH EBX                            ; 00521000
    CALL core_charactr.cpp_FUN_00434c60 ; 00521001
        ;   XREF to: 00434c60 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434c60()
    ADD ESP,0x8                         ; 00521006
    CMP EAX,0x1                         ; 00521009
    JC 0x00520dfc                       ; 0052100c
        ;   XREF to: 00520dfc (CONDITIONAL_JUMP)  ; LAB_00520dfc
    JA 0x0052103c                       ; 00521012
        ;   XREF to: 0052103c (CONDITIONAL_JUMP)  ; LAB_0052103c
    MOV dword ptr [EBX + 0xc1d8],0x1    ; 00521014
    JMP 0x00520dfc                      ; 0052101e
        ;   XREF to: 00520dfc (UNCONDITIONAL_JUMP)  ; LAB_00520dfc
    MOV dword ptr [EBX + 0xc1e0],0x1    ; 00521023
        ;   Label: LAB_00521023
    MOV dword ptr [EBX + 0xc1d8],0x1    ; 0052102d
    JMP 0x00520dfc                      ; 00521037
        ;   XREF to: 00520dfc (UNCONDITIONAL_JUMP)  ; LAB_00520dfc
    CMP EAX,0x2                         ; 0052103c
        ;   Label: LAB_0052103c
    JZ 0x00521023                       ; 0052103f
        ;   XREF to: 00521023 (CONDITIONAL_JUMP)  ; LAB_00521023
    JMP 0x00520dfc                      ; 00521041
        ;   XREF to: 00520dfc (UNCONDITIONAL_JUMP)  ; LAB_00520dfc
    JBE 0x00520e2a                      ; 00521046
        ;   XREF to: 00520e2a (CONDITIONAL_JUMP)  ; LAB_00520e2a
        ;   Label: LAB_00521046
    FLD float ptr [ESP + 0x94]          ; 0052104c
    MOV dword ptr [EBX + 0x2508],0x0    ; 00521053
    FCHS                                ; 0052105d
    FSTP float ptr [EBX + 0xc200]       ; 0052105f
    JMP 0x00520e2a                      ; 00521065
        ;   XREF to: 00520e2a (UNCONDITIONAL_JUMP)  ; LAB_00520e2a

