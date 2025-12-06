; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_005ff0d0()
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   cockpit_ckptutil.c_loadEdgeListFile_FUN_004331f0 at 00433411
;
; Referenced Globals:
;   undefined4 DAT_00684cde
;
; Called Functions:
;   crt_stdio.c_vfprintf_FUN_00604850
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005ff0d0
        ;   Label: crt_unknown.c_FUN_005ff0d0
    LEA EAX,[ESP + 0xc]                 ; 005ff0d3
    MOV dword ptr [ESP],EAX             ; 005ff0d7
    MOV EAX,ESP                         ; 005ff0da
    PUSH EAX                            ; 005ff0dc
    MOV EDX,dword ptr [ESP + 0xc]       ; 005ff0dd
    PUSH EDX                            ; 005ff0e1
    PUSH 0x684cde                       ; 005ff0e2 | DAT_00684cde
    CALL crt_stdio.c_vfprintf_FUN_00604850 ; 005ff0e7 | int crt_stdio.c_vfprintf_FUN_00604850(FILE * file, char * format, va_list_t args)
        ;   XREF to: 00604850 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005ff0ec
    ADD ESP,0x4                         ; 005ff0ef
    RET                                 ; 005ff0f2

