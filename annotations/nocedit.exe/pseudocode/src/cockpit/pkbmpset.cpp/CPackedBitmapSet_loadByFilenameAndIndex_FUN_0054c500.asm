; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_0054c500(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   apply_palette_flag
; int              Stack[0xc]:4   bitmap_index
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_ensureBitmapLoaded_FUN_0054c72e at 0054c788
;
; Referenced Globals:
;   TerminatedCString s_raw_0063f74c
;   TerminatedCString s_pbg_0063f751
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_0054c4d0
;   crt_string.c__stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054c500
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_0054c500
    PUSH ESI                            ; 0054c501
    PUSH EDI                            ; 0054c502
    PUSH EBP                            ; 0054c503
    MOV EDI,dword ptr [ESP + 0x14]      ; 0054c504
    MOV EBP,dword ptr [ESP + 0x18]      ; 0054c508
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0054c50c
    CMP byte ptr [EDI + 0x8],0x0        ; 0054c510
    JNZ 0x0054c565                      ; 0054c514
        ;   XREF to: 0054c565 (CONDITIONAL_JUMP)  ; LAB_0054c565
    TEST EBX,EBX                        ; 0054c516
    JGE 0x0054c545                      ; 0054c518
        ;   XREF to: 0054c545 (CONDITIONAL_JUMP)  ; LAB_0054c545
    MOV EDX,dword ptr [EDI]             ; 0054c51a
    XOR EBX,EBX                         ; 0054c51c
    TEST EDX,EDX                        ; 0054c51e
    JLE 0x0054c540                      ; 0054c520
        ;   XREF to: 0054c540 (CONDITIONAL_JUMP)  ; LAB_0054c540
    XOR ESI,ESI                         ; 0054c522
    MOV EAX,dword ptr [EDI + 0x4]       ; 0054c524
        ;   Label: LAB_0054c524
    PUSH EBP                            ; 0054c527
    ADD EAX,ESI                         ; 0054c528
    PUSH EAX                            ; 0054c52a
    INC EBX                             ; 0054c52b
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0 ; 0054c52c
        ;   XREF to: 0054b4b0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0(CPackedBitmap * this_ptr, int apply_palette_flag)
    ADD ESI,0x24                        ; 0054c531
    MOV ECX,dword ptr [EDI]             ; 0054c534
    ADD ESP,0x8                         ; 0054c536
    CMP EBX,ECX                         ; 0054c539
    JL 0x0054c524                       ; 0054c53b
        ;   XREF to: 0054c524 (CONDITIONAL_JUMP)  ; LAB_0054c524
    LEA EAX,[EAX]                       ; 0054c53d
    POP EBP                             ; 0054c540
        ;   Label: LAB_0054c540
    POP EDI                             ; 0054c541
    POP ESI                             ; 0054c542
    POP EBX                             ; 0054c543
    RET                                 ; 0054c544
    LEA EAX,[EBX*0x8 + 0x0]             ; 0054c545
        ;   Label: LAB_0054c545
    ADD EBX,EAX                         ; 0054c54c
    SHL EBX,0x2                         ; 0054c54e
    MOV EAX,dword ptr [EDI + 0x4]       ; 0054c551
    PUSH EBP                            ; 0054c554
    ADD EAX,EBX                         ; 0054c555
    PUSH EAX                            ; 0054c557
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0 ; 0054c558
        ;   XREF to: 0054b4b0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_0054b4b0(CPackedBitmap * this_ptr, int apply_palette_flag)
    ADD ESP,0x8                         ; 0054c55d
    POP EBP                             ; 0054c560
    POP EDI                             ; 0054c561
    POP ESI                             ; 0054c562
    POP EBX                             ; 0054c563
    RET                                 ; 0054c564
    MOV DL,0x2e                         ; 0054c565
        ;   Label: LAB_0054c565
    LEA ESI,[EDI + 0x8]                 ; 0054c567
    MOV AL,byte ptr [ESI]               ; 0054c56a
        ;   Label: LAB_0054c56a
    CMP AL,DL                           ; 0054c56c
    JZ 0x0054c582                       ; 0054c56e
        ;   XREF to: 0054c582 (CONDITIONAL_JUMP)  ; LAB_0054c582
    CMP AL,0x0                          ; 0054c570
    JZ 0x0054c580                       ; 0054c572
        ;   XREF to: 0054c580 (CONDITIONAL_JUMP)  ; LAB_0054c580
    INC ESI                             ; 0054c574
    MOV AL,byte ptr [ESI]               ; 0054c575
    CMP AL,DL                           ; 0054c577
    JZ 0x0054c582                       ; 0054c579
        ;   XREF to: 0054c582 (CONDITIONAL_JUMP)  ; LAB_0054c582
    INC ESI                             ; 0054c57b
    CMP AL,0x0                          ; 0054c57c
    JNZ 0x0054c56a                      ; 0054c57e
        ;   XREF to: 0054c56a (CONDITIONAL_JUMP)  ; LAB_0054c56a
    SUB ESI,ESI                         ; 0054c580
        ;   Label: LAB_0054c580
    TEST ESI,ESI                        ; 0054c582
        ;   Label: LAB_0054c582
    JZ 0x0054c540                       ; 0054c584
        ;   XREF to: 0054c540 (CONDITIONAL_JUMP)  ; LAB_0054c540
    PUSH 0x63f74c                       ; 0054c586 | = ".raw"
    PUSH ESI                            ; 0054c58b
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 0054c58c
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0054c591
    TEST EAX,EAX                        ; 0054c594
    JZ 0x0054c5ba                       ; 0054c596
        ;   XREF to: 0054c5ba (CONDITIONAL_JUMP)  ; LAB_0054c5ba
    PUSH 0x63f751                       ; 0054c598 | = ".pbg"
    PUSH ESI                            ; 0054c59d
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 0054c59e
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0054c5a3
    TEST EAX,EAX                        ; 0054c5a6
    JNZ 0x0054c540                      ; 0054c5a8
        ;   XREF to: 0054c540 (CONDITIONAL_JUMP)  ; LAB_0054c540
    PUSH EBX                            ; 0054c5aa
    PUSH EBP                            ; 0054c5ab
    PUSH EDI                            ; 0054c5ac
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_0054c4d0 ; 0054c5ad
        ;   XREF to: 0054c4d0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_0054c4d0(CPackedBitmapSet * this_ptr, int apply_palette_flag, int bitmap_index)
    ADD ESP,0xc                         ; 0054c5b2
    POP EBP                             ; 0054c5b5
    POP EDI                             ; 0054c5b6
    POP ESI                             ; 0054c5b7
    POP EBX                             ; 0054c5b8
    RET                                 ; 0054c5b9
    PUSH EBX                            ; 0054c5ba
        ;   Label: LAB_0054c5ba
    PUSH EBP                            ; 0054c5bb
    PUSH EDI                            ; 0054c5bc
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0 ; 0054c5bd
        ;   XREF to: 0054c1e0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0(CPackedBitmapSet * this_ptr)
    ADD ESP,0xc                         ; 0054c5c2
    POP EBP                             ; 0054c5c5
    POP EDI                             ; 0054c5c6
    POP ESI                             ; 0054c5c7
    POP EBX                             ; 0054c5c8
    RET                                 ; 0054c5c9

