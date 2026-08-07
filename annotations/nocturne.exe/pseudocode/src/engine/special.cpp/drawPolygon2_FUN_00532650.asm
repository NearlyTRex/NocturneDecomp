; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_drawPolygon2_FUN_00532650(SRenderVertex **vertex_array,int vertex_count,int render_flags)
;
; Parameters:
; SRenderVertex * * Stack[0x4]:4   vertex_array
; int              Stack[0x8]:4   vertex_count
; int              Stack[0xc]:4   render_flags
;
; XREF[8]:
;   engine_clipper.c_FUN_00432210 at 0043236c
;   engine_clipper.c_FUN_00434210 at 0043434a
;   engine_clipper.c_clipAndRasterize_FUN_00432cd0 at 00432e3f
;   engine_clipper.c_clipPolygonToViewport_FUN_004349a0 at 00434ae0
;   engine_drender.cpp_renderTriangleSimple_FUN_00458080 at 004580fd
;   engine_drender.cpp_renderTriangleTextured_FUN_00457a00 at 00457a81
;   engine_prim.c_FUN_004fa2e0 at 004fa3b1
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_004fb390 at 004fb471
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   undefined4 DAT_02dc9dac
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 00532650 | g_UseExternalRenderer
        ;   Label: engine_special.cpp_drawPolygon2_FUN_00532650
    JNZ 0x0053265c                      ; 00532657
        ;   XREF to: 0053265c (CONDITIONAL_JUMP)  ; LAB_0053265c
    XOR EAX,EAX                         ; 00532659
    RET                                 ; 0053265b
    PUSH ESI                            ; 0053265c
        ;   Label: LAB_0053265c
    PUSH EBX                            ; 0053265d
    MOV ECX,dword ptr [ESP + 0x14]      ; 0053265e
    PUSH ECX                            ; 00532662
    MOV EBX,dword ptr [ESP + 0x14]      ; 00532663
    PUSH EBX                            ; 00532667
    MOV ESI,dword ptr [ESP + 0x14]      ; 00532668
    PUSH ESI                            ; 0053266c
    CALL dword ptr [0x02dc9dac]         ; 0053266d | DAT_02dc9dac
    ADD ESP,0xc                         ; 00532673
    POP EBX                             ; 00532676
    POP ESI                             ; 00532677
    RET                                 ; 00532678

