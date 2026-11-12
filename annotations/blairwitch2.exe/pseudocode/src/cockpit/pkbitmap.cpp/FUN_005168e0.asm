; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_FUN_005168e0(CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,int apply_palette_flag)
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
;   cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_00516160 at 00516198
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00517710 at 005177b8
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_0042c520
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_00516d60
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_00516a60
;   cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_00516270
;   cockpit_pkbitmap.cpp_FUN_00516200
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005168e0
        ;   Label: cockpit_pkbitmap.cpp_FUN_005168e0
    PUSH ESI                            ; 005168e1
    PUSH EDI                            ; 005168e2
    PUSH EBP                            ; 005168e3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005168e4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005168e8
    PUSH EBX                            ; 005168ec
    CALL cockpit_pkbitmap.cpp_FUN_00516200 ; 005168ed
        ;   XREF to: 00516200 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_00516200()
    ADD ESP,0x4                         ; 005168f2
    MOV EDX,dword ptr [ESP + 0x18]      ; 005168f5
    PUSH EDX                            ; 005168f9
    PUSH EBX                            ; 005168fa
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_00516270 ; 005168fb
        ;   XREF to: 00516270 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_00516270(CPackedBitmap * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00516900
    MOV ESI,dword ptr [ESP + 0x20]      ; 00516903
    IMUL ESI,EDI                        ; 00516907
    PUSH ESI                            ; 0051690a
    PUSH 0x0                            ; 0051690b
    PUSH EBX                            ; 0051690d
    CALL cockpit_ckptutil.c_FUN_0042c520 ; 0051690e
        ;   XREF to: 0042c520 (UNCONDITIONAL_CALL)  ; void * cockpit_ckptutil.c_FUN_0042c520(char * filename, void * buffer, int size)
    ADD ESP,0xc                         ; 00516913
    PUSH EDI                            ; 00516916
    MOV ECX,dword ptr [ESP + 0x28]      ; 00516917
    PUSH ECX                            ; 0051691b
    MOV EBP,dword ptr [ESP + 0x28]      ; 0051691c
    PUSH EBP                            ; 00516920
    PUSH EDI                            ; 00516921
    PUSH EAX                            ; 00516922
    PUSH EBX                            ; 00516923
    MOV ESI,EAX                         ; 00516924
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_00516a60 ; 00516926
        ;   XREF to: 00516a60 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_00516a60(CPackedBitmap * this_ptr, uchar * bitmap_data, int width, int height, ...)
    ADD ESP,0x18                        ; 0051692b
    PUSH ESI                            ; 0051692e
    CALL crt_unknown.c_FUN_005b86a0     ; 0051692f
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 00516934
    CMP dword ptr [ESP + 0x28],0x0      ; 00516937
    JNZ 0x00516943                      ; 0051693c
        ;   XREF to: 00516943 (CONDITIONAL_JUMP)  ; LAB_00516943
    POP EBP                             ; 0051693e
    POP EDI                             ; 0051693f
    POP ESI                             ; 00516940
    POP EBX                             ; 00516941
    RET                                 ; 00516942
    PUSH EBX                            ; 00516943
        ;   Label: LAB_00516943
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_00516d60 ; 00516944
        ;   XREF to: 00516d60 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_00516d60(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 00516949
    POP EBP                             ; 0051694c
    POP EDI                             ; 0051694d
    POP ESI                             ; 0051694e
    POP EBX                             ; 0051694f
    RET                                 ; 00516950

