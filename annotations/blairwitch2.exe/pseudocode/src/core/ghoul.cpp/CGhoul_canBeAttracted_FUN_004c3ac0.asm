; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_ghoul_cpp_CGhoul_canBeAttracted_FUN_004c3ac0(CGhoul *this_ptr,CVector3f *out_attract_position)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_attract_position
;
; Referenced Globals:
;   undefined4 DAT_005d91d7
;   undefined4 DAT_01cb8220
;   undefined4 DAT_01cb8224
;   undefined4 DAT_01cb8228
;   undefined4 DAT_01cb822c
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_motion.cpp_FUN_005038a0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c3ac0
        ;   Label: core_ghoul.cpp_CGhoul_canBeAttracted_FUN_004c3ac0
    PUSH EBP                            ; 004c3ac1
    SUB ESP,0x10c                       ; 004c3ac2
    MOV EBP,dword ptr [ESP + 0x11c]     ; 004c3ac8
    MOV EBX,dword ptr [ESP + 0x118]     ; 004c3acf
    PUSH 0xb                            ; 004c3ad6
    ADD EBX,0x2b4                       ; 004c3ad8
    PUSH EBX                            ; 004c3ade
    CALL core_motion.cpp_FUN_005038a0   ; 004c3adf
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x110],EAX     ; 004c3ae4
    FLD float ptr [ESP + 0x110]         ; 004c3aeb
    FLDZ                                ; 004c3af2
    ADD ESP,0x8                         ; 004c3af4
    FCOMPP                              ; 004c3af7
    FNSTSW AX                           ; 004c3af9
    SAHF                                ; 004c3afb
    JC 0x004c3b09                       ; 004c3afc
        ;   XREF to: 004c3b09 (CONDITIONAL_JUMP)  ; LAB_004c3b09
    XOR EAX,EAX                         ; 004c3afe
    ADD ESP,0x10c                       ; 004c3b00
    POP EBP                             ; 004c3b06
    POP EBX                             ; 004c3b07
    RET                                 ; 004c3b08
    PUSH EDI                            ; 004c3b09
        ;   Label: LAB_004c3b09
    PUSH ESI                            ; 004c3b0a
    MOV EDX,dword ptr [0x01cb8220]      ; 004c3b0b | DAT_01cb8220
    PUSH EDX                            ; 004c3b11
    PUSH EBX                            ; 004c3b12
    LEA ESI,[ESP + 0x7c]                ; 004c3b13
    LEA EDI,[ESP + 0x58]                ; 004c3b17
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90 ; 004c3b1b
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 004c3b20
    MOV ECX,dword ptr [0x01cb8228]      ; 004c3b23 | DAT_01cb8228
    LEA ESI,[ESP + 0x74]                ; 004c3b29
    PUSH ECX                            ; 004c3b2d
    MOVSD ES:EDI,ESI                    ; 004c3b2e
    MOVSD ES:EDI,ESI                    ; 004c3b2f
    MOVSD ES:EDI,ESI                    ; 004c3b30
    PUSH EBX                            ; 004c3b31
    LEA ESI,[ESP + 0x88]                ; 004c3b32
    LEA EDI,[ESP + 0x4c]                ; 004c3b39
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90 ; 004c3b3d
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x88]                ; 004c3b42
    ADD ESP,0x8                         ; 004c3b49
    MOVSD ES:EDI,ESI                    ; 004c3b4c
    MOVSD ES:EDI,ESI                    ; 004c3b4d
    MOVSD ES:EDI,ESI                    ; 004c3b4e
    FLD float ptr [ESP + 0x44]          ; 004c3b4f
    FLD float ptr [ESP + 0x48]          ; 004c3b53
    FLD float ptr [ESP + 0x4c]          ; 004c3b57
    LEA EDI,[ESP + 0x5c]                ; 004c3b5b
    LEA ESI,[ESP + 0x2c]                ; 004c3b5f
    FXCH ST2                            ; 004c3b63
    FADD float ptr [ESP + 0x50]         ; 004c3b65
    FXCH                                ; 004c3b69
    FADD float ptr [ESP + 0x54]         ; 004c3b6b
    FXCH ST2                            ; 004c3b6f
    FADD float ptr [ESP + 0x58]         ; 004c3b71
    FXCH                                ; 004c3b75
    FSTP float ptr [ESP + 0x2c]         ; 004c3b77
    FXCH                                ; 004c3b7b
    FSTP float ptr [ESP + 0x30]         ; 004c3b7d
    FSTP float ptr [ESP + 0x34]         ; 004c3b81
    MOVSD ES:EDI,ESI                    ; 004c3b85
    MOVSD ES:EDI,ESI                    ; 004c3b86
    MOVSD ES:EDI,ESI                    ; 004c3b87
    FLD float ptr [ESP + 0x5c]          ; 004c3b88
    FMUL float ptr [0x005d91d7]         ; 004c3b8c | DAT_005d91d7
    FLD float ptr [ESP + 0x60]          ; 004c3b92
    FMUL float ptr [0x005d91d7]         ; 004c3b96 | DAT_005d91d7
    FLD float ptr [ESP + 0x64]          ; 004c3b9c
    FMUL float ptr [0x005d91d7]         ; 004c3ba0 | DAT_005d91d7
    LEA EDI,[ESP + 0x14]                ; 004c3ba6
    LEA ESI,[ESP + 0xb0]                ; 004c3baa
    FXCH ST2                            ; 004c3bb1
    FSTP float ptr [ESP + 0xb0]         ; 004c3bb3
    FSTP float ptr [ESP + 0xb4]         ; 004c3bba
    FSTP float ptr [ESP + 0xb8]         ; 004c3bc1
    MOVSD ES:EDI,ESI                    ; 004c3bc8
    MOVSD ES:EDI,ESI                    ; 004c3bc9
    MOVSD ES:EDI,ESI                    ; 004c3bca
    MOV ESI,dword ptr [0x01cb8224]      ; 004c3bcb | DAT_01cb8224
    PUSH ESI                            ; 004c3bd1
    PUSH EBX                            ; 004c3bd2
    LEA ESI,[ESP + 0x94]                ; 004c3bd3
    LEA EDI,[ESP + 0x70]                ; 004c3bda
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90 ; 004c3bde
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x94]                ; 004c3be3
    ADD ESP,0x8                         ; 004c3bea
    MOVSD ES:EDI,ESI                    ; 004c3bed
    MOVSD ES:EDI,ESI                    ; 004c3bee
    MOVSD ES:EDI,ESI                    ; 004c3bef
    MOV EDI,dword ptr [0x01cb822c]      ; 004c3bf0 | DAT_01cb822c
    PUSH EDI                            ; 004c3bf6
    PUSH EBX                            ; 004c3bf7
    LEA ESI,[ESP + 0xa0]                ; 004c3bf8
    LEA EDI,[ESP + 0x10]                ; 004c3bff
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90 ; 004c3c03
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0xa0]                ; 004c3c08
    ADD ESP,0x8                         ; 004c3c0f
    MOVSD ES:EDI,ESI                    ; 004c3c12
    MOVSD ES:EDI,ESI                    ; 004c3c13
    MOVSD ES:EDI,ESI                    ; 004c3c14
    FLD float ptr [ESP + 0x8]           ; 004c3c15
    FLD float ptr [ESP + 0xc]           ; 004c3c19
    FLD float ptr [ESP + 0x10]          ; 004c3c1d
    LEA EDI,[ESP + 0xd4]                ; 004c3c21
    LEA ESI,[ESP + 0xc8]                ; 004c3c28
    FXCH ST2                            ; 004c3c2f
    FADD float ptr [ESP + 0x68]         ; 004c3c31
    FXCH                                ; 004c3c35
    FADD float ptr [ESP + 0x6c]         ; 004c3c37
    FXCH ST2                            ; 004c3c3b
    FADD float ptr [ESP + 0x70]         ; 004c3c3d
    FXCH                                ; 004c3c41
    FSTP float ptr [ESP + 0xc8]         ; 004c3c43
    FXCH                                ; 004c3c4a
    FSTP float ptr [ESP + 0xcc]         ; 004c3c4c
    FSTP float ptr [ESP + 0xd0]         ; 004c3c53
    MOVSD ES:EDI,ESI                    ; 004c3c5a
    MOVSD ES:EDI,ESI                    ; 004c3c5b
    MOVSD ES:EDI,ESI                    ; 004c3c5c
    FLD float ptr [ESP + 0xd4]          ; 004c3c5d
    FMUL float ptr [0x005d91d7]         ; 004c3c64 | DAT_005d91d7
    FLD float ptr [ESP + 0xd8]          ; 004c3c6a
    FMUL float ptr [0x005d91d7]         ; 004c3c71 | DAT_005d91d7
    FLD float ptr [ESP + 0xdc]          ; 004c3c77
    FMUL float ptr [0x005d91d7]         ; 004c3c7e | DAT_005d91d7
    FLD float ptr [ESP + 0x14]          ; 004c3c84
    FLD float ptr [ESP + 0x18]          ; 004c3c88
    LEA EDI,[ESP + 0xf8]                ; 004c3c8c
    LEA ESI,[ESP + 0x104]               ; 004c3c93
    FXCH ST4                            ; 004c3c9a
    FSTP float ptr [ESP + 0x104]        ; 004c3c9c
    FXCH ST2                            ; 004c3ca3
    FSTP float ptr [ESP + 0x108]        ; 004c3ca5
    FSTP float ptr [ESP + 0x10c]        ; 004c3cac
    MOVSD ES:EDI,ESI                    ; 004c3cb3
    MOVSD ES:EDI,ESI                    ; 004c3cb4
    MOVSD ES:EDI,ESI                    ; 004c3cb5
    FLD float ptr [ESP + 0x1c]          ; 004c3cb6
    LEA EDI,[ESP + 0xe0]                ; 004c3cba
    LEA ESI,[ESP + 0xec]                ; 004c3cc1
    FXCH                                ; 004c3cc8
    FADD float ptr [ESP + 0xf8]         ; 004c3cca
    FXCH ST2                            ; 004c3cd1
    FADD float ptr [ESP + 0xfc]         ; 004c3cd3
    FXCH                                ; 004c3cda
    FADD float ptr [ESP + 0x100]        ; 004c3cdc
    FXCH ST2                            ; 004c3ce3
    FSTP float ptr [ESP + 0xec]         ; 004c3ce5
    FSTP float ptr [ESP + 0xf0]         ; 004c3cec
    FSTP float ptr [ESP + 0xf4]         ; 004c3cf3
    MOVSD ES:EDI,ESI                    ; 004c3cfa
    MOVSD ES:EDI,ESI                    ; 004c3cfb
    MOVSD ES:EDI,ESI                    ; 004c3cfc
    FLD float ptr [ESP + 0xe0]          ; 004c3cfd
    FMUL float ptr [0x005d91d7]         ; 004c3d04 | DAT_005d91d7
    FLD float ptr [ESP + 0xe4]          ; 004c3d0a
    FMUL float ptr [0x005d91d7]         ; 004c3d11 | DAT_005d91d7
    LEA EAX,[ESP + 0x20]                ; 004c3d17
    FLD float ptr [ESP + 0xe8]          ; 004c3d1b
    FMUL float ptr [0x005d91d7]         ; 004c3d22 | DAT_005d91d7
    PUSH EAX                            ; 004c3d28
    MOV EAX,dword ptr [ESP + 0x124]     ; 004c3d29
    LEA EDI,[ESP + 0x24]                ; 004c3d30
    LEA ESI,[ESP + 0xc0]                ; 004c3d34
    FXCH ST2                            ; 004c3d3b
    FSTP float ptr [ESP + 0xc0]         ; 004c3d3d
    FSTP float ptr [ESP + 0xc4]         ; 004c3d44
    FSTP float ptr [ESP + 0xc8]         ; 004c3d4b
    MOVSD ES:EDI,ESI                    ; 004c3d52
    MOVSD ES:EDI,ESI                    ; 004c3d53
    MOVSD ES:EDI,ESI                    ; 004c3d54
    PUSH EAX                            ; 004c3d55
    LEA ESI,[ESP + 0xac]                ; 004c3d56
    LEA EDI,[ESP + 0x40]                ; 004c3d5d
    CALL core_actor.cpp_FUN_00408d70    ; 004c3d61
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0xac]                ; 004c3d66
    ADD ESP,0x8                         ; 004c3d6d
    LEA EAX,[ESP + 0x38]                ; 004c3d70
    MOVSD ES:EDI,ESI                    ; 004c3d74
    MOVSD ES:EDI,ESI                    ; 004c3d75
    MOVSD ES:EDI,ESI                    ; 004c3d76
    CMP EBP,EAX                         ; 004c3d77
    JZ 0x004c3d90                       ; 004c3d79
        ;   XREF to: 004c3d90 (CONDITIONAL_JUMP)  ; LAB_004c3d90
    MOV EAX,dword ptr [ESP + 0x38]      ; 004c3d7b
    MOV dword ptr [EBP],EAX             ; 004c3d7f
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004c3d82
    MOV dword ptr [EBP + 0x4],EAX       ; 004c3d86
    MOV EAX,dword ptr [ESP + 0x40]      ; 004c3d89
    MOV dword ptr [EBP + 0x8],EAX       ; 004c3d8d
    MOV EAX,0x1                         ; 004c3d90
        ;   Label: LAB_004c3d90
    POP ESI                             ; 004c3d95
    POP EDI                             ; 004c3d96
    ADD ESP,0x10c                       ; 004c3d97
    POP EBP                             ; 004c3d9d
    POP EBX                             ; 004c3d9e
    RET                                 ; 004c3d9f

