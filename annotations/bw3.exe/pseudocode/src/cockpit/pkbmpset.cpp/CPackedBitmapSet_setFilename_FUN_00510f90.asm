; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_00510f90(CPackedBitmapSet *this_ptr,char *filename)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_FUN_00510810 at 00510a14
;
; Called Functions:
;   crt_string.c__strncpy_FUN_005a4ee0
;
; *****************************************************************************

section .text

    PUSH 0x13                           ; 00510f90
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_00510f90
    MOV EDX,dword ptr [ESP + 0xc]       ; 00510f92
    MOV EAX,dword ptr [ESP + 0x8]       ; 00510f96
    PUSH EDX                            ; 00510f9a
    ADD EAX,0x8                         ; 00510f9b
    PUSH EAX                            ; 00510f9e
    CALL crt_string.c__strncpy_FUN_005a4ee0 ; 00510f9f
        ;   XREF to: 005a4ee0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005a4ee0(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 00510fa4
    MOV EAX,dword ptr [ESP + 0x4]       ; 00510fa7
    MOV byte ptr [EAX + 0x1b],0x0       ; 00510fab
    RET                                 ; 00510faf

