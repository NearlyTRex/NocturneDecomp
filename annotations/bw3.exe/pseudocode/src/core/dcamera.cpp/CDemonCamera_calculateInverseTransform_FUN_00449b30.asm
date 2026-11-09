; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_calculateInverseTransform_FUN_00449b30(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; Local Variables:
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
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_00449dd0 at 00449e97
;
; Referenced Globals:
;   undefined4 DAT_005b9cf6
;   undefined4 DAT_005b9cfe
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00449b30
        ;   Label: core_dcamera.cpp_CDemonCamera_calculateInverseTransform_FUN_00449b30
    MOV EBP,ESP                         ; 00449b31
    SUB ESP,0x54                        ; 00449b33
    AND ESP,0xfffffff8                  ; 00449b36
    MOV EAX,dword ptr [EBP + 0x8]       ; 00449b39
    FILD dword ptr [EAX + 0x178]        ; 00449b3c
    FMUL double ptr [0x005b9cf6]        ; 00449b42 | DAT_005b9cf6
    FILD dword ptr [EAX + 0x17c]        ; 00449b48
    FMUL double ptr [0x005b9cf6]        ; 00449b4e | DAT_005b9cf6
    FILD dword ptr [EAX + 0x180]        ; 00449b54
    FMUL double ptr [0x005b9cf6]        ; 00449b5a | DAT_005b9cf6
    FILD dword ptr [EAX + 0x184]        ; 00449b60
    FMUL double ptr [0x005b9cf6]        ; 00449b66 | DAT_005b9cf6
    FILD dword ptr [EAX + 0x188]        ; 00449b6c
    FMUL double ptr [0x005b9cf6]        ; 00449b72 | DAT_005b9cf6
    FILD dword ptr [EAX + 0x18c]        ; 00449b78
    FMUL double ptr [0x005b9cf6]        ; 00449b7e | DAT_005b9cf6
    FILD dword ptr [EAX + 0x190]        ; 00449b84
    FMUL double ptr [0x005b9cf6]        ; 00449b8a | DAT_005b9cf6
    FXCH ST6                            ; 00449b90
    FSTP float ptr [ESP + 0x50]         ; 00449b92
    FILD dword ptr [EAX + 0x194]        ; 00449b96
    FMUL double ptr [0x005b9cf6]        ; 00449b9c | DAT_005b9cf6
    FXCH ST2                            ; 00449ba2
    FSTP float ptr [ESP + 0x44]         ; 00449ba4
    FILD dword ptr [EAX + 0x198]        ; 00449ba8
    FMUL double ptr [0x005b9cf6]        ; 00449bae | DAT_005b9cf6
    FXCH                                ; 00449bb4
    FST float ptr [ESP + 0x1c]          ; 00449bb6
    FXCH ST2                            ; 00449bba
    FSTP float ptr [ESP + 0xc]          ; 00449bbc
    FXCH                                ; 00449bc0
    FMUL float ptr [ESP + 0xc]          ; 00449bc2
    FLD float ptr [ESP + 0x44]          ; 00449bc6
    FXCH ST2                            ; 00449bca
    FSTP float ptr [ESP + 0x4]          ; 00449bcc
    FXCH                                ; 00449bd0
    FMUL float ptr [ESP + 0x4]          ; 00449bd2
    FSUBRP                              ; 00449bd6
    FLD float ptr [ESP + 0x50]          ; 00449bd8
    FXCH                                ; 00449bdc
    FSTP float ptr [ESP + 0x3c]         ; 00449bde
    FMUL float ptr [ESP + 0x3c]         ; 00449be2
    FXCH                                ; 00449be6
    FST float ptr [ESP + 0x48]          ; 00449be8
    FMUL float ptr [ESP + 0x4]          ; 00449bec
    FXCH ST3                            ; 00449bf0
    FST float ptr [ESP + 0x4c]          ; 00449bf2
    FMUL float ptr [ESP + 0x4]          ; 00449bf6
    FLD float ptr [ESP + 0x1c]          ; 00449bfa
    FXCH ST5                            ; 00449bfe
    FSTP float ptr [ESP + 0x8]          ; 00449c00
    FXCH ST4                            ; 00449c04
    FMUL float ptr [ESP + 0x8]          ; 00449c06
    FLD float ptr [ESP + 0x50]          ; 00449c0a
    FXCH                                ; 00449c0e
    FSUBP ST4,ST0                       ; 00449c10
    FMUL float ptr [ESP + 0x4]          ; 00449c12
    FXCH ST3                            ; 00449c16
    FSTP float ptr [ESP + 0x14]         ; 00449c18
    FLD float ptr [ESP + 0x4c]          ; 00449c1c
    FMUL float ptr [ESP + 0x14]         ; 00449c20
    FLD float ptr [ESP + 0x50]          ; 00449c24
    FXCH                                ; 00449c28
    FSUBP ST2,ST0                       ; 00449c2a
    FMUL float ptr [ESP + 0xc]          ; 00449c2c
    FLD float ptr [ESP + 0x48]          ; 00449c30
    FMUL float ptr [ESP + 0xc]          ; 00449c34
    FXCH ST3                            ; 00449c38
    FSTP float ptr [ESP + 0x18]         ; 00449c3a
    FLD float ptr [ESP + 0x4c]          ; 00449c3e
    FMUL float ptr [ESP + 0x1c]         ; 00449c42
    FXCH ST3                            ; 00449c46
    FSTP float ptr [ESP + 0x20]         ; 00449c48
    FLD float ptr [ESP + 0x44]          ; 00449c4c
    FMUL float ptr [ESP + 0x8]          ; 00449c50
    FLD float ptr [ESP + 0x18]          ; 00449c54
    FMUL float ptr [ESP + 0xc]          ; 00449c58
    FXCH                                ; 00449c5c
    FSUBR float ptr [ESP + 0x20]        ; 00449c5e
    FXCH                                ; 00449c62
    FSUBP ST6,ST0                       ; 00449c64
    FSTP float ptr [ESP + 0x40]         ; 00449c66
    FLD float ptr [ESP + 0x18]          ; 00449c6a
    FMUL float ptr [ESP + 0x40]         ; 00449c6e
    FXCH ST5                            ; 00449c72
    FCHS                                ; 00449c74
    FSTP float ptr [ESP + 0x30]         ; 00449c76
    FLD float ptr [ESP + 0x18]          ; 00449c7a
    FMUL float ptr [ESP + 0x8]          ; 00449c7e
    FLD float ptr [ESP + 0x50]          ; 00449c82
    FXCH                                ; 00449c86
    FSUBP ST5,ST0                       ; 00449c88
    FMUL float ptr [ESP + 0x1c]         ; 00449c8a
    FXCH ST4                            ; 00449c8e
    FSTP float ptr [ESP + 0x34]         ; 00449c90
    FLD float ptr [ESP + 0x4c]          ; 00449c94
    FMUL float ptr [ESP + 0x8]          ; 00449c98
    FLD float ptr [ESP + 0x18]          ; 00449c9c
    FMUL float ptr [ESP + 0x44]         ; 00449ca0
    FXCH                                ; 00449ca4
    FSUBP ST2,ST0                       ; 00449ca6
    FLD float ptr [ESP + 0x18]          ; 00449ca8
    FMUL float ptr [ESP + 0x48]         ; 00449cac
    FXCH                                ; 00449cb0
    FSUBP ST4,ST0                       ; 00449cb2
    FSUBP ST4,ST0                       ; 00449cb4
    FCHS                                ; 00449cb6
    FXCH ST2                            ; 00449cb8
    FSTP float ptr [ESP + 0x28]         ; 00449cba
    FXCH ST2                            ; 00449cbe
    FCHS                                ; 00449cc0
    FXCH                                ; 00449cc2
    FSTP float ptr [ESP + 0x2c]         ; 00449cc4
    FSTP float ptr [ESP + 0x38]         ; 00449cc8
    FLD float ptr [ESP + 0x14]          ; 00449ccc
    FCHS                                ; 00449cd0
    FXCH ST2                            ; 00449cd2
    FADDP                               ; 00449cd4
    FXCH                                ; 00449cd6
    FSTP float ptr [ESP + 0x24]         ; 00449cd8
    FSTP float ptr [ESP]                ; 00449cdc
    FLD float ptr [ESP]                 ; 00449cdf
    FDIVR double ptr [0x005b9cfe]       ; 00449ce2 | DAT_005b9cfe
    FLD float ptr [ESP + 0x50]          ; 00449ce8
    FMUL float ptr [ESP + 0x44]         ; 00449cec
    FLD float ptr [ESP + 0x4c]          ; 00449cf0
    FMUL float ptr [ESP + 0x48]         ; 00449cf4
    FLD float ptr [ESP + 0x3c]          ; 00449cf8
    FXCH ST3                            ; 00449cfc
    FSTP float ptr [ESP]                ; 00449cfe
    FXCH ST2                            ; 00449d01
    FMUL float ptr [ESP]                ; 00449d03
    FLD float ptr [ESP + 0x30]          ; 00449d06
    FMUL float ptr [ESP]                ; 00449d0a
    FLD float ptr [ESP + 0x28]          ; 00449d0d
    FMUL float ptr [ESP]                ; 00449d11
    FLD float ptr [ESP + 0x24]          ; 00449d14
    FMUL float ptr [ESP]                ; 00449d18
    FXCH ST5                            ; 00449d1b
    FSUBP ST4,ST0                       ; 00449d1d
    FXCH ST3                            ; 00449d1f
    FSTP float ptr [ESP + 0x10]         ; 00449d21
    FLD float ptr [ESP + 0x34]          ; 00449d25
    FMUL float ptr [ESP]                ; 00449d29
    FLD float ptr [ESP + 0x38]          ; 00449d2c
    FMUL float ptr [ESP]                ; 00449d30
    FLD float ptr [ESP + 0x40]          ; 00449d33
    FMUL float ptr [ESP]                ; 00449d37
    FXCH ST4                            ; 00449d3a
    CALL crt_math.c_round_FUN_005a3120  ; 00449d3c
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EAX + 0x19c]       ; 00449d41
    FLD float ptr [ESP + 0x2c]          ; 00449d47
    FMUL float ptr [ESP]                ; 00449d4b
    FXCH ST3                            ; 00449d4e
    CALL crt_math.c_round_FUN_005a3120  ; 00449d50
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EAX + 0x1a0]       ; 00449d55
    FLD float ptr [ESP + 0x10]          ; 00449d5b
    FMUL float ptr [ESP]                ; 00449d5f
    FXCH ST5                            ; 00449d62
    CALL crt_math.c_round_FUN_005a3120  ; 00449d64
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST6                            ; 00449d69
    CALL crt_math.c_round_FUN_005a3120  ; 00449d6b
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST2                            ; 00449d70
    CALL crt_math.c_round_FUN_005a3120  ; 00449d72
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 00449d77
    CALL crt_math.c_round_FUN_005a3120  ; 00449d79
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST4                            ; 00449d7e
    CALL crt_math.c_round_FUN_005a3120  ; 00449d80
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST3                            ; 00449d85
    CALL crt_math.c_round_FUN_005a3120  ; 00449d87
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST5                            ; 00449d8c
    CALL crt_math.c_round_FUN_005a3120  ; 00449d8e
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST6                            ; 00449d93
    FISTP dword ptr [EAX + 0x1a4]       ; 00449d95
    FXCH                                ; 00449d9b
    FISTP dword ptr [EAX + 0x1a8]       ; 00449d9d
    FISTP dword ptr [EAX + 0x1ac]       ; 00449da3
    FXCH                                ; 00449da9
    FISTP dword ptr [EAX + 0x1b0]       ; 00449dab
    FISTP dword ptr [EAX + 0x1b4]       ; 00449db1
    FISTP dword ptr [EAX + 0x1b8]       ; 00449db7
    FISTP dword ptr [EAX + 0x1bc]       ; 00449dbd
    MOV ESP,EBP                         ; 00449dc3
    POP EBP                             ; 00449dc5
    RET                                 ; 00449dc6

