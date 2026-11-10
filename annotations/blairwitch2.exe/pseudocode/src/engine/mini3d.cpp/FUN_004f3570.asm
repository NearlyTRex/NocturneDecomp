; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f3570(float param_1)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[8]:
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0047d270 at 0047d3ea
;   shape_edittool.cpp_CPickList_renderDialog_FUN_004831d0 at 0048369b
;   shape_edittool.cpp_FUN_0047a990 at 0047a9b6
;   shape_edittool.cpp_FUN_0047afb0 at 0047aff4
;   shape_edittool.cpp_FUN_0047be90 at 0047befd
;   shape_edittool.cpp_FUN_0047dc40 at 0047dd05
;   shape_edittool.cpp_FUN_0047e870 at 0047ebae
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047b800 at 0047ba00
;
; Referenced Globals:
;   undefined4 DAT_005ddc3c
;   undefined4 DAT_005ddc44
;   undefined4 DAT_006141d8
;   undefined4 DAT_01c37788
;   undefined4 DAT_01d09860
;   undefined4 DAT_01d098e4
;   undefined4 DAT_01d098e8
;   undefined4 DAT_01d098ec
;   undefined4 DAT_01d0d2e4
;   undefined4 DAT_0264bc78
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004f3570
        ;   Label: engine_mini3d.cpp_FUN_004f3570
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f3573
    MOV EDX,dword ptr [0x0264bc78]      ; 004f3577 | DAT_0264bc78
    MOV [0x01d09860],EAX                ; 004f357d | DAT_01d09860
    TEST EDX,EDX                        ; 004f3582
    JZ 0x004f358f                       ; 004f3584
        ;   XREF to: 004f358f (CONDITIONAL_JUMP)  ; LAB_004f358f
    CMP dword ptr [0x01c37788],0x0      ; 004f3586 | DAT_01c37788
    JNZ 0x004f35d6                      ; 004f358d
        ;   XREF to: 004f35d6 (CONDITIONAL_JUMP)  ; LAB_004f35d6
    FLD float ptr [ESP + 0x8]           ; 004f358f
        ;   Label: LAB_004f358f
    FLD ST0                             ; 004f3593
    FMUL double ptr [0x005ddc3c]        ; 004f3595 | DAT_005ddc3c
    FXCH                                ; 004f359b
    FMUL float ptr [0x005ddc44]         ; 004f359d | DAT_005ddc44
    MOV EDX,dword ptr [0x01d0d2e4]      ; 004f35a3 | DAT_01d0d2e4
    FXCH                                ; 004f35a9
    CALL crt_math.c_round_FUN_005b7ff0  ; 004f35ab
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP]               ; 004f35b0
    MOV EAX,dword ptr [ESP]             ; 004f35b3
    AND EDX,0xffffff                    ; 004f35b6
    SHL EAX,0x18                        ; 004f35bc
    CALL crt_math.c_round_FUN_005b7ff0  ; 004f35bf
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    OR EDX,EAX                          ; 004f35c4
    FISTP dword ptr [0x006141d8]        ; 004f35c6 | DAT_006141d8
    MOV dword ptr [0x01d0d2e4],EDX      ; 004f35cc | DAT_01d0d2e4
    ADD ESP,0x4                         ; 004f35d2
    RET                                 ; 004f35d5
    PUSH EAX                            ; 004f35d6
        ;   Label: LAB_004f35d6
    PUSH dword ptr [0x01d098ec]         ; 004f35d7 | DAT_01d098ec
    PUSH dword ptr [0x01d098e8]         ; 004f35dd | DAT_01d098e8
    PUSH dword ptr [0x01d098e4]         ; 004f35e3 | DAT_01d098e4
    CALL dword ptr [0x0264bc78]         ; 004f35e9 | DAT_0264bc78
    ADD ESP,0x10                        ; 004f35ef
    JMP 0x004f358f                      ; 004f35f2
        ;   XREF to: 004f358f (UNCONDITIONAL_JUMP)  ; LAB_004f358f

