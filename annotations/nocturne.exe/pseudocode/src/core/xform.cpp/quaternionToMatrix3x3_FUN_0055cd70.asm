; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CQuaternion4f * __cdecl core_xform_cpp_quaternionToMatrix3x3_FUN_0055cd70(CMatrix3x4f *matrix_out,CQuaternion4f *quat_in)
;
; Parameters:
; CMatrix3x4f *    Stack[0x4]:4   matrix_out
; CQuaternion4f *  Stack[0x8]:4   quat_in
; Local Variables:
; undefined8       Stack[-0x70]:8  local_70
; undefined8       Stack[-0x68]:8  local_68
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[7]:
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0 at 0051d428
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0 at 0051d175
;   core_skeleton.cpp_computeBoneWorldMatrices_FUN_0051f1d0 at 0051f243
;   core_xform.cpp_lerpMatrix3x4_FUN_0055cc30 at 0055cd0c
;   core_xform.cpp_quaternionToEulerAnglesZYX_FUN_0055d5e0 at 0055d5f2
;   core_xform.cpp_quaternionToEulerAngles_FUN_0055d5b0 at 0055d5c2
;   core_xform.cpp_quaternionToMatrix3x4_FUN_0055ced0 at 0055cee1
;
; Referenced Globals:
;   double DOUBLE_0059834e = 2
;
; *****************************************************************************

