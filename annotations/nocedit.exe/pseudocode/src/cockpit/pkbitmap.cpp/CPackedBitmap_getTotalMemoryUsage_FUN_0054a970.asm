; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int cockpit_pkbitmap.cpp_CPackedBitmap_getTotalMemoryUsage_FUN_0054a970(CPackedBitmap * this_ptr)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_getTotalMemoryUsage_FUN_0054c6a0 at 0054c6c6
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0054a970
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_getTotalMemoryUsage_FUN_0054a970
    MOV EDX,dword ptr [EAX + 0x20]      ; 0054a974
    TEST EDX,EDX                        ; 0054a977
    JNZ 0x0054a97e                      ; 0054a979
        ;   XREF to: 0054a97e (CONDITIONAL_JUMP)  ; LAB_0054a97e
    XOR EAX,EAX                         ; 0054a97b
    RET                                 ; 0054a97d
    PUSH EBX                            ; 0054a97e
        ;   Label: LAB_0054a97e
    MOV ECX,dword ptr [EAX + 0x1c]      ; 0054a97f
    LEA EAX,[ECX + 0x1]                 ; 0054a982
    MOV EBX,dword ptr [EDX + ECX*0x4]   ; 0054a985
    SHL EAX,0x2                         ; 0054a988
    ADD EAX,EBX                         ; 0054a98b
    POP EBX                             ; 0054a98d
    RET                                 ; 0054a98e

