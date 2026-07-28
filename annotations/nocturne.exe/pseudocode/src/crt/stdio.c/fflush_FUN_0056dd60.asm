; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_fflush_FUN_0056dd60(_FILE *stream)
;
; Parameters:
; _FILE *          Stack[0x4]:4   stream
;
; XREF[1]:
;   crt_stdio.c_ftell_FUN_00566e70 at 00566e85
;
; Called Functions:
;   FUN_00568890
;   FUN_0056aef0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056dd60
        ;   Label: crt_stdio.c_fflush_FUN_0056dd60
    TEST EAX,EAX                        ; 0056dd64
    JNZ 0x0056dd70                      ; 0056dd66
        ;   XREF to: 0056dd70 (CONDITIONAL_JUMP)  ; LAB_0056dd70
    CALL FUN_0056aef0                   ; 0056dd68
        ;   XREF to: 0056aef0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056aef0()
    XOR EAX,EAX                         ; 0056dd6d
    RET                                 ; 0056dd6f
    PUSH EAX                            ; 0056dd70
        ;   Label: LAB_0056dd70
    CALL FUN_00568890                   ; 0056dd71
        ;   XREF to: 00568890 (UNCONDITIONAL_CALL)  ; undefined FUN_00568890()
    ADD ESP,0x4                         ; 0056dd76
    RET                                 ; 0056dd79

