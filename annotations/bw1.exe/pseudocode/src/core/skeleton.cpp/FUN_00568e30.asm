; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_00568e30(CDeformableModelInstance *param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0xb8]:1  local_b8
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined        Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[7]:
;   core_bride.cpp_CBride_getTargetPoint_FUN_00424e20 at 00424e41
;   core_demnfolk.cpp_CDemnfolk_renderTransparent_FUN_0045c020 at 0045c069
;   core_gabriela.cpp_FUN_004caff0 at 004cb0fb
;   core_ghoul.cpp_CGhoul_getTargetPoint_FUN_004e0520 at 004e0541
;   core_mimic.cpp_CMimic_processAnimation_FUN_0050fba0 at 0050fec6
;   core_skeleton.cpp_FUN_00569040 at 005690f8
;   core_zombie.cpp_CZombie_renderTransparent_FUN_005be020 at 005be069
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_xform.cpp_FUN_005b5080
;   core_xform.cpp_FUN_005b7410
;   core_xform.cpp_setRotationScaleIdentity_FUN_005b5480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568e30
        ;   Label: core_skeleton.cpp_FUN_00568e30
    PUSH EDI                            ; 00568e31
    PUSH EBP                            ; 00568e32
    SUB ESP,0xac                        ; 00568e33
    MOV EBX,dword ptr [ESP + 0xbc]      ; 00568e39
    MOV EBP,ESI                         ; 00568e40
    CMP dword ptr [ESP + 0xc0],0x0      ; 00568e42
    JL 0x00568f4e                       ; 00568e4a
        ;   XREF to: 00568f4e (CONDITIONAL_JUMP)  ; LAB_00568f4e
    PUSH EBX                            ; 00568e50
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 00568e51
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00568e56
    MOV ESI,dword ptr [ESP + 0xc0]      ; 00568e59
    MOV EDX,EAX                         ; 00568e60
    LEA EAX,[ESI*0x8 + 0x0]             ; 00568e62
    ADD EAX,ESI                         ; 00568e69
    MOV EDX,dword ptr [EDX + EAX*0x4 + 0x1de9c] ; 00568e6b
    LEA EAX,[ESI*0x4 + 0x0]             ; 00568e72
    SUB EAX,ESI                         ; 00568e79
    SHL EAX,0x2                         ; 00568e7b
    MOV dword ptr [ESP + 0xa8],EAX      ; 00568e7e
    TEST EDX,EDX                        ; 00568e85
    JL 0x00568f7b                       ; 00568e87
        ;   XREF to: 00568f7b (CONDITIONAL_JUMP)  ; LAB_00568f7b
    PUSH EDX                            ; 00568e8d
    PUSH EBX                            ; 00568e8e
    LEA ESI,[ESP + 0x8]                 ; 00568e8f
    LEA EDI,[ESP + 0x68]                ; 00568e93
    CALL core_skeleton.cpp_FUN_00568e30 ; 00568e97
        ;   XREF to: 00568e30 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00568e30()
    MOV ECX,0xc                         ; 00568e9c
    LEA ESI,[ESP + 0x8]                 ; 00568ea1
    ADD ESP,0x8                         ; 00568ea5
    LEA EAX,[ESP + 0x60]                ; 00568ea8
    MOVSD.REP ES:EDI,ESI                ; 00568eac
    PUSH EAX                            ; 00568eae
    MOV ECX,dword ptr [ESP + 0xac]      ; 00568eaf
    LEA EAX,[EBX + 0x58]                ; 00568eb6
    ADD EAX,ECX                         ; 00568eb9
    PUSH EAX                            ; 00568ebb
    LEA ESI,[ESP + 0xa4]                ; 00568ebc
    LEA EDI,[ESP + 0x98]                ; 00568ec3
    CALL core_xform.cpp_FUN_005b5080    ; 00568eca
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[ESP + 0xa4]                ; 00568ecf
    ADD ESP,0x8                         ; 00568ed6
    MOVSD ES:EDI,ESI                    ; 00568ed9
    MOVSD ES:EDI,ESI                    ; 00568eda
    MOVSD ES:EDI,ESI                    ; 00568edb
    MOV EAX,dword ptr [ESP + 0x90]      ; 00568edc
    MOV dword ptr [ESP + 0x3c],EAX      ; 00568ee3
    MOV EAX,dword ptr [ESP + 0x94]      ; 00568ee7
    MOV dword ptr [ESP + 0x4c],EAX      ; 00568eee
    MOV EAX,dword ptr [ESP + 0x98]      ; 00568ef2
    MOV dword ptr [ESP + 0x5c],EAX      ; 00568ef9
    MOV EDX,dword ptr [ESP + 0xc0]      ; 00568efd
        ;   Label: LAB_00568efd
    LEA EAX,[EBX + 0x6b0]               ; 00568f04
    SHL EDX,0x4                         ; 00568f0a
    ADD EAX,EDX                         ; 00568f0d
    PUSH EAX                            ; 00568f0f
    LEA EAX,[ESP + 0x34]                ; 00568f10
    PUSH EAX                            ; 00568f14
    CALL core_xform.cpp_FUN_005b7410    ; 00568f15
        ;   XREF to: 005b7410 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_FUN_005b7410(CMatrix3x4f * matrix_out, CQuaternion4f * quat_in)
    ADD ESP,0x8                         ; 00568f1a
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00568f1d
    SHL EAX,0x2                         ; 00568f24
    ADD EBX,EAX                         ; 00568f27
    CMP dword ptr [EBX + 0xcf0],0x3f800000 ; 00568f29
    JNZ 0x00568faa                      ; 00568f33
        ;   XREF to: 00568faa (CONDITIONAL_JUMP)  ; LAB_00568faa
    MOV ECX,0xc                         ; 00568f35
        ;   Label: LAB_00568f35
    LEA ESI,[ESP + 0x30]                ; 00568f3a
    MOV EDI,EBP                         ; 00568f3e
    MOVSD.REP ES:EDI,ESI                ; 00568f40
    MOV EAX,EBP                         ; 00568f42
    ADD ESP,0xac                        ; 00568f44
    POP EBP                             ; 00568f4a
    POP EDI                             ; 00568f4b
    POP EBX                             ; 00568f4c
    RET                                 ; 00568f4d
    LEA EAX,[ESP + 0x30]                ; 00568f4e
        ;   Label: LAB_00568f4e
    PUSH EAX                            ; 00568f52
    CALL core_xform.cpp_setRotationScaleIdentity_FUN_005b5480 ; 00568f53
        ;   XREF to: 005b5480 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_setRotationScaleIdentity_FUN_005b5480()
    ADD ESP,0x4                         ; 00568f58
    MOV EAX,dword ptr [EBX + 0x6a4]     ; 00568f5b
    MOV dword ptr [ESP + 0x3c],EAX      ; 00568f61
    MOV EAX,dword ptr [EBX + 0x6a8]     ; 00568f65
    MOV dword ptr [ESP + 0x4c],EAX      ; 00568f6b
    MOV EAX,dword ptr [EBX + 0x6ac]     ; 00568f6f
    MOV dword ptr [ESP + 0x5c],EAX      ; 00568f75
    JMP 0x00568f35                      ; 00568f79
        ;   XREF to: 00568f35 (UNCONDITIONAL_JUMP)  ; LAB_00568f35
    FLD float ptr [EBX + 0x6a4]         ; 00568f7b
        ;   Label: LAB_00568f7b
    FADD float ptr [EBX + EAX*0x1 + 0x58] ; 00568f81
    FSTP float ptr [ESP + 0x3c]         ; 00568f85
    FLD float ptr [EBX + 0x6a8]         ; 00568f89
    FADD float ptr [EBX + EAX*0x1 + 0x5c] ; 00568f8f
    FSTP float ptr [ESP + 0x4c]         ; 00568f93
    FLD float ptr [EBX + 0x6ac]         ; 00568f97
    FADD float ptr [EBX + EAX*0x1 + 0x60] ; 00568f9d
    FSTP float ptr [ESP + 0x5c]         ; 00568fa1
    JMP 0x00568efd                      ; 00568fa5
        ;   XREF to: 00568efd (UNCONDITIONAL_JUMP)  ; LAB_00568efd
    FLD float ptr [ESP + 0x30]          ; 00568faa
        ;   Label: LAB_00568faa
    FMUL float ptr [EBX + 0xcf0]        ; 00568fae
    FLD float ptr [ESP + 0x34]          ; 00568fb4
    FXCH                                ; 00568fb8
    FSTP float ptr [ESP + 0x30]         ; 00568fba
    FMUL float ptr [EBX + 0xcf0]        ; 00568fbe
    FLD float ptr [ESP + 0x38]          ; 00568fc4
    FXCH                                ; 00568fc8
    FSTP float ptr [ESP + 0x34]         ; 00568fca
    FMUL float ptr [EBX + 0xcf0]        ; 00568fce
    FLD float ptr [ESP + 0x40]          ; 00568fd4
    FXCH                                ; 00568fd8
    FSTP float ptr [ESP + 0x38]         ; 00568fda
    FMUL float ptr [EBX + 0xcf0]        ; 00568fde
    FLD float ptr [ESP + 0x44]          ; 00568fe4
    FXCH                                ; 00568fe8
    FSTP float ptr [ESP + 0x40]         ; 00568fea
    FMUL float ptr [EBX + 0xcf0]        ; 00568fee
    FLD float ptr [ESP + 0x48]          ; 00568ff4
    FXCH                                ; 00568ff8
    FSTP float ptr [ESP + 0x44]         ; 00568ffa
    FMUL float ptr [EBX + 0xcf0]        ; 00568ffe
    FLD float ptr [ESP + 0x50]          ; 00569004
    FXCH                                ; 00569008
    FSTP float ptr [ESP + 0x48]         ; 0056900a
    FMUL float ptr [EBX + 0xcf0]        ; 0056900e
    FLD float ptr [ESP + 0x54]          ; 00569014
    FXCH                                ; 00569018
    FSTP float ptr [ESP + 0x50]         ; 0056901a
    FMUL float ptr [EBX + 0xcf0]        ; 0056901e
    FLD float ptr [ESP + 0x58]          ; 00569024
    FXCH                                ; 00569028
    FSTP float ptr [ESP + 0x54]         ; 0056902a
    FMUL float ptr [EBX + 0xcf0]        ; 0056902e
    FSTP float ptr [ESP + 0x58]         ; 00569034
    JMP 0x00568f35                      ; 00569038
        ;   XREF to: 00568f35 (UNCONDITIONAL_JUMP)  ; LAB_00568f35

