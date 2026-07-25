; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl crt_memory_c_memset_FUN_00563cc0(undefined4 param_1)
;
;
; XREF[96]:
;   FUN_0040bd40 at 0040bd4e
;   FUN_0040bd90 at 0040be07
;   FUN_00418630 at 0041870f
;   FUN_004219f0 at 00421a15
;   FUN_00475470 at 004754a9
;   FUN_004b46d0 at 004b471b
;   FUN_004baba0 at 004babe3
;   FUN_004f2990 at 004f29ca
;   FUN_004f5290 at 004f52b7
;   FUN_00514470 at 00514486
;   ... and 86 more
;
; Called Functions:
;   FUN_0056a0c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00563cc0
        ;   Label: crt_memory.c_memset_FUN_00563cc0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00563cc4
    MOV ECX,dword ptr [ESP + 0xc]       ; 00563cc8
    PUSH EAX                            ; 00563ccc
    MOV DH,DL                           ; 00563ccd
    SHL EDX,0x8                         ; 00563ccf
    MOV DL,DH                           ; 00563cd2
    SHL EDX,0x8                         ; 00563cd4
    MOV DL,DH                           ; 00563cd7
    CALL FUN_0056a0c0                   ; 00563cd9
        ;   XREF to: 0056a0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056a0c0()
    POP EAX                             ; 00563cde
    RET                                 ; 00563cdf

