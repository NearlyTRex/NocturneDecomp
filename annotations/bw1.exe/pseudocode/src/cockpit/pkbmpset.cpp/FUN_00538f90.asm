; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbmpset_cpp_FUN_00538f90(void)
;
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00538480
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_005389c0
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_00538900
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_00538930
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00538990
;   crt_unknown.c_sprintf_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538f90
        ;   Label: cockpit_pkbmpset.cpp_FUN_00538f90
    PUSH ESI                            ; 00538f91
    PUSH EDI                            ; 00538f92
    PUSH EBP                            ; 00538f93
    SUB ESP,0x64                        ; 00538f94
    MOV EDI,dword ptr [ESP + 0x78]      ; 00538f97
    MOV ESI,dword ptr [ESP + 0x80]      ; 00538f9b
    MOV EBP,dword ptr [ESP + 0x84]      ; 00538fa2
    PUSH EDI                            ; 00538fa9
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00538990 ; 00538faa
        ;   XREF to: 00538990 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00538990(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 00538faf
    PUSH EDI                            ; 00538fb2
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_00538900 ; 00538fb3
        ;   XREF to: 00538900 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_00538900(CPackedBitmapSet * this_ptr)
    MOV EAX,EBP                         ; 00538fb8
    SUB EAX,ESI                         ; 00538fba
    ADD ESP,0x4                         ; 00538fbc
    INC EAX                             ; 00538fbf
    PUSH EAX                            ; 00538fc0
    PUSH EDI                            ; 00538fc1
    MOV EBX,ESI                         ; 00538fc2
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_005389c0 ; 00538fc4
        ;   XREF to: 005389c0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_005389c0(CPackedBitmapSet * this_ptr, int bitmap_count)
    ADD ESP,0x8                         ; 00538fc9
    CMP ESI,EBP                         ; 00538fcc
    JG 0x00539020                       ; 00538fce
        ;   XREF to: 00539020 (CONDITIONAL_JUMP)  ; LAB_00539020
    LEA EAX,[ESI*0x8 + 0x0]             ; 00538fd0
    ADD EAX,ESI                         ; 00538fd7
    SHL EAX,0x2                         ; 00538fd9
    MOV ESI,EAX                         ; 00538fdc
    NEG ESI                             ; 00538fde
    ADD ESI,EAX                         ; 00538fe0
    PUSH EBX                            ; 00538fe2
        ;   Label: LAB_00538fe2
    MOV EDX,dword ptr [ESP + 0x80]      ; 00538fe3
    PUSH EDX                            ; 00538fea
    LEA EAX,[ESP + 0x8]                 ; 00538feb
    PUSH EAX                            ; 00538fef
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00538ff0
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 00538ff5
    MOV ECX,dword ptr [ESP + 0x88]      ; 00538ff8
    PUSH ECX                            ; 00538fff
    LEA EAX,[ESP + 0x4]                 ; 00539000
    PUSH EAX                            ; 00539004
    MOV EAX,dword ptr [EDI + 0x4]       ; 00539005
    ADD EAX,ESI                         ; 00539008
    PUSH EAX                            ; 0053900a
    INC EBX                             ; 0053900b
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00538480 ; 0053900c
        ;   XREF to: 00538480 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00538480(CPackedBitmap * this_ptr, char * filename, int apply_palette_flag)
    ADD ESI,0x24                        ; 00539011
    ADD ESP,0xc                         ; 00539014
    CMP EBX,EBP                         ; 00539017
    JLE 0x00538fe2                      ; 00539019
        ;   XREF to: 00538fe2 (CONDITIONAL_JUMP)  ; LAB_00538fe2
    LEA EAX,[EAX]                       ; 0053901b
    MOV ECX,ECX                         ; 0053901e
    PUSH EDI                            ; 00539020
        ;   Label: LAB_00539020
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_00538930 ; 00539021
        ;   XREF to: 00538930 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_00538930(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 00539026
    ADD ESP,0x64                        ; 00539029
    POP EBP                             ; 0053902c
    POP EDI                             ; 0053902d
    POP ESI                             ; 0053902e
    POP EBX                             ; 0053902f
    RET                                 ; 00539030

