; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f3a60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[4]:
;   shape_edittool.cpp_FUN_0047b7c0 at 0047b801
;   shape_edittool.cpp_FUN_0047ee50 at 0047f007
;   shape_edittool.cpp_FUN_0047fa80 at 0047fbcc
;   shape_edittool.cpp_FUN_00485640 at 004856ec
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f3ab0
;   engine_mini3d.cpp_FUN_004f3ad0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3a60
        ;   Label: engine_mini3d.cpp_FUN_004f3a60
    PUSH ESI                            ; 004f3a61
    PUSH EDI                            ; 004f3a62
    PUSH EBP                            ; 004f3a63
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f3a64
    MOV ESI,dword ptr [ESP + 0x18]      ; 004f3a68
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004f3a6c
    MOV EDI,dword ptr [ESP + 0x20]      ; 004f3a70
    PUSH EBP                            ; 004f3a74
    PUSH ESI                            ; 004f3a75
    PUSH EBX                            ; 004f3a76
    CALL engine_mini3d.cpp_FUN_004f3ab0 ; 004f3a77
        ;   XREF to: 004f3ab0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3ab0()
    ADD ESP,0xc                         ; 004f3a7c
    PUSH EBP                            ; 004f3a7f
    PUSH EDI                            ; 004f3a80
    PUSH EBX                            ; 004f3a81
    CALL engine_mini3d.cpp_FUN_004f3ab0 ; 004f3a82
        ;   XREF to: 004f3ab0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3ab0()
    ADD ESP,0xc                         ; 004f3a87
    PUSH EDI                            ; 004f3a8a
    PUSH ESI                            ; 004f3a8b
    PUSH EBX                            ; 004f3a8c
    CALL engine_mini3d.cpp_FUN_004f3ad0 ; 004f3a8d
        ;   XREF to: 004f3ad0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3ad0()
    ADD ESP,0xc                         ; 004f3a92
    PUSH EDI                            ; 004f3a95
    PUSH ESI                            ; 004f3a96
    PUSH EBP                            ; 004f3a97
    CALL engine_mini3d.cpp_FUN_004f3ad0 ; 004f3a98
        ;   XREF to: 004f3ad0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3ad0()
    ADD ESP,0xc                         ; 004f3a9d
    POP EBP                             ; 004f3aa0
    POP EDI                             ; 004f3aa1
    POP ESI                             ; 004f3aa2
    POP EBX                             ; 004f3aa3
    RET                                 ; 004f3aa4

