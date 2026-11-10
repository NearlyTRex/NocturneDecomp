; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_special_cpp_drawPolygon2_FUN_0055f920(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[6]:
;   core_dpart.cpp_FUN_00461f70 at 00461ff1
;   core_dpart.cpp_FUN_004625f0 at 0046266d
;   engine_clipper.c_clipPolygonToViewFrustum_FUN_00431330 at 00431490
;   engine_clipper.c_clipPolygonToViewport_FUN_00433000 at 00433144
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_0051e130 at 0051e1f0
;   engine_prim.c_renderIndexedPolygonSoftware_FUN_0051d050 at 0051d126
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bbf8
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c37788],0x0      ; 0055f920 | DAT_01c37788
        ;   Label: engine_special.cpp_drawPolygon2_FUN_0055f920
    JNZ 0x0055f92c                      ; 0055f927
        ;   XREF to: 0055f92c (CONDITIONAL_JUMP)  ; LAB_0055f92c
    XOR EAX,EAX                         ; 0055f929
    RET                                 ; 0055f92b
    PUSH ESI                            ; 0055f92c
        ;   Label: LAB_0055f92c
    PUSH EBX                            ; 0055f92d
    MOV ECX,dword ptr [ESP + 0x14]      ; 0055f92e
    PUSH ECX                            ; 0055f932
    MOV EBX,dword ptr [ESP + 0x14]      ; 0055f933
    PUSH EBX                            ; 0055f937
    MOV ESI,dword ptr [ESP + 0x14]      ; 0055f938
    PUSH ESI                            ; 0055f93c
    CALL dword ptr [0x0264bbf8]         ; 0055f93d | DAT_0264bbf8
    ADD ESP,0xc                         ; 0055f943
    POP EBX                             ; 0055f946
    POP ESI                             ; 0055f947
    RET                                 ; 0055f948

