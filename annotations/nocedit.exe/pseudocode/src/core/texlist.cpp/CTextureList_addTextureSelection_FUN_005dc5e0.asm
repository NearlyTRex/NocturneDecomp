; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_texlist_cpp_CTextureList_addTextureSelection_FUN_005dc5e0 (CTextureList *this_ptr,char *filename)
;
; Parameters:
; CTextureList *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[1]:
;   core_texlist.cpp_CTextureList_addMasterTextureSelection_FUN_005dc68e at 005dc697
;
; Referenced Globals:
;   TerminatedCString s_core_texlist_cpp_00655095
;   TerminatedCString s_CTextureList_addTextureS_006550a9
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c_strcmp_FUN_005fef20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dc5e0
        ;   Label: core_texlist.cpp_CTextureList_addTextureSelection_FUN_005dc5e0
    PUSH ESI                            ; 005dc5e1
    PUSH EDI                            ; 005dc5e2
    PUSH EBP                            ; 005dc5e3
    MOV EBP,dword ptr [ESP + 0x14]      ; 005dc5e4
    MOV ESI,dword ptr [ESP + 0x18]      ; 005dc5e8
    TEST ESI,ESI                        ; 005dc5ec
    JZ 0x005dc611                       ; 005dc5ee
        ;   XREF to: 005dc611 (CONDITIONAL_JUMP)  ; LAB_005dc611
    LEA EDI,[EBP + 0xc]                 ; 005dc5f0
        ;   Label: LAB_005dc5f0
    XOR EBX,EBX                         ; 005dc5f3
    IMUL EDX,EBX,0x18                   ; 005dc5f5
        ;   Label: LAB_005dc5f5
    CMP EBX,dword ptr [EBP]             ; 005dc5f8
    JGE 0x005dc624                      ; 005dc5fb
        ;   XREF to: 005dc624 (CONDITIONAL_JUMP)  ; LAB_005dc624
    PUSH ESI                            ; 005dc5fd
    PUSH EDI                            ; 005dc5fe
    CALL crt_string.c_strcmp_FUN_005fef20 ; 005dc5ff
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 005dc604
    TEST EAX,EAX                        ; 005dc607
    JZ 0x005dc655                       ; 005dc609
        ;   XREF to: 005dc655 (CONDITIONAL_JUMP)  ; LAB_005dc655
    INC EBX                             ; 005dc60b
    ADD EDI,0x18                        ; 005dc60c
    JMP 0x005dc5f5                      ; 005dc60f
        ;   XREF to: 005dc5f5 (UNCONDITIONAL_JUMP)  ; LAB_005dc5f5
    MOV EAX,dword ptr [EBP + 0x1a5e8]   ; 005dc611
        ;   Label: LAB_005dc611
    LEA ESI,[EBP + 0x6d68]              ; 005dc617
    SHL EAX,0x4                         ; 005dc61d
    ADD ESI,EAX                         ; 005dc620
    JMP 0x005dc5f0                      ; 005dc622
        ;   XREF to: 005dc5f0 (UNCONDITIONAL_JUMP)  ; LAB_005dc5f0
    PUSH EDI                            ; 005dc624
        ;   Label: LAB_005dc624
    MOV AL,byte ptr [ESI]               ; 005dc625
        ;   Label: LAB_005dc625
    MOV byte ptr [EDI],AL               ; 005dc627
    CMP AL,0x0                          ; 005dc629
    JZ 0x005dc63d                       ; 005dc62b
        ;   XREF to: 005dc63d (CONDITIONAL_JUMP)  ; LAB_005dc63d
    MOV AL,byte ptr [ESI + 0x1]         ; 005dc62d
    ADD ESI,0x2                         ; 005dc630
    MOV byte ptr [EDI + 0x1],AL         ; 005dc633
    ADD EDI,0x2                         ; 005dc636
    CMP AL,0x0                          ; 005dc639
    JNZ 0x005dc625                      ; 005dc63b
        ;   XREF to: 005dc625 (CONDITIONAL_JUMP)  ; LAB_005dc625
    POP EDI                             ; 005dc63d
        ;   Label: LAB_005dc63d
    MOV dword ptr [EDX + EBP*0x1 + 0x8],0x0 ; 005dc63e
    MOV ESI,dword ptr [EBP]             ; 005dc646
    INC ESI                             ; 005dc649
    MOV dword ptr [EBP],ESI             ; 005dc64a
    CMP ESI,0x3e8                       ; 005dc64d
    JG 0x005dc65c                       ; 005dc653
        ;   XREF to: 005dc65c (CONDITIONAL_JUMP)  ; LAB_005dc65c
    MOV EAX,EBX                         ; 005dc655
        ;   Label: LAB_005dc655
    POP EBP                             ; 005dc657
    POP EDI                             ; 005dc658
    POP ESI                             ; 005dc659
    POP EBX                             ; 005dc65a
    RET                                 ; 005dc65b
    MOV EBP,0x655095                    ; 005dc65c | = "..\\core\\texlist.cpp"
        ;   Label: LAB_005dc65c
    MOV EAX,0x15e                       ; 005dc661
    PUSH 0x6550a9                       ; 005dc666 | = "CTextureList::addTextureSelection - T..."
    MOV dword ptr [0x02f0ca48],EBP      ; 005dc66b | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005dc671 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005dc676
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005dc67b
    MOV EAX,EBX                         ; 005dc67e
    POP EBP                             ; 005dc680
    POP EDI                             ; 005dc681
    POP ESI                             ; 005dc682
    POP EBX                             ; 005dc683
    RET                                 ; 005dc684

