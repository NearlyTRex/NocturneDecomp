; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_io_c__lock_fhandle_FUN_10008de0(int filehandle)
;
; Parameters:
; int              Stack[0x4]:4   filehandle
;
; XREF[8]:
;   crt_io.c__alloc_osfhnd_FUN_10008a40 at 10008b62
;   crt_io.c__chsize_FUN_1000b4f0 at 1000b51f
;   crt_io.c__close_FUN_10005b50 at 10005b7f
;   crt_io.c__commit_FUN_10008e80 at 10008eb2
;   crt_io.c__read_FUN_1000b6a0 at 1000b6cf
;   crt_io.c__setmode_FUN_1000e810 at 1000e83f
;   crt_io.c__write_FUN_10008f30 at 10008f5f
;   crt_io.c__write_dup_FUN_1000a5f0 at 1000a61f
;
; Referenced Globals:
;   undefined4 DAT_10241870
;   void* PTR_InitializeCriticalSection_102421b0 = 00242398
;   void* PTR_EnterCriticalSection_102421b8 = 002423cc
;
; Called Functions:
;   crt_thread.c__lock_FUN_100059a0
;   crt_thread.c__unlock_FUN_10005a10
;   EnterCriticalSection
;   InitializeCriticalSection
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 10008de0
        ;   Label: crt_io.c__lock_fhandle_FUN_10008de0
    PUSH EBX                            ; 10008de4
    PUSH ESI                            ; 10008de5
    MOV ECX,EAX                         ; 10008de6
    PUSH EDI                            ; 10008de8
    AND ECX,0xffffffe7                  ; 10008de9
    SAR ECX,0x3                         ; 10008dec
    AND EAX,0x1f                        ; 10008def
    SHL EAX,0x2                         ; 10008df2
    LEA EDI,[ECX + 0x10241870]          ; 10008df5 | DAT_10241870
    LEA ESI,[EAX + EAX*0x8]             ; 10008dfb
    MOV EBX,dword ptr [EDI]             ; 10008dfe | DAT_10241870
    ADD EBX,ESI                         ; 10008e00
    CMP dword ptr [EBX + 0x8],0x0       ; 10008e02
    JNZ 0x10008e2f                      ; 10008e06
        ;   XREF to: 10008e2f (CONDITIONAL_JUMP)  ; LAB_10008e2f
    PUSH 0x11                           ; 10008e08
    CALL crt_thread.c__lock_FUN_100059a0 ; 10008e0a
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void crt_thread.c__lock_FUN_100059a0(int file)
    ADD ESP,0x4                         ; 10008e0f
    CMP dword ptr [EBX + 0x8],0x0       ; 10008e12
    JNZ 0x10008e25                      ; 10008e16
        ;   XREF to: 10008e25 (CONDITIONAL_JUMP)  ; LAB_10008e25
    LEA EAX,[EBX + 0xc]                 ; 10008e18
    PUSH EAX                            ; 10008e1b
    CALL dword ptr [0x102421b0]         ; 10008e1c | PTR_InitializeCriticalSection_102421b0
    INC dword ptr [EBX + 0x8]           ; 10008e22
    PUSH 0x11                           ; 10008e25
        ;   Label: LAB_10008e25
    CALL crt_thread.c__unlock_FUN_10005a10 ; 10008e27
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; void crt_thread.c__unlock_FUN_10005a10(int locknum)
    ADD ESP,0x4                         ; 10008e2c
    MOV EAX,dword ptr [EDI]             ; 10008e2f | DAT_10241870
        ;   Label: LAB_10008e2f
    ADD EAX,ESI                         ; 10008e31
    ADD EAX,0xc                         ; 10008e33
    PUSH EAX                            ; 10008e36
    CALL dword ptr [0x102421b8]         ; 10008e37 | PTR_EnterCriticalSection_102421b8
    POP EDI                             ; 10008e3d
    POP ESI                             ; 10008e3e
    POP EBX                             ; 10008e3f
    RET                                 ; 10008e40

