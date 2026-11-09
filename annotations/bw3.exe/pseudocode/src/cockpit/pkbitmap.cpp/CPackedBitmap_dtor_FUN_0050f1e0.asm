; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_dtor_FUN_0050f1e0(CPackedBitmap *this_ptr,uint flags)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_FUN_005102b0 at 005103fc
;
; Called Functions:
;   cockpit_pkbitmap.cpp_FUN_0050f230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f1e0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_0050f1e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0050f1e1
    PUSH EBX                            ; 0050f1e5
    CALL cockpit_pkbitmap.cpp_FUN_0050f230 ; 0050f1e6
        ;   XREF to: 0050f230 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_0050f230()
    ADD ESP,0x4                         ; 0050f1eb
    MOV EAX,EBX                         ; 0050f1ee
    POP EBX                             ; 0050f1f0
    RET                                 ; 0050f1f1

