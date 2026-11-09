; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_texture_cpp_loadTextureAndGetData_FUN_0056aa90(int param_1)
;
;
; XREF[1]:
;   engine_3d.c_flushPremiumRenderBuffer_FUN_00406f30 at 00407040
;
; Called Functions:
;   engine_texture.cpp_FUN_0056aa10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0056aa90
        ;   Label: engine_texture.cpp_loadTextureAndGetData_FUN_0056aa90
    PUSH EDX                            ; 0056aa94
    CALL engine_texture.cpp_FUN_0056aa10 ; 0056aa95
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056aa10()
    ADD ESP,0x4                         ; 0056aa9a
    MOV EAX,dword ptr [ESP + 0x4]       ; 0056aa9d
    ADD EAX,0x48                        ; 0056aaa1
    RET                                 ; 0056aaa4

