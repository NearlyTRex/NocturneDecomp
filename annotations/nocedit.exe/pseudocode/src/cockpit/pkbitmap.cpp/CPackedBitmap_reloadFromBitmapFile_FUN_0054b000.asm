; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000(CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,int apply_palette_flag)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
; int              Stack[0x14]:4   transparency_color
; int              Stack[0x18]:4   apply_palette_flag
;
; XREF[2]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_0054a840 at 0054a878
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_0054be70 at 0054bf18
;
; Referenced Globals:
;   TerminatedCString s_cockpit_pkbitmap_cpp_0063ef51
;
; Called Functions:
;   cockpit_ckptutil.c_readBitmapFile_FUN_00431870
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0054b4a0
;   cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0054b190
;   cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0054a990
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054b000
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000
    PUSH ESI                            ; 0054b001
    PUSH EDI                            ; 0054b002
    PUSH EBP                            ; 0054b003
    MOV EBX,dword ptr [ESP + 0x14]      ; 0054b004
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0054b008
    PUSH EBX                            ; 0054b00c
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0 ; 0054b00d
        ;   XREF to: 0054a8e0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 0054b012
    MOV EDX,dword ptr [ESP + 0x18]      ; 0054b015
    PUSH EDX                            ; 0054b019
    PUSH EBX                            ; 0054b01a
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0054a990 ; 0054b01b
        ;   XREF to: 0054a990 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0054a990(CPackedBitmap * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0054b020
    MOV ESI,dword ptr [ESP + 0x20]      ; 0054b023
    IMUL ESI,EDI                        ; 0054b027
    PUSH ESI                            ; 0054b02a
    PUSH 0x0                            ; 0054b02b
    PUSH EBX                            ; 0054b02d
    CALL cockpit_ckptutil.c_readBitmapFile_FUN_00431870 ; 0054b02e
        ;   XREF to: 00431870 (UNCONDITIONAL_CALL)  ; void * cockpit_ckptutil.c_readBitmapFile_FUN_00431870(char * filename, void * buffer, int size)
    ADD ESP,0xc                         ; 0054b033
    PUSH EDI                            ; 0054b036
    MOV ECX,dword ptr [ESP + 0x28]      ; 0054b037
    PUSH ECX                            ; 0054b03b
    MOV EBP,dword ptr [ESP + 0x28]      ; 0054b03c
    PUSH EBP                            ; 0054b040
    PUSH EDI                            ; 0054b041
    PUSH EAX                            ; 0054b042
    PUSH EBX                            ; 0054b043
    MOV ESI,EAX                         ; 0054b044
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0054b190 ; 0054b046
        ;   XREF to: 0054b190 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0054b190(CPackedBitmap * this_ptr, uchar * bitmap_data, int width, int height, ...)
    ADD ESP,0x18                        ; 0054b04b
    PUSH 0x2fb                          ; 0054b04e
    PUSH 0x63ef51                       ; 0054b053 | = "..\\cockpit\\pkbitmap.cpp"
    PUSH ESI                            ; 0054b058
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0054b059
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0054b05e
    CMP dword ptr [ESP + 0x28],0x0      ; 0054b061
    JNZ 0x0054b06d                      ; 0054b066
        ;   XREF to: 0054b06d (CONDITIONAL_JUMP)  ; LAB_0054b06d
    POP EBP                             ; 0054b068
    POP EDI                             ; 0054b069
    POP ESI                             ; 0054b06a
    POP EBX                             ; 0054b06b
    RET                                 ; 0054b06c
    PUSH EBX                            ; 0054b06d
        ;   Label: LAB_0054b06d
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0054b4a0 ; 0054b06e
        ;   XREF to: 0054b4a0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0054b4a0(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 0054b073
    POP EBP                             ; 0054b076
    POP EDI                             ; 0054b077
    POP ESI                             ; 0054b078
    POP EBX                             ; 0054b079
    RET                                 ; 0054b07a

