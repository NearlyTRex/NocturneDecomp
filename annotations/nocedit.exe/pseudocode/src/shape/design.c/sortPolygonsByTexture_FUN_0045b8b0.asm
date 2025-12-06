; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_sortPolygonsByTexture_FUN_0045b8b0(void)
;
; Local Variables:
; undefined1       Stack[-0x19c]:1  local_19c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_design.c_exportModelToBIN_FUN_0045aa80 at 0045aa8c
;   shape_design.c_exportModelToMDL_FUN_00459e80 at 00459e8c
;
; Referenced Globals:
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 DAT_016e9914
;
; Called Functions:
;   shape_design.c_polygonTextureNameComparator_FUN_0045b850
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045b8b0
        ;   Label: shape_design.c_sortPolygonsByTexture_FUN_0045b8b0
    PUSH ESI                            ; 0045b8b1
    PUSH EDI                            ; 0045b8b2
    PUSH EBP                            ; 0045b8b3
    MOV EBP,ESP                         ; 0045b8b4
    SUB ESP,0x18c                       ; 0045b8b6
    MOV EAX,[0x016e990c]                ; 0045b8bc | int g_PolygonCount
    DEC EAX                             ; 0045b8c1
    MOV dword ptr [EBP + -0x8],EAX      ; 0045b8c2
    JMP 0x0045b8cb                      ; 0045b8c5 | LAB_0045b8cb
        ;   XREF to: 0045b8cb (UNCONDITIONAL_JUMP)
    ADD dword ptr [EBP + -0x8],-0x1     ; 0045b8c7
        ;   Label: LAB_0045b8c7
    CMP dword ptr [EBP + -0x8],0x0      ; 0045b8cb
        ;   Label: LAB_0045b8cb
    JL 0x0045b97f                       ; 0045b8cf | LAB_0045b97f
        ;   XREF to: 0045b97f (CONDITIONAL_JUMP)
    MOV dword ptr [EBP + -0x4],0x0      ; 0045b8d5
    JMP 0x0045b8e1                      ; 0045b8dc | LAB_0045b8e1
        ;   XREF to: 0045b8e1 (UNCONDITIONAL_JUMP)
    INC dword ptr [EBP + -0x4]          ; 0045b8de
        ;   Label: LAB_0045b8de
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045b8e1
        ;   Label: LAB_0045b8e1
    CMP EAX,dword ptr [EBP + -0x8]      ; 0045b8e4
    JGE 0x0045b97a                      ; 0045b8e7 | LAB_0045b97a
        ;   XREF to: 0045b97a (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045b8ed
    INC EAX                             ; 0045b8f0
    IMUL EAX,EAX,0x184                  ; 0045b8f1
    MOV EDX,0x16e9910                   ; 0045b8f7 | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDX                         ; 0045b8fc
    PUSH EAX                            ; 0045b8fe
    IMUL EAX,dword ptr [EBP + -0x4],0x184 ; 0045b8ff
    MOV EDX,0x16e9910                   ; 0045b906 | SShapeEditorPolygon[20000] g_ModelPolygonData
    ADD EAX,EDX                         ; 0045b90b
    PUSH EAX                            ; 0045b90d
    CALL shape_design.c_polygonTextureNameComparator_FUN_0045b850 ; 0045b90e | int shape_design.c_polygonTextureNameComparator_FUN_0045b850(SShapeEditorPolygon * polygon1, SShapeEditorPolygon * polygon2)
        ;   XREF to: 0045b850 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0045b913
    TEST EAX,EAX                        ; 0045b916
    JLE 0x0045b975                      ; 0045b918 | LAB_0045b975
        ;   XREF to: 0045b975 (CONDITIONAL_JUMP)
    IMUL ESI,dword ptr [EBP + -0x4],0x184 ; 0045b91a
    MOV ECX,0x61                        ; 0045b921
    LEA EDI,[EBP + 0xfffffe74]          ; 0045b926
    LEA ESI,[ESI + 0x16e9910]           ; 0045b92c | SShapeEditorPolygon[20000] g_ModelPolygonData
    MOVSD.REP ES:EDI,ESI                ; 0045b932 | SShapeEditorPolygon[20000] g_ModelPolygonData
    MOV ESI,dword ptr [EBP + -0x4]      ; 0045b934
    INC ESI                             ; 0045b937
    IMUL ESI,ESI,0x184                  ; 0045b938
    IMUL EDI,dword ptr [EBP + -0x4],0x184 ; 0045b93e
    MOV ECX,0x61                        ; 0045b945
    LEA EDI,[EDI + 0x16e9910]           ; 0045b94a | SShapeEditorPolygon[20000] g_ModelPolygonData
    LEA ESI,[ESI + 0x16e9910]           ; 0045b950 | SShapeEditorPolygon[20000] g_ModelPolygonData
    MOVSD.REP ES:EDI,ESI                ; 0045b956 | SShapeEditorPolygon[20000] g_ModelPolygonData
    MOV ESI,dword ptr [EBP + -0x4]      ; 0045b958
    INC ESI                             ; 0045b95b
    IMUL ESI,ESI,0x184                  ; 0045b95c
    MOV ECX,0x61                        ; 0045b962
    LEA EDI,[ESI + 0x16e9910]           ; 0045b967 | SShapeEditorPolygon[20000] g_ModelPolygonData
    LEA ESI,[EBP + 0xfffffe74]          ; 0045b96d
    MOVSD.REP ES:EDI,ESI                ; 0045b973 | SShapeEditorPolygon[20000] g_ModelPolygonData
    JMP 0x0045b8de                      ; 0045b975 | LAB_0045b8de
        ;   Label: LAB_0045b975
        ;   XREF to: 0045b8de (UNCONDITIONAL_JUMP)
    JMP 0x0045b8c7                      ; 0045b97a | LAB_0045b8c7
        ;   Label: LAB_0045b97a
        ;   XREF to: 0045b8c7 (UNCONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 0045b97f
        ;   Label: LAB_0045b97f
    POP EBP                             ; 0045b981
    POP EDI                             ; 0045b982
    POP ESI                             ; 0045b983
    POP EBX                             ; 0045b984
    RET                                 ; 0045b985

