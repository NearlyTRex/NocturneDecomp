; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_memory_c_realloc_FUN_00564a70(undefined4 param_1,undefined4 param_2)
;
;
; XREF[25]:
;   FUN_0056e010 at 0056e062
;   FUN_0056e09c at 0056e110
;   FUN_0056e254 at 0056e2b2
;   FUN_005711a8 at 005711df
;   FUN_00573afc at 00573c32
;   FUN_00574264 at 00574399
;   cockpit_ckptutil.c_FUN_00430630 at 0043105f
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_004f47b0 at 004f48d3
;   cockpit_pkbitmap.cpp_FUN_004f49d8 at 004f49dd
;   core_bodypart.cpp_CBodyPart_setCounts_FUN_00415ee0 at 00415f16
;   ... and 15 more
;
; Called Functions:
;   crt_unknown.c_FUN_00564a88
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564a70
        ;   Label: crt_memory.c_realloc_FUN_00564a70
    MOV EDX,dword ptr [ESP + 0xc]       ; 00564a71
    PUSH EDX                            ; 00564a75
    MOV EBX,dword ptr [ESP + 0xc]       ; 00564a76
    PUSH EBX                            ; 00564a7a
    CALL crt_unknown.c_FUN_00564a88     ; 00564a7b
        ;   XREF to: 00564a88 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564a88()
    ADD ESP,0x8                         ; 00564a80
    POP EBX                             ; 00564a83
    RET                                 ; 00564a84

