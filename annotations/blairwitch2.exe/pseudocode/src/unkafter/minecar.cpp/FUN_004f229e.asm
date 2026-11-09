; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_minecar_cpp_FUN_004f229e(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d12114
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f5f10
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 004f229e
        ;   Label: unkafter_minecar.cpp_FUN_004f229e
    PUSH 0x3e8                          ; 004f22a0
    CALL engine_mini3d.cpp_FUN_004f5f10 ; 004f22a5
        ;   XREF to: 004f5f10 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f5f10()
    ADD ESP,0x4                         ; 004f22aa
    MOV [0x01d12114],EAX                ; 004f22ad | DAT_01d12114
    XOR EAX,EAX                         ; 004f22b2
    RET                                 ; 004f22b4

