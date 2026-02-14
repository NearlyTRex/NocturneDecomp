; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440(CPackedBitmap *this_ptr,uchar *palette_buffer)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; uchar *          Stack[0x8]:4   palette_buffer
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[3]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_0054b3f0 at 0054b414
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadPBGFile_FUN_0054bb40 at 0054bc81
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_applyPaletteToAllBitmaps_FUN_0054c620 at 0054c63e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054b440
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_0054b440
    PUSH ESI                            ; 0054b441
    PUSH EDI                            ; 0054b442
    SUB ESP,0x4                         ; 0054b443
    MOV ECX,dword ptr [ESP + 0x14]      ; 0054b446
    MOV ESI,dword ptr [ESP + 0x18]      ; 0054b44a
    MOV EDX,dword ptr [ECX + 0x20]      ; 0054b44e
    MOV EAX,dword ptr [ECX + 0x14]      ; 0054b451
    MOV ECX,dword ptr [ECX + 0x1c]      ; 0054b454
    MOV EDI,dword ptr [EDX]             ; 0054b457
    MOV EDX,dword ptr [EDX + ECX*0x4]   ; 0054b459
    ADD EDX,EAX                         ; 0054b45c
    ADD EDI,EAX                         ; 0054b45e
    MOV dword ptr [ESP],EDX             ; 0054b460
    CMP EDI,EDX                         ; 0054b463
    JNC 0x0054b494                      ; 0054b465
        ;   XREF to: 0054b494 (CONDITIONAL_JUMP)  ; LAB_0054b494
    XOR EBX,EBX                         ; 0054b467
        ;   Label: LAB_0054b467
    MOV BX,word ptr [EDI + 0x2]         ; 0054b469
    LEA EDX,[EBX + 0x3]                 ; 0054b46d
    LEA EAX,[EDI + 0x4]                 ; 0054b470
    AND DL,0xfc                         ; 0054b473
    LEA EDI,[EAX + EDX*0x1]             ; 0054b476
    XOR EDX,EDX                         ; 0054b479
    TEST EBX,EBX                        ; 0054b47b
    JLE 0x0054b48f                      ; 0054b47d
        ;   XREF to: 0054b48f (CONDITIONAL_JUMP)  ; LAB_0054b48f
    XOR ECX,ECX                         ; 0054b47f
        ;   Label: LAB_0054b47f
    MOV CL,byte ptr [EAX]               ; 0054b481
    INC EAX                             ; 0054b483
    MOV CL,byte ptr [ECX + ESI*0x1]     ; 0054b484
    INC EDX                             ; 0054b487
    MOV byte ptr [EAX + -0x1],CL        ; 0054b488
    CMP EDX,EBX                         ; 0054b48b
    JL 0x0054b47f                       ; 0054b48d
        ;   XREF to: 0054b47f (CONDITIONAL_JUMP)  ; LAB_0054b47f
    CMP EDI,dword ptr [ESP]             ; 0054b48f
        ;   Label: LAB_0054b48f
    JC 0x0054b467                       ; 0054b492
        ;   XREF to: 0054b467 (CONDITIONAL_JUMP)  ; LAB_0054b467
    ADD ESP,0x4                         ; 0054b494
        ;   Label: LAB_0054b494
    POP EDI                             ; 0054b497
    POP ESI                             ; 0054b498
    POP EBX                             ; 0054b499
    RET                                 ; 0054b49a

