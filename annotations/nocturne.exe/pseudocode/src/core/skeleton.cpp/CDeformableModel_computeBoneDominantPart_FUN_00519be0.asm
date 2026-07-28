; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CDeformableModel_computeBoneDominantPart_FUN_00519be0(CDeformableModel *this_ptr,int bone_index)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_index
; Local Variables:
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
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
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0051ad20 at 0051b1ae
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005918d5
;   TerminatedCString s_Out_of_memory_005918ea
;   undefined4 DAT_005a1eb0
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0051b660
;   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00
;   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00519be0
        ;   Label: core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_00519be0
    PUSH EDI                            ; 00519be1
    PUSH EBP                            ; 00519be2
    SUB ESP,0x60                        ; 00519be3
    MOV EDI,dword ptr [ESP + 0x74]      ; 00519be6
    MOV EBX,0x7149f2ca                  ; 00519bea
    XOR EDX,EDX                         ; 00519bef
    MOV EAX,dword ptr [ESP + 0x70]      ; 00519bf1
    MOV dword ptr [ESP + 0x2c],EDX      ; 00519bf5
    MOV dword ptr [ESP + 0x24],EBX      ; 00519bf9
    MOV dword ptr [ESP + 0x3c],EDX      ; 00519bfd
    MOV EBP,dword ptr [EAX + 0xc00]     ; 00519c01
    MOV dword ptr [ESP + 0x28],EDX      ; 00519c07
    CMP EBP,0x2                         ; 00519c0b
    JGE 0x00519c19                      ; 00519c0e
        ;   XREF to: 00519c19 (CONDITIONAL_JUMP)  ; LAB_00519c19
    XOR EAX,EAX                         ; 00519c10
    ADD ESP,0x60                        ; 00519c12
    POP EBP                             ; 00519c15
    POP EDI                             ; 00519c16
    POP EBX                             ; 00519c17
    RET                                 ; 00519c18
    PUSH 0x22b4                         ; 00519c19
        ;   Label: LAB_00519c19
    CALL crt_unknown.c_FUN_0056497c     ; 00519c1e
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 00519c23
    TEST EAX,EAX                        ; 00519c26
    JZ 0x00519c33                       ; 00519c28
        ;   XREF to: 00519c33 (CONDITIONAL_JUMP)  ; LAB_00519c33
    PUSH EAX                            ; 00519c2a
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0051b660 ; 00519c2b
        ;   XREF to: 0051b660 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0051b660(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00519c30
    MOV dword ptr [ESP + 0x48],EAX      ; 00519c33
        ;   Label: LAB_00519c33
    TEST EAX,EAX                        ; 00519c37
    JNZ 0x00519c5d                      ; 00519c39
        ;   XREF to: 00519c5d (CONDITIONAL_JUMP)  ; LAB_00519c5d
    MOV EAX,0x5918d5                    ; 00519c3b | = "..\\core\\skeleton.cpp"
    MOV EDX,0x5f0                       ; 00519c40
    PUSH 0x5918ea                       ; 00519c45 | = "Out of memory"
    MOV [0x01cc4800],EAX                ; 00519c4a | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 00519c4f | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00519c55
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00519c5a
    PUSH ESI                            ; 00519c5d
        ;   Label: LAB_00519c5d
    MOV ECX,dword ptr [ESP + 0x74]      ; 00519c5e
    PUSH ECX                            ; 00519c62
    MOV EBX,dword ptr [ESP + 0x50]      ; 00519c63
    PUSH EBX                            ; 00519c67
    CALL core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00 ; 00519c68
        ;   XREF to: 0051dd00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00(CDeformableModelInstance * this_ptr, CDeformableModel * model_ptr)
    ADD ESP,0x8                         ; 00519c6d
    PUSH EBX                            ; 00519c70
    CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800 ; 00519c71
        ;   XREF to: 0051b800 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00519c76
    PUSH EBX                            ; 00519c79
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0 ; 00519c7a
        ;   XREF to: 0051d3c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00519c7f
    PUSH 0x0                            ; 00519c82
    PUSH EBX                            ; 00519c84
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50 ; 00519c85
        ;   XREF to: 0051da50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 00519c8a
    PUSH EDI                            ; 00519c8d
    LEA EAX,[ESP + 0x8]                 ; 00519c8e
    PUSH EAX                            ; 00519c92
    PUSH EBX                            ; 00519c93
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0 ; 00519c94
        ;   XREF to: 0051d2a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00519c99
    MOV EAX,dword ptr [ESP + 0x74]      ; 00519c9c
    XOR ECX,ECX                         ; 00519ca0
    MOV EBX,dword ptr [EAX + 0xc00]     ; 00519ca2
    MOV dword ptr [ESP + 0x38],ECX      ; 00519ca8
    TEST EBX,EBX                        ; 00519cac
    JLE 0x00519e93                      ; 00519cae
        ;   XREF to: 00519e93 (CONDITIONAL_JUMP)  ; LAB_00519e93
    MOV dword ptr [ESP + 0x34],EAX      ; 00519cb4
    MOV EAX,dword ptr [ESP + 0x34]      ; 00519cb8
        ;   Label: LAB_00519cb8
    MOV EBX,dword ptr [ESP + 0x40]      ; 00519cbc
    MOV dword ptr [ESP + 0x3c],EAX      ; 00519cc0
    IMUL EAX,EBX,0x12                   ; 00519cc4
    XOR EBP,EBP                         ; 00519cc7
    MOV dword ptr [ESP + 0x58],EBP      ; 00519cc9
    MOV dword ptr [ESP + 0x44],EAX      ; 00519ccd
    MOV EAX,dword ptr [ESP + 0x34]      ; 00519cd1
    MOV dword ptr [ESP + 0x54],EBP      ; 00519cd5
    MOV dword ptr [ESP + 0x48],EBP      ; 00519cd9
    MOV ESI,dword ptr [EAX + 0xc24]     ; 00519cdd
    MOV dword ptr [ESP + 0x5c],EBP      ; 00519ce3
    TEST ESI,ESI                        ; 00519ce7
    JLE 0x00519d6a                      ; 00519ce9
        ;   XREF to: 00519d6a (CONDITIONAL_JUMP)  ; LAB_00519d6a
    MOV EAX,dword ptr [ESP + 0x74]      ; 00519cef
        ;   Label: LAB_00519cef
    MOV ESI,dword ptr [ESP + 0x44]      ; 00519cf3
    MOV EAX,dword ptr [EAX + 0x7c]      ; 00519cf7
    ADD EAX,ESI                         ; 00519cfa
    MOV EBP,EAX                         ; 00519cfc
    ADD EAX,0x6                         ; 00519cfe
    MOV dword ptr [ESP + 0x50],EAX      ; 00519d01
    XOR EAX,EAX                         ; 00519d05
        ;   Label: LAB_00519d05
    MOV AX,word ptr [EBP]               ; 00519d07
    IMUL EAX,EAX,0x34                   ; 00519d0b
    MOV ESI,dword ptr [ESP + 0x74]      ; 00519d0e
    MOV ESI,dword ptr [ESI + 0x40]      ; 00519d12
    ADD ESI,EAX                         ; 00519d15
    XOR EDX,EDX                         ; 00519d17
    MOV EBX,ESI                         ; 00519d19
    MOV EAX,ESI                         ; 00519d1b
    XOR ECX,ECX                         ; 00519d1d
        ;   Label: LAB_00519d1d
    MOV CL,byte ptr [ESI]               ; 00519d1f
    CMP EDX,ECX                         ; 00519d21
    JGE 0x00519d90                      ; 00519d23
        ;   XREF to: 00519d90 (CONDITIONAL_JUMP)  ; LAB_00519d90
    XOR ECX,ECX                         ; 00519d29
    MOV CL,byte ptr [EBX + 0x1]         ; 00519d2b
    CMP ECX,EDI                         ; 00519d2e
    JZ 0x00519e21                       ; 00519d30
        ;   XREF to: 00519e21 (CONDITIONAL_JUMP)  ; LAB_00519e21
    ADD EAX,0x4                         ; 00519d36
    INC EDX                             ; 00519d39
    INC EBX                             ; 00519d3a
    JMP 0x00519d1d                      ; 00519d3b
        ;   XREF to: 00519d1d (UNCONDITIONAL_JUMP)  ; LAB_00519d1d
    MOV EBP,dword ptr [ESP + 0x44]      ; 00519d3d
        ;   Label: LAB_00519d3d
    MOV EAX,dword ptr [ESP + 0x40]      ; 00519d41
    MOV EDX,dword ptr [ESP + 0x48]      ; 00519d45
    INC EAX                             ; 00519d49
    INC EDX                             ; 00519d4a
    MOV dword ptr [ESP + 0x40],EAX      ; 00519d4b
    MOV dword ptr [ESP + 0x48],EDX      ; 00519d4f
    MOV EAX,EDX                         ; 00519d53
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00519d55
    ADD EBP,0x12                        ; 00519d59
    MOV ECX,dword ptr [EDX + 0xc24]     ; 00519d5c
    MOV dword ptr [ESP + 0x44],EBP      ; 00519d62
    CMP EAX,ECX                         ; 00519d66
    JL 0x00519cef                       ; 00519d68
        ;   XREF to: 00519cef (CONDITIONAL_JUMP)  ; LAB_00519cef
    FLD float ptr [ESP + 0x5c]          ; 00519d6a
        ;   Label: LAB_00519d6a
    FCOMP float ptr [ESP + 0x30]        ; 00519d6e
    FNSTSW AX                           ; 00519d72
    SAHF                                ; 00519d74
    JBE 0x00519e36                      ; 00519d75
        ;   XREF to: 00519e36 (CONDITIONAL_JUMP)  ; LAB_00519e36
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00519d7b
    MOV dword ptr [ESP + 0x30],EAX      ; 00519d7f
    MOV EAX,dword ptr [ESP + 0x38]      ; 00519d83
    MOV dword ptr [ESP + 0x2c],EAX      ; 00519d87
    JMP 0x00519e6d                      ; 00519d8b
        ;   XREF to: 00519e6d (UNCONDITIONAL_JUMP)  ; LAB_00519e6d
    XOR EDX,EDX                         ; 00519d90
        ;   Label: LAB_00519d90
    MOV DX,word ptr [EBP]               ; 00519d92
    LEA EAX,[EDX*0x4 + 0x0]             ; 00519d96
    SUB EAX,EDX                         ; 00519d9d
    LEA EDX,[EAX*0x4 + 0x0]             ; 00519d9f
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00519da6
    MOV EAX,dword ptr [EAX + 0x2234]    ; 00519daa
    LEA EBX,[ESP + 0x10]                ; 00519db0
    ADD EAX,EDX                         ; 00519db4
    FILD dword ptr [EAX]                ; 00519db6
    FMUL float ptr [0x005a1eb0]         ; 00519db8 | DAT_005a1eb0
    FSTP float ptr [EBX]                ; 00519dbe
    FILD dword ptr [EAX + 0x4]          ; 00519dc0
    FMUL float ptr [0x005a1eb0]         ; 00519dc3 | DAT_005a1eb0
    FSTP float ptr [EBX + 0x4]          ; 00519dc9
    FILD dword ptr [EAX + 0x8]          ; 00519dcc
    FMUL float ptr [0x005a1eb0]         ; 00519dcf | DAT_005a1eb0
    FSTP float ptr [EBX + 0x8]          ; 00519dd5
    FLD float ptr [ESP + 0x10]          ; 00519dd8
    FSUB float ptr [ESP + 0x4]          ; 00519ddc
    FMUL ST0                            ; 00519de0
    FLD float ptr [ESP + 0x14]          ; 00519de2
    FSUB float ptr [ESP + 0x8]          ; 00519de6
    FMUL ST0                            ; 00519dea
    FLD float ptr [ESP + 0x18]          ; 00519dec
    FXCH                                ; 00519df0
    FADDP ST2,ST0                       ; 00519df2
    FSUB float ptr [ESP + 0xc]          ; 00519df4
    FMUL ST0                            ; 00519df8
    ADD EBP,0x2                         ; 00519dfa
    MOV EAX,dword ptr [ESP + 0x54]      ; 00519dfd
    MOV EDX,dword ptr [ESP + 0x50]      ; 00519e01
    FADDP                               ; 00519e05
    INC EAX                             ; 00519e07
    FADD float ptr [ESP + 0x58]         ; 00519e08
    MOV dword ptr [ESP + 0x54],EAX      ; 00519e0c
    FSTP float ptr [ESP + 0x58]         ; 00519e10
    CMP EBP,EDX                         ; 00519e14
    JZ 0x00519d3d                       ; 00519e16
        ;   XREF to: 00519d3d (CONDITIONAL_JUMP)  ; LAB_00519d3d
    JMP 0x00519d05                      ; 00519e1c
        ;   XREF to: 00519d05 (UNCONDITIONAL_JUMP)  ; LAB_00519d05
    FLD float ptr [ESP + 0x5c]          ; 00519e21
        ;   Label: LAB_00519e21
    FADD float ptr [EAX + 0x4]          ; 00519e25
    FSTP float ptr [ESP + 0x5c]         ; 00519e28
    ADD EAX,0x4                         ; 00519e2c
    INC EDX                             ; 00519e2f
    INC EBX                             ; 00519e30
    JMP 0x00519d1d                      ; 00519e31
        ;   XREF to: 00519d1d (UNCONDITIONAL_JUMP)  ; LAB_00519d1d
    TEST dword ptr [ESP + 0x30],0x7fffffff ; 00519e36
        ;   Label: LAB_00519e36
    JNZ 0x00519e6d                      ; 00519e3e
        ;   XREF to: 00519e6d (CONDITIONAL_JUMP)  ; LAB_00519e6d
    MOV EAX,dword ptr [ESP + 0x54]      ; 00519e40
    MOV dword ptr [ESP + 0x60],EAX      ; 00519e44
    FILD dword ptr [ESP + 0x60]         ; 00519e48
    FDIVR float ptr [ESP + 0x58]        ; 00519e4c
    FST float ptr [ESP + 0x58]          ; 00519e50
    FCOMP float ptr [ESP + 0x28]        ; 00519e54
    FNSTSW AX                           ; 00519e58
    SAHF                                ; 00519e5a
    JNC 0x00519e6d                      ; 00519e5b
        ;   XREF to: 00519e6d (CONDITIONAL_JUMP)  ; LAB_00519e6d
    MOV EAX,dword ptr [ESP + 0x58]      ; 00519e5d
    MOV dword ptr [ESP + 0x28],EAX      ; 00519e61
    MOV EAX,dword ptr [ESP + 0x38]      ; 00519e65
    MOV dword ptr [ESP + 0x2c],EAX      ; 00519e69
    MOV ESI,dword ptr [ESP + 0x34]      ; 00519e6d
        ;   Label: LAB_00519e6d
    MOV EBP,dword ptr [ESP + 0x38]      ; 00519e71
    MOV EDX,dword ptr [ESP + 0x74]      ; 00519e75
    ADD ESI,0x60                        ; 00519e79
    INC EBP                             ; 00519e7c
    MOV ECX,dword ptr [EDX + 0xc00]     ; 00519e7d
    MOV dword ptr [ESP + 0x34],ESI      ; 00519e83
    MOV dword ptr [ESP + 0x38],EBP      ; 00519e87
    CMP EBP,ECX                         ; 00519e8b
    JL 0x00519cb8                       ; 00519e8d
        ;   XREF to: 00519cb8 (CONDITIONAL_JUMP)  ; LAB_00519cb8
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00519e93
        ;   Label: LAB_00519e93
    TEST EBX,EBX                        ; 00519e97
    JZ 0x00519ea6                       ; 00519e99
        ;   XREF to: 00519ea6 (CONDITIONAL_JUMP)  ; LAB_00519ea6
    PUSH 0x2                            ; 00519e9b
    MOV EAX,dword ptr [EBX + 0x50]      ; 00519e9d
    PUSH EBX                            ; 00519ea0
    CALL dword ptr [EAX]                ; 00519ea1
    ADD ESP,0x8                         ; 00519ea3
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00519ea6
        ;   Label: LAB_00519ea6
    POP ESI                             ; 00519eaa
    ADD ESP,0x60                        ; 00519eab
    POP EBP                             ; 00519eae
    POP EDI                             ; 00519eaf
    POP EBX                             ; 00519eb0
    RET                                 ; 00519eb1

