; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_matrix_c_FUN_0046b710(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)
;
;
; XREF[7]:
;   core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0043c040 at 0043c14b
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0043b7f0 at 0043b95a
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0044a020 at 0044a068
;   core_inv.cpp_CInventory_renderItemModel_FUN_004dbd80 at 004dbec4
;   core_level.cpp_CLevelLoader_update_FUN_004e1600 at 004e16b8
;   core_setdir.cpp_CZThumb_pushRenderingContext_FUN_005389b0 at 005389eb
;   unkaddr_0059aa80.cpp_FUN_0059bb60 at 0059bc62
;
; Called Functions:
;   engine_matrix.c_pushViewport_FUN_004ea410
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b710
        ;   Label: engine_matrix.c_FUN_0046b710
    PUSH ESI                            ; 0046b711
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0046b712
    PUSH EDX                            ; 0046b716
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0046b717
    PUSH ECX                            ; 0046b71b
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0046b71c
    PUSH EBX                            ; 0046b720
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046b721
    PUSH ESI                            ; 0046b725
    CALL engine_matrix.c_pushViewport_FUN_004ea410 ; 0046b726
        ;   XREF to: 004ea410 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pushViewport_FUN_004ea410(int x, int y, int width, int height)
    ADD ESP,0x10                        ; 0046b72b
    POP ESI                             ; 0046b72e
    POP EBX                             ; 0046b72f
    RET                                 ; 0046b730

