; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_io_c__read_FUN_1000b6a0(int fh,void *buf,uint cnt)
;
; Parameters:
; int              Stack[0x4]:4   fh
; void *           Stack[0x8]:4   buf
; uint             Stack[0xc]:4   cnt
;
; Referenced Globals:
;   undefined4 DAT_10241870
;   undefined4 DAT_10241970
;
; Called Functions:
;   crt_errno.c___doserrno_FUN_10008a30
;   crt_errno.c__errno_FUN_10008a20
;   crt_io.c__lock_fhandle_FUN_10008de0
;   crt_io.c__read_lk_FUN_1000b720
;   crt_io.c__unlock_fhandle_FUN_10008e50
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 1000b6a0
        ;   Label: crt_io.c__read_FUN_1000b6a0
    PUSH EDI                            ; 1000b6a1
    MOV ESI,dword ptr [ESP + 0xc]       ; 1000b6a2
    CMP ESI,dword ptr [0x10241970]      ; 1000b6a6 | DAT_10241970
    JNC 0x1000b6fa                      ; 1000b6ac
        ;   XREF to: 1000b6fa (CONDITIONAL_JUMP)  ; LAB_1000b6fa
    MOV EAX,ESI                         ; 1000b6ae
    MOV ECX,ESI                         ; 1000b6b0
    AND EAX,0xffffffe7                  ; 1000b6b2
    AND ECX,0x1f                        ; 1000b6b5
    SAR EAX,0x3                         ; 1000b6b8
    SHL ECX,0x2                         ; 1000b6bb
    MOV EDX,dword ptr [EAX + 0x10241870] ; 1000b6be | DAT_10241870
    LEA EAX,[ECX + ECX*0x8]             ; 1000b6c4
    TEST byte ptr [EDX + EAX*0x1 + 0x4],0x1 ; 1000b6c7
    JZ 0x1000b6fa                       ; 1000b6cc
        ;   XREF to: 1000b6fa (CONDITIONAL_JUMP)  ; LAB_1000b6fa
    PUSH ESI                            ; 1000b6ce
    CALL crt_io.c__lock_fhandle_FUN_10008de0 ; 1000b6cf
        ;   XREF to: 10008de0 (UNCONDITIONAL_CALL)  ; int crt_io.c__lock_fhandle_FUN_10008de0(int filehandle)
    MOV EAX,dword ptr [ESP + 0x18]      ; 1000b6d4
    MOV ECX,dword ptr [ESP + 0x14]      ; 1000b6d8
    ADD ESP,0x4                         ; 1000b6dc
    PUSH EAX                            ; 1000b6df
    PUSH ECX                            ; 1000b6e0
    PUSH ESI                            ; 1000b6e1
    CALL crt_io.c__read_lk_FUN_1000b720 ; 1000b6e2
        ;   XREF to: 1000b720 (UNCONDITIONAL_CALL)  ; int crt_io.c__read_lk_FUN_1000b720(int fh, void * buf, uint cnt)
    ADD ESP,0xc                         ; 1000b6e7
    MOV EDI,EAX                         ; 1000b6ea
    PUSH ESI                            ; 1000b6ec
    CALL crt_io.c__unlock_fhandle_FUN_10008e50 ; 1000b6ed
        ;   XREF to: 10008e50 (UNCONDITIONAL_CALL)  ; void crt_io.c__unlock_fhandle_FUN_10008e50(int filehandle)
    ADD ESP,0x4                         ; 1000b6f2
    MOV EAX,EDI                         ; 1000b6f5
    POP EDI                             ; 1000b6f7
    POP ESI                             ; 1000b6f8
    RET                                 ; 1000b6f9
    CALL crt_errno.c__errno_FUN_10008a20 ; 1000b6fa
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; int * crt_errno.c__errno_FUN_10008a20()
        ;   Label: LAB_1000b6fa
    MOV dword ptr [EAX],0x9             ; 1000b6ff
    CALL crt_errno.c___doserrno_FUN_10008a30 ; 1000b705
        ;   XREF to: 10008a30 (UNCONDITIONAL_CALL)  ; ulong * crt_errno.c___doserrno_FUN_10008a30()
    POP EDI                             ; 1000b70a
    MOV dword ptr [EAX],0x0             ; 1000b70b
    MOV EAX,0xffffffff                  ; 1000b711
    POP ESI                             ; 1000b716
    RET                                 ; 1000b717

