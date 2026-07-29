; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_getTotalMemoryUsage_FUN_004f5bf0(CPackedBitmapSet *this_ptr)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_getTotalMemoryUsage_FUN_004f3fa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5bf0
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_getTotalMemoryUsage_FUN_004f5bf0
    PUSH EDI                            ; 004f5bf1
    PUSH EBP                            ; 004f5bf2
    MOV EBP,dword ptr [ESP + 0x10]      ; 004f5bf3
    MOV EAX,dword ptr [EBP]             ; 004f5bf7
    LEA EDI,[EAX*0x8 + 0x0]             ; 004f5bfa
    ADD EDI,EAX                         ; 004f5c01
    XOR EBX,EBX                         ; 004f5c03
    SHL EDI,0x2                         ; 004f5c05
    TEST EAX,EAX                        ; 004f5c08
    JLE 0x004f5c2b                      ; 004f5c0a
        ;   XREF to: 004f5c2b (CONDITIONAL_JUMP)  ; LAB_004f5c2b
    PUSH ESI                            ; 004f5c0c
    XOR ESI,ESI                         ; 004f5c0d
    MOV EAX,dword ptr [EBP + 0x4]       ; 004f5c0f
        ;   Label: LAB_004f5c0f
    ADD EAX,ESI                         ; 004f5c12
    PUSH EAX                            ; 004f5c14
    INC EBX                             ; 004f5c15
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_getTotalMemoryUsage_FUN_004f3fa0 ; 004f5c16
        ;   XREF to: 004f3fa0 (UNCONDITIONAL_CALL)  ; int cockpit_pkbitmap.cpp_CPackedBitmap_getTotalMemoryUsage_FUN_004f3fa0(CPackedBitmap * this_ptr)
    ADD ESI,0x24                        ; 004f5c1b
    ADD ESP,0x4                         ; 004f5c1e
    MOV ECX,dword ptr [EBP]             ; 004f5c21
    ADD EDI,EAX                         ; 004f5c24
    CMP EBX,ECX                         ; 004f5c26
    JL 0x004f5c0f                       ; 004f5c28
        ;   XREF to: 004f5c0f (CONDITIONAL_JUMP)  ; LAB_004f5c0f
    POP ESI                             ; 004f5c2a
    MOV EAX,EDI                         ; 004f5c2b
        ;   Label: LAB_004f5c2b
    POP EBP                             ; 004f5c2d
    POP EDI                             ; 004f5c2e
    POP EBX                             ; 004f5c2f
    RET                                 ; 004f5c30

