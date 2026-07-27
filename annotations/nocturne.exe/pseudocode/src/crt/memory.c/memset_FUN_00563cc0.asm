; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl crt_memory_c_memset_FUN_00563cc0(undefined4 param_1)
;
;
; XREF[96]:
;   FUN_00567c2c at 00567c3c
;   FUN_00568560 at 005685de
;   FUN_0056aa38 at 0056ab05
;   FUN_0056c864 at 0056c977
;   FUN_00570ce0 at 00570d3a
;   FUN_00570f60 at 00571020
;   FUN_00572f40 at 00572fae
;   FUN_00573afc at 00573c26
;   FUN_00573e30 at 00573e6a
;   FUN_00574264 at 0057438d
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

