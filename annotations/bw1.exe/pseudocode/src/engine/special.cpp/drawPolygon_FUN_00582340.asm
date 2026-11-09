; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_special_cpp_drawPolygon_FUN_00582340(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[5]:
;   engine_mini3d.cpp_FUN_00516060 at 005167e7
;   engine_prim.c_FUN_0053e120 at 0053e30e
;   engine_prim.c_FUN_0053f080 at 0053f358
;   engine_special.cpp_drawFullScreenQuad_FUN_005827b0 at 0058284d
;   unkafter_zombie.cpp_FUN_005bf120 at 005bf410
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c833c4
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c50948],0x0      ; 00582340 | DAT_01c50948
        ;   Label: engine_special.cpp_drawPolygon_FUN_00582340
    JNZ 0x0058234c                      ; 00582347
        ;   XREF to: 0058234c (CONDITIONAL_JUMP)  ; LAB_0058234c
    XOR EAX,EAX                         ; 00582349
    RET                                 ; 0058234b
    PUSH ESI                            ; 0058234c
        ;   Label: LAB_0058234c
    PUSH EBX                            ; 0058234d
    MOV ECX,dword ptr [ESP + 0x14]      ; 0058234e
    PUSH ECX                            ; 00582352
    MOV EBX,dword ptr [ESP + 0x14]      ; 00582353
    PUSH EBX                            ; 00582357
    MOV ESI,dword ptr [ESP + 0x14]      ; 00582358
    PUSH ESI                            ; 0058235c
    CALL dword ptr [0x02c833c4]         ; 0058235d | DAT_02c833c4
    ADD ESP,0xc                         ; 00582363
    POP EBX                             ; 00582366
    POP ESI                             ; 00582367
    RET                                 ; 00582368

