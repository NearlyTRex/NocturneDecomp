; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_00517f60(CPackedBitmapSet *this_ptr,char *filename)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_FUN_005177de at 005179e4
;
; Called Functions:
;   crt_string.c__strncpy_FUN_005b9cf0
;
; *****************************************************************************

section .text

    PUSH 0x13                           ; 00517f60
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_00517f60
    MOV EDX,dword ptr [ESP + 0xc]       ; 00517f62
    MOV EAX,dword ptr [ESP + 0x8]       ; 00517f66
    PUSH EDX                            ; 00517f6a
    ADD EAX,0x8                         ; 00517f6b
    PUSH EAX                            ; 00517f6e
    CALL crt_string.c__strncpy_FUN_005b9cf0 ; 00517f6f
        ;   XREF to: 005b9cf0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005b9cf0(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 00517f74
    MOV EAX,dword ptr [ESP + 0x4]       ; 00517f77
    MOV byte ptr [EAX + 0x1b],0x0       ; 00517f7b
    RET                                 ; 00517f7f

