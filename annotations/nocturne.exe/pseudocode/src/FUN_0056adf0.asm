; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056adf0(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_0056ae10 at 0056ae90
;
; Called Functions:
;   crt_stdio.c_fputc_FUN_00566cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056adf0
        ;   Label: FUN_0056adf0
    PUSH ESI                            ; 0056adf1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056adf2
    MOV EDX,dword ptr [EBX]             ; 0056adf6
    PUSH EDX                            ; 0056adf8
    MOV ECX,dword ptr [ESP + 0x14]      ; 0056adf9
    PUSH ECX                            ; 0056adfd
    CALL crt_stdio.c_fputc_FUN_00566cc0 ; 0056adfe
        ;   XREF to: 00566cc0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_00566cc0()
    MOV ESI,dword ptr [EBX + 0x10]      ; 0056ae03
    INC ESI                             ; 0056ae06
    ADD ESP,0x8                         ; 0056ae07
    MOV dword ptr [EBX + 0x10],ESI      ; 0056ae0a
    POP ESI                             ; 0056ae0d
    POP EBX                             ; 0056ae0e
    RET                                 ; 0056ae0f

