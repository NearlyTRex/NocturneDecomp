; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_00483c10(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)
;
;
; XREF[8]:
;   core_bmppuzzl.cpp_CAudioRecPuzzle_renderReel_FUN_00416fa0 at 004170a2
;   core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044d700 at 0044d80b
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044ceb0 at 0044d01a
;   core_dlight.cpp_CDemonLight_beginScene_FUN_00462820 at 00462868
;   core_inv.cpp_CInventory_renderItemModel_FUN_004f90d0 at 004f9215
;   core_level.cpp_CLevelLoader_update_FUN_004fe9c0 at 004fea22
;   core_setdir.cpp_FUN_00559f80 at 0055a046
;   core_setdir.cpp_FUN_0055b330 at 0055b36a
;
; Called Functions:
;   engine_matrix.c_pushViewport_FUN_005090b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483c10
        ;   Label: engine_drender.cpp_FUN_00483c10
    PUSH ESI                            ; 00483c11
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00483c12
    PUSH EDX                            ; 00483c16
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00483c17
    PUSH ECX                            ; 00483c1b
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00483c1c
    PUSH EBX                            ; 00483c20
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00483c21
    PUSH ESI                            ; 00483c25
    CALL engine_matrix.c_pushViewport_FUN_005090b0 ; 00483c26
        ;   XREF to: 005090b0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pushViewport_FUN_005090b0(int x, int y, int width, int height)
    ADD ESP,0x10                        ; 00483c2b
    POP ESI                             ; 00483c2e
    POP EBX                             ; 00483c2f
    RET                                 ; 00483c30

