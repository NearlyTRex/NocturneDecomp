; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dpart_cpp_FUN_00479b3c(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 00479b3c
        ;   Label: core_dpart.cpp_FUN_00479b3c
    MOV EDX,0x5dab82                    ; 00479b40
    MOV ECX,0x128                       ; 00479b45
    PUSH 0x5dab94                       ; 00479b4a
    MOV dword ptr [0x01d1d400],EDX      ; 00479b4f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00479b55 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00479b5b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00479b60
    RET                                 ; 00479b63

