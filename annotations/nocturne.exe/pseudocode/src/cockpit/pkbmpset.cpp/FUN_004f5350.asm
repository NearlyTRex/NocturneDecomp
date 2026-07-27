; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbmpset_cpp_FUN_004f5350(int *param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0xd0]:1  local_d0
;
; XREF[3]:
;   cockpit_pkbmpset.cpp_FUN_004f53f0 at 004f5422
;   cockpit_pkbmpset.cpp_FUN_004f54c0 at 004f5596
;   cockpit_pkbmpset.cpp_FUN_004f5920 at 004f5954
;
; Referenced Globals:
;   TerminatedCString s_Unable_to_allocate_u_byt_0058d45d
;   TerminatedCString s_cockpit_pkbmpset_cpp_0058d4aa
;   WatcomTypeInfo g_CPackedBitmapTypeInfo_005a1340
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   cockpit_pkbitmap.cpp_FUN_004f5320
;   core_main.c_FUN_004c8440
;   crt_memory.c___vec_new_FUN_00566234
;   crt_stdio.c_sprintf_FUN_00563c90
;   shape_memdbg.cpp_malloc_FUN_00564c18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5350
        ;   Label: cockpit_pkbmpset.cpp_FUN_004f5350
    PUSH ESI                            ; 004f5351
    SUB ESP,0xc8                        ; 004f5352
    MOV ESI,dword ptr [ESP + 0xd4]      ; 004f5358
    MOV EBX,dword ptr [ESP + 0xd8]      ; 004f535f
    PUSH ESI                            ; 004f5366
    CALL cockpit_pkbitmap.cpp_FUN_004f5320 ; 004f5367
        ;   XREF to: 004f5320 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_004f5320()
    ADD ESP,0x4                         ; 004f536c
    TEST EBX,EBX                        ; 004f536f
    JG 0x004f537c                       ; 004f5371
        ;   XREF to: 004f537c (CONDITIONAL_JUMP)  ; LAB_004f537c
    ADD ESP,0xc8                        ; 004f5373
    POP ESI                             ; 004f5379
    POP EBX                             ; 004f537a
    RET                                 ; 004f537b
    PUSH EDI                            ; 004f537c
        ;   Label: LAB_004f537c
    PUSH 0x5a1340                       ; 004f537d | g_CPackedBitmapTypeInfo_005a1340
    PUSH EBX                            ; 004f5382
    LEA EDI,[EBX*0x8 + 0x0]             ; 004f5383
    ADD EDI,EBX                         ; 004f538a
    SHL EDI,0x2                         ; 004f538c
    LEA EAX,[EDI + 0x4]                 ; 004f538f
    PUSH EAX                            ; 004f5392
    CALL shape_memdbg.cpp_malloc_FUN_00564c18 ; 004f5393
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_malloc_FUN_00564c18()
    ADD ESP,0x4                         ; 004f5398
    PUSH EAX                            ; 004f539b
    CALL crt_memory.c___vec_new_FUN_00566234 ; 004f539c
        ;   XREF to: 00566234 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_new_FUN_00566234()
    ADD ESP,0xc                         ; 004f53a1
    MOV dword ptr [ESI + 0x4],EAX       ; 004f53a4
    TEST EAX,EAX                        ; 004f53a7
    JNZ 0x004f53e2                      ; 004f53a9
        ;   XREF to: 004f53e2 (CONDITIONAL_JUMP)  ; LAB_004f53e2
    PUSH EBX                            ; 004f53ab
    PUSH EDI                            ; 004f53ac
    PUSH 0x58d45d                       ; 004f53ad | = "Unable to allocate %u bytes for %u CP..."
    LEA EAX,[ESP + 0x10]                ; 004f53b2
    PUSH EAX                            ; 004f53b6
    MOV EDI,0x6b                        ; 004f53b7
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004f53bc
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 004f53c1
    LEA EAX,[ESP + 0x4]                 ; 004f53c4
    MOV ECX,0x58d4aa                    ; 004f53c8 | = "..\\cockpit\\pkbmpset.cpp"
    PUSH EAX                            ; 004f53cd
    MOV dword ptr [0x01cc4804],EDI      ; 004f53ce | INT_01cc4804
    MOV dword ptr [0x01cc4800],ECX      ; 004f53d4 | PTR_01cc4800
    CALL core_main.c_FUN_004c8440       ; 004f53da
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f53df
    MOV dword ptr [ESI],EBX             ; 004f53e2
        ;   Label: LAB_004f53e2
    POP EDI                             ; 004f53e4
    ADD ESP,0xc8                        ; 004f53e5
    POP ESI                             ; 004f53eb
    POP EBX                             ; 004f53ec
    RET                                 ; 004f53ed

