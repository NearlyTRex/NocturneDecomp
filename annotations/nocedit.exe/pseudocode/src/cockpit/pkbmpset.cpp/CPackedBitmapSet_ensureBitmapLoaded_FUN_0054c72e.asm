; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_ensureBitmapLoaded_FUN_0054c72e(CPackedBitmapSet *this_ptr,int bitmap_index)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bitmap_index
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_freePackedData_FUN_0054a940
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_0054c500
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 0054c72e
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_ensureBitmapLoaded_FUN_0054c72e
    PUSH EBX                            ; 0054c730
    PUSH EDI                            ; 0054c731
    PUSH EBP                            ; 0054c732
    MOV EDI,dword ptr [ESP + 0x10]      ; 0054c733
    MOV EBX,dword ptr [ESP + 0x14]      ; 0054c737
    LEA EAX,[EBX*0x8 + 0x0]             ; 0054c73b
    ADD EAX,EBX                         ; 0054c742
    MOV EBX,dword ptr [EDI + 0x4]       ; 0054c744
    CMP dword ptr [EBX + EAX*0x4 + 0x14],0x0 ; 0054c747
    JNZ 0x0054c791                      ; 0054c74c
        ;   XREF to: 0054c791 (CONDITIONAL_JUMP)  ; LAB_0054c791
    PUSH ESI                            ; 0054c74e
    MOV ECX,dword ptr [EDI]             ; 0054c74f
    XOR ESI,ESI                         ; 0054c751
    TEST ECX,ECX                        ; 0054c753
    JLE 0x0054c780                      ; 0054c755
        ;   XREF to: 0054c780 (CONDITIONAL_JUMP)  ; LAB_0054c780
    XOR EBX,EBX                         ; 0054c757
    MOV EAX,dword ptr [EDI + 0x4]       ; 0054c759
        ;   Label: LAB_0054c759
    ADD EAX,EBX                         ; 0054c75c
    PUSH EAX                            ; 0054c75e
    INC ESI                             ; 0054c75f
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_freePackedData_FUN_0054a940 ; 0054c760
        ;   XREF to: 0054a940 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_freePackedData_FUN_0054a940(CPackedBitmap * this_ptr)
    ADD EBX,0x24                        ; 0054c765
    MOV EBP,dword ptr [EDI]             ; 0054c768
    ADD ESP,0x4                         ; 0054c76a
    CMP ESI,EBP                         ; 0054c76d
    JL 0x0054c759                       ; 0054c76f
        ;   XREF to: 0054c759 (CONDITIONAL_JUMP)  ; LAB_0054c759
    LEA EAX,[EAX]                       ; 0054c771
    LEA EDX,[EDX]                       ; 0054c777
    LEA EAX,[EAX]                       ; 0054c77d
    MOV EAX,dword ptr [ESP + 0x18]      ; 0054c780
        ;   Label: LAB_0054c780
    PUSH EAX                            ; 0054c784
    PUSH 0x1                            ; 0054c785
    PUSH EDI                            ; 0054c787
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_0054c500 ; 0054c788
        ;   XREF to: 0054c500 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_0054c500(CPackedBitmapSet * this_ptr, int apply_palette_flag, int bitmap_index)
    ADD ESP,0xc                         ; 0054c78d
    POP ESI                             ; 0054c790
    POP EBP                             ; 0054c791
        ;   Label: LAB_0054c791
    POP EDI                             ; 0054c792
    POP EBX                             ; 0054c793
    RET                                 ; 0054c794

