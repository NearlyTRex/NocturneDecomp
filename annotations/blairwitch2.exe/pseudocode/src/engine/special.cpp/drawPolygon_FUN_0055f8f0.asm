; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_drawPolygon_FUN_0055f8f0(SRenderVertex *vertices,int vertex_count,int render_flags)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
; int              Stack[0xc]:4   render_flags
;
; XREF[5]:
;   core_zombie.cpp_FUN_0059a0b0 at 0059a3a0
;   engine_mini3d.cpp_FUN_004f7280 at 004f7706
;   engine_prim.c_FUN_0051da80 at 0051dd6a
;   engine_prim.c_renderPolygonSoftware_FUN_0051cb20 at 0051cd0e
;   engine_special.cpp_drawFullScreenQuad_FUN_0055fd60 at 0055fdfd
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bbf4
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c37788],0x0      ; 0055f8f0 | DAT_01c37788
        ;   Label: engine_special.cpp_drawPolygon_FUN_0055f8f0
    JNZ 0x0055f8fc                      ; 0055f8f7
        ;   XREF to: 0055f8fc (CONDITIONAL_JUMP)  ; LAB_0055f8fc
    XOR EAX,EAX                         ; 0055f8f9
    RET                                 ; 0055f8fb
    PUSH ESI                            ; 0055f8fc
        ;   Label: LAB_0055f8fc
    PUSH EBX                            ; 0055f8fd
    MOV ECX,dword ptr [ESP + 0x14]      ; 0055f8fe
    PUSH ECX                            ; 0055f902
    MOV EBX,dword ptr [ESP + 0x14]      ; 0055f903
    PUSH EBX                            ; 0055f907
    MOV ESI,dword ptr [ESP + 0x14]      ; 0055f908
    PUSH ESI                            ; 0055f90c
    CALL dword ptr [0x0264bbf4]         ; 0055f90d | DAT_0264bbf4
    ADD ESP,0xc                         ; 0055f913
    POP EBX                             ; 0055f916
    POP ESI                             ; 0055f917
    RET                                 ; 0055f918

