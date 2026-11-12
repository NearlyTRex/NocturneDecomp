; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00538a60(CPackedBitmapSet *this_ptr,char *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
; int              Stack[0x10]:4   param_4
; int              Stack[0x14]:4   param_5
; int              Stack[0x18]:4   param_6
; int              Stack[0x1c]:4   param_7
; int              Stack[0x20]:4   param_8
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_00537c30
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_00538900
;   cockpit_pkbmpset.cpp_FUN_00538990
;   cockpit_pkbmpset.cpp_FUN_005389c0
;   crt_unknown.c_sprintf_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538a60
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00538a60
    PUSH ESI                            ; 00538a61
    PUSH EDI                            ; 00538a62
    PUSH EBP                            ; 00538a63
    SUB ESP,0x64                        ; 00538a64
    MOV EDI,dword ptr [ESP + 0x78]      ; 00538a67
    MOV ESI,dword ptr [ESP + 0x88]      ; 00538a6b
    MOV EBP,dword ptr [ESP + 0x8c]      ; 00538a72
    PUSH EDI                            ; 00538a79
    CALL cockpit_pkbmpset.cpp_FUN_00538990 ; 00538a7a
        ;   XREF to: 00538990 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbmpset.cpp_FUN_00538990()
    ADD ESP,0x4                         ; 00538a7f
    PUSH EDI                            ; 00538a82
    CALL cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_00538900 ; 00538a83
        ;   XREF to: 00538900 (UNCONDITIONAL_CALL)  ; void cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_00538900(CPackedBitmapSet * this_ptr)
    MOV EAX,EBP                         ; 00538a88
    SUB EAX,ESI                         ; 00538a8a
    ADD ESP,0x4                         ; 00538a8c
    INC EAX                             ; 00538a8f
    PUSH EAX                            ; 00538a90
    PUSH EDI                            ; 00538a91
    CALL cockpit_pkbmpset.cpp_FUN_005389c0 ; 00538a92
        ;   XREF to: 005389c0 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbmpset.cpp_FUN_005389c0()
    ADD ESP,0x8                         ; 00538a97
    MOV EAX,dword ptr [ESP + 0x84]      ; 00538a9a
    MOV dword ptr [EDI + 0x20],EAX      ; 00538aa1
    MOV EAX,dword ptr [ESP + 0x80]      ; 00538aa4
    MOV EBX,ESI                         ; 00538aab
    MOV dword ptr [EDI + 0x1c],EAX      ; 00538aad
    CMP ESI,EBP                         ; 00538ab0
    JG 0x00538b20                       ; 00538ab2
        ;   XREF to: 00538b20 (CONDITIONAL_JUMP)  ; LAB_00538b20
    LEA EAX,[ESI*0x8 + 0x0]             ; 00538ab4
    ADD EAX,ESI                         ; 00538abb
    SHL EAX,0x2                         ; 00538abd
    MOV ESI,EAX                         ; 00538ac0
    NEG ESI                             ; 00538ac2
    ADD ESI,EAX                         ; 00538ac4
    PUSH EBX                            ; 00538ac6
        ;   Label: LAB_00538ac6
    MOV EDX,dword ptr [ESP + 0x80]      ; 00538ac7
    PUSH EDX                            ; 00538ace
    LEA EAX,[ESP + 0x8]                 ; 00538acf
    PUSH EAX                            ; 00538ad3
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00538ad4
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 00538ad9
    MOV ECX,dword ptr [ESP + 0x94]      ; 00538adc
    PUSH ECX                            ; 00538ae3
    MOV EAX,dword ptr [ESP + 0x94]      ; 00538ae4
    PUSH EAX                            ; 00538aeb
    MOV EDX,dword ptr [ESP + 0x8c]      ; 00538aec
    PUSH EDX                            ; 00538af3
    MOV ECX,dword ptr [ESP + 0x8c]      ; 00538af4
    PUSH ECX                            ; 00538afb
    LEA EAX,[ESP + 0x10]                ; 00538afc
    PUSH EAX                            ; 00538b00
    MOV EAX,dword ptr [EDI + 0x4]       ; 00538b01
    ADD EAX,ESI                         ; 00538b04
    PUSH EAX                            ; 00538b06
    INC EBX                             ; 00538b07
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_00537c30 ; 00538b08
        ;   XREF to: 00537c30 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_00537c30(CPackedBitmap * this_ptr, char * filename, int width, int height, ...)
    ADD ESI,0x24                        ; 00538b0d
    ADD ESP,0x18                        ; 00538b10
    CMP EBX,EBP                         ; 00538b13
    JLE 0x00538ac6                      ; 00538b15
        ;   XREF to: 00538ac6 (CONDITIONAL_JUMP)  ; LAB_00538ac6
    LEA EAX,[EAX]                       ; 00538b17
    LEA EDX,[EDX]                       ; 00538b1d
    ADD ESP,0x64                        ; 00538b20
        ;   Label: LAB_00538b20
    POP EBP                             ; 00538b23
    POP EDI                             ; 00538b24
    POP ESI                             ; 00538b25
    POP EBX                             ; 00538b26
    RET                                 ; 00538b27

