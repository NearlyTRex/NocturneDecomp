; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_dtor_FUN_00537500(CPackedBitmap *this_ptr,uint flags)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_parsePBGFile_FUN_005385d0 at 0053871c
;
; Called Functions:
;   cockpit_pkbitmap.cpp_FUN_00537550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537500
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_00537500
    MOV EBX,dword ptr [ESP + 0x8]       ; 00537501
    PUSH EBX                            ; 00537505
    CALL cockpit_pkbitmap.cpp_FUN_00537550 ; 00537506
        ;   XREF to: 00537550 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_00537550()
    ADD ESP,0x4                         ; 0053750b
    MOV EAX,EBX                         ; 0053750e
    POP EBX                             ; 00537510
    RET                                 ; 00537511

