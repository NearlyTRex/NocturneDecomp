; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_CBoneStructure_extractInverseBindPose_FUN_0058aeb0(CBoneStructure *this_ptr,CMatrix3x4f *inverse_matrices)
;
; Parameters:
; CBoneStructure * Stack[0x4]:4   this_ptr
; CMatrix3x4f *    Stack[0x8]:4   inverse_matrices
; Local Variables:
; CMatrix3x4f      Stack[-0x38]:48  local_38
; int              Stack[-0x8]:4  local_8
;
; XREF[2]:
;   core_skeledit.cpp_CDeformableModel_buildFromPosFile_FUN_0058c190 at 0058c37c
;   core_skeledit.cpp_CSkeleton_importSkeletonFile_FUN_00592690 at 005929b5
;
; Called Functions:
;   core_skeledit.cpp_CBoneStructure_computeLocalMatrices_FUN_0058ac80
;   core_xform.cpp_clearTranslation_FUN_005f5370
;   core_xform.cpp_inverse_FUN_005f6210
;   core_xform.cpp_setRotationScaleIdentity_FUN_005f5190
;
; *****************************************************************************

section .text

    NOP                                 ; 0058aeb0
        ;   Label: core_skeledit.cpp_CBoneStructure_extractInverseBindPose_FUN_0058aeb0
    NOP                                 ; 0058aeb1
    NOP                                 ; 0058aeb2
    NOP                                 ; 0058aeb3
    NOP                                 ; 0058aeb4
    NOP                                 ; 0058aeb5
    NOP                                 ; 0058aeb6
    NOP                                 ; 0058aeb7
    NOP                                 ; 0058aeb8
    NOP                                 ; 0058aeb9
    PUSH EBP                            ; 0058aeba
    SUB ESP,0x34                        ; 0058aebb
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0058aebe
    XOR EDX,EDX                         ; 0058aec2
    MOV ECX,dword ptr [EAX]             ; 0058aec4
    MOV dword ptr [ESP + 0x30],EDX      ; 0058aec6
    TEST ECX,ECX                        ; 0058aeca
    JLE 0x0058af23                      ; 0058aecc
        ;   XREF to: 0058af23 (CONDITIONAL_JUMP)  ; LAB_0058af23
    PUSH EDI                            ; 0058aece
    PUSH ESI                            ; 0058aecf
    PUSH EBX                            ; 0058aed0
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0058aed1
    LEA EBP,[EAX + 0x58]                ; 0058aed5
    PUSH EBP                            ; 0058aed8
        ;   Label: LAB_0058aed8
    LEA ESI,[ESP + 0x10]                ; 0058aed9
    CALL core_xform.cpp_inverse_FUN_005f6210 ; 0058aedd
        ;   XREF to: 005f6210 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_inverse_FUN_005f6210(CMatrix3x4f * matrix_in, CMatrix3x4f * matrix_out)
    MOV EDI,EBX                         ; 0058aee2
    ADD ESP,0x4                         ; 0058aee4
    JMP 0x03fc3f63                      ; 0058aee7
        ;   XREF to: 03fc3f63 (UNCONDITIONAL_JUMP)  ; LAB_03fc3f63
    CALL core_xform.cpp_clearTranslation_FUN_005f5370 ; 0058aef3
        ;   XREF to: 005f5370 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clearTranslation_FUN_005f5370(CMatrix3x4f * matrix)
        ;   Label: LAB_0058aef3
    ADD ESP,0x4                         ; 0058aef8
    PUSH EBP                            ; 0058aefb
    CALL core_xform.cpp_setRotationScaleIdentity_FUN_005f5190 ; 0058aefc
        ;   XREF to: 005f5190 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_setRotationScaleIdentity_FUN_005f5190(CMatrix3x4f * matrix)
    ADD ESP,0x4                         ; 0058af01
    ADD EBX,0x30                        ; 0058af04
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0058af07
    MOV EAX,dword ptr [ESP + 0x48]      ; 0058af0b
    ADD EBP,0x84                        ; 0058af0f
    INC ESI                             ; 0058af15
    MOV EDI,dword ptr [EAX]             ; 0058af16
    MOV dword ptr [ESP + 0x3c],ESI      ; 0058af18
    CMP ESI,EDI                         ; 0058af1c
    JL 0x0058aed8                       ; 0058af1e
        ;   XREF to: 0058aed8 (CONDITIONAL_JUMP)  ; LAB_0058aed8
    POP EBX                             ; 0058af20
    POP ESI                             ; 0058af21
    POP EDI                             ; 0058af22
    MOV EBP,dword ptr [ESP + 0x3c]      ; 0058af23
        ;   Label: LAB_0058af23
    PUSH EBP                            ; 0058af27
    CALL core_skeledit.cpp_CBoneStructure_computeLocalMatrices_FUN_0058ac80 ; 0058af28
        ;   XREF to: 0058ac80 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CBoneStructure_computeLocalMatrices_FUN_0058ac80(CBoneStructure * this_ptr)
    ADD ESP,0x4                         ; 0058af2d
    ADD ESP,0x34                        ; 0058af30
    POP EBP                             ; 0058af33
    RET                                 ; 0058af34
    MOV ECX,0xc                         ; 03fc3f63
        ;   Label: LAB_03fc3f63
    LEA ESI,[ESP + 0xc]                 ; 03fc3f68
    PUSH EBX                            ; 03fc3f6c
    MOV ECX,dword ptr [ESI]             ; 03fc3f6d
    MOV dword ptr [EDI],ECX             ; 03fc3f6f
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc3f71
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc3f74
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc3f77
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc3f7a
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc3f7d
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc3f80
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc3f83
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc3f86
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc3f89
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc3f8c
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc3f8f
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc3f92
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc3f95
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc3f98
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc3f9b
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc3f9e
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc3fa1
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc3fa4
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc3fa7
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc3faa
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc3fad
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc3fb0
    ADD ESI,0x30                        ; 03fc3fb3
    ADD EDI,0x30                        ; 03fc3fb6
    XOR ECX,ECX                         ; 03fc3fb9
    JMP 0x0058aef3                      ; 03fc3fbb
        ;   XREF to: 0058aef3 (UNCONDITIONAL_JUMP)  ; LAB_0058aef3

