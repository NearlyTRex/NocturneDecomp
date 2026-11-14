; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c4fc0(undefined4 *param_1,int param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c4fe0 at 005c5060
;
; Called Functions:
;   crt_stdio.c_fputc_FUN_005c2f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c4fc0
        ;   Label: crt_unknown.c_FUN_005c4fc0
    PUSH ESI                            ; 005c4fc1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c4fc2
    MOV EDX,dword ptr [EBX]             ; 005c4fc6
    PUSH EDX                            ; 005c4fc8
    MOV ECX,dword ptr [ESP + 0x14]      ; 005c4fc9
    PUSH ECX                            ; 005c4fcd
    CALL crt_stdio.c_fputc_FUN_005c2f00 ; 005c4fce
        ;   XREF to: 005c2f00 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_005c2f00(int character, _FILE * file)
    MOV ESI,dword ptr [EBX + 0x10]      ; 005c4fd3
    INC ESI                             ; 005c4fd6
    ADD ESP,0x8                         ; 005c4fd7
    MOV dword ptr [EBX + 0x10],ESI      ; 005c4fda
    POP ESI                             ; 005c4fdd
    POP EBX                             ; 005c4fde
    RET                                 ; 005c4fdf

