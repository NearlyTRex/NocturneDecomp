; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbmpset_cpp_CPackedBitmapSet_ensureBitmapLoaded_FUN_004f5c80(CPackedBitmapSet *param_1,int param_2)
;
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_freePackedData_FUN_004f3f80
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_004f5a50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5c80
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_ensureBitmapLoaded_FUN_004f5c80
    PUSH EDI                            ; 004f5c81
    PUSH EBP                            ; 004f5c82
    MOV EDI,dword ptr [ESP + 0x10]      ; 004f5c83
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f5c87
    LEA EAX,[EBX*0x8 + 0x0]             ; 004f5c8b
    ADD EAX,EBX                         ; 004f5c92
    MOV EBX,dword ptr [EDI + 0x4]       ; 004f5c94
    CMP dword ptr [EBX + EAX*0x4 + 0x14],0x0 ; 004f5c97
    JNZ 0x004f5ce1                      ; 004f5c9c
        ;   XREF to: 004f5ce1 (CONDITIONAL_JUMP)  ; LAB_004f5ce1
    PUSH ESI                            ; 004f5c9e
    MOV ECX,dword ptr [EDI]             ; 004f5c9f
    XOR ESI,ESI                         ; 004f5ca1
    TEST ECX,ECX                        ; 004f5ca3
    JLE 0x004f5cd0                      ; 004f5ca5
        ;   XREF to: 004f5cd0 (CONDITIONAL_JUMP)  ; LAB_004f5cd0
    XOR EBX,EBX                         ; 004f5ca7
    MOV EAX,dword ptr [EDI + 0x4]       ; 004f5ca9
        ;   Label: LAB_004f5ca9
    ADD EAX,EBX                         ; 004f5cac
    PUSH EAX                            ; 004f5cae
    INC ESI                             ; 004f5caf
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_freePackedData_FUN_004f3f80 ; 004f5cb0
        ;   XREF to: 004f3f80 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_CPackedBitmap_freePackedData_FUN_004f3f80()
    ADD EBX,0x24                        ; 004f5cb5
    MOV EBP,dword ptr [EDI]             ; 004f5cb8
    ADD ESP,0x4                         ; 004f5cba
    CMP ESI,EBP                         ; 004f5cbd
    JL 0x004f5ca9                       ; 004f5cbf
        ;   XREF to: 004f5ca9 (CONDITIONAL_JUMP)  ; LAB_004f5ca9
    LEA EAX,[EAX]                       ; 004f5cc1
    LEA EDX,[EDX]                       ; 004f5cc7
    LEA EAX,[EAX]                       ; 004f5ccd
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f5cd0
        ;   Label: LAB_004f5cd0
    PUSH EAX                            ; 004f5cd4
    PUSH 0x1                            ; 004f5cd5
    PUSH EDI                            ; 004f5cd7
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_004f5a50 ; 004f5cd8
        ;   XREF to: 004f5a50 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_004f5a50(CPackedBitmapSet * this_ptr, int apply_palette_flag, int bitmap_index)
    ADD ESP,0xc                         ; 004f5cdd
    POP ESI                             ; 004f5ce0
    POP EBP                             ; 004f5ce1
        ;   Label: LAB_004f5ce1
    POP EDI                             ; 004f5ce2
    POP EBX                             ; 004f5ce3
    RET                                 ; 004f5ce4

