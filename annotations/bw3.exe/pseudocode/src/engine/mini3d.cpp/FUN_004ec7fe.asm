; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_mini3d_cpp_FUN_004ec7fe(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d7f4f4
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f0460
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 004ec7fe
        ;   Label: engine_mini3d.cpp_FUN_004ec7fe
    PUSH 0x3e8                          ; 004ec800
    CALL engine_mini3d.cpp_FUN_004f0460 ; 004ec805
        ;   XREF to: 004f0460 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f0460()
    ADD ESP,0x4                         ; 004ec80a
    MOV [0x01d7f4f4],EAX                ; 004ec80d | DAT_01d7f4f4
    XOR EAX,EAX                         ; 004ec812
    RET                                 ; 004ec814

