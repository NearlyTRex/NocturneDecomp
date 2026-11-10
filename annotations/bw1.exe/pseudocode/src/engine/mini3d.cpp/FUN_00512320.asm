; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_00512320(float param_1)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[10]:
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400 at 00494483
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_004958d0 at 00495a4a
;   shape_edittool.cpp_CPickList_renderDialog_FUN_0049b830 at 0049bcfb
;   shape_edittool.cpp_FUN_00492e40 at 00492e66
;   shape_edittool.cpp_FUN_004934b0 at 004934f6
;   shape_edittool.cpp_FUN_004944fe at 0049458e
;   shape_edittool.cpp_FUN_004962b0 at 00496375
;   shape_edittool.cpp_FUN_00496ee0 at 0049721e
;   shape_edittool.cpp_FUN_00498360 at 00498579
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_00493d40 at 00493f4c
;
; Referenced Globals:
;   undefined4 DAT_005e8c83
;   undefined4 DAT_005e8c8b
;   undefined4 DAT_0061b4b8
;   undefined4 DAT_01c50948
;   undefined4 DAT_01d224c0
;   undefined4 DAT_01d22548
;   undefined4 DAT_01d2254c
;   undefined4 DAT_01d22550
;   undefined4 DAT_01d25f44
;   undefined4 DAT_02c83448
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00512320
        ;   Label: engine_mini3d.cpp_FUN_00512320
    MOV EAX,dword ptr [ESP + 0x8]       ; 00512323
    MOV EDX,dword ptr [0x02c83448]      ; 00512327 | DAT_02c83448
    MOV [0x01d224c0],EAX                ; 0051232d | DAT_01d224c0
    TEST EDX,EDX                        ; 00512332
    JZ 0x0051233f                       ; 00512334
        ;   XREF to: 0051233f (CONDITIONAL_JUMP)  ; LAB_0051233f
    CMP dword ptr [0x01c50948],0x0      ; 00512336 | DAT_01c50948
    JNZ 0x00512386                      ; 0051233d
        ;   XREF to: 00512386 (CONDITIONAL_JUMP)  ; LAB_00512386
    FLD float ptr [ESP + 0x8]           ; 0051233f
        ;   Label: LAB_0051233f
    FLD ST0                             ; 00512343
    FMUL double ptr [0x005e8c83]        ; 00512345 | DAT_005e8c83
    FXCH                                ; 0051234b
    FMUL float ptr [0x005e8c8b]         ; 0051234d | DAT_005e8c8b
    MOV EDX,dword ptr [0x01d25f44]      ; 00512353 | DAT_01d25f44
    FXCH                                ; 00512359
    CALL crt_math.c_round_FUN_005c03a0  ; 0051235b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP]               ; 00512360
    MOV EAX,dword ptr [ESP]             ; 00512363
    AND EDX,0xffffff                    ; 00512366
    SHL EAX,0x18                        ; 0051236c
    CALL crt_math.c_round_FUN_005c03a0  ; 0051236f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    OR EDX,EAX                          ; 00512374
    FISTP dword ptr [0x0061b4b8]        ; 00512376 | DAT_0061b4b8
    MOV dword ptr [0x01d25f44],EDX      ; 0051237c | DAT_01d25f44
    ADD ESP,0x4                         ; 00512382
    RET                                 ; 00512385
    PUSH EAX                            ; 00512386
        ;   Label: LAB_00512386
    PUSH dword ptr [0x01d22550]         ; 00512387 | DAT_01d22550
    PUSH dword ptr [0x01d2254c]         ; 0051238d | DAT_01d2254c
    PUSH dword ptr [0x01d22548]         ; 00512393 | DAT_01d22548
    CALL dword ptr [0x02c83448]         ; 00512399 | DAT_02c83448
    ADD ESP,0x10                        ; 0051239f
    JMP 0x0051233f                      ; 005123a2
        ;   XREF to: 0051233f (UNCONDITIONAL_JUMP)  ; LAB_0051233f

