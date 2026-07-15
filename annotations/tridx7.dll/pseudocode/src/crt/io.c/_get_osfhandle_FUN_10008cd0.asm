; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; intptr_t __cdecl crt_io_c__get_osfhandle_FUN_10008cd0(int fh)
;
; Parameters:
; int              Stack[0x4]:4   fh
;
; XREF[4]:
;   crt_io.c__chsize_lk_FUN_1000b560 at 1000b632
;   crt_io.c__close_lk_FUN_10005bc0 at 10005bd2
;   crt_io.c__commit_FUN_10008e80 at 10008ec9
;   crt_io.c__lseek_lk_FUN_1000a670 at 1000a677
;
; Referenced Globals:
;   undefined4 DAT_10241870
;   undefined4 DAT_10241970
;
; Called Functions:
;   crt_errno.c___doserrno_FUN_10008a30
;   crt_errno.c__errno_FUN_10008a20
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 10008cd0
        ;   Label: crt_io.c__get_osfhandle_FUN_10008cd0
    CMP dword ptr [0x10241970],ECX      ; 10008cd4 | DAT_10241970
    JBE 0x10008cfe                      ; 10008cda
        ;   XREF to: 10008cfe (CONDITIONAL_JUMP)  ; LAB_10008cfe
    MOV EAX,ECX                         ; 10008cdc
    AND ECX,0x1f                        ; 10008cde
    SHL ECX,0x2                         ; 10008ce1
    AND EAX,0xffffffe7                  ; 10008ce4
    SAR EAX,0x3                         ; 10008ce7
    LEA EDX,[ECX + ECX*0x8]             ; 10008cea
    MOV EAX,dword ptr [EAX + 0x10241870] ; 10008ced | DAT_10241870
    ADD EAX,EDX                         ; 10008cf3
    TEST byte ptr [EAX + 0x4],0x1       ; 10008cf5
    JZ 0x10008cfe                       ; 10008cf9
        ;   XREF to: 10008cfe (CONDITIONAL_JUMP)  ; LAB_10008cfe
    MOV EAX,dword ptr [EAX]             ; 10008cfb
    RET                                 ; 10008cfd
    CALL crt_errno.c__errno_FUN_10008a20 ; 10008cfe
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; int * crt_errno.c__errno_FUN_10008a20()
        ;   Label: LAB_10008cfe
    MOV dword ptr [EAX],0x9             ; 10008d03
    CALL crt_errno.c___doserrno_FUN_10008a30 ; 10008d09
        ;   XREF to: 10008a30 (UNCONDITIONAL_CALL)  ; ulong * crt_errno.c___doserrno_FUN_10008a30()
    MOV dword ptr [EAX],0x0             ; 10008d0e
    MOV EAX,0xffffffff                  ; 10008d14
    RET                                 ; 10008d19

