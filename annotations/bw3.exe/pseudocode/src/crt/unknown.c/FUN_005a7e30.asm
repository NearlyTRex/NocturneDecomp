; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a7e30(undefined4 *param_1,int param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a7e50 at 005a7ed0
;
; Called Functions:
;   crt_stdio.c_fputc_FUN_005a5d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a7e30
        ;   Label: crt_unknown.c_FUN_005a7e30
    PUSH ESI                            ; 005a7e31
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a7e32
    MOV EDX,dword ptr [EBX]             ; 005a7e36
    PUSH EDX                            ; 005a7e38
    MOV ECX,dword ptr [ESP + 0x14]      ; 005a7e39
    PUSH ECX                            ; 005a7e3d
    CALL crt_stdio.c_fputc_FUN_005a5d70 ; 005a7e3e
        ;   XREF to: 005a5d70 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_005a5d70(int character, _FILE * file)
    MOV ESI,dword ptr [EBX + 0x10]      ; 005a7e43
    INC ESI                             ; 005a7e46
    ADD ESP,0x8                         ; 005a7e47
    MOV dword ptr [EBX + 0x10],ESI      ; 005a7e4a
    POP ESI                             ; 005a7e4d
    POP EBX                             ; 005a7e4e
    RET                                 ; 005a7e4f

