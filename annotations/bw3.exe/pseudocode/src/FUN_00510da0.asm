; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00510da0(CPackedBitmapSet *param_1,int param_2,int param_3)
;
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_0050fda0
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_00510a90
;   crt_string.c__stricmp_FUN_005a3260
;   FUN_00510d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510da0
        ;   Label: FUN_00510da0
    PUSH ESI                            ; 00510da1
    PUSH EDI                            ; 00510da2
    PUSH EBP                            ; 00510da3
    MOV EDI,dword ptr [ESP + 0x14]      ; 00510da4
    MOV EBP,dword ptr [ESP + 0x18]      ; 00510da8
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00510dac
    CMP byte ptr [EDI + 0x8],0x0        ; 00510db0
    JNZ 0x00510e05                      ; 00510db4
        ;   XREF to: 00510e05 (CONDITIONAL_JUMP)  ; LAB_00510e05
    TEST EBX,EBX                        ; 00510db6
    JGE 0x00510de5                      ; 00510db8
        ;   XREF to: 00510de5 (CONDITIONAL_JUMP)  ; LAB_00510de5
    MOV EDX,dword ptr [EDI]             ; 00510dba
    XOR EBX,EBX                         ; 00510dbc
    TEST EDX,EDX                        ; 00510dbe
    JLE 0x00510de0                      ; 00510dc0
        ;   XREF to: 00510de0 (CONDITIONAL_JUMP)  ; LAB_00510de0
    XOR ESI,ESI                         ; 00510dc2
    MOV EAX,dword ptr [EDI + 0x4]       ; 00510dc4
        ;   Label: LAB_00510dc4
    PUSH EBP                            ; 00510dc7
    ADD EAX,ESI                         ; 00510dc8
    PUSH EAX                            ; 00510dca
    INC EBX                             ; 00510dcb
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_0050fda0 ; 00510dcc
        ;   XREF to: 0050fda0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_0050fda0(CPackedBitmap * this_ptr, int apply_palette_flag)
    ADD ESI,0x24                        ; 00510dd1
    MOV ECX,dword ptr [EDI]             ; 00510dd4
    ADD ESP,0x8                         ; 00510dd6
    CMP EBX,ECX                         ; 00510dd9
    JL 0x00510dc4                       ; 00510ddb
        ;   XREF to: 00510dc4 (CONDITIONAL_JUMP)  ; LAB_00510dc4
    LEA EAX,[EAX]                       ; 00510ddd
    POP EBP                             ; 00510de0
        ;   Label: LAB_00510de0
    POP EDI                             ; 00510de1
    POP ESI                             ; 00510de2
    POP EBX                             ; 00510de3
    RET                                 ; 00510de4
    LEA EAX,[EBX*0x8 + 0x0]             ; 00510de5
        ;   Label: LAB_00510de5
    ADD EBX,EAX                         ; 00510dec
    SHL EBX,0x2                         ; 00510dee
    MOV EAX,dword ptr [EDI + 0x4]       ; 00510df1
    PUSH EBP                            ; 00510df4
    ADD EAX,EBX                         ; 00510df5
    PUSH EAX                            ; 00510df7
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_0050fda0 ; 00510df8
        ;   XREF to: 0050fda0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_0050fda0(CPackedBitmap * this_ptr, int apply_palette_flag)
    ADD ESP,0x8                         ; 00510dfd
    POP EBP                             ; 00510e00
    POP EDI                             ; 00510e01
    POP ESI                             ; 00510e02
    POP EBX                             ; 00510e03
    RET                                 ; 00510e04
    MOV DL,0x2e                         ; 00510e05
        ;   Label: LAB_00510e05
    LEA ESI,[EDI + 0x8]                 ; 00510e07
    MOV AL,byte ptr [ESI]               ; 00510e0a
        ;   Label: LAB_00510e0a
    CMP AL,DL                           ; 00510e0c
    JZ 0x00510e22                       ; 00510e0e
        ;   XREF to: 00510e22 (CONDITIONAL_JUMP)  ; LAB_00510e22
    CMP AL,0x0                          ; 00510e10
    JZ 0x00510e20                       ; 00510e12
        ;   XREF to: 00510e20 (CONDITIONAL_JUMP)  ; LAB_00510e20
    INC ESI                             ; 00510e14
    MOV AL,byte ptr [ESI]               ; 00510e15
    CMP AL,DL                           ; 00510e17
    JZ 0x00510e22                       ; 00510e19
        ;   XREF to: 00510e22 (CONDITIONAL_JUMP)  ; LAB_00510e22
    INC ESI                             ; 00510e1b
    CMP AL,0x0                          ; 00510e1c
    JNZ 0x00510e0a                      ; 00510e1e
        ;   XREF to: 00510e0a (CONDITIONAL_JUMP)  ; LAB_00510e0a
    SUB ESI,ESI                         ; 00510e20
        ;   Label: LAB_00510e20
    TEST ESI,ESI                        ; 00510e22
        ;   Label: LAB_00510e22
    JZ 0x00510de0                       ; 00510e24
        ;   XREF to: 00510de0 (CONDITIONAL_JUMP)  ; LAB_00510de0
    PUSH 0x5cc269                       ; 00510e26
    PUSH ESI                            ; 00510e2b
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00510e2c
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00510e31
    TEST EAX,EAX                        ; 00510e34
    JZ 0x00510e5a                       ; 00510e36
        ;   XREF to: 00510e5a (CONDITIONAL_JUMP)  ; LAB_00510e5a
    PUSH 0x5cc26e                       ; 00510e38
    PUSH ESI                            ; 00510e3d
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00510e3e
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00510e43
    TEST EAX,EAX                        ; 00510e46
    JNZ 0x00510de0                      ; 00510e48
        ;   XREF to: 00510de0 (CONDITIONAL_JUMP)  ; LAB_00510de0
    PUSH EBX                            ; 00510e4a
    PUSH EBP                            ; 00510e4b
    PUSH EDI                            ; 00510e4c
    CALL FUN_00510d70                   ; 00510e4d
        ;   XREF to: 00510d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00510d70()
    ADD ESP,0xc                         ; 00510e52
    POP EBP                             ; 00510e55
    POP EDI                             ; 00510e56
    POP ESI                             ; 00510e57
    POP EBX                             ; 00510e58
    RET                                 ; 00510e59
    PUSH EBX                            ; 00510e5a
        ;   Label: LAB_00510e5a
    PUSH EBP                            ; 00510e5b
    PUSH EDI                            ; 00510e5c
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_00510a90 ; 00510e5d
        ;   XREF to: 00510a90 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_00510a90(CPackedBitmapSet * this_ptr, int apply_palette_flag, int bitmap_index)
    ADD ESP,0xc                         ; 00510e62
    POP EBP                             ; 00510e65
    POP EDI                             ; 00510e66
    POP ESI                             ; 00510e67
    POP EBX                             ; 00510e68
    RET                                 ; 00510e69

