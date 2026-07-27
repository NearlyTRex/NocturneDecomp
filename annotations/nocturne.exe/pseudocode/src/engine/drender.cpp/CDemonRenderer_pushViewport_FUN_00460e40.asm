; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_pushViewport_FUN_00460e40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[6]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290 at 00440404
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0044e470 at 0044e4b8
;   core_inv.cpp_CInventory_renderItemModel_FUN_004c0b40 at 004c0c69
;   core_level.cpp_CLevelLoader_update_FUN_004c59e0 at 004c5a31
;   core_setdir.cpp_FUN_005125a0 at 00512666
;   core_setdir.cpp_FUN_00513720 at 0051375a
;
; Called Functions:
;   engine_matrix.c_pushViewport_FUN_004ce7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460e40
        ;   Label: engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00460e40
    PUSH ESI                            ; 00460e41
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00460e42
    PUSH EDX                            ; 00460e46
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00460e47
    PUSH ECX                            ; 00460e4b
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00460e4c
    PUSH EBX                            ; 00460e50
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00460e51
    PUSH ESI                            ; 00460e55
    CALL engine_matrix.c_pushViewport_FUN_004ce7c0 ; 00460e56
        ;   XREF to: 004ce7c0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_pushViewport_FUN_004ce7c0()
    ADD ESP,0x10                        ; 00460e5b
    POP ESI                             ; 00460e5e
    POP EBX                             ; 00460e5f
    RET                                 ; 00460e60

