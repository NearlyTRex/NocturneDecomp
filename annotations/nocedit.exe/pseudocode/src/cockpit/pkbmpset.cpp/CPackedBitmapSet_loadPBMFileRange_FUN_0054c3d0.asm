; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadPBMFileRange_FUN_0054c3d0(CPackedBitmapSet *this_ptr,char *filename_format,int start_index,int end_index,int apply_palette_flag)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename_format
; int              Stack[0xc]:4   start_index
; int              Stack[0x10]:4   end_index
; int              Stack[0x14]:4   apply_palette_flag
; Local Variables:
; undefined        Stack[-0x74]:1  local_74
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_0054bdb0
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_0054bcd0
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_0054bd00
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60
;   crt_stdio.c__sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054c3d0
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBMFileRange_FUN_0054c3d0
    PUSH ESI                            ; 0054c3d1
    PUSH EDI                            ; 0054c3d2
    PUSH EBP                            ; 0054c3d3
    SUB ESP,0x64                        ; 0054c3d4
    MOV EDI,dword ptr [ESP + 0x78]      ; 0054c3d7
    MOV ESI,dword ptr [ESP + 0x80]      ; 0054c3db
    MOV EBP,dword ptr [ESP + 0x84]      ; 0054c3e2
    PUSH EDI                            ; 0054c3e9
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60 ; 0054c3ea
        ;   XREF to: 0054bd60 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 0054c3ef
    PUSH EDI                            ; 0054c3f2
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_0054bcd0 ; 0054c3f3
        ;   XREF to: 0054bcd0 (UNCONDITIONAL_CALL)  ; CPackedBitmapSet * cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_0054bcd0(CPackedBitmapSet * this_ptr)
    MOV EAX,EBP                         ; 0054c3f8
    SUB EAX,ESI                         ; 0054c3fa
    ADD ESP,0x4                         ; 0054c3fc
    INC EAX                             ; 0054c3ff
    PUSH EAX                            ; 0054c400
    PUSH EDI                            ; 0054c401
    MOV EBX,ESI                         ; 0054c402
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_0054bdb0 ; 0054c404
        ;   XREF to: 0054bdb0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_0054bdb0(CPackedBitmapSet * this_ptr, int bitmap_count)
    ADD ESP,0x8                         ; 0054c409
    CMP ESI,EBP                         ; 0054c40c
    JG 0x0054c460                       ; 0054c40e
        ;   XREF to: 0054c460 (CONDITIONAL_JUMP)  ; LAB_0054c460
    LEA EAX,[ESI*0x8 + 0x0]             ; 0054c410
    ADD EAX,ESI                         ; 0054c417
    SHL EAX,0x2                         ; 0054c419
    MOV ESI,EAX                         ; 0054c41c
    NEG ESI                             ; 0054c41e
    ADD ESI,EAX                         ; 0054c420
    PUSH EBX                            ; 0054c422
        ;   Label: LAB_0054c422
    MOV EDX,dword ptr [ESP + 0x80]      ; 0054c423
    PUSH EDX                            ; 0054c42a
    LEA EAX,[ESP + 0x8]                 ; 0054c42b
    PUSH EAX                            ; 0054c42f
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0054c430
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0054c435
    MOV ECX,dword ptr [ESP + 0x88]      ; 0054c438
    PUSH ECX                            ; 0054c43f
    LEA EAX,[ESP + 0x4]                 ; 0054c440
    PUSH EAX                            ; 0054c444
    MOV EAX,dword ptr [EDI + 0x4]       ; 0054c445
    ADD EAX,ESI                         ; 0054c448
    PUSH EAX                            ; 0054c44a
    INC EBX                             ; 0054c44b
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860 ; 0054c44c
        ;   XREF to: 0054b860 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860(CPackedBitmap * this_ptr, char * filename, int apply_palette_flag)
    ADD ESI,0x24                        ; 0054c451
    ADD ESP,0xc                         ; 0054c454
    CMP EBX,EBP                         ; 0054c457
    JLE 0x0054c422                      ; 0054c459
        ;   XREF to: 0054c422 (CONDITIONAL_JUMP)  ; LAB_0054c422
    LEA EAX,[EAX]                       ; 0054c45b
    MOV ECX,ECX                         ; 0054c45e
    PUSH EDI                            ; 0054c460
        ;   Label: LAB_0054c460
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_0054bd00 ; 0054c461
        ;   XREF to: 0054bd00 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_init_FUN_0054bd00(CPackedBitmapSet * this_ptr)
    ADD ESP,0x4                         ; 0054c466
    ADD ESP,0x64                        ; 0054c469
    POP EBP                             ; 0054c46c
    POP EDI                             ; 0054c46d
    POP ESI                             ; 0054c46e
    POP EBX                             ; 0054c46f
    RET                                 ; 0054c470

