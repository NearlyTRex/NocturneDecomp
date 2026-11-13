; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_disableClipping_FUN_004f02b0(void)
;
;
; XREF[1]:
;   engine_font.cpp_FUN_004b13a0 at 004b1404
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01d79780
;   undefined4 DAT_02cf60f0
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 004f02b0
        ;   Label: engine_mini3d.cpp_disableClipping_FUN_004f02b0
    MOV ECX,dword ptr [0x02cf60f0]      ; 004f02b2 | DAT_02cf60f0
    MOV dword ptr [0x01d79780],EDX      ; 004f02b8 | DAT_01d79780
    TEST ECX,ECX                        ; 004f02be
    JZ 0x004f02cb                       ; 004f02c0
        ;   XREF to: 004f02cb (CONDITIONAL_JUMP)  ; LAB_004f02cb
    CMP dword ptr [0x01c6cee8],0x0      ; 004f02c2 | DAT_01c6cee8
    JNZ 0x004f02cc                      ; 004f02c9
        ;   XREF to: 004f02cc (CONDITIONAL_JUMP)  ; LAB_004f02cc
    RET                                 ; 004f02cb
        ;   Label: LAB_004f02cb
    PUSH EDX                            ; 004f02cc
        ;   Label: LAB_004f02cc
    CALL dword ptr [0x02cf60f0]         ; 004f02cd | DAT_02cf60f0
    ADD ESP,0x4                         ; 004f02d3
    RET                                 ; 004f02d6

