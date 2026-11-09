; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_texture_cpp_loadTextureAndGetData_FUN_00597aa0(int param_1)
;
;
; XREF[1]:
;   engine_3d.c_flushPremiumRenderBuffer_FUN_00406f10 at 00407020
;
; Called Functions:
;   engine_texture.cpp_FUN_00597a20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00597aa0
        ;   Label: engine_texture.cpp_loadTextureAndGetData_FUN_00597aa0
    PUSH EDX                            ; 00597aa4
    CALL engine_texture.cpp_FUN_00597a20 ; 00597aa5
        ;   XREF to: 00597a20 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00597a20()
    ADD ESP,0x4                         ; 00597aaa
    MOV EAX,dword ptr [ESP + 0x4]       ; 00597aad
    ADD EAX,0x48                        ; 00597ab1
    RET                                 ; 00597ab4

