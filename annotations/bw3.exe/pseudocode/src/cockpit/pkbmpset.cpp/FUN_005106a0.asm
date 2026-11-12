; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_FUN_005106a0(CPackedBitmapSet *this_ptr,int bitmap_count)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bitmap_count
;
; XREF[2]:
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00510740 at 00510772
;   cockpit_pkbmpset.cpp_FUN_0051080e at 005108e6
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   cockpit_pkbitmap.cpp_FUN_00510670
;   core_main.c_FUN_004e4330
;   crt_memory.c___vec_new_FUN_005a5584
;   crt_memory.c_operator_new_array_FUN_005a40df
;   crt_unknown.c_sprintf_FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005106a0
        ;   Label: cockpit_pkbmpset.cpp_FUN_005106a0
    PUSH ESI                            ; 005106a1
    SUB ESP,0xc8                        ; 005106a2
    MOV ESI,dword ptr [ESP + 0xd4]      ; 005106a8
    MOV EBX,dword ptr [ESP + 0xd8]      ; 005106af
    PUSH ESI                            ; 005106b6
    CALL cockpit_pkbitmap.cpp_FUN_00510670 ; 005106b7
        ;   XREF to: 00510670 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_00510670()
    ADD ESP,0x4                         ; 005106bc
    TEST EBX,EBX                        ; 005106bf
    JG 0x005106cc                       ; 005106c1
        ;   XREF to: 005106cc (CONDITIONAL_JUMP)  ; LAB_005106cc
    ADD ESP,0xc8                        ; 005106c3
    POP ESI                             ; 005106c9
    POP EBX                             ; 005106ca
    RET                                 ; 005106cb
    PUSH EDI                            ; 005106cc
        ;   Label: LAB_005106cc
    PUSH 0x5e32c0                       ; 005106cd
    PUSH EBX                            ; 005106d2
    LEA EDI,[EBX*0x8 + 0x0]             ; 005106d3
    ADD EDI,EBX                         ; 005106da
    SHL EDI,0x2                         ; 005106dc
    LEA EAX,[EDI + 0x4]                 ; 005106df
    PUSH EAX                            ; 005106e2
    CALL crt_memory.c_operator_new_array_FUN_005a40df ; 005106e3
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005a40df()
    ADD ESP,0x4                         ; 005106e8
    PUSH EAX                            ; 005106eb
    CALL crt_memory.c___vec_new_FUN_005a5584 ; 005106ec
        ;   XREF to: 005a5584 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_new_FUN_005a5584()
    ADD ESP,0xc                         ; 005106f1
    MOV dword ptr [ESI + 0x4],EAX       ; 005106f4
    TEST EAX,EAX                        ; 005106f7
    JNZ 0x00510732                      ; 005106f9
        ;   XREF to: 00510732 (CONDITIONAL_JUMP)  ; LAB_00510732
    PUSH EBX                            ; 005106fb
    PUSH EDI                            ; 005106fc
    PUSH 0x5cbf7b                       ; 005106fd
    LEA EAX,[ESP + 0x10]                ; 00510702
    PUSH EAX                            ; 00510706
    MOV EDI,0x6e                        ; 00510707
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0051070c
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 00510711
    LEA EAX,[ESP + 0x4]                 ; 00510714
    MOV ECX,0x5cbfc8                    ; 00510718
    PUSH EAX                            ; 0051071d
    MOV dword ptr [0x01d71de4],EDI      ; 0051071e | DAT_01d71de4
    MOV dword ptr [0x01d71de0],ECX      ; 00510724 | DAT_01d71de0
    CALL core_main.c_FUN_004e4330       ; 0051072a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0051072f
    MOV dword ptr [ESI],EBX             ; 00510732
        ;   Label: LAB_00510732
    POP EDI                             ; 00510734
    ADD ESP,0xc8                        ; 00510735
    POP ESI                             ; 0051073b
    POP EBX                             ; 0051073c
    RET                                 ; 0051073d

