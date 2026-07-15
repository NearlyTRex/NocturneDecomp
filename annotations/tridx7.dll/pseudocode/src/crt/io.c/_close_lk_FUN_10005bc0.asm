; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_io_c__close_lk_FUN_10005bc0(int fh)
;
; Parameters:
; int              Stack[0x4]:4   fh
;
; XREF[1]:
;   crt_io.c__close_FUN_10005b50 at 10005b88
;
; Referenced Globals:
;   undefined4 DAT_10241870
;   void* PTR_GetLastError_102421c8 = 00242418
;   void* PTR_CloseHandle_102421cc = 00242428
;
; Called Functions:
;   CloseHandle
;   crt_errno.c__dosmaperr_FUN_100089a0
;   crt_io.c__free_osfhnd_FUN_10008c30
;   crt_io.c__get_osfhandle_FUN_10008cd0
;   GetLastError
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 10005bc0
        ;   Label: crt_io.c__close_lk_FUN_10005bc0
    PUSH EDI                            ; 10005bc1
    MOV ESI,dword ptr [ESP + 0xc]       ; 10005bc2
    CMP ESI,0x1                         ; 10005bc6
    JZ 0x10005bd0                       ; 10005bc9
        ;   XREF to: 10005bd0 (CONDITIONAL_JUMP)  ; LAB_10005bd0
    CMP ESI,0x2                         ; 10005bcb
    JNZ 0x10005bea                      ; 10005bce
        ;   XREF to: 10005bea (CONDITIONAL_JUMP)  ; LAB_10005bea
    PUSH 0x2                            ; 10005bd0
        ;   Label: LAB_10005bd0
    CALL crt_io.c__get_osfhandle_FUN_10008cd0 ; 10005bd2
        ;   XREF to: 10008cd0 (UNCONDITIONAL_CALL)  ; intptr_t crt_io.c__get_osfhandle_FUN_10008cd0(int fh)
    ADD ESP,0x4                         ; 10005bd7
    MOV EDI,EAX                         ; 10005bda
    PUSH 0x1                            ; 10005bdc
    CALL crt_io.c__get_osfhandle_FUN_10008cd0 ; 10005bde
        ;   XREF to: 10008cd0 (UNCONDITIONAL_CALL)  ; intptr_t crt_io.c__get_osfhandle_FUN_10008cd0(int fh)
    ADD ESP,0x4                         ; 10005be3
    CMP EDI,EAX                         ; 10005be6
    JZ 0x10005c08                       ; 10005be8
        ;   XREF to: 10005c08 (CONDITIONAL_JUMP)  ; LAB_10005c08
    PUSH ESI                            ; 10005bea
        ;   Label: LAB_10005bea
    CALL crt_io.c__get_osfhandle_FUN_10008cd0 ; 10005beb
        ;   XREF to: 10008cd0 (UNCONDITIONAL_CALL)  ; intptr_t crt_io.c__get_osfhandle_FUN_10008cd0(int fh)
    ADD ESP,0x4                         ; 10005bf0
    PUSH EAX                            ; 10005bf3
    CALL dword ptr [0x102421cc]         ; 10005bf4 | PTR_CloseHandle_102421cc
    TEST EAX,EAX                        ; 10005bfa
    JNZ 0x10005c08                      ; 10005bfc
        ;   XREF to: 10005c08 (CONDITIONAL_JUMP)  ; LAB_10005c08
    CALL dword ptr [0x102421c8]         ; 10005bfe | PTR_GetLastError_102421c8
    MOV EDI,EAX                         ; 10005c04
    JMP 0x10005c0a                      ; 10005c06
        ;   XREF to: 10005c0a (UNCONDITIONAL_JUMP)  ; LAB_10005c0a
    XOR EDI,EDI                         ; 10005c08
        ;   Label: LAB_10005c08
    PUSH ESI                            ; 10005c0a
        ;   Label: LAB_10005c0a
    CALL crt_io.c__free_osfhnd_FUN_10008c30 ; 10005c0b
        ;   XREF to: 10008c30 (UNCONDITIONAL_CALL)  ; int crt_io.c__free_osfhnd_FUN_10008c30(int fh)
    ADD ESP,0x4                         ; 10005c10
    TEST EDI,EDI                        ; 10005c13
    JZ 0x10005c28                       ; 10005c15
        ;   XREF to: 10005c28 (CONDITIONAL_JUMP)  ; LAB_10005c28
    PUSH EDI                            ; 10005c17
    CALL crt_errno.c__dosmaperr_FUN_100089a0 ; 10005c18
        ;   XREF to: 100089a0 (UNCONDITIONAL_CALL)  ; void crt_errno.c__dosmaperr_FUN_100089a0(ulong oserrno)
    ADD ESP,0x4                         ; 10005c1d
    MOV EAX,0xffffffff                  ; 10005c20
    POP EDI                             ; 10005c25
    POP ESI                             ; 10005c26
    RET                                 ; 10005c27
    MOV EAX,ESI                         ; 10005c28
        ;   Label: LAB_10005c28
    AND ESI,0x1f                        ; 10005c2a
    SHL ESI,0x2                         ; 10005c2d
    AND EAX,0xffffffe7                  ; 10005c30
    SAR EAX,0x3                         ; 10005c33
    POP EDI                             ; 10005c36
    MOV ECX,dword ptr [EAX + 0x10241870] ; 10005c37 | DAT_10241870
    LEA EAX,[ESI + ESI*0x8]             ; 10005c3d
    POP ESI                             ; 10005c40
    MOV byte ptr [ECX + EAX*0x1 + 0x4],0x0 ; 10005c41
    XOR EAX,EAX                         ; 10005c46
    RET                                 ; 10005c48

