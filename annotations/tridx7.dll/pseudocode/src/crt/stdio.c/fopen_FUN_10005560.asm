; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _FILE * __cdecl crt_stdio_c_fopen_FUN_10005560(char *filename,char *mode)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; char *           Stack[0x8]:4   mode
;
; XREF[2]:
;   APIDLLsetVideoMode at 10002675
;   FUN_10001200 at 10001231
;
; Called Functions:
;   crt_stdio.c__fsopen_FUN_10005520
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 10005560
        ;   Label: crt_stdio.c_fopen_FUN_10005560
    PUSH 0x40                           ; 10005564
    MOV ECX,dword ptr [ESP + 0x8]       ; 10005566
    PUSH EAX                            ; 1000556a
    PUSH ECX                            ; 1000556b
    CALL crt_stdio.c__fsopen_FUN_10005520 ; 1000556c
        ;   XREF to: 10005520 (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c__fsopen_FUN_10005520(char * filename, char * mode, int sh_flag)
    ADD ESP,0xc                         ; 10005571
    RET                                 ; 10005574

