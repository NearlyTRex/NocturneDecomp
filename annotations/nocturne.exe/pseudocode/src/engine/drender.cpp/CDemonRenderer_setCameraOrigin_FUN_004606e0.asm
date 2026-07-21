; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setCameraOrigin_FUN_004606e0(undefined4 param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   core_terrain.cpp_CTerrain_render_FUN_00549310 at 005493d9
;
; Called Functions:
;   engine_matrix.c_setCameraOrigin_FUN_004ce710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004606e0
        ;   Label: engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_004606e0
    MOV EAX,dword ptr [ESP + 0xc]       ; 004606e1
    MOV EDX,dword ptr [EAX + 0x8]       ; 004606e5
    PUSH EDX                            ; 004606e8
    MOV ECX,dword ptr [EAX + 0x4]       ; 004606e9
    PUSH ECX                            ; 004606ec
    MOV EBX,dword ptr [EAX]             ; 004606ed
    PUSH EBX                            ; 004606ef
    CALL engine_matrix.c_setCameraOrigin_FUN_004ce710 ; 004606f0
        ;   XREF to: 004ce710 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_setCameraOrigin_FUN_004ce710()
    ADD ESP,0xc                         ; 004606f5
    POP EBX                             ; 004606f8
    RET                                 ; 004606f9

