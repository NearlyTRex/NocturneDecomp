; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bodypart_cpp_CBodyPart_addTexture_FUN_00416890(CBodyPart *this_ptr,char *texture_name)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   texture_name
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_dismember_FUN_0054a6a0 at 0054aa90
;
; Referenced Globals:
;   TerminatedCString s_core_bodypart_cpp_005b6ca4
;   TerminatedCString s_Too_many_body_part_textu_005b6cb9
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

    PUSH EBX                            ; 00416890
        ;   Label: core_bodypart.cpp_CBodyPart_addTexture_FUN_00416890
    PUSH ESI                            ; 00416891
    PUSH EDI                            ; 00416892
    PUSH EBP                            ; 00416893
    MOV EBX,dword ptr [ESP + 0x14]      ; 00416894
    MOV EBP,dword ptr [ESP + 0x18]      ; 00416898
    MOV EDX,dword ptr [EBX + 0x18c]     ; 0041689c
    XOR ESI,ESI                         ; 004168a2
    TEST EDX,EDX                        ; 004168a4
    JLE 0x004168ce                      ; 004168a6
        ;   XREF to: 004168ce (CONDITIONAL_JUMP)  ; LAB_004168ce
    LEA EDI,[EBX + 0x198]               ; 004168a8
    PUSH EBP                            ; 004168ae
        ;   Label: LAB_004168ae
    PUSH EDI                            ; 004168af
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004168b0
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004168b5
    TEST EAX,EAX                        ; 004168b8
    JZ 0x00416967                       ; 004168ba
        ;   XREF to: 00416967 (CONDITIONAL_JUMP)  ; LAB_00416967
    INC ESI                             ; 004168c0
    MOV ECX,dword ptr [EBX + 0x18c]     ; 004168c1
    ADD EDI,0x18                        ; 004168c7
    CMP ESI,ECX                         ; 004168ca
    JL 0x004168ae                       ; 004168cc
        ;   XREF to: 004168ae (CONDITIONAL_JUMP)  ; LAB_004168ae
    CMP dword ptr [EBX + 0x18c],0xa     ; 004168ce
        ;   Label: LAB_004168ce
    JL 0x004168f9                       ; 004168d5
        ;   XREF to: 004168f9 (CONDITIONAL_JUMP)  ; LAB_004168f9
    MOV EDI,0x5b6ca4                    ; 004168d7 | = "..\\core\\bodypart.cpp"
    MOV EAX,0x48e                       ; 004168dc
    PUSH 0x5b6cb9                       ; 004168e1 | = "Too many body part textures!"
    MOV dword ptr [0x01d71de0],EDI      ; 004168e6 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004168ec | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004168f1
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004168f6
    MOV ESI,dword ptr [EBX + 0x18c]     ; 004168f9
        ;   Label: LAB_004168f9
    LEA EAX,[ESI*0x4 + 0x0]             ; 004168ff
    PUSH 0x18                           ; 00416906
    SUB EAX,ESI                         ; 00416908
    LEA EDI,[EBX + 0x190]               ; 0041690a
    SHL EAX,0x3                         ; 00416910
    PUSH 0x0                            ; 00416913
    ADD EAX,EDI                         ; 00416915
    PUSH EAX                            ; 00416917
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00416918
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    MOV ESI,dword ptr [EBX + 0x18c]     ; 0041691d
    LEA EAX,[ESI*0x4 + 0x0]             ; 00416923
    SUB EAX,ESI                         ; 0041692a
    SHL EAX,0x3                         ; 0041692c
    ADD ESP,0xc                         ; 0041692f
    ADD EDI,EAX                         ; 00416932
    MOV ESI,EBP                         ; 00416934
    ADD EDI,0x8                         ; 00416936
    PUSH EDI                            ; 00416939
    MOV AL,byte ptr [ESI]               ; 0041693a
        ;   Label: LAB_0041693a
    MOV byte ptr [EDI],AL               ; 0041693c
    CMP AL,0x0                          ; 0041693e
    JZ 0x00416952                       ; 00416940
        ;   XREF to: 00416952 (CONDITIONAL_JUMP)  ; LAB_00416952
    MOV AL,byte ptr [ESI + 0x1]         ; 00416942
    ADD ESI,0x2                         ; 00416945
    MOV byte ptr [EDI + 0x1],AL         ; 00416948
    ADD EDI,0x2                         ; 0041694b
    CMP AL,0x0                          ; 0041694e
    JNZ 0x0041693a                      ; 00416950
        ;   XREF to: 0041693a (CONDITIONAL_JUMP)  ; LAB_0041693a
    POP EDI                             ; 00416952
        ;   Label: LAB_00416952
    MOV EAX,dword ptr [EBX + 0x18c]     ; 00416953
    LEA ESI,[EAX + 0x1]                 ; 00416959
    MOV dword ptr [EBX + 0x18c],ESI     ; 0041695c
    POP EBP                             ; 00416962
    POP EDI                             ; 00416963
    POP ESI                             ; 00416964
    POP EBX                             ; 00416965
    RET                                 ; 00416966
    MOV EAX,ESI                         ; 00416967
        ;   Label: LAB_00416967
    POP EBP                             ; 00416969
    POP EDI                             ; 0041696a
    POP ESI                             ; 0041696b
    POP EBX                             ; 0041696c
    RET                                 ; 0041696d

