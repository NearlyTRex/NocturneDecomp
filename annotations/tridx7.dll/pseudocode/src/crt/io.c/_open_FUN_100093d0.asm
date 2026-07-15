; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_io_c__open_FUN_100093d0(char *filename,int oflag)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; int              Stack[0x8]:4   oflag
;
; Called Functions:
;   crt_io.c__sopen_FUN_100093f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 100093d0
        ;   Label: crt_io.c__open_FUN_100093d0
    MOV ECX,dword ptr [ESP + 0x8]       ; 100093d4
    MOV EDX,dword ptr [ESP + 0x4]       ; 100093d8
    PUSH EAX                            ; 100093dc
    PUSH 0x40                           ; 100093dd
    PUSH ECX                            ; 100093df
    PUSH EDX                            ; 100093e0
    CALL crt_io.c__sopen_FUN_100093f0   ; 100093e1
        ;   XREF to: 100093f0 (UNCONDITIONAL_CALL)  ; int crt_io.c__sopen_FUN_100093f0(char * path, int oflag, int shflag, int pmode)
    ADD ESP,0x10                        ; 100093e6
    RET                                 ; 100093e9

