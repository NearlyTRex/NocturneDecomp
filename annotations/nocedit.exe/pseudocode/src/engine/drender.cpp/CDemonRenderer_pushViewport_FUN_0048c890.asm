; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890(CDemonRenderer * this_ptr, int x, int y, int width, int height)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
;
; XREF[9]:
;   core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70 at 0044cd7b
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 at 0044c598
;   core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80 at 00472ac8
;   core_inv.cpp_CInventory_renderItemModel_FUN_004fee00 at 004feed0
;   core_level.cpp_CLevelLoader_update_FUN_00504160 at 005041b1
;   core_morph.cpp_FUN_0052bcb0 at 0052c032
;   core_setdir.cpp_CZThumb_pushRenderingContext_FUN_00574e70 at 00574eab
;   core_setedit.cpp_SomethingMemoryConstructorMaybe_FUN_00580310 at 005803dc
;   core_setedit.cpp_WriteActBackdrop_FUN_0057ce80 at 0057cff5
;
; Called Functions:
;   engine_matrix.c_pushViewport_FUN_0050e320
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c890
        ;   Label: engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
    PUSH ESI                            ; 0048c891
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0048c892
    PUSH EDX                            ; 0048c896
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0048c897
    PUSH ECX                            ; 0048c89b
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0048c89c
    PUSH EBX                            ; 0048c8a0
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048c8a1
    PUSH ESI                            ; 0048c8a5
    CALL engine_matrix.c_pushViewport_FUN_0050e320 ; 0048c8a6 | void engine_matrix.c_pushViewport_FUN_0050e320(int x, int y, int width, int height)
        ;   XREF to: 0050e320 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0048c8ab
    POP ESI                             ; 0048c8ae
    POP EBX                             ; 0048c8af
    RET                                 ; 0048c8b0

