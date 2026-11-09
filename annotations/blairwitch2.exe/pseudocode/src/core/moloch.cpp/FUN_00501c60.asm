; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moloch_cpp_FUN_00501c60(CMoloch *this_ptr,float delta_time)
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
;   core_moloch.cpp_FUN_00501530 at 005018c2
;
; Referenced Globals:
;   undefined4 DAT_005df249
;   undefined4 DAT_005df251
;   undefined4 DAT_005df259
;   undefined4 DAT_005df261
;   undefined4 DAT_005df265
;   undefined4 DAT_01cedef4
;
; Called Functions:
;   core_actor.cpp_FUN_0040d0c0
;   core_charactr.cpp_FUN_0042abe0
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650
;   core_vecdir.cpp_FUN_005838f0
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00501c60
        ;   Label: core_moloch.cpp_FUN_00501c60
    PUSH ESI                            ; 00501c61
    PUSH EDI                            ; 00501c62
    PUSH EBP                            ; 00501c63
    MOV EBP,ESP                         ; 00501c64
    SUB ESP,0xa8                        ; 00501c66
    AND ESP,0xfffffff8                  ; 00501c6c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00501c6f
    MOV EAX,[0x01cedef4]                ; 00501c72 | DAT_01cedef4
    PUSH 0x34                           ; 00501c77
    MOV EDX,0x3e800000                  ; 00501c79
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 00501c7e
    PUSH 0x0                            ; 00501c85
    MOV dword ptr [ESP + 0xa8],EAX      ; 00501c87
    LEA EAX,[EBX + 0x10a68]             ; 00501c8e
    MOV ECX,0x3f490fdb                  ; 00501c94
    PUSH EAX                            ; 00501c99
    MOV dword ptr [ESP + 0xa0],EDX      ; 00501c9a
    MOV dword ptr [ESP + 0x9c],ECX      ; 00501ca1
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00501ca8
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV ESI,dword ptr [EBX + 0x25638]   ; 00501cad
    ADD ESP,0xc                         ; 00501cb3
    TEST ESI,ESI                        ; 00501cb6
    JZ 0x0050200b                       ; 00501cb8
        ;   XREF to: 0050200b (CONDITIONAL_JUMP)  ; LAB_0050200b
    CMP ESI,0x1                         ; 00501cbe
    JNZ 0x0050200b                      ; 00501cc1
        ;   XREF to: 0050200b (CONDITIONAL_JUMP)  ; LAB_0050200b
    MOV EAX,[0x01cedef4]                ; 00501cc7 | DAT_01cedef4
    MOV EDX,dword ptr [EAX*0x4 + 0x1cedee4] ; 00501ccc
    LEA EAX,[EBX + 0x20]                ; 00501cd3
    LEA EDI,[ESP + 0x20]                ; 00501cd6
    LEA ESI,[ESP + 0x5c]                ; 00501cda
    FLD float ptr [EAX]                 ; 00501cde
    FLD float ptr [EAX + 0x4]           ; 00501ce0
    FLD float ptr [EAX + 0x8]           ; 00501ce3
    FXCH ST2                            ; 00501ce6
    FSUB float ptr [EDX + 0x20]         ; 00501ce8
    FXCH                                ; 00501ceb
    FSUB float ptr [EDX + 0x24]         ; 00501ced
    FXCH ST2                            ; 00501cf0
    FSUB float ptr [EDX + 0x28]         ; 00501cf2
    FXCH                                ; 00501cf5
    FSTP float ptr [ESP + 0x5c]         ; 00501cf7
    FXCH                                ; 00501cfb
    FSTP float ptr [ESP + 0x60]         ; 00501cfd
    FSTP float ptr [ESP + 0x64]         ; 00501d01
    MOV EDX,dword ptr [ESP + 0xa0]      ; 00501d05
    MOVSD ES:EDI,ESI                    ; 00501d0c
    MOVSD ES:EDI,ESI                    ; 00501d0d
    MOVSD ES:EDI,ESI                    ; 00501d0e
    FLD float ptr [EDX + 0x24]          ; 00501d0f
    FLD float ptr [EDX + 0x28]          ; 00501d12
    FLD float ptr [EDX + 0x20]          ; 00501d15
    LEA EDI,[ESP + 0x50]                ; 00501d18
    LEA ESI,[ESP + 0x68]                ; 00501d1c
    LEA EDX,[ESP + 0x20]                ; 00501d20
    FSUB float ptr [EAX]                ; 00501d24
    FXCH ST2                            ; 00501d26
    FSUB float ptr [EAX + 0x4]          ; 00501d28
    FXCH                                ; 00501d2b
    FSUB float ptr [EAX + 0x8]          ; 00501d2d
    FXCH ST2                            ; 00501d30
    FSTP float ptr [ESP + 0x68]         ; 00501d32
    FSTP float ptr [ESP + 0x6c]         ; 00501d36
    FSTP float ptr [ESP + 0x70]         ; 00501d3a
    LEA EAX,[ESP + 0x50]                ; 00501d3e
    MOVSD ES:EDI,ESI                    ; 00501d42
    MOVSD ES:EDI,ESI                    ; 00501d43
    MOVSD ES:EDI,ESI                    ; 00501d44
    CMP EDX,EAX                         ; 00501d45
    JNZ 0x00502012                      ; 00501d47
        ;   XREF to: 00502012 (CONDITIONAL_JUMP)  ; LAB_00502012
    FLD float ptr [ESP + 0x24]          ; 00501d4d
        ;   Label: LAB_00501d4d
    FMUL ST0                            ; 00501d51
    FLD float ptr [ESP + 0x20]          ; 00501d53
    FMUL ST0                            ; 00501d57
    FADDP                               ; 00501d59
    FLD float ptr [ESP + 0x28]          ; 00501d5b
    FMUL ST0                            ; 00501d5f
    FADDP                               ; 00501d61
    FSQRT                               ; 00501d63
    MOV EDX,dword ptr [0x01cedef4]      ; 00501d65 | DAT_01cedef4
    SHL EDX,0x2                         ; 00501d6b
    MOV dword ptr [EBX + 0x2578],0x0    ; 00501d6e
    FCOMP double ptr [0x005df249]       ; 00501d78 | DAT_005df249
    FNSTSW AX                           ; 00501d7e
    SAHF                                ; 00501d80
    JBE 0x0050202f                      ; 00501d81
        ;   XREF to: 0050202f (CONDITIONAL_JUMP)  ; LAB_0050202f
    MOV EAX,dword ptr [EDX + 0x1cedee4] ; 00501d87
    PUSH EAX                            ; 00501d8d
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00501d8e
    CALL dword ptr [EDX + 0xcc]         ; 00501d94
    ADD ESP,0x4                         ; 00501d9a
    MOV EDX,dword ptr [EBX + 0x6c]      ; 00501d9d
    PUSH EDX                            ; 00501da0
    LEA EDX,[ESP + 0xc]                 ; 00501da1
    PUSH EDX                            ; 00501da5
    LEA EDX,[EBX + 0x20]                ; 00501da6
    PUSH EDX                            ; 00501da9
    PUSH EAX                            ; 00501daa
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650 ; 00501dab
        ;   XREF to: 00513650 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 00501db0
    TEST EAX,EAX                        ; 00501db3
    JZ 0x00501e42                       ; 00501db5
        ;   XREF to: 00501e42 (CONDITIONAL_JUMP)  ; LAB_00501e42
    FLD float ptr [ESP + 0xc]           ; 00501dbb
    FSUB float ptr [EBX + 0x34]         ; 00501dbf
    SUB ESP,0x4                         ; 00501dc2
    FSTP float ptr [ESP]                ; 00501dc5
    CALL core_actor.cpp_FUN_0040d0c0    ; 00501dc8
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d0c0()
    MOV dword ptr [ESP + 0xa8],EAX      ; 00501dcd
    FLD float ptr [ESP + 0xa8]          ; 00501dd4
    FMUL float ptr [0x005df251]         ; 00501ddb | DAT_005df251
    ADD ESP,0x4                         ; 00501de1
    FMUL double ptr [0x005df259]        ; 00501de4 | DAT_005df259
    FLD float ptr [ESP + 0x94]          ; 00501dea
    FCHS                                ; 00501df1
    FSTP float ptr [ESP + 0x84]         ; 00501df3
    FST float ptr [EBX + 0x10a90]       ; 00501dfa
    FCOMP float ptr [ESP + 0x84]        ; 00501e00
    FNSTSW AX                           ; 00501e07
    SAHF                                ; 00501e09
    JNC 0x00501e19                      ; 00501e0a
        ;   XREF to: 00501e19 (CONDITIONAL_JUMP)  ; LAB_00501e19
    MOV EAX,dword ptr [ESP + 0x84]      ; 00501e0c
    MOV dword ptr [EBX + 0x10a90],EAX   ; 00501e13
    FLD float ptr [EBX + 0x10a90]       ; 00501e19
        ;   Label: LAB_00501e19
    FCOMP float ptr [ESP + 0x94]        ; 00501e1f
    FNSTSW AX                           ; 00501e26
    SAHF                                ; 00501e28
    JBE 0x00501e38                      ; 00501e29
        ;   XREF to: 00501e38 (CONDITIONAL_JUMP)  ; LAB_00501e38
    MOV EAX,dword ptr [ESP + 0x94]      ; 00501e2b
    MOV dword ptr [EBX + 0x10a90],EAX   ; 00501e32
    MOV dword ptr [EBX + 0x10a68],0x1   ; 00501e38
        ;   Label: LAB_00501e38
    MOV dword ptr [EBX + 0x303c],0x0    ; 00501e42
        ;   Label: LAB_00501e42
    FLDZ                                ; 00501e4c
        ;   Label: LAB_00501e4c
    FLD float ptr [EBX + 0x2578]        ; 00501e4e
    FSTP double ptr [ESP]               ; 00501e54
    FCOMP double ptr [ESP]              ; 00501e57
    FNSTSW AX                           ; 00501e5a
    SAHF                                ; 00501e5c
    JNC 0x00502096                      ; 00501e5d
        ;   XREF to: 00502096 (CONDITIONAL_JUMP)  ; LAB_00502096
    MOV EAX,dword ptr [ESP + 0x94]      ; 00501e63
    MOV dword ptr [EBX + 0x2578],0x0    ; 00501e6a
    MOV dword ptr [EBX + 0x10a90],EAX   ; 00501e74
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00501e7a
        ;   Label: LAB_00501e7a
    LEA EDI,[ESP + 0x2c]                ; 00501e81
    LEA ESI,[ESP + 0x14]                ; 00501e85
    LEA EDX,[EBX + 0x20]                ; 00501e89
    FLD float ptr [EAX + 0x24]          ; 00501e8c
    FLD float ptr [EAX + 0x28]          ; 00501e8f
    FLD float ptr [EAX + 0x20]          ; 00501e92
    LEA EAX,[ESP + 0x2c]                ; 00501e95
    FSUB float ptr [EDX]                ; 00501e99
    FXCH ST2                            ; 00501e9b
    FSUB float ptr [EDX + 0x4]          ; 00501e9d
    FXCH                                ; 00501ea0
    FSUB float ptr [EDX + 0x8]          ; 00501ea2
    FXCH ST2                            ; 00501ea5
    FSTP float ptr [ESP + 0x14]         ; 00501ea7
    FSTP float ptr [ESP + 0x18]         ; 00501eab
    FSTP float ptr [ESP + 0x1c]         ; 00501eaf
    LEA EDX,[ESP + 0x20]                ; 00501eb3
    MOVSD ES:EDI,ESI                    ; 00501eb7
    MOVSD ES:EDI,ESI                    ; 00501eb8
    MOVSD ES:EDI,ESI                    ; 00501eb9
    CMP EDX,EAX                         ; 00501eba
    JZ 0x00501ed6                       ; 00501ebc
        ;   XREF to: 00501ed6 (CONDITIONAL_JUMP)  ; LAB_00501ed6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00501ebe
    MOV dword ptr [ESP + 0x20],EAX      ; 00501ec2
    MOV EAX,dword ptr [ESP + 0x30]      ; 00501ec6
    MOV dword ptr [ESP + 0x24],EAX      ; 00501eca
    MOV EAX,dword ptr [ESP + 0x34]      ; 00501ece
    MOV dword ptr [ESP + 0x28],EAX      ; 00501ed2
    LEA EAX,[ESP + 0x20]                ; 00501ed6
        ;   Label: LAB_00501ed6
    PUSH EAX                            ; 00501eda
    LEA ESI,[ESP + 0x48]                ; 00501edb
    LEA EDI,[ESP + 0x3c]                ; 00501edf
    CALL core_vecdir.cpp_FUN_005838f0   ; 00501ee3
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    LEA ESI,[ESP + 0x48]                ; 00501ee8
    LEA EDX,[ESP + 0x3c]                ; 00501eec
    ADD ESP,0x4                         ; 00501ef0
    LEA EAX,[ESP + 0x20]                ; 00501ef3
    MOVSD ES:EDI,ESI                    ; 00501ef7
    MOVSD ES:EDI,ESI                    ; 00501ef8
    MOVSD ES:EDI,ESI                    ; 00501ef9
    CMP EAX,EDX                         ; 00501efa
    JZ 0x00501f16                       ; 00501efc
        ;   XREF to: 00501f16 (CONDITIONAL_JUMP)  ; LAB_00501f16
    MOV EAX,dword ptr [ESP + 0x38]      ; 00501efe
    MOV dword ptr [ESP + 0x20],EAX      ; 00501f02
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00501f06
    MOV dword ptr [ESP + 0x24],EAX      ; 00501f0a
    MOV EAX,dword ptr [ESP + 0x40]      ; 00501f0e
    MOV dword ptr [ESP + 0x28],EAX      ; 00501f12
    FLD float ptr [ESP + 0x24]          ; 00501f16
        ;   Label: LAB_00501f16
    FSUB float ptr [EBX + 0x34]         ; 00501f1a
    SUB ESP,0x4                         ; 00501f1d
    FSTP float ptr [ESP]                ; 00501f20
    CALL core_actor.cpp_FUN_0040d0c0    ; 00501f23
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d0c0()
    MOV dword ptr [ESP + 0xa8],EAX      ; 00501f28
    FLD float ptr [ESP + 0xa8]          ; 00501f2f
    ADD ESP,0x4                         ; 00501f36
    FST float ptr [ESP + 0x78]          ; 00501f39
    FCOMP float ptr [ESP + 0x90]        ; 00501f3d
    FNSTSW AX                           ; 00501f44
    SAHF                                ; 00501f46
    JBE 0x00501f54                      ; 00501f47
        ;   XREF to: 00501f54 (CONDITIONAL_JUMP)  ; LAB_00501f54
    MOV EAX,dword ptr [ESP + 0x90]      ; 00501f49
    MOV dword ptr [ESP + 0x78],EAX      ; 00501f50
    FLD float ptr [ESP + 0x78]          ; 00501f54
        ;   Label: LAB_00501f54
    FLD float ptr [ESP + 0x90]          ; 00501f58
    FCHS                                ; 00501f5f
    FSTP float ptr [ESP + 0x88]         ; 00501f61
    FCOMP float ptr [ESP + 0x88]        ; 00501f68
    FNSTSW AX                           ; 00501f6f
    SAHF                                ; 00501f71
    JNC 0x00501f7f                      ; 00501f72
        ;   XREF to: 00501f7f (CONDITIONAL_JUMP)  ; LAB_00501f7f
    MOV EAX,dword ptr [ESP + 0x88]      ; 00501f74
    MOV dword ptr [ESP + 0x78],EAX      ; 00501f7b
    FLD float ptr [EBP + 0x18]          ; 00501f7f
        ;   Label: LAB_00501f7f
    FLD float ptr [ESP + 0x78]          ; 00501f82
    FSUB float ptr [EBX + 0x285f8]      ; 00501f86
    FXCH                                ; 00501f8c
    FMUL float ptr [0x005df261]         ; 00501f8e | DAT_005df261
    FXCH                                ; 00501f94
    FSTP float ptr [ESP + 0x98]         ; 00501f96
    FSTP float ptr [ESP + 0x9c]         ; 00501f9d
    FLD float ptr [ESP + 0x98]          ; 00501fa4
    FCOMP float ptr [ESP + 0x9c]        ; 00501fab
    FNSTSW AX                           ; 00501fb2
    SAHF                                ; 00501fb4
    JBE 0x00501fc5                      ; 00501fb5
        ;   XREF to: 00501fc5 (CONDITIONAL_JUMP)  ; LAB_00501fc5
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00501fb7
    MOV dword ptr [ESP + 0x98],EAX      ; 00501fbe
    FLD float ptr [EBP + 0x18]          ; 00501fc5
        ;   Label: LAB_00501fc5
    FMUL float ptr [0x005df265]         ; 00501fc8 | DAT_005df265
    FLD float ptr [ESP + 0x98]          ; 00501fce
    FXCH                                ; 00501fd5
    FSTP float ptr [ESP + 0x8c]         ; 00501fd7
    FCOMP float ptr [ESP + 0x8c]        ; 00501fde
    FNSTSW AX                           ; 00501fe5
    SAHF                                ; 00501fe7
    JNC 0x00501ff8                      ; 00501fe8
        ;   XREF to: 00501ff8 (CONDITIONAL_JUMP)  ; LAB_00501ff8
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00501fea
    MOV dword ptr [ESP + 0x98],EAX      ; 00501ff1
    FLD float ptr [EBX + 0x285f8]       ; 00501ff8
        ;   Label: LAB_00501ff8
    FADD float ptr [ESP + 0x98]         ; 00501ffe
    FSTP float ptr [EBX + 0x285f8]      ; 00502005
    MOV ESP,EBP                         ; 0050200b
        ;   Label: LAB_0050200b
    POP EBP                             ; 0050200d
    POP EDI                             ; 0050200e
    POP ESI                             ; 0050200f
    POP EBX                             ; 00502010
    RET                                 ; 00502011
    MOV EAX,dword ptr [ESP + 0x50]      ; 00502012
        ;   Label: LAB_00502012
    MOV dword ptr [ESP + 0x20],EAX      ; 00502016
    MOV EAX,dword ptr [ESP + 0x54]      ; 0050201a
    MOV dword ptr [ESP + 0x24],EAX      ; 0050201e
    MOV EAX,dword ptr [ESP + 0x58]      ; 00502022
    MOV dword ptr [ESP + 0x28],EAX      ; 00502026
    JMP 0x00501d4d                      ; 0050202a
        ;   XREF to: 00501d4d (UNCONDITIONAL_JUMP)  ; LAB_00501d4d
    MOV EAX,dword ptr [EDX + 0x1cedee4] ; 0050202f
        ;   Label: LAB_0050202f
    PUSH EAX                            ; 00502035
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00502036
    CALL dword ptr [EDX + 0x154]        ; 0050203c
    ADD ESP,0x4                         ; 00502042
    TEST EAX,EAX                        ; 00502045
    JNZ 0x00501e4c                      ; 00502047
        ;   XREF to: 00501e4c (CONDITIONAL_JUMP)  ; LAB_00501e4c
    PUSH dword ptr [EBP + 0x18]         ; 0050204d
    PUSH EBX                            ; 00502050
    CALL core_charactr.cpp_FUN_0042abe0 ; 00502051
        ;   XREF to: 0042abe0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042abe0()
    ADD ESP,0x8                         ; 00502056
    CMP EAX,0x1                         ; 00502059
    JC 0x00501e4c                       ; 0050205c
        ;   XREF to: 00501e4c (CONDITIONAL_JUMP)  ; LAB_00501e4c
    JA 0x0050208c                       ; 00502062
        ;   XREF to: 0050208c (CONDITIONAL_JUMP)  ; LAB_0050208c
    MOV dword ptr [EBX + 0x10a68],0x1   ; 00502064
    JMP 0x00501e4c                      ; 0050206e
        ;   XREF to: 00501e4c (UNCONDITIONAL_JUMP)  ; LAB_00501e4c
    MOV dword ptr [EBX + 0x10a70],0x1   ; 00502073
        ;   Label: LAB_00502073
    MOV dword ptr [EBX + 0x10a68],0x1   ; 0050207d
    JMP 0x00501e4c                      ; 00502087
        ;   XREF to: 00501e4c (UNCONDITIONAL_JUMP)  ; LAB_00501e4c
    CMP EAX,0x2                         ; 0050208c
        ;   Label: LAB_0050208c
    JZ 0x00502073                       ; 0050208f
        ;   XREF to: 00502073 (CONDITIONAL_JUMP)  ; LAB_00502073
    JMP 0x00501e4c                      ; 00502091
        ;   XREF to: 00501e4c (UNCONDITIONAL_JUMP)  ; LAB_00501e4c
    JBE 0x00501e7a                      ; 00502096
        ;   XREF to: 00501e7a (CONDITIONAL_JUMP)  ; LAB_00501e7a
        ;   Label: LAB_00502096
    FLD float ptr [ESP + 0x94]          ; 0050209c
    MOV dword ptr [EBX + 0x2578],0x0    ; 005020a3
    FCHS                                ; 005020ad
    FSTP float ptr [EBX + 0x10a90]      ; 005020af
    JMP 0x00501e7a                      ; 005020b5
        ;   XREF to: 00501e7a (UNCONDITIONAL_JUMP)  ; LAB_00501e7a

