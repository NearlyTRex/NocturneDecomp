; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_flushSortedPolygons_FUN_00405b30(void)
;
;
; Called Functions:
;   engine_3d.c_renderSortedPolygonList_FUN_00405b40
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00405b30
        ;   Label: engine_3d.c_flushSortedPolygons_FUN_00405b30
    CALL engine_3d.c_renderSortedPolygonList_FUN_00405b40 ; 00405b32
        ;   XREF to: 00405b40 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_renderSortedPolygonList_FUN_00405b40(SMRGLHeaderExtended * primitive)
    ADD ESP,0x4                         ; 00405b37
    RET                                 ; 00405b3a

