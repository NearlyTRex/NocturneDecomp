; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_colonel_cpp_FUN_00435e30(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0xec]:4  local_ec
; undefined8       Stack[-0xe8]:8  local_e8
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined        Stack[-0xd8]:1  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined        Stack[-0xc0]:1  local_c0
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined        Stack[-0x9c]:1  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined        Stack[-0x54]:1  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_colonel.cpp_FUN_00435830 at 004358ba
;
; Referenced Globals:
;   undefined4 DAT_005cdbf1
;   undefined4 DAT_005cdbf5
;   undefined4 DAT_005cdbfd
;   undefined4 DAT_005cdc05
;   undefined4 DAT_005cdc0d
;   undefined4 DAT_005cdc15
;   undefined4 DAT_005cdc1d
;   undefined4 DAT_005cdc25
;   undefined4 DAT_005cdc2d
;   undefined4 DAT_005cdc31
;   undefined4 DAT_01cedef4
;
; Called Functions:
;   core_actor.cpp_FUN_0040d0c0
;   core_hero.cpp_FUN_004d00c0
;   core_motion.cpp_FUN_005035c0
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650
;   core_path.cpp_getPathMap_FUN_00513ea0
;   core_vecdir.cpp_FUN_005838f0
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435e30
        ;   Label: core_colonel.cpp_FUN_00435e30
    PUSH ESI                            ; 00435e31
    PUSH EDI                            ; 00435e32
    PUSH EBP                            ; 00435e33
    MOV EBP,ESP                         ; 00435e34
    SUB ESP,0xd4                        ; 00435e36
    AND ESP,0xfffffff8                  ; 00435e3c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00435e3f
    MOV ECX,0x3e800000                  ; 00435e42
    MOV ESI,0x3f490fdb                  ; 00435e47
    MOV EAX,[0x01cedef4]                ; 00435e4c | DAT_01cedef4
    PUSH 0x34                           ; 00435e51
    XOR EDX,EDX                         ; 00435e53
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 00435e55
    PUSH EDX                            ; 00435e5c
    MOV dword ptr [ESP + 0xc8],EAX      ; 00435e5d
    LEA EAX,[EBX + 0x10a68]             ; 00435e64
    MOV dword ptr [ESP + 0xcc],EDX      ; 00435e6a
    PUSH EAX                            ; 00435e71
    MOV dword ptr [ESP + 0xd8],ECX      ; 00435e72
    MOV dword ptr [ESP + 0xc8],ESI      ; 00435e79
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00435e80
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV EDI,dword ptr [EBX + 0x25638]   ; 00435e85
    ADD ESP,0xc                         ; 00435e8b
    TEST EDI,EDI                        ; 00435e8e
    JZ 0x00436294                       ; 00435e90
        ;   XREF to: 00436294 (CONDITIONAL_JUMP)  ; LAB_00436294
    LEA EDI,[ESP + 0x64]                ; 00435e96
    LEA EDX,[EBX + 0x20]                ; 00435e9a
    LEA ESI,[ESP + 0x40]                ; 00435e9d
    MOV EAX,[0x01cedef4]                ; 00435ea1 | DAT_01cedef4
    FLD float ptr [EDX]                 ; 00435ea6
    FLD float ptr [EDX + 0x4]           ; 00435ea8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 00435eab
    FLD float ptr [EDX + 0x8]           ; 00435eb2
    FXCH ST2                            ; 00435eb5
    FSUB float ptr [EAX + 0x20]         ; 00435eb7
    FXCH                                ; 00435eba
    FSUB float ptr [EAX + 0x24]         ; 00435ebc
    FXCH ST2                            ; 00435ebf
    FSUB float ptr [EAX + 0x28]         ; 00435ec1
    FXCH                                ; 00435ec4
    FSTP float ptr [ESP + 0x40]         ; 00435ec6
    FXCH                                ; 00435eca
    FSTP float ptr [ESP + 0x44]         ; 00435ecc
    FSTP float ptr [ESP + 0x48]         ; 00435ed0
    MOVSD ES:EDI,ESI                    ; 00435ed4
    MOVSD ES:EDI,ESI                    ; 00435ed5
    MOVSD ES:EDI,ESI                    ; 00435ed6
    FLD float ptr [ESP + 0x68]          ; 00435ed7
    FMUL ST0                            ; 00435edb
    FLD float ptr [ESP + 0x64]          ; 00435edd
    FMUL ST0                            ; 00435ee1
    FADDP                               ; 00435ee3
    FLD float ptr [ESP + 0x6c]          ; 00435ee5
    FMUL ST0                            ; 00435ee9
    FADDP                               ; 00435eeb
    FSQRT                               ; 00435eed
    MOV EAX,dword ptr [EBX + 0x25638]   ; 00435eef
    FSTP float ptr [ESP + 0xa4]         ; 00435ef5
    CMP EAX,0x3                         ; 00435efc
    JNZ 0x0043629b                      ; 00435eff
        ;   XREF to: 0043629b (CONDITIONAL_JUMP)  ; LAB_0043629b
    MOV EDX,dword ptr [EBX + 0x25638]   ; 00435f05
        ;   Label: LAB_00435f05
    CMP EDX,0x2                         ; 00435f0b
    JNZ 0x004362b6                      ; 00435f0e
        ;   XREF to: 004362b6 (CONDITIONAL_JUMP)  ; LAB_004362b6
    LEA EAX,[ESP + 0x8]                 ; 00435f14
        ;   Label: LAB_00435f14
    PUSH EAX                            ; 00435f18
    PUSH EBX                            ; 00435f19
    CALL core_hero.cpp_FUN_004d00c0     ; 00435f1a
        ;   XREF to: 004d00c0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d00c0()
    MOV EDX,EAX                         ; 00435f1f
    ADD ESP,0x8                         ; 00435f21
    TEST EAX,EAX                        ; 00435f24
    JZ 0x00435f4a                       ; 00435f26
        ;   XREF to: 00435f4a (CONDITIONAL_JUMP)  ; LAB_00435f4a
    FLD float ptr [ESP + 0x8]           ; 00435f28
    FCOMP double ptr [0x005cdbf5]       ; 00435f2c | DAT_005cdbf5
    FNSTSW AX                           ; 00435f32
    SAHF                                ; 00435f34
    JNC 0x00435f4a                      ; 00435f35
        ;   XREF to: 00435f4a (CONDITIONAL_JUMP)  ; LAB_00435f4a
    MOV ESI,0x1                         ; 00435f37
    MOV dword ptr [ESP + 0xc0],EDX      ; 00435f3c
    MOV dword ptr [ESP + 0xc4],ESI      ; 00435f43
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00435f4a
        ;   Label: LAB_00435f4a
    LEA EDI,[ESP + 0x7c]                ; 00435f51
    LEA ESI,[ESP + 0x1c]                ; 00435f55
    LEA EDX,[EBX + 0x20]                ; 00435f59
    FLD float ptr [EAX + 0x24]          ; 00435f5c
    FLD float ptr [EAX + 0x28]          ; 00435f5f
    FLD float ptr [EAX + 0x20]          ; 00435f62
    LEA EAX,[ESP + 0x7c]                ; 00435f65
    FSUB float ptr [EDX]                ; 00435f69
    FXCH ST2                            ; 00435f6b
    FSUB float ptr [EDX + 0x4]          ; 00435f6d
    FXCH                                ; 00435f70
    FSUB float ptr [EDX + 0x8]          ; 00435f72
    FXCH ST2                            ; 00435f75
    FSTP float ptr [ESP + 0x1c]         ; 00435f77
    FSTP float ptr [ESP + 0x20]         ; 00435f7b
    FSTP float ptr [ESP + 0x24]         ; 00435f7f
    LEA EDX,[ESP + 0x64]                ; 00435f83
    MOVSD ES:EDI,ESI                    ; 00435f87
    MOVSD ES:EDI,ESI                    ; 00435f88
    MOVSD ES:EDI,ESI                    ; 00435f89
    CMP EDX,EAX                         ; 00435f8a
    JZ 0x00435fac                       ; 00435f8c
        ;   XREF to: 00435fac (CONDITIONAL_JUMP)  ; LAB_00435fac
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00435f8e
    MOV dword ptr [ESP + 0x64],EAX      ; 00435f92
    MOV EAX,dword ptr [ESP + 0x80]      ; 00435f96
    MOV dword ptr [ESP + 0x68],EAX      ; 00435f9d
    MOV EAX,dword ptr [ESP + 0x84]      ; 00435fa1
    MOV dword ptr [ESP + 0x6c],EAX      ; 00435fa8
    FLD float ptr [ESP + 0x68]          ; 00435fac
        ;   Label: LAB_00435fac
    FMUL ST0                            ; 00435fb0
    FLD float ptr [ESP + 0x64]          ; 00435fb2
    FMUL ST0                            ; 00435fb6
    FADDP                               ; 00435fb8
    FLD float ptr [ESP + 0x6c]          ; 00435fba
    FMUL ST0                            ; 00435fbe
    FADDP                               ; 00435fc0
    FSQRT                               ; 00435fc2
    FSTP float ptr [ESP + 0xa0]         ; 00435fc4
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00435fcb
    FLD float ptr [ESP + 0xa0]          ; 00435fd2
    MOV dword ptr [ESP + 0xc],EAX       ; 00435fd9
    FCOMP double ptr [0x005cdbfd]       ; 00435fdd | DAT_005cdbfd
    FNSTSW AX                           ; 00435fe3
    SAHF                                ; 00435fe5
    JNC 0x004362fa                      ; 00435fe6
        ;   XREF to: 004362fa (CONDITIONAL_JUMP)  ; LAB_004362fa
    MOV ESI,dword ptr [ESP + 0xc4]      ; 00435fec
    LEA EAX,[EBX + 0x2b4]               ; 00435ff3
    CMP ESI,0x1                         ; 00435ff9
    JNZ 0x004362ec                      ; 00435ffc
        ;   XREF to: 004362ec (CONDITIONAL_JUMP)  ; LAB_004362ec
    CMP dword ptr [EBX + 0x25640],0x0   ; 00436002
    JNZ 0x004362c4                      ; 00436009
        ;   XREF to: 004362c4 (CONDITIONAL_JUMP)  ; LAB_004362c4
    MOV dword ptr [EBX + 0x10a80],ESI   ; 0043600f
    CMP dword ptr [ESP + 0xc4],0x1      ; 00436015
        ;   Label: LAB_00436015
    JNZ 0x004360f1                      ; 0043601d
        ;   XREF to: 004360f1 (CONDITIONAL_JUMP)  ; LAB_004360f1
    LEA EAX,[ESP + 0x64]                ; 00436023
    PUSH EAX                            ; 00436027
    LEA ESI,[ESP + 0x2c]                ; 00436028
    LEA EDI,[ESP + 0x50]                ; 0043602c
    CALL core_vecdir.cpp_FUN_005838f0   ; 00436030
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    LEA ESI,[ESP + 0x2c]                ; 00436035
    ADD ESP,0x4                         ; 00436039
    MOVSD ES:EDI,ESI                    ; 0043603c
    MOVSD ES:EDI,ESI                    ; 0043603d
    MOVSD ES:EDI,ESI                    ; 0043603e
    FLD float ptr [ESP + 0x50]          ; 0043603f
    FSUB float ptr [EBX + 0x34]         ; 00436043
    SUB ESP,0x4                         ; 00436046
    FSTP float ptr [ESP]                ; 00436049
    CALL core_actor.cpp_FUN_0040d0c0    ; 0043604c
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d0c0()
    MOV dword ptr [ESP + 0xd4],EAX      ; 00436051
    FLD float ptr [ESP + 0xd4]          ; 00436058
    FMUL float ptr [0x005cdc05]         ; 0043605f | DAT_005cdc05
    ADD ESP,0x4                         ; 00436065
    FMUL double ptr [0x005cdc0d]        ; 00436068 | DAT_005cdc0d
    FLD float ptr [ESP + 0xcc]          ; 0043606e
    FCHS                                ; 00436075
    FSTP float ptr [ESP + 0xa8]         ; 00436077
    FST float ptr [EBX + 0x10a90]       ; 0043607e
    FCOMP float ptr [ESP + 0xa8]        ; 00436084
    FNSTSW AX                           ; 0043608b
    SAHF                                ; 0043608d
    JNC 0x0043609d                      ; 0043608e
        ;   XREF to: 0043609d (CONDITIONAL_JUMP)  ; LAB_0043609d
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00436090
    MOV dword ptr [EBX + 0x10a90],EAX   ; 00436097
    FLD float ptr [EBX + 0x10a90]       ; 0043609d
        ;   Label: LAB_0043609d
    FCOMP float ptr [ESP + 0xcc]        ; 004360a3
    FNSTSW AX                           ; 004360aa
    SAHF                                ; 004360ac
    JBE 0x004360bc                      ; 004360ad
        ;   XREF to: 004360bc (CONDITIONAL_JUMP)  ; LAB_004360bc
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004360af
    MOV dword ptr [EBX + 0x10a90],EAX   ; 004360b6
    FLD float ptr [EBX + 0x10a90]       ; 004360bc
        ;   Label: LAB_004360bc
    FST double ptr [ESP]                ; 004360c2
    FCOMP double ptr [0x005cdc1d]       ; 004360c5 | DAT_005cdc1d
    FNSTSW AX                           ; 004360cb
    SAHF                                ; 004360cd
    JBE 0x004360f1                      ; 004360ce
        ;   XREF to: 004360f1 (CONDITIONAL_JUMP)  ; LAB_004360f1
    FLD double ptr [ESP]                ; 004360d0
    FCOMP double ptr [0x005cdc25]       ; 004360d3 | DAT_005cdc25
    FNSTSW AX                           ; 004360d9
    SAHF                                ; 004360db
    JNC 0x004360f1                      ; 004360dc
        ;   XREF to: 004360f1 (CONDITIONAL_JUMP)  ; LAB_004360f1
    CMP dword ptr [EBX + 0x10a74],0x0   ; 004360de
    JZ 0x004360f1                       ; 004360e5
        ;   XREF to: 004360f1 (CONDITIONAL_JUMP)  ; LAB_004360f1
    MOV dword ptr [EBX + 0x10a90],0x0   ; 004360e7
    MOV EDX,dword ptr [ESP + 0xc0]      ; 004360f1
        ;   Label: LAB_004360f1
    LEA EDI,[ESP + 0x58]                ; 004360f8
    LEA ESI,[ESP + 0x88]                ; 004360fc
    LEA EAX,[EBX + 0x20]                ; 00436103
    FLD float ptr [EDX + 0x24]          ; 00436106
    FLD float ptr [EDX + 0x28]          ; 00436109
    FLD float ptr [EDX + 0x20]          ; 0043610c
    LEA EDX,[ESP + 0x64]                ; 0043610f
    FSUB float ptr [EAX]                ; 00436113
    FXCH ST2                            ; 00436115
    FSUB float ptr [EAX + 0x4]          ; 00436117
    FXCH                                ; 0043611a
    FSUB float ptr [EAX + 0x8]          ; 0043611c
    FXCH ST2                            ; 0043611f
    FSTP float ptr [ESP + 0x88]         ; 00436121
    FSTP float ptr [ESP + 0x8c]         ; 00436128
    FSTP float ptr [ESP + 0x90]         ; 0043612f
    LEA EAX,[ESP + 0x58]                ; 00436136
    MOVSD ES:EDI,ESI                    ; 0043613a
    MOVSD ES:EDI,ESI                    ; 0043613b
    MOVSD ES:EDI,ESI                    ; 0043613c
    CMP EDX,EAX                         ; 0043613d
    JZ 0x00436159                       ; 0043613f
        ;   XREF to: 00436159 (CONDITIONAL_JUMP)  ; LAB_00436159
    MOV EAX,dword ptr [ESP + 0x58]      ; 00436141
    MOV dword ptr [ESP + 0x64],EAX      ; 00436145
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00436149
    MOV dword ptr [ESP + 0x68],EAX      ; 0043614d
    MOV EAX,dword ptr [ESP + 0x60]      ; 00436151
    MOV dword ptr [ESP + 0x6c],EAX      ; 00436155
    LEA EAX,[ESP + 0x64]                ; 00436159
        ;   Label: LAB_00436159
    PUSH EAX                            ; 0043615d
    LEA ESI,[ESP + 0x98]                ; 0043615e
    LEA EDI,[ESP + 0x74]                ; 00436165
    CALL core_vecdir.cpp_FUN_005838f0   ; 00436169
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    LEA ESI,[ESP + 0x98]                ; 0043616e
    LEA EDX,[ESP + 0x74]                ; 00436175
    ADD ESP,0x4                         ; 00436179
    LEA EAX,[ESP + 0x64]                ; 0043617c
    MOVSD ES:EDI,ESI                    ; 00436180
    MOVSD ES:EDI,ESI                    ; 00436181
    MOVSD ES:EDI,ESI                    ; 00436182
    CMP EAX,EDX                         ; 00436183
    JZ 0x0043619f                       ; 00436185
        ;   XREF to: 0043619f (CONDITIONAL_JUMP)  ; LAB_0043619f
    MOV EAX,dword ptr [ESP + 0x70]      ; 00436187
    MOV dword ptr [ESP + 0x64],EAX      ; 0043618b
    MOV EAX,dword ptr [ESP + 0x74]      ; 0043618f
    MOV dword ptr [ESP + 0x68],EAX      ; 00436193
    MOV EAX,dword ptr [ESP + 0x78]      ; 00436197
    MOV dword ptr [ESP + 0x6c],EAX      ; 0043619b
    FLD float ptr [ESP + 0x68]          ; 0043619f
        ;   Label: LAB_0043619f
    FSUB float ptr [EBX + 0x34]         ; 004361a3
    SUB ESP,0x4                         ; 004361a6
    FSTP float ptr [ESP]                ; 004361a9
    CALL core_actor.cpp_FUN_0040d0c0    ; 004361ac
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d0c0()
    MOV dword ptr [ESP + 0xd4],EAX      ; 004361b1
    FLD float ptr [ESP + 0xd4]          ; 004361b8
    ADD ESP,0x4                         ; 004361bf
    FST float ptr [ESP + 0x38]          ; 004361c2
    FCOMP float ptr [ESP + 0xbc]        ; 004361c6
    FNSTSW AX                           ; 004361cd
    SAHF                                ; 004361cf
    JBE 0x004361dd                      ; 004361d0
        ;   XREF to: 004361dd (CONDITIONAL_JUMP)  ; LAB_004361dd
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004361d2
    MOV dword ptr [ESP + 0x38],EAX      ; 004361d9
    FLD float ptr [ESP + 0x38]          ; 004361dd
        ;   Label: LAB_004361dd
    FLD float ptr [ESP + 0xbc]          ; 004361e1
    FCHS                                ; 004361e8
    FSTP float ptr [ESP + 0xb4]         ; 004361ea
    FCOMP float ptr [ESP + 0xb4]        ; 004361f1
    FNSTSW AX                           ; 004361f8
    SAHF                                ; 004361fa
    JNC 0x00436208                      ; 004361fb
        ;   XREF to: 00436208 (CONDITIONAL_JUMP)  ; LAB_00436208
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004361fd
    MOV dword ptr [ESP + 0x38],EAX      ; 00436204
    FLD float ptr [EBP + 0x18]          ; 00436208
        ;   Label: LAB_00436208
    FLD float ptr [ESP + 0x38]          ; 0043620b
    FSUB float ptr [EBX + 0x2564c]      ; 0043620f
    FXCH                                ; 00436215
    FMUL float ptr [0x005cdc2d]         ; 00436217 | DAT_005cdc2d
    FXCH                                ; 0043621d
    FSTP float ptr [ESP + 0xc8]         ; 0043621f
    FSTP float ptr [ESP + 0xb8]         ; 00436226
    FLD float ptr [ESP + 0xc8]          ; 0043622d
    FCOMP float ptr [ESP + 0xb8]        ; 00436234
    FNSTSW AX                           ; 0043623b
    SAHF                                ; 0043623d
    JBE 0x0043624e                      ; 0043623e
        ;   XREF to: 0043624e (CONDITIONAL_JUMP)  ; LAB_0043624e
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00436240
    MOV dword ptr [ESP + 0xc8],EAX      ; 00436247
    FLD float ptr [EBP + 0x18]          ; 0043624e
        ;   Label: LAB_0043624e
    FMUL float ptr [0x005cdc31]         ; 00436251 | DAT_005cdc31
    FLD float ptr [ESP + 0xc8]          ; 00436257
    FXCH                                ; 0043625e
    FSTP float ptr [ESP + 0xac]         ; 00436260
    FCOMP float ptr [ESP + 0xac]        ; 00436267
    FNSTSW AX                           ; 0043626e
    SAHF                                ; 00436270
    JNC 0x00436281                      ; 00436271
        ;   XREF to: 00436281 (CONDITIONAL_JUMP)  ; LAB_00436281
    MOV EAX,dword ptr [ESP + 0xac]      ; 00436273
    MOV dword ptr [ESP + 0xc8],EAX      ; 0043627a
    FLD float ptr [EBX + 0x2564c]       ; 00436281
        ;   Label: LAB_00436281
    FADD float ptr [ESP + 0xc8]         ; 00436287
    FSTP float ptr [EBX + 0x2564c]      ; 0043628e
    MOV ESP,EBP                         ; 00436294
        ;   Label: LAB_00436294
    POP EBP                             ; 00436296
    POP EDI                             ; 00436297
    POP ESI                             ; 00436298
    POP EBX                             ; 00436299
    RET                                 ; 0043629a
    FLD float ptr [ESP + 0xa4]          ; 0043629b
        ;   Label: LAB_0043629b
    FCOMP float ptr [0x005cdbf1]        ; 004362a2 | DAT_005cdbf1
    FNSTSW AX                           ; 004362a8
    SAHF                                ; 004362aa
    JC 0x00435f05                       ; 004362ab
        ;   XREF to: 00435f05 (CONDITIONAL_JUMP)  ; LAB_00435f05
    JMP 0x00435f4a                      ; 004362b1
        ;   XREF to: 00435f4a (UNCONDITIONAL_JUMP)  ; LAB_00435f4a
    CMP EDX,0x3                         ; 004362b6
        ;   Label: LAB_004362b6
    JZ 0x00435f14                       ; 004362b9
        ;   XREF to: 00435f14 (CONDITIONAL_JUMP)  ; LAB_00435f14
    JMP 0x00435f4a                      ; 004362bf
        ;   XREF to: 00435f4a (UNCONDITIONAL_JUMP)  ; LAB_00435f4a
    PUSH EAX                            ; 004362c4
        ;   Label: LAB_004362c4
    CALL core_motion.cpp_FUN_005035c0   ; 004362c5
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004362ca
    ADD ESP,0x4                         ; 004362cd
    CMP EAX,0x2                         ; 004362d0
    JZ 0x00436015                       ; 004362d3
        ;   XREF to: 00436015 (CONDITIONAL_JUMP)  ; LAB_00436015
    CMP EAX,ESI                         ; 004362d9
    JZ 0x00436015                       ; 004362db
        ;   XREF to: 00436015 (CONDITIONAL_JUMP)  ; LAB_00436015
    MOV dword ptr [EBX + 0x10a74],ESI   ; 004362e1
    JMP 0x00436015                      ; 004362e7
        ;   XREF to: 00436015 (UNCONDITIONAL_JUMP)  ; LAB_00436015
    PUSH EAX                            ; 004362ec
        ;   Label: LAB_004362ec
    CALL core_motion.cpp_FUN_005035c0   ; 004362ed
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 004362f2
    JMP 0x00436015                      ; 004362f5
        ;   XREF to: 00436015 (UNCONDITIONAL_JUMP)  ; LAB_00436015
    MOV EDI,dword ptr [ESP + 0xc4]      ; 004362fa
        ;   Label: LAB_004362fa
    XOR EAX,EAX                         ; 00436301
    TEST EDI,EDI                        ; 00436303
    JNZ 0x00436323                      ; 00436305
        ;   XREF to: 00436323 (CONDITIONAL_JUMP)  ; LAB_00436323
    MOV EAX,[0x01cedef4]                ; 00436307 | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 0043630c
    PUSH EAX                            ; 00436313
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00436314
    CALL dword ptr [EDX + 0xcc]         ; 0043631a
    ADD ESP,0x4                         ; 00436320
    TEST EAX,EAX                        ; 00436323
        ;   Label: LAB_00436323
    JNZ 0x0043633a                      ; 00436325
        ;   XREF to: 0043633a (CONDITIONAL_JUMP)  ; LAB_0043633a
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00436327
    ADD EAX,0x20                        ; 0043632e
    PUSH EAX                            ; 00436331
    CALL core_path.cpp_getPathMap_FUN_00513ea0 ; 00436332
        ;   XREF to: 00513ea0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_00513ea0(CLocation * location)
    ADD ESP,0x4                         ; 00436337
    MOV EDX,dword ptr [EBX + 0x6c]      ; 0043633a
        ;   Label: LAB_0043633a
    PUSH EDX                            ; 0043633d
    LEA EDX,[ESP + 0x14]                ; 0043633e
    PUSH EDX                            ; 00436342
    LEA EDX,[EBX + 0x20]                ; 00436343
    PUSH EDX                            ; 00436346
    PUSH EAX                            ; 00436347
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650 ; 00436348
        ;   XREF to: 00513650 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 0043634d
    TEST EAX,EAX                        ; 00436350
    JZ 0x004360f1                       ; 00436352
        ;   XREF to: 004360f1 (CONDITIONAL_JUMP)  ; LAB_004360f1
    FLD float ptr [ESP + 0x14]          ; 00436358
    FSUB float ptr [EBX + 0x34]         ; 0043635c
    SUB ESP,0x4                         ; 0043635f
    FSTP float ptr [ESP]                ; 00436362
    CALL core_actor.cpp_FUN_0040d0c0    ; 00436365
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d0c0()
    MOV dword ptr [ESP + 0xd4],EAX      ; 0043636a
    FLD float ptr [ESP + 0xd4]          ; 00436371
    FMUL float ptr [0x005cdc05]         ; 00436378 | DAT_005cdc05
    ADD ESP,0x4                         ; 0043637e
    FMUL double ptr [0x005cdc0d]        ; 00436381 | DAT_005cdc0d
    FLD float ptr [ESP + 0xcc]          ; 00436387
    FCHS                                ; 0043638e
    FSTP float ptr [ESP + 0xb0]         ; 00436390
    FST float ptr [EBX + 0x10a90]       ; 00436397
    FCOMP float ptr [ESP + 0xb0]        ; 0043639d
    FNSTSW AX                           ; 004363a4
    SAHF                                ; 004363a6
    JC 0x004363f0                       ; 004363a7
        ;   XREF to: 004363f0 (CONDITIONAL_JUMP)  ; LAB_004363f0
    FLD float ptr [EBX + 0x10a90]       ; 004363a9
        ;   Label: LAB_004363a9
    FCOMP float ptr [ESP + 0xcc]        ; 004363af
    FNSTSW AX                           ; 004363b6
    SAHF                                ; 004363b8
    JBE 0x004363c8                      ; 004363b9
        ;   XREF to: 004363c8 (CONDITIONAL_JUMP)  ; LAB_004363c8
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004363bb
    MOV dword ptr [EBX + 0x10a90],EAX   ; 004363c2
    FLD float ptr [ESP + 0xc]           ; 004363c8
        ;   Label: LAB_004363c8
    FCOMP double ptr [0x005cdc15]       ; 004363cc | DAT_005cdc15
    FNSTSW AX                           ; 004363d2
    SAHF                                ; 004363d4
    JNC 0x004363ff                      ; 004363d5
        ;   XREF to: 004363ff (CONDITIONAL_JUMP)  ; LAB_004363ff
    CMP dword ptr [ESP + 0xc4],0x1      ; 004363d7
    JZ 0x004363ff                       ; 004363df
        ;   XREF to: 004363ff (CONDITIONAL_JUMP)  ; LAB_004363ff
    MOV dword ptr [EBX + 0x10a68],0x1   ; 004363e1
    JMP 0x004360f1                      ; 004363eb
        ;   XREF to: 004360f1 (UNCONDITIONAL_JUMP)  ; LAB_004360f1
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004363f0
        ;   Label: LAB_004363f0
    MOV dword ptr [EBX + 0x10a90],EAX   ; 004363f7
    JMP 0x004363a9                      ; 004363fd
        ;   XREF to: 004363a9 (UNCONDITIONAL_JUMP)  ; LAB_004363a9
    MOV dword ptr [EBX + 0x10a70],0x1   ; 004363ff
        ;   Label: LAB_004363ff
    MOV dword ptr [EBX + 0x10a68],0x1   ; 00436409
    JMP 0x004360f1                      ; 00436413
        ;   XREF to: 004360f1 (UNCONDITIONAL_JUMP)  ; LAB_004360f1

