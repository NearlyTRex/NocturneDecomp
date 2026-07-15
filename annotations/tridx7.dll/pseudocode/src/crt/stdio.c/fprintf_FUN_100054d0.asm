; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_fprintf_FUN_100054d0(FILE *file,char *format,...)
;
; Parameters:
; FILE *           Stack[0x4]:4   file
; char *           Stack[0x8]:4   format
;
; XREF[1]:
;   FUN_10001200 at 10001260
;
; Called Functions:
;   crt_stdio.c__ftbuf_FUN_10005f00
;   crt_stdio.c__output_FUN_10005f40
;   crt_stdio.c__stbuf_FUN_10005e60
;   crt_thread.c__lock_file_FUN_10005a30
;   crt_thread.c__unlock_file_FUN_10005aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 100054d0
        ;   Label: crt_stdio.c_fprintf_FUN_100054d0
    PUSH ESI                            ; 100054d1
    MOV ESI,dword ptr [ESP + 0xc]       ; 100054d2
    PUSH EDI                            ; 100054d6
    PUSH ESI                            ; 100054d7
    CALL crt_thread.c__lock_file_FUN_10005a30 ; 100054d8
        ;   XREF to: 10005a30 (UNCONDITIONAL_CALL)  ; void crt_thread.c__lock_file_FUN_10005a30(FILE * file)
    ADD ESP,0x4                         ; 100054dd
    PUSH ESI                            ; 100054e0
    CALL crt_stdio.c__stbuf_FUN_10005e60 ; 100054e1
        ;   XREF to: 10005e60 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__stbuf_FUN_10005e60(FILE * file)
    MOV ECX,dword ptr [ESP + 0x18]      ; 100054e6
    ADD ESP,0x4                         ; 100054ea
    MOV EDI,EAX                         ; 100054ed
    LEA EAX,[ESP + 0x18]                ; 100054ef
    PUSH EAX                            ; 100054f3
    PUSH ECX                            ; 100054f4
    PUSH ESI                            ; 100054f5
    CALL crt_stdio.c__output_FUN_10005f40 ; 100054f6
        ;   XREF to: 10005f40 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__output_FUN_10005f40(FILE * file_handle, char * fmt, va_list args)
    ADD ESP,0xc                         ; 100054fb
    MOV EBX,EAX                         ; 100054fe
    PUSH ESI                            ; 10005500
    PUSH EDI                            ; 10005501
    CALL crt_stdio.c__ftbuf_FUN_10005f00 ; 10005502
        ;   XREF to: 10005f00 (UNCONDITIONAL_CALL)  ; void crt_stdio.c__ftbuf_FUN_10005f00(int flag, FILE * file)
    ADD ESP,0x8                         ; 10005507
    PUSH ESI                            ; 1000550a
    CALL crt_thread.c__unlock_file_FUN_10005aa0 ; 1000550b
        ;   XREF to: 10005aa0 (UNCONDITIONAL_CALL)  ; void crt_thread.c__unlock_file_FUN_10005aa0(FILE * file)
    ADD ESP,0x4                         ; 10005510
    MOV EAX,EBX                         ; 10005513
    POP EDI                             ; 10005515
    POP ESI                             ; 10005516
    POP EBX                             ; 10005517
    RET                                 ; 10005518

