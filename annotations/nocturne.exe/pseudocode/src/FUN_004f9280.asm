; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f9280(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01e52a64
;
; Called Functions:
;   engine_pod.cpp_CPod_ctor_FUN_004f8810
;   FUN_00564bb0
;
; *****************************************************************************

section .text

    PUSH 0x1e528d0                      ; 004f9280
        ;   Label: FUN_004f9280
    CALL engine_pod.cpp_CPod_ctor_FUN_004f8810 ; 004f9285
        ;   XREF to: 004f8810 (UNCONDITIONAL_CALL)  ; undefined engine_pod.cpp_CPod_ctor_FUN_004f8810()
    ADD ESP,0x4                         ; 004f928a
    MOV EDX,0x5a14f4                    ; 004f928d
    PUSH 0x5be1bc                       ; 004f9292
    MOV dword ptr [0x01e52a64],EDX      ; 004f9297 | DAT_01e52a64
    CALL FUN_00564bb0                   ; 004f929d
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00564bb0()
    ADD ESP,0x4                         ; 004f92a2
    RET                                 ; 004f92a5

