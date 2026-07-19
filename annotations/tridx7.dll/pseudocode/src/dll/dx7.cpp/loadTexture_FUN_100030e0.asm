; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl dll_dx7_cpp_loadTexture_FUN_100030e0(int texture_index)
;
; Parameters:
; int              Stack[0x4]:4   texture_index
;
; XREF[2]:
;   dll_dx7.cpp_CDX7TextureCache_acquireSlot_FUN_10001090 at 10001143
;   dll_dx7.cpp_CDX7TextureCache_bindTexture_FUN_10001180 at 100011ec
;
; Referenced Globals:
;   int g_DX7CurrentTextureIndex = 0x0
;
; Called Functions:
;   dll_dx7.cpp_uploadCurrentTexture_FUN_10003a80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 100030e0
        ;   Label: dll_dx7.cpp_loadTexture_FUN_100030e0
    PUSH EAX                            ; 100030e4
    MOV [0x10014138],EAX                ; 100030e5 | g_DX7CurrentTextureIndex
    CALL dll_dx7.cpp_uploadCurrentTexture_FUN_10003a80 ; 100030ea
        ;   XREF to: 10003a80 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_uploadCurrentTexture_FUN_10003a80()
    ADD ESP,0x4                         ; 100030ef
    RET                                 ; 100030f2

