; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_unknown_c_seek_within_buffer_FUN_00565814(_FILE *file)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file
;
; XREF[1]:
;   crt_stdio.c_fseek_FUN_0056582c at 0056593f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00565814
        ;   Label: crt_unknown.c_seek_within_buffer_FUN_00565814
    AND byte ptr [EAX + 0xc],0xef       ; 00565818
    MOV EDX,dword ptr [EAX + 0x8]       ; 0056581c
    MOV EDX,dword ptr [EDX + 0x8]       ; 0056581f
    MOV dword ptr [EAX + 0x4],0x0       ; 00565822
    MOV dword ptr [EAX],EDX             ; 00565829
    RET                                 ; 0056582b

