; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00(CDeformableModel * this_ptr, CVector3f * output_pos, int lod_index, int vertex_index, CMatrix3x4f * bone_matrices)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output_pos
; int              Stack[0xc]:4   lod_index
; int              Stack[0x10]:4   vertex_index
; CMatrix3x4f *    Stack[0x14]:4   bone_matrices
; Local Variables:
; undefined1       Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_skeledit.cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0 at 0059623a
;   core_skeleton.cpp_CDeformableModelInstance_skinSingleVertex_FUN_005a0210 at 005a0236
;
; Called Functions:
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059aa00
        ;   Label: core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00
    PUSH ESI                            ; 0059aa01
    PUSH EDI                            ; 0059aa02
    PUSH EBP                            ; 0059aa03
    SUB ESP,0x28                        ; 0059aa04
    MOV EAX,dword ptr [ESP + 0x44]      ; 0059aa07
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0059aa0b
    SHL EAX,0x2                         ; 0059aa0f
    MOV EBX,dword ptr [ESP + 0x48]      ; 0059aa12
    ADD ESI,EAX                         ; 0059aa16
    LEA EAX,[EBX*0x4 + 0x0]             ; 0059aa18
    SUB EAX,EBX                         ; 0059aa1f
    SHL EAX,0x2                         ; 0059aa21
    ADD EBX,EAX                         ; 0059aa24
    SHL EBX,0x2                         ; 0059aa26
    MOV EAX,dword ptr [ESI + 0x40]      ; 0059aa29
    ADD EAX,EBX                         ; 0059aa2c
    MOV dword ptr [ESP + 0x24],EAX      ; 0059aa2e
    MOV DL,byte ptr [EAX]               ; 0059aa32
    LEA EBP,[EAX + 0x10]                ; 0059aa34
    CMP DL,0x1                          ; 0059aa37
    JZ 0x0059aa81                       ; 0059aa3a
        ;   XREF to: 0059aa81 (CONDITIONAL_JUMP)  ; LAB_0059aa81
    LEA EBX,[EAX + 0x4]                 ; 0059aa3c
    XOR EDX,EDX                         ; 0059aa3f
    XOR EDI,EDI                         ; 0059aa41
    MOV dword ptr [ESP + 0x10],EDX      ; 0059aa43
    MOV dword ptr [ESP + 0x14],EDX      ; 0059aa47
    MOV ESI,EAX                         ; 0059aa4b
    MOV dword ptr [ESP + 0xc],EDX       ; 0059aa4d
    MOV EDX,dword ptr [ESP + 0x24]      ; 0059aa51
        ;   Label: LAB_0059aa51
    XOR EAX,EAX                         ; 0059aa55
    MOV AL,byte ptr [EDX]               ; 0059aa57
    CMP EDI,EAX                         ; 0059aa59
    JL 0x0059aaa9                       ; 0059aa5b
        ;   XREF to: 0059aaa9 (CONDITIONAL_JUMP)  ; LAB_0059aaa9
    MOV EDX,dword ptr [ESP + 0x40]      ; 0059aa5d
    MOV EAX,dword ptr [ESP + 0xc]       ; 0059aa61
    MOV dword ptr [EDX],EAX             ; 0059aa65
    MOV EAX,dword ptr [ESP + 0x10]      ; 0059aa67
    MOV dword ptr [EDX + 0x4],EAX       ; 0059aa6b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0059aa6e
    MOV dword ptr [EDX + 0x8],EAX       ; 0059aa72
    MOV EAX,dword ptr [ESP + 0x40]      ; 0059aa75
        ;   Label: LAB_0059aa75
    ADD ESP,0x28                        ; 0059aa79
    POP EBP                             ; 0059aa7c
    POP EDI                             ; 0059aa7d
    POP ESI                             ; 0059aa7e
    POP EBX                             ; 0059aa7f
    RET                                 ; 0059aa80
    XOR EBX,EBX                         ; 0059aa81
        ;   Label: LAB_0059aa81
    MOV BL,byte ptr [EAX + 0x1]         ; 0059aa83
    LEA EAX,[EBX*0x4 + 0x0]             ; 0059aa86
    SUB EAX,EBX                         ; 0059aa8d
    MOV ESI,dword ptr [ESP + 0x4c]      ; 0059aa8f
    SHL EAX,0x4                         ; 0059aa93
    ADD EAX,ESI                         ; 0059aa96
    PUSH EAX                            ; 0059aa98
    PUSH EBP                            ; 0059aa99
    MOV EDI,dword ptr [ESP + 0x48]      ; 0059aa9a
    PUSH EDI                            ; 0059aa9e
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0059aa9f
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0059aaa4
    JMP 0x0059aa75                      ; 0059aaa7
        ;   XREF to: 0059aa75 (UNCONDITIONAL_JUMP)  ; LAB_0059aa75
    XOR EAX,EAX                         ; 0059aaa9
        ;   Label: LAB_0059aaa9
    MOV AL,byte ptr [ESI + 0x1]         ; 0059aaab
    IMUL EAX,EAX,0x30                   ; 0059aaae
    ADD EAX,dword ptr [ESP + 0x4c]      ; 0059aab1
    PUSH EAX                            ; 0059aab5
    PUSH EBP                            ; 0059aab6
    LEA EAX,[ESP + 0x8]                 ; 0059aab7
    PUSH EAX                            ; 0059aabb
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0059aabc
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    FLD float ptr [EAX]                 ; 0059aac1
    FMUL float ptr [EBX]                ; 0059aac3
    ADD ESP,0xc                         ; 0059aac5
    FSTP float ptr [ESP + 0x18]         ; 0059aac8
    FLD float ptr [EAX + 0x4]           ; 0059aacc
    FMUL float ptr [EBX]                ; 0059aacf
    FSTP float ptr [ESP + 0x1c]         ; 0059aad1
    FLD float ptr [EAX + 0x8]           ; 0059aad5
    FMUL float ptr [EBX]                ; 0059aad8
    INC ESI                             ; 0059aada
    ADD EBX,0x4                         ; 0059aadb
    INC EDI                             ; 0059aade
    ADD EBP,0xc                         ; 0059aadf
    FLD float ptr [ESP + 0xc]           ; 0059aae2
    FLD float ptr [ESP + 0x10]          ; 0059aae6
    FLD float ptr [ESP + 0x14]          ; 0059aaea
    FXCH ST2                            ; 0059aaee
    FADD float ptr [ESP + 0x18]         ; 0059aaf0
    FXCH                                ; 0059aaf4
    FADD float ptr [ESP + 0x1c]         ; 0059aaf6
    FXCH ST3                            ; 0059aafa
    FSTP float ptr [ESP + 0x20]         ; 0059aafc
    FSTP float ptr [ESP + 0xc]          ; 0059ab00
    FADD float ptr [ESP + 0x20]         ; 0059ab04
    FXCH                                ; 0059ab08
    FSTP float ptr [ESP + 0x10]         ; 0059ab0a
    FSTP float ptr [ESP + 0x14]         ; 0059ab0e
    JMP 0x0059aa51                      ; 0059ab12
        ;   XREF to: 0059aa51 (UNCONDITIONAL_JUMP)  ; LAB_0059aa51

