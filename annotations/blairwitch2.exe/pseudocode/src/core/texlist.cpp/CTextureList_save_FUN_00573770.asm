; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_texlist_cpp_CTextureList_save_FUN_00573770(CTextureList *this_ptr,char *filename)
;
; Parameters:
; CTextureList *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_unknown.c_FUN_005b8010
;   engine_dosio.cpp_FUN_00460c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573770
        ;   Label: core_texlist.cpp_CTextureList_save_FUN_00573770
    PUSH ESI                            ; 00573771
    PUSH EDI                            ; 00573772
    PUSH EBP                            ; 00573773
    SUB ESP,0x104                       ; 00573774
    MOV EBP,dword ptr [ESP + 0x118]     ; 0057377a
    MOV ESI,dword ptr [ESP + 0x11c]     ; 00573781
    MOV EDI,ESP                         ; 00573788
    MOV DL,0x2e                         ; 0057378a
    PUSH EDI                            ; 0057378c
    MOV AL,byte ptr [ESI]               ; 0057378d
        ;   Label: LAB_0057378d
    MOV byte ptr [EDI],AL               ; 0057378f
    CMP AL,0x0                          ; 00573791
    JZ 0x005737a5                       ; 00573793
        ;   XREF to: 005737a5 (CONDITIONAL_JUMP)  ; LAB_005737a5
    MOV AL,byte ptr [ESI + 0x1]         ; 00573795
    ADD ESI,0x2                         ; 00573798
    MOV byte ptr [EDI + 0x1],AL         ; 0057379b
    ADD EDI,0x2                         ; 0057379e
    CMP AL,0x0                          ; 005737a1
    JNZ 0x0057378d                      ; 005737a3
        ;   XREF to: 0057378d (CONDITIONAL_JUMP)  ; LAB_0057378d
    POP EDI                             ; 005737a5
        ;   Label: LAB_005737a5
    MOV ESI,ESP                         ; 005737a6
    MOV AL,byte ptr [ESI]               ; 005737a8
        ;   Label: LAB_005737a8
    CMP AL,DL                           ; 005737aa
    JZ 0x005737c0                       ; 005737ac
        ;   XREF to: 005737c0 (CONDITIONAL_JUMP)  ; LAB_005737c0
    CMP AL,0x0                          ; 005737ae
    JZ 0x005737be                       ; 005737b0
        ;   XREF to: 005737be (CONDITIONAL_JUMP)  ; LAB_005737be
    INC ESI                             ; 005737b2
    MOV AL,byte ptr [ESI]               ; 005737b3
    CMP AL,DL                           ; 005737b5
    JZ 0x005737c0                       ; 005737b7
        ;   XREF to: 005737c0 (CONDITIONAL_JUMP)  ; LAB_005737c0
    INC ESI                             ; 005737b9
    CMP AL,0x0                          ; 005737ba
    JNZ 0x005737a8                      ; 005737bc
        ;   XREF to: 005737a8 (CONDITIONAL_JUMP)  ; LAB_005737a8
    SUB ESI,ESI                         ; 005737be
        ;   Label: LAB_005737be
    MOV EDI,ESI                         ; 005737c0
        ;   Label: LAB_005737c0
    TEST ESI,ESI                        ; 005737c2
    JZ 0x0057389b                       ; 005737c4
        ;   XREF to: 0057389b (CONDITIONAL_JUMP)  ; LAB_0057389b
    MOV ESI,0x5ec60b                    ; 005737ca
        ;   Label: LAB_005737ca
    PUSH EDI                            ; 005737cf
    MOV AL,byte ptr [ESI]               ; 005737d0
        ;   Label: LAB_005737d0
    MOV byte ptr [EDI],AL               ; 005737d2
    CMP AL,0x0                          ; 005737d4
    JZ 0x005737e8                       ; 005737d6
        ;   XREF to: 005737e8 (CONDITIONAL_JUMP)  ; LAB_005737e8
    MOV AL,byte ptr [ESI + 0x1]         ; 005737d8
    ADD ESI,0x2                         ; 005737db
    MOV byte ptr [EDI + 0x1],AL         ; 005737de
    ADD EDI,0x2                         ; 005737e1
    CMP AL,0x0                          ; 005737e4
    JNZ 0x005737d0                      ; 005737e6
        ;   XREF to: 005737d0 (CONDITIONAL_JUMP)  ; LAB_005737d0
    POP EDI                             ; 005737e8
        ;   Label: LAB_005737e8
    PUSH 0x5ec610                       ; 005737e9
    LEA EAX,[ESP + 0x4]                 ; 005737ee
    PUSH EAX                            ; 005737f2
    PUSH 0x5ec613                       ; 005737f3
    CALL engine_dosio.cpp_FUN_00460c70  ; 005737f8
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 005737fd
    MOV dword ptr [ESP + 0x100],EAX     ; 00573800
    TEST EAX,EAX                        ; 00573807
    JNZ 0x0057382e                      ; 00573809
        ;   XREF to: 0057382e (CONDITIONAL_JUMP)  ; LAB_0057382e
    MOV EBX,0x5ec618                    ; 0057380b
    MOV ESI,0xb6                        ; 00573810
    PUSH 0x5ec62c                       ; 00573815
    MOV dword ptr [0x01d046a0],EBX      ; 0057381a | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00573820 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00573826
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0057382b
    MOV EDI,dword ptr [EBP]             ; 0057382e
        ;   Label: LAB_0057382e
    PUSH EDI                            ; 00573831
    PUSH 0x5ec64f                       ; 00573832
    MOV EAX,dword ptr [ESP + 0x108]     ; 00573837
    PUSH EAX                            ; 0057383e
    XOR EDI,EDI                         ; 0057383f
    CALL crt_unknown.c_FUN_005b8010     ; 00573841
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV EDX,dword ptr [EBP]             ; 00573846
    ADD ESP,0xc                         ; 00573849
    TEST EDX,EDX                        ; 0057384c
    JLE 0x00573880                      ; 0057384e
        ;   XREF to: 00573880 (CONDITIONAL_JUMP)  ; LAB_00573880
    LEA ESI,[EBP + 0xc]                 ; 00573850
    MOV EBX,EBP                         ; 00573853
    MOV ECX,dword ptr [EBX + 0x5dc4]    ; 00573855
        ;   Label: LAB_00573855
    PUSH ECX                            ; 0057385b
    PUSH ESI                            ; 0057385c
    PUSH 0x5ec653                       ; 0057385d
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00573862
    ADD EBX,0x4                         ; 00573869
    PUSH EAX                            ; 0057386c
    INC EDI                             ; 0057386d
    ADD ESI,0x18                        ; 0057386e
    CALL crt_unknown.c_FUN_005b8010     ; 00573871
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    MOV EDX,dword ptr [EBP]             ; 00573876
    ADD ESP,0x10                        ; 00573879
    CMP EDI,EDX                         ; 0057387c
    JL 0x00573855                       ; 0057387e
        ;   XREF to: 00573855 (CONDITIONAL_JUMP)  ; LAB_00573855
    MOV ECX,dword ptr [ESP + 0x100]     ; 00573880
        ;   Label: LAB_00573880
    PUSH ECX                            ; 00573887
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 00573888
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 0057388d
    ADD ESP,0x104                       ; 00573890
    POP EBP                             ; 00573896
    POP EDI                             ; 00573897
    POP ESI                             ; 00573898
    POP EBX                             ; 00573899
    RET                                 ; 0057389a
    MOV EDX,0x5ec5cf                    ; 0057389b
        ;   Label: LAB_0057389b
    MOV ECX,0xad                        ; 005738a0
    PUSH 0x5ec5e3                       ; 005738a5
    MOV dword ptr [0x01d046a0],EDX      ; 005738aa | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 005738b0 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005738b6
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005738bb
    JMP 0x005737ca                      ; 005738be
        ;   XREF to: 005737ca (UNCONDITIONAL_JUMP)  ; LAB_005737ca

