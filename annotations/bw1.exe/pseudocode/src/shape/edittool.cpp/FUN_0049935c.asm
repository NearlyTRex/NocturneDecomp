; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0049935c(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01c3eb50
;   undefined4 DAT_01c3f544
;
; Called Functions:
;   engine_font.cpp_FUN_004c0fa0
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0049935c
        ;   Label: shape_edittool.cpp_FUN_0049935c
    MOV EAX,dword ptr [ESP + 0x8]       ; 00499360
    MOV EDX,dword ptr [0x01c3eb50]      ; 00499364 | DAT_01c3eb50
    MOV [0x01c3f544],EAX                ; 0049936a | DAT_01c3f544
    TEST EDX,EDX                        ; 0049936f
    JNZ 0x00499374                      ; 00499371
        ;   XREF to: 00499374 (CONDITIONAL_JUMP)  ; LAB_00499374
    RET                                 ; 00499373
    PUSH EAX                            ; 00499374
        ;   Label: LAB_00499374
    PUSH EDX                            ; 00499375
    CALL engine_font.cpp_FUN_004c0fa0   ; 00499376
        ;   XREF to: 004c0fa0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c0fa0()
    ADD ESP,0x8                         ; 0049937b
    RET                                 ; 0049937e

