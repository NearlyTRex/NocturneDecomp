; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_design_c_mergePolygonsWithValidation_FUN_00465b40(int polygon1_index,int polygon2_index,float tolerance,int enforce_part_match)
;
; Parameters:
; int              Stack[0x4]:4   polygon1_index
; int              Stack[0x8]:4   polygon2_index
; float            Stack[0xc]:4   tolerance
; int              Stack[0x10]:4   enforce_part_match
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   shape_design.c_polygonMergerSelectAndProcess_FUN_00465160 at 00465194
;
; Referenced Globals:
;   double g_ModelPolygonDegreesToRadiansConversion = 0.0174532925200000
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 DAT_016e99b4
;   undefined4 DAT_016e9a88
;
; Called Functions:
;   crt_string.c_strcmp_FUN_005fef20
;   shape_design.c_findVertexMatches_FUN_00461ae0
;   shape_design.c_mergeAdjacentPolygons_FUN_00462b70
;   shape_design.c_removeUnusedVertices_FUN_00463830
;   shape_design.c_validatePolygonNormals_FUN_00461d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465b40
        ;   Label: shape_design.c_mergePolygonsWithValidation_FUN_00465b40
    PUSH ESI                            ; 00465b41
    PUSH EDI                            ; 00465b42
    PUSH EBP                            ; 00465b43
    MOV EBP,ESP                         ; 00465b44
    SUB ESP,0x0                         ; 00465b46
    FLD float ptr [EBP + 0x1c]          ; 00465b4c
    FMUL double ptr [0x0061c65e]        ; 00465b4f | g_ModelPolygonDegreesToRadiansConversion
    FCOS                                ; 00465b55
    FSTP float ptr [EBP + 0x1c]         ; 00465b57
    FLD float ptr [EBP + 0x1c]          ; 00465b5a
    SUB ESP,0x8                         ; 00465b5d
    FSTP double ptr [ESP]               ; 00465b60
    IMUL EDX,dword ptr [EBP + 0x18],0x184 ; 00465b63
    MOV EAX,0x16e9910                   ; 00465b6a | g_ModelPolygonData
    ADD EAX,EDX                         ; 00465b6f
    PUSH EAX                            ; 00465b71
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00465b72
    MOV EAX,0x16e9910                   ; 00465b79 | g_ModelPolygonData
    ADD EAX,EDX                         ; 00465b7e
    PUSH EAX                            ; 00465b80
    CALL shape_design.c_validatePolygonNormals_FUN_00461d80 ; 00465b81
        ;   XREF to: 00461d80 (UNCONDITIONAL_CALL)  ; int shape_design.c_validatePolygonNormals_FUN_00461d80(SShapeEditorPolygon * polygon1, SShapeEditorPolygon * polygon2, double cos_tolerance)
    ADD ESP,0x10                        ; 00465b86
    TEST EAX,EAX                        ; 00465b89
    JZ 0x00465bdb                       ; 00465b8b
        ;   XREF to: 00465bdb (CONDITIONAL_JUMP)  ; LAB_00465bdb
    IMUL EAX,dword ptr [EBP + 0x18],0x184 ; 00465b8d
    PUSH dword ptr [EAX + 0x16e99b4]    ; 00465b94 | DAT_016e99b4
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00465b9a
    PUSH dword ptr [EAX + 0x16e99b4]    ; 00465ba1 | DAT_016e99b4
    IMUL EAX,dword ptr [EBP + 0x18],0x184 ; 00465ba7
    MOV EDX,0x16e9910                   ; 00465bae | g_ModelPolygonData
    ADD EAX,EDX                         ; 00465bb3
    ADD EAX,0xb8                        ; 00465bb5
    PUSH EAX                            ; 00465bba
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00465bbb
    MOV EDX,0x16e9910                   ; 00465bc2 | g_ModelPolygonData
    ADD EAX,EDX                         ; 00465bc7
    ADD EAX,0xb8                        ; 00465bc9
    PUSH EAX                            ; 00465bce
    CALL shape_design.c_findVertexMatches_FUN_00461ae0 ; 00465bcf
        ;   XREF to: 00461ae0 (UNCONDITIONAL_CALL)  ; int shape_design.c_findVertexMatches_FUN_00461ae0(int * vertices1, int * vertices2, int count1, int count2)
    ADD ESP,0x10                        ; 00465bd4
    TEST EAX,EAX                        ; 00465bd7
    JNZ 0x00465bdd                      ; 00465bd9
        ;   XREF to: 00465bdd (CONDITIONAL_JUMP)  ; LAB_00465bdd
    JMP 0x00465c0d                      ; 00465bdb
        ;   XREF to: 00465c0d (UNCONDITIONAL_JUMP)  ; LAB_00465c0d
        ;   Label: LAB_00465bdb
    IMUL EDX,dword ptr [EBP + 0x18],0x184 ; 00465bdd
        ;   Label: LAB_00465bdd
    MOV EAX,0x16e9910                   ; 00465be4 | g_ModelPolygonData
    ADD EAX,EDX                         ; 00465be9
    ADD EAX,0x54                        ; 00465beb
    PUSH EAX                            ; 00465bee
    IMUL EDX,dword ptr [EBP + 0x14],0x184 ; 00465bef
    MOV EAX,0x16e9910                   ; 00465bf6 | g_ModelPolygonData
    ADD EAX,EDX                         ; 00465bfb
    ADD EAX,0x54                        ; 00465bfd
    PUSH EAX                            ; 00465c00
    CALL crt_string.c_strcmp_FUN_005fef20 ; 00465c01
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 00465c06
    TEST EAX,EAX                        ; 00465c09
    JZ 0x00465c0f                       ; 00465c0b
        ;   XREF to: 00465c0f (CONDITIONAL_JUMP)  ; LAB_00465c0f
    JMP 0x00465c43                      ; 00465c0d
        ;   XREF to: 00465c43 (UNCONDITIONAL_JUMP)  ; LAB_00465c43
        ;   Label: LAB_00465c0d
    CMP dword ptr [EBP + 0x20],0x0      ; 00465c0f
        ;   Label: LAB_00465c0f
    JZ 0x00465c33                       ; 00465c13
        ;   XREF to: 00465c33 (CONDITIONAL_JUMP)  ; LAB_00465c33
    IMUL EAX,dword ptr [EBP + 0x14],0x184 ; 00465c15
    IMUL EDX,dword ptr [EBP + 0x18],0x184 ; 00465c1c
    MOV EAX,dword ptr [EAX + 0x16e9a88] ; 00465c23 | DAT_016e9a88
    CMP EAX,dword ptr [EDX + 0x16e9a88] ; 00465c29 | DAT_016e9a88
    JZ 0x00465c33                       ; 00465c2f
        ;   XREF to: 00465c33 (CONDITIONAL_JUMP)  ; LAB_00465c33
    JMP 0x00465c48                      ; 00465c31
        ;   XREF to: 00465c48 (UNCONDITIONAL_JUMP)  ; LAB_00465c48
    MOV EAX,dword ptr [EBP + 0x18]      ; 00465c33
        ;   Label: LAB_00465c33
    PUSH EAX                            ; 00465c36
    MOV EAX,dword ptr [EBP + 0x14]      ; 00465c37
    PUSH EAX                            ; 00465c3a
    CALL shape_design.c_mergeAdjacentPolygons_FUN_00462b70 ; 00465c3b
        ;   XREF to: 00462b70 (UNCONDITIONAL_CALL)  ; void shape_design.c_mergeAdjacentPolygons_FUN_00462b70(int polygon1_index, int polygon2_index)
    ADD ESP,0x8                         ; 00465c40
    CALL shape_design.c_removeUnusedVertices_FUN_00463830 ; 00465c43
        ;   XREF to: 00463830 (UNCONDITIONAL_CALL)  ; void shape_design.c_removeUnusedVertices_FUN_00463830()
        ;   Label: LAB_00465c43
    POP EBP                             ; 00465c48
        ;   Label: LAB_00465c48
    POP EDI                             ; 00465c49
    POP ESI                             ; 00465c4a
    POP EBX                             ; 00465c4b
    RET                                 ; 00465c4c

