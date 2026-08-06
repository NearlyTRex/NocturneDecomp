; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_dtor_FUN_004f3f00(CPackedBitmap *this_ptr,uint flags)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_CPackedBitmapSet_FUN_004f4f90 at 004f50db
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_FUN_004f3f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3f00
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_004f3f00
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f3f01
    PUSH EBX                            ; 004f3f05
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_FUN_004f3f50 ; 004f3f06
        ;   XREF to: 004f3f50 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_FUN_004f3f50(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 004f3f0b
    MOV EAX,EBX                         ; 004f3f0e
    POP EBX                             ; 004f3f10
    RET                                 ; 004f3f11

