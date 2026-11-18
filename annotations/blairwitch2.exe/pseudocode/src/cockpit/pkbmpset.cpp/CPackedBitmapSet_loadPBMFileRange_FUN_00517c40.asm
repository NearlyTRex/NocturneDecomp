; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBMFileRange_FUN_00517c40(CPackedBitmapSet *this_ptr,char *filename_format,int start_index,int end_index,int apply_palette_flag)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename_format
; int              Stack[0xc]:4   start_index
; int              Stack[0x10]:4   end_index
; int              Stack[0x14]:4   apply_palette_flag
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00517130
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_00517670
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_005175b0
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_005175e0
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00517640
;   crt_unknown.c_sprintf_FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517c40
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBMFileRange_FUN_00517c40
    PUSH ESI                            ; 00517c41
    PUSH EDI                            ; 00517c42
    PUSH EBP                            ; 00517c43
    SUB ESP,0x64                        ; 00517c44
    MOV EDI,dword ptr [ESP + 0x78]      ; 00517c47
    MOV ESI,dword ptr [ESP + 0x80]      ; 00517c4b
    MOV EBP,dword ptr [ESP + 0x84]      ; 00517c52
    PUSH EDI                            ; 00517c59
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00517640 ; 00517c5a
        ;   XREF to: 00517640 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_00517640(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 00517c5f
    PUSH EDI                            ; 00517c62
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_005175b0 ; 00517c63
        ;   XREF to: 005175b0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_005175b0(CPackedBitmapSet * this_ptr)
    MOV EAX,EBP                         ; 00517c68
    SUB EAX,ESI                         ; 00517c6a
    ADD ESP,0x4                         ; 00517c6c
    INC EAX                             ; 00517c6f
    PUSH EAX                            ; 00517c70
    PUSH EDI                            ; 00517c71
    MOV EBX,ESI                         ; 00517c72
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_00517670 ; 00517c74
        ;   XREF to: 00517670 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_00517670(CPackedBitmapSet * this_ptr, int bitmap_count)
    ADD ESP,0x8                         ; 00517c79
    CMP ESI,EBP                         ; 00517c7c
    JG 0x00517cd0                       ; 00517c7e
        ;   XREF to: 00517cd0 (CONDITIONAL_JUMP)  ; LAB_00517cd0
    LEA EAX,[ESI*0x8 + 0x0]             ; 00517c80
    ADD EAX,ESI                         ; 00517c87
    SHL EAX,0x2                         ; 00517c89
    MOV ESI,EAX                         ; 00517c8c
    NEG ESI                             ; 00517c8e
    ADD ESI,EAX                         ; 00517c90
    PUSH EBX                            ; 00517c92
        ;   Label: LAB_00517c92
    MOV EDX,dword ptr [ESP + 0x80]      ; 00517c93
    PUSH EDX                            ; 00517c9a
    LEA EAX,[ESP + 0x8]                 ; 00517c9b
    PUSH EAX                            ; 00517c9f
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00517ca0
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 00517ca5
    MOV ECX,dword ptr [ESP + 0x88]      ; 00517ca8
    PUSH ECX                            ; 00517caf
    LEA EAX,[ESP + 0x4]                 ; 00517cb0
    PUSH EAX                            ; 00517cb4
    MOV EAX,dword ptr [EDI + 0x4]       ; 00517cb5
    ADD EAX,ESI                         ; 00517cb8
    PUSH EAX                            ; 00517cba
    INC EBX                             ; 00517cbb
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00517130 ; 00517cbc
        ;   XREF to: 00517130 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00517130(CPackedBitmap * this_ptr, char * filename, int apply_palette_flag)
    ADD ESI,0x24                        ; 00517cc1
    ADD ESP,0xc                         ; 00517cc4
    CMP EBX,EBP                         ; 00517cc7
    JLE 0x00517c92                      ; 00517cc9
        ;   XREF to: 00517c92 (CONDITIONAL_JUMP)  ; LAB_00517c92
    LEA EAX,[EAX]                       ; 00517ccb
    MOV ECX,ECX                         ; 00517cce
    PUSH EDI                            ; 00517cd0
        ;   Label: LAB_00517cd0
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_005175e0 ; 00517cd1
        ;   XREF to: 005175e0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_005175e0(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 00517cd6
    ADD ESP,0x64                        ; 00517cd9
    POP EBP                             ; 00517cdc
    POP EDI                             ; 00517cdd
    POP ESI                             ; 00517cde
    POP EBX                             ; 00517cdf
    RET                                 ; 00517ce0

