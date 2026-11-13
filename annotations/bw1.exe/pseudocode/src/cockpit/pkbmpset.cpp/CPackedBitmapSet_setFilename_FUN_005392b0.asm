; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_setFilename_FUN_005392b0(CPackedBitmapSet *this_ptr,char *filename)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_FUN_00538b30 at 00538d34
;
; Called Functions:
;   crt_string.c__strncpy_FUN_005c20d0
;
; *****************************************************************************

section .text

    PUSH 0x13                           ; 005392b0
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_005392b0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005392b2
    MOV EAX,dword ptr [ESP + 0x8]       ; 005392b6
    PUSH EDX                            ; 005392ba
    ADD EAX,0x8                         ; 005392bb
    PUSH EAX                            ; 005392be
    CALL crt_string.c__strncpy_FUN_005c20d0 ; 005392bf
        ;   XREF to: 005c20d0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005c20d0(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 005392c4
    MOV EAX,dword ptr [ESP + 0x4]       ; 005392c7
    MOV byte ptr [EAX + 0x1b],0x0       ; 005392cb
    RET                                 ; 005392cf

