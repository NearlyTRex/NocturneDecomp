; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_processCameraRelativePoint_FUN_004037e0(int param_1)
;
;
; XREF[3]:
;   engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046ce60 at 0046ce7e
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 at 0046cec7
;   shape_edittool.cpp_FUN_0048114e at 00481183
;
; Referenced Globals:
;   undefined4 DAT_00730408
;   undefined4 DAT_0073040c
;   undefined4 DAT_00730410
;   undefined4 DAT_01c6e2cc
;   undefined4 DAT_01c6e2d0
;   undefined4 DAT_01c6e2d4
;   undefined4 DAT_01c6e2d8
;   undefined4 DAT_01c6e2dc
;   undefined4 DAT_01c6e2e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004037e0
        ;   Label: engine_3d.c_processCameraRelativePoint_FUN_004037e0
    PUSH ESI                            ; 004037e1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004037e2
    MOV EDX,dword ptr [EAX + 0x4]       ; 004037e6
    MOV dword ptr [0x00730408],EDX      ; 004037e9 | DAT_00730408
    MOV EDX,dword ptr [EAX + 0x8]       ; 004037ef
    MOV dword ptr [0x0073040c],EDX      ; 004037f2 | DAT_0073040c
    MOV EDX,dword ptr [EAX + 0xc]       ; 004037f8
    MOV ECX,dword ptr [EAX + 0x4]       ; 004037fb
    MOV dword ptr [0x00730410],EDX      ; 004037fe | DAT_00730410
    MOV EDX,dword ptr [0x01c6e2d8]      ; 00403804 | DAT_01c6e2d8
    SUB EDX,ECX                         ; 0040380a
    MOV EBX,dword ptr [EAX + 0x8]       ; 0040380c
    MOV dword ptr [0x01c6e2cc],EDX      ; 0040380f | DAT_01c6e2cc
    MOV EDX,dword ptr [0x01c6e2dc]      ; 00403815 | DAT_01c6e2dc
    SUB EDX,EBX                         ; 0040381b
    MOV ESI,dword ptr [EAX + 0xc]       ; 0040381d
    MOV dword ptr [0x01c6e2d0],EDX      ; 00403820 | DAT_01c6e2d0
    MOV EDX,dword ptr [0x01c6e2e0]      ; 00403826 | DAT_01c6e2e0
    SUB EDX,ESI                         ; 0040382c
    ADD EAX,0x10                        ; 0040382e
    MOV dword ptr [0x01c6e2d4],EDX      ; 00403831 | DAT_01c6e2d4
    POP ESI                             ; 00403837
    POP EBX                             ; 00403838
    RET                                 ; 00403839

