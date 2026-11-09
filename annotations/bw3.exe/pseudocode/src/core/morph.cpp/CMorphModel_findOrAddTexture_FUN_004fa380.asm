; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_morph_cpp_CMorphModel_findOrAddTexture_FUN_004fa380(CMorphModel *this_ptr,char *filename)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[2]:
;   core_morph.cpp_CMorphModel_setFaceListFromPolygon_FUN_004f9fe0 at 004fa097
;   core_morph.cpp_CMorphModel_setFaceListFromTriangles_FUN_004fa1c0 at 004fa289
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_005c9657
;   TerminatedCString s_CMorphModel_findOrAddTex_005c9669
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_memset_FUN_005a28f0
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fa380
        ;   Label: core_morph.cpp_CMorphModel_findOrAddTexture_FUN_004fa380
    PUSH ESI                            ; 004fa381
    PUSH EDI                            ; 004fa382
    PUSH EBP                            ; 004fa383
    MOV EBX,dword ptr [ESP + 0x14]      ; 004fa384
    MOV EBP,dword ptr [ESP + 0x18]      ; 004fa388
    MOV EDX,dword ptr [EBX + 0x64]      ; 004fa38c
    XOR ESI,ESI                         ; 004fa38f
    TEST EDX,EDX                        ; 004fa391
    JLE 0x004fa3b5                      ; 004fa393
        ;   XREF to: 004fa3b5 (CONDITIONAL_JUMP)  ; LAB_004fa3b5
    LEA EDI,[EBX + 0x70]                ; 004fa395
    PUSH EBP                            ; 004fa398
        ;   Label: LAB_004fa398
    PUSH EDI                            ; 004fa399
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004fa39a
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004fa39f
    TEST EAX,EAX                        ; 004fa3a2
    JZ 0x004fa43c                       ; 004fa3a4
        ;   XREF to: 004fa43c (CONDITIONAL_JUMP)  ; LAB_004fa43c
    INC ESI                             ; 004fa3aa
    MOV ECX,dword ptr [EBX + 0x64]      ; 004fa3ab
    ADD EDI,0x48                        ; 004fa3ae
    CMP ESI,ECX                         ; 004fa3b1
    JL 0x004fa398                       ; 004fa3b3
        ;   XREF to: 004fa398 (CONDITIONAL_JUMP)  ; LAB_004fa398
    CMP dword ptr [EBX + 0x64],0x14     ; 004fa3b5
        ;   Label: LAB_004fa3b5
    JL 0x004fa3dd                       ; 004fa3b9
        ;   XREF to: 004fa3dd (CONDITIONAL_JUMP)  ; LAB_004fa3dd
    MOV EDI,0x5c9657                    ; 004fa3bb | = "..\\core\\morph.cpp"
    MOV EAX,0x1d0                       ; 004fa3c0
    PUSH 0x5c9669                       ; 004fa3c5 | = "CMorphModel::findOrAddTexture - too m..."
    MOV dword ptr [0x01d71de0],EDI      ; 004fa3ca | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004fa3d0 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004fa3d5
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004fa3da
    MOV ESI,dword ptr [EBX + 0x64]      ; 004fa3dd
        ;   Label: LAB_004fa3dd
    LEA EAX,[ESI*0x8 + 0x0]             ; 004fa3e0
    PUSH 0x48                           ; 004fa3e7
    ADD EAX,ESI                         ; 004fa3e9
    LEA EDI,[EBX + 0x68]                ; 004fa3eb
    SHL EAX,0x3                         ; 004fa3ee
    PUSH 0x0                            ; 004fa3f1
    ADD EAX,EDI                         ; 004fa3f3
    PUSH EAX                            ; 004fa3f5
    CALL crt_memory.c_memset_FUN_005a28f0 ; 004fa3f6
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    MOV ESI,dword ptr [EBX + 0x64]      ; 004fa3fb
    LEA EAX,[ESI*0x8 + 0x0]             ; 004fa3fe
    ADD EAX,ESI                         ; 004fa405
    SHL EAX,0x3                         ; 004fa407
    ADD ESP,0xc                         ; 004fa40a
    ADD EDI,EAX                         ; 004fa40d
    MOV ESI,EBP                         ; 004fa40f
    ADD EDI,0x8                         ; 004fa411
    PUSH EDI                            ; 004fa414
    MOV AL,byte ptr [ESI]               ; 004fa415
        ;   Label: LAB_004fa415
    MOV byte ptr [EDI],AL               ; 004fa417
    CMP AL,0x0                          ; 004fa419
    JZ 0x004fa42d                       ; 004fa41b
        ;   XREF to: 004fa42d (CONDITIONAL_JUMP)  ; LAB_004fa42d
    MOV AL,byte ptr [ESI + 0x1]         ; 004fa41d
    ADD ESI,0x2                         ; 004fa420
    MOV byte ptr [EDI + 0x1],AL         ; 004fa423
    ADD EDI,0x2                         ; 004fa426
    CMP AL,0x0                          ; 004fa429
    JNZ 0x004fa415                      ; 004fa42b
        ;   XREF to: 004fa415 (CONDITIONAL_JUMP)  ; LAB_004fa415
    POP EDI                             ; 004fa42d
        ;   Label: LAB_004fa42d
    MOV EAX,dword ptr [EBX + 0x64]      ; 004fa42e
    LEA ESI,[EAX + 0x1]                 ; 004fa431
    MOV dword ptr [EBX + 0x64],ESI      ; 004fa434
    POP EBP                             ; 004fa437
    POP EDI                             ; 004fa438
    POP ESI                             ; 004fa439
    POP EBX                             ; 004fa43a
    RET                                 ; 004fa43b
    MOV EAX,ESI                         ; 004fa43c
        ;   Label: LAB_004fa43c
    POP EBP                             ; 004fa43e
    POP EDI                             ; 004fa43f
    POP ESI                             ; 004fa440
    POP EBX                             ; 004fa441
    RET                                 ; 004fa442

