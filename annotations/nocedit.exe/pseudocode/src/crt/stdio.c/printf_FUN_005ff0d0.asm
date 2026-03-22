; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_printf_FUN_005ff0d0(char *format,...)
;
; Parameters:
; char *           Stack[0x4]:4   format
; Local Variables:
; undefined1 *     Stack[-0x4]:4  local_4
;
; XREF[1]:
;   cockpit_ckptutil.c_loadEdgeListFile_FUN_004331f0 at 00433411
;
; Referenced Globals:
;   undefined4 SUB_00604850
;   _FILE g_StdoutLogFile
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005ff0d0
        ;   Label: crt_stdio.c_printf_FUN_005ff0d0
    LEA EAX,[ESP + 0xc]                 ; 005ff0d3
    MOV dword ptr [ESP],EAX             ; 005ff0d7
    MOV EAX,ESP                         ; 005ff0da
    PUSH EAX                            ; 005ff0dc
    MOV EDX,dword ptr [ESP + 0xc]       ; 005ff0dd
    PUSH EDX                            ; 005ff0e1
    PUSH 0x684cde                       ; 005ff0e2 | g_StdoutLogFile
    CALL 0x00604850                     ; 005ff0e7
        ;   XREF to: 00604850 (UNCONDITIONAL_CALL)  ; SUB_00604850
    ADD ESP,0xc                         ; 005ff0ec
    ADD ESP,0x4                         ; 005ff0ef
    RET                                 ; 005ff0f2

