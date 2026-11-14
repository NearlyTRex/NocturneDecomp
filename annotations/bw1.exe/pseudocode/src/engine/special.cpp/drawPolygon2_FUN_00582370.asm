; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_drawPolygon2_FUN_00582370(SRenderVertex **vertex_array,int vertex_count,int render_flags)
;
; Parameters:
; SRenderVertex * * Stack[0x4]:4   vertex_array
; int              Stack[0x8]:4   vertex_count
; int              Stack[0xc]:4   render_flags
;
; XREF[6]:
;   core_dpart.cpp_FUN_0047a480 at 0047a501
;   core_dpart.cpp_FUN_0047ab00 at 0047ab7d
;   engine_clipper.c_clipPolygonToViewFrustum_FUN_0043c190 at 0043c2f0
;   engine_clipper.c_clipPolygonToViewport_FUN_0043de60 at 0043dfa4
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_0053f720 at 0053f7e0
;   engine_prim.c_renderIndexedPolygonSoftware_FUN_0053e650 at 0053e726
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c833c8
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c50948],0x0      ; 00582370 | DAT_01c50948
        ;   Label: engine_special.cpp_drawPolygon2_FUN_00582370
    JNZ 0x0058237c                      ; 00582377
        ;   XREF to: 0058237c (CONDITIONAL_JUMP)  ; LAB_0058237c
    XOR EAX,EAX                         ; 00582379
    RET                                 ; 0058237b
    PUSH ESI                            ; 0058237c
        ;   Label: LAB_0058237c
    PUSH EBX                            ; 0058237d
    MOV ECX,dword ptr [ESP + 0x14]      ; 0058237e
    PUSH ECX                            ; 00582382
    MOV EBX,dword ptr [ESP + 0x14]      ; 00582383
    PUSH EBX                            ; 00582387
    MOV ESI,dword ptr [ESP + 0x14]      ; 00582388
    PUSH ESI                            ; 0058238c
    CALL dword ptr [0x02c833c8]         ; 0058238d | DAT_02c833c8
    ADD ESP,0xc                         ; 00582393
    POP EBX                             ; 00582396
    POP ESI                             ; 00582397
    RET                                 ; 00582398

