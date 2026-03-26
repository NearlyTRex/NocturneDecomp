; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_CBoneStructure_computeLocalMatrices_FUN_0058ac80(CBoneStructure *this_ptr)
;
; Parameters:
; CBoneStructure * Stack[0x4]:4   this_ptr
; Local Variables:
; CMatrix3x4f      Stack[-0xa4]:48  local_a4
; CMatrix3x4f      Stack[-0x74]:48  local_74
; CMatrix3x4f      Stack[-0x44]:48  local_44
; SBoneData *      Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_skeledit.cpp_CBoneStructure_applyMatrixArray_FUN_0058af40 at 0058afc3
;   core_skeledit.cpp_CBoneStructure_extractInverseBindPose_FUN_0058aeb0 at 0058af28
;   core_skeledit.cpp_CBoneStructure_fixupMatrices_FUN_0058adb0 at 0058ae93
;   core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10 at 0058ab6c
;   core_skeledit.cpp_CSkeleton_importSkeletonFile_FUN_00592690 at 005954e6
;
; Called Functions:
;   core_xform.cpp_inverse_FUN_005f6210
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    NOP                                 ; 0058ac80
        ;   Label: core_skeledit.cpp_CBoneStructure_computeLocalMatrices_FUN_0058ac80
    NOP                                 ; 0058ac81
    NOP                                 ; 0058ac82
    NOP                                 ; 0058ac83
    NOP                                 ; 0058ac84
    NOP                                 ; 0058ac85
    NOP                                 ; 0058ac86
    NOP                                 ; 0058ac87
    NOP                                 ; 0058ac88
    NOP                                 ; 0058ac89
    PUSH EBX                            ; 0058ac8a
    PUSH ESI                            ; 0058ac8b
    PUSH EDI                            ; 0058ac8c
    PUSH EBP                            ; 0058ac8d
    SUB ESP,0x94                        ; 0058ac8e
    MOV EBX,dword ptr [ESP + 0xa8]      ; 0058ac94
    MOV EDX,dword ptr [EBX]             ; 0058ac9b
    XOR EBP,EBP                         ; 0058ac9d
    TEST EDX,EDX                        ; 0058ac9f
    JLE 0x0058acd5                      ; 0058aca1
        ;   XREF to: 0058acd5 (CONDITIONAL_JUMP)  ; LAB_0058acd5
    ADD EBX,0x4                         ; 0058aca3
    MOV dword ptr [ESP + 0x90],EBX      ; 0058aca6
    MOV ESI,dword ptr [EBX + 0x20]      ; 0058acad
        ;   Label: LAB_0058acad
    TEST ESI,ESI                        ; 0058acb0
    JGE 0x0058ace0                      ; 0058acb2
        ;   XREF to: 0058ace0 (CONDITIONAL_JUMP)  ; LAB_0058ace0
    MOV ECX,0xc                         ; 0058acb4
    LEA EDI,[EBX + 0x24]                ; 0058acb9
    LEA ESI,[EBX + 0x54]                ; 0058acbc
    MOVSD.REP ES:EDI,ESI                ; 0058acbf
        ;   Label: LAB_0058acbf
    MOV ESI,dword ptr [ESP + 0xa8]      ; 0058acc1
    INC EBP                             ; 0058acc8
    MOV ECX,dword ptr [ESI]             ; 0058acc9
    ADD EBX,0x84                        ; 0058accb
    CMP EBP,ECX                         ; 0058acd1
    JL 0x0058acad                       ; 0058acd3
        ;   XREF to: 0058acad (CONDITIONAL_JUMP)  ; LAB_0058acad
    ADD ESP,0x94                        ; 0058acd5
        ;   Label: LAB_0058acd5
    POP EBP                             ; 0058acdb
    POP EDI                             ; 0058acdc
    POP ESI                             ; 0058acdd
    POP EBX                             ; 0058acde
    RET                                 ; 0058acdf
    IMUL ESI,ESI,0x84                   ; 0058ace0
        ;   Label: LAB_0058ace0
    ADD ESI,dword ptr [ESP + 0x90]      ; 0058ace6
    ADD ESI,0x54                        ; 0058aced
    PUSH ESI                            ; 0058acf0
    LEA ESI,[ESP + 0x64]                ; 0058acf1
    LEA EDI,[ESP + 0x34]                ; 0058acf5
    CALL core_xform.cpp_inverse_FUN_005f6210 ; 0058acf9
        ;   XREF to: 005f6210 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_inverse_FUN_005f6210(CMatrix3x4f * matrix_in, CMatrix3x4f * matrix_out)
    JMP 0x03fc4eb1                      ; 0058acfe
        ;   XREF to: 03fc4eb1 (UNCONDITIONAL_JUMP)  ; LAB_03fc4eb1
    LEA ESI,[ESP + 0x30]                ; 0058ad0c
        ;   Label: LAB_0058ad0c
    PUSH ESI                            ; 0058ad10
    LEA ESI,[EBX + 0x54]                ; 0058ad11
    PUSH ESI                            ; 0058ad14
    LEA ESI,[ESP + 0x8]                 ; 0058ad15
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0058ad19
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0058ad1e
    LEA ESI,[ESP + 0x8]                 ; 0058ad23
    LEA EDI,[EBX + 0x24]                ; 0058ad27
    ADD ESP,0x8                         ; 0058ad2a
    JMP 0x0058acbf                      ; 0058ad2d
        ;   XREF to: 0058acbf (UNCONDITIONAL_JUMP)  ; LAB_0058acbf
    MOV ECX,0xc                         ; 03fc4eb1
        ;   Label: LAB_03fc4eb1
    LEA ESI,[ESP + 0x64]                ; 03fc4eb6
    ADD ESP,0x4                         ; 03fc4eba
    MOV ECX,dword ptr [ESI]             ; 03fc4ebd
    MOV dword ptr [EDI],ECX             ; 03fc4ebf
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc4ec1
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc4ec4
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc4ec7
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc4eca
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc4ecd
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc4ed0
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc4ed3
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc4ed6
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc4ed9
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc4edc
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc4edf
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc4ee2
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc4ee5
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc4ee8
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc4eeb
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc4eee
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc4ef1
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc4ef4
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc4ef7
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc4efa
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc4efd
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc4f00
    ADD ESI,0x30                        ; 03fc4f03
    ADD EDI,0x30                        ; 03fc4f06
    XOR ECX,ECX                         ; 03fc4f09
    JMP 0x0058ad0c                      ; 03fc4f0b
        ;   XREF to: 0058ad0c (UNCONDITIONAL_JUMP)  ; LAB_0058ad0c

