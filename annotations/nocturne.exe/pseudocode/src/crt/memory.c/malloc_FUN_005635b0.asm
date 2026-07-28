; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_memory_c_malloc_FUN_005635b0(ulong size)
;
; Parameters:
; ulong            Stack[0x4]:4   size
;
; XREF[49]:
;   FUN_00568ed0 at 00568f10
;   FUN_0056ddf0 at 0056de2b
;   FUN_0056e890 at 0056e8c9
;   FUN_0056e940 at 0056e95d
;   FUN_0056e990 at 0056e9a8
;   FUN_00571ee0 at 00571ee5
;   FUN_005740b0 at 00574100
;   FUN_00574264 at 005742d7
;   FUN_00574570 at 005745a8
;   FUN_00574680 at 005746ab
;   ... and 39 more
;
; Called Functions:
;   crt_unknown.c_InternalHeapAlloc_FUN_005635c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005635b0
        ;   Label: crt_memory.c_malloc_FUN_005635b0
    PUSH EDX                            ; 005635b4
    CALL crt_unknown.c_InternalHeapAlloc_FUN_005635c0 ; 005635b5
        ;   XREF to: 005635c0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_InternalHeapAlloc_FUN_005635c0(ulong size)
    ADD ESP,0x4                         ; 005635ba
    RET                                 ; 005635bd

