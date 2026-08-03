; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_load_FUN_004f47b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,int param_6)
;
;
; XREF[2]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_004f4630 at 004f4676
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_004f54c0 at 004f568d
;
; Referenced Globals:
;   TerminatedCString s_cockpit_pkbitmap_cpp_0058d130
;   TerminatedCString s_Unable_to_allocate_memor_0058d148
;   TerminatedCString s_Out_of_memory_packing_fi_0058d18d
;   TerminatedCString s_cockpit_pkbitmap_cpp_0058d1ce
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   cockpit_pkbitmap.cpp_FUN_004f3f50
;   core_main.c_FUN_004c8440
;   crt_memory.c_realloc_FUN_00564a70
;   crt_stdio.c_sprintf_FUN_00563c90
;   shape_memdbg.cpp_malloc_FUN_00564c18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f47b0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_004f47b0
    PUSH ESI                            ; 004f47b1
    PUSH EDI                            ; 004f47b2
    PUSH EBP                            ; 004f47b3
    SUB ESP,0x144                       ; 004f47b4
    MOV EBP,dword ptr [ESP + 0x158]     ; 004f47ba
    PUSH EBP                            ; 004f47c1
    CALL cockpit_pkbitmap.cpp_FUN_004f3f50 ; 004f47c2
        ;   XREF to: 004f3f50 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_004f3f50()
    ADD ESP,0x4                         ; 004f47c7
    MOV EAX,dword ptr [ESP + 0x160]     ; 004f47ca
    MOV dword ptr [EBP + 0x18],EAX      ; 004f47d1
    MOV EAX,dword ptr [ESP + 0x164]     ; 004f47d4
    MOV EDX,dword ptr [ESP + 0x16c]     ; 004f47db
    MOV dword ptr [EBP + 0x1c],EAX      ; 004f47e2
    TEST EDX,EDX                        ; 004f47e5
    JNZ 0x004f47f3                      ; 004f47e7
        ;   XREF to: 004f47f3 (CONDITIONAL_JUMP)  ; LAB_004f47f3
    MOV EAX,dword ptr [EBP + 0x18]      ; 004f47e9
    MOV dword ptr [ESP + 0x16c],EAX     ; 004f47ec
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004f47f3
        ;   Label: LAB_004f47f3
    INC EAX                             ; 004f47f6
    SHL EAX,0x2                         ; 004f47f7
    PUSH EAX                            ; 004f47fa
    CALL shape_memdbg.cpp_malloc_FUN_00564c18 ; 004f47fb
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_malloc_FUN_00564c18(SIZE_T size)
    ADD ESP,0x4                         ; 004f4800
    MOV dword ptr [EBP + 0x20],EAX      ; 004f4803
    TEST EAX,EAX                        ; 004f4806
    JZ 0x004f49ad                       ; 004f4808
        ;   XREF to: 004f49ad (CONDITIONAL_JUMP)  ; LAB_004f49ad
    MOV EAX,dword ptr [ESP + 0x15c]     ; 004f480e
        ;   Label: LAB_004f480e
    XOR EDI,EDI                         ; 004f4815
    XOR ESI,ESI                         ; 004f4817
    MOV dword ptr [ESP + 0x130],EDI     ; 004f4819
    MOV dword ptr [ESP + 0x140],EAX     ; 004f4820
    MOV dword ptr [ESP + 0x12c],EDI     ; 004f4827
    MOV dword ptr [ESP + 0x13c],EDI     ; 004f482e
    MOV ECX,dword ptr [ESP + 0x12c]     ; 004f4835
        ;   Label: LAB_004f4835
    MOV EAX,dword ptr [EBP + 0x20]      ; 004f483c
    ADD EAX,ECX                         ; 004f483f
    MOV dword ptr [EAX],ESI             ; 004f4841
    MOV EAX,dword ptr [ESP + 0x130]     ; 004f4843
    CMP EAX,dword ptr [EBP + 0x1c]      ; 004f484a
    JGE 0x004f49d8                      ; 004f484d
        ;   XREF to: 004f49d8 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBP + 0x18]      ; 004f4853
    XOR EBX,EBX                         ; 004f4856
    TEST EDI,EDI                        ; 004f4858
    JLE 0x004f4971                      ; 004f485a
        ;   XREF to: 004f4971 (CONDITIONAL_JUMP)  ; LAB_004f4971
    MOV EAX,dword ptr [ESP + 0x140]     ; 004f4860
        ;   Label: LAB_004f4860
    ADD EAX,EBX                         ; 004f4867
    XOR EDX,EDX                         ; 004f4869
    MOV EDI,dword ptr [ESP + 0x168]     ; 004f486b
    MOV DL,byte ptr [EAX]               ; 004f4872
    CMP EDX,EDI                         ; 004f4874
    JZ 0x004f49d5                       ; 004f4876
        ;   XREF to: 004f49d5 (CONDITIONAL_JUMP)  ; LAB_004f49d5
    MOV ECX,dword ptr [ESP + 0x168]     ; 004f487c
    MOV dword ptr [ESP + 0x134],EBX     ; 004f4883
    INC EBX                             ; 004f488a
        ;   Label: LAB_004f488a
    MOV EDX,dword ptr [EBP + 0x18]      ; 004f488b
    INC EAX                             ; 004f488e
    CMP EBX,EDX                         ; 004f488f
    JGE 0x004f489b                      ; 004f4891
        ;   XREF to: 004f489b (CONDITIONAL_JUMP)  ; LAB_004f489b
    XOR EDX,EDX                         ; 004f4893
    MOV DL,byte ptr [EAX]               ; 004f4895
    CMP EDX,ECX                         ; 004f4897
    JNZ 0x004f488a                      ; 004f4899
        ;   XREF to: 004f488a (CONDITIONAL_JUMP)  ; LAB_004f488a
    MOV EAX,dword ptr [ESP + 0x134]     ; 004f489b
        ;   Label: LAB_004f489b
    MOV EDI,EBX                         ; 004f48a2
    SUB EDI,EAX                         ; 004f48a4
    LEA EAX,[EDI + 0x3]                 ; 004f48a6
    AND AL,0xfc                         ; 004f48a9
    ADD EAX,ESI                         ; 004f48ab
    ADD EAX,0x4                         ; 004f48ad
    MOV EDX,dword ptr [ESP + 0x13c]     ; 004f48b0
    MOV dword ptr [ESP + 0x138],EAX     ; 004f48b7
    CMP EAX,EDX                         ; 004f48be
    JLE 0x004f4926                      ; 004f48c0
        ;   XREF to: 004f4926 (CONDITIONAL_JUMP)  ; LAB_004f4926
    ADD EAX,0x4000                      ; 004f48c2
    PUSH EAX                            ; 004f48c7
    MOV dword ptr [ESP + 0x140],EAX     ; 004f48c8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f48cf
    PUSH EAX                            ; 004f48d2
    CALL crt_memory.c_realloc_FUN_00564a70 ; 004f48d3
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_00564a70(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 004f48d8
    MOV dword ptr [EBP + 0x14],EAX      ; 004f48db
    TEST EAX,EAX                        ; 004f48de
    JNZ 0x004f4926                      ; 004f48e0
        ;   XREF to: 004f4926 (CONDITIONAL_JUMP)  ; LAB_004f4926
    MOV ECX,dword ptr [ESP + 0x13c]     ; 004f48e2
    PUSH ECX                            ; 004f48e9
    MOV EAX,dword ptr [ESP + 0x134]     ; 004f48ea
    PUSH EAX                            ; 004f48f1
    PUSH EBP                            ; 004f48f2
    PUSH 0x58d18d                       ; 004f48f3 | = "Out of memory packing file \"%s\" on ..."
    LEA EAX,[ESP + 0x10]                ; 004f48f8
    PUSH EAX                            ; 004f48fc
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004f48fd
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EDX,0x58d1ce                    ; 004f4902 | = "..\\cockpit\\pkbitmap.cpp"
    ADD ESP,0x14                        ; 004f4907
    MOV EAX,ESP                         ; 004f490a
    MOV ECX,0x3b5                       ; 004f490c
    PUSH EAX                            ; 004f4911
    MOV dword ptr [0x01cc4800],EDX      ; 004f4912 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004f4918 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f491e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f4923
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f4926
        ;   Label: LAB_004f4926
    ADD EAX,ESI                         ; 004f4929
    MOV ECX,dword ptr [ESP + 0x134]     ; 004f492b
    MOV word ptr [EAX],CX               ; 004f4932
    XOR ESI,ESI                         ; 004f4935
    MOV word ptr [EAX + 0x2],DI         ; 004f4937
    XOR ECX,ECX                         ; 004f493b
    MOV SI,word ptr [EAX]               ; 004f493d
    MOV CX,DI                           ; 004f4940
    MOV EDI,dword ptr [ESP + 0x140]     ; 004f4943
    LEA EDX,[EAX + 0x4]                 ; 004f494a
    ADD ESI,EDI                         ; 004f494d
    MOV EDI,EDX                         ; 004f494f
    PUSH EDI                            ; 004f4951
    MOV EAX,ECX                         ; 004f4952
    SHR ECX,0x2                         ; 004f4954
    MOVSD.REP ES:EDI,ESI                ; 004f4957
    MOV CL,AL                           ; 004f4959
    AND CL,0x3                          ; 004f495b
    MOVSB.REP ES:EDI,ESI                ; 004f495e
    POP EDI                             ; 004f4960
    MOV ESI,dword ptr [ESP + 0x138]     ; 004f4961
    CMP EBX,dword ptr [EBP + 0x18]      ; 004f4968
        ;   Label: LAB_004f4968
    JL 0x004f4860                       ; 004f496b
        ;   XREF to: 004f4860 (CONDITIONAL_JUMP)  ; LAB_004f4860
    MOV ECX,dword ptr [ESP + 0x130]     ; 004f4971
        ;   Label: LAB_004f4971
    MOV EDX,dword ptr [ESP + 0x12c]     ; 004f4978
    MOV EAX,dword ptr [ESP + 0x16c]     ; 004f497f
    MOV EBX,dword ptr [ESP + 0x140]     ; 004f4986
    INC ECX                             ; 004f498d
    ADD EDX,0x4                         ; 004f498e
    ADD EBX,EAX                         ; 004f4991
    MOV dword ptr [ESP + 0x130],ECX     ; 004f4993
    MOV dword ptr [ESP + 0x140],EBX     ; 004f499a
    MOV dword ptr [ESP + 0x12c],EDX     ; 004f49a1
    JMP 0x004f4835                      ; 004f49a8
        ;   XREF to: 004f4835 (UNCONDITIONAL_JUMP)  ; LAB_004f4835
    MOV EBX,0x58d130                    ; 004f49ad | = "..\\cockpit\\pkbitmap.cpp"
        ;   Label: LAB_004f49ad
    MOV ESI,0x37d                       ; 004f49b2
    PUSH 0x58d148                       ; 004f49b7 | = "Unable to allocate memory for rowOffs..."
    MOV dword ptr [0x01cc4800],EBX      ; 004f49bc | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004f49c2 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f49c8
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f49cd
    JMP 0x004f480e                      ; 004f49d0
        ;   XREF to: 004f480e (UNCONDITIONAL_JUMP)  ; LAB_004f480e
    INC EBX                             ; 004f49d5
        ;   Label: LAB_004f49d5
    JMP 0x004f4968                      ; 004f49d6
        ;   XREF to: 004f4968 (UNCONDITIONAL_JUMP)  ; LAB_004f4968

