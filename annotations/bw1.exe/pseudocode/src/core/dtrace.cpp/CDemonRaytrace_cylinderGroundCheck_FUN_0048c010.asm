; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_0048c010(CDemonRaytrace *this_ptr,CVector3f *pos,float radius,int *hit_flag,CVector3f *normal_out)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   pos
; float            Stack[0xc]:4   radius
; int *            Stack[0x10]:4   hit_flag
; CVector3f *      Stack[0x14]:4   normal_out
; Local Variables:
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x54]:4  local_54
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_setcolid.cpp_FUN_005562c0 at 00556578
;
; Referenced Globals:
;   undefined4 DAT_005db95c
;   undefined4 DAT_005db960
;
; Called Functions:
;   core_dcube.cpp_FUN_004584a0
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_0048afe0
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c010
        ;   Label: core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_0048c010
    PUSH ESI                            ; 0048c011
    PUSH EDI                            ; 0048c012
    PUSH EBP                            ; 0048c013
    SUB ESP,0x54                        ; 0048c014
    MOV EBP,dword ptr [ESP + 0x68]      ; 0048c017
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0048c01b
    LEA EDI,[ESP + 0x18]                ; 0048c01f
    MOV ESI,EAX                         ; 0048c023
    MOVSD ES:EDI,ESI                    ; 0048c025
    MOVSD ES:EDI,ESI                    ; 0048c026
    MOVSD ES:EDI,ESI                    ; 0048c027
    FLD float ptr [ESP + 0x1c]          ; 0048c028
    LEA EDI,[ESP + 0xc]                 ; 0048c02c
    MOV ESI,EAX                         ; 0048c030
    FADD float ptr [0x005db95c]         ; 0048c032 | DAT_005db95c
    MOVSD ES:EDI,ESI                    ; 0048c038
    MOVSD ES:EDI,ESI                    ; 0048c039
    MOVSD ES:EDI,ESI                    ; 0048c03a
    FST float ptr [ESP + 0x1c]          ; 0048c03b
    FSUB float ptr [EBP + 0x14]         ; 0048c03f
    FLD1                                ; 0048c042
    FDIV float ptr [EBP + 0x2c]         ; 0048c044
    FLD float ptr [ESP + 0x18]          ; 0048c047
    FSUB float ptr [EBP + 0x10]         ; 0048c04b
    FST float ptr [ESP + 0x28]          ; 0048c04e
    FSUB float ptr [ESP + 0x70]         ; 0048c052
    FLD1                                ; 0048c056
    FDIV float ptr [EBP + 0x28]         ; 0048c058
    FLD float ptr [ESP + 0x20]          ; 0048c05b
    FLD float ptr [ESP + 0x10]          ; 0048c05f
    FADD float ptr [0x005db960]         ; 0048c063 | DAT_005db960
    FXCH                                ; 0048c069
    FSUB float ptr [EBP + 0x18]         ; 0048c06b
    FST float ptr [ESP + 0x2c]          ; 0048c06e
    FSUB float ptr [ESP + 0x70]         ; 0048c072
    FXCH                                ; 0048c076
    FSTP float ptr [ESP + 0x10]         ; 0048c078
    FLD1                                ; 0048c07c
    FDIV float ptr [EBP + 0x30]         ; 0048c07e
    FLD float ptr [ESP + 0x10]          ; 0048c081
    FSUB float ptr [EBP + 0x14]         ; 0048c085
    FXCH ST5                            ; 0048c088
    FSTP float ptr [ESP + 0x34]         ; 0048c08a
    FXCH ST5                            ; 0048c08e
    FMUL float ptr [ESP + 0x34]         ; 0048c090
    FXCH ST4                            ; 0048c094
    FMUL float ptr [ESP + 0x34]         ; 0048c096
    FXCH ST3                            ; 0048c09a
    FMUL ST2                            ; 0048c09c
    FXCH ST5                            ; 0048c09e
    FSTP float ptr [ESP + 0x34]         ; 0048c0a0
    FMUL float ptr [ESP + 0x34]         ; 0048c0a4
    FLD float ptr [ESP + 0x28]          ; 0048c0a8
    FADD float ptr [ESP + 0x70]         ; 0048c0ac
    FLD float ptr [ESP + 0x2c]          ; 0048c0b0
    FADD float ptr [ESP + 0x70]         ; 0048c0b4
    FXCH                                ; 0048c0b8
    FMULP ST3                           ; 0048c0ba
    FMUL float ptr [ESP + 0x34]         ; 0048c0bc
    MOV EDX,0xf149f2ca                  ; 0048c0c0
    XOR EDI,EDI                         ; 0048c0c5
    FXCH ST4                            ; 0048c0c7
    CALL crt_math.c_round_FUN_005c03a0  ; 0048c0c9
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST3                            ; 0048c0ce
    CALL crt_math.c_round_FUN_005c03a0  ; 0048c0d0
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST3                            ; 0048c0d5
    FISTP dword ptr [ESP + 0x4c]        ; 0048c0d7
    FXCH ST2                            ; 0048c0db
    FISTP dword ptr [ESP + 0x3c]        ; 0048c0dd
    MOV dword ptr [ESP + 0x24],EDX      ; 0048c0e1
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0048c0e5
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0048c0e9
    FXCH ST3                            ; 0048c0ed
    CALL crt_math.c_round_FUN_005c03a0  ; 0048c0ef
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 0048c0f4
    CALL crt_math.c_round_FUN_005c03a0  ; 0048c0f6
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST3                            ; 0048c0fb
    CALL crt_math.c_round_FUN_005c03a0  ; 0048c0fd
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST2                            ; 0048c102
    CALL crt_math.c_round_FUN_005c03a0  ; 0048c104
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 0048c109
    FISTP dword ptr [ESP + 0x40]        ; 0048c10b
    FXCH ST2                            ; 0048c10f
    FISTP dword ptr [ESP + 0x48]        ; 0048c111
    FISTP dword ptr [ESP + 0x44]        ; 0048c115
    FISTP dword ptr [ESP + 0x50]        ; 0048c119
    CMP EAX,ECX                         ; 0048c11d
    JL 0x0048c1e9                       ; 0048c11f
        ;   XREF to: 0048c1e9 (CONDITIONAL_JUMP)  ; LAB_0048c1e9
    MOV EDX,dword ptr [ESP + 0x44]      ; 0048c125
        ;   Label: LAB_0048c125
    MOV ESI,dword ptr [ESP + 0x40]      ; 0048c129
    CMP ESI,EDX                         ; 0048c12d
    JG 0x0048c18d                       ; 0048c12f
        ;   XREF to: 0048c18d (CONDITIONAL_JUMP)  ; LAB_0048c18d
    MOV EDX,dword ptr [ESP + 0x50]      ; 0048c131
        ;   Label: LAB_0048c131
    MOV EBX,dword ptr [ESP + 0x48]      ; 0048c135
    CMP EBX,EDX                         ; 0048c139
    JG 0x0048c184                       ; 0048c13b
        ;   XREF to: 0048c184 (CONDITIONAL_JUMP)  ; LAB_0048c184
    PUSH EBX                            ; 0048c13d
        ;   Label: LAB_0048c13d
    MOV EAX,dword ptr [ESP + 0x50]      ; 0048c13e
    PUSH EAX                            ; 0048c142
    PUSH ESI                            ; 0048c143
    PUSH EBP                            ; 0048c144
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_0048afe0 ; 0048c145
        ;   XREF to: 0048afe0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_0048afe0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 0048c14a
    TEST EAX,EAX                        ; 0048c14d
    JZ 0x0048c17b                       ; 0048c14f
        ;   XREF to: 0048c17b (CONDITIONAL_JUMP)  ; LAB_0048c17b
    LEA EDX,[ESP + 0x30]                ; 0048c151
    PUSH EDX                            ; 0048c155
    LEA EDX,[ESP + 0x4]                 ; 0048c156
    PUSH EDX                            ; 0048c15a
    LEA EDX,[ESP + 0x2c]                ; 0048c15b
    PUSH EDX                            ; 0048c15f
    LEA EDX,[ESP + 0x24]                ; 0048c160
    PUSH dword ptr [ESP + 0x7c]         ; 0048c164
    PUSH EDX                            ; 0048c168
    PUSH EAX                            ; 0048c169
    CALL core_dcube.cpp_FUN_004584a0    ; 0048c16a
        ;   XREF to: 004584a0 (UNCONDITIONAL_CALL)  ; int core_dcube.cpp_FUN_004584a0(CDemonCube * this_ptr, CVector3f * cylinder_position, float cylinder_radius, CVector3f * output_height, ...)
    ADD ESP,0x18                        ; 0048c16f
    TEST EAX,EAX                        ; 0048c172
    JZ 0x0048c17b                       ; 0048c174
        ;   XREF to: 0048c17b (CONDITIONAL_JUMP)  ; LAB_0048c17b
    MOV EDI,0x1                         ; 0048c176
    MOV ECX,dword ptr [ESP + 0x50]      ; 0048c17b
        ;   Label: LAB_0048c17b
    INC EBX                             ; 0048c17f
    CMP EBX,ECX                         ; 0048c180
    JLE 0x0048c13d                      ; 0048c182
        ;   XREF to: 0048c13d (CONDITIONAL_JUMP)  ; LAB_0048c13d
    MOV ECX,dword ptr [ESP + 0x44]      ; 0048c184
        ;   Label: LAB_0048c184
    INC ESI                             ; 0048c188
    CMP ESI,ECX                         ; 0048c189
    JLE 0x0048c131                      ; 0048c18b
        ;   XREF to: 0048c131 (CONDITIONAL_JUMP)  ; LAB_0048c131
    TEST EDI,EDI                        ; 0048c18d
        ;   Label: LAB_0048c18d
    JZ 0x0048c1d4                       ; 0048c18f
        ;   XREF to: 0048c1d4 (CONDITIONAL_JUMP)  ; LAB_0048c1d4
    MOV EBX,dword ptr [ESP + 0x78]      ; 0048c191
    TEST EBX,EBX                        ; 0048c195
    JZ 0x0048c1b2                       ; 0048c197
        ;   XREF to: 0048c1b2 (CONDITIONAL_JUMP)  ; LAB_0048c1b2
    MOV EAX,ESP                         ; 0048c199
    CMP EAX,EBX                         ; 0048c19b
    JZ 0x0048c1b2                       ; 0048c19d
        ;   XREF to: 0048c1b2 (CONDITIONAL_JUMP)  ; LAB_0048c1b2
    MOV EAX,dword ptr [ESP]             ; 0048c19f
    MOV dword ptr [EBX],EAX             ; 0048c1a2
    MOV EAX,dword ptr [ESP + 0x4]       ; 0048c1a4
    MOV dword ptr [EBX + 0x4],EAX       ; 0048c1a8
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048c1ab
    MOV dword ptr [EBX + 0x8],EAX       ; 0048c1af
    MOV EDI,dword ptr [ESP + 0x74]      ; 0048c1b2
        ;   Label: LAB_0048c1b2
    TEST EDI,EDI                        ; 0048c1b6
    JZ 0x0048c1c0                       ; 0048c1b8
        ;   XREF to: 0048c1c0 (CONDITIONAL_JUMP)  ; LAB_0048c1c0
    MOV EAX,dword ptr [ESP + 0x30]      ; 0048c1ba
    MOV dword ptr [EDI],EAX             ; 0048c1be
    MOV EAX,dword ptr [ESP + 0x24]      ; 0048c1c0
        ;   Label: LAB_0048c1c0
    MOV dword ptr [ESP + 0x38],EAX      ; 0048c1c4
    MOV EAX,dword ptr [ESP + 0x38]      ; 0048c1c8
    ADD ESP,0x54                        ; 0048c1cc
    POP EBP                             ; 0048c1cf
    POP EDI                             ; 0048c1d0
    POP ESI                             ; 0048c1d1
    POP EBX                             ; 0048c1d2
    RET                                 ; 0048c1d3
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0048c1d4
        ;   Label: LAB_0048c1d4
    DEC EBX                             ; 0048c1d8
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0048c1d9
    MOV dword ptr [ESP + 0x4c],EBX      ; 0048c1dd
    CMP EBX,ESI                         ; 0048c1e1
    JGE 0x0048c125                      ; 0048c1e3
        ;   XREF to: 0048c125 (CONDITIONAL_JUMP)  ; LAB_0048c125
    MOV EDI,dword ptr [ESP + 0x74]      ; 0048c1e9
        ;   Label: LAB_0048c1e9
    TEST EDI,EDI                        ; 0048c1ed
    JZ 0x0048c1f7                       ; 0048c1ef
        ;   XREF to: 0048c1f7 (CONDITIONAL_JUMP)  ; LAB_0048c1f7
    MOV dword ptr [EDI],0x1             ; 0048c1f1
    MOV EBP,dword ptr [ESP + 0x78]      ; 0048c1f7
        ;   Label: LAB_0048c1f7
    TEST EBP,EBP                        ; 0048c1fb
    JZ 0x0048c214                       ; 0048c1fd
        ;   XREF to: 0048c214 (CONDITIONAL_JUMP)  ; LAB_0048c214
    MOV dword ptr [EBP + 0x4],0x3f800000 ; 0048c1ff
    MOV dword ptr [EBP + 0x8],0x0       ; 0048c206
    MOV dword ptr [EBP],0x0             ; 0048c20d
    MOV EAX,dword ptr [ESP + 0x10]      ; 0048c214
        ;   Label: LAB_0048c214
    MOV dword ptr [ESP + 0x38],EAX      ; 0048c218
    MOV EAX,dword ptr [ESP + 0x38]      ; 0048c21c
    ADD ESP,0x54                        ; 0048c220
    POP EBP                             ; 0048c223
    POP EDI                             ; 0048c224
    POP ESI                             ; 0048c225
    POP EBX                             ; 0048c226
    RET                                 ; 0048c227

