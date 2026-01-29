; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl crt_stdio_c_fprintf_FUN_006021c0(_FILE *stream,char *format,...)
;
; Parameters:
; _FILE *          Stack[0x4]:4   stream
; char *           Stack[0x8]:4   format
;
; XREF[1]:
;   shape_superopt.cpp_logToFile_FUN_005c7910 at 005c7970
;
; Called Functions:
;   crt_stdio.c_vfprintf_FUN_00604850
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006021c0
        ;   Label: crt_stdio.c_fprintf_FUN_006021c0
    MOV EDX,dword ptr [ESP + 0x10]      ; 006021c1
    PUSH EDX                            ; 006021c5
    MOV EBX,dword ptr [ESP + 0x10]      ; 006021c6
    PUSH EBX                            ; 006021ca
    MOV ECX,dword ptr [ESP + 0x10]      ; 006021cb
    PUSH ECX                            ; 006021cf
    CALL crt_stdio.c_vfprintf_FUN_00604850 ; 006021d0
        ;   XREF to: 00604850 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vfprintf_FUN_00604850(_FILE * file, char * format, va_list_t args)
    ADD ESP,0xc                         ; 006021d5
    POP EBX                             ; 006021d8
    RET                                 ; 006021d9

