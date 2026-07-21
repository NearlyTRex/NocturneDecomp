; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(undefined4 param_1,undefined4 param_2)
;
;
; XREF[41]:
;   FUN_004110f0 at 00411233
;   FUN_00419c20 at 00419c94
;   FUN_0041eaf0 at 0041eb70
;   FUN_00421540 at 00421655
;   FUN_004270e0 at 0042710d
;   FUN_0042c4c0 at 0042c5a9
;   FUN_0043f330 at 0043f3ae
;   FUN_0049cc10 at 0049cec5
;   FUN_004ac440 at 004ac558
;   FUN_004ac600 at 004ac717
;   ... and 31 more
;
; Called Functions:
;   engine_3d.c_setRenderAlpha_FUN_00408370
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00461010
        ;   Label: engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
    PUSH EDX                            ; 00461014
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 00461015
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_setRenderAlpha_FUN_00408370()
    ADD ESP,0x4                         ; 0046101a
    RET                                 ; 0046101d

