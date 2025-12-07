; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_unknown.c_staticFinal_FUN_00608fc0(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_00608fdc
;   crt_unknown.c_FUN_006093e8
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00608fc0
        ;   Label: crt_unknown.c_staticFinal_FUN_00608fc0
    CALL crt_unknown.c_FUN_00608fdc     ; 00608fc2 | undefined crt_unknown.c_FUN_00608fdc()
        ;   XREF to: 00608fdc (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00608fc7
    JMP 0x006093e8                      ; 00608fca
        ;   XREF to: 006093e8 (UNCONDITIONAL_CALL)

