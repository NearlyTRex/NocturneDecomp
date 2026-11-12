; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0046b710(CDemonRenderer *this_ptr,int x,int y,int width,int height)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
;
; XREF[7]:
;   core_bmppuzzl.cpp_CAudioRecPuzzle_renderReel_FUN_0059bb60 at 0059bc62
;   core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0043c040 at 0043c14b
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0043b7f0 at 0043b95a
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0044a020 at 0044a068
;   core_inv.cpp_CInventory_renderItemModel_FUN_004dbd80 at 004dbec4
;   core_level.cpp_CLevelLoader_update_FUN_004e1600 at 004e16b8
;   core_setdir.cpp_CZThumb_pushRenderingContext_FUN_005389b0 at 005389eb
;
; Called Functions:
;   engine_matrix.c_pushViewport_FUN_004ea410
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b710
        ;   Label: engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0046b710
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

