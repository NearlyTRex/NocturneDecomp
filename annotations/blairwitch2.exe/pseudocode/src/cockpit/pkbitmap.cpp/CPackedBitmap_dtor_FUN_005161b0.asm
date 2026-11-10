; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_dtor_FUN_005161b0(CPackedBitmap *this_ptr,uint flags)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_parsePBGFile_FUN_00517280 at 005173cc
;
; Called Functions:
;   cockpit_pkbitmap.cpp_FUN_00516200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005161b0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_005161b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005161b1
    PUSH EBX                            ; 005161b5
    CALL cockpit_pkbitmap.cpp_FUN_00516200 ; 005161b6
        ;   XREF to: 00516200 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_00516200()
    ADD ESP,0x4                         ; 005161bb
    MOV EAX,EBX                         ; 005161be
    POP EBX                             ; 005161c0
    RET                                 ; 005161c1

