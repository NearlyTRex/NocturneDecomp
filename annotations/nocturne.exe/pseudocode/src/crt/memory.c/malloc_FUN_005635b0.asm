; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_memory_c_malloc_FUN_005635b0(undefined4 param_1)
;
;
; XREF[37]:
;   FUN_00401010 at 004010fb
;   FUN_004303d0 at 004303ff
;   FUN_004a57c0 at 004a59b9
;   FUN_004e7ed0 at 004e7f4b
;   FUN_004f7ae0 at 004f7c42
;   FUN_004fee30 at 004feeec
;   FUN_00552b40 at 00552b67
;   FUN_0056497c at 00564987
;   FUN_00565c50 at 00565c5b
;   FUN_00568560 at 005685a1
;   ... and 27 more
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

