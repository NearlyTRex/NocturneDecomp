; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_00517d70(CPackedBitmapSet *this_ptr,int apply_palette_flag,int bitmap_index)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   apply_palette_flag
; int              Stack[0xc]:4   bitmap_index
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_00516d70
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_00517a60
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_00517d40
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517d70
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_00517d70
    PUSH ESI                            ; 00517d71
    PUSH EDI                            ; 00517d72
    PUSH EBP                            ; 00517d73
    MOV EDI,dword ptr [ESP + 0x14]      ; 00517d74
    MOV EBP,dword ptr [ESP + 0x18]      ; 00517d78
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00517d7c
    CMP byte ptr [EDI + 0x8],0x0        ; 00517d80
    JNZ 0x00517dd5                      ; 00517d84
        ;   XREF to: 00517dd5 (CONDITIONAL_JUMP)  ; LAB_00517dd5
    TEST EBX,EBX                        ; 00517d86
    JGE 0x00517db5                      ; 00517d88
        ;   XREF to: 00517db5 (CONDITIONAL_JUMP)  ; LAB_00517db5
    MOV EDX,dword ptr [EDI]             ; 00517d8a
    XOR EBX,EBX                         ; 00517d8c
    TEST EDX,EDX                        ; 00517d8e
    JLE 0x00517db0                      ; 00517d90
        ;   XREF to: 00517db0 (CONDITIONAL_JUMP)  ; LAB_00517db0
    XOR ESI,ESI                         ; 00517d92
    MOV EAX,dword ptr [EDI + 0x4]       ; 00517d94
        ;   Label: LAB_00517d94
    PUSH EBP                            ; 00517d97
    ADD EAX,ESI                         ; 00517d98
    PUSH EAX                            ; 00517d9a
    INC EBX                             ; 00517d9b
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_00516d70 ; 00517d9c
        ;   XREF to: 00516d70 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_00516d70(CPackedBitmap * this_ptr, int apply_palette_flag)
    ADD ESI,0x24                        ; 00517da1
    MOV ECX,dword ptr [EDI]             ; 00517da4
    ADD ESP,0x8                         ; 00517da6
    CMP EBX,ECX                         ; 00517da9
    JL 0x00517d94                       ; 00517dab
        ;   XREF to: 00517d94 (CONDITIONAL_JUMP)  ; LAB_00517d94
    LEA EAX,[EAX]                       ; 00517dad
    POP EBP                             ; 00517db0
        ;   Label: LAB_00517db0
    POP EDI                             ; 00517db1
    POP ESI                             ; 00517db2
    POP EBX                             ; 00517db3
    RET                                 ; 00517db4
    LEA EAX,[EBX*0x8 + 0x0]             ; 00517db5
        ;   Label: LAB_00517db5
    ADD EBX,EAX                         ; 00517dbc
    SHL EBX,0x2                         ; 00517dbe
    MOV EAX,dword ptr [EDI + 0x4]       ; 00517dc1
    PUSH EBP                            ; 00517dc4
    ADD EAX,EBX                         ; 00517dc5
    PUSH EAX                            ; 00517dc7
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_00516d70 ; 00517dc8
        ;   XREF to: 00516d70 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_00516d70(CPackedBitmap * this_ptr, int apply_palette_flag)
    ADD ESP,0x8                         ; 00517dcd
    POP EBP                             ; 00517dd0
    POP EDI                             ; 00517dd1
    POP ESI                             ; 00517dd2
    POP EBX                             ; 00517dd3
    RET                                 ; 00517dd4
    MOV DL,0x2e                         ; 00517dd5
        ;   Label: LAB_00517dd5
    LEA ESI,[EDI + 0x8]                 ; 00517dd7
    MOV AL,byte ptr [ESI]               ; 00517dda
        ;   Label: LAB_00517dda
    CMP AL,DL                           ; 00517ddc
    JZ 0x00517df2                       ; 00517dde
        ;   XREF to: 00517df2 (CONDITIONAL_JUMP)  ; LAB_00517df2
    CMP AL,0x0                          ; 00517de0
    JZ 0x00517df0                       ; 00517de2
        ;   XREF to: 00517df0 (CONDITIONAL_JUMP)  ; LAB_00517df0
    INC ESI                             ; 00517de4
    MOV AL,byte ptr [ESI]               ; 00517de5
    CMP AL,DL                           ; 00517de7
    JZ 0x00517df2                       ; 00517de9
        ;   XREF to: 00517df2 (CONDITIONAL_JUMP)  ; LAB_00517df2
    INC ESI                             ; 00517deb
    CMP AL,0x0                          ; 00517dec
    JNZ 0x00517dda                      ; 00517dee
        ;   XREF to: 00517dda (CONDITIONAL_JUMP)  ; LAB_00517dda
    SUB ESI,ESI                         ; 00517df0
        ;   Label: LAB_00517df0
    TEST ESI,ESI                        ; 00517df2
        ;   Label: LAB_00517df2
    JZ 0x00517db0                       ; 00517df4
        ;   XREF to: 00517db0 (CONDITIONAL_JUMP)  ; LAB_00517db0
    PUSH 0x5e21a6                       ; 00517df6
    PUSH ESI                            ; 00517dfb
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00517dfc
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00517e01
    TEST EAX,EAX                        ; 00517e04
    JZ 0x00517e2a                       ; 00517e06
        ;   XREF to: 00517e2a (CONDITIONAL_JUMP)  ; LAB_00517e2a
    PUSH 0x5e21ab                       ; 00517e08
    PUSH ESI                            ; 00517e0d
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00517e0e
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00517e13
    TEST EAX,EAX                        ; 00517e16
    JNZ 0x00517db0                      ; 00517e18
        ;   XREF to: 00517db0 (CONDITIONAL_JUMP)  ; LAB_00517db0
    PUSH EBX                            ; 00517e1a
    PUSH EBP                            ; 00517e1b
    PUSH EDI                            ; 00517e1c
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_00517d40 ; 00517e1d
        ;   XREF to: 00517d40 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_reloadStoredPBGFile_FUN_00517d40(CPackedBitmapSet * this_ptr, int apply_palette_flag, int bitmap_index)
    ADD ESP,0xc                         ; 00517e22
    POP EBP                             ; 00517e25
    POP EDI                             ; 00517e26
    POP ESI                             ; 00517e27
    POP EBX                             ; 00517e28
    RET                                 ; 00517e29
    PUSH EBX                            ; 00517e2a
        ;   Label: LAB_00517e2a
    PUSH EBP                            ; 00517e2b
    PUSH EDI                            ; 00517e2c
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_00517a60 ; 00517e2d
        ;   XREF to: 00517a60 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_00517a60(CPackedBitmapSet * this_ptr, int apply_palette_flag, int bitmap_index)
    ADD ESP,0xc                         ; 00517e32
    POP EBP                             ; 00517e35
    POP EDI                             ; 00517e36
    POP ESI                             ; 00517e37
    POP EBX                             ; 00517e38
    RET                                 ; 00517e39

