; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_init_FUN_005374b0(CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,int apply_palette_flag)
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
;   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_00537c30
;   cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_00537520
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005374b0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_005374b0
    PUSH ESI                            ; 005374b1
    PUSH EDI                            ; 005374b2
    PUSH EBP                            ; 005374b3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005374b4
    PUSH EBX                            ; 005374b8
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_00537520 ; 005374b9
        ;   XREF to: 00537520 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_00537520(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 005374be
    PUSH 0x14                           ; 005374c1
    PUSH 0x0                            ; 005374c3
    PUSH EBX                            ; 005374c5
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005374c6
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005374cb
    MOV EDX,dword ptr [ESP + 0x28]      ; 005374ce
    PUSH EDX                            ; 005374d2
    MOV ECX,dword ptr [ESP + 0x28]      ; 005374d3
    PUSH ECX                            ; 005374d7
    MOV ESI,dword ptr [ESP + 0x28]      ; 005374d8
    PUSH ESI                            ; 005374dc
    MOV EDI,dword ptr [ESP + 0x28]      ; 005374dd
    PUSH EDI                            ; 005374e1
    MOV EBP,dword ptr [ESP + 0x28]      ; 005374e2
    PUSH EBP                            ; 005374e6
    PUSH EBX                            ; 005374e7
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_00537c30 ; 005374e8
        ;   XREF to: 00537c30 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_00537c30(CPackedBitmap * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x18                        ; 005374ed
    MOV EAX,EBX                         ; 005374f0
    POP EBP                             ; 005374f2
    POP EDI                             ; 005374f3
    POP ESI                             ; 005374f4
    POP EBX                             ; 005374f5
    RET                                 ; 005374f6

