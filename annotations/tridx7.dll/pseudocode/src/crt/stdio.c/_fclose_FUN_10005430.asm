; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c__fclose_FUN_10005430(_FILE *file)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file
;
; XREF[3]:
;   APIDLLsetVideoMode at 1000268c
;   FUN_10001200 at 100012c9
;   crt_stdio.c___endstdio_FUN_1000ab70 at 1000abab
;
; Called Functions:
;   crt_stdio.c__fclose_lk_FUN_10005470
;   crt_thread.c__lock_file_FUN_10005a30
;   crt_thread.c__unlock_file_FUN_10005aa0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 10005430
        ;   Label: crt_stdio.c__fclose_FUN_10005430
    PUSH EDI                            ; 10005431
    MOV EDI,0xffffffff                  ; 10005432
    MOV ESI,dword ptr [ESP + 0xc]       ; 10005437
    TEST byte ptr [ESI + 0xc],0x40      ; 1000543b
    JZ 0x1000544d                       ; 1000543f
        ;   XREF to: 1000544d (CONDITIONAL_JUMP)  ; LAB_1000544d
    MOV dword ptr [ESI + 0xc],0x0       ; 10005441
    MOV EAX,EDI                         ; 10005448
    POP EDI                             ; 1000544a
    POP ESI                             ; 1000544b
    RET                                 ; 1000544c
    PUSH ESI                            ; 1000544d
        ;   Label: LAB_1000544d
    CALL crt_thread.c__lock_file_FUN_10005a30 ; 1000544e
        ;   XREF to: 10005a30 (UNCONDITIONAL_CALL)  ; void crt_thread.c__lock_file_FUN_10005a30(_FILE * file)
    ADD ESP,0x4                         ; 10005453
    PUSH ESI                            ; 10005456
    CALL crt_stdio.c__fclose_lk_FUN_10005470 ; 10005457
        ;   XREF to: 10005470 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__fclose_lk_FUN_10005470(_FILE * file)
    ADD ESP,0x4                         ; 1000545c
    MOV EDI,EAX                         ; 1000545f
    PUSH ESI                            ; 10005461
    CALL crt_thread.c__unlock_file_FUN_10005aa0 ; 10005462
        ;   XREF to: 10005aa0 (UNCONDITIONAL_CALL)  ; void crt_thread.c__unlock_file_FUN_10005aa0(_FILE * file)
    ADD ESP,0x4                         ; 10005467
    MOV EAX,EDI                         ; 1000546a
    POP EDI                             ; 1000546c
    POP ESI                             ; 1000546d
    RET                                 ; 1000546e

