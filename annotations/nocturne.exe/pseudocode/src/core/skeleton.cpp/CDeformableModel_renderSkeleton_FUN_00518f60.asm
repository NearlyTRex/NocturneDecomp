; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_renderSkeleton_FUN_00518f60(CDeformableModel *this_ptr,int color,CMatrix3x4f *bone_matrices,int render_flags)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   color
; CMatrix3x4f *    Stack[0xc]:4   bone_matrices
; int              Stack[0x10]:4   render_flags
; Local Variables:
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_renderSkeleton_FUN_0051f030 at 0051f050
;
; Referenced Globals:
;   undefined4 DAT_005a1ea8
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b6d50
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c00c70
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00518130
;   core_xform.cpp_getTranslation_FUN_0055bc00
;   core_xform.cpp_matrixToEulerAngles_FUN_0055b180
;   engine_3d.c_clipAndDrawLine2D_FUN_00409290
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;   shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_00472de0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00518f60
        ;   Label: core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_00518f60
    PUSH ESI                            ; 00518f61
    PUSH EDI                            ; 00518f62
    PUSH EBP                            ; 00518f63
    SUB ESP,0x3c                        ; 00518f64
    MOV EDX,dword ptr [ESP + 0x50]      ; 00518f67
    PUSH EDX                            ; 00518f6b
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00518130 ; 00518f6c
        ;   XREF to: 00518130 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00518130(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 00518f71
    MOV DL,byte ptr [ESP + 0x5c]        ; 00518f74
    MOV EBP,EAX                         ; 00518f78
    TEST DL,0x1                         ; 00518f7a
    JZ 0x0051907d                       ; 00518f7d
        ;   XREF to: 0051907d (CONDITIONAL_JUMP)  ; LAB_0051907d
    MOV ECX,dword ptr [EAX + 0x28558]   ; 00518f83
    XOR ESI,ESI                         ; 00518f89
    TEST ECX,ECX                        ; 00518f8b
    JLE 0x00519000                      ; 00518f8d
        ;   XREF to: 00519000 (CONDITIONAL_JUMP)  ; LAB_00519000
    MOV EDI,dword ptr [ESP + 0x58]      ; 00518f93
    LEA EAX,[ESP + 0x24]                ; 00518f97
        ;   Label: LAB_00518f97
    PUSH EAX                            ; 00518f9b
    IMUL EAX,ESI,0x30                   ; 00518f9c
    PUSH EDI                            ; 00518f9f
    LEA EBX,[ESP + 0x8]                 ; 00518fa0
    MOV dword ptr [ESP + 0x38],EAX      ; 00518fa4
    CALL core_xform.cpp_getTranslation_FUN_0055bc00 ; 00518fa8
        ;   XREF to: 0055bc00 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_getTranslation_FUN_0055bc00(CMatrix3x4f * matrix_in, CVector3f * vector_out)
    ADD ESP,0x8                         ; 00518fad
    LEA EAX,[ESP + 0x24]                ; 00518fb0
    MOV EDX,dword ptr [0x005ae704]      ; 00518fb4 | DAT_005ae704
    FLD float ptr [EAX]                 ; 00518fba
    FMUL float ptr [0x005a1ea8]         ; 00518fbc | DAT_005a1ea8
    FISTP dword ptr [EBX]               ; 00518fc2
    FLD float ptr [EAX + 0x4]           ; 00518fc4
    FMUL float ptr [0x005a1ea8]         ; 00518fc7 | DAT_005a1ea8
    FISTP dword ptr [EBX + 0x4]         ; 00518fcd
    FLD float ptr [EAX + 0x8]           ; 00518fd0
    FMUL float ptr [0x005a1ea8]         ; 00518fd3 | DAT_005a1ea8
    FISTP dword ptr [EBX + 0x8]         ; 00518fd9
    MOV EAX,ESP                         ; 00518fdc
    MOV EBX,dword ptr [ESP + 0x30]      ; 00518fde
    PUSH EAX                            ; 00518fe2
    MOV EAX,dword ptr [EDX]             ; 00518fe3 | DAT_01b4d738
    ADD EAX,EBX                         ; 00518fe5
    PUSH EAX                            ; 00518fe7
    ADD EDI,0x30                        ; 00518fe8
    INC ESI                             ; 00518feb
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 00518fec
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,dword ptr [EBP + 0x28558]   ; 00518ff1
    ADD ESP,0x8                         ; 00518ff7
    CMP ESI,EAX                         ; 00518ffa
    JL 0x00518f97                       ; 00518ffc
        ;   XREF to: 00518f97 (CONDITIONAL_JUMP)  ; LAB_00518f97
    MOV EAX,EAX                         ; 00518ffe
    MOV EAX,dword ptr [ESP + 0x54]      ; 00519000
        ;   Label: LAB_00519000
    XOR EDX,EDX                         ; 00519004
    MOV ECX,dword ptr [EBP + 0x28558]   ; 00519006
    MOV dword ptr [ESP + 0x38],EDX      ; 0051900c
    MOV [0x01c00c70],EAX                ; 00519010 | DAT_01c00c70
    TEST ECX,ECX                        ; 00519015
    JLE 0x0051907d                      ; 00519017
        ;   XREF to: 0051907d (CONDITIONAL_JUMP)  ; LAB_0051907d
    MOV dword ptr [ESP + 0x34],EBP      ; 00519019
    XOR EBX,EBX                         ; 0051901d
    MOV EAX,dword ptr [ESP + 0x34]      ; 0051901f
        ;   Label: LAB_0051901f
    MOV EAX,dword ptr [EAX + 0x2857c]   ; 00519023
    TEST EAX,EAX                        ; 00519029
    JL 0x0051905c                       ; 0051902b
        ;   XREF to: 0051905c (CONDITIONAL_JUMP)  ; LAB_0051905c
    IMUL ESI,EAX,0x30                   ; 0051902d
    MOV EAX,[0x005ae704]                ; 00519030 | DAT_005ae704
    MOV ECX,0xc                         ; 00519035
    SUB ESP,0x30                        ; 0051903a
    MOV EAX,dword ptr [EAX]             ; 0051903d | DAT_01b4d738
    MOV EDI,ESP                         ; 0051903f
    ADD ESI,EAX                         ; 00519041
    MOVSD.REP ES:EDI,ESI                ; 00519043
    SUB ESP,0x30                        ; 00519045
    MOV ECX,0xc                         ; 00519048
    MOV EDI,ESP                         ; 0051904d
    LEA ESI,[EAX + EBX*0x1]             ; 0051904f
    MOVSD.REP ES:EDI,ESI                ; 00519052
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00409290 ; 00519054
        ;   XREF to: 00409290 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00409290(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00519059
    MOV ESI,dword ptr [ESP + 0x34]      ; 0051905c
        ;   Label: LAB_0051905c
    MOV EDI,dword ptr [ESP + 0x38]      ; 00519060
    ADD EBX,0x30                        ; 00519064
    MOV EDX,dword ptr [EBP + 0x28558]   ; 00519067
    ADD ESI,0x24                        ; 0051906d
    INC EDI                             ; 00519070
    MOV dword ptr [ESP + 0x34],ESI      ; 00519071
    MOV dword ptr [ESP + 0x38],EDI      ; 00519075
    CMP EDI,EDX                         ; 00519079
    JL 0x0051901f                       ; 0051907b
        ;   XREF to: 0051901f (CONDITIONAL_JUMP)  ; LAB_0051901f
    TEST byte ptr [ESP + 0x5c],0x2      ; 0051907d
        ;   Label: LAB_0051907d
    JZ 0x00519110                       ; 00519082
        ;   XREF to: 00519110 (CONDITIONAL_JUMP)  ; LAB_00519110
    MOV ECX,dword ptr [EBP + 0x28558]   ; 00519088
    XOR EBX,EBX                         ; 0051908e
    TEST ECX,ECX                        ; 00519090
    JLE 0x00519110                      ; 00519092
        ;   XREF to: 00519110 (CONDITIONAL_JUMP)  ; LAB_00519110
    MOV ESI,dword ptr [ESP + 0x58]      ; 00519098
    LEA EAX,[ESP + 0xc]                 ; 0051909c
        ;   Label: LAB_0051909c
    PUSH EAX                            ; 005190a0
    PUSH ESI                            ; 005190a1
    CALL core_xform.cpp_matrixToEulerAngles_FUN_0055b180 ; 005190a2
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_0055b180(CMatrix3x4f * matrix_in, CVector3f * euler_out)
    ADD ESP,0x8                         ; 005190a7
    LEA EAX,[ESP + 0x18]                ; 005190aa
    PUSH EAX                            ; 005190ae
    PUSH ESI                            ; 005190af
    CALL core_xform.cpp_getTranslation_FUN_0055bc00 ; 005190b0
        ;   XREF to: 0055bc00 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_getTranslation_FUN_0055bc00(CMatrix3x4f * matrix_in, CVector3f * vector_out)
    ADD ESP,0x8                         ; 005190b5
    LEA EAX,[ESP + 0x18]                ; 005190b8
    PUSH EAX                            ; 005190bc
    LEA EAX,[ESP + 0x10]                ; 005190bd
    PUSH EAX                            ; 005190c1
    MOV EDI,dword ptr [0x005ae704]      ; 005190c2 | DAT_005ae704
    PUSH EDI                            ; 005190c8 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 005190c9
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 005190ce
    PUSH 0xff                           ; 005190d1
    MOV EAX,[0x005b6d50]                ; 005190d6 | DAT_005b6d50
    PUSH 0x3f000000                     ; 005190db
    PUSH EAX                            ; 005190e0
    CALL shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_00472de0 ; 005190e1
        ;   XREF to: 00472de0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_00472de0(CEditorTools * this_ptr, float scale_factor, int text_color)
    ADD ESP,0xc                         ; 005190e6
    MOV EDX,dword ptr [0x005ae704]      ; 005190e9 | DAT_005ae704
    PUSH EDX                            ; 005190ef | DAT_01b4d738
    INC EBX                             ; 005190f0
    ADD ESI,0x30                        ; 005190f1
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 005190f4
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    MOV ECX,dword ptr [EBP + 0x28558]   ; 005190f9
    ADD ESP,0x4                         ; 005190ff
    CMP EBX,ECX                         ; 00519102
    JL 0x0051909c                       ; 00519104
        ;   XREF to: 0051909c (CONDITIONAL_JUMP)  ; LAB_0051909c
    LEA EAX,[EAX]                       ; 00519106
    LEA EDX,[EDX]                       ; 0051910c
    ADD ESP,0x3c                        ; 00519110
        ;   Label: LAB_00519110
    POP EBP                             ; 00519113
    POP EDI                             ; 00519114
    POP ESI                             ; 00519115
    POP EBX                             ; 00519116
    RET                                 ; 00519117

