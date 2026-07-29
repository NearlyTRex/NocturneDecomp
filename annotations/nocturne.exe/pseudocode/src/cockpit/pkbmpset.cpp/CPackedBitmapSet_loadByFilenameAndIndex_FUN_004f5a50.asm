; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_004f5a50(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   apply_palette_flag
; int              Stack[0xc]:4   bitmap_index
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_ensureBitmapLoaded_FUN_004f5c80 at 004f5cd8
;
; Referenced Globals:
;   TerminatedCString s_raw_0058d74b
;   TerminatedCString s_pbg_0058d750
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_004f4ac0
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_004f5740
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_004f5a20
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5a50
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_004f5a50
    PUSH ESI                            ; 004f5a51
    PUSH EDI                            ; 004f5a52
    PUSH EBP                            ; 004f5a53
    MOV EDI,dword ptr [ESP + 0x14]      ; 004f5a54
    MOV EBP,dword ptr [ESP + 0x18]      ; 004f5a58
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004f5a5c
    CMP byte ptr [EDI + 0x8],0x0        ; 004f5a60
    JNZ 0x004f5ab5                      ; 004f5a64
        ;   XREF to: 004f5ab5 (CONDITIONAL_JUMP)  ; LAB_004f5ab5
    TEST EBX,EBX                        ; 004f5a66
    JGE 0x004f5a95                      ; 004f5a68
        ;   XREF to: 004f5a95 (CONDITIONAL_JUMP)  ; LAB_004f5a95
    MOV EDX,dword ptr [EDI]             ; 004f5a6a
    XOR EBX,EBX                         ; 004f5a6c
    TEST EDX,EDX                        ; 004f5a6e
    JLE 0x004f5a90                      ; 004f5a70
        ;   XREF to: 004f5a90 (CONDITIONAL_JUMP)  ; LAB_004f5a90
    XOR ESI,ESI                         ; 004f5a72
    MOV EAX,dword ptr [EDI + 0x4]       ; 004f5a74
        ;   Label: LAB_004f5a74
    PUSH EBP                            ; 004f5a77
    ADD EAX,ESI                         ; 004f5a78
    PUSH EAX                            ; 004f5a7a
    INC EBX                             ; 004f5a7b
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_004f4ac0 ; 004f5a7c
        ;   XREF to: 004f4ac0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_004f4ac0(CPackedBitmap * this_ptr, int apply_palette_flag)
    ADD ESI,0x24                        ; 004f5a81
    MOV ECX,dword ptr [EDI]             ; 004f5a84
    ADD ESP,0x8                         ; 004f5a86
    CMP EBX,ECX                         ; 004f5a89
    JL 0x004f5a74                       ; 004f5a8b
        ;   XREF to: 004f5a74 (CONDITIONAL_JUMP)  ; LAB_004f5a74
    LEA EAX,[EAX]                       ; 004f5a8d
    POP EBP                             ; 004f5a90
        ;   Label: LAB_004f5a90
    POP EDI                             ; 004f5a91
    POP ESI                             ; 004f5a92
    POP EBX                             ; 004f5a93
    RET                                 ; 004f5a94
    LEA EAX,[EBX*0x8 + 0x0]             ; 004f5a95
        ;   Label: LAB_004f5a95
    ADD EBX,EAX                         ; 004f5a9c
    SHL EBX,0x2                         ; 004f5a9e
    MOV EAX,dword ptr [EDI + 0x4]       ; 004f5aa1
    PUSH EBP                            ; 004f5aa4
    ADD EAX,EBX                         ; 004f5aa5
    PUSH EAX                            ; 004f5aa7
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_004f4ac0 ; 004f5aa8
        ;   XREF to: 004f4ac0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_004f4ac0(CPackedBitmap * this_ptr, int apply_palette_flag)
    ADD ESP,0x8                         ; 004f5aad
    POP EBP                             ; 004f5ab0
    POP EDI                             ; 004f5ab1
    POP ESI                             ; 004f5ab2
    POP EBX                             ; 004f5ab3
    RET                                 ; 004f5ab4
    MOV DL,0x2e                         ; 004f5ab5
        ;   Label: LAB_004f5ab5
    LEA ESI,[EDI + 0x8]                 ; 004f5ab7
    MOV AL,byte ptr [ESI]               ; 004f5aba
        ;   Label: LAB_004f5aba
    CMP AL,DL                           ; 004f5abc
    JZ 0x004f5ad2                       ; 004f5abe
        ;   XREF to: 004f5ad2 (CONDITIONAL_JUMP)  ; LAB_004f5ad2
    CMP AL,0x0                          ; 004f5ac0
    JZ 0x004f5ad0                       ; 004f5ac2
        ;   XREF to: 004f5ad0 (CONDITIONAL_JUMP)  ; LAB_004f5ad0
    INC ESI                             ; 004f5ac4
    MOV AL,byte ptr [ESI]               ; 004f5ac5
    CMP AL,DL                           ; 004f5ac7
    JZ 0x004f5ad2                       ; 004f5ac9
        ;   XREF to: 004f5ad2 (CONDITIONAL_JUMP)  ; LAB_004f5ad2
    INC ESI                             ; 004f5acb
    CMP AL,0x0                          ; 004f5acc
    JNZ 0x004f5aba                      ; 004f5ace
        ;   XREF to: 004f5aba (CONDITIONAL_JUMP)  ; LAB_004f5aba
    SUB ESI,ESI                         ; 004f5ad0
        ;   Label: LAB_004f5ad0
    TEST ESI,ESI                        ; 004f5ad2
        ;   Label: LAB_004f5ad2
    JZ 0x004f5a90                       ; 004f5ad4
        ;   XREF to: 004f5a90 (CONDITIONAL_JUMP)  ; LAB_004f5a90
    PUSH 0x58d74b                       ; 004f5ad6 | = ".raw"
    PUSH ESI                            ; 004f5adb
    CALL crt_string.c__stricmp_FUN_00564520 ; 004f5adc
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f5ae1
    TEST EAX,EAX                        ; 004f5ae4
    JZ 0x004f5b0a                       ; 004f5ae6
        ;   XREF to: 004f5b0a (CONDITIONAL_JUMP)  ; LAB_004f5b0a
    PUSH 0x58d750                       ; 004f5ae8 | = ".pbg"
    PUSH ESI                            ; 004f5aed
    CALL crt_string.c__stricmp_FUN_00564520 ; 004f5aee
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f5af3
    TEST EAX,EAX                        ; 004f5af6
    JNZ 0x004f5a90                      ; 004f5af8
        ;   XREF to: 004f5a90 (CONDITIONAL_JUMP)  ; LAB_004f5a90
    PUSH EBX                            ; 004f5afa
    PUSH EBP                            ; 004f5afb
    PUSH EDI                            ; 004f5afc
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_004f5a20 ; 004f5afd
        ;   XREF to: 004f5a20 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_004f5a20(CPackedBitmapSet * this_ptr, int apply_palette_flag, int bitmap_index)
    ADD ESP,0xc                         ; 004f5b02
    POP EBP                             ; 004f5b05
    POP EDI                             ; 004f5b06
    POP ESI                             ; 004f5b07
    POP EBX                             ; 004f5b08
    RET                                 ; 004f5b09
    PUSH EBX                            ; 004f5b0a
        ;   Label: LAB_004f5b0a
    PUSH EBP                            ; 004f5b0b
    PUSH EDI                            ; 004f5b0c
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_004f5740 ; 004f5b0d
        ;   XREF to: 004f5740 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_004f5740(CPackedBitmapSet * this_ptr, int apply_palette_flag, int bitmap_index)
    ADD ESP,0xc                         ; 004f5b12
    POP EBP                             ; 004f5b15
    POP EDI                             ; 004f5b16
    POP ESI                             ; 004f5b17
    POP EBX                             ; 004f5b18
    RET                                 ; 004f5b19

