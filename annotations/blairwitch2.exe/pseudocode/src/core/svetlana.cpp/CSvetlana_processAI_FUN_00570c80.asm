; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_svetlana_cpp_CSvetlana_processAI_FUN_00570c80(CSvetlana *this_ptr,float delta_time)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   core_svetlana.cpp_CSvetlana_process_FUN_00570510 at 0057094c
;
; Referenced Globals:
;   undefined4 DAT_005ec31b
;   undefined4 DAT_005ec323
;   undefined4 DAT_005ec32b
;   undefined4 DAT_005ec333
;   undefined4 DAT_005ec33b
;   undefined4 DAT_005ec343
;   undefined4 DAT_005ec34b
;   undefined4 DAT_005ec34f
;   undefined4 DAT_01cedef4
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_charactr.cpp_FUN_0042abe0
;   core_hero.cpp_FUN_004d00c0
;   core_motion.cpp_FUN_005035c0
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650
;   core_path.cpp_getPathMap_FUN_00513ea0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570c80
        ;   Label: core_svetlana.cpp_CSvetlana_processAI_FUN_00570c80
    PUSH ESI                            ; 00570c81
    PUSH EDI                            ; 00570c82
    PUSH EBP                            ; 00570c83
    MOV EBP,ESP                         ; 00570c84
    SUB ESP,0xe0                        ; 00570c86
    AND ESP,0xfffffff8                  ; 00570c8c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00570c8f
    MOV ECX,0x3e800000                  ; 00570c92
    MOV ESI,0x3f490fdb                  ; 00570c97
    MOV EAX,[0x01cedef4]                ; 00570c9c | DAT_01cedef4
    PUSH 0x34                           ; 00570ca1
    XOR EDX,EDX                         ; 00570ca3
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 00570ca5
    PUSH EDX                            ; 00570cac
    MOV dword ptr [ESP + 0xc8],EAX      ; 00570cad
    LEA EAX,[EBX + 0x10a68]             ; 00570cb4
    MOV dword ptr [ESP + 0xd0],EDX      ; 00570cba
    PUSH EAX                            ; 00570cc1
    MOV dword ptr [ESP + 0xd8],ECX      ; 00570cc2
    MOV dword ptr [ESP + 0xc8],ESI      ; 00570cc9
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00570cd0
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV EDI,dword ptr [EBX + 0x25638]   ; 00570cd5
    ADD ESP,0xc                         ; 00570cdb
    TEST EDI,EDI                        ; 00570cde
    JZ 0x0057119b                       ; 00570ce0
        ;   XREF to: 0057119b (CONDITIONAL_JUMP)  ; LAB_0057119b
    LEA EAX,[EBX + 0x20]                ; 00570ce6
    LEA EDI,[ESP + 0x14]                ; 00570ce9
    MOV ESI,dword ptr [0x01cedef4]      ; 00570ced | DAT_01cedef4
    FLD float ptr [EAX]                 ; 00570cf3
    FLD float ptr [EAX + 0x4]           ; 00570cf5
    MOV ESI,dword ptr [ESI*0x4 + 0x1cedee4] ; 00570cf8
    FLD float ptr [EAX + 0x8]           ; 00570cff
    FXCH ST2                            ; 00570d02
    FSUB float ptr [ESI + 0x20]         ; 00570d04
    FXCH                                ; 00570d07
    FSUB float ptr [ESI + 0x24]         ; 00570d09
    FXCH ST2                            ; 00570d0c
    FSUB float ptr [ESI + 0x28]         ; 00570d0e
    FXCH                                ; 00570d11
    FSTP float ptr [ESP + 0x68]         ; 00570d13
    FXCH                                ; 00570d17
    FSTP float ptr [ESP + 0x6c]         ; 00570d19
    LEA ESI,[ESP + 0x68]                ; 00570d1d
    FSTP float ptr [ESP + 0x70]         ; 00570d21
    MOVSD ES:EDI,ESI                    ; 00570d25
    MOVSD ES:EDI,ESI                    ; 00570d26
    MOVSD ES:EDI,ESI                    ; 00570d27
    FLD float ptr [ESP + 0x18]          ; 00570d28
    FMUL ST0                            ; 00570d2c
    FLD float ptr [ESP + 0x14]          ; 00570d2e
    FMUL ST0                            ; 00570d32
    FADDP                               ; 00570d34
    FLD float ptr [ESP + 0x1c]          ; 00570d36
    FMUL ST0                            ; 00570d3a
    FADDP                               ; 00570d3c
    FSQRT                               ; 00570d3e
    MOV EAX,dword ptr [EBX + 0x25638]   ; 00570d40
    FSTP float ptr [ESP + 0xd4]         ; 00570d46
    CMP EAX,0x3                         ; 00570d4d
    JNZ 0x00570d5b                      ; 00570d50
        ;   XREF to: 00570d5b (CONDITIONAL_JUMP)  ; LAB_00570d5b
    XOR EDX,EDX                         ; 00570d52
    MOV dword ptr [ESP + 0xd4],EDX      ; 00570d54
    MOV EAX,[0x01cedef4]                ; 00570d5b | DAT_01cedef4
        ;   Label: LAB_00570d5b
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 00570d60
    MOV ECX,0x41a00000                  ; 00570d67
    PUSH EAX                            ; 00570d6c
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 00570d6d
    MOV dword ptr [ESP + 0xbc],ECX      ; 00570d73
    CALL dword ptr [ESI + 0x154]        ; 00570d7a
    ADD ESP,0x4                         ; 00570d80
    TEST EAX,EAX                        ; 00570d83
    JZ 0x00570d92                       ; 00570d85
        ;   XREF to: 00570d92 (CONDITIONAL_JUMP)  ; LAB_00570d92
    MOV dword ptr [ESP + 0xb8],0x41f00000 ; 00570d87
    FLD float ptr [ESP + 0xd4]          ; 00570d92
        ;   Label: LAB_00570d92
    FCOMP float ptr [ESP + 0xb8]        ; 00570d99
    FNSTSW AX                           ; 00570da0
    SAHF                                ; 00570da2
    JNC 0x00570e04                      ; 00570da3
        ;   XREF to: 00570e04 (CONDITIONAL_JUMP)  ; LAB_00570e04
    MOV EDI,dword ptr [EBX + 0x25638]   ; 00570da5
    CMP EDI,0x2                         ; 00570dab
    JNZ 0x005711a2                      ; 00570dae
        ;   XREF to: 005711a2 (CONDITIONAL_JUMP)  ; LAB_005711a2
    LEA EAX,[ESP + 0xa4]                ; 00570db4
        ;   Label: LAB_00570db4
    PUSH EAX                            ; 00570dbb
    MOV EDX,0x461c3f9a                  ; 00570dbc
    PUSH EBX                            ; 00570dc1
    MOV dword ptr [ESP + 0xac],EDX      ; 00570dc2
    CALL core_hero.cpp_FUN_004d00c0     ; 00570dc9
        ;   XREF to: 004d00c0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004d00c0()
    MOV ESI,EAX                         ; 00570dce
    ADD ESP,0x8                         ; 00570dd0
    TEST EAX,EAX                        ; 00570dd3
    JZ 0x005711b0                       ; 00570dd5
        ;   XREF to: 005711b0 (CONDITIONAL_JUMP)  ; LAB_005711b0
    FLD float ptr [ESP + 0xa4]          ; 00570ddb
    FCOMP float ptr [ESP + 0xb8]        ; 00570de2
    FNSTSW AX                           ; 00570de9
    SAHF                                ; 00570deb
    JNC 0x005711b0                      ; 00570dec
        ;   XREF to: 005711b0 (CONDITIONAL_JUMP)  ; LAB_005711b0
    MOV dword ptr [ESP + 0xc0],ESI      ; 00570df2
    MOV dword ptr [ESP + 0xc8],0x1      ; 00570df9
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00570e04
        ;   Label: LAB_00570e04
    LEA EDI,[ESP + 0x50]                ; 00570e0b
    LEA EDX,[ESP + 0x50]                ; 00570e0f
    LEA ESI,[EBX + 0x20]                ; 00570e13
    FLD float ptr [EAX + 0x24]          ; 00570e16
    FLD float ptr [EAX + 0x28]          ; 00570e19
    FLD float ptr [EAX + 0x20]          ; 00570e1c
    LEA EAX,[ESP + 0x14]                ; 00570e1f
    FSUB float ptr [ESI]                ; 00570e23
    FXCH ST2                            ; 00570e25
    FSUB float ptr [ESI + 0x4]          ; 00570e27
    FXCH                                ; 00570e2a
    FSUB float ptr [ESI + 0x8]          ; 00570e2c
    FXCH ST2                            ; 00570e2f
    FSTP float ptr [ESP + 0x98]         ; 00570e31
    FSTP float ptr [ESP + 0x9c]         ; 00570e38
    LEA ESI,[ESP + 0x98]                ; 00570e3f
    FSTP float ptr [ESP + 0xa0]         ; 00570e46
    MOVSD ES:EDI,ESI                    ; 00570e4d
    MOVSD ES:EDI,ESI                    ; 00570e4e
    MOVSD ES:EDI,ESI                    ; 00570e4f
    CMP EAX,EDX                         ; 00570e50
    JZ 0x00570e6c                       ; 00570e52
        ;   XREF to: 00570e6c (CONDITIONAL_JUMP)  ; LAB_00570e6c
    MOV EAX,dword ptr [ESP + 0x50]      ; 00570e54
    MOV dword ptr [ESP + 0x14],EAX      ; 00570e58
    MOV EAX,dword ptr [ESP + 0x54]      ; 00570e5c
    MOV dword ptr [ESP + 0x18],EAX      ; 00570e60
    MOV EAX,dword ptr [ESP + 0x58]      ; 00570e64
    MOV dword ptr [ESP + 0x1c],EAX      ; 00570e68
    FLD float ptr [ESP + 0x18]          ; 00570e6c
        ;   Label: LAB_00570e6c
    FMUL ST0                            ; 00570e70
    FLD float ptr [ESP + 0x14]          ; 00570e72
    FMUL ST0                            ; 00570e76
    FADDP                               ; 00570e78
    FLD float ptr [ESP + 0x1c]          ; 00570e7a
    FMUL ST0                            ; 00570e7e
    FADDP                               ; 00570e80
    FSQRT                               ; 00570e82
    MOV dword ptr [EBX + 0x2578],0x0    ; 00570e84
    FSTP float ptr [ESP + 0xd0]         ; 00570e8e
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00570e95
    FLD float ptr [ESP + 0xd0]          ; 00570e9c
    MOV dword ptr [ESP + 0x10],EAX      ; 00570ea3
    FCOMP double ptr [0x005ec31b]       ; 00570ea7 | DAT_005ec31b
    FNSTSW AX                           ; 00570ead
    SAHF                                ; 00570eaf
    JNC 0x0057128a                      ; 00570eb0
        ;   XREF to: 0057128a (CONDITIONAL_JUMP)  ; LAB_0057128a
    MOV ECX,dword ptr [ESP + 0xc8]      ; 00570eb6
    LEA EAX,[EBX + 0x2b4]               ; 00570ebd
    CMP ECX,0x1                         ; 00570ec3
    JNZ 0x005711f9                      ; 00570ec6
        ;   XREF to: 005711f9 (CONDITIONAL_JUMP)  ; LAB_005711f9
    CMP dword ptr [EBX + 0x25640],0x0   ; 00570ecc
    JNZ 0x005711cc                      ; 00570ed3
        ;   XREF to: 005711cc (CONDITIONAL_JUMP)  ; LAB_005711cc
    MOV dword ptr [EBX + 0x10a80],ECX   ; 00570ed9
    MOV dword ptr [EBX + 0x303c],0x0    ; 00570edf
        ;   Label: LAB_00570edf
    CMP dword ptr [ESP + 0xc8],0x1      ; 00570ee9
        ;   Label: LAB_00570ee9
    JNZ 0x00570fcd                      ; 00570ef1
        ;   XREF to: 00570fcd (CONDITIONAL_JUMP)  ; LAB_00570fcd
    LEA EAX,[ESP + 0x14]                ; 00570ef7
    PUSH EAX                            ; 00570efb
    LEA ESI,[ESP + 0x3c]                ; 00570efc
    LEA EDI,[ESP + 0x90]                ; 00570f00
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 00570f07
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x3c]                ; 00570f0c
    ADD ESP,0x4                         ; 00570f10
    MOVSD ES:EDI,ESI                    ; 00570f13
    MOVSD ES:EDI,ESI                    ; 00570f14
    MOVSD ES:EDI,ESI                    ; 00570f15
    FLD float ptr [ESP + 0x90]          ; 00570f16
    FSUB float ptr [EBX + 0x34]         ; 00570f1d
    SUB ESP,0x4                         ; 00570f20
    FSTP float ptr [ESP]                ; 00570f23
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 00570f26
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0()
    MOV dword ptr [ESP + 0xe0],EAX      ; 00570f2b
    FLD float ptr [ESP + 0xe0]          ; 00570f32
    FMUL float ptr [0x005ec323]         ; 00570f39 | DAT_005ec323
    ADD ESP,0x4                         ; 00570f3f
    FMUL double ptr [0x005ec32b]        ; 00570f42 | DAT_005ec32b
    FLD float ptr [ESP + 0xcc]          ; 00570f48
    FCHS                                ; 00570f4f
    FSTP float ptr [ESP + 0xa8]         ; 00570f51
    FST float ptr [EBX + 0x10a90]       ; 00570f58
    FCOMP float ptr [ESP + 0xa8]        ; 00570f5e
    FNSTSW AX                           ; 00570f65
    SAHF                                ; 00570f67
    JNC 0x00570f77                      ; 00570f68
        ;   XREF to: 00570f77 (CONDITIONAL_JUMP)  ; LAB_00570f77
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00570f6a
    MOV dword ptr [EBX + 0x10a90],EAX   ; 00570f71
    FLD float ptr [EBX + 0x10a90]       ; 00570f77
        ;   Label: LAB_00570f77
    FCOMP float ptr [ESP + 0xcc]        ; 00570f7d
    FNSTSW AX                           ; 00570f84
    SAHF                                ; 00570f86
    JBE 0x00570f96                      ; 00570f87
        ;   XREF to: 00570f96 (CONDITIONAL_JUMP)  ; LAB_00570f96
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00570f89
    MOV dword ptr [EBX + 0x10a90],EAX   ; 00570f90
    FLD float ptr [EBX + 0x10a90]       ; 00570f96
        ;   Label: LAB_00570f96
    FST double ptr [ESP + 0x8]          ; 00570f9c
    FCOMP double ptr [0x005ec33b]       ; 00570fa0 | DAT_005ec33b
    FNSTSW AX                           ; 00570fa6
    SAHF                                ; 00570fa8
    JBE 0x00570fcd                      ; 00570fa9
        ;   XREF to: 00570fcd (CONDITIONAL_JUMP)  ; LAB_00570fcd
    FLD double ptr [ESP + 0x8]          ; 00570fab
    FCOMP double ptr [0x005ec343]       ; 00570faf | DAT_005ec343
    FNSTSW AX                           ; 00570fb5
    SAHF                                ; 00570fb7
    JNC 0x00570fcd                      ; 00570fb8
        ;   XREF to: 00570fcd (CONDITIONAL_JUMP)  ; LAB_00570fcd
    CMP dword ptr [EBX + 0x10a74],0x0   ; 00570fba
    JZ 0x00570fcd                       ; 00570fc1
        ;   XREF to: 00570fcd (CONDITIONAL_JUMP)  ; LAB_00570fcd
    MOV dword ptr [EBX + 0x10a90],0x0   ; 00570fc3
    FLDZ                                ; 00570fcd
        ;   Label: LAB_00570fcd
    FLD float ptr [EBX + 0x2578]        ; 00570fcf
    FSTP double ptr [ESP]               ; 00570fd5
    FCOMP double ptr [ESP]              ; 00570fd8
    FNSTSW AX                           ; 00570fdb
    SAHF                                ; 00570fdd
    JNC 0x00571433                      ; 00570fde
        ;   XREF to: 00571433 (CONDITIONAL_JUMP)  ; LAB_00571433
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00570fe4
    MOV dword ptr [EBX + 0x2578],0x0    ; 00570feb
    MOV dword ptr [EBX + 0x10a90],EAX   ; 00570ff5
    MOV ESI,dword ptr [ESP + 0xc0]      ; 00570ffb
        ;   Label: LAB_00570ffb
    LEA EDI,[ESP + 0x5c]                ; 00571002
    LEA EAX,[EBX + 0x20]                ; 00571006
    FLD float ptr [ESI + 0x24]          ; 00571009
    FLD float ptr [ESI + 0x28]          ; 0057100c
    FLD float ptr [ESI + 0x20]          ; 0057100f
    LEA ESI,[ESP + 0x74]                ; 00571012
    FSUB float ptr [EAX]                ; 00571016
    FXCH ST2                            ; 00571018
    FSUB float ptr [EAX + 0x4]          ; 0057101a
    FXCH                                ; 0057101d
    FSUB float ptr [EAX + 0x8]          ; 0057101f
    FXCH ST2                            ; 00571022
    FSTP float ptr [ESP + 0x74]         ; 00571024
    FSTP float ptr [ESP + 0x78]         ; 00571028
    FSTP float ptr [ESP + 0x7c]         ; 0057102c
    MOVSD ES:EDI,ESI                    ; 00571030
    MOVSD ES:EDI,ESI                    ; 00571031
    MOVSD ES:EDI,ESI                    ; 00571032
    LEA EAX,[ESP + 0x14]                ; 00571033
    LEA ESI,[ESP + 0x5c]                ; 00571037
    CMP EAX,ESI                         ; 0057103b
    JZ 0x00571057                       ; 0057103d
        ;   XREF to: 00571057 (CONDITIONAL_JUMP)  ; LAB_00571057
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0057103f
    MOV dword ptr [ESP + 0x14],EAX      ; 00571043
    MOV EAX,dword ptr [ESP + 0x60]      ; 00571047
    MOV dword ptr [ESP + 0x18],EAX      ; 0057104b
    MOV EAX,dword ptr [ESP + 0x64]      ; 0057104f
    MOV dword ptr [ESP + 0x1c],EAX      ; 00571053
    LEA EAX,[ESP + 0x14]                ; 00571057
        ;   Label: LAB_00571057
    PUSH EAX                            ; 0057105b
    LEA ESI,[ESP + 0x48]                ; 0057105c
    LEA EDI,[ESP + 0x84]                ; 00571060
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 00571067
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x48]                ; 0057106c
    ADD ESP,0x4                         ; 00571070
    MOVSD ES:EDI,ESI                    ; 00571073
    MOVSD ES:EDI,ESI                    ; 00571074
    MOVSD ES:EDI,ESI                    ; 00571075
    LEA EAX,[ESP + 0x14]                ; 00571076
    LEA ESI,[ESP + 0x80]                ; 0057107a
    CMP EAX,ESI                         ; 00571081
    JZ 0x005710a6                       ; 00571083
        ;   XREF to: 005710a6 (CONDITIONAL_JUMP)  ; LAB_005710a6
    MOV EAX,dword ptr [ESP + 0x80]      ; 00571085
    MOV dword ptr [ESP + 0x14],EAX      ; 0057108c
    MOV EAX,dword ptr [ESP + 0x84]      ; 00571090
    MOV dword ptr [ESP + 0x18],EAX      ; 00571097
    MOV EAX,dword ptr [ESP + 0x88]      ; 0057109b
    MOV dword ptr [ESP + 0x1c],EAX      ; 005710a2
    FLD float ptr [ESP + 0x18]          ; 005710a6
        ;   Label: LAB_005710a6
    FSUB float ptr [EBX + 0x34]         ; 005710aa
    SUB ESP,0x4                         ; 005710ad
    FSTP float ptr [ESP]                ; 005710b0
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 005710b3
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0()
    MOV dword ptr [ESP + 0xe0],EAX      ; 005710b8
    FLD float ptr [ESP + 0xe0]          ; 005710bf
    ADD ESP,0x4                         ; 005710c6
    FST float ptr [ESP + 0x30]          ; 005710c9
    FCOMP float ptr [ESP + 0xbc]        ; 005710cd
    FNSTSW AX                           ; 005710d4
    SAHF                                ; 005710d6
    JBE 0x005710e4                      ; 005710d7
        ;   XREF to: 005710e4 (CONDITIONAL_JUMP)  ; LAB_005710e4
    MOV EAX,dword ptr [ESP + 0xbc]      ; 005710d9
    MOV dword ptr [ESP + 0x30],EAX      ; 005710e0
    FLD float ptr [ESP + 0x30]          ; 005710e4
        ;   Label: LAB_005710e4
    FLD float ptr [ESP + 0xbc]          ; 005710e8
    FCHS                                ; 005710ef
    FSTP float ptr [ESP + 0xd8]         ; 005710f1
    FCOMP float ptr [ESP + 0xd8]        ; 005710f8
    FNSTSW AX                           ; 005710ff
    SAHF                                ; 00571101
    JNC 0x0057110f                      ; 00571102
        ;   XREF to: 0057110f (CONDITIONAL_JUMP)  ; LAB_0057110f
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00571104
    MOV dword ptr [ESP + 0x30],EAX      ; 0057110b
    FLD float ptr [EBP + 0x18]          ; 0057110f
        ;   Label: LAB_0057110f
    FLD float ptr [ESP + 0x30]          ; 00571112
    FSUB float ptr [EBX + 0x9acb0]      ; 00571116
    FXCH                                ; 0057111c
    FMUL float ptr [0x005ec34b]         ; 0057111e | DAT_005ec34b
    FXCH                                ; 00571124
    FSTP float ptr [ESP + 0xc4]         ; 00571126
    FSTP float ptr [ESP + 0xb0]         ; 0057112d
    FLD float ptr [ESP + 0xc4]          ; 00571134
    FCOMP float ptr [ESP + 0xb0]        ; 0057113b
    FNSTSW AX                           ; 00571142
    SAHF                                ; 00571144
    JBE 0x00571155                      ; 00571145
        ;   XREF to: 00571155 (CONDITIONAL_JUMP)  ; LAB_00571155
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00571147
    MOV dword ptr [ESP + 0xc4],EAX      ; 0057114e
    FLD float ptr [EBP + 0x18]          ; 00571155
        ;   Label: LAB_00571155
    FMUL float ptr [0x005ec34f]         ; 00571158 | DAT_005ec34f
    FLD float ptr [ESP + 0xc4]          ; 0057115e
    FXCH                                ; 00571165
    FSTP float ptr [ESP + 0xac]         ; 00571167
    FCOMP float ptr [ESP + 0xac]        ; 0057116e
    FNSTSW AX                           ; 00571175
    SAHF                                ; 00571177
    JNC 0x00571188                      ; 00571178
        ;   XREF to: 00571188 (CONDITIONAL_JUMP)  ; LAB_00571188
    MOV EAX,dword ptr [ESP + 0xac]      ; 0057117a
    MOV dword ptr [ESP + 0xc4],EAX      ; 00571181
    FLD float ptr [EBX + 0x9acb0]       ; 00571188
        ;   Label: LAB_00571188
    FADD float ptr [ESP + 0xc4]         ; 0057118e
    FSTP float ptr [EBX + 0x9acb0]      ; 00571195
    MOV ESP,EBP                         ; 0057119b
        ;   Label: LAB_0057119b
    POP EBP                             ; 0057119d
    POP EDI                             ; 0057119e
    POP ESI                             ; 0057119f
    POP EBX                             ; 005711a0
    RET                                 ; 005711a1
    CMP EDI,0x3                         ; 005711a2
        ;   Label: LAB_005711a2
    JZ 0x00570db4                       ; 005711a5
        ;   XREF to: 00570db4 (CONDITIONAL_JUMP)  ; LAB_00570db4
    JMP 0x00570e04                      ; 005711ab
        ;   XREF to: 00570e04 (UNCONDITIONAL_JUMP)  ; LAB_00570e04
    CMP dword ptr [EBX + 0x25640],0x0   ; 005711b0
        ;   Label: LAB_005711b0
    JZ 0x00570e04                       ; 005711b7
        ;   XREF to: 00570e04 (CONDITIONAL_JUMP)  ; LAB_00570e04
    MOV dword ptr [EBX + 0x10a80],0x1   ; 005711bd
    JMP 0x00570e04                      ; 005711c7
        ;   XREF to: 00570e04 (UNCONDITIONAL_JUMP)  ; LAB_00570e04
    PUSH EAX                            ; 005711cc
        ;   Label: LAB_005711cc
    CALL core_motion.cpp_FUN_005035c0   ; 005711cd
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005711d2
    ADD ESP,0x4                         ; 005711d5
    CMP EAX,0x2                         ; 005711d8
    JZ 0x00570edf                       ; 005711db
        ;   XREF to: 00570edf (CONDITIONAL_JUMP)  ; LAB_00570edf
    CMP EAX,0x1                         ; 005711e1
    JZ 0x00570edf                       ; 005711e4
        ;   XREF to: 00570edf (CONDITIONAL_JUMP)  ; LAB_00570edf
    MOV dword ptr [EBX + 0x10a74],0x1   ; 005711ea
    JMP 0x00570edf                      ; 005711f4
        ;   XREF to: 00570edf (UNCONDITIONAL_JUMP)  ; LAB_00570edf
    PUSH EAX                            ; 005711f9
        ;   Label: LAB_005711f9
    CALL core_motion.cpp_FUN_005035c0   ; 005711fa
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005711ff
    ADD ESP,0x4                         ; 00571202
    CMP EAX,0xa                         ; 00571205
    JNZ 0x0057121d                      ; 00571208
        ;   XREF to: 0057121d (CONDITIONAL_JUMP)  ; LAB_0057121d
    CMP dword ptr [EBX + 0x25640],0x0   ; 0057120a
    JZ 0x0057121d                       ; 00571211
        ;   XREF to: 0057121d (CONDITIONAL_JUMP)  ; LAB_0057121d
    MOV dword ptr [EBX + 0x10a80],0x1   ; 00571213
    MOV EAX,[0x01cedef4]                ; 0057121d | DAT_01cedef4
        ;   Label: LAB_0057121d
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 00571222
    PUSH EAX                            ; 00571229
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0057122a
    CALL dword ptr [EDX + 0x154]        ; 00571230
    ADD ESP,0x4                         ; 00571236
    TEST EAX,EAX                        ; 00571239
    JNZ 0x00570ee9                      ; 0057123b
        ;   XREF to: 00570ee9 (CONDITIONAL_JUMP)  ; LAB_00570ee9
    PUSH dword ptr [EBP + 0x18]         ; 00571241
    PUSH EBX                            ; 00571244
    CALL core_charactr.cpp_FUN_0042abe0 ; 00571245
        ;   XREF to: 0042abe0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042abe0()
    ADD ESP,0x8                         ; 0057124a
    CMP EAX,0x1                         ; 0057124d
    JC 0x00570ee9                       ; 00571250
        ;   XREF to: 00570ee9 (CONDITIONAL_JUMP)  ; LAB_00570ee9
    JA 0x00571280                       ; 00571256
        ;   XREF to: 00571280 (CONDITIONAL_JUMP)  ; LAB_00571280
    MOV dword ptr [EBX + 0x10a68],0x1   ; 00571258
    JMP 0x00570ee9                      ; 00571262
        ;   XREF to: 00570ee9 (UNCONDITIONAL_JUMP)  ; LAB_00570ee9
    MOV dword ptr [EBX + 0x10a70],0x1   ; 00571267
        ;   Label: LAB_00571267
    MOV dword ptr [EBX + 0x10a68],0x1   ; 00571271
    JMP 0x00570ee9                      ; 0057127b
        ;   XREF to: 00570ee9 (UNCONDITIONAL_JUMP)  ; LAB_00570ee9
    CMP EAX,0x2                         ; 00571280
        ;   Label: LAB_00571280
    JZ 0x00571267                       ; 00571283
        ;   XREF to: 00571267 (CONDITIONAL_JUMP)  ; LAB_00571267
    JMP 0x00570ee9                      ; 00571285
        ;   XREF to: 00570ee9 (UNCONDITIONAL_JUMP)  ; LAB_00570ee9
    MOV EDI,dword ptr [ESP + 0xc8]      ; 0057128a
        ;   Label: LAB_0057128a
    XOR ESI,ESI                         ; 00571291
    TEST EDI,EDI                        ; 00571293
    JNZ 0x005713fd                      ; 00571295
        ;   XREF to: 005713fd (CONDITIONAL_JUMP)  ; LAB_005713fd
    MOV EAX,[0x01cedef4]                ; 0057129b | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 005712a0
    PUSH EAX                            ; 005712a7
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 005712a8
    CALL dword ptr [ESI + 0xcc]         ; 005712ae
    MOV ESI,EAX                         ; 005712b4
    MOV EAX,[0x01cedef4]                ; 005712b6 | DAT_01cedef4
    ADD ESP,0x4                         ; 005712bb
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 005712be
    PUSH EAX                            ; 005712c5
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 005712c6
    CALL dword ptr [EDX + 0x154]        ; 005712cc
    ADD ESP,0x4                         ; 005712d2
    TEST EAX,EAX                        ; 005712d5
    JZ 0x005713dc                       ; 005712d7
        ;   XREF to: 005713dc (CONDITIONAL_JUMP)  ; LAB_005713dc
    TEST ESI,ESI                        ; 005712dd
        ;   Label: LAB_005712dd
    JNZ 0x005712f6                      ; 005712df
        ;   XREF to: 005712f6 (CONDITIONAL_JUMP)  ; LAB_005712f6
    MOV EAX,dword ptr [ESP + 0xc0]      ; 005712e1
    ADD EAX,0x20                        ; 005712e8
    PUSH EAX                            ; 005712eb
    CALL core_path.cpp_getPathMap_FUN_00513ea0 ; 005712ec
        ;   XREF to: 00513ea0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_00513ea0(CLocation * location)
    ADD ESP,0x4                         ; 005712f1
    MOV ESI,EAX                         ; 005712f4
    MOV EAX,dword ptr [EBX + 0x6c]      ; 005712f6
        ;   Label: LAB_005712f6
    PUSH EAX                            ; 005712f9
    LEA EAX,[ESP + 0x24]                ; 005712fa
    PUSH EAX                            ; 005712fe
    LEA EAX,[EBX + 0x20]                ; 005712ff
    PUSH EAX                            ; 00571302
    PUSH ESI                            ; 00571303
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650 ; 00571304
        ;   XREF to: 00513650 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 00571309
    TEST EAX,EAX                        ; 0057130c
    JZ 0x00570fcd                       ; 0057130e
        ;   XREF to: 00570fcd (CONDITIONAL_JUMP)  ; LAB_00570fcd
    FLD float ptr [ESP + 0x24]          ; 00571314
    FSUB float ptr [EBX + 0x34]         ; 00571318
    SUB ESP,0x4                         ; 0057131b
    FSTP float ptr [ESP]                ; 0057131e
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 00571321
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0()
    MOV dword ptr [ESP + 0xe0],EAX      ; 00571326
    FLD float ptr [ESP + 0xe0]          ; 0057132d
    FMUL float ptr [0x005ec323]         ; 00571334 | DAT_005ec323
    ADD ESP,0x4                         ; 0057133a
    FMUL double ptr [0x005ec32b]        ; 0057133d | DAT_005ec32b
    FLD float ptr [ESP + 0xcc]          ; 00571343
    FCHS                                ; 0057134a
    FSTP float ptr [ESP + 0xb4]         ; 0057134c
    FST float ptr [EBX + 0x10a90]       ; 00571353
    FCOMP float ptr [ESP + 0xb4]        ; 00571359
    FNSTSW AX                           ; 00571360
    SAHF                                ; 00571362
    JC 0x00571408                       ; 00571363
        ;   XREF to: 00571408 (CONDITIONAL_JUMP)  ; LAB_00571408
    FLD float ptr [EBX + 0x10a90]       ; 00571369
        ;   Label: LAB_00571369
    FCOMP float ptr [ESP + 0xcc]        ; 0057136f
    FNSTSW AX                           ; 00571376
    SAHF                                ; 00571378
    JBE 0x00571388                      ; 00571379
        ;   XREF to: 00571388 (CONDITIONAL_JUMP)  ; LAB_00571388
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0057137b
    MOV dword ptr [EBX + 0x10a90],EAX   ; 00571382
    FLD float ptr [ESP + 0x10]          ; 00571388
        ;   Label: LAB_00571388
    FCOMP double ptr [0x005ec333]       ; 0057138c | DAT_005ec333
    FNSTSW AX                           ; 00571392
    SAHF                                ; 00571394
    JNC 0x0057141a                      ; 00571395
        ;   XREF to: 0057141a (CONDITIONAL_JUMP)  ; LAB_0057141a
    CMP dword ptr [ESP + 0xc8],0x1      ; 0057139b
    JZ 0x0057141a                       ; 005713a3
        ;   XREF to: 0057141a (CONDITIONAL_JUMP)  ; LAB_0057141a
    MOV dword ptr [EBX + 0x10a68],0x1   ; 005713a5
    JMP 0x00570fcd                      ; 005713af
        ;   XREF to: 00570fcd (UNCONDITIONAL_JUMP)  ; LAB_00570fcd
    MOV dword ptr [EBX + 0x10a68],0x1   ; 005713b4
        ;   Label: LAB_005713b4
    JMP 0x005712dd                      ; 005713be
        ;   XREF to: 005712dd (UNCONDITIONAL_JUMP)  ; LAB_005712dd
    MOV dword ptr [EBX + 0x10a70],0x1   ; 005713c3
        ;   Label: LAB_005713c3
    MOV dword ptr [EBX + 0x10a68],0x1   ; 005713cd
    JMP 0x005712dd                      ; 005713d7
        ;   XREF to: 005712dd (UNCONDITIONAL_JUMP)  ; LAB_005712dd
    PUSH dword ptr [EBP + 0x18]         ; 005713dc
        ;   Label: LAB_005713dc
    PUSH EBX                            ; 005713df
    CALL core_charactr.cpp_FUN_0042abe0 ; 005713e0
        ;   XREF to: 0042abe0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042abe0()
    ADD ESP,0x8                         ; 005713e5
    CMP EAX,0x1                         ; 005713e8
    JC 0x005712dd                       ; 005713eb
        ;   XREF to: 005712dd (CONDITIONAL_JUMP)  ; LAB_005712dd
    JBE 0x005713b4                      ; 005713f1
        ;   XREF to: 005713b4 (CONDITIONAL_JUMP)  ; LAB_005713b4
    CMP EAX,0x2                         ; 005713f3
    JZ 0x005713c3                       ; 005713f6
        ;   XREF to: 005713c3 (CONDITIONAL_JUMP)  ; LAB_005713c3
    JMP 0x005712dd                      ; 005713f8
        ;   XREF to: 005712dd (UNCONDITIONAL_JUMP)  ; LAB_005712dd
    MOV dword ptr [EBX + 0x303c],ESI    ; 005713fd
        ;   Label: LAB_005713fd
    JMP 0x005712dd                      ; 00571403
        ;   XREF to: 005712dd (UNCONDITIONAL_JUMP)  ; LAB_005712dd
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00571408
        ;   Label: LAB_00571408
    MOV dword ptr [EBX + 0x10a90],EAX   ; 0057140f
    JMP 0x00571369                      ; 00571415
        ;   XREF to: 00571369 (UNCONDITIONAL_JUMP)  ; LAB_00571369
    MOV dword ptr [EBX + 0x10a70],0x1   ; 0057141a
        ;   Label: LAB_0057141a
    MOV dword ptr [EBX + 0x10a68],0x1   ; 00571424
    JMP 0x00570fcd                      ; 0057142e
        ;   XREF to: 00570fcd (UNCONDITIONAL_JUMP)  ; LAB_00570fcd
    JBE 0x00570ffb                      ; 00571433
        ;   XREF to: 00570ffb (CONDITIONAL_JUMP)  ; LAB_00570ffb
        ;   Label: LAB_00571433
    FLD float ptr [ESP + 0xcc]          ; 00571439
    MOV dword ptr [EBX + 0x2578],0x0    ; 00571440
    FCHS                                ; 0057144a
    FSTP float ptr [EBX + 0x10a90]      ; 0057144c
    JMP 0x00570ffb                      ; 00571452
        ;   XREF to: 00570ffb (UNCONDITIONAL_JUMP)  ; LAB_00570ffb

