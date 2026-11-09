; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00473b20(CDemonRaytrace *this_ptr,CVector3f *pos,float radius,int *hit_flag,CVector3f *normal_out)
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
;   core_setcolid.cpp_FUN_00534ea0 at 00535158
;
; Referenced Globals:
;   undefined4 DAT_005d1b63
;   undefined4 DAT_005d1b67
;
; Called Functions:
;   core_dcube.cpp_FUN_00446df0
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473b20
        ;   Label: core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00473b20
    PUSH ESI                            ; 00473b21
    PUSH EDI                            ; 00473b22
    PUSH EBP                            ; 00473b23
    SUB ESP,0x54                        ; 00473b24
    MOV EBP,dword ptr [ESP + 0x68]      ; 00473b27
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00473b2b
    LEA EDI,[ESP + 0x18]                ; 00473b2f
    MOV ESI,EAX                         ; 00473b33
    MOVSD ES:EDI,ESI                    ; 00473b35
    MOVSD ES:EDI,ESI                    ; 00473b36
    MOVSD ES:EDI,ESI                    ; 00473b37
    FLD float ptr [ESP + 0x1c]          ; 00473b38
    LEA EDI,[ESP + 0xc]                 ; 00473b3c
    MOV ESI,EAX                         ; 00473b40
    FADD float ptr [0x005d1b63]         ; 00473b42 | DAT_005d1b63
    MOVSD ES:EDI,ESI                    ; 00473b48
    MOVSD ES:EDI,ESI                    ; 00473b49
    MOVSD ES:EDI,ESI                    ; 00473b4a
    FST float ptr [ESP + 0x1c]          ; 00473b4b
    FSUB float ptr [EBP + 0x14]         ; 00473b4f
    FLD1                                ; 00473b52
    FDIV float ptr [EBP + 0x2c]         ; 00473b54
    FLD float ptr [ESP + 0x18]          ; 00473b57
    FSUB float ptr [EBP + 0x10]         ; 00473b5b
    FST float ptr [ESP + 0x28]          ; 00473b5e
    FSUB float ptr [ESP + 0x70]         ; 00473b62
    FLD1                                ; 00473b66
    FDIV float ptr [EBP + 0x28]         ; 00473b68
    FLD float ptr [ESP + 0x20]          ; 00473b6b
    FLD float ptr [ESP + 0x10]          ; 00473b6f
    FADD float ptr [0x005d1b67]         ; 00473b73 | DAT_005d1b67
    FXCH                                ; 00473b79
    FSUB float ptr [EBP + 0x18]         ; 00473b7b
    FST float ptr [ESP + 0x2c]          ; 00473b7e
    FSUB float ptr [ESP + 0x70]         ; 00473b82
    FXCH                                ; 00473b86
    FSTP float ptr [ESP + 0x10]         ; 00473b88
    FLD1                                ; 00473b8c
    FDIV float ptr [EBP + 0x30]         ; 00473b8e
    FLD float ptr [ESP + 0x10]          ; 00473b91
    FSUB float ptr [EBP + 0x14]         ; 00473b95
    FXCH ST5                            ; 00473b98
    FSTP float ptr [ESP + 0x34]         ; 00473b9a
    FXCH ST5                            ; 00473b9e
    FMUL float ptr [ESP + 0x34]         ; 00473ba0
    FXCH ST4                            ; 00473ba4
    FMUL float ptr [ESP + 0x34]         ; 00473ba6
    FXCH ST3                            ; 00473baa
    FMUL ST2                            ; 00473bac
    FXCH ST5                            ; 00473bae
    FSTP float ptr [ESP + 0x34]         ; 00473bb0
    FMUL float ptr [ESP + 0x34]         ; 00473bb4
    FLD float ptr [ESP + 0x28]          ; 00473bb8
    FADD float ptr [ESP + 0x70]         ; 00473bbc
    FLD float ptr [ESP + 0x2c]          ; 00473bc0
    FADD float ptr [ESP + 0x70]         ; 00473bc4
    FXCH                                ; 00473bc8
    FMULP ST3                           ; 00473bca
    FMUL float ptr [ESP + 0x34]         ; 00473bcc
    MOV EDX,0xf149f2ca                  ; 00473bd0
    XOR EDI,EDI                         ; 00473bd5
    FXCH ST4                            ; 00473bd7
    CALL crt_math.c_round_FUN_005b7ff0  ; 00473bd9
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST3                            ; 00473bde
    CALL crt_math.c_round_FUN_005b7ff0  ; 00473be0
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST3                            ; 00473be5
    FISTP dword ptr [ESP + 0x4c]        ; 00473be7
    FXCH ST2                            ; 00473beb
    FISTP dword ptr [ESP + 0x3c]        ; 00473bed
    MOV dword ptr [ESP + 0x24],EDX      ; 00473bf1
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00473bf5
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00473bf9
    FXCH ST3                            ; 00473bfd
    CALL crt_math.c_round_FUN_005b7ff0  ; 00473bff
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 00473c04
    CALL crt_math.c_round_FUN_005b7ff0  ; 00473c06
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST3                            ; 00473c0b
    CALL crt_math.c_round_FUN_005b7ff0  ; 00473c0d
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST2                            ; 00473c12
    CALL crt_math.c_round_FUN_005b7ff0  ; 00473c14
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 00473c19
    FISTP dword ptr [ESP + 0x40]        ; 00473c1b
    FXCH ST2                            ; 00473c1f
    FISTP dword ptr [ESP + 0x48]        ; 00473c21
    FISTP dword ptr [ESP + 0x44]        ; 00473c25
    FISTP dword ptr [ESP + 0x50]        ; 00473c29
    CMP EAX,ECX                         ; 00473c2d
    JL 0x00473cf9                       ; 00473c2f
        ;   XREF to: 00473cf9 (CONDITIONAL_JUMP)  ; LAB_00473cf9
    MOV EDX,dword ptr [ESP + 0x44]      ; 00473c35
        ;   Label: LAB_00473c35
    MOV ESI,dword ptr [ESP + 0x40]      ; 00473c39
    CMP ESI,EDX                         ; 00473c3d
    JG 0x00473c9d                       ; 00473c3f
        ;   XREF to: 00473c9d (CONDITIONAL_JUMP)  ; LAB_00473c9d
    MOV EDX,dword ptr [ESP + 0x50]      ; 00473c41
        ;   Label: LAB_00473c41
    MOV EBX,dword ptr [ESP + 0x48]      ; 00473c45
    CMP EBX,EDX                         ; 00473c49
    JG 0x00473c94                       ; 00473c4b
        ;   XREF to: 00473c94 (CONDITIONAL_JUMP)  ; LAB_00473c94
    PUSH EBX                            ; 00473c4d
        ;   Label: LAB_00473c4d
    MOV EAX,dword ptr [ESP + 0x50]      ; 00473c4e
    PUSH EAX                            ; 00473c52
    PUSH ESI                            ; 00473c53
    PUSH EBP                            ; 00473c54
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0 ; 00473c55
        ;   XREF to: 00472af0 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00472af0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 00473c5a
    TEST EAX,EAX                        ; 00473c5d
    JZ 0x00473c8b                       ; 00473c5f
        ;   XREF to: 00473c8b (CONDITIONAL_JUMP)  ; LAB_00473c8b
    LEA EDX,[ESP + 0x30]                ; 00473c61
    PUSH EDX                            ; 00473c65
    LEA EDX,[ESP + 0x4]                 ; 00473c66
    PUSH EDX                            ; 00473c6a
    LEA EDX,[ESP + 0x2c]                ; 00473c6b
    PUSH EDX                            ; 00473c6f
    LEA EDX,[ESP + 0x24]                ; 00473c70
    PUSH dword ptr [ESP + 0x7c]         ; 00473c74
    PUSH EDX                            ; 00473c78
    PUSH EAX                            ; 00473c79
    CALL core_dcube.cpp_FUN_00446df0    ; 00473c7a
        ;   XREF to: 00446df0 (UNCONDITIONAL_CALL)  ; int core_dcube.cpp_FUN_00446df0(CDemonCube * this_ptr, CVector3f * cylinder_position, float cylinder_radius, CVector3f * output_height, ...)
    ADD ESP,0x18                        ; 00473c7f
    TEST EAX,EAX                        ; 00473c82
    JZ 0x00473c8b                       ; 00473c84
        ;   XREF to: 00473c8b (CONDITIONAL_JUMP)  ; LAB_00473c8b
    MOV EDI,0x1                         ; 00473c86
    MOV ECX,dword ptr [ESP + 0x50]      ; 00473c8b
        ;   Label: LAB_00473c8b
    INC EBX                             ; 00473c8f
    CMP EBX,ECX                         ; 00473c90
    JLE 0x00473c4d                      ; 00473c92
        ;   XREF to: 00473c4d (CONDITIONAL_JUMP)  ; LAB_00473c4d
    MOV ECX,dword ptr [ESP + 0x44]      ; 00473c94
        ;   Label: LAB_00473c94
    INC ESI                             ; 00473c98
    CMP ESI,ECX                         ; 00473c99
    JLE 0x00473c41                      ; 00473c9b
        ;   XREF to: 00473c41 (CONDITIONAL_JUMP)  ; LAB_00473c41
    TEST EDI,EDI                        ; 00473c9d
        ;   Label: LAB_00473c9d
    JZ 0x00473ce4                       ; 00473c9f
        ;   XREF to: 00473ce4 (CONDITIONAL_JUMP)  ; LAB_00473ce4
    MOV EBX,dword ptr [ESP + 0x78]      ; 00473ca1
    TEST EBX,EBX                        ; 00473ca5
    JZ 0x00473cc2                       ; 00473ca7
        ;   XREF to: 00473cc2 (CONDITIONAL_JUMP)  ; LAB_00473cc2
    MOV EAX,ESP                         ; 00473ca9
    CMP EAX,EBX                         ; 00473cab
    JZ 0x00473cc2                       ; 00473cad
        ;   XREF to: 00473cc2 (CONDITIONAL_JUMP)  ; LAB_00473cc2
    MOV EAX,dword ptr [ESP]             ; 00473caf
    MOV dword ptr [EBX],EAX             ; 00473cb2
    MOV EAX,dword ptr [ESP + 0x4]       ; 00473cb4
    MOV dword ptr [EBX + 0x4],EAX       ; 00473cb8
    MOV EAX,dword ptr [ESP + 0x8]       ; 00473cbb
    MOV dword ptr [EBX + 0x8],EAX       ; 00473cbf
    MOV EDI,dword ptr [ESP + 0x74]      ; 00473cc2
        ;   Label: LAB_00473cc2
    TEST EDI,EDI                        ; 00473cc6
    JZ 0x00473cd0                       ; 00473cc8
        ;   XREF to: 00473cd0 (CONDITIONAL_JUMP)  ; LAB_00473cd0
    MOV EAX,dword ptr [ESP + 0x30]      ; 00473cca
    MOV dword ptr [EDI],EAX             ; 00473cce
    MOV EAX,dword ptr [ESP + 0x24]      ; 00473cd0
        ;   Label: LAB_00473cd0
    MOV dword ptr [ESP + 0x38],EAX      ; 00473cd4
    MOV EAX,dword ptr [ESP + 0x38]      ; 00473cd8
    ADD ESP,0x54                        ; 00473cdc
    POP EBP                             ; 00473cdf
    POP EDI                             ; 00473ce0
    POP ESI                             ; 00473ce1
    POP EBX                             ; 00473ce2
    RET                                 ; 00473ce3
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00473ce4
        ;   Label: LAB_00473ce4
    DEC EBX                             ; 00473ce8
    MOV ESI,dword ptr [ESP + 0x3c]      ; 00473ce9
    MOV dword ptr [ESP + 0x4c],EBX      ; 00473ced
    CMP EBX,ESI                         ; 00473cf1
    JGE 0x00473c35                      ; 00473cf3
        ;   XREF to: 00473c35 (CONDITIONAL_JUMP)  ; LAB_00473c35
    MOV EDI,dword ptr [ESP + 0x74]      ; 00473cf9
        ;   Label: LAB_00473cf9
    TEST EDI,EDI                        ; 00473cfd
    JZ 0x00473d07                       ; 00473cff
        ;   XREF to: 00473d07 (CONDITIONAL_JUMP)  ; LAB_00473d07
    MOV dword ptr [EDI],0x1             ; 00473d01
    MOV EBP,dword ptr [ESP + 0x78]      ; 00473d07
        ;   Label: LAB_00473d07
    TEST EBP,EBP                        ; 00473d0b
    JZ 0x00473d24                       ; 00473d0d
        ;   XREF to: 00473d24 (CONDITIONAL_JUMP)  ; LAB_00473d24
    MOV dword ptr [EBP + 0x4],0x3f800000 ; 00473d0f
    MOV dword ptr [EBP + 0x8],0x0       ; 00473d16
    MOV dword ptr [EBP],0x0             ; 00473d1d
    MOV EAX,dword ptr [ESP + 0x10]      ; 00473d24
        ;   Label: LAB_00473d24
    MOV dword ptr [ESP + 0x38],EAX      ; 00473d28
    MOV EAX,dword ptr [ESP + 0x38]      ; 00473d2c
    ADD ESP,0x54                        ; 00473d30
    POP EBP                             ; 00473d33
    POP EDI                             ; 00473d34
    POP ESI                             ; 00473d35
    POP EBX                             ; 00473d36
    RET                                 ; 00473d37

