; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_somebodyWriteMe_FUN_005918fe(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 005918fe
        ;   Label: core_xform.cpp_somebodyWriteMe_FUN_005918fe
    MOV EDX,0x5eecb6                    ; 00591900
    MOV ECX,0x7c                        ; 00591905
    PUSH 0x5eecc8                       ; 0059190a
    MOV dword ptr [0x01d046a0],EDX      ; 0059190f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00591915 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0059191b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00591920
    RET                                 ; 00591923

