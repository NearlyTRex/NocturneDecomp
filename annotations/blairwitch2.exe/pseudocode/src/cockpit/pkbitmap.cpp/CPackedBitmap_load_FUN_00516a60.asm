; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_00516a60(CPackedBitmap *this_ptr,uchar *bitmap_data,int width,int height,int transparency_color,int row_stride)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; uchar *          Stack[0x8]:4   bitmap_data
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
; int              Stack[0x14]:4   transparency_color
; int              Stack[0x18]:4   row_stride
;
; XREF[2]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_005168e0 at 00516926
;   cockpit_pkbmpset.cpp_FUN_005177de at 005179ad
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   cockpit_pkbitmap.cpp_FUN_00516200
;   core_main.c_FUN_004e4500
;   crt_memory.c_operator_new_array_FUN_005b8df8
;   crt_memory.c_realloc_FUN_005b8ce0
;   crt_unknown.c_sprintf_FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516a60
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_00516a60
    PUSH ESI                            ; 00516a61
    PUSH EDI                            ; 00516a62
    PUSH EBP                            ; 00516a63
    SUB ESP,0x144                       ; 00516a64
    MOV EBP,dword ptr [ESP + 0x158]     ; 00516a6a
    PUSH EBP                            ; 00516a71
    CALL cockpit_pkbitmap.cpp_FUN_00516200 ; 00516a72
        ;   XREF to: 00516200 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_00516200()
    ADD ESP,0x4                         ; 00516a77
    MOV EAX,dword ptr [ESP + 0x160]     ; 00516a7a
    MOV dword ptr [EBP + 0x18],EAX      ; 00516a81
    MOV EAX,dword ptr [ESP + 0x164]     ; 00516a84
    MOV EDX,dword ptr [ESP + 0x16c]     ; 00516a8b
    MOV dword ptr [EBP + 0x1c],EAX      ; 00516a92
    TEST EDX,EDX                        ; 00516a95
    JNZ 0x00516aa3                      ; 00516a97
        ;   XREF to: 00516aa3 (CONDITIONAL_JUMP)  ; LAB_00516aa3
    MOV EAX,dword ptr [EBP + 0x18]      ; 00516a99
    MOV dword ptr [ESP + 0x16c],EAX     ; 00516a9c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00516aa3
        ;   Label: LAB_00516aa3
    INC EAX                             ; 00516aa6
    SHL EAX,0x2                         ; 00516aa7
    PUSH EAX                            ; 00516aaa
    CALL crt_memory.c_operator_new_array_FUN_005b8df8 ; 00516aab
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005b8df8()
    ADD ESP,0x4                         ; 00516ab0
    MOV dword ptr [EBP + 0x20],EAX      ; 00516ab3
    TEST EAX,EAX                        ; 00516ab6
    JZ 0x00516c5d                       ; 00516ab8
        ;   XREF to: 00516c5d (CONDITIONAL_JUMP)  ; LAB_00516c5d
    MOV EAX,dword ptr [ESP + 0x15c]     ; 00516abe
        ;   Label: LAB_00516abe
    XOR EDI,EDI                         ; 00516ac5
    XOR ESI,ESI                         ; 00516ac7
    MOV dword ptr [ESP + 0x130],EDI     ; 00516ac9
    MOV dword ptr [ESP + 0x140],EAX     ; 00516ad0
    MOV dword ptr [ESP + 0x12c],EDI     ; 00516ad7
    MOV dword ptr [ESP + 0x13c],EDI     ; 00516ade
    MOV ECX,dword ptr [ESP + 0x12c]     ; 00516ae5
        ;   Label: LAB_00516ae5
    MOV EAX,dword ptr [EBP + 0x20]      ; 00516aec
    ADD EAX,ECX                         ; 00516aef
    MOV dword ptr [EAX],ESI             ; 00516af1
    MOV EAX,dword ptr [ESP + 0x130]     ; 00516af3
    CMP EAX,dword ptr [EBP + 0x1c]      ; 00516afa
    JGE 0x00516c88                      ; 00516afd
        ;   XREF to: 00516c88 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBP + 0x18]      ; 00516b03
    XOR EBX,EBX                         ; 00516b06
    TEST EDI,EDI                        ; 00516b08
    JLE 0x00516c21                      ; 00516b0a
        ;   XREF to: 00516c21 (CONDITIONAL_JUMP)  ; LAB_00516c21
    MOV EAX,dword ptr [ESP + 0x140]     ; 00516b10
        ;   Label: LAB_00516b10
    ADD EAX,EBX                         ; 00516b17
    XOR EDX,EDX                         ; 00516b19
    MOV EDI,dword ptr [ESP + 0x168]     ; 00516b1b
    MOV DL,byte ptr [EAX]               ; 00516b22
    CMP EDX,EDI                         ; 00516b24
    JZ 0x00516c85                       ; 00516b26
        ;   XREF to: 00516c85 (CONDITIONAL_JUMP)  ; LAB_00516c85
    MOV ECX,dword ptr [ESP + 0x168]     ; 00516b2c
    MOV dword ptr [ESP + 0x134],EBX     ; 00516b33
    INC EBX                             ; 00516b3a
        ;   Label: LAB_00516b3a
    MOV EDX,dword ptr [EBP + 0x18]      ; 00516b3b
    INC EAX                             ; 00516b3e
    CMP EBX,EDX                         ; 00516b3f
    JGE 0x00516b4b                      ; 00516b41
        ;   XREF to: 00516b4b (CONDITIONAL_JUMP)  ; LAB_00516b4b
    XOR EDX,EDX                         ; 00516b43
    MOV DL,byte ptr [EAX]               ; 00516b45
    CMP EDX,ECX                         ; 00516b47
    JNZ 0x00516b3a                      ; 00516b49
        ;   XREF to: 00516b3a (CONDITIONAL_JUMP)  ; LAB_00516b3a
    MOV EAX,dword ptr [ESP + 0x134]     ; 00516b4b
        ;   Label: LAB_00516b4b
    MOV EDI,EBX                         ; 00516b52
    SUB EDI,EAX                         ; 00516b54
    LEA EAX,[EDI + 0x3]                 ; 00516b56
    AND AL,0xfc                         ; 00516b59
    ADD EAX,ESI                         ; 00516b5b
    ADD EAX,0x4                         ; 00516b5d
    MOV EDX,dword ptr [ESP + 0x13c]     ; 00516b60
    MOV dword ptr [ESP + 0x138],EAX     ; 00516b67
    CMP EAX,EDX                         ; 00516b6e
    JLE 0x00516bd6                      ; 00516b70
        ;   XREF to: 00516bd6 (CONDITIONAL_JUMP)  ; LAB_00516bd6
    ADD EAX,0x4000                      ; 00516b72
    PUSH EAX                            ; 00516b77
    MOV dword ptr [ESP + 0x140],EAX     ; 00516b78
    MOV EAX,dword ptr [EBP + 0x14]      ; 00516b7f
    PUSH EAX                            ; 00516b82
    CALL crt_memory.c_realloc_FUN_005b8ce0 ; 00516b83
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005b8ce0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 00516b88
    MOV dword ptr [EBP + 0x14],EAX      ; 00516b8b
    TEST EAX,EAX                        ; 00516b8e
    JNZ 0x00516bd6                      ; 00516b90
        ;   XREF to: 00516bd6 (CONDITIONAL_JUMP)  ; LAB_00516bd6
    MOV ECX,dword ptr [ESP + 0x13c]     ; 00516b92
    PUSH ECX                            ; 00516b99
    MOV EAX,dword ptr [ESP + 0x134]     ; 00516b9a
    PUSH EAX                            ; 00516ba1
    PUSH EBP                            ; 00516ba2
    PUSH 0x5e1be8                       ; 00516ba3
    LEA EAX,[ESP + 0x10]                ; 00516ba8
    PUSH EAX                            ; 00516bac
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00516bad
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV EDX,0x5e1c29                    ; 00516bb2
    ADD ESP,0x14                        ; 00516bb7
    MOV EAX,ESP                         ; 00516bba
    MOV ECX,0x3b4                       ; 00516bbc
    PUSH EAX                            ; 00516bc1
    MOV dword ptr [0x01d046a0],EDX      ; 00516bc2 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00516bc8 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00516bce
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00516bd3
    MOV EAX,dword ptr [EBP + 0x14]      ; 00516bd6
        ;   Label: LAB_00516bd6
    ADD EAX,ESI                         ; 00516bd9
    MOV ECX,dword ptr [ESP + 0x134]     ; 00516bdb
    MOV word ptr [EAX],CX               ; 00516be2
    XOR ESI,ESI                         ; 00516be5
    MOV word ptr [EAX + 0x2],DI         ; 00516be7
    XOR ECX,ECX                         ; 00516beb
    MOV SI,word ptr [EAX]               ; 00516bed
    MOV CX,DI                           ; 00516bf0
    MOV EDI,dword ptr [ESP + 0x140]     ; 00516bf3
    LEA EDX,[EAX + 0x4]                 ; 00516bfa
    ADD ESI,EDI                         ; 00516bfd
    MOV EDI,EDX                         ; 00516bff
    PUSH EDI                            ; 00516c01
    MOV EAX,ECX                         ; 00516c02
    SHR ECX,0x2                         ; 00516c04
    MOVSD.REP ES:EDI,ESI                ; 00516c07
    MOV CL,AL                           ; 00516c09
    AND CL,0x3                          ; 00516c0b
    MOVSB.REP ES:EDI,ESI                ; 00516c0e
    POP EDI                             ; 00516c10
    MOV ESI,dword ptr [ESP + 0x138]     ; 00516c11
    CMP EBX,dword ptr [EBP + 0x18]      ; 00516c18
        ;   Label: LAB_00516c18
    JL 0x00516b10                       ; 00516c1b
        ;   XREF to: 00516b10 (CONDITIONAL_JUMP)  ; LAB_00516b10
    MOV ECX,dword ptr [ESP + 0x130]     ; 00516c21
        ;   Label: LAB_00516c21
    MOV EDX,dword ptr [ESP + 0x12c]     ; 00516c28
    MOV EAX,dword ptr [ESP + 0x16c]     ; 00516c2f
    MOV EBX,dword ptr [ESP + 0x140]     ; 00516c36
    INC ECX                             ; 00516c3d
    ADD EDX,0x4                         ; 00516c3e
    ADD EBX,EAX                         ; 00516c41
    MOV dword ptr [ESP + 0x130],ECX     ; 00516c43
    MOV dword ptr [ESP + 0x140],EBX     ; 00516c4a
    MOV dword ptr [ESP + 0x12c],EDX     ; 00516c51
    JMP 0x00516ae5                      ; 00516c58
        ;   XREF to: 00516ae5 (UNCONDITIONAL_JUMP)  ; LAB_00516ae5
    MOV EBX,0x5e1b8b                    ; 00516c5d
        ;   Label: LAB_00516c5d
    MOV ESI,0x37c                       ; 00516c62
    PUSH 0x5e1ba3                       ; 00516c67
    MOV dword ptr [0x01d046a0],EBX      ; 00516c6c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00516c72 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00516c78
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00516c7d
    JMP 0x00516abe                      ; 00516c80
        ;   XREF to: 00516abe (UNCONDITIONAL_JUMP)  ; LAB_00516abe
    INC EBX                             ; 00516c85
        ;   Label: LAB_00516c85
    JMP 0x00516c18                      ; 00516c86
        ;   XREF to: 00516c18 (UNCONDITIONAL_JUMP)  ; LAB_00516c18

