; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_seek_within_buffer_FUN_005ffab4(_FILE *file)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file
;
; XREF[1]:
;   crt_stdio.c_fseek_FUN_005ffacc at 005ffbdf
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ffab4
        ;   Label: crt_stdio.c_seek_within_buffer_FUN_005ffab4
    AND byte ptr [EAX + 0xc],0xef       ; 005ffab8
    MOV EDX,dword ptr [EAX + 0x8]       ; 005ffabc
    MOV EDX,dword ptr [EDX + 0x8]       ; 005ffabf
    MOV dword ptr [EAX + 0x4],0x0       ; 005ffac2
    MOV dword ptr [EAX],EDX             ; 005ffac9
    RET                                 ; 005ffacb

