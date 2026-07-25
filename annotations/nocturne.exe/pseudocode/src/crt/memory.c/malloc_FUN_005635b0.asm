; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_memory_c_malloc_FUN_005635b0(undefined4 param_1)
;
;
; XREF[49]:
;   FUN_00401010 at 004010fb
;   FUN_0042d180 at 0042d1e2
;   FUN_0042eb90 at 0042ed04
;   FUN_00430210 at 00430312
;   FUN_004303d0 at 004303ff
;   FUN_0044d460 at 0044d47c
;   FUN_004a57c0 at 004a59b9
;   FUN_004e28a0 at 004e28ec
;   FUN_004e7ed0 at 004e7f4b
;   FUN_004f54c0 at 004f55b3
;   ... and 39 more
;
; Called Functions:
;   FUN_005635c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005635b0
        ;   Label: crt_memory.c_malloc_FUN_005635b0
    PUSH EDX                            ; 005635b4
    CALL FUN_005635c0                   ; 005635b5
        ;   XREF to: 005635c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005635c0()
    ADD ESP,0x4                         ; 005635ba
    RET                                 ; 005635bd

