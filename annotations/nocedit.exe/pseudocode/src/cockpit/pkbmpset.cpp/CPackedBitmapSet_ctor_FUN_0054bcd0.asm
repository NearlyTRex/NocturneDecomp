; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_0054bcd0(CPackedBitmapSet * this_ptr)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_0054be70 at 0054be93
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadPBMFileRange_FUN_0054c3d0 at 0054c3f3
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0054bcd0
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_0054bcd0
    MOV dword ptr [EAX],0x0             ; 0054bcd4
    ADD EAX,0x8                         ; 0054bcda
    PUSH 0x14                           ; 0054bcdd
    MOV dword ptr [EAX + -0x4],0x0      ; 0054bcdf
    PUSH 0x0                            ; 0054bce6
    MOV dword ptr [EAX + 0x14],0x0      ; 0054bce8
    PUSH EAX                            ; 0054bcef
    MOV dword ptr [EAX + 0x18],0x0      ; 0054bcf0
    CALL crt_memory.c_memset_FUN_005fde40 ; 0054bcf7 | void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0054bcfc
    RET                                 ; 0054bcff

