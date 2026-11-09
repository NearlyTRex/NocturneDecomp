; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_bugs_cpp_FUN_00422a00(undefined4 param_1,int *param_2,float param_3,float *param_4)
;
; Local Variables:
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
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
; XREF[2]:
;   core_bugs.cpp_FUN_004221c0 at 004222b9
;   core_bugs.cpp_FUN_00423050 at 004238ba
;
; Referenced Globals:
;   undefined4 DAT_005b786d
;   undefined4 DAT_005b7871
;   undefined4 DAT_005b7879
;   undefined4 DAT_005b7881
;   undefined4 DAT_005b7889
;   undefined4 DAT_005b788d
;   undefined4 DAT_005dcbc8
;   undefined4 DAT_005dcbd0
;
; Called Functions:
;   core_actor.cpp_FUN_0040ce40
;   core_actor.cpp_FUN_0040cfa0
;   core_bugs.cpp_FUN_00422070
;   core_vecdir.cpp_FUN_00576250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422a00
        ;   Label: core_bugs.cpp_FUN_00422a00
    PUSH ESI                            ; 00422a01
    PUSH EDI                            ; 00422a02
    PUSH EBP                            ; 00422a03
    MOV EBP,ESP                         ; 00422a04
    SUB ESP,0xd4                        ; 00422a06
    AND ESP,0xfffffff8                  ; 00422a0c
    MOV EBX,dword ptr [EBP + 0x18]      ; 00422a0f
    CMP dword ptr [EBX],0x0             ; 00422a12
    JNZ 0x00422f0d                      ; 00422a15
        ;   XREF to: 00422f0d (CONDITIONAL_JUMP)  ; LAB_00422f0d
    LEA EAX,[EBX + 0x20]                ; 00422a1b
    MOV dword ptr [ESP + 0xc0],EAX      ; 00422a1e
    LEA EAX,[EBX + 0x8]                 ; 00422a25
    MOV dword ptr [ESP + 0xb8],EAX      ; 00422a28
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00422a2f
    FLD float ptr [EAX]                 ; 00422a36
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00422a38
    FSUB float ptr [EAX]                ; 00422a3f
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00422a41
    FLD float ptr [EAX + 0x4]           ; 00422a48
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00422a4b
    FSUB float ptr [EAX + 0x4]          ; 00422a52
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00422a55
    LEA EDI,[ESP + 0x4]                 ; 00422a5c
    LEA ESI,[ESP + 0x7c]                ; 00422a60
    FLD float ptr [EAX + 0x8]           ; 00422a64
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00422a67
    FXCH ST2                            ; 00422a6e
    FSTP float ptr [ESP + 0x7c]         ; 00422a70
    FXCH                                ; 00422a74
    FSUB float ptr [EAX + 0x8]          ; 00422a76
    FXCH                                ; 00422a79
    FSTP float ptr [ESP + 0x80]         ; 00422a7b
    FSTP float ptr [ESP + 0x84]         ; 00422a82
    MOVSD ES:EDI,ESI                    ; 00422a89
    MOVSD ES:EDI,ESI                    ; 00422a8a
    MOVSD ES:EDI,ESI                    ; 00422a8b
    FLD float ptr [ESP + 0x8]           ; 00422a8c
    FMUL ST0                            ; 00422a90
    FLD float ptr [ESP + 0x4]           ; 00422a92
    FMUL ST0                            ; 00422a96
    FADDP                               ; 00422a98
    FLD float ptr [ESP + 0xc]           ; 00422a9a
    FMUL ST0                            ; 00422a9e
    FADDP                               ; 00422aa0
    FSQRT                               ; 00422aa2
    FSTP float ptr [ESP + 0x98]         ; 00422aa4
    MOV EAX,dword ptr [ESP + 0x98]      ; 00422aab
    FLD float ptr [ESP + 0x98]          ; 00422ab2
    MOV dword ptr [ESP],EAX             ; 00422ab9
    FCOMP float ptr [0x005dcbc8]        ; 00422abc | DAT_005dcbc8
    FNSTSW AX                           ; 00422ac2
    SAHF                                ; 00422ac4
    JNC 0x00422c36                      ; 00422ac5
        ;   XREF to: 00422c36 (CONDITIONAL_JUMP)  ; LAB_00422c36
    PUSH dword ptr [EBX + 0x10]         ; 00422acb
    MOV ECX,dword ptr [EBP + 0x14]      ; 00422ace
    PUSH dword ptr [EBX + 0x8]          ; 00422ad1
    PUSH ECX                            ; 00422ad4
    CALL core_bugs.cpp_FUN_00422070     ; 00422ad5
        ;   XREF to: 00422070 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_00422070()
    MOV dword ptr [ESP + 0xdc],EAX      ; 00422ada
    FLD float ptr [ESP + 0xdc]          ; 00422ae1
    ADD ESP,0xc                         ; 00422ae8
    MOV ESI,dword ptr [EBP + 0x20]      ; 00422aeb
    FSTP float ptr [EBX + 0xc]          ; 00422aee
    TEST ESI,ESI                        ; 00422af1
    JNZ 0x00422f16                      ; 00422af3
        ;   XREF to: 00422f16 (CONDITIONAL_JUMP)  ; LAB_00422f16
    FLD float ptr [0x005dcbc8]          ; 00422af9 | DAT_005dcbc8
    FLD ST0                             ; 00422aff
    FMUL float ptr [0x005b786d]         ; 00422b01 | DAT_005b786d
    FXCH                                ; 00422b07
    FMUL float ptr [0x005b7879]         ; 00422b09 | DAT_005b7879
    FXCH                                ; 00422b0f
    FLD double ptr [0x005b7871]         ; 00422b11 | DAT_005b7871
    FXCH                                ; 00422b17
    FMUL ST1                            ; 00422b19
    FXCH ST2                            ; 00422b1b
    FMULP                               ; 00422b1d
    FXCH                                ; 00422b1f
    FSTP float ptr [ESP + 0x94]         ; 00422b21
    PUSH dword ptr [ESP + 0x94]         ; 00422b28
    FSTP float ptr [ESP + 0xd0]         ; 00422b2f
    PUSH dword ptr [ESP + 0xd0]         ; 00422b36
    CALL core_actor.cpp_FUN_0040ce40    ; 00422b3d
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0xd8],EAX      ; 00422b42
    FLD float ptr [ESP + 0xd8]          ; 00422b49
    ADD ESP,0x8                         ; 00422b50
    PUSH dword ptr [ESP + 0x94]         ; 00422b53
    PUSH dword ptr [ESP + 0xd0]         ; 00422b5a
    FSTP float ptr [EBX + 0x20]         ; 00422b61
    CALL core_actor.cpp_FUN_0040ce40    ; 00422b64
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0xd8],EAX      ; 00422b69
    FLD float ptr [ESP + 0xd8]          ; 00422b70
    ADD ESP,0x8                         ; 00422b77
    FSTP float ptr [EBX + 0x28]         ; 00422b7a
    PUSH dword ptr [EBX + 0x28]         ; 00422b7d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00422b80
    PUSH dword ptr [EBX + 0x20]         ; 00422b83
    PUSH EAX                            ; 00422b86
    CALL core_bugs.cpp_FUN_00422070     ; 00422b87
        ;   XREF to: 00422070 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_00422070()
    MOV dword ptr [ESP + 0xdc],EAX      ; 00422b8c
    FLD float ptr [ESP + 0xdc]          ; 00422b93
    ADD ESP,0xc                         ; 00422b9a
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00422b9d
    FSTP float ptr [EBX + 0x24]         ; 00422ba4
    FLD float ptr [EAX]                 ; 00422ba7
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00422ba9
    FSUB float ptr [EAX]                ; 00422bb0
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00422bb2
    FLD float ptr [EAX + 0x4]           ; 00422bb9
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00422bbc
    LEA EDI,[ESP + 0x70]                ; 00422bc3
    FSUB float ptr [EAX + 0x4]          ; 00422bc7
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00422bca
    LEA ESI,[ESP + 0x1c]                ; 00422bd1
    LEA EDX,[ESP + 0x70]                ; 00422bd5
    FLD float ptr [EAX + 0x8]           ; 00422bd9
    MOV EAX,dword ptr [ESP + 0xb8]      ; 00422bdc
    FXCH ST2                            ; 00422be3
    FSTP float ptr [ESP + 0x1c]         ; 00422be5
    FXCH                                ; 00422be9
    FSUB float ptr [EAX + 0x8]          ; 00422beb
    FXCH                                ; 00422bee
    FSTP float ptr [ESP + 0x20]         ; 00422bf0
    FSTP float ptr [ESP + 0x24]         ; 00422bf4
    LEA EAX,[ESP + 0x4]                 ; 00422bf8
    MOVSD ES:EDI,ESI                    ; 00422bfc
    MOVSD ES:EDI,ESI                    ; 00422bfd
    MOVSD ES:EDI,ESI                    ; 00422bfe
    CMP EAX,EDX                         ; 00422bff
    JZ 0x00422c1b                       ; 00422c01
        ;   XREF to: 00422c1b (CONDITIONAL_JUMP)  ; LAB_00422c1b
    MOV EAX,dword ptr [ESP + 0x70]      ; 00422c03
    MOV dword ptr [ESP + 0x4],EAX       ; 00422c07
    MOV EAX,dword ptr [ESP + 0x74]      ; 00422c0b
    MOV dword ptr [ESP + 0x8],EAX       ; 00422c0f
    MOV EAX,dword ptr [ESP + 0x78]      ; 00422c13
    MOV dword ptr [ESP + 0xc],EAX       ; 00422c17
    FLD float ptr [ESP + 0x8]           ; 00422c1b
        ;   Label: LAB_00422c1b
    FMUL ST0                            ; 00422c1f
    FLD float ptr [ESP + 0x4]           ; 00422c21
    FMUL ST0                            ; 00422c25
    FADDP                               ; 00422c27
    FLD float ptr [ESP + 0xc]           ; 00422c29
    FMUL ST0                            ; 00422c2d
    FADDP                               ; 00422c2f
    FSQRT                               ; 00422c31
    FSTP float ptr [ESP]                ; 00422c33
    LEA EAX,[ESP + 0x4]                 ; 00422c36
        ;   Label: LAB_00422c36
    PUSH EAX                            ; 00422c3a
    LEA ESI,[ESP + 0x68]                ; 00422c3b
    LEA EDI,[ESP + 0x5c]                ; 00422c3f
    CALL core_vecdir.cpp_FUN_00576250   ; 00422c43
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_00576250()
    ADD ESP,0x4                         ; 00422c48
    LEA ESI,[ESP + 0x64]                ; 00422c4b
    FLD float ptr [ESP]                 ; 00422c4f
    FLDZ                                ; 00422c52
    MOVSD ES:EDI,ESI                    ; 00422c54
    MOVSD ES:EDI,ESI                    ; 00422c55
    MOVSD ES:EDI,ESI                    ; 00422c56
    FCOMPP                              ; 00422c57
    FNSTSW AX                           ; 00422c59
    SAHF                                ; 00422c5b
    JNC 0x00422fe0                      ; 00422c5c
        ;   XREF to: 00422fe0 (CONDITIONAL_JUMP)  ; LAB_00422fe0
    FLD float ptr [0x005dcbd0]          ; 00422c62 | DAT_005dcbd0
    FMUL float ptr [EBP + 0x1c]         ; 00422c68
    FST float ptr [ESP + 0xac]          ; 00422c6b
    FCOMP float ptr [ESP]               ; 00422c72
    FNSTSW AX                           ; 00422c75
    SAHF                                ; 00422c77
    JBE 0x00422c84                      ; 00422c78
        ;   XREF to: 00422c84 (CONDITIONAL_JUMP)  ; LAB_00422c84
    MOV EAX,dword ptr [ESP]             ; 00422c7a
    MOV dword ptr [ESP + 0xac],EAX      ; 00422c7d
    FLD float ptr [ESP + 0xac]          ; 00422c84
        ;   Label: LAB_00422c84
    FDIV float ptr [ESP]                ; 00422c8b
    FLD float ptr [ESP + 0x4]           ; 00422c8e
    FXCH                                ; 00422c92
    FSTP float ptr [ESP + 0x9c]         ; 00422c94
    FMUL float ptr [ESP + 0x9c]         ; 00422c9b
    FLD float ptr [ESP + 0x8]           ; 00422ca2
    FMUL float ptr [ESP + 0x9c]         ; 00422ca6
    FLD float ptr [ESP + 0xc]           ; 00422cad
    FMUL float ptr [ESP + 0x9c]         ; 00422cb1
    LEA EDI,[ESP + 0x40]                ; 00422cb8
    LEA ESI,[ESP + 0x88]                ; 00422cbc
    LEA EAX,[EBX + 0x8]                 ; 00422cc3
    FXCH ST2                            ; 00422cc6
    FSTP float ptr [ESP + 0x4]          ; 00422cc8
    FSTP float ptr [ESP + 0x8]          ; 00422ccc
    FSTP float ptr [ESP + 0xc]          ; 00422cd0
    FLD float ptr [EAX]                 ; 00422cd4
    FLD float ptr [EAX + 0x4]           ; 00422cd6
    FLD float ptr [EAX + 0x8]           ; 00422cd9
    FXCH ST2                            ; 00422cdc
    FADD float ptr [ESP + 0x4]          ; 00422cde
    FXCH                                ; 00422ce2
    FADD float ptr [ESP + 0x8]          ; 00422ce4
    FXCH ST2                            ; 00422ce8
    FADD float ptr [ESP + 0xc]          ; 00422cea
    FXCH                                ; 00422cee
    FSTP float ptr [ESP + 0x88]         ; 00422cf0
    FXCH                                ; 00422cf7
    FSTP float ptr [ESP + 0x8c]         ; 00422cf9
    FSTP float ptr [ESP + 0x90]         ; 00422d00
    MOVSD ES:EDI,ESI                    ; 00422d07
    MOVSD ES:EDI,ESI                    ; 00422d08
    MOVSD ES:EDI,ESI                    ; 00422d09
    PUSH dword ptr [ESP + 0x48]         ; 00422d0a
    MOV EDX,dword ptr [EBP + 0x14]      ; 00422d0e
    PUSH dword ptr [ESP + 0x44]         ; 00422d11
    PUSH EDX                            ; 00422d15
    MOV dword ptr [ESP + 0xc8],EAX      ; 00422d16
    CALL core_bugs.cpp_FUN_00422070     ; 00422d1d
        ;   XREF to: 00422070 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_00422070()
    MOV dword ptr [ESP + 0xdc],EAX      ; 00422d22
    FLD float ptr [ESP + 0xdc]          ; 00422d29
    ADD ESP,0xc                         ; 00422d30
    FST float ptr [ESP + 0xc4]          ; 00422d33
    FSUB float ptr [EBX + 0xc]          ; 00422d3a
    FLD float ptr [ESP]                 ; 00422d3d
    FMUL double ptr [0x005b7881]        ; 00422d40 | DAT_005b7881
    FCOMPP                              ; 00422d46
    FNSTSW AX                           ; 00422d48
    SAHF                                ; 00422d4a
    JNC 0x00423004                      ; 00422d4b
        ;   XREF to: 00423004 (CONDITIONAL_JUMP)  ; LAB_00423004
    FLD float ptr [ESP + 0x8]           ; 00422d51
    FLDZ                                ; 00422d55
    FCOMPP                              ; 00422d57
    FNSTSW AX                           ; 00422d59
    SAHF                                ; 00422d5b
    JNC 0x00422fec                      ; 00422d5c
        ;   XREF to: 00422fec (CONDITIONAL_JUMP)  ; LAB_00422fec
    FLD float ptr [EBX + 0xc]           ; 00422d62
    MOV EDI,0xbfc90fdb                  ; 00422d65
    FADD float ptr [ESP + 0xac]         ; 00422d6a
    MOV dword ptr [ESP + 0x58],EDI      ; 00422d71
    FSTP float ptr [EBX + 0xc]          ; 00422d75
        ;   Label: LAB_00422d75
    FLD float ptr [ESP + 0x58]          ; 00422d78
        ;   Label: LAB_00422d78
    FLD float ptr [ESP + 0x5c]          ; 00422d7c
    FLD float ptr [ESP + 0x60]          ; 00422d80
    LEA EAX,[EBX + 0x14]                ; 00422d84
    LEA EDI,[ESP + 0x28]                ; 00422d87
    LEA ESI,[ESP + 0x34]                ; 00422d8b
    FXCH ST2                            ; 00422d8f
    FSUB float ptr [EAX]                ; 00422d91
    FXCH                                ; 00422d93
    FSUB float ptr [EAX + 0x4]          ; 00422d95
    FXCH ST2                            ; 00422d98
    FSUB float ptr [EAX + 0x8]          ; 00422d9a
    FXCH                                ; 00422d9d
    FSTP float ptr [ESP + 0x34]         ; 00422d9f
    FXCH                                ; 00422da3
    FSTP float ptr [ESP + 0x38]         ; 00422da5
    FSTP float ptr [ESP + 0x3c]         ; 00422da9
    MOVSD ES:EDI,ESI                    ; 00422dad
    MOVSD ES:EDI,ESI                    ; 00422dae
    MOVSD ES:EDI,ESI                    ; 00422daf
    PUSH dword ptr [ESP + 0x2c]         ; 00422db0
    CALL core_actor.cpp_FUN_0040cfa0    ; 00422db4
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cfa0()
    MOV dword ptr [ESP + 0xd4],EAX      ; 00422db9
    FLD float ptr [ESP + 0xd4]          ; 00422dc0
    ADD ESP,0x4                         ; 00422dc7
    PUSH dword ptr [ESP + 0x28]         ; 00422dca
    FSTP float ptr [ESP + 0xa8]         ; 00422dce
    CALL core_actor.cpp_FUN_0040cfa0    ; 00422dd5
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cfa0()
    MOV dword ptr [ESP + 0xd4],EAX      ; 00422dda
    FLD float ptr [ESP + 0xd4]          ; 00422de1
    ADD ESP,0x4                         ; 00422de8
    FLD float ptr [EBP + 0x1c]          ; 00422deb
    FMUL float ptr [0x005b7889]         ; 00422dee | DAT_005b7889
    FMUL float ptr [0x005b788d]         ; 00422df4 | DAT_005b788d
    FLD float ptr [ESP + 0xa4]          ; 00422dfa
    FXCH ST2                            ; 00422e01
    FSTP float ptr [ESP + 0xb0]         ; 00422e03
    FST float ptr [ESP + 0xb4]          ; 00422e0a
    FCHS                                ; 00422e11
    FSTP float ptr [ESP + 0xa8]         ; 00422e13
    FCOMP float ptr [ESP + 0xa8]        ; 00422e1a
    FNSTSW AX                           ; 00422e21
    SAHF                                ; 00422e23
    JNC 0x00422e34                      ; 00422e24
        ;   XREF to: 00422e34 (CONDITIONAL_JUMP)  ; LAB_00422e34
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00422e26
    MOV dword ptr [ESP + 0xa4],EAX      ; 00422e2d
    FLD float ptr [ESP + 0xa4]          ; 00422e34
        ;   Label: LAB_00422e34
    FCOMP float ptr [ESP + 0xb4]        ; 00422e3b
    FNSTSW AX                           ; 00422e42
    SAHF                                ; 00422e44
    JBE 0x00422e55                      ; 00422e45
        ;   XREF to: 00422e55 (CONDITIONAL_JUMP)  ; LAB_00422e55
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00422e47
    MOV dword ptr [ESP + 0xa4],EAX      ; 00422e4e
    FLD float ptr [ESP + 0xb0]          ; 00422e55
        ;   Label: LAB_00422e55
    FLD float ptr [ESP + 0xb4]          ; 00422e5c
    FCHS                                ; 00422e63
    FSTP float ptr [ESP + 0xc8]         ; 00422e65
    FCOMP float ptr [ESP + 0xc8]        ; 00422e6c
    FNSTSW AX                           ; 00422e73
    SAHF                                ; 00422e75
    JNC 0x00422e86                      ; 00422e76
        ;   XREF to: 00422e86 (CONDITIONAL_JUMP)  ; LAB_00422e86
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00422e78
    MOV dword ptr [ESP + 0xb0],EAX      ; 00422e7f
    FLD float ptr [ESP + 0xb0]          ; 00422e86
        ;   Label: LAB_00422e86
    FCOMP float ptr [ESP + 0xb4]        ; 00422e8d
    FNSTSW AX                           ; 00422e94
    SAHF                                ; 00422e96
    JBE 0x00422ea7                      ; 00422e97
        ;   XREF to: 00422ea7 (CONDITIONAL_JUMP)  ; LAB_00422ea7
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00422e99
    MOV dword ptr [ESP + 0xb0],EAX      ; 00422ea0
    FLD float ptr [EBX + 0x18]          ; 00422ea7
        ;   Label: LAB_00422ea7
    FADD float ptr [ESP + 0xa4]         ; 00422eaa
    SUB ESP,0x4                         ; 00422eb1
    FSTP float ptr [ESP]                ; 00422eb4
    CALL core_actor.cpp_FUN_0040cfa0    ; 00422eb7
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cfa0()
    MOV dword ptr [ESP + 0xd4],EAX      ; 00422ebc
    FLD float ptr [EBX + 0x14]          ; 00422ec3
    FLD float ptr [ESP + 0xd4]          ; 00422ec6
    ADD ESP,0x4                         ; 00422ecd
    MOV dword ptr [EBX + 0x1c],0x0      ; 00422ed0
    FXCH                                ; 00422ed7
    FADD float ptr [ESP + 0xb0]         ; 00422ed9
    SUB ESP,0x4                         ; 00422ee0
    FXCH                                ; 00422ee3
    FSTP float ptr [EBX + 0x18]         ; 00422ee5
    FSTP float ptr [ESP]                ; 00422ee8
    CALL core_actor.cpp_FUN_0040cfa0    ; 00422eeb
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cfa0()
    MOV dword ptr [ESP + 0xd4],EAX      ; 00422ef0
    FLD float ptr [ESP + 0xd4]          ; 00422ef7
    XOR EAX,EAX                         ; 00422efe
    FSTP float ptr [EBX + 0x14]         ; 00422f00
    ADD ESP,0x4                         ; 00422f03
    MOV ESP,EBP                         ; 00422f06
    POP EBP                             ; 00422f08
    POP EDI                             ; 00422f09
    POP ESI                             ; 00422f0a
    POP EBX                             ; 00422f0b
    RET                                 ; 00422f0c
    XOR EAX,EAX                         ; 00422f0d
        ;   Label: LAB_00422f0d
    MOV ESP,EBP                         ; 00422f0f
    POP EBP                             ; 00422f11
    POP EDI                             ; 00422f12
    POP ESI                             ; 00422f13
    POP EBX                             ; 00422f14
    RET                                 ; 00422f15
    CMP ESI,dword ptr [ESP + 0xc0]      ; 00422f16
        ;   Label: LAB_00422f16
    JZ 0x00422f4a                       ; 00422f1d
        ;   XREF to: 00422f4a (CONDITIONAL_JUMP)  ; LAB_00422f4a
    MOV EAX,ESI                         ; 00422f1f
    FLD float ptr [EAX]                 ; 00422f21
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00422f23
    FSTP float ptr [EAX]                ; 00422f2a
    MOV EAX,ESI                         ; 00422f2c
    FLD float ptr [EAX + 0x4]           ; 00422f2e
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00422f31
    FSTP float ptr [EAX + 0x4]          ; 00422f38
    MOV EAX,ESI                         ; 00422f3b
    FLD float ptr [EAX + 0x8]           ; 00422f3d
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00422f40
    FSTP float ptr [EAX + 0x8]          ; 00422f47
    LEA EAX,[EBX + 0x20]                ; 00422f4a
        ;   Label: LAB_00422f4a
    LEA EDI,[ESP + 0x10]                ; 00422f4d
    LEA ESI,[ESP + 0x4c]                ; 00422f51
    FLD float ptr [EAX + 0x4]           ; 00422f55
    FLD float ptr [EAX + 0x8]           ; 00422f58
    LEA EDX,[EBX + 0x8]                 ; 00422f5b
    FLD float ptr [EAX]                 ; 00422f5e
    LEA EAX,[ESP + 0x10]                ; 00422f60
    FSUB float ptr [EDX]                ; 00422f64
    FXCH ST2                            ; 00422f66
    FSUB float ptr [EDX + 0x4]          ; 00422f68
    FXCH                                ; 00422f6b
    FSUB float ptr [EDX + 0x8]          ; 00422f6d
    FXCH ST2                            ; 00422f70
    FSTP float ptr [ESP + 0x4c]         ; 00422f72
    FSTP float ptr [ESP + 0x50]         ; 00422f76
    FSTP float ptr [ESP + 0x54]         ; 00422f7a
    LEA EDX,[ESP + 0x4]                 ; 00422f7e
    MOVSD ES:EDI,ESI                    ; 00422f82
    MOVSD ES:EDI,ESI                    ; 00422f83
    MOVSD ES:EDI,ESI                    ; 00422f84
    CMP EDX,EAX                         ; 00422f85
    JZ 0x00422fa1                       ; 00422f87
        ;   XREF to: 00422fa1 (CONDITIONAL_JUMP)  ; LAB_00422fa1
    MOV EAX,dword ptr [ESP + 0x10]      ; 00422f89
    MOV dword ptr [ESP + 0x4],EAX       ; 00422f8d
    MOV EAX,dword ptr [ESP + 0x14]      ; 00422f91
    MOV dword ptr [ESP + 0x8],EAX       ; 00422f95
    MOV EAX,dword ptr [ESP + 0x18]      ; 00422f99
    MOV dword ptr [ESP + 0xc],EAX       ; 00422f9d
    FLD float ptr [ESP + 0x8]           ; 00422fa1
        ;   Label: LAB_00422fa1
    FMUL ST0                            ; 00422fa5
    FLD float ptr [ESP + 0x4]           ; 00422fa7
    FMUL ST0                            ; 00422fab
    FADDP                               ; 00422fad
    FLD float ptr [ESP + 0xc]           ; 00422faf
    FMUL ST0                            ; 00422fb3
    FADDP                               ; 00422fb5
    FSQRT                               ; 00422fb7
    FSTP float ptr [ESP + 0xa0]         ; 00422fb9
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00422fc0
    FLD float ptr [ESP + 0xa0]          ; 00422fc7
    MOV dword ptr [ESP],EAX             ; 00422fce
    FCOMP float ptr [0x005dcbc8]        ; 00422fd1 | DAT_005dcbc8
    FNSTSW AX                           ; 00422fd7
    SAHF                                ; 00422fd9
    JNC 0x00422c36                      ; 00422fda
        ;   XREF to: 00422c36 (CONDITIONAL_JUMP)  ; LAB_00422c36
    MOV EAX,0x1                         ; 00422fe0
        ;   Label: LAB_00422fe0
    MOV ESP,EBP                         ; 00422fe5
    POP EBP                             ; 00422fe7
    POP EDI                             ; 00422fe8
    POP ESI                             ; 00422fe9
    POP EBX                             ; 00422fea
    RET                                 ; 00422feb
    FLD float ptr [EBX + 0xc]           ; 00422fec
        ;   Label: LAB_00422fec
    MOV ESI,0x3fc90fdb                  ; 00422fef
    FSUB float ptr [ESP + 0xac]         ; 00422ff4
    MOV dword ptr [ESP + 0x58],ESI      ; 00422ffb
    JMP 0x00422d75                      ; 00422fff
        ;   XREF to: 00422d75 (UNCONDITIONAL_JUMP)  ; LAB_00422d75
    MOV ECX,dword ptr [ESP + 0xbc]      ; 00423004
        ;   Label: LAB_00423004
    LEA EAX,[ESP + 0x40]                ; 0042300b
    CMP EAX,ECX                         ; 0042300f
    JZ 0x00423027                       ; 00423011
        ;   XREF to: 00423027 (CONDITIONAL_JUMP)  ; LAB_00423027
    MOV EAX,dword ptr [ESP + 0x40]      ; 00423013
    MOV dword ptr [ECX],EAX             ; 00423017
    MOV EAX,dword ptr [ESP + 0x44]      ; 00423019
    MOV dword ptr [ECX + 0x4],EAX       ; 0042301d
    MOV EAX,dword ptr [ESP + 0x48]      ; 00423020
    MOV dword ptr [ECX + 0x8],EAX       ; 00423024
    FLD float ptr [ESP + 0xc4]          ; 00423027
        ;   Label: LAB_00423027
    FCOMP float ptr [EBX + 0xc]         ; 0042302e
    FNSTSW AX                           ; 00423031
    SAHF                                ; 00423033
    JBE 0x00422d78                      ; 00423034
        ;   XREF to: 00422d78 (CONDITIONAL_JUMP)  ; LAB_00422d78
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0042303a
    MOV dword ptr [EBX + 0xc],EAX       ; 00423041
    JMP 0x00422d78                      ; 00423044
        ;   XREF to: 00422d78 (UNCONDITIONAL_JUMP)  ; LAB_00422d78

