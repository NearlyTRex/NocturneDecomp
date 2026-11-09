; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_005b544e(void)
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

    MOV EDX,EDX                         ; 005b544e
        ;   Label: core_xform.cpp_FUN_005b544e
    MOV EDX,0x5fa088                    ; 005b5450
    MOV ECX,0x7c                        ; 005b5455
    PUSH 0x5fa09a                       ; 005b545a
    MOV dword ptr [0x01d1d400],EDX      ; 005b545f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 005b5465 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005b546b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005b5470
    RET                                 ; 005b5473

