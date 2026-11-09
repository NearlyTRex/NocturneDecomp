; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004ed9d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
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
        ;   Label: engine_mini3d.cpp_FUN_004ed9d0
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

