; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_getTotalMemoryUsage_FUN_0054c6a0(CPackedBitmapSet *this_ptr)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_getTotalMemoryUsage_FUN_0054a970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054c6a0
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_getTotalMemoryUsage_FUN_0054c6a0
    PUSH EDI                            ; 0054c6a1
    PUSH EBP                            ; 0054c6a2
    MOV EBP,dword ptr [ESP + 0x10]      ; 0054c6a3
    MOV EAX,dword ptr [EBP]             ; 0054c6a7
    LEA EDI,[EAX*0x8 + 0x0]             ; 0054c6aa
    ADD EDI,EAX                         ; 0054c6b1
    XOR EBX,EBX                         ; 0054c6b3
    SHL EDI,0x2                         ; 0054c6b5
    TEST EAX,EAX                        ; 0054c6b8
    JLE 0x0054c6db                      ; 0054c6ba
        ;   XREF to: 0054c6db (CONDITIONAL_JUMP)  ; LAB_0054c6db
    PUSH ESI                            ; 0054c6bc
    XOR ESI,ESI                         ; 0054c6bd
    MOV EAX,dword ptr [EBP + 0x4]       ; 0054c6bf
        ;   Label: LAB_0054c6bf
    ADD EAX,ESI                         ; 0054c6c2
    PUSH EAX                            ; 0054c6c4
    INC EBX                             ; 0054c6c5
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_getTotalMemoryUsage_FUN_0054a970 ; 0054c6c6
        ;   XREF to: 0054a970 (UNCONDITIONAL_CALL)  ; int cockpit_pkbitmap.cpp_CPackedBitmap_getTotalMemoryUsage_FUN_0054a970(CPackedBitmap * this_ptr)
    ADD ESI,0x24                        ; 0054c6cb
    ADD ESP,0x4                         ; 0054c6ce
    MOV ECX,dword ptr [EBP]             ; 0054c6d1
    ADD EDI,EAX                         ; 0054c6d4
    CMP EBX,ECX                         ; 0054c6d6
    JL 0x0054c6bf                       ; 0054c6d8
        ;   XREF to: 0054c6bf (CONDITIONAL_JUMP)  ; LAB_0054c6bf
    POP ESI                             ; 0054c6da
    MOV EAX,EDI                         ; 0054c6db
        ;   Label: LAB_0054c6db
    POP EBP                             ; 0054c6dd
    POP EDI                             ; 0054c6de
    POP EBX                             ; 0054c6df
    RET                                 ; 0054c6e0

