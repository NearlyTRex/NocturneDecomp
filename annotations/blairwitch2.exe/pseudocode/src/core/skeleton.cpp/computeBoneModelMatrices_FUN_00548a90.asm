; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_computeBoneModelMatrices_FUN_00548a90(SPose *bone_data,CDeformableModelInstance *instance_ptr)
;
; Parameters:
; SPose *          Stack[0x4]:4   bone_data
; CDeformableModelInstance * Stack[0x8]:4   instance_ptr
;
; XREF[2]:
;   core_skeleton.cpp_CDeformableModelInstance_findPatchToFrame_FUN_00547910 at 00547999
;   core_skeleton.cpp_blendBoneTransformData_FUN_00548cc0 at 00548e60
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_xform.cpp_FUN_00591530
;   core_xform.cpp_quaternionToMatrix3x3_FUN_005938c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548a90
        ;   Label: core_skeleton.cpp_computeBoneModelMatrices_FUN_00548a90
    PUSH ESI                            ; 00548a91
    PUSH EDI                            ; 00548a92
    PUSH EBP                            ; 00548a93
    SUB ESP,0x38                        ; 00548a94
    MOV EDX,dword ptr [ESP + 0x50]      ; 00548a97
    PUSH EDX                            ; 00548a9b
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00548a9c
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00548aa1
    MOV EBX,dword ptr [EAX + 0x1d1f8]   ; 00548aa4
    XOR ECX,ECX                         ; 00548aaa
    MOV dword ptr [ESP + 0x18],EAX      ; 00548aac
    MOV dword ptr [ESP + 0x2c],ECX      ; 00548ab0
    TEST EBX,EBX                        ; 00548ab4
    JLE 0x00548bc5                      ; 00548ab6
        ;   XREF to: 00548bc5 (CONDITIONAL_JUMP)  ; LAB_00548bc5
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00548abc
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00548ac0
    MOV dword ptr [ESP + 0x28],ECX      ; 00548ac4
    MOV dword ptr [ESP + 0x20],EAX      ; 00548ac8
    ADD EBX,0x7dc                       ; 00548acc
    ADD ESI,0xc                         ; 00548ad2
    MOV dword ptr [ESP + 0x30],EBX      ; 00548ad5
    MOV EBX,dword ptr [ESP + 0x50]      ; 00548ad9
    MOV dword ptr [ESP + 0x24],ESI      ; 00548add
    ADD EBX,0x58                        ; 00548ae1
    MOV EBP,dword ptr [ESP + 0x30]      ; 00548ae4
    MOV dword ptr [ESP + 0x1c],EBX      ; 00548ae8
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00548aec
    MOV dword ptr [ESP + 0x34],EBP      ; 00548af0
    MOV EBP,EBX                         ; 00548af4
    IMUL ESI,dword ptr [ESP + 0x2c],0x30 ; 00548af6
        ;   Label: LAB_00548af6
    MOV ECX,dword ptr [ESP + 0x24]      ; 00548afb
    PUSH ECX                            ; 00548aff
    MOV EAX,dword ptr [ESP + 0x38]      ; 00548b00
    PUSH EAX                            ; 00548b04
    CALL core_xform.cpp_quaternionToMatrix3x3_FUN_005938c0 ; 00548b05
        ;   XREF to: 005938c0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionToMatrix3x3_FUN_005938c0(CMatrix3x4f * matrix_out, CQuaternion4f * quat_in)
    MOV EDX,dword ptr [EBX + 0x64c]     ; 00548b0a
    ADD ESP,0x8                         ; 00548b10
    CMP EDX,0x3f800000                  ; 00548b13
    JNZ 0x00548bcd                      ; 00548b19
        ;   XREF to: 00548bcd (CONDITIONAL_JUMP)  ; LAB_00548bcd
    MOV EAX,dword ptr [ESP + 0x20]      ; 00548b1f
        ;   Label: LAB_00548b1f
    MOV EAX,dword ptr [EAX + 0x1d21c]   ; 00548b23
    TEST EAX,EAX                        ; 00548b29
    JL 0x00548c8a                       ; 00548b2b
        ;   XREF to: 00548c8a (CONDITIONAL_JUMP)  ; LAB_00548c8a
    IMUL EAX,EAX,0x30                   ; 00548b31
    ADD EAX,dword ptr [ESP + 0x30]      ; 00548b34
    MOV EDI,dword ptr [ESP + 0x28]      ; 00548b38
    PUSH EAX                            ; 00548b3c
    MOV EAX,dword ptr [ESP + 0x20]      ; 00548b3d
    ADD EAX,EDI                         ; 00548b41
    PUSH EAX                            ; 00548b43
    LEA ESI,[ESP + 0x14]                ; 00548b44
    LEA EDI,[ESP + 0x8]                 ; 00548b48
    CALL core_xform.cpp_FUN_00591530    ; 00548b4c
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[ESP + 0x14]                ; 00548b51
    ADD ESP,0x8                         ; 00548b55
    MOVSD ES:EDI,ESI                    ; 00548b58
    MOVSD ES:EDI,ESI                    ; 00548b59
    MOVSD ES:EDI,ESI                    ; 00548b5a
    MOV EAX,dword ptr [ESP]             ; 00548b5b
    MOV dword ptr [EBP + 0x7e8],EAX     ; 00548b5e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00548b64
    MOV dword ptr [EBP + 0x7f8],EAX     ; 00548b68
    MOV EAX,dword ptr [ESP + 0x8]       ; 00548b6e
    MOV dword ptr [EBP + 0x808],EAX     ; 00548b72
    MOV ESI,dword ptr [ESP + 0x34]      ; 00548b78
        ;   Label: LAB_00548b78
    MOV EDI,dword ptr [ESP + 0x24]      ; 00548b7c
    MOV EAX,dword ptr [ESP + 0x28]      ; 00548b80
    MOV EDX,dword ptr [ESP + 0x20]      ; 00548b84
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00548b88
    ADD EBX,0x4                         ; 00548b8c
    ADD EBP,0x30                        ; 00548b8f
    ADD ESI,0x30                        ; 00548b92
    ADD EDI,0x10                        ; 00548b95
    ADD EAX,0xc                         ; 00548b98
    ADD EDX,0x24                        ; 00548b9b
    INC ECX                             ; 00548b9e
    MOV dword ptr [ESP + 0x34],ESI      ; 00548b9f
    MOV dword ptr [ESP + 0x24],EDI      ; 00548ba3
    MOV ESI,dword ptr [ESP + 0x18]      ; 00548ba7
    MOV dword ptr [ESP + 0x28],EAX      ; 00548bab
    MOV dword ptr [ESP + 0x20],EDX      ; 00548baf
    MOV EDI,dword ptr [ESI + 0x1d1f8]   ; 00548bb3
    MOV dword ptr [ESP + 0x2c],ECX      ; 00548bb9
    CMP ECX,EDI                         ; 00548bbd
    JL 0x00548af6                       ; 00548bbf
        ;   XREF to: 00548af6 (CONDITIONAL_JUMP)  ; LAB_00548af6
    ADD ESP,0x38                        ; 00548bc5
        ;   Label: LAB_00548bc5
    POP EBP                             ; 00548bc8
    POP EDI                             ; 00548bc9
    POP ESI                             ; 00548bca
    POP EBX                             ; 00548bcb
    RET                                 ; 00548bcc
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00548bcd
        ;   Label: LAB_00548bcd
    FLD float ptr [EBX + 0x64c]         ; 00548bd1
    FMUL float ptr [ESI + EAX*0x1 + 0x7dc] ; 00548bd7
    FSTP float ptr [ESI + EAX*0x1 + 0x7dc] ; 00548bde
    FLD float ptr [EBX + 0x64c]         ; 00548be5
    FMUL float ptr [ESI + EAX*0x1 + 0x7e0] ; 00548beb
    FSTP float ptr [ESI + EAX*0x1 + 0x7e0] ; 00548bf2
    FLD float ptr [EBX + 0x64c]         ; 00548bf9
    FMUL float ptr [ESI + EAX*0x1 + 0x7e4] ; 00548bff
    FSTP float ptr [ESI + EAX*0x1 + 0x7e4] ; 00548c06
    FLD float ptr [EBX + 0x64c]         ; 00548c0d
    FMUL float ptr [ESI + EAX*0x1 + 0x7ec] ; 00548c13
    FSTP float ptr [ESI + EAX*0x1 + 0x7ec] ; 00548c1a
    FLD float ptr [EBX + 0x64c]         ; 00548c21
    FMUL float ptr [ESI + EAX*0x1 + 0x7f0] ; 00548c27
    FSTP float ptr [ESI + EAX*0x1 + 0x7f0] ; 00548c2e
    FLD float ptr [EBX + 0x64c]         ; 00548c35
    FMUL float ptr [ESI + EAX*0x1 + 0x7f4] ; 00548c3b
    FSTP float ptr [ESI + EAX*0x1 + 0x7f4] ; 00548c42
    FLD float ptr [EBX + 0x64c]         ; 00548c49
    FMUL float ptr [ESI + EAX*0x1 + 0x7fc] ; 00548c4f
    FSTP float ptr [ESI + EAX*0x1 + 0x7fc] ; 00548c56
    FLD float ptr [EBX + 0x64c]         ; 00548c5d
    FMUL float ptr [ESI + EAX*0x1 + 0x800] ; 00548c63
    FSTP float ptr [ESI + EAX*0x1 + 0x800] ; 00548c6a
    FLD float ptr [EBX + 0x64c]         ; 00548c71
    FMUL float ptr [ESI + EAX*0x1 + 0x804] ; 00548c77
    FSTP float ptr [ESI + EAX*0x1 + 0x804] ; 00548c7e
    JMP 0x00548b1f                      ; 00548c85
        ;   XREF to: 00548b1f (UNCONDITIONAL_JUMP)  ; LAB_00548b1f
    MOV EAX,dword ptr [ESP + 0x50]      ; 00548c8a
        ;   Label: LAB_00548c8a
    ADD EAX,dword ptr [ESP + 0x28]      ; 00548c8e
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00548c92
    FLD float ptr [EAX + 0x58]          ; 00548c96
    FADD float ptr [ESI]                ; 00548c99
    FSTP float ptr [EBP + 0x7e8]        ; 00548c9b
    FLD float ptr [EAX + 0x5c]          ; 00548ca1
    FADD float ptr [ESI + 0x4]          ; 00548ca4
    FSTP float ptr [EBP + 0x7f8]        ; 00548ca7
    FLD float ptr [EAX + 0x60]          ; 00548cad
    FADD float ptr [ESI + 0x8]          ; 00548cb0
    FSTP float ptr [EBP + 0x808]        ; 00548cb3
    JMP 0x00548b78                      ; 00548cb9
        ;   XREF to: 00548b78 (UNCONDITIONAL_JUMP)  ; LAB_00548b78

