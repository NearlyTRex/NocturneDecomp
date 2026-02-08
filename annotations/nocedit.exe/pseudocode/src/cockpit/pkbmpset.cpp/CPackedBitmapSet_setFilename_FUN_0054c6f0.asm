; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0 (CPackedBitmapSet *this_ptr,char *filename)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[2]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40 at 0054c162
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBGFileComplete_FUN_0054c480 at 0054c4b4
;
; Called Functions:
;   crt_string.c__strncpy_FUN_00600f40
;
; *****************************************************************************

section .text

    PUSH 0x13                           ; 0054c6f0
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0
    MOV EDX,dword ptr [ESP + 0xc]       ; 0054c6f2
    MOV EAX,dword ptr [ESP + 0x8]       ; 0054c6f6
    PUSH EDX                            ; 0054c6fa
    ADD EAX,0x8                         ; 0054c6fb
    PUSH EAX                            ; 0054c6fe
    CALL crt_string.c__strncpy_FUN_00600f40 ; 0054c6ff
        ;   XREF to: 00600f40 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_00600f40(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 0054c704
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054c707
    MOV byte ptr [EAX + 0x1b],0x0       ; 0054c70b
    RET                                 ; 0054c70f

