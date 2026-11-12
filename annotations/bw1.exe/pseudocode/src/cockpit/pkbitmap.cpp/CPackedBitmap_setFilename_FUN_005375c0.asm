; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_005375c0(CPackedBitmap *this_ptr,char *filename)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[3]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00538480 at 00538498
;   cockpit_pkbitmap.cpp_FUN_00537c30 at 00537c4b
;   cockpit_pkbitmap.cpp_FUN_00538750 at 005387cb
;
; Called Functions:
;   crt_string.c__strncpy_FUN_005c20d0
;
; *****************************************************************************

section .text

    PUSH 0x13                           ; 005375c0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_005375c0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005375c2
    PUSH EDX                            ; 005375c6
    MOV ECX,dword ptr [ESP + 0xc]       ; 005375c7
    PUSH ECX                            ; 005375cb
    CALL crt_string.c__strncpy_FUN_005c20d0 ; 005375cc
        ;   XREF to: 005c20d0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005c20d0(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 005375d1
    MOV EAX,dword ptr [ESP + 0x4]       ; 005375d4
    MOV byte ptr [EAX + 0x13],0x0       ; 005375d8
    RET                                 ; 005375dc

