; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[16]:
;   core_charactr.cpp_FUN_00426730 at 004267fc
;   core_charactr.cpp_FUN_00429e90 at 00429eae
;   core_cloth.cpp_FUN_005ae680 at 005aeac8
;   core_doc.cpp_FUN_00450c60 at 00451600
;   core_doc.cpp_FUN_00455d10 at 0045605a
;   core_mimic.cpp_FUN_004f04f0 at 004f0752
;   core_mimic.cpp_FUN_004f0e10 at 004f172f
;   core_passngr.cpp_FUN_005115e0 at 0051161e
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0 at 00544ef2
;   core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_00544f50 at 00544f6e
;   ... and 6 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_xform.cpp_FUN_00591530
;   core_xform.cpp_FUN_005938c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546ae0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
    PUSH ESI                            ; 00546ae1
    PUSH EDI                            ; 00546ae2
    PUSH EBP                            ; 00546ae3
    SUB ESP,0x38                        ; 00546ae4
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00546ae7
    PUSH EDX                            ; 00546aeb
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00546aec
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00546af1
    MOV EBX,dword ptr [EAX + 0x1d1f8]   ; 00546af4
    XOR ECX,ECX                         ; 00546afa
    MOV dword ptr [ESP + 0x18],EAX      ; 00546afc
    MOV dword ptr [ESP + 0x28],ECX      ; 00546b00
    TEST EBX,EBX                        ; 00546b04
    JLE 0x00546c18                      ; 00546b06
        ;   XREF to: 00546c18 (CONDITIONAL_JUMP)  ; LAB_00546c18
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00546b0c
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00546b10
    MOV dword ptr [ESP + 0x2c],ECX      ; 00546b14
    MOV dword ptr [ESP + 0x20],EAX      ; 00546b18
    ADD EBX,0xe80                       ; 00546b1c
    ADD ESI,0x6b0                       ; 00546b22
    MOV dword ptr [ESP + 0x1c],EBX      ; 00546b28
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00546b2c
    MOV dword ptr [ESP + 0x34],ESI      ; 00546b30
    ADD EBX,0x58                        ; 00546b34
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00546b37
    MOV dword ptr [ESP + 0x30],EBX      ; 00546b3b
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00546b3f
    MOV dword ptr [ESP + 0x24],EBP      ; 00546b43
    MOV EBP,EBX                         ; 00546b47
    IMUL ESI,dword ptr [ESP + 0x28],0x30 ; 00546b49
        ;   Label: LAB_00546b49
    MOV ECX,dword ptr [ESP + 0x34]      ; 00546b4e
    PUSH ECX                            ; 00546b52
    MOV EAX,dword ptr [ESP + 0x28]      ; 00546b53
    PUSH EAX                            ; 00546b57
    CALL core_xform.cpp_FUN_005938c0    ; 00546b58
        ;   XREF to: 005938c0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_FUN_005938c0(CMatrix3x4f * matrix_out, CQuaternion4f * quat_in)
    MOV EDX,dword ptr [EBX + 0xcf0]     ; 00546b5d
    ADD ESP,0x8                         ; 00546b63
    CMP EDX,0x3f800000                  ; 00546b66
    JNZ 0x00546c2e                      ; 00546b6c
        ;   XREF to: 00546c2e (CONDITIONAL_JUMP)  ; LAB_00546c2e
    MOV EAX,dword ptr [ESP + 0x20]      ; 00546b72
        ;   Label: LAB_00546b72
    MOV EAX,dword ptr [EAX + 0x1d21c]   ; 00546b76
    TEST EAX,EAX                        ; 00546b7c
    JL 0x00546ceb                       ; 00546b7e
        ;   XREF to: 00546ceb (CONDITIONAL_JUMP)  ; LAB_00546ceb
    IMUL EAX,EAX,0x30                   ; 00546b84
    ADD EAX,dword ptr [ESP + 0x1c]      ; 00546b87
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00546b8b
    PUSH EAX                            ; 00546b8f
    MOV EAX,dword ptr [ESP + 0x34]      ; 00546b90
    ADD EAX,EDI                         ; 00546b94
    PUSH EAX                            ; 00546b96
    LEA ESI,[ESP + 0x14]                ; 00546b97
    LEA EDI,[ESP + 0x8]                 ; 00546b9b
    CALL core_xform.cpp_FUN_00591530    ; 00546b9f
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[ESP + 0x14]                ; 00546ba4
    ADD ESP,0x8                         ; 00546ba8
    MOVSD ES:EDI,ESI                    ; 00546bab
    MOVSD ES:EDI,ESI                    ; 00546bac
    MOVSD ES:EDI,ESI                    ; 00546bad
    MOV EAX,dword ptr [ESP]             ; 00546bae
    MOV dword ptr [EBP + 0xe8c],EAX     ; 00546bb1
    MOV EAX,dword ptr [ESP + 0x4]       ; 00546bb7
    MOV dword ptr [EBP + 0xe9c],EAX     ; 00546bbb
    MOV EAX,dword ptr [ESP + 0x8]       ; 00546bc1
    MOV dword ptr [EBP + 0xeac],EAX     ; 00546bc5
    MOV ESI,dword ptr [ESP + 0x24]      ; 00546bcb
        ;   Label: LAB_00546bcb
    MOV EDI,dword ptr [ESP + 0x34]      ; 00546bcf
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00546bd3
    MOV EDX,dword ptr [ESP + 0x20]      ; 00546bd7
    MOV ECX,dword ptr [ESP + 0x28]      ; 00546bdb
    ADD EBX,0x4                         ; 00546bdf
    ADD EBP,0x30                        ; 00546be2
    ADD ESI,0x30                        ; 00546be5
    ADD EDI,0x10                        ; 00546be8
    ADD EAX,0xc                         ; 00546beb
    ADD EDX,0x24                        ; 00546bee
    INC ECX                             ; 00546bf1
    MOV dword ptr [ESP + 0x24],ESI      ; 00546bf2
    MOV dword ptr [ESP + 0x34],EDI      ; 00546bf6
    MOV ESI,dword ptr [ESP + 0x18]      ; 00546bfa
    MOV dword ptr [ESP + 0x2c],EAX      ; 00546bfe
    MOV dword ptr [ESP + 0x20],EDX      ; 00546c02
    MOV EDI,dword ptr [ESI + 0x1d1f8]   ; 00546c06
    MOV dword ptr [ESP + 0x28],ECX      ; 00546c0c
    CMP ECX,EDI                         ; 00546c10
    JL 0x00546b49                       ; 00546c12
        ;   XREF to: 00546b49 (CONDITIONAL_JUMP)  ; LAB_00546b49
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00546c18
        ;   Label: LAB_00546c18
    MOV dword ptr [EAX + 0x2230],0xffffffff ; 00546c1c
    ADD ESP,0x38                        ; 00546c26
    POP EBP                             ; 00546c29
    POP EDI                             ; 00546c2a
    POP ESI                             ; 00546c2b
    POP EBX                             ; 00546c2c
    RET                                 ; 00546c2d
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00546c2e
        ;   Label: LAB_00546c2e
    FLD float ptr [EBX + 0xcf0]         ; 00546c32
    FMUL float ptr [ESI + EAX*0x1 + 0xe80] ; 00546c38
    FSTP float ptr [ESI + EAX*0x1 + 0xe80] ; 00546c3f
    FLD float ptr [EBX + 0xcf0]         ; 00546c46
    FMUL float ptr [ESI + EAX*0x1 + 0xe84] ; 00546c4c
    FSTP float ptr [ESI + EAX*0x1 + 0xe84] ; 00546c53
    FLD float ptr [EBX + 0xcf0]         ; 00546c5a
    FMUL float ptr [ESI + EAX*0x1 + 0xe88] ; 00546c60
    FSTP float ptr [ESI + EAX*0x1 + 0xe88] ; 00546c67
    FLD float ptr [EBX + 0xcf0]         ; 00546c6e
    FMUL float ptr [ESI + EAX*0x1 + 0xe90] ; 00546c74
    FSTP float ptr [ESI + EAX*0x1 + 0xe90] ; 00546c7b
    FLD float ptr [EBX + 0xcf0]         ; 00546c82
    FMUL float ptr [ESI + EAX*0x1 + 0xe94] ; 00546c88
    FSTP float ptr [ESI + EAX*0x1 + 0xe94] ; 00546c8f
    FLD float ptr [EBX + 0xcf0]         ; 00546c96
    FMUL float ptr [ESI + EAX*0x1 + 0xe98] ; 00546c9c
    FSTP float ptr [ESI + EAX*0x1 + 0xe98] ; 00546ca3
    FLD float ptr [EBX + 0xcf0]         ; 00546caa
    FMUL float ptr [ESI + EAX*0x1 + 0xea0] ; 00546cb0
    FSTP float ptr [ESI + EAX*0x1 + 0xea0] ; 00546cb7
    FLD float ptr [EBX + 0xcf0]         ; 00546cbe
    FMUL float ptr [ESI + EAX*0x1 + 0xea4] ; 00546cc4
    FSTP float ptr [ESI + EAX*0x1 + 0xea4] ; 00546ccb
    FLD float ptr [EBX + 0xcf0]         ; 00546cd2
    FMUL float ptr [ESI + EAX*0x1 + 0xea8] ; 00546cd8
    FSTP float ptr [ESI + EAX*0x1 + 0xea8] ; 00546cdf
    JMP 0x00546b72                      ; 00546ce6
        ;   XREF to: 00546b72 (UNCONDITIONAL_JUMP)  ; LAB_00546b72
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00546ceb
        ;   Label: LAB_00546ceb
    ADD EAX,dword ptr [ESP + 0x2c]      ; 00546cef
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00546cf3
    FLD float ptr [EAX + 0x58]          ; 00546cf7
    FADD float ptr [ESI + 0x6a4]        ; 00546cfa
    FSTP float ptr [EBP + 0xe8c]        ; 00546d00
    FLD float ptr [EAX + 0x5c]          ; 00546d06
    FADD float ptr [ESI + 0x6a8]        ; 00546d09
    FSTP float ptr [EBP + 0xe9c]        ; 00546d0f
    FLD float ptr [EAX + 0x60]          ; 00546d15
    FADD float ptr [ESI + 0x6ac]        ; 00546d18
    FSTP float ptr [EBP + 0xeac]        ; 00546d1e
    JMP 0x00546bcb                      ; 00546d24
        ;   XREF to: 00546bcb (UNCONDITIONAL_JUMP)  ; LAB_00546bcb

