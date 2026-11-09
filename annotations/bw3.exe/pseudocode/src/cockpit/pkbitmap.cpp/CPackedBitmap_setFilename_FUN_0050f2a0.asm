; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_0050f2a0(CPackedBitmap *this_ptr,char *filename)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[2]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00510160 at 00510178
;   cockpit_pkbitmap.cpp_FUN_0050f910 at 0050f92b
;
; Called Functions:
;   crt_string.c__strncpy_FUN_005a4ee0
;
; *****************************************************************************

section .text

    PUSH 0x13                           ; 0050f2a0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0050f2a0
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050f2a2
    PUSH EDX                            ; 0050f2a6
    MOV ECX,dword ptr [ESP + 0xc]       ; 0050f2a7
    PUSH ECX                            ; 0050f2ab
    CALL crt_string.c__strncpy_FUN_005a4ee0 ; 0050f2ac
        ;   XREF to: 005a4ee0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005a4ee0(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 0050f2b1
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050f2b4
    MOV byte ptr [EAX + 0x13],0x0       ; 0050f2b8
    RET                                 ; 0050f2bc

