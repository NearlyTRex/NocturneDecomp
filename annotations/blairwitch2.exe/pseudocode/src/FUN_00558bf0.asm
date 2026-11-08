; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_00558bf0(void)
;
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00558bf0
        ;   Label: FUN_00558bf0
    XOR EDX,EDX                         ; 00558bf3
    MOV ECX,0xbff00000                  ; 00558bf5
    MOV EAX,EDX                         ; 00558bfa
    MOV dword ptr [ESP],EDX             ; 00558bfc
    MOV dword ptr [ESP + 0x4],ECX       ; 00558bff
    MOV EDX,ECX                         ; 00558c03
    ADD ESP,0x8                         ; 00558c05
    RET                                 ; 00558c08

