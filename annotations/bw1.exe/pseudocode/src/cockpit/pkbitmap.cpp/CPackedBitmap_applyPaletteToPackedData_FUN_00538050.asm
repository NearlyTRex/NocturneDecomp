; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_00538050(CPackedBitmap *this_ptr,uchar *palette_buffer)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; uchar *          Stack[0x8]:4   palette_buffer
;
; XREF[2]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_00538000 at 00538024
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_005391e0 at 005391fe
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538050
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_00538050
    PUSH ESI                            ; 00538051
    PUSH EDI                            ; 00538052
    SUB ESP,0x4                         ; 00538053
    MOV ECX,dword ptr [ESP + 0x14]      ; 00538056
    MOV ESI,dword ptr [ESP + 0x18]      ; 0053805a
    MOV EDX,dword ptr [ECX + 0x20]      ; 0053805e
    MOV EAX,dword ptr [ECX + 0x14]      ; 00538061
    MOV ECX,dword ptr [ECX + 0x1c]      ; 00538064
    MOV EDI,dword ptr [EDX]             ; 00538067
    MOV EDX,dword ptr [EDX + ECX*0x4]   ; 00538069
    ADD EDX,EAX                         ; 0053806c
    ADD EDI,EAX                         ; 0053806e
    MOV dword ptr [ESP],EDX             ; 00538070
    CMP EDI,EDX                         ; 00538073
    JNC 0x005380a4                      ; 00538075
        ;   XREF to: 005380a4 (CONDITIONAL_JUMP)  ; LAB_005380a4
    XOR EBX,EBX                         ; 00538077
        ;   Label: LAB_00538077
    MOV BX,word ptr [EDI + 0x2]         ; 00538079
    LEA EDX,[EBX + 0x3]                 ; 0053807d
    LEA EAX,[EDI + 0x4]                 ; 00538080
    AND DL,0xfc                         ; 00538083
    LEA EDI,[EAX + EDX*0x1]             ; 00538086
    XOR EDX,EDX                         ; 00538089
    TEST EBX,EBX                        ; 0053808b
    JLE 0x0053809f                      ; 0053808d
        ;   XREF to: 0053809f (CONDITIONAL_JUMP)  ; LAB_0053809f
    XOR ECX,ECX                         ; 0053808f
        ;   Label: LAB_0053808f
    MOV CL,byte ptr [EAX]               ; 00538091
    INC EAX                             ; 00538093
    MOV CL,byte ptr [ECX + ESI*0x1]     ; 00538094
    INC EDX                             ; 00538097
    MOV byte ptr [EAX + -0x1],CL        ; 00538098
    CMP EDX,EBX                         ; 0053809b
    JL 0x0053808f                       ; 0053809d
        ;   XREF to: 0053808f (CONDITIONAL_JUMP)  ; LAB_0053808f
    CMP EDI,dword ptr [ESP]             ; 0053809f
        ;   Label: LAB_0053809f
    JC 0x00538077                       ; 005380a2
        ;   XREF to: 00538077 (CONDITIONAL_JUMP)  ; LAB_00538077
    ADD ESP,0x4                         ; 005380a4
        ;   Label: LAB_005380a4
    POP EDI                             ; 005380a7
    POP ESI                             ; 005380a8
    POP EBX                             ; 005380a9
    RET                                 ; 005380aa

