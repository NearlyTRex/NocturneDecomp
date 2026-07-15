; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_io_c__commit_FUN_10008e80(int fh)
;
; Parameters:
; int              Stack[0x4]:4   fh
;
; XREF[1]:
;   crt_stdio.c__fflush_lk_FUN_10005cd0 at 10005cf3
;
; Referenced Globals:
;   undefined4 DAT_10241870
;   undefined4 DAT_10241970
;   void* PTR_GetLastError_102421c8 = 00242418
;   void* PTR_FlushFileBuffers_10242240 = 0024261a
;
; Called Functions:
;   crt_errno.c___doserrno_FUN_10008a30
;   crt_errno.c__errno_FUN_10008a20
;   crt_io.c__get_osfhandle_FUN_10008cd0
;   crt_io.c__lock_fhandle_FUN_10008de0
;   crt_io.c__unlock_fhandle_FUN_10008e50
;   FlushFileBuffers
;   GetLastError
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 10008e80
        ;   Label: crt_io.c__commit_FUN_10008e80
    PUSH ESI                            ; 10008e81
    MOV ESI,dword ptr [ESP + 0xc]       ; 10008e82
    PUSH EDI                            ; 10008e86
    CMP ESI,dword ptr [0x10241970]      ; 10008e87 | DAT_10241970
    JNC 0x10008f0e                      ; 10008e8d
        ;   XREF to: 10008f0e (CONDITIONAL_JUMP)  ; LAB_10008f0e
    MOV EAX,ESI                         ; 10008e8f
    AND EAX,0xffffffe7                  ; 10008e91
    SAR EAX,0x3                         ; 10008e94
    LEA EBX,[EAX + 0x10241870]          ; 10008e97 | DAT_10241870
    MOV EAX,ESI                         ; 10008e9d
    AND EAX,0x1f                        ; 10008e9f
    MOV ECX,dword ptr [EBX]             ; 10008ea2 | DAT_10241870
    SHL EAX,0x2                         ; 10008ea4
    LEA EDI,[EAX + EAX*0x8]             ; 10008ea7
    TEST byte ptr [ECX + EDI*0x1 + 0x4],0x1 ; 10008eaa
    JZ 0x10008f0e                       ; 10008eaf
        ;   XREF to: 10008f0e (CONDITIONAL_JUMP)  ; LAB_10008f0e
    PUSH ESI                            ; 10008eb1
    CALL crt_io.c__lock_fhandle_FUN_10008de0 ; 10008eb2
        ;   XREF to: 10008de0 (UNCONDITIONAL_CALL)  ; int crt_io.c__lock_fhandle_FUN_10008de0(int filehandle)
    ADD ESP,0x4                         ; 10008eb7
    MOV EAX,dword ptr [EBX]             ; 10008eba | DAT_10241870
    TEST byte ptr [EAX + EDI*0x1 + 0x4],0x1 ; 10008ebc
    JZ 0x10008eef                       ; 10008ec1
        ;   XREF to: 10008eef (CONDITIONAL_JUMP)  ; LAB_10008eef
    PUSH ESI                            ; 10008ec3
    MOV EDI,0x0                         ; 10008ec4
    CALL crt_io.c__get_osfhandle_FUN_10008cd0 ; 10008ec9
        ;   XREF to: 10008cd0 (UNCONDITIONAL_CALL)  ; intptr_t crt_io.c__get_osfhandle_FUN_10008cd0(int fh)
    ADD ESP,0x4                         ; 10008ece
    PUSH EAX                            ; 10008ed1
    CALL dword ptr [0x10242240]         ; 10008ed2 | PTR_FlushFileBuffers_10242240
    TEST EAX,EAX                        ; 10008ed8
    JNZ 0x10008ee4                      ; 10008eda
        ;   XREF to: 10008ee4 (CONDITIONAL_JUMP)  ; LAB_10008ee4
    CALL dword ptr [0x102421c8]         ; 10008edc | PTR_GetLastError_102421c8
    MOV EDI,EAX                         ; 10008ee2
    TEST EDI,EDI                        ; 10008ee4
        ;   Label: LAB_10008ee4
    JZ 0x10008eff                       ; 10008ee6
        ;   XREF to: 10008eff (CONDITIONAL_JUMP)  ; LAB_10008eff
    CALL crt_errno.c___doserrno_FUN_10008a30 ; 10008ee8
        ;   XREF to: 10008a30 (UNCONDITIONAL_CALL)  ; ulong * crt_errno.c___doserrno_FUN_10008a30()
    MOV dword ptr [EAX],EDI             ; 10008eed
    MOV EDI,0xffffffff                  ; 10008eef
        ;   Label: LAB_10008eef
    CALL crt_errno.c__errno_FUN_10008a20 ; 10008ef4
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; int * crt_errno.c__errno_FUN_10008a20()
    MOV dword ptr [EAX],0x9             ; 10008ef9
    PUSH ESI                            ; 10008eff
        ;   Label: LAB_10008eff
    CALL crt_io.c__unlock_fhandle_FUN_10008e50 ; 10008f00
        ;   XREF to: 10008e50 (UNCONDITIONAL_CALL)  ; void crt_io.c__unlock_fhandle_FUN_10008e50(int filehandle)
    ADD ESP,0x4                         ; 10008f05
    MOV EAX,EDI                         ; 10008f08
    POP EDI                             ; 10008f0a
    POP ESI                             ; 10008f0b
    POP EBX                             ; 10008f0c
    RET                                 ; 10008f0d
    CALL crt_errno.c__errno_FUN_10008a20 ; 10008f0e
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; int * crt_errno.c__errno_FUN_10008a20()
        ;   Label: LAB_10008f0e
    POP EDI                             ; 10008f13
    MOV dword ptr [EAX],0x9             ; 10008f14
    MOV EAX,0xffffffff                  ; 10008f1a
    POP ESI                             ; 10008f1f
    POP EBX                             ; 10008f20
    RET                                 ; 10008f21