section .text

    SUB ESP,0x88                        ; 0055cd70
        ;   Label: core_xform.cpp_quaternionToMatrix3x3_FUN_0055cd70
    MOV EDX,dword ptr [ESP + 0x8c]      ; 0055cd76
    MOV EAX,dword ptr [ESP + 0x90]      ; 0055cd7d
    FLD float ptr [EAX + 0x4]           ; 0055cd84
    FMUL ST0                            ; 0055cd87
    FLD float ptr [EAX]                 ; 0055cd89
    FMUL ST0                            ; 0055cd8b
    FADDP                               ; 0055cd8d
    FLD float ptr [EAX + 0x8]           ; 0055cd8f
    FMUL ST0                            ; 0055cd92
    FADDP                               ; 0055cd94
    FLD float ptr [EAX + 0xc]           ; 0055cd96
    FMUL ST0                            ; 0055cd99
    FLD float ptr [EAX + 0x4]           ; 0055cd9b
    FXCH                                ; 0055cd9e
    FADDP ST2,ST0                       ; 0055cda0
    FLD ST0                             ; 0055cda2
    FXCH ST2                            ; 0055cda4
    FDIVR double ptr [0x0059834e]       ; 0055cda6 | DOUBLE_0059834e
    FXCH ST2                            ; 0055cdac
    FMUL ST2                            ; 0055cdae
    FLD float ptr [EAX + 0x8]           ; 0055cdb0
    FST double ptr [ESP + 0x70]         ; 0055cdb3
    FMUL ST3                            ; 0055cdb7
    FLD float ptr [EAX + 0xc]           ; 0055cdb9
    FST double ptr [ESP + 0x78]         ; 0055cdbc
    FMULP ST4                           ; 0055cdc0
    FLD float ptr [EAX]                 ; 0055cdc2
    FLD ST0                             ; 0055cdc4
    FMUL ST3                            ; 0055cdc6
    FLD ST1                             ; 0055cdc8
    FXCH ST3                            ; 0055cdca
    FSTP double ptr [ESP + 0x18]        ; 0055cdcc
    FXCH ST2                            ; 0055cdd0
    FMUL double ptr [ESP + 0x18]        ; 0055cdd2
    FXCH ST5                            ; 0055cdd6
    FSTP double ptr [ESP + 0x20]        ; 0055cdd8
    FMUL double ptr [ESP + 0x20]        ; 0055cddc
    FLD ST3                             ; 0055cde0
    FMULP ST3                           ; 0055cde2
    FLD ST3                             ; 0055cde4
    FMUL double ptr [ESP + 0x18]        ; 0055cde6
    FXCH ST4                            ; 0055cdea
    FMUL double ptr [ESP + 0x20]        ; 0055cdec
    FLD double ptr [ESP + 0x70]         ; 0055cdf0
    FMUL double ptr [ESP + 0x18]        ; 0055cdf4
    FXCH ST6                            ; 0055cdf8
    FSTP double ptr [ESP + 0x30]        ; 0055cdfa
    FLD double ptr [ESP + 0x70]         ; 0055cdfe
    FMUL double ptr [ESP + 0x20]        ; 0055ce02
    FXCH ST2                            ; 0055ce06
    FSTP double ptr [ESP + 0x38]        ; 0055ce08
    FLD double ptr [ESP + 0x78]         ; 0055ce0c
    FMUL double ptr [ESP + 0x20]        ; 0055ce10
    FXCH ST5                            ; 0055ce14
    FSTP double ptr [ESP + 0x48]        ; 0055ce16
    FXCH ST5                            ; 0055ce1a
    FST double ptr [ESP + 0x58]         ; 0055ce1c
    FXCH ST2                            ; 0055ce20
    FSTP double ptr [ESP + 0x28]        ; 0055ce22
    FLD double ptr [ESP + 0x48]         ; 0055ce26
    FXCH ST5                            ; 0055ce2a
    FST double ptr [ESP + 0x50]         ; 0055ce2c
    FXCH ST3                            ; 0055ce30
    FSTP double ptr [ESP + 0x40]        ; 0055ce32
    FLD double ptr [ESP + 0x48]         ; 0055ce36
    FLD double ptr [ESP + 0x40]         ; 0055ce3a
    FXCH ST2                            ; 0055ce3e
    FST double ptr [ESP + 0x60]         ; 0055ce40
    FXCH ST5                            ; 0055ce44
    FSTP double ptr [ESP + 0x68]        ; 0055ce46
    FXCH ST2                            ; 0055ce4a
    FADD double ptr [ESP + 0x68]        ; 0055ce4c
    FXCH ST5                            ; 0055ce50
    FADD double ptr [ESP + 0x38]        ; 0055ce52
    FXCH ST3                            ; 0055ce56
    FSUB double ptr [ESP + 0x30]        ; 0055ce58
    FXCH ST2                            ; 0055ce5c
    FSUB double ptr [ESP + 0x38]        ; 0055ce5e
    FXCH                                ; 0055ce62
    FADD double ptr [ESP + 0x68]        ; 0055ce64
    FXCH ST4                            ; 0055ce68
    FADD double ptr [ESP + 0x28]        ; 0055ce6a
    FLD1                                ; 0055ce6e
    FXCH ST4                            ; 0055ce70
    FSTP float ptr [EDX + 0x10]         ; 0055ce72
    FLD double ptr [ESP + 0x50]         ; 0055ce75
    FADD double ptr [ESP + 0x30]        ; 0055ce79
    FXCH ST3                            ; 0055ce7d
    FSTP float ptr [EDX + 0x20]         ; 0055ce7f
    FLD double ptr [ESP + 0x60]         ; 0055ce82
    FSUB double ptr [ESP + 0x28]        ; 0055ce86
    FXCH ST2                            ; 0055ce8a
    FSTP float ptr [EDX + 0x4]          ; 0055ce8c
    FLD1                                ; 0055ce8f
    FXCH                                ; 0055ce91
    FSTP float ptr [EDX + 0x24]         ; 0055ce93
    FLD double ptr [ESP + 0x40]         ; 0055ce96
    FADD double ptr [ESP + 0x58]        ; 0055ce9a
    FXCH ST3                            ; 0055ce9e
    FSTP float ptr [EDX + 0x8]          ; 0055cea0
    FLD1                                ; 0055cea3
    FXCH ST2                            ; 0055cea5
    FSTP float ptr [EDX + 0x18]         ; 0055cea7
    FXCH ST3                            ; 0055ceaa
    FSUBRP ST5,ST0                      ; 0055ceac
    FXCH ST2                            ; 0055ceae
    FSUBRP ST3,ST0                      ; 0055ceb0
    FSUBP                               ; 0055ceb2
    FXCH ST2                            ; 0055ceb4
    FSTP float ptr [EDX]                ; 0055ceb6
    FSTP float ptr [EDX + 0x14]         ; 0055ceb8
    FSTP float ptr [EDX + 0x28]         ; 0055cebb
    ADD ESP,0x88                        ; 0055cebe
    RET                                 ; 0055cec4

