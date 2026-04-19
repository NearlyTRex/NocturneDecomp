; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c___CClose_FUN_00601ee4(_FILE *file_handle,int close_flags)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file_handle
; int              Stack[0x8]:4   close_flags
;
; XREF[1]:
;   crt_stdio.c_fclose_FUN_00601ea0 at 00601ed7
;
; Called Functions:
;   crt_stdio.c___freefp_FUN_006093b0
;   crt_stdio.c_fclose_FUN_00601fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00601ee4
        ;   Label: crt_stdio.c___CClose_FUN_00601ee4
    MOV EDX,dword ptr [ESP + 0xc]       ; 00601ee5
    PUSH EDX                            ; 00601ee9
    MOV EBX,dword ptr [ESP + 0xc]       ; 00601eea
    PUSH EBX                            ; 00601eee
    CALL crt_stdio.c_fclose_FUN_00601fd0 ; 00601eef
        ;   XREF to: 00601fd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00601fd0(_FILE * file_handle, int force_close_flag)
    ADD ESP,0x8                         ; 00601ef4
    MOV ECX,dword ptr [ESP + 0x8]       ; 00601ef7
    PUSH ECX                            ; 00601efb
    MOV EBX,EAX                         ; 00601efc
    CALL crt_stdio.c___freefp_FUN_006093b0 ; 00601efe
        ;   XREF to: 006093b0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c___freefp_FUN_006093b0(_FILE * file_handle)
    ADD ESP,0x4                         ; 00601f03
    MOV EAX,EBX                         ; 00601f06
    POP EBX                             ; 00601f08
    RET                                 ; 00601f09

