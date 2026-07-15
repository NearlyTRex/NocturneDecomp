; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_io_c__setmode_FUN_1000e810(int fh,int mode)
;
; Parameters:
; int              Stack[0x4]:4   fh
; int              Stack[0x8]:4   mode
;
; Referenced Globals:
;   undefined4 DAT_10241870
;   undefined4 DAT_10241970
;
; Called Functions:
;   crt_errno.c__errno_FUN_10008a20
;   crt_io.c__lock_fhandle_FUN_10008de0
;   crt_io.c__setmode_lk_FUN_1000e880
;   crt_io.c__unlock_fhandle_FUN_10008e50
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 1000e810
        ;   Label: crt_io.c__setmode_FUN_1000e810
    PUSH EDI                            ; 1000e811
    MOV ESI,dword ptr [ESP + 0xc]       ; 1000e812
    CMP ESI,dword ptr [0x10241970]      ; 1000e816 | DAT_10241970
    JNC 0x1000e865                      ; 1000e81c
        ;   XREF to: 1000e865 (CONDITIONAL_JUMP)  ; LAB_1000e865
    MOV EAX,ESI                         ; 1000e81e
    MOV ECX,ESI                         ; 1000e820
    AND EAX,0xffffffe7                  ; 1000e822
    AND ECX,0x1f                        ; 1000e825
    SAR EAX,0x3                         ; 1000e828
    SHL ECX,0x2                         ; 1000e82b
    MOV EDX,dword ptr [EAX + 0x10241870] ; 1000e82e | DAT_10241870
    LEA EAX,[ECX + ECX*0x8]             ; 1000e834
    TEST byte ptr [EDX + EAX*0x1 + 0x4],0x1 ; 1000e837
    JZ 0x1000e865                       ; 1000e83c
        ;   XREF to: 1000e865 (CONDITIONAL_JUMP)  ; LAB_1000e865
    PUSH ESI                            ; 1000e83e
    CALL crt_io.c__lock_fhandle_FUN_10008de0 ; 1000e83f
        ;   XREF to: 10008de0 (UNCONDITIONAL_CALL)  ; int crt_io.c__lock_fhandle_FUN_10008de0(int filehandle)
    MOV EAX,dword ptr [ESP + 0x14]      ; 1000e844
    ADD ESP,0x4                         ; 1000e848
    PUSH EAX                            ; 1000e84b
    PUSH ESI                            ; 1000e84c
    CALL crt_io.c__setmode_lk_FUN_1000e880 ; 1000e84d
        ;   XREF to: 1000e880 (UNCONDITIONAL_CALL)  ; int crt_io.c__setmode_lk_FUN_1000e880(uint fh, int mode)
    ADD ESP,0x8                         ; 1000e852
    MOV EDI,EAX                         ; 1000e855
    PUSH ESI                            ; 1000e857
    CALL crt_io.c__unlock_fhandle_FUN_10008e50 ; 1000e858
        ;   XREF to: 10008e50 (UNCONDITIONAL_CALL)  ; void crt_io.c__unlock_fhandle_FUN_10008e50(int filehandle)
    ADD ESP,0x4                         ; 1000e85d
    MOV EAX,EDI                         ; 1000e860
    POP EDI                             ; 1000e862
    POP ESI                             ; 1000e863
    RET                                 ; 1000e864
    CALL crt_errno.c__errno_FUN_10008a20 ; 1000e865
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; int * crt_errno.c__errno_FUN_10008a20()
        ;   Label: LAB_1000e865
    POP EDI                             ; 1000e86a
    MOV dword ptr [EAX],0x9             ; 1000e86b
    MOV EAX,0xffffffff                  ; 1000e871
    POP ESI                             ; 1000e876
    RET                                 ; 1000e877

