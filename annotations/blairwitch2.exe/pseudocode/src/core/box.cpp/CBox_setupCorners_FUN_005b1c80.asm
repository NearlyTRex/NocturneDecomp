; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBox_setupCorners_FUN_005b1c80(CBox *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *extents,float volume)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   orientation
; CVector3f *      Stack[0x10]:4   extents
; float            Stack[0x14]:4   volume
;
; XREF[7]:
;   core_bodypart.cpp_FUN_004178c0 at 00417a55
;   core_box.cpp_FUN_005b4300 at 005b43fb
;   core_boxactor.cpp_FUN_0041bf10 at 0041c076
;   core_fire.cpp_CStake_spawn_FUN_004941c0 at 00494412
;   core_fire.cpp_FUN_004992b0 at 0049938c
;   core_simbox.cpp_FUN_00540070 at 00540132
;   core_weapon.cpp_FUN_0058a2f0 at 0058a42d
;
; Referenced Globals:
;   undefined4 DAT_005f1288
;
; Called Functions:
;   core_box.cpp_FUN_005b2050
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b1c80
        ;   Label: core_box.cpp_CBox_setupCorners_FUN_005b1c80
    MOV ECX,dword ptr [ESP + 0x10]      ; 005b1c84
    LEA EDX,[EAX + 0xa4]                ; 005b1c88
    CMP EDX,ECX                         ; 005b1c8e
    JZ 0x005b1ca4                       ; 005b1c90
        ;   XREF to: 005b1ca4 (CONDITIONAL_JUMP)  ; LAB_005b1ca4
    PUSH EBX                            ; 005b1c92
    MOV EBX,dword ptr [ECX]             ; 005b1c93
    MOV dword ptr [EDX],EBX             ; 005b1c95
    MOV EBX,dword ptr [ECX + 0x4]       ; 005b1c97
    MOV dword ptr [EDX + 0x4],EBX       ; 005b1c9a
    MOV EBX,dword ptr [ECX + 0x8]       ; 005b1c9d
    MOV dword ptr [EDX + 0x8],EBX       ; 005b1ca0
    POP EBX                             ; 005b1ca3
    FLD float ptr [EAX + 0xa4]          ; 005b1ca4
        ;   Label: LAB_005b1ca4
    FMUL double ptr [0x005f1288]        ; 005b1caa | DAT_005f1288
    FLD float ptr [EAX + 0xac]          ; 005b1cb0
    FMUL double ptr [0x005f1288]        ; 005b1cb6 | DAT_005f1288
    FLD float ptr [EAX + 0xac]          ; 005b1cbc
    FMUL double ptr [0x005f1288]        ; 005b1cc2 | DAT_005f1288
    FLD float ptr [EAX + 0xa4]          ; 005b1cc8
    FMUL double ptr [0x005f1288]        ; 005b1cce | DAT_005f1288
    FLD float ptr [EAX + 0xa4]          ; 005b1cd4
    FMUL double ptr [0x005f1288]        ; 005b1cda | DAT_005f1288
    FLD float ptr [EAX + 0xa8]          ; 005b1ce0
    FMUL double ptr [0x005f1288]        ; 005b1ce6 | DAT_005f1288
    FLD float ptr [EAX + 0xa8]          ; 005b1cec
    FCHS                                ; 005b1cf2
    MOV dword ptr [EAX + 0xb0],0x8      ; 005b1cf4
    FMUL double ptr [0x005f1288]        ; 005b1cfe | DAT_005f1288
    FXCH ST6                            ; 005b1d04
    FSTP float ptr [EAX + 0xb4]         ; 005b1d06
    FLD float ptr [EAX + 0xac]          ; 005b1d0c
    FMUL double ptr [0x005f1288]        ; 005b1d12 | DAT_005f1288
    FXCH ST6                            ; 005b1d18
    FSTP float ptr [EAX + 0xb8]         ; 005b1d1a
    FLD float ptr [EAX + 0xa4]          ; 005b1d20
    FCHS                                ; 005b1d26
    FMUL double ptr [0x005f1288]        ; 005b1d28 | DAT_005f1288
    FXCH ST5                            ; 005b1d2e
    FSTP float ptr [EAX + 0xbc]         ; 005b1d30
    FLD float ptr [EAX + 0xa8]          ; 005b1d36
    FCHS                                ; 005b1d3c
    FMUL double ptr [0x005f1288]        ; 005b1d3e | DAT_005f1288
    FXCH ST5                            ; 005b1d44
    FSTP float ptr [EAX + 0xe8]         ; 005b1d46
    FLD float ptr [EAX + 0xa8]          ; 005b1d4c
    FMUL double ptr [0x005f1288]        ; 005b1d52 | DAT_005f1288
    FXCH ST5                            ; 005b1d58
    FSTP float ptr [EAX + 0xec]         ; 005b1d5a
    FLD float ptr [EAX + 0xa4]          ; 005b1d60
    FCHS                                ; 005b1d66
    FMUL double ptr [0x005f1288]        ; 005b1d68 | DAT_005f1288
    FXCH ST4                            ; 005b1d6e
    FSTP float ptr [EAX + 0xf0]         ; 005b1d70
    FLD float ptr [EAX + 0xa8]          ; 005b1d76
    FCHS                                ; 005b1d7c
    FMUL double ptr [0x005f1288]        ; 005b1d7e | DAT_005f1288
    FXCH ST4                            ; 005b1d84
    FSTP float ptr [EAX + 0x11c]        ; 005b1d86
    FLD float ptr [EAX + 0xac]          ; 005b1d8c
    FCHS                                ; 005b1d92
    FMUL double ptr [0x005f1288]        ; 005b1d94 | DAT_005f1288
    FXCH ST4                            ; 005b1d9a
    FSTP float ptr [EAX + 0x120]        ; 005b1d9c
    FLD float ptr [EAX + 0xa8]          ; 005b1da2
    FCHS                                ; 005b1da8
    FMUL double ptr [0x005f1288]        ; 005b1daa | DAT_005f1288
    FXCH ST3                            ; 005b1db0
    FSTP float ptr [EAX + 0x150]        ; 005b1db2
    FLD float ptr [EAX + 0xac]          ; 005b1db8
    FCHS                                ; 005b1dbe
    FMUL double ptr [0x005f1288]        ; 005b1dc0 | DAT_005f1288
    FXCH ST2                            ; 005b1dc6
    FSTP float ptr [EAX + 0x184]        ; 005b1dc8
    FLD float ptr [EAX + 0xac]          ; 005b1dce
    FMUL double ptr [0x005f1288]        ; 005b1dd4 | DAT_005f1288
    FXCH                                ; 005b1dda
    FSTP float ptr [EAX + 0x188]        ; 005b1ddc
    FLD float ptr [EAX + 0xa8]          ; 005b1de2
    FMUL double ptr [0x005f1288]        ; 005b1de8 | DAT_005f1288
    FXCH ST6                            ; 005b1dee
    FSTP float ptr [EAX + 0x18c]        ; 005b1df0
    FLD float ptr [EAX + 0xa4]          ; 005b1df6
    FCHS                                ; 005b1dfc
    FMUL double ptr [0x005f1288]        ; 005b1dfe | DAT_005f1288
    FXCH ST5                            ; 005b1e04
    FSTP float ptr [EAX + 0x1bc]        ; 005b1e06
    FLD float ptr [EAX + 0xa4]          ; 005b1e0c
    FCHS                                ; 005b1e12
    FMUL double ptr [0x005f1288]        ; 005b1e14 | DAT_005f1288
    FXCH                                ; 005b1e1a
    FSTP float ptr [EAX + 0x1c0]        ; 005b1e1c
    FLD float ptr [EAX + 0xac]          ; 005b1e22
    FCHS                                ; 005b1e28
    FMUL double ptr [0x005f1288]        ; 005b1e2a | DAT_005f1288
    FXCH ST6                            ; 005b1e30
    FSTP float ptr [EAX + 0x1f0]        ; 005b1e32
    FXCH ST3                            ; 005b1e38
    FSTP float ptr [EAX + 0x124]        ; 005b1e3a
    FXCH                                ; 005b1e40
    FSTP float ptr [EAX + 0x154]        ; 005b1e42
    FSTP float ptr [EAX + 0x158]        ; 005b1e48
    FXCH                                ; 005b1e4e
    FSTP float ptr [EAX + 0x1b8]        ; 005b1e50
    FSTP float ptr [EAX + 0x1ec]        ; 005b1e56
    FSTP float ptr [EAX + 0x1f4]        ; 005b1e5c
    FLD double ptr [0x005f1288]         ; 005b1e62 | DAT_005f1288
    FLD float ptr [EAX + 0xa4]          ; 005b1e68
    FMUL ST1                            ; 005b1e6e
    FLD float ptr [EAX + 0xa8]          ; 005b1e70
    FMUL ST2                            ; 005b1e76
    FLD float ptr [EAX + 0xac]          ; 005b1e78
    FCHS                                ; 005b1e7e
    FMULP ST3                           ; 005b1e80
    PUSH dword ptr [ESP + 0x14]         ; 005b1e82
    MOV EDX,dword ptr [ESP + 0x10]      ; 005b1e86
    MOV ECX,dword ptr [ESP + 0xc]       ; 005b1e8a
    PUSH EDX                            ; 005b1e8e
    FXCH                                ; 005b1e8f
    FSTP float ptr [EAX + 0x220]        ; 005b1e91
    PUSH ECX                            ; 005b1e97
    FSTP float ptr [EAX + 0x224]        ; 005b1e98
    PUSH EAX                            ; 005b1e9e
    FSTP float ptr [EAX + 0x228]        ; 005b1e9f
    CALL core_box.cpp_FUN_005b2050      ; 005b1ea5
        ;   XREF to: 005b2050 (UNCONDITIONAL_CALL)  ; void core_box.cpp_FUN_005b2050(CBox * this_ptr, CVector3f * new_position, CVector3f * new_orientation, float speed)
    ADD ESP,0x10                        ; 005b1eaa
    RET                                 ; 005b1ead

