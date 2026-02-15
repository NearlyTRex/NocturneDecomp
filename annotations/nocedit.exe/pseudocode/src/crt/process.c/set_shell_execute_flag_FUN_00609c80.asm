; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_process_c_set_shell_execute_flag_FUN_00609c80(char *buffer)
;
; Parameters:
; char *           Stack[0x4]:4   buffer
;
; XREF[2]:
;   crt_process.c_spawnvp_FUN_0060f39c at 0060f7d2
;   crt_stdlib.c_system_FUN_00602130 at 00602180
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00609c80
        ;   Label: crt_process.c_set_shell_execute_flag_FUN_00609c80
    MOV byte ptr [EAX],0x2f             ; 00609c84
    MOV byte ptr [EAX + 0x1],0x63       ; 00609c87
    MOV byte ptr [EAX + 0x2],0x0        ; 00609c8b
    RET                                 ; 00609c8f

