; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
;
; Parameters:
; CMatrix3x3f *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   euler_angles
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[46]:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 at 00408c62
;   core_bodypart.cpp_FUN_0041a630 at 0041a651
;   core_bodypart.cpp_FUN_0041aa40 at 0041aac2
;   core_box.cpp_CBox_processPhysics_FUN_0041e350 at 0041e758
;   core_box.cpp_CBox_updateTransform_FUN_0041e0e0 at 0041e11a
;   core_boxactor.cpp_FUN_00422a50 at 00422c51
;   core_bugs.cpp_FUN_00425cc0 at 00425e41
;   core_bugs.cpp_FUN_00425fe0 at 004262c8
;   core_charactr.cpp_CCharacter_FUN_0042ede0 at 0042efa5
;   core_cloth.cpp_FUN_0043abb0 at 0043aebc
;   ... and 36 more
;
; *****************************************************************************

section .text

    SUB ESP,0x34                        ; 00471d30
        ;   Label: core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
    MOV EDX,dword ptr [ESP + 0x38]      ; 00471d33
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00471d37
    FLD float ptr [ECX]                 ; 00471d3b
    FLD ST0                             ; 00471d3d
    FSIN                                ; 00471d3f
    FLD float ptr [ECX + 0x8]           ; 00471d41
    FLD ST0                             ; 00471d44
    FSIN                                ; 00471d46
    FLD float ptr [ECX + 0x4]           ; 00471d48
    FLD ST0                             ; 00471d4b
    FSIN                                ; 00471d4d
    FXCH ST5                            ; 00471d4f
    FCOS                                ; 00471d51
    FXCH ST3                            ; 00471d53
    FCOS                                ; 00471d55
    FXCH                                ; 00471d57
    FCOS                                ; 00471d59
    FXCH ST5                            ; 00471d5b
    FST float ptr [ESP + 0x24]          ; 00471d5d
    FXCH ST4                            ; 00471d61
    FSTP float ptr [ESP + 0x28]         ; 00471d63
    FXCH ST3                            ; 00471d67
    FMUL float ptr [ESP + 0x28]         ; 00471d69
    FLD float ptr [ESP + 0x24]          ; 00471d6d
    FMUL ST3                            ; 00471d71
    FXCH ST2                            ; 00471d73
    FST float ptr [ESP + 0x1c]          ; 00471d75
    FMUL ST3                            ; 00471d79
    FXCH ST4                            ; 00471d7b
    FST float ptr [ESP + 0x20]          ; 00471d7d
    FMUL ST3                            ; 00471d81
    FXCH ST5                            ; 00471d83
    FST float ptr [ESP + 0x18]          ; 00471d85
    FMUL float ptr [ESP + 0x28]         ; 00471d89
    FLD float ptr [ESP + 0x18]          ; 00471d8d
    FMULP ST4                           ; 00471d91
    FLD ST1                             ; 00471d93
    FMUL float ptr [ESP + 0x1c]         ; 00471d95
    FXCH ST2                            ; 00471d99
    FMUL float ptr [ESP + 0x20]         ; 00471d9b
    FXCH ST3                            ; 00471d9f
    FSTP float ptr [EDX + 0x8]          ; 00471da1
    FLD float ptr [ESP + 0x28]          ; 00471da4
    FCHS                                ; 00471da8
    FSTP float ptr [EDX + 0x14]         ; 00471daa
    FLD ST0                             ; 00471dad
    FMUL float ptr [ESP + 0x1c]         ; 00471daf
    FXCH ST5                            ; 00471db3
    FSTP float ptr [EDX + 0xc]          ; 00471db5
    FLD float ptr [ESP + 0x18]          ; 00471db8
    FMUL float ptr [ESP + 0x20]         ; 00471dbc
    FXCH ST6                            ; 00471dc0
    FSTP float ptr [EDX + 0x10]         ; 00471dc2
    FLD float ptr [ESP + 0x18]          ; 00471dc5
    FCHS                                ; 00471dc9
    FMUL float ptr [ESP + 0x1c]         ; 00471dcb
    FXCH ST6                            ; 00471dcf
    FADDP ST2,ST0                       ; 00471dd1
    FMUL float ptr [ESP + 0x20]         ; 00471dd3
    FXCH ST5                            ; 00471dd7
    FADDP ST2,ST0                       ; 00471dd9
    FLD float ptr [ESP + 0x1c]          ; 00471ddb
    FMUL float ptr [ESP + 0x24]         ; 00471ddf
    FLD float ptr [ESP + 0x24]          ; 00471de3
    FCHS                                ; 00471de7
    FMUL float ptr [ESP + 0x20]         ; 00471de9
    FXCH ST4                            ; 00471ded
    FSTP float ptr [EDX + 0x20]         ; 00471def
    FADDP ST5,ST0                       ; 00471df2
    FSTP float ptr [EDX]                ; 00471df4
    FXCH                                ; 00471df6
    FADDP ST2,ST0                       ; 00471df8
    FSTP float ptr [EDX + 0x4]          ; 00471dfa
    FXCH                                ; 00471dfd
    FSTP float ptr [EDX + 0x1c]         ; 00471dff
    FSTP float ptr [EDX + 0x18]         ; 00471e02
    ADD ESP,0x34                        ; 00471e05
    RET                                 ; 00471e08

