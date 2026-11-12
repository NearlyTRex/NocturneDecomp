; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_init_FUN_0050f190(CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,int apply_palette_flag)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
; int              Stack[0x14]:4   transparency_color
; int              Stack[0x18]:4   apply_palette_flag
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0050f910
;   cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_0050f200
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f190
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_0050f190
    PUSH ESI                            ; 0050f191
    PUSH EDI                            ; 0050f192
    PUSH EBP                            ; 0050f193
    MOV EBX,dword ptr [ESP + 0x14]      ; 0050f194
    PUSH EBX                            ; 0050f198
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_0050f200 ; 0050f199
        ;   XREF to: 0050f200 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_0050f200(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 0050f19e
    PUSH 0x14                           ; 0050f1a1
    PUSH 0x0                            ; 0050f1a3
    PUSH EBX                            ; 0050f1a5
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0050f1a6
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0050f1ab
    MOV EDX,dword ptr [ESP + 0x28]      ; 0050f1ae
    PUSH EDX                            ; 0050f1b2
    MOV ECX,dword ptr [ESP + 0x28]      ; 0050f1b3
    PUSH ECX                            ; 0050f1b7
    MOV ESI,dword ptr [ESP + 0x28]      ; 0050f1b8
    PUSH ESI                            ; 0050f1bc
    MOV EDI,dword ptr [ESP + 0x28]      ; 0050f1bd
    PUSH EDI                            ; 0050f1c1
    MOV EBP,dword ptr [ESP + 0x28]      ; 0050f1c2
    PUSH EBP                            ; 0050f1c6
    PUSH EBX                            ; 0050f1c7
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0050f910 ; 0050f1c8
        ;   XREF to: 0050f910 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0050f910(CPackedBitmap * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x18                        ; 0050f1cd
    MOV EAX,EBX                         ; 0050f1d0
    POP EBP                             ; 0050f1d2
    POP EDI                             ; 0050f1d3
    POP ESI                             ; 0050f1d4
    POP EBX                             ; 0050f1d5
    RET                                 ; 0050f1d6

