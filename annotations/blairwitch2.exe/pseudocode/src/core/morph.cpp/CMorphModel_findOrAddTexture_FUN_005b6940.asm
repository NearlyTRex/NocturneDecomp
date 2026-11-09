; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_morph_cpp_CMorphModel_findOrAddTexture_FUN_005b6940(CMorphModel *this_ptr,char *filename)
;
; Parameters:
; CMorphModel *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[2]:
;   core_morph.cpp_CMorphModel_setFaceListFromPolygon_FUN_005b65a0 at 005b6657
;   core_morph.cpp_CMorphModel_setFaceListFromTriangles_FUN_005b6780 at 005b6849
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_005f172b
;   TerminatedCString s_CMorphModel_findOrAddTex_005f173d
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_memset_FUN_005b77c0
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b6940
        ;   Label: core_morph.cpp_CMorphModel_findOrAddTexture_FUN_005b6940
    PUSH ESI                            ; 005b6941
    PUSH EDI                            ; 005b6942
    PUSH EBP                            ; 005b6943
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b6944
    MOV EBP,dword ptr [ESP + 0x18]      ; 005b6948
    MOV EDX,dword ptr [EBX + 0x64]      ; 005b694c
    XOR ESI,ESI                         ; 005b694f
    TEST EDX,EDX                        ; 005b6951
    JLE 0x005b6975                      ; 005b6953
        ;   XREF to: 005b6975 (CONDITIONAL_JUMP)  ; LAB_005b6975
    LEA EDI,[EBX + 0x70]                ; 005b6955
    PUSH EBP                            ; 005b6958
        ;   Label: LAB_005b6958
    PUSH EDI                            ; 005b6959
    CALL crt_string.c__stricmp_FUN_005b8130 ; 005b695a
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 005b695f
    TEST EAX,EAX                        ; 005b6962
    JZ 0x005b69fc                       ; 005b6964
        ;   XREF to: 005b69fc (CONDITIONAL_JUMP)  ; LAB_005b69fc
    INC ESI                             ; 005b696a
    MOV ECX,dword ptr [EBX + 0x64]      ; 005b696b
    ADD EDI,0x48                        ; 005b696e
    CMP ESI,ECX                         ; 005b6971
    JL 0x005b6958                       ; 005b6973
        ;   XREF to: 005b6958 (CONDITIONAL_JUMP)  ; LAB_005b6958
    CMP dword ptr [EBX + 0x64],0x14     ; 005b6975
        ;   Label: LAB_005b6975
    JL 0x005b699d                       ; 005b6979
        ;   XREF to: 005b699d (CONDITIONAL_JUMP)  ; LAB_005b699d
    MOV EDI,0x5f172b                    ; 005b697b | = "..\\core\\morph.cpp"
    MOV EAX,0x1d0                       ; 005b6980
    PUSH 0x5f173d                       ; 005b6985 | = "CMorphModel::findOrAddTexture - too m..."
    MOV dword ptr [0x01d046a0],EDI      ; 005b698a | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 005b6990 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005b6995
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005b699a
    MOV ESI,dword ptr [EBX + 0x64]      ; 005b699d
        ;   Label: LAB_005b699d
    LEA EAX,[ESI*0x8 + 0x0]             ; 005b69a0
    PUSH 0x48                           ; 005b69a7
    ADD EAX,ESI                         ; 005b69a9
    LEA EDI,[EBX + 0x68]                ; 005b69ab
    SHL EAX,0x3                         ; 005b69ae
    PUSH 0x0                            ; 005b69b1
    ADD EAX,EDI                         ; 005b69b3
    PUSH EAX                            ; 005b69b5
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005b69b6
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV ESI,dword ptr [EBX + 0x64]      ; 005b69bb
    LEA EAX,[ESI*0x8 + 0x0]             ; 005b69be
    ADD EAX,ESI                         ; 005b69c5
    SHL EAX,0x3                         ; 005b69c7
    ADD ESP,0xc                         ; 005b69ca
    ADD EDI,EAX                         ; 005b69cd
    MOV ESI,EBP                         ; 005b69cf
    ADD EDI,0x8                         ; 005b69d1
    PUSH EDI                            ; 005b69d4
    MOV AL,byte ptr [ESI]               ; 005b69d5
        ;   Label: LAB_005b69d5
    MOV byte ptr [EDI],AL               ; 005b69d7
    CMP AL,0x0                          ; 005b69d9
    JZ 0x005b69ed                       ; 005b69db
        ;   XREF to: 005b69ed (CONDITIONAL_JUMP)  ; LAB_005b69ed
    MOV AL,byte ptr [ESI + 0x1]         ; 005b69dd
    ADD ESI,0x2                         ; 005b69e0
    MOV byte ptr [EDI + 0x1],AL         ; 005b69e3
    ADD EDI,0x2                         ; 005b69e6
    CMP AL,0x0                          ; 005b69e9
    JNZ 0x005b69d5                      ; 005b69eb
        ;   XREF to: 005b69d5 (CONDITIONAL_JUMP)  ; LAB_005b69d5
    POP EDI                             ; 005b69ed
        ;   Label: LAB_005b69ed
    MOV EAX,dword ptr [EBX + 0x64]      ; 005b69ee
    LEA ESI,[EAX + 0x1]                 ; 005b69f1
    MOV dword ptr [EBX + 0x64],ESI      ; 005b69f4
    POP EBP                             ; 005b69f7
    POP EDI                             ; 005b69f8
    POP ESI                             ; 005b69f9
    POP EBX                             ; 005b69fa
    RET                                 ; 005b69fb
    MOV EAX,ESI                         ; 005b69fc
        ;   Label: LAB_005b69fc
    POP EBP                             ; 005b69fe
    POP EDI                             ; 005b69ff
    POP ESI                             ; 005b6a00
    POP EBX                             ; 005b6a01
    RET                                 ; 005b6a02

