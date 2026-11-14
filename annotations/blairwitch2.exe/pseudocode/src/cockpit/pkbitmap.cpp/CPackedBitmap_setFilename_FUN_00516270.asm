; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_00516270(CPackedBitmap *this_ptr,char *filename)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[3]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00517130 at 00517148
;   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_005168e0 at 005168fb
;   cockpit_pkbitmap.cpp_FUN_00517400 at 0051747b
;
; Called Functions:
;   crt_string.c__strncpy_FUN_005b9cf0
;
; *****************************************************************************

section .text

    PUSH 0x13                           ; 00516270
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_00516270
    MOV EDX,dword ptr [ESP + 0xc]       ; 00516272
    PUSH EDX                            ; 00516276
    MOV ECX,dword ptr [ESP + 0xc]       ; 00516277
    PUSH ECX                            ; 0051627b
    CALL crt_string.c__strncpy_FUN_005b9cf0 ; 0051627c
        ;   XREF to: 005b9cf0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005b9cf0(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 00516281
    MOV EAX,dword ptr [ESP + 0x4]       ; 00516284
    MOV byte ptr [EAX + 0x13],0x0       ; 00516288
    RET                                 ; 0051628c

