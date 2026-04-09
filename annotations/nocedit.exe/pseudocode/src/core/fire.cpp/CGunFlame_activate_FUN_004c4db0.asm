; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CGunFlame_activate_FUN_004c4db0(CGunFlame *this_ptr,CVector3f *position,CVector3f *euler_angles,int flame_type)
;
; Parameters:
; CGunFlame *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   euler_angles
; int              Stack[0x10]:4   flame_type
; Local Variables:
; CMatrix3x3f      Stack[-0x6c]:36  local_6c
; CVector3f        Stack[-0x38]:12  local_38
; CVector3f        Stack[-0x2c]:12  local_2c
; CVector3f        Stack[-0x20]:12  local_20
; float            Stack[-0x10]:4  local_10
; float            Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createGunFlames_FUN_004c8ef0 at 004c8f20
;
; Referenced Globals:
;   float FLOAT_0065dcc4 = 2
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4db0
        ;   Label: core_fire.cpp_CGunFlame_activate_FUN_004c4db0
    PUSH ESI                            ; 004c4db1
    SUB ESP,0x64                        ; 004c4db2
    MOV EBX,dword ptr [ESP + 0x70]      ; 004c4db5
    MOV EDX,dword ptr [ESP + 0x74]      ; 004c4db9
    MOV ESI,dword ptr [ESP + 0x78]      ; 004c4dbd
    LEA EAX,[EBX + 0x4]                 ; 004c4dc1
    CMP EAX,EDX                         ; 004c4dc4
    JZ 0x004c4dd8                       ; 004c4dc6
        ;   XREF to: 004c4dd8 (CONDITIONAL_JUMP)  ; LAB_004c4dd8
    MOV ECX,dword ptr [EDX]             ; 004c4dc8
    MOV dword ptr [EAX],ECX             ; 004c4dca
    MOV ECX,dword ptr [EDX + 0x4]       ; 004c4dcc
    MOV dword ptr [EAX + 0x4],ECX       ; 004c4dcf
    MOV ECX,dword ptr [EDX + 0x8]       ; 004c4dd2
    MOV dword ptr [EAX + 0x8],ECX       ; 004c4dd5
    PUSH 0x3f800000                     ; 004c4dd8
        ;   Label: LAB_004c4dd8
    PUSH 0x3f666666                     ; 004c4ddd
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004c4de2
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x68],EAX      ; 004c4de7
    FLD float ptr [ESP + 0x68]          ; 004c4deb
    FLD float ptr [0x0065dcc4]          ; 004c4def | FLOAT_0065dcc4
    ADD ESP,0x8                         ; 004c4df5
    FMULP                               ; 004c4df8
    PUSH 0x41980000                     ; 004c4dfa
    PUSH 0x0                            ; 004c4dff
    FSTP float ptr [EBX]                ; 004c4e01
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004c4e03
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x68],EAX      ; 004c4e08
    MOV EAX,dword ptr [ESP + 0x68]      ; 004c4e0c
    MOV dword ptr [EBX + 0x1c],EAX      ; 004c4e10
    ADD ESP,0x8                         ; 004c4e13
    MOV EAX,dword ptr [ESI]             ; 004c4e16
    MOV dword ptr [ESP + 0x4c],EAX      ; 004c4e18
    LEA EAX,[ESI + 0x4]                 ; 004c4e1c
    MOV EAX,dword ptr [EAX]             ; 004c4e1f
    MOV dword ptr [ESP + 0x50],EAX      ; 004c4e21
    LEA EAX,[ESI + 0x8]                 ; 004c4e25
    PUSH 0x3d567750                     ; 004c4e28
    MOV EAX,dword ptr [EAX]             ; 004c4e2d
    PUSH 0xbd567750                     ; 004c4e2f
    MOV dword ptr [ESP + 0x5c],EAX      ; 004c4e34
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004c4e38
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x68],EAX      ; 004c4e3d
    FLD float ptr [ESP + 0x68]          ; 004c4e41
    ADD ESP,0x8                         ; 004c4e45
    PUSH 0x3d567750                     ; 004c4e48
    FADD float ptr [ESP + 0x54]         ; 004c4e4d
    PUSH 0xbd567750                     ; 004c4e51
    FSTP float ptr [ESP + 0x58]         ; 004c4e56
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004c4e5a
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x68],EAX      ; 004c4e5f
    FLD float ptr [ESP + 0x68]          ; 004c4e63
    ADD ESP,0x8                         ; 004c4e67
    LEA EAX,[ESP + 0x4c]                ; 004c4e6a
    PUSH EAX                            ; 004c4e6e
    LEA EAX,[ESP + 0x4]                 ; 004c4e6f
    FADD float ptr [ESP + 0x50]         ; 004c4e73
    PUSH EAX                            ; 004c4e77
    FSTP float ptr [ESP + 0x54]         ; 004c4e78
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 004c4e7c
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004c4e81
    PUSH 0x40cccccd                     ; 004c4e84
    PUSH 0x40a33333                     ; 004c4e89
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004c4e8e
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x68],EAX      ; 004c4e93
    FLD float ptr [ESP + 0x68]          ; 004c4e97
    ADD ESP,0x8                         ; 004c4e9b
    FSTP float ptr [ESP + 0x5c]         ; 004c4e9e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004c4ea2
    MOV dword ptr [ESP + 0x3c],EAX      ; 004c4ea6
    LEA EAX,[ESP + 0x34]                ; 004c4eaa
    PUSH EAX                            ; 004c4eae
    LEA EAX,[ESP + 0x44]                ; 004c4eaf
    PUSH EAX                            ; 004c4eb3
    LEA EAX,[ESP + 0x8]                 ; 004c4eb4
    XOR EDX,EDX                         ; 004c4eb8
    PUSH EAX                            ; 004c4eba
    MOV dword ptr [ESP + 0x40],EDX      ; 004c4ebb
    MOV dword ptr [ESP + 0x44],EDX      ; 004c4ebf
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 004c4ec3
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    LEA EDX,[EBX + 0x10]                ; 004c4ec8
    ADD ESP,0xc                         ; 004c4ecb
    CMP EDX,EAX                         ; 004c4ece
    JZ 0x004c4ee2                       ; 004c4ed0
        ;   XREF to: 004c4ee2 (CONDITIONAL_JUMP)  ; LAB_004c4ee2
    MOV ECX,dword ptr [EAX]             ; 004c4ed2
    MOV dword ptr [EDX],ECX             ; 004c4ed4
    MOV ECX,dword ptr [EAX + 0x4]       ; 004c4ed6
    MOV dword ptr [EDX + 0x4],ECX       ; 004c4ed9
    MOV ECX,dword ptr [EAX + 0x8]       ; 004c4edc
    MOV dword ptr [EDX + 0x8],ECX       ; 004c4edf
    PUSH 0x3dcccccd                     ; 004c4ee2
        ;   Label: LAB_004c4ee2
    PUSH 0x0                            ; 004c4ee7
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004c4ee9
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x68],EAX      ; 004c4eee
    LEA EAX,[EBX + 0x10]                ; 004c4ef2
    FLD float ptr [ESP + 0x68]          ; 004c4ef5
    ADD ESP,0x8                         ; 004c4ef9
    FLD float ptr [EAX]                 ; 004c4efc
    FXCH                                ; 004c4efe
    FSTP float ptr [ESP + 0x58]         ; 004c4f00
    FMUL float ptr [ESP + 0x58]         ; 004c4f04
    FSTP float ptr [ESP + 0x28]         ; 004c4f08
    FLD float ptr [EAX + 0x4]           ; 004c4f0c
    FMUL float ptr [ESP + 0x58]         ; 004c4f0f
    FSTP float ptr [ESP + 0x2c]         ; 004c4f13
    FLD float ptr [EAX + 0x8]           ; 004c4f17
    FMUL float ptr [ESP + 0x58]         ; 004c4f1a
    LEA EAX,[EBX + 0x4]                 ; 004c4f1e
    FSTP float ptr [ESP + 0x30]         ; 004c4f21
    FLD float ptr [EAX]                 ; 004c4f25
    FADD float ptr [ESP + 0x28]         ; 004c4f27
    FLD float ptr [EAX + 0x4]           ; 004c4f2b
    FXCH                                ; 004c4f2e
    FSTP float ptr [EAX]                ; 004c4f30
    FADD float ptr [ESP + 0x2c]         ; 004c4f32
    FLD float ptr [EAX + 0x8]           ; 004c4f36
    FXCH                                ; 004c4f39
    FSTP float ptr [EAX + 0x4]          ; 004c4f3b
    FADD float ptr [ESP + 0x30]         ; 004c4f3e
    FSTP float ptr [EAX + 0x8]          ; 004c4f42
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004c4f45
    MOV dword ptr [EBX + 0x20],EAX      ; 004c4f49
    ADD ESP,0x64                        ; 004c4f4c
    POP ESI                             ; 004c4f4f
    POP EBX                             ; 004c4f50
    RET                                 ; 004c4f51

