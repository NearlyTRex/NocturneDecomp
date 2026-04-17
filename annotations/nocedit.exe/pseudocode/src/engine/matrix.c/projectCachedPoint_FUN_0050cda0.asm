; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_projectCachedPoint_FUN_0050cda0(int cacheIndex)
;
; Parameters:
; int              Stack[0x4]:4   cacheIndex
;
; XREF[2]:
;   core_mirror.cpp_CMirror_reflectAndClipPrimitive_FUN_00522310 at 0052252f
;   engine_font.cpp_CBitFont_render3DCharacter_FUN_004ce2d0 at 004ce5c5
;
; Referenced Globals:
;   SRenderVertex[20000] g_RenderVertexBuffer
;
; Called Functions:
;   engine_matrix.c_projectTransformedPoint_FUN_0050cdc0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0050cda0
        ;   Label: engine_matrix.c_projectCachedPoint_FUN_0050cda0
    LEA EAX,[EDX*0x4 + 0x0]             ; 0050cda4
    SUB EAX,EDX                         ; 0050cdab
    SHL EAX,0x4                         ; 0050cdad
    ADD EAX,0x688014                    ; 0050cdb0 | g_RenderVertexBuffer
    PUSH EAX                            ; 0050cdb5
    CALL engine_matrix.c_projectTransformedPoint_FUN_0050cdc0 ; 0050cdb6
        ;   XREF to: 0050cdc0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectTransformedPoint_FUN_0050cdc0(SProjectedVertex * point)
    ADD ESP,0x4                         ; 0050cdbb
    RET                                 ; 0050cdbe

