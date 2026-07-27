; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_memory_c_malloc_FUN_005635b0(undefined4 param_1)
;
;
; XREF[49]:
;   FUN_00568560 at 005685a1
;   FUN_00568ed0 at 00568f10
;   FUN_0056c5f0 at 0056c631
;   FUN_0056ddf0 at 0056de2b
;   FUN_0056e890 at 0056e8c9
;   FUN_0056e940 at 0056e95d
;   FUN_0056e990 at 0056e9a8
;   FUN_00571ee0 at 00571ee5
;   FUN_00573930 at 00573986
;   FUN_00573afc at 00573b5f
;   ... and 39 more
;
; Called Functions:
;   crt_unknown.c_FUN_005635c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005635b0
        ;   Label: crt_memory.c_malloc_FUN_005635b0
    PUSH EDX                            ; 005635b4
    CALL crt_unknown.c_FUN_005635c0     ; 005635b5
        ;   XREF to: 005635c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005635c0()
    ADD ESP,0x4                         ; 005635ba
    RET                                 ; 005635bd

