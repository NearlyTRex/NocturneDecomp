; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_renderBone_FUN_0043b7e0(CCloth *this_ptr,int bone_index,int show_labels)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_index
; int              Stack[0xc]:4   show_labels
; Local Variables:
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined1       Stack[-0x58]:1  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_cloth.cpp_CCloth_boneEditor_FUN_0043c880 at 0043cc57
;   core_cloth.cpp_CCloth_renderCollisionBones_FUN_0043b790 at 0043b7bb
;
; Referenced Globals:
;   double DOUBLE_006184ba = 3.14159265350000
;   double DOUBLE_006184c2 = 0.0833333333333333
;   float FLOAT_0065bb3c = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CDemonRenderer g_CDemonRendererInstance
;   CEditorTools g_CEditorToolsInstance
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
;   shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b7e0
        ;   Label: core_cloth.cpp_CCloth_renderBone_FUN_0043b7e0
    PUSH ESI                            ; 0043b7e1
    PUSH EDI                            ; 0043b7e2
    PUSH EBP                            ; 0043b7e3
    MOV EBP,ESP                         ; 0043b7e4
    SUB ESP,0x58                        ; 0043b7e6
    AND ESP,0xfffffff8                  ; 0043b7e9
    IMUL EDI,dword ptr [EBP + 0x18],0xac ; 0043b7ec
    MOV EAX,dword ptr [EBP + 0x14]      ; 0043b7f3
    ADD EAX,0x3ce90                     ; 0043b7f6
    ADD EDI,EAX                         ; 0043b7fb
    LEA EAX,[ESP + 0x10]                ; 0043b7fd
    PUSH EAX                            ; 0043b801
    LEA EAX,[EDI + 0x78]                ; 0043b802
    PUSH EAX                            ; 0043b805
    CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160 ; 0043b806
        ;   XREF to: 00472160 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0043b80b
    LEA EAX,[EDI + 0xa0]                ; 0043b80e
    PUSH EAX                            ; 0043b814
    LEA EAX,[ESP + 0x14]                ; 0043b815
    PUSH EAX                            ; 0043b819
    MOV ECX,dword ptr [0x006703ec]      ; 0043b81a | g_CDemonRendererPtr2
    PUSH ECX                            ; 0043b820 | g_CDemonRendererInstance
    MOV EBX,0x270                       ; 0043b821
    XOR ESI,ESI                         ; 0043b826
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 0043b828
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 0043b82d
    MOV ECX,0xc                         ; 0043b830
    MOV dword ptr [ESP + 0x48],EBX      ; 0043b835
    MOV dword ptr [ESP + 0x4c],ESI      ; 0043b839
    MOV dword ptr [ESP],ESI             ; 0043b83d
    MOV EBX,0xffffffff                  ; 0043b840
    MOV dword ptr [ESP + 0x44],ECX      ; 0043b845
    MOV dword ptr [ESP + 0x50],EBX      ; 0043b849
    MOV EAX,dword ptr [ESP]             ; 0043b84d
        ;   Label: LAB_0043b84d
    MOV dword ptr [ESP + 0x54],EAX      ; 0043b850
    FILD dword ptr [ESP + 0x54]         ; 0043b854
    FMUL double ptr [0x006184ba]        ; 0043b858 | DOUBLE_006184ba
    FMUL double ptr [0x006184c2]        ; 0043b85e | DOUBLE_006184c2
    FLD float ptr [EDI + 0x14]          ; 0043b864
    FLD ST1                             ; 0043b867
    FSIN                                ; 0043b869
    FXCH ST2                            ; 0043b86b
    FCOS                                ; 0043b86d
    FXCH ST2                            ; 0043b86f
    FMULP                               ; 0043b871
    FSTP float ptr [ESP + 0x28]         ; 0043b873
    FMUL float ptr [EDI + 0x18]         ; 0043b877
    LEA EBX,[ESP + 0x4]                 ; 0043b87a
    XOR EAX,EAX                         ; 0043b87e
    MOV EDX,dword ptr [0x006703ec]      ; 0043b880 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x30],EAX      ; 0043b886
    LEA EAX,[ESP + 0x28]                ; 0043b88a
    FSTP float ptr [ESP + 0x2c]         ; 0043b88e
    FLD float ptr [EAX]                 ; 0043b892
    FMUL float ptr [0x0065bb3c]         ; 0043b894 | FLOAT_0065bb3c
    FISTP dword ptr [EBX]               ; 0043b89a
    FLD float ptr [EAX + 0x4]           ; 0043b89c
    FMUL float ptr [0x0065bb3c]         ; 0043b89f | FLOAT_0065bb3c
    FISTP dword ptr [EBX + 0x4]         ; 0043b8a5
    FLD float ptr [EAX + 0x8]           ; 0043b8a8
    FMUL float ptr [0x0065bb3c]         ; 0043b8ab | FLOAT_0065bb3c
    FISTP dword ptr [EBX + 0x8]         ; 0043b8b1
    LEA EAX,[ESP + 0x4]                 ; 0043b8b4
    PUSH EAX                            ; 0043b8b8
    MOV EAX,dword ptr [EDX]             ; 0043b8b9 | g_CDemonRendererInstance
    ADD EAX,dword ptr [ESP + 0x50]      ; 0043b8bb
    PUSH EAX                            ; 0043b8bf
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0043b8c0
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0043b8c5
    MOV EAX,dword ptr [EDI + 0x44]      ; 0043b8c8
    MOV dword ptr [ESP + 0x30],EAX      ; 0043b8cb
    LEA EAX,[ESI + 0xd]                 ; 0043b8cf
    LEA EBX,[ESP + 0x1c]                ; 0043b8d2
    MOV dword ptr [ESP + 0x40],EAX      ; 0043b8d6
    LEA EAX,[ESP + 0x28]                ; 0043b8da
    MOV EDX,dword ptr [0x006703ec]      ; 0043b8de | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 0043b8e4
    FMUL float ptr [0x0065bb3c]         ; 0043b8e6 | FLOAT_0065bb3c
    FISTP dword ptr [EBX]               ; 0043b8ec
    FLD float ptr [EAX + 0x4]           ; 0043b8ee
    FMUL float ptr [0x0065bb3c]         ; 0043b8f1 | FLOAT_0065bb3c
    FISTP dword ptr [EBX + 0x4]         ; 0043b8f7
    FLD float ptr [EAX + 0x8]           ; 0043b8fa
    FMUL float ptr [0x0065bb3c]         ; 0043b8fd | FLOAT_0065bb3c
    FISTP dword ptr [EBX + 0x8]         ; 0043b903
    LEA EAX,[ESP + 0x1c]                ; 0043b906
    MOV ECX,dword ptr [ESP + 0x48]      ; 0043b90a
    PUSH EAX                            ; 0043b90e
    MOV EAX,dword ptr [EDX]             ; 0043b90f | g_CDemonRendererInstance
    ADD EAX,ECX                         ; 0043b911
    PUSH EAX                            ; 0043b913
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0043b914
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0043b919
    TEST ESI,ESI                        ; 0043b91c
    JG 0x0043b976                       ; 0043b91e
        ;   XREF to: 0043b976 (CONDITIONAL_JUMP)  ; LAB_0043b976
    MOV ECX,dword ptr [ESP + 0x48]      ; 0043b920
        ;   Label: LAB_0043b920
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0043b924
    MOV EAX,dword ptr [ESP]             ; 0043b928
    MOV EDX,dword ptr [ESP + 0x44]      ; 0043b92b
    INC ESI                             ; 0043b92f
    ADD ECX,0x30                        ; 0043b930
    ADD EBX,0x30                        ; 0043b933
    ADD EAX,0x2                         ; 0043b936
    INC EDX                             ; 0043b939
    MOV dword ptr [ESP + 0x48],ECX      ; 0043b93a
    MOV dword ptr [ESP + 0x4c],EBX      ; 0043b93e
    MOV ECX,dword ptr [ESP + 0x50]      ; 0043b942
    MOV dword ptr [ESP],EAX             ; 0043b946
    INC ECX                             ; 0043b949
    MOV dword ptr [ESP + 0x44],EDX      ; 0043b94a
    MOV dword ptr [ESP + 0x50],ECX      ; 0043b94e
    CMP ESI,0xc                         ; 0043b952
    JLE 0x0043b84d                      ; 0043b955
        ;   XREF to: 0043b84d (CONDITIONAL_JUMP)  ; LAB_0043b84d
    CMP dword ptr [EBP + 0x1c],0x0      ; 0043b95b
    JNZ 0x0043b9bd                      ; 0043b95f
        ;   XREF to: 0043b9bd (CONDITIONAL_JUMP)  ; LAB_0043b9bd
    MOV EAX,[0x006703ec]                ; 0043b961 | g_CDemonRendererPtr2
        ;   Label: LAB_0043b961
    PUSH EAX                            ; 0043b966 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 0043b967
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    MOV EBX,dword ptr [ESP + 0x40]      ; 0043b976
        ;   Label: LAB_0043b976
    PUSH EBX                            ; 0043b97a
    PUSH ESI                            ; 0043b97b
    MOV EAX,[0x006703ec]                ; 0043b97c | g_CDemonRendererPtr2
    PUSH EAX                            ; 0043b981 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 ; 0043b982
        ;   XREF to: 0048caf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 0043b987
    MOV EDX,dword ptr [ESP + 0x50]      ; 0043b98a
    PUSH EDX                            ; 0043b98e
    PUSH ESI                            ; 0043b98f
    MOV ECX,dword ptr [0x006703ec]      ; 0043b990 | g_CDemonRendererPtr2
    PUSH ECX                            ; 0043b996 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 ; 0043b997
        ;   XREF to: 0048caf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 0043b99c
    MOV EBX,dword ptr [ESP + 0x44]      ; 0043b99f
    PUSH EBX                            ; 0043b9a3
    MOV EAX,dword ptr [ESP + 0x44]      ; 0043b9a4
    PUSH EAX                            ; 0043b9a8
    MOV EDX,dword ptr [0x006703ec]      ; 0043b9a9 | g_CDemonRendererPtr2
    PUSH EDX                            ; 0043b9af | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 ; 0043b9b0
        ;   XREF to: 0048caf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 0043b9b5
    JMP 0x0043b920                      ; 0043b9b8
        ;   XREF to: 0043b920 (UNCONDITIONAL_JUMP)  ; LAB_0043b920
    MOV ESI,dword ptr [0x00678a60]      ; 0043b9bd | g_CEditorToolsPtr
        ;   Label: LAB_0043b9bd
    PUSH ESI                            ; 0043b9c3 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330 ; 0043b9c4
        ;   XREF to: 004a1330 (UNCONDITIONAL_CALL)  ; uint shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0043b9c9
    FLD float ptr [EDI + 0x14]          ; 0043b9cc
    PUSH EAX                            ; 0043b9cf
    FADD float ptr [EDI + 0x18]         ; 0043b9d0
    SUB ESP,0x4                         ; 0043b9d3
    MOV EDI,dword ptr [0x00678a60]      ; 0043b9d6 | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 0043b9dc
    PUSH EDI                            ; 0043b9df | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0 ; 0043b9e0
        ;   XREF to: 004a1ca0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(CEditorTools * this_ptr, float scale_factor, int text_color)
    ADD ESP,0xc                         ; 0043b9e5
    JMP 0x0043b961                      ; 0043b9e8
        ;   XREF to: 0043b961 (UNCONDITIONAL_JUMP)  ; LAB_0043b961

