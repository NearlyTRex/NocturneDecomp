; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_memory_c_realloc_FUN_00564a70(undefined4 param_1,undefined4 param_2)
;
;
; XREF[25]:
;   FUN_00430630 at 0043105f
;   FUN_00474230 at 0047428e
;   FUN_004f49d8 at 004f49dd
;   FUN_004f7ae0 at 004f7fb4
;   FUN_004fee30 at 004fee9a
;   FUN_0056e010 at 0056e062
;   FUN_0056e09c at 0056e110
;   FUN_0056e254 at 0056e2b2
;   FUN_005711a8 at 005711df
;   FUN_00573afc at 00573c32
;   ... and 15 more
;
; Called Functions:
;   FUN_00564a88
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564a70
        ;   Label: crt_memory.c_realloc_FUN_00564a70
    MOV EDX,dword ptr [ESP + 0xc]       ; 00564a71
    PUSH EDX                            ; 00564a75
    MOV EBX,dword ptr [ESP + 0xc]       ; 00564a76
    PUSH EBX                            ; 00564a7a
    CALL FUN_00564a88                   ; 00564a7b
        ;   XREF to: 00564a88 (UNCONDITIONAL_CALL)  ; undefined FUN_00564a88()
    ADD ESP,0x8                         ; 00564a80
    POP EBX                             ; 00564a83
    RET                                 ; 00564a84

