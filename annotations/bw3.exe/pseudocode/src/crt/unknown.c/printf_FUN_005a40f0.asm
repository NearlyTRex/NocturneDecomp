; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_unknown_c_printf_FUN_005a40f0(char *format)
;
; Parameters:
; char *           Stack[0x4]:4   format
;
; XREF[1]:
;   cockpit_ckptutil.c_FUN_004367e0 at 004369df
;
; Called Functions:
;   crt_unknown.c_FUN_005a7e50
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005a40f0
        ;   Label: crt_unknown.c_printf_FUN_005a40f0
    LEA EAX,[ESP + 0xc]                 ; 005a40f3
    MOV dword ptr [ESP],EAX             ; 005a40f7
    MOV EAX,ESP                         ; 005a40fa
    PUSH EAX                            ; 005a40fc
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a40fd
    PUSH EDX                            ; 005a4101
    PUSH 0x607692                       ; 005a4102
    CALL crt_unknown.c_FUN_005a7e50     ; 005a4107
        ;   XREF to: 005a7e50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a7e50()
    ADD ESP,0xc                         ; 005a410c
    ADD ESP,0x4                         ; 005a410f
    RET                                 ; 005a4112

