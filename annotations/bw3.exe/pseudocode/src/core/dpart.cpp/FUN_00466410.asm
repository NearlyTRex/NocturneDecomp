; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dpart_cpp_FUN_00466410(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EDX,0x5bc0f9                    ; 00466410
        ;   Label: core_dpart.cpp_FUN_00466410
    MOV ECX,0x128                       ; 00466415
    PUSH 0x5bc10b                       ; 0046641a
    MOV dword ptr [0x01d71de0],EDX      ; 0046641f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00466425 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0046642b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00466430
    RET                                 ; 00466433

