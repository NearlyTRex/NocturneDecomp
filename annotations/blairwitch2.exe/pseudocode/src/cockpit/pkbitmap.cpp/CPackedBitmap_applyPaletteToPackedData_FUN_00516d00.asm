; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_00516d00(CPackedBitmap *this_ptr,uchar *palette_buffer)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; uchar *          Stack[0x8]:4   palette_buffer
;
; XREF[2]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_00516cb0 at 00516cd4
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_00517e90 at 00517eae
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516d00
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_00516d00
    PUSH ESI                            ; 00516d01
    PUSH EDI                            ; 00516d02
    SUB ESP,0x4                         ; 00516d03
    MOV ECX,dword ptr [ESP + 0x14]      ; 00516d06
    MOV ESI,dword ptr [ESP + 0x18]      ; 00516d0a
    MOV EDX,dword ptr [ECX + 0x20]      ; 00516d0e
    MOV EAX,dword ptr [ECX + 0x14]      ; 00516d11
    MOV ECX,dword ptr [ECX + 0x1c]      ; 00516d14
    MOV EDI,dword ptr [EDX]             ; 00516d17
    MOV EDX,dword ptr [EDX + ECX*0x4]   ; 00516d19
    ADD EDX,EAX                         ; 00516d1c
    ADD EDI,EAX                         ; 00516d1e
    MOV dword ptr [ESP],EDX             ; 00516d20
    CMP EDI,EDX                         ; 00516d23
    JNC 0x00516d54                      ; 00516d25
        ;   XREF to: 00516d54 (CONDITIONAL_JUMP)  ; LAB_00516d54
    XOR EBX,EBX                         ; 00516d27
        ;   Label: LAB_00516d27
    MOV BX,word ptr [EDI + 0x2]         ; 00516d29
    LEA EDX,[EBX + 0x3]                 ; 00516d2d
    LEA EAX,[EDI + 0x4]                 ; 00516d30
    AND DL,0xfc                         ; 00516d33
    LEA EDI,[EAX + EDX*0x1]             ; 00516d36
    XOR EDX,EDX                         ; 00516d39
    TEST EBX,EBX                        ; 00516d3b
    JLE 0x00516d4f                      ; 00516d3d
        ;   XREF to: 00516d4f (CONDITIONAL_JUMP)  ; LAB_00516d4f
    XOR ECX,ECX                         ; 00516d3f
        ;   Label: LAB_00516d3f
    MOV CL,byte ptr [EAX]               ; 00516d41
    INC EAX                             ; 00516d43
    MOV CL,byte ptr [ECX + ESI*0x1]     ; 00516d44
    INC EDX                             ; 00516d47
    MOV byte ptr [EAX + -0x1],CL        ; 00516d48
    CMP EDX,EBX                         ; 00516d4b
    JL 0x00516d3f                       ; 00516d4d
        ;   XREF to: 00516d3f (CONDITIONAL_JUMP)  ; LAB_00516d3f
    CMP EDI,dword ptr [ESP]             ; 00516d4f
        ;   Label: LAB_00516d4f
    JC 0x00516d27                       ; 00516d52
        ;   XREF to: 00516d27 (CONDITIONAL_JUMP)  ; LAB_00516d27
    ADD ESP,0x4                         ; 00516d54
        ;   Label: LAB_00516d54
    POP EDI                             ; 00516d57
    POP ESI                             ; 00516d58
    POP EBX                             ; 00516d59
    RET                                 ; 00516d5a

