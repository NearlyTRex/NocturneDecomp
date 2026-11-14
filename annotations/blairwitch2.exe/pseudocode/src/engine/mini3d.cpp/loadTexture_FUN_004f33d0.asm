; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_loadTexture_FUN_004f33d0(int arg1,int arg2,int arg3,int arg4,int arg5)
;
; Parameters:
; int              Stack[0x4]:4   arg1
; int              Stack[0x8]:4   arg2
; int              Stack[0xc]:4   arg3
; int              Stack[0x10]:4   arg4
; int              Stack[0x14]:4   arg5
;
; XREF[1]:
;   engine_font.cpp_FUN_004a7fd0 at 004a821f
;
; Called Functions:
;   engine_texture.cpp_FUN_00574ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f33d0
        ;   Label: engine_mini3d.cpp_loadTexture_FUN_004f33d0
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

