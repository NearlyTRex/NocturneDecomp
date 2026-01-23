; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeleton.cpp_computeBoneWorldMatrices_FUN_005a1950(SBoneTransformData * bone_data, CDeformableModelInstance * instance_ptr)
;
; Parameters:
; SBoneTransformData * Stack[0x4]:4   bone_data
; CDeformableModelInstance * Stack[0x8]:4   instance_ptr
; Local Variables:
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
; XREF[2]:
;   core_skeleton.cpp_CDeformableModelInstance_findPatchToFrame_FUN_005a08a0 at 005a096a
;   core_skeleton.cpp_blendBoneTransformData_FUN_005a1b70 at 005a1cca
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1950
        ;   Label: core_skeleton.cpp_computeBoneWorldMatrices_FUN_005a1950
    PUSH ESI                            ; 005a1951
    PUSH EDI                            ; 005a1952
    PUSH EBP                            ; 005a1953
    SUB ESP,0x2c                        ; 005a1954
    MOV EDI,dword ptr [ESP + 0x40]      ; 005a1957
    MOV EDX,dword ptr [ESP + 0x44]      ; 005a195b
    PUSH EDX                            ; 005a195f
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 005a1960
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a1965
    MOV EBX,dword ptr [EAX + 0x28558]   ; 005a1968
    XOR ECX,ECX                         ; 005a196e
    MOV dword ptr [ESP + 0x10],EAX      ; 005a1970
    MOV dword ptr [ESP + 0x28],ECX      ; 005a1974
    TEST EBX,EBX                        ; 005a1978
    JLE 0x005a1a6d                      ; 005a197a
        ;   XREF to: 005a1a6d (CONDITIONAL_JUMP)  ; LAB_005a1a6d
    LEA EBX,[EDI + 0x7dc]               ; 005a1980
    MOV dword ptr [ESP + 0x1c],EAX      ; 005a1986
    MOV dword ptr [ESP + 0x14],EBX      ; 005a198a
    LEA ESI,[EDI + 0xc]                 ; 005a198e
    MOV EBX,dword ptr [ESP + 0x44]      ; 005a1991
    MOV EBP,dword ptr [ESP + 0x14]      ; 005a1995
    MOV dword ptr [ESP + 0x24],ESI      ; 005a1999
    ADD EBX,0x58                        ; 005a199d
    MOV dword ptr [ESP + 0x20],EBP      ; 005a19a0
    MOV ESI,EDI                         ; 005a19a4
    MOV dword ptr [ESP + 0xc],EBX       ; 005a19a6
    XOR EBP,EBP                         ; 005a19aa
    MOV EBX,EDI                         ; 005a19ac
    MOV EAX,dword ptr [ESP + 0x24]      ; 005a19ae
        ;   Label: LAB_005a19ae
    MOV EDX,dword ptr [ESP + 0x28]      ; 005a19b2
    PUSH EAX                            ; 005a19b6
    IMUL EAX,EDX,0x30                   ; 005a19b7
    MOV ECX,dword ptr [ESP + 0x24]      ; 005a19ba
    PUSH ECX                            ; 005a19be
    MOV dword ptr [ESP + 0x20],EAX      ; 005a19bf
    CALL core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280 ; 005a19c3
        ;   XREF to: 005f7280 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280(CMatrix3x3f * matrix_out, CQuaternion4f * quat_in)
    MOV EDX,dword ptr [EBX + 0x64c]     ; 005a19c8
    ADD ESP,0x8                         ; 005a19ce
    CMP EDX,0x3f800000                  ; 005a19d1
    JNZ 0x005a1a75                      ; 005a19d7
        ;   XREF to: 005a1a75 (CONDITIONAL_JUMP)  ; LAB_005a1a75
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005a19dd
        ;   Label: LAB_005a19dd
    MOV EAX,dword ptr [EAX + 0x2857c]   ; 005a19e1
    TEST EAX,EAX                        ; 005a19e7
    JL 0x005a1b32                       ; 005a19e9
        ;   XREF to: 005a1b32 (CONDITIONAL_JUMP)  ; LAB_005a1b32
    IMUL EAX,EAX,0x30                   ; 005a19ef
    ADD EAX,dword ptr [ESP + 0x14]      ; 005a19f2
    PUSH EAX                            ; 005a19f6
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a19f7
    ADD EAX,EBP                         ; 005a19fb
    PUSH EAX                            ; 005a19fd
    LEA EAX,[ESP + 0x8]                 ; 005a19fe
    PUSH EAX                            ; 005a1a02
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 005a1a03
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 005a1a08
    MOV EAX,dword ptr [ESP]             ; 005a1a0b
    MOV dword ptr [ESI + 0x7e8],EAX     ; 005a1a0e
    MOV EAX,dword ptr [ESP + 0x4]       ; 005a1a14
    MOV dword ptr [ESI + 0x7f8],EAX     ; 005a1a18
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a1a1e
    MOV dword ptr [ESI + 0x808],EAX     ; 005a1a22
    MOV EAX,dword ptr [ESP + 0x20]      ; 005a1a28
        ;   Label: LAB_005a1a28
    MOV EDX,dword ptr [ESP + 0x24]      ; 005a1a2c
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005a1a30
    ADD EBX,0x4                         ; 005a1a34
    ADD ESI,0x30                        ; 005a1a37
    ADD EBP,0xc                         ; 005a1a3a
    ADD EAX,0x30                        ; 005a1a3d
    ADD EDX,0x10                        ; 005a1a40
    ADD ECX,0x24                        ; 005a1a43
    MOV dword ptr [ESP + 0x20],EAX      ; 005a1a46
    MOV dword ptr [ESP + 0x24],EDX      ; 005a1a4a
    MOV EAX,dword ptr [ESP + 0x28]      ; 005a1a4e
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a1a52
    MOV dword ptr [ESP + 0x1c],ECX      ; 005a1a56
    INC EAX                             ; 005a1a5a
    MOV ECX,dword ptr [EDX + 0x28558]   ; 005a1a5b
    MOV dword ptr [ESP + 0x28],EAX      ; 005a1a61
    CMP EAX,ECX                         ; 005a1a65
    JL 0x005a19ae                       ; 005a1a67
        ;   XREF to: 005a19ae (CONDITIONAL_JUMP)  ; LAB_005a19ae
    ADD ESP,0x2c                        ; 005a1a6d
        ;   Label: LAB_005a1a6d
    POP EBP                             ; 005a1a70
    POP EDI                             ; 005a1a71
    POP ESI                             ; 005a1a72
    POP EBX                             ; 005a1a73
    RET                                 ; 005a1a74
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a1a75
        ;   Label: LAB_005a1a75
    FLD float ptr [EBX + 0x64c]         ; 005a1a79
    FMUL float ptr [EDI + EAX*0x1 + 0x7dc] ; 005a1a7f
    FSTP float ptr [EDI + EAX*0x1 + 0x7dc] ; 005a1a86
    FLD float ptr [EBX + 0x64c]         ; 005a1a8d
    FMUL float ptr [EDI + EAX*0x1 + 0x7e0] ; 005a1a93
    FSTP float ptr [EDI + EAX*0x1 + 0x7e0] ; 005a1a9a
    FLD float ptr [EBX + 0x64c]         ; 005a1aa1
    FMUL float ptr [EDI + EAX*0x1 + 0x7e4] ; 005a1aa7
    FSTP float ptr [EDI + EAX*0x1 + 0x7e4] ; 005a1aae
    FLD float ptr [EBX + 0x64c]         ; 005a1ab5
    FMUL float ptr [EDI + EAX*0x1 + 0x7ec] ; 005a1abb
    FSTP float ptr [EDI + EAX*0x1 + 0x7ec] ; 005a1ac2
    FLD float ptr [EBX + 0x64c]         ; 005a1ac9
    FMUL float ptr [EDI + EAX*0x1 + 0x7f0] ; 005a1acf
    FSTP float ptr [EDI + EAX*0x1 + 0x7f0] ; 005a1ad6
    FLD float ptr [EBX + 0x64c]         ; 005a1add
    FMUL float ptr [EDI + EAX*0x1 + 0x7f4] ; 005a1ae3
    FSTP float ptr [EDI + EAX*0x1 + 0x7f4] ; 005a1aea
    FLD float ptr [EBX + 0x64c]         ; 005a1af1
    FMUL float ptr [EDI + EAX*0x1 + 0x7fc] ; 005a1af7
    FSTP float ptr [EDI + EAX*0x1 + 0x7fc] ; 005a1afe
    FLD float ptr [EBX + 0x64c]         ; 005a1b05
    FMUL float ptr [EDI + EAX*0x1 + 0x800] ; 005a1b0b
    FSTP float ptr [EDI + EAX*0x1 + 0x800] ; 005a1b12
    FLD float ptr [EBX + 0x64c]         ; 005a1b19
    FMUL float ptr [EDI + EAX*0x1 + 0x804] ; 005a1b1f
    FSTP float ptr [EDI + EAX*0x1 + 0x804] ; 005a1b26
    JMP 0x005a19dd                      ; 005a1b2d
        ;   XREF to: 005a19dd (UNCONDITIONAL_JUMP)  ; LAB_005a19dd
    MOV EAX,dword ptr [ESP + 0x44]      ; 005a1b32
        ;   Label: LAB_005a1b32
    FLD float ptr [EAX + EBP*0x1 + 0x58] ; 005a1b36
    FADD float ptr [EDI]                ; 005a1b3a
    FSTP float ptr [ESI + 0x7e8]        ; 005a1b3c
    FLD float ptr [EAX + EBP*0x1 + 0x5c] ; 005a1b42
    FADD float ptr [EDI + 0x4]          ; 005a1b46
    FSTP float ptr [ESI + 0x7f8]        ; 005a1b49
    FLD float ptr [EAX + EBP*0x1 + 0x60] ; 005a1b4f
    FADD float ptr [EDI + 0x8]          ; 005a1b53
    FSTP float ptr [ESI + 0x808]        ; 005a1b56
    JMP 0x005a1a28                      ; 005a1b5c
        ;   XREF to: 005a1a28 (UNCONDITIONAL_JUMP)  ; LAB_005a1a28

