; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bccf0(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005bcd10 at 005bcd90
;
; Called Functions:
;   crt_stdio.c_fputc_FUN_005bab40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bccf0
        ;   Label: crt_unknown.c_FUN_005bccf0
    PUSH ESI                            ; 005bccf1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005bccf2
    MOV EDX,dword ptr [EBX]             ; 005bccf6
    PUSH EDX                            ; 005bccf8
    MOV ECX,dword ptr [ESP + 0x14]      ; 005bccf9
    PUSH ECX                            ; 005bccfd
    CALL crt_stdio.c_fputc_FUN_005bab40 ; 005bccfe
        ;   XREF to: 005bab40 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005bab40()
    MOV ESI,dword ptr [EBX + 0x10]      ; 005bcd03
    INC ESI                             ; 005bcd06
    ADD ESP,0x8                         ; 005bcd07
    MOV dword ptr [EBX + 0x10],ESI      ; 005bcd0a
    POP ESI                             ; 005bcd0d
    POP EBX                             ; 005bcd0e
    RET                                 ; 005bcd0f

