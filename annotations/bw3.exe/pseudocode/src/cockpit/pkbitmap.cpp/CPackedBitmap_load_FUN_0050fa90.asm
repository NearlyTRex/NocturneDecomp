; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_0050fa90(CPackedBitmap *this_ptr,uchar *bitmap_data,int width,int height,int transparency_color,int row_stride)
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
;   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_0050f910 at 0050f956
;   cockpit_pkbmpset.cpp_FUN_00510810 at 005109dd
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0050f230
;   core_main.c_FUN_004e4330
;   crt_memory.c_operator_new_array_FUN_005a40df
;   crt_memory.c_realloc_FUN_005a3e50
;   crt_unknown.c_sprintf_FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050fa90
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0050fa90
    PUSH ESI                            ; 0050fa91
    PUSH EDI                            ; 0050fa92
    PUSH EBP                            ; 0050fa93
    SUB ESP,0x144                       ; 0050fa94
    MOV EBP,dword ptr [ESP + 0x158]     ; 0050fa9a
    PUSH EBP                            ; 0050faa1
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0050f230 ; 0050faa2
        ;   XREF to: 0050f230 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0050f230(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 0050faa7
    MOV EAX,dword ptr [ESP + 0x160]     ; 0050faaa
    MOV dword ptr [EBP + 0x18],EAX      ; 0050fab1
    MOV EAX,dword ptr [ESP + 0x164]     ; 0050fab4
    MOV EDX,dword ptr [ESP + 0x16c]     ; 0050fabb
    MOV dword ptr [EBP + 0x1c],EAX      ; 0050fac2
    TEST EDX,EDX                        ; 0050fac5
    JNZ 0x0050fad3                      ; 0050fac7
        ;   XREF to: 0050fad3 (CONDITIONAL_JUMP)  ; LAB_0050fad3
    MOV EAX,dword ptr [EBP + 0x18]      ; 0050fac9
    MOV dword ptr [ESP + 0x16c],EAX     ; 0050facc
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0050fad3
        ;   Label: LAB_0050fad3
    INC EAX                             ; 0050fad6
    SHL EAX,0x2                         ; 0050fad7
    PUSH EAX                            ; 0050fada
    CALL crt_memory.c_operator_new_array_FUN_005a40df ; 0050fadb
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005a40df()
    ADD ESP,0x4                         ; 0050fae0
    MOV dword ptr [EBP + 0x20],EAX      ; 0050fae3
    TEST EAX,EAX                        ; 0050fae6
    JZ 0x0050fc8d                       ; 0050fae8
        ;   XREF to: 0050fc8d (CONDITIONAL_JUMP)  ; LAB_0050fc8d
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0050faee
        ;   Label: LAB_0050faee
    XOR EDI,EDI                         ; 0050faf5
    XOR ESI,ESI                         ; 0050faf7
    MOV dword ptr [ESP + 0x130],EDI     ; 0050faf9
    MOV dword ptr [ESP + 0x140],EAX     ; 0050fb00
    MOV dword ptr [ESP + 0x12c],EDI     ; 0050fb07
    MOV dword ptr [ESP + 0x13c],EDI     ; 0050fb0e
    MOV ECX,dword ptr [ESP + 0x12c]     ; 0050fb15
        ;   Label: LAB_0050fb15
    MOV EAX,dword ptr [EBP + 0x20]      ; 0050fb1c
    ADD EAX,ECX                         ; 0050fb1f
    MOV dword ptr [EAX],ESI             ; 0050fb21
    MOV EAX,dword ptr [ESP + 0x130]     ; 0050fb23
    CMP EAX,dword ptr [EBP + 0x1c]      ; 0050fb2a
    JGE 0x0050fcb8                      ; 0050fb2d
        ;   XREF to: 0050fcb8 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBP + 0x18]      ; 0050fb33
    XOR EBX,EBX                         ; 0050fb36
    TEST EDI,EDI                        ; 0050fb38
    JLE 0x0050fc51                      ; 0050fb3a
        ;   XREF to: 0050fc51 (CONDITIONAL_JUMP)  ; LAB_0050fc51
    MOV EAX,dword ptr [ESP + 0x140]     ; 0050fb40
        ;   Label: LAB_0050fb40
    ADD EAX,EBX                         ; 0050fb47
    XOR EDX,EDX                         ; 0050fb49
    MOV EDI,dword ptr [ESP + 0x168]     ; 0050fb4b
    MOV DL,byte ptr [EAX]               ; 0050fb52
    CMP EDX,EDI                         ; 0050fb54
    JZ 0x0050fcb5                       ; 0050fb56
        ;   XREF to: 0050fcb5 (CONDITIONAL_JUMP)  ; LAB_0050fcb5
    MOV ECX,dword ptr [ESP + 0x168]     ; 0050fb5c
    MOV dword ptr [ESP + 0x134],EBX     ; 0050fb63
    INC EBX                             ; 0050fb6a
        ;   Label: LAB_0050fb6a
    MOV EDX,dword ptr [EBP + 0x18]      ; 0050fb6b
    INC EAX                             ; 0050fb6e
    CMP EBX,EDX                         ; 0050fb6f
    JGE 0x0050fb7b                      ; 0050fb71
        ;   XREF to: 0050fb7b (CONDITIONAL_JUMP)  ; LAB_0050fb7b
    XOR EDX,EDX                         ; 0050fb73
    MOV DL,byte ptr [EAX]               ; 0050fb75
    CMP EDX,ECX                         ; 0050fb77
    JNZ 0x0050fb6a                      ; 0050fb79
        ;   XREF to: 0050fb6a (CONDITIONAL_JUMP)  ; LAB_0050fb6a
    MOV EAX,dword ptr [ESP + 0x134]     ; 0050fb7b
        ;   Label: LAB_0050fb7b
    MOV EDI,EBX                         ; 0050fb82
    SUB EDI,EAX                         ; 0050fb84
    LEA EAX,[EDI + 0x3]                 ; 0050fb86
    AND AL,0xfc                         ; 0050fb89
    ADD EAX,ESI                         ; 0050fb8b
    ADD EAX,0x4                         ; 0050fb8d
    MOV EDX,dword ptr [ESP + 0x13c]     ; 0050fb90
    MOV dword ptr [ESP + 0x138],EAX     ; 0050fb97
    CMP EAX,EDX                         ; 0050fb9e
    JLE 0x0050fc06                      ; 0050fba0
        ;   XREF to: 0050fc06 (CONDITIONAL_JUMP)  ; LAB_0050fc06
    ADD EAX,0x4000                      ; 0050fba2
    PUSH EAX                            ; 0050fba7
    MOV dword ptr [ESP + 0x140],EAX     ; 0050fba8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050fbaf
    PUSH EAX                            ; 0050fbb2
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 0050fbb3
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 0050fbb8
    MOV dword ptr [EBP + 0x14],EAX      ; 0050fbbb
    TEST EAX,EAX                        ; 0050fbbe
    JNZ 0x0050fc06                      ; 0050fbc0
        ;   XREF to: 0050fc06 (CONDITIONAL_JUMP)  ; LAB_0050fc06
    MOV ECX,dword ptr [ESP + 0x13c]     ; 0050fbc2
    PUSH ECX                            ; 0050fbc9
    MOV EAX,dword ptr [ESP + 0x134]     ; 0050fbca
    PUSH EAX                            ; 0050fbd1
    PUSH EBP                            ; 0050fbd2
    PUSH 0x5cbcab                       ; 0050fbd3
    LEA EAX,[ESP + 0x10]                ; 0050fbd8
    PUSH EAX                            ; 0050fbdc
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0050fbdd
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EDX,0x5cbcec                    ; 0050fbe2
    ADD ESP,0x14                        ; 0050fbe7
    MOV EAX,ESP                         ; 0050fbea
    MOV ECX,0x3b6                       ; 0050fbec
    PUSH EAX                            ; 0050fbf1
    MOV dword ptr [0x01d71de0],EDX      ; 0050fbf2 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0050fbf8 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0050fbfe
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0050fc03
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050fc06
        ;   Label: LAB_0050fc06
    ADD EAX,ESI                         ; 0050fc09
    MOV ECX,dword ptr [ESP + 0x134]     ; 0050fc0b
    MOV word ptr [EAX],CX               ; 0050fc12
    XOR ESI,ESI                         ; 0050fc15
    MOV word ptr [EAX + 0x2],DI         ; 0050fc17
    XOR ECX,ECX                         ; 0050fc1b
    MOV SI,word ptr [EAX]               ; 0050fc1d
    MOV CX,DI                           ; 0050fc20
    MOV EDI,dword ptr [ESP + 0x140]     ; 0050fc23
    LEA EDX,[EAX + 0x4]                 ; 0050fc2a
    ADD ESI,EDI                         ; 0050fc2d
    MOV EDI,EDX                         ; 0050fc2f
    PUSH EDI                            ; 0050fc31
    MOV EAX,ECX                         ; 0050fc32
    SHR ECX,0x2                         ; 0050fc34
    MOVSD.REP ES:EDI,ESI                ; 0050fc37
    MOV CL,AL                           ; 0050fc39
    AND CL,0x3                          ; 0050fc3b
    MOVSB.REP ES:EDI,ESI                ; 0050fc3e
    POP EDI                             ; 0050fc40
    MOV ESI,dword ptr [ESP + 0x138]     ; 0050fc41
    CMP EBX,dword ptr [EBP + 0x18]      ; 0050fc48
        ;   Label: LAB_0050fc48
    JL 0x0050fb40                       ; 0050fc4b
        ;   XREF to: 0050fb40 (CONDITIONAL_JUMP)  ; LAB_0050fb40
    MOV ECX,dword ptr [ESP + 0x130]     ; 0050fc51
        ;   Label: LAB_0050fc51
    MOV EDX,dword ptr [ESP + 0x12c]     ; 0050fc58
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0050fc5f
    MOV EBX,dword ptr [ESP + 0x140]     ; 0050fc66
    INC ECX                             ; 0050fc6d
    ADD EDX,0x4                         ; 0050fc6e
    ADD EBX,EAX                         ; 0050fc71
    MOV dword ptr [ESP + 0x130],ECX     ; 0050fc73
    MOV dword ptr [ESP + 0x140],EBX     ; 0050fc7a
    MOV dword ptr [ESP + 0x12c],EDX     ; 0050fc81
    JMP 0x0050fb15                      ; 0050fc88
        ;   XREF to: 0050fb15 (UNCONDITIONAL_JUMP)  ; LAB_0050fb15
    MOV EBX,0x5cbc4e                    ; 0050fc8d
        ;   Label: LAB_0050fc8d
    MOV ESI,0x37e                       ; 0050fc92
    PUSH 0x5cbc66                       ; 0050fc97
    MOV dword ptr [0x01d71de0],EBX      ; 0050fc9c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0050fca2 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0050fca8
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0050fcad
    JMP 0x0050faee                      ; 0050fcb0
        ;   XREF to: 0050faee (UNCONDITIONAL_JUMP)  ; LAB_0050faee
    INC EBX                             ; 0050fcb5
        ;   Label: LAB_0050fcb5
    JMP 0x0050fc48                      ; 0050fcb6
        ;   XREF to: 0050fc48 (UNCONDITIONAL_JUMP)  ; LAB_0050fc48

