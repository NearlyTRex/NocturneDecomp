; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_init_FUN_0054a840(CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,int stride,int apply_palette_flag)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
; int              Stack[0x14]:4   transparency_color
; int              Stack[0x18]:4   stride
; int              Stack[0x1c]:4   apply_palette_flag
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000
;   cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_0054a8b0
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054a840
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_0054a840
    PUSH ESI                            ; 0054a841
    PUSH EDI                            ; 0054a842
    PUSH EBP                            ; 0054a843
    MOV EBX,dword ptr [ESP + 0x14]      ; 0054a844
    PUSH EBX                            ; 0054a848
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_0054a8b0 ; 0054a849
        ;   XREF to: 0054a8b0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_0054a8b0(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 0054a84e
    PUSH 0x14                           ; 0054a851
    PUSH 0x0                            ; 0054a853
    PUSH EBX                            ; 0054a855
    CALL crt_memory.c_memset_FUN_005fde40 ; 0054a856
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0054a85b
    MOV EDX,dword ptr [ESP + 0x28]      ; 0054a85e
    PUSH EDX                            ; 0054a862
    MOV ECX,dword ptr [ESP + 0x28]      ; 0054a863
    PUSH ECX                            ; 0054a867
    MOV ESI,dword ptr [ESP + 0x28]      ; 0054a868
    PUSH ESI                            ; 0054a86c
    MOV EDI,dword ptr [ESP + 0x28]      ; 0054a86d
    PUSH EDI                            ; 0054a871
    MOV EBP,dword ptr [ESP + 0x28]      ; 0054a872
    PUSH EBP                            ; 0054a876
    PUSH EBX                            ; 0054a877
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000 ; 0054a878
        ;   XREF to: 0054b000 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0054b000(CPackedBitmap * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x18                        ; 0054a87d
    MOV EAX,EBX                         ; 0054a880
    POP EBP                             ; 0054a882
    POP EDI                             ; 0054a883
    POP ESI                             ; 0054a884
    POP EBX                             ; 0054a885
    RET                                 ; 0054a886

