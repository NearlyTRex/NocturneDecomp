; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_markShadowVoxels_FUN_0046baa0(CDemonRaytrace *this_ptr,CVector3f *offset,CVector3f *rotation,CVector3f *extent,CVector3f *light_position)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   offset
; CVector3f *      Stack[0xc]:4   rotation
; CVector3f *      Stack[0x10]:4   extent
; CVector3f *      Stack[0x14]:4   light_position
; Local Variables:
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined        Stack[-0x8c]:1  local_8c
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
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_setcolid.cpp_FUN_00511a10 at 00511a6a
;
; Referenced Globals:
;   double DOUBLE_0057e3be = 2
;   double DOUBLE_0057e3c6 = 0.5
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0046bfe0
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046baa0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_markShadowVoxels_FUN_0046baa0
    PUSH ESI                            ; 0046baa1
    PUSH EDI                            ; 0046baa2
    PUSH EBP                            ; 0046baa3
    MOV EBP,ESP                         ; 0046baa4
    SUB ESP,0x88                        ; 0046baa6
    AND ESP,0xfffffff8                  ; 0046baac
    MOV EDI,dword ptr [EBP + 0x18]      ; 0046baaf
    MOV ESI,dword ptr [EBP + 0x20]      ; 0046bab2
    MOV EBX,dword ptr [EBP + 0x24]      ; 0046bab5
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0046bab8
    PUSH EDX                            ; 0046babb
    LEA EAX,[ESP + 0x10]                ; 0046babc
    PUSH EAX                            ; 0046bac0
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 0046bac1
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    FLD float ptr [EBX]                 ; 0046bac6
    FSUB float ptr [ESI]                ; 0046bac8
    ADD ESP,0x8                         ; 0046baca
    FSTP float ptr [ESP + 0x40]         ; 0046bacd
    FLD float ptr [EBX + 0x4]           ; 0046bad1
    FSUB float ptr [ESI + 0x4]          ; 0046bad4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046bad7
    FSTP float ptr [ESP + 0x44]         ; 0046bada
    FLD float ptr [EBX + 0x8]           ; 0046bade
    FSUB float ptr [ESI + 0x8]          ; 0046bae1
    FLD float ptr [ESP + 0x40]          ; 0046bae4
    FXCH                                ; 0046bae8
    FSTP float ptr [ESP + 0x48]         ; 0046baea
    FDIV float ptr [EAX + 0x34]         ; 0046baee
    FLD float ptr [ESP + 0x44]          ; 0046baf1
    FDIV float ptr [EAX + 0x38]         ; 0046baf5
    FLD float ptr [ESP + 0x48]          ; 0046baf8
    FDIV float ptr [EAX + 0x3c]         ; 0046bafc
    FXCH ST2                            ; 0046baff
    FLD double ptr [0x0057e3be]         ; 0046bb01 | DOUBLE_0057e3be
    FXCH                                ; 0046bb07
    FMUL ST1                            ; 0046bb09
    FLD1                                ; 0046bb0b
    FADDP                               ; 0046bb0d
    CALL crt_math.c_round_FUN_00563a30  ; 0046bb0f
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x70]        ; 0046bb14
    MOV EAX,dword ptr [ESP + 0x70]      ; 0046bb18
    MOV dword ptr [ESP + 0x84],EAX      ; 0046bb1c
    FILD dword ptr [ESP + 0x84]         ; 0046bb23
    FDIVR float ptr [ESP + 0x40]        ; 0046bb2a
    FXCH ST2                            ; 0046bb2e
    FMUL ST1                            ; 0046bb30
    FLD1                                ; 0046bb32
    FADDP                               ; 0046bb34
    CALL crt_math.c_round_FUN_00563a30  ; 0046bb36
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x74]        ; 0046bb3b
    MOV EAX,dword ptr [ESP + 0x74]      ; 0046bb3f
    MOV dword ptr [ESP + 0x84],EAX      ; 0046bb43
    FILD dword ptr [ESP + 0x84]         ; 0046bb4a
    FDIVR float ptr [ESP + 0x44]        ; 0046bb51
    FXCH ST3                            ; 0046bb55
    FMULP                               ; 0046bb57
    FLD1                                ; 0046bb59
    FADDP                               ; 0046bb5b
    CALL crt_math.c_round_FUN_00563a30  ; 0046bb5d
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x7c]        ; 0046bb62
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0046bb66
    MOV dword ptr [ESP + 0x84],EAX      ; 0046bb6a
    FILD dword ptr [ESP + 0x84]         ; 0046bb71
    FDIVR float ptr [ESP + 0x48]        ; 0046bb78
    XOR ECX,ECX                         ; 0046bb7c
    MOV dword ptr [ESP + 0x78],ECX      ; 0046bb7e
    MOV EBX,dword ptr [ESP + 0x70]      ; 0046bb82
    FXCH                                ; 0046bb86
    FSTP float ptr [ESP]                ; 0046bb88
    FXCH                                ; 0046bb8b
    FSTP float ptr [ESP + 0x4]          ; 0046bb8d
    FSTP float ptr [ESP + 0x8]          ; 0046bb91
    TEST EBX,EBX                        ; 0046bb95
    JLE 0x0046bce9                      ; 0046bb97
        ;   XREF to: 0046bce9 (CONDITIONAL_JUMP)  ; LAB_0046bce9
    XOR ECX,ECX                         ; 0046bb9d
        ;   Label: LAB_0046bb9d
    MOV EBX,dword ptr [ESP + 0x74]      ; 0046bb9f
    MOV dword ptr [ESP + 0x80],ECX      ; 0046bba3
    TEST EBX,EBX                        ; 0046bbaa
    JLE 0x0046bcd4                      ; 0046bbac
        ;   XREF to: 0046bcd4 (CONDITIONAL_JUMP)  ; LAB_0046bcd4
    MOV ECX,dword ptr [ESP + 0x7c]      ; 0046bbb2
        ;   Label: LAB_0046bbb2
    XOR EBX,EBX                         ; 0046bbb6
    TEST ECX,ECX                        ; 0046bbb8
    JLE 0x0046bcb9                      ; 0046bbba
        ;   XREF to: 0046bcb9 (CONDITIONAL_JUMP)  ; LAB_0046bcb9
    MOV EAX,dword ptr [ESP + 0x78]      ; 0046bbc0
        ;   Label: LAB_0046bbc0
    MOV dword ptr [ESP + 0x84],EAX      ; 0046bbc4
    FILD dword ptr [ESP + 0x84]         ; 0046bbcb
    MOV EAX,dword ptr [ESP + 0x80]      ; 0046bbd2
    FLD float ptr [ESP]                 ; 0046bbd9
    FXCH                                ; 0046bbdc
    FMUL ST1                            ; 0046bbde
    MOV dword ptr [ESP + 0x84],EAX      ; 0046bbe0
    FILD dword ptr [ESP + 0x84]         ; 0046bbe7
    FXCH                                ; 0046bbee
    FADD float ptr [ESI]                ; 0046bbf0
    FXCH                                ; 0046bbf2
    FLD float ptr [ESP + 0x4]           ; 0046bbf4
    FXCH                                ; 0046bbf8
    FMUL ST1                            ; 0046bbfa
    FXCH ST3                            ; 0046bbfc
    FLD double ptr [0x0057e3c6]         ; 0046bbfe | DOUBLE_0057e3c6
    FXCH                                ; 0046bc04
    FMUL ST1                            ; 0046bc06
    MOV dword ptr [ESP + 0x84],EBX      ; 0046bc08
    FADDP ST3,ST0                       ; 0046bc0f
    FILD dword ptr [ESP + 0x84]         ; 0046bc11
    FXCH ST3                            ; 0046bc18
    FSTP float ptr [ESP + 0x58]         ; 0046bc1a
    FXCH ST3                            ; 0046bc1e
    FADD float ptr [ESI + 0x4]          ; 0046bc20
    FXCH ST2                            ; 0046bc23
    FLD float ptr [ESP + 0x8]           ; 0046bc25
    FXCH                                ; 0046bc29
    FMUL ST1                            ; 0046bc2b
    FXCH ST2                            ; 0046bc2d
    FMUL ST4                            ; 0046bc2f
    LEA EAX,[ESP + 0x58]                ; 0046bc31
    FADDP ST3,ST0                       ; 0046bc35
    PUSH EAX                            ; 0046bc37
    FXCH ST2                            ; 0046bc38
    FSTP float ptr [ESP + 0x60]         ; 0046bc3a
    FADD float ptr [ESI + 0x8]          ; 0046bc3e
    LEA EAX,[ESP + 0x68]                ; 0046bc41
    FXCH                                ; 0046bc45
    FMULP ST2                           ; 0046bc47
    PUSH EAX                            ; 0046bc49
    LEA EAX,[ESP + 0x14]                ; 0046bc4a
    FADDP                               ; 0046bc4e
    PUSH EAX                            ; 0046bc50
    FSTP float ptr [ESP + 0x6c]         ; 0046bc51
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 0046bc55
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    FLD float ptr [EAX]                 ; 0046bc5a
    FADD float ptr [EDI]                ; 0046bc5c
    ADD ESP,0xc                         ; 0046bc5e
    FSTP float ptr [ESP + 0x34]         ; 0046bc61
    FLD float ptr [EAX + 0x4]           ; 0046bc65
    FADD float ptr [EDI + 0x4]          ; 0046bc68
    LEA EDX,[ESP + 0x4c]                ; 0046bc6b
    FSTP float ptr [ESP + 0x38]         ; 0046bc6f
    FLD float ptr [EAX + 0x8]           ; 0046bc73
    FADD float ptr [EDI + 0x8]          ; 0046bc76
    LEA EAX,[ESP + 0x34]                ; 0046bc79
    FSTP float ptr [ESP + 0x3c]         ; 0046bc7d
    CMP EDX,EAX                         ; 0046bc81
    JZ 0x0046bc9d                       ; 0046bc83
        ;   XREF to: 0046bc9d (CONDITIONAL_JUMP)  ; LAB_0046bc9d
    MOV EAX,dword ptr [ESP + 0x34]      ; 0046bc85
    MOV dword ptr [ESP + 0x4c],EAX      ; 0046bc89
    MOV EAX,dword ptr [ESP + 0x38]      ; 0046bc8d
    MOV dword ptr [ESP + 0x50],EAX      ; 0046bc91
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0046bc95
    MOV dword ptr [ESP + 0x54],EAX      ; 0046bc99
    LEA EAX,[ESP + 0x4c]                ; 0046bc9d
        ;   Label: LAB_0046bc9d
    PUSH EAX                            ; 0046bca1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046bca2
    PUSH EAX                            ; 0046bca5
    CALL core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0046bfe0 ; 0046bca6
        ;   XREF to: 0046bfe0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0046bfe0(CDemonRaytrace * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0046bcab
    INC EBX                             ; 0046bcae
    CMP EBX,dword ptr [ESP + 0x7c]      ; 0046bcaf
    JL 0x0046bbc0                       ; 0046bcb3
        ;   XREF to: 0046bbc0 (CONDITIONAL_JUMP)  ; LAB_0046bbc0
    MOV EAX,dword ptr [ESP + 0x80]      ; 0046bcb9
        ;   Label: LAB_0046bcb9
    INC EAX                             ; 0046bcc0
    MOV EDX,dword ptr [ESP + 0x74]      ; 0046bcc1
    MOV dword ptr [ESP + 0x80],EAX      ; 0046bcc5
    CMP EAX,EDX                         ; 0046bccc
    JL 0x0046bbb2                       ; 0046bcce
        ;   XREF to: 0046bbb2 (CONDITIONAL_JUMP)  ; LAB_0046bbb2
    MOV EAX,dword ptr [ESP + 0x78]      ; 0046bcd4
        ;   Label: LAB_0046bcd4
    INC EAX                             ; 0046bcd8
    MOV EDX,dword ptr [ESP + 0x70]      ; 0046bcd9
    MOV dword ptr [ESP + 0x78],EAX      ; 0046bcdd
    CMP EAX,EDX                         ; 0046bce1
    JL 0x0046bb9d                       ; 0046bce3
        ;   XREF to: 0046bb9d (CONDITIONAL_JUMP)  ; LAB_0046bb9d
    MOV ESP,EBP                         ; 0046bce9
        ;   Label: LAB_0046bce9
    POP EBP                             ; 0046bceb
    POP EDI                             ; 0046bcec
    POP ESI                             ; 0046bced
    POP EBX                             ; 0046bcee
    RET                                 ; 0046bcef

