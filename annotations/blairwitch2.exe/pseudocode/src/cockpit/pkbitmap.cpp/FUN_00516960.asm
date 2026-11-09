; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_FUN_00516960(CPackedBitmap *this_ptr,int apply_palette_flag)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   apply_palette_flag
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_00516d70 at 00516dd4
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_0042c520
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_00516d60
;   cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_005169b0
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516960
        ;   Label: cockpit_pkbitmap.cpp_FUN_00516960
    PUSH ESI                            ; 00516961
    MOV EBX,dword ptr [ESP + 0xc]       ; 00516962
    MOV ESI,dword ptr [EBX + 0x18]      ; 00516966
    IMUL ESI,dword ptr [EBX + 0x1c]     ; 00516969
    PUSH ESI                            ; 0051696d
    PUSH 0x0                            ; 0051696e
    PUSH EBX                            ; 00516970
    CALL cockpit_ckptutil.c_FUN_0042c520 ; 00516971
        ;   XREF to: 0042c520 (UNCONDITIONAL_CALL)  ; void * cockpit_ckptutil.c_FUN_0042c520(char * filename, void * buffer, int size)
    MOV ESI,EAX                         ; 00516976
    ADD ESP,0xc                         ; 00516978
    TEST EAX,EAX                        ; 0051697b
    JNZ 0x00516982                      ; 0051697d
        ;   XREF to: 00516982 (CONDITIONAL_JUMP)  ; LAB_00516982
    POP ESI                             ; 0051697f
        ;   Label: LAB_0051697f
    POP EBX                             ; 00516980
    RET                                 ; 00516981
    MOV ECX,dword ptr [EBX + 0x18]      ; 00516982
        ;   Label: LAB_00516982
    PUSH ECX                            ; 00516985
    PUSH EAX                            ; 00516986
    PUSH EBX                            ; 00516987
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_005169b0 ; 00516988
        ;   XREF to: 005169b0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_005169b0(CPackedBitmap * this_ptr, uchar * raw_bitmap_data, int row_stride)
    ADD ESP,0xc                         ; 0051698d
    PUSH ESI                            ; 00516990
    CALL crt_unknown.c_FUN_005b86a0     ; 00516991
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 00516996
    CMP dword ptr [ESP + 0x10],0x0      ; 00516999
    JZ 0x0051697f                       ; 0051699e
        ;   XREF to: 0051697f (CONDITIONAL_JUMP)  ; LAB_0051697f
    PUSH EBX                            ; 005169a0
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_00516d60 ; 005169a1
        ;   XREF to: 00516d60 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_00516d60(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 005169a6
    POP ESI                             ; 005169a9
    POP EBX                             ; 005169aa
    RET                                 ; 005169ab

