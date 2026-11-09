; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f3ad0(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[6]:
;   engine_mini3d.cpp_FUN_004f3a60 at 004f3a8d
;   shape_edittool.cpp_FUN_0047b9b0 at 0047b9c8
;   shape_edittool.cpp_FUN_0047ee50 at 0047f110
;   shape_edittool.cpp_FUN_0047fa80 at 0047fcb2
;   shape_edittool.cpp_FUN_004850a0 at 0048513e
;   shape_edittool.cpp_FUN_004852f0 at 004854a6
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f37e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3ad0
        ;   Label: engine_mini3d.cpp_FUN_004f3ad0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f3ad1
    MOV ECX,dword ptr [ESP + 0x10]      ; 004f3ad5
    PUSH ECX                            ; 004f3ad9
    LEA EAX,[EDX + 0x1]                 ; 004f3ada
    PUSH EAX                            ; 004f3add
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f3ade
    PUSH EBX                            ; 004f3ae2
    PUSH EDX                            ; 004f3ae3
    CALL engine_mini3d.cpp_FUN_004f37e0 ; 004f3ae4
        ;   XREF to: 004f37e0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f37e0()
    ADD ESP,0x10                        ; 004f3ae9
    POP EBX                             ; 004f3aec
    RET                                 ; 004f3aed

