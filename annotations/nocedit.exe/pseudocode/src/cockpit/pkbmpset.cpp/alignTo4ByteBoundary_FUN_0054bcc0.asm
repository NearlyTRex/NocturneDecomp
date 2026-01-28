; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl cockpit_pkbmpset_cpp_alignTo4ByteBoundary_FUN_0054bcc0(int value)
;
; Parameters:
; int              Stack[0x4]:4   value
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0054bcc0
        ;   Label: cockpit_pkbmpset.cpp_alignTo4ByteBoundary_FUN_0054bcc0
    ADD EAX,0x3                         ; 0054bcc4
    AND AL,0xfc                         ; 0054bcc7
    RET                                 ; 0054bcc9

