; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_resetRenderBuffer_FUN_00406eb0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00713af8
;   undefined4 DAT_00713afc
;
; *****************************************************************************

section .text

    XOR ECX,ECX                         ; 00406eb0
        ;   Label: engine_3d.c_resetRenderBuffer_FUN_00406eb0
    MOV EDX,0x1                         ; 00406eb2
    MOV dword ptr [0x00713afc],ECX      ; 00406eb7 | DAT_00713afc
    MOV dword ptr [0x00713af8],EDX      ; 00406ebd | DAT_00713af8
    RET                                 ; 00406ec3

