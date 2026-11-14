; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_loadTexture_FUN_004ed9d0(int arg1,int arg2,int arg3,int arg4,int arg5)
;
; Parameters:
; int              Stack[0x4]:4   arg1
; int              Stack[0x8]:4   arg2
; int              Stack[0xc]:4   arg3
; int              Stack[0x10]:4   arg4
; int              Stack[0x14]:4   arg5
;
; XREF[1]:
;   engine_font.cpp_FUN_004afbf0 at 004afe55
;
; Called Functions:
;   engine_texture.cpp_FUN_0056aab0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ed9d0
        ;   Label: engine_mini3d.cpp_loadTexture_FUN_004ed9d0
    PUSH ESI                            ; 004ed9d1
    PUSH EDI                            ; 004ed9d2
    MOV EDX,dword ptr [ESP + 0x20]      ; 004ed9d3
    PUSH EDX                            ; 004ed9d7
    MOV ECX,dword ptr [ESP + 0x20]      ; 004ed9d8
    PUSH ECX                            ; 004ed9dc
    MOV EBX,dword ptr [ESP + 0x20]      ; 004ed9dd
    PUSH EBX                            ; 004ed9e1
    MOV ESI,dword ptr [ESP + 0x20]      ; 004ed9e2
    PUSH ESI                            ; 004ed9e6
    MOV EDI,dword ptr [ESP + 0x20]      ; 004ed9e7
    PUSH EDI                            ; 004ed9eb
    CALL engine_texture.cpp_FUN_0056aab0 ; 004ed9ec
        ;   XREF to: 0056aab0 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_0056aab0()
    ADD ESP,0x14                        ; 004ed9f1
    POP EDI                             ; 004ed9f4
    POP ESI                             ; 004ed9f5
    POP EBX                             ; 004ed9f6
    RET                                 ; 004ed9f7

