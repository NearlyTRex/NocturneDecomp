; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CPackedBitmap * cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_0054a890(CPackedBitmap * this_ptr)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_parsePBGFile_FUN_0054b9b0 at 0054bb06
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054a890
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_0054a890
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054a891
    PUSH EBX                            ; 0054a895
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0 ; 0054a896 | void cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0(CPackedBitmap * this_ptr)
        ;   XREF to: 0054a8e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054a89b
    MOV EAX,EBX                         ; 0054a89e
    POP EBX                             ; 0054a8a0
    RET                                 ; 0054a8a1

