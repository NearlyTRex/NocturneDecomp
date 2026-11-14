; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_unknown_c_printf_FUN_005b8e10(char *format)
;
; Parameters:
; char *           Stack[0x4]:4   format
;
; XREF[1]:
;   cockpit_ckptutil.c_FUN_0042dec0 at 0042e0bf
;
; Called Functions:
;   crt_unknown.c_FUN_005bcd10
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005b8e10
        ;   Label: crt_unknown.c_printf_FUN_005b8e10
    LEA EAX,[ESP + 0xc]                 ; 005b8e13
    MOV dword ptr [ESP],EAX             ; 005b8e17
    MOV EAX,ESP                         ; 005b8e1a
    PUSH EAX                            ; 005b8e1c
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b8e1d
    PUSH EDX                            ; 005b8e21
    PUSH 0x61ef6e                       ; 005b8e22
    CALL crt_unknown.c_FUN_005bcd10     ; 005b8e27
        ;   XREF to: 005bcd10 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bcd10()
    ADD ESP,0xc                         ; 005b8e2c
    ADD ESP,0x4                         ; 005b8e2f
    RET                                 ; 005b8e32

