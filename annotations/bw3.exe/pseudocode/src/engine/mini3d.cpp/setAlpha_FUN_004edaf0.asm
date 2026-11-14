; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setAlpha_FUN_004edaf0(float alpha)
;
; Parameters:
; float            Stack[0x4]:4   alpha
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[10]:
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0 at 0047d023
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0047e470 at 0047e5ea
;   shape_edittool.cpp_CPickList_renderDialog_FUN_004843d0 at 0048489b
;   shape_edittool.cpp_FUN_0047b9e0 at 0047ba06
;   shape_edittool.cpp_FUN_0047c050 at 0047c096
;   shape_edittool.cpp_FUN_0047d0a0 at 0047d12e
;   shape_edittool.cpp_FUN_0047ee50 at 0047ef15
;   shape_edittool.cpp_FUN_0047fa80 at 0047fdbe
;   shape_edittool.cpp_FUN_00480f00 at 00481119
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047c8e0 at 0047caec
;
; Referenced Globals:
;   undefined4 DAT_005c7f85
;   undefined4 DAT_005c7f8d
;   undefined4 DAT_005fba38
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01d76c40
;   undefined4 DAT_01d76cc8
;   undefined4 DAT_01d76ccc
;   undefined4 DAT_01d76cd0
;   undefined4 DAT_01d7a6c4
;   undefined4 DAT_02cf60a4
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004edaf0
        ;   Label: engine_mini3d.cpp_setAlpha_FUN_004edaf0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004edaf3
    MOV EDX,dword ptr [0x02cf60a4]      ; 004edaf7 | DAT_02cf60a4
    MOV [0x01d76c40],EAX                ; 004edafd | DAT_01d76c40
    TEST EDX,EDX                        ; 004edb02
    JZ 0x004edb0f                       ; 004edb04
        ;   XREF to: 004edb0f (CONDITIONAL_JUMP)  ; LAB_004edb0f
    CMP dword ptr [0x01c6cee8],0x0      ; 004edb06 | DAT_01c6cee8
    JNZ 0x004edb56                      ; 004edb0d
        ;   XREF to: 004edb56 (CONDITIONAL_JUMP)  ; LAB_004edb56
    FLD float ptr [ESP + 0x8]           ; 004edb0f
        ;   Label: LAB_004edb0f
    FLD ST0                             ; 004edb13
    FMUL double ptr [0x005c7f85]        ; 004edb15 | DAT_005c7f85
    FXCH                                ; 004edb1b
    FMUL float ptr [0x005c7f8d]         ; 004edb1d | DAT_005c7f8d
    MOV EDX,dword ptr [0x01d7a6c4]      ; 004edb23 | DAT_01d7a6c4
    FXCH                                ; 004edb29
    CALL crt_math.c_round_FUN_005a3120  ; 004edb2b
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP]               ; 004edb30
    MOV EAX,dword ptr [ESP]             ; 004edb33
    AND EDX,0xffffff                    ; 004edb36
    SHL EAX,0x18                        ; 004edb3c
    CALL crt_math.c_round_FUN_005a3120  ; 004edb3f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    OR EDX,EAX                          ; 004edb44
    FISTP dword ptr [0x005fba38]        ; 004edb46 | DAT_005fba38
    MOV dword ptr [0x01d7a6c4],EDX      ; 004edb4c | DAT_01d7a6c4
    ADD ESP,0x4                         ; 004edb52
    RET                                 ; 004edb55
    PUSH EAX                            ; 004edb56
        ;   Label: LAB_004edb56
    PUSH dword ptr [0x01d76cd0]         ; 004edb57 | DAT_01d76cd0
    PUSH dword ptr [0x01d76ccc]         ; 004edb5d | DAT_01d76ccc
    PUSH dword ptr [0x01d76cc8]         ; 004edb63 | DAT_01d76cc8
    CALL dword ptr [0x02cf60a4]         ; 004edb69 | DAT_02cf60a4
    ADD ESP,0x10                        ; 004edb6f
    JMP 0x004edb0f                      ; 004edb72
        ;   XREF to: 004edb0f (UNCONDITIONAL_JUMP)  ; LAB_004edb0f

