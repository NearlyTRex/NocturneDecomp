; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_0054be70(CPackedBitmapSet * this_ptr, char * filename_format, int start_index, int end_index, char * extension, char * base_path)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename_format
; int              Stack[0xc]:4   start_index
; int              Stack[0x10]:4   end_index
; char *           Stack[0x14]:4   extension
; char *           Stack[0x18]:4   base_path
; Local Variables:
; undefined        Stack[-0x74]:1  local_74
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_0054bdb0
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_0054bcd0
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60
;   crt_stdio.c_sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054be70
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_0054be70
    PUSH ESI                            ; 0054be71
    PUSH EDI                            ; 0054be72
    PUSH EBP                            ; 0054be73
    SUB ESP,0x64                        ; 0054be74
    MOV EDI,dword ptr [ESP + 0x78]      ; 0054be77
    MOV ESI,dword ptr [ESP + 0x88]      ; 0054be7b
    MOV EBP,dword ptr [ESP + 0x8c]      ; 0054be82
    PUSH EDI                            ; 0054be89
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60 ; 0054be8a | void cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60(CPackedBitmapSet * this_ptr)
        ;   XREF to: 0054bd60 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054be8f
    PUSH EDI                            ; 0054be92
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_0054bcd0 ; 0054be93 | void cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_0054bcd0(CPackedBitmapSet * this_ptr)
        ;   XREF to: 0054bcd0 (UNCONDITIONAL_CALL)
    MOV EAX,EBP                         ; 0054be98
    SUB EAX,ESI                         ; 0054be9a
    ADD ESP,0x4                         ; 0054be9c
    INC EAX                             ; 0054be9f
    PUSH EAX                            ; 0054bea0
    PUSH EDI                            ; 0054bea1
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_0054bdb0 ; 0054bea2 | void cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_0054bdb0(CPackedBitmapSet * this_ptr, int bitmap_count)
        ;   XREF to: 0054bdb0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0054bea7
    MOV EAX,dword ptr [ESP + 0x84]      ; 0054beaa
    MOV dword ptr [EDI + 0x20],EAX      ; 0054beb1
    MOV EAX,dword ptr [ESP + 0x80]      ; 0054beb4
    MOV EBX,ESI                         ; 0054bebb
    MOV dword ptr [EDI + 0x1c],EAX      ; 0054bebd
    CMP ESI,EBP                         ; 0054bec0
    JG 0x0054bf30                       ; 0054bec2 | LAB_0054bf30
        ;   XREF to: 0054bf30 (CONDITIONAL_JUMP)
    LEA EAX,[ESI*0x8 + 0x0]             ; 0054bec4
    ADD EAX,ESI                         ; 0054becb
    SHL EAX,0x2                         ; 0054becd
    MOV ESI,EAX                         ; 0054bed0
    NEG ESI                             ; 0054bed2
    ADD ESI,EAX                         ; 0054bed4
    PUSH EBX                            ; 0054bed6
        ;   Label: LAB_0054bed6
    MOV EDX,dword ptr [ESP + 0x80]      ; 0054bed7
    PUSH EDX                            ; 0054bede
    LEA EAX,[ESP + 0x8]                 ; 0054bedf
    PUSH EAX                            ; 0054bee3
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0054bee4 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054bee9
    MOV ECX,dword ptr [ESP + 0x94]      ; 0054beec
    PUSH ECX                            ; 0054bef3
    MOV EAX,dword ptr [ESP + 0x94]      ; 0054bef4
    PUSH EAX                            ; 0054befb
    MOV EDX,dword ptr [ESP + 0x8c]      ; 0054befc
    PUSH EDX                            ; 0054bf03
    MOV ECX,dword ptr [ESP + 0x8c]      ; 0054bf04
    PUSH ECX                            ; 0054bf0b
    LEA EAX,[ESP + 0x10]                ; 0054bf0c
    PUSH EAX                            ; 0054bf10
    MOV EAX,dword ptr [EDI + 0x4]       ; 0054bf11
    ADD EAX,ESI                         ; 0054bf14
    PUSH EAX                            ; 0054bf16
    INC EBX                             ; 0054bf17
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000 ; 0054bf18 | void cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000(CPackedBitmap * this_ptr, char * filename, int width, int height, ...)
        ;   XREF to: 0054b000 (UNCONDITIONAL_CALL)
    ADD ESI,0x24                        ; 0054bf1d
    ADD ESP,0x18                        ; 0054bf20
    CMP EBX,EBP                         ; 0054bf23
    JLE 0x0054bed6                      ; 0054bf25 | LAB_0054bed6
        ;   XREF to: 0054bed6 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 0054bf27
    LEA EDX,[EDX]                       ; 0054bf2d
    ADD ESP,0x64                        ; 0054bf30
        ;   Label: LAB_0054bf30
    POP EBP                             ; 0054bf33
    POP EDI                             ; 0054bf34
    POP ESI                             ; 0054bf35
    POP EBX                             ; 0054bf36
    RET                                 ; 0054bf37

