; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_mini3d_cpp_FUN_0051102e(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d2ad74
;
; Called Functions:
;   engine_mini3d.cpp_FUN_00514c90
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0051102e
        ;   Label: engine_mini3d.cpp_FUN_0051102e
    PUSH 0x3e8                          ; 00511030
    CALL engine_mini3d.cpp_FUN_00514c90 ; 00511035
        ;   XREF to: 00514c90 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00514c90()
    ADD ESP,0x4                         ; 0051103a
    MOV [0x01d2ad74],EAX                ; 0051103d | DAT_01d2ad74
    XOR EAX,EAX                         ; 00511042
    RET                                 ; 00511044

