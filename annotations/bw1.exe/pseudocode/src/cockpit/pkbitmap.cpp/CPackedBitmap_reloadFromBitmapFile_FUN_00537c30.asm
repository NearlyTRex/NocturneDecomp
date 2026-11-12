; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_reloadFromBitmapFile_FUN_00537c30(CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,int apply_palette_flag)
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
;   cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_005374b0 at 005374e8
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00538a60 at 00538b08
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_0043b2e0
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_005380b0
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_00537db0
;   cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_005375c0
;   cockpit_pkbitmap.cpp_FUN_00537550
;   crt_unknown.c_FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537c30
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_00537c30
    PUSH ESI                            ; 00537c31
    PUSH EDI                            ; 00537c32
    PUSH EBP                            ; 00537c33
    MOV EBX,dword ptr [ESP + 0x14]      ; 00537c34
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00537c38
    PUSH EBX                            ; 00537c3c
    CALL cockpit_pkbitmap.cpp_FUN_00537550 ; 00537c3d
        ;   XREF to: 00537550 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_00537550()
    ADD ESP,0x4                         ; 00537c42
    MOV EDX,dword ptr [ESP + 0x18]      ; 00537c45
    PUSH EDX                            ; 00537c49
    PUSH EBX                            ; 00537c4a
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_005375c0 ; 00537c4b
        ;   XREF to: 005375c0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_005375c0(CPackedBitmap * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00537c50
    MOV ESI,dword ptr [ESP + 0x20]      ; 00537c53
    IMUL ESI,EDI                        ; 00537c57
    PUSH ESI                            ; 00537c5a
    PUSH 0x0                            ; 00537c5b
    PUSH EBX                            ; 00537c5d
    CALL cockpit_ckptutil.c_FUN_0043b2e0 ; 00537c5e
        ;   XREF to: 0043b2e0 (UNCONDITIONAL_CALL)  ; void * cockpit_ckptutil.c_FUN_0043b2e0(char * filename, void * buffer, int size)
    ADD ESP,0xc                         ; 00537c63
    PUSH EDI                            ; 00537c66
    MOV ECX,dword ptr [ESP + 0x28]      ; 00537c67
    PUSH ECX                            ; 00537c6b
    MOV EBP,dword ptr [ESP + 0x28]      ; 00537c6c
    PUSH EBP                            ; 00537c70
    PUSH EDI                            ; 00537c71
    PUSH EAX                            ; 00537c72
    PUSH EBX                            ; 00537c73
    MOV ESI,EAX                         ; 00537c74
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_00537db0 ; 00537c76
        ;   XREF to: 00537db0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_00537db0(CPackedBitmap * this_ptr, uchar * bitmap_data, int width, int height, ...)
    ADD ESP,0x18                        ; 00537c7b
    PUSH ESI                            ; 00537c7e
    CALL crt_unknown.c_FUN_005c09f0     ; 00537c7f
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 00537c84
    CMP dword ptr [ESP + 0x28],0x0      ; 00537c87
    JNZ 0x00537c93                      ; 00537c8c
        ;   XREF to: 00537c93 (CONDITIONAL_JUMP)  ; LAB_00537c93
    POP EBP                             ; 00537c8e
    POP EDI                             ; 00537c8f
    POP ESI                             ; 00537c90
    POP EBX                             ; 00537c91
    RET                                 ; 00537c92
    PUSH EBX                            ; 00537c93
        ;   Label: LAB_00537c93
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_005380b0 ; 00537c94
        ;   XREF to: 005380b0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_005380b0(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 00537c99
    POP EBP                             ; 00537c9c
    POP EDI                             ; 00537c9d
    POP ESI                             ; 00537c9e
    POP EBX                             ; 00537c9f
    RET                                 ; 00537ca0

