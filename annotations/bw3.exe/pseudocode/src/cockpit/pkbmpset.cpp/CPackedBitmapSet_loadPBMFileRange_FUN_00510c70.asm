; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBMFileRange_FUN_00510c70(CPackedBitmapSet *this_ptr,char *filename_format,int start_index,int end_index,int apply_palette_flag)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename_format
; int              Stack[0xc]:4   start_index
; int              Stack[0x10]:4   end_index
; int              Stack[0x14]:4   apply_palette_flag
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00510160
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_005106a0
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_005105e0
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_00510610
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00510670
;   crt_unknown.c_sprintf_FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510c70
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBMFileRange_FUN_00510c70
    PUSH ESI                            ; 00510c71
    PUSH EDI                            ; 00510c72
    PUSH EBP                            ; 00510c73
    SUB ESP,0x64                        ; 00510c74
    MOV EDI,dword ptr [ESP + 0x78]      ; 00510c77
    MOV ESI,dword ptr [ESP + 0x80]      ; 00510c7b
    MOV EBP,dword ptr [ESP + 0x84]      ; 00510c82
    PUSH EDI                            ; 00510c89
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00510670 ; 00510c8a
        ;   XREF to: 00510670 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00510670(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 00510c8f
    PUSH EDI                            ; 00510c92
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_005105e0 ; 00510c93
        ;   XREF to: 005105e0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_005105e0(CPackedBitmapSet * this_ptr)
    MOV EAX,EBP                         ; 00510c98
    SUB EAX,ESI                         ; 00510c9a
    ADD ESP,0x4                         ; 00510c9c
    INC EAX                             ; 00510c9f
    PUSH EAX                            ; 00510ca0
    PUSH EDI                            ; 00510ca1
    MOV EBX,ESI                         ; 00510ca2
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_005106a0 ; 00510ca4
        ;   XREF to: 005106a0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_005106a0(CPackedBitmapSet * this_ptr, int bitmap_count)
    ADD ESP,0x8                         ; 00510ca9
    CMP ESI,EBP                         ; 00510cac
    JG 0x00510d00                       ; 00510cae
        ;   XREF to: 00510d00 (CONDITIONAL_JUMP)  ; LAB_00510d00
    LEA EAX,[ESI*0x8 + 0x0]             ; 00510cb0
    ADD EAX,ESI                         ; 00510cb7
    SHL EAX,0x2                         ; 00510cb9
    MOV ESI,EAX                         ; 00510cbc
    NEG ESI                             ; 00510cbe
    ADD ESI,EAX                         ; 00510cc0
    PUSH EBX                            ; 00510cc2
        ;   Label: LAB_00510cc2
    MOV EDX,dword ptr [ESP + 0x80]      ; 00510cc3
    PUSH EDX                            ; 00510cca
    LEA EAX,[ESP + 0x8]                 ; 00510ccb
    PUSH EAX                            ; 00510ccf
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00510cd0
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00510cd5
    MOV ECX,dword ptr [ESP + 0x88]      ; 00510cd8
    PUSH ECX                            ; 00510cdf
    LEA EAX,[ESP + 0x4]                 ; 00510ce0
    PUSH EAX                            ; 00510ce4
    MOV EAX,dword ptr [EDI + 0x4]       ; 00510ce5
    ADD EAX,ESI                         ; 00510ce8
    PUSH EAX                            ; 00510cea
    INC EBX                             ; 00510ceb
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00510160 ; 00510cec
        ;   XREF to: 00510160 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00510160(CPackedBitmap * this_ptr, char * filename, int apply_palette_flag)
    ADD ESI,0x24                        ; 00510cf1
    ADD ESP,0xc                         ; 00510cf4
    CMP EBX,EBP                         ; 00510cf7
    JLE 0x00510cc2                      ; 00510cf9
        ;   XREF to: 00510cc2 (CONDITIONAL_JUMP)  ; LAB_00510cc2
    LEA EAX,[EAX]                       ; 00510cfb
    MOV ECX,ECX                         ; 00510cfe
    PUSH EDI                            ; 00510d00
        ;   Label: LAB_00510d00
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_00510610 ; 00510d01
        ;   XREF to: 00510610 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_00510610(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 00510d06
    ADD ESP,0x64                        ; 00510d09
    POP EBP                             ; 00510d0c
    POP EDI                             ; 00510d0d
    POP ESI                             ; 00510d0e
    POP EBX                             ; 00510d0f
    RET                                 ; 00510d10

