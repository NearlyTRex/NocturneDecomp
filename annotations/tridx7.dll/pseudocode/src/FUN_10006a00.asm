; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_10006a00(int *param_1)
;
;
; XREF[1]:
;   FUN_10005f40 at 100063e4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 10006a00
        ;   Label: FUN_10006a00
    MOV ECX,dword ptr [EAX]             ; 10006a04
    ADD ECX,0x8                         ; 10006a06
    MOV dword ptr [EAX],ECX             ; 10006a09
    MOV EAX,dword ptr [ECX + -0x8]      ; 10006a0b
    MOV EDX,dword ptr [ECX + -0x4]      ; 10006a0e
    SUB ECX,0x8                         ; 10006a11
    RET                                 ; 10006a14

