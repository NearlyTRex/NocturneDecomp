; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(undefined4 param_1,undefined4 param_2)
;
;
; XREF[32]:
;   FUN_004110f0 at 0041121f
;   FUN_00414340 at 00414473
;   FUN_004270e0 at 004270f9
;   FUN_0042c4c0 at 0042c5bb
;   FUN_0044f9b0 at 0044fcca
;   FUN_0045a260 at 0045a3a2
;   FUN_00489990 at 00489c72
;   FUN_0048d5d0 at 0048da5e
;   FUN_004ca790 at 004cab69
;   FUN_0050d910 at 0050dd01
;   ... and 22 more
;
; Called Functions:
;   engine_3d.c_setBlendMode_FUN_004083c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00461000
        ;   Label: engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000
    PUSH EDX                            ; 00461004
    CALL engine_3d.c_setBlendMode_FUN_004083c0 ; 00461005
        ;   XREF to: 004083c0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_setBlendMode_FUN_004083c0()
    ADD ESP,0x4                         ; 0046100a
    RET                                 ; 0046100d

