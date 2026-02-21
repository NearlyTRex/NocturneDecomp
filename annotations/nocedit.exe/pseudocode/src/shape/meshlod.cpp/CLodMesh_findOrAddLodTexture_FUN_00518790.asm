; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_meshlod_cpp_CLodMesh_findOrAddLodTexture_FUN_00518790(CLodMesh *this_ptr,char *texture_filename)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   texture_filename
;
; XREF[2]:
;   shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0 at 0051bcb3
;   shape_meshlod.cpp_CLodMesh_importFromEditorGlobals_FUN_0051b080 at 0051b0c8
;
; Referenced Globals:
;   TerminatedCString s_shape_meshlod_cpp_006378dd
;   TerminatedCString s_shape_meshlod_cpp_006378f2
;   TerminatedCString s_Out_of_memory_00637907
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c_stricmp_FUN_005fe7f0
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00518790
        ;   Label: shape_meshlod.cpp_CLodMesh_findOrAddLodTexture_FUN_00518790
    PUSH ESI                            ; 00518791
    PUSH EDI                            ; 00518792
    PUSH EBP                            ; 00518793
    MOV EBX,dword ptr [ESP + 0x14]      ; 00518794
    MOV EBP,dword ptr [ESP + 0x18]      ; 00518798
    MOV EDX,dword ptr [EBX + 0x10]      ; 0051879c
    XOR ESI,ESI                         ; 0051879f
    TEST EDX,EDX                        ; 005187a1
    JLE 0x005187cc                      ; 005187a3
        ;   XREF to: 005187cc (CONDITIONAL_JUMP)  ; LAB_005187cc
    XOR EDI,EDI                         ; 005187a5
    MOV EAX,dword ptr [EBX + 0x14]      ; 005187a7
        ;   Label: LAB_005187a7
    ADD EAX,EDI                         ; 005187aa
    PUSH EBP                            ; 005187ac
    ADD EAX,0x8                         ; 005187ad
    PUSH EAX                            ; 005187b0
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005187b1
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005187b6
    TEST EAX,EAX                        ; 005187b9
    JZ 0x0051885d                       ; 005187bb
        ;   XREF to: 0051885d (CONDITIONAL_JUMP)  ; LAB_0051885d
    INC ESI                             ; 005187c1
    MOV ECX,dword ptr [EBX + 0x10]      ; 005187c2
    ADD EDI,0x48                        ; 005187c5
    CMP ESI,ECX                         ; 005187c8
    JL 0x005187a7                       ; 005187ca
        ;   XREF to: 005187a7 (CONDITIONAL_JUMP)  ; LAB_005187a7
    MOV ESI,dword ptr [EBX + 0x10]      ; 005187cc
        ;   Label: LAB_005187cc
    INC ESI                             ; 005187cf
    LEA EAX,[ESI*0x8 + 0x0]             ; 005187d0
    PUSH 0xb6d                          ; 005187d7
    ADD EAX,ESI                         ; 005187dc
    PUSH 0x6378dd                       ; 005187de | = "..\\shape\\meshlod.cpp"
    SHL EAX,0x3                         ; 005187e3
    PUSH EAX                            ; 005187e6
    MOV ESI,dword ptr [EBX + 0x14]      ; 005187e7
    PUSH ESI                            ; 005187ea
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 005187eb
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 005187f0
    MOV dword ptr [EBX + 0x14],EAX      ; 005187f3
    TEST EAX,EAX                        ; 005187f6
    JNZ 0x0051881c                      ; 005187f8
        ;   XREF to: 0051881c (CONDITIONAL_JUMP)  ; LAB_0051881c
    MOV EAX,0x6378f2                    ; 005187fa | = "..\\shape\\meshlod.cpp"
    MOV EDX,0xb6e                       ; 005187ff
    PUSH 0x637907                       ; 00518804 | = "Out of memory."
    MOV [0x02f0ca48],EAX                ; 00518809 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0051880e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00518814
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00518819
    MOV ESI,dword ptr [EBX + 0x10]      ; 0051881c
        ;   Label: LAB_0051881c
    LEA EAX,[ESI*0x8 + 0x0]             ; 0051881f
    ADD EAX,ESI                         ; 00518826
    SHL EAX,0x3                         ; 00518828
    MOV ESI,dword ptr [EBX + 0x14]      ; 0051882b
    ADD EAX,ESI                         ; 0051882e
    LEA EDI,[EAX + 0x8]                 ; 00518830
    MOV ESI,EBP                         ; 00518833
    PUSH EDI                            ; 00518835
    MOV AL,byte ptr [ESI]               ; 00518836
        ;   Label: LAB_00518836
    MOV byte ptr [EDI],AL               ; 00518838
    CMP AL,0x0                          ; 0051883a
    JZ 0x0051884e                       ; 0051883c
        ;   XREF to: 0051884e (CONDITIONAL_JUMP)  ; LAB_0051884e
    MOV AL,byte ptr [ESI + 0x1]         ; 0051883e
    ADD ESI,0x2                         ; 00518841
    MOV byte ptr [EDI + 0x1],AL         ; 00518844
    ADD EDI,0x2                         ; 00518847
    CMP AL,0x0                          ; 0051884a
    JNZ 0x00518836                      ; 0051884c
        ;   XREF to: 00518836 (CONDITIONAL_JUMP)  ; LAB_00518836
    POP EDI                             ; 0051884e
        ;   Label: LAB_0051884e
    MOV EAX,dword ptr [EBX + 0x10]      ; 0051884f
    LEA ESI,[EAX + 0x1]                 ; 00518852
    MOV dword ptr [EBX + 0x10],ESI      ; 00518855
    POP EBP                             ; 00518858
    POP EDI                             ; 00518859
    POP ESI                             ; 0051885a
    POP EBX                             ; 0051885b
    RET                                 ; 0051885c
    MOV EAX,ESI                         ; 0051885d
        ;   Label: LAB_0051885d
    POP EBP                             ; 0051885f
    POP EDI                             ; 00518860
    POP ESI                             ; 00518861
    POP EBX                             ; 00518862
    RET                                 ; 00518863

