; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_matrix.c_transformToCache_FUN_0050cd70(int cacheIndex, CVector3i * inputPoint)
;
; Parameters:
; int              Stack[0x4]:4   cacheIndex
; CVector3i *      Stack[0x8]:4   inputPoint
;
; XREF[7]:
;   shape_design.c_findClosestPolygonToMouse_FUN_00466250 at 004662e7
;   shape_design.c_processVerticesAndRenderPolygons_FUN_0045d5d0 at 0045d646
;   shape_design.c_renderPolygonVerticesWithLabels_FUN_0045c2f0 at 0045c3cb
;   shape_design.c_renderVertexPointsWithLabels_FUN_0045bff0 at 0045c096
;   shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0 at 004a1d24
;   shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050 at 004a2289
;   shape_edittool.cpp_draw3DInterpolatedLine_FUN_004a1f40 at 004a1f7d
;
; Referenced Globals:
;   SRenderVertex[16] g_RenderVertexBuffer
;
; Called Functions:
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050cd70
        ;   Label: engine_matrix.c_transformToCache_FUN_0050cd70
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050cd71
    PUSH EDX                            ; 0050cd75
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050cd76
    LEA EAX,[EDX*0x4 + 0x0]             ; 0050cd7a
    SUB EAX,EDX                         ; 0050cd81
    SHL EAX,0x4                         ; 0050cd83
    ADD EAX,0x688014                    ; 0050cd86 | g_RenderVertexBuffer
    PUSH EAX                            ; 0050cd8b
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 0050cd8c
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0050cd91
    POP EBX                             ; 0050cd94
    RET                                 ; 0050cd95

