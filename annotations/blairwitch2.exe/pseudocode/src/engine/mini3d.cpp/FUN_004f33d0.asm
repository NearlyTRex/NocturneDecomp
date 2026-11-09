; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f33d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   engine_font.cpp_FUN_004a7fe2 at 004a821f
;
; Called Functions:
;   engine_texture.cpp_FUN_00574ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f33d0
        ;   Label: engine_mini3d.cpp_FUN_004f33d0
    PUSH ESI                            ; 004f33d1
    PUSH EDI                            ; 004f33d2
    MOV EDX,dword ptr [ESP + 0x20]      ; 004f33d3
    PUSH EDX                            ; 004f33d7
    MOV ECX,dword ptr [ESP + 0x20]      ; 004f33d8
    PUSH ECX                            ; 004f33dc
    MOV EBX,dword ptr [ESP + 0x20]      ; 004f33dd
    PUSH EBX                            ; 004f33e1
    MOV ESI,dword ptr [ESP + 0x20]      ; 004f33e2
    PUSH ESI                            ; 004f33e6
    MOV EDI,dword ptr [ESP + 0x20]      ; 004f33e7
    PUSH EDI                            ; 004f33eb
    CALL engine_texture.cpp_FUN_00574ea0 ; 004f33ec
        ;   XREF to: 00574ea0 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00574ea0()
    ADD ESP,0x14                        ; 004f33f1
    POP EDI                             ; 004f33f4
    POP ESI                             ; 004f33f5
    POP EBX                             ; 004f33f6
    RET                                 ; 004f33f7

