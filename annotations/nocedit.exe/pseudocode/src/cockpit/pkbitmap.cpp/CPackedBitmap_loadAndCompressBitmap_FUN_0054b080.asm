; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0054b080(CPackedBitmap *this_ptr,int apply_palette_flag)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   apply_palette_flag
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0 at 0054b514
;
; Referenced Globals:
;   TerminatedCString s_cockpit_pkbitmap_cpp_0063ef69
;
; Called Functions:
;   cockpit_ckptutil.c_readBitmapFile_FUN_00431870
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0054b4a0
;   cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054b080
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_0054b080
    PUSH ESI                            ; 0054b081
    MOV EBX,dword ptr [ESP + 0xc]       ; 0054b082
    MOV ESI,dword ptr [EBX + 0x18]      ; 0054b086
    IMUL ESI,dword ptr [EBX + 0x1c]     ; 0054b089
    PUSH ESI                            ; 0054b08d
    PUSH 0x0                            ; 0054b08e
    PUSH EBX                            ; 0054b090
    CALL cockpit_ckptutil.c_readBitmapFile_FUN_00431870 ; 0054b091
        ;   XREF to: 00431870 (UNCONDITIONAL_CALL)  ; void * cockpit_ckptutil.c_readBitmapFile_FUN_00431870(char * filename, void * buffer, int size)
    MOV ESI,EAX                         ; 0054b096
    ADD ESP,0xc                         ; 0054b098
    TEST EAX,EAX                        ; 0054b09b
    JNZ 0x0054b0a2                      ; 0054b09d
        ;   XREF to: 0054b0a2 (CONDITIONAL_JUMP)  ; LAB_0054b0a2
    POP ESI                             ; 0054b09f
        ;   Label: LAB_0054b09f
    POP EBX                             ; 0054b0a0
    RET                                 ; 0054b0a1
    MOV ECX,dword ptr [EBX + 0x18]      ; 0054b0a2
        ;   Label: LAB_0054b0a2
    PUSH ECX                            ; 0054b0a5
    PUSH EAX                            ; 0054b0a6
    PUSH EBX                            ; 0054b0a7
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0 ; 0054b0a8
        ;   XREF to: 0054b0e0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0(CPackedBitmap * this_ptr, uchar * raw_bitmap_data, int row_stride)
    ADD ESP,0xc                         ; 0054b0ad
    PUSH 0x314                          ; 0054b0b0
    PUSH 0x63ef69                       ; 0054b0b5 | = "..\\cockpit\\pkbitmap.cpp"
    PUSH ESI                            ; 0054b0ba
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0054b0bb
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0054b0c0
    CMP dword ptr [ESP + 0x10],0x0      ; 0054b0c3
    JZ 0x0054b09f                       ; 0054b0c8
        ;   XREF to: 0054b09f (CONDITIONAL_JUMP)  ; LAB_0054b09f
    PUSH EBX                            ; 0054b0ca
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0054b4a0 ; 0054b0cb
        ;   XREF to: 0054b4a0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0054b4a0(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 0054b0d0
    POP ESI                             ; 0054b0d3
    POP EBX                             ; 0054b0d4
    RET                                 ; 0054b0d5

