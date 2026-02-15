; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_texlist_cpp_CTextureList_setMasterTextureSelection_FUN_005dc6c0(CTextureList *this_ptr,char *filename)
;
; Parameters:
; CTextureList *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_core_texlist_cpp_006550e0
;   TerminatedCString s_CTextureList_setMasterTe_006550f4
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c_strcmp_FUN_005fef20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dc6c0
        ;   Label: core_texlist.cpp_CTextureList_setMasterTextureSelection_FUN_005dc6c0
    PUSH ESI                            ; 005dc6c1
    PUSH EDI                            ; 005dc6c2
    PUSH EBP                            ; 005dc6c3
    SUB ESP,0x4                         ; 005dc6c4
    MOV EDI,dword ptr [ESP + 0x18]      ; 005dc6c7
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005dc6cb
    MOV EDX,0xffffffff                  ; 005dc6cf
    MOV ECX,dword ptr [EDI + 0x6d64]    ; 005dc6d4
    XOR EBX,EBX                         ; 005dc6da
    MOV dword ptr [ESP],EDX             ; 005dc6dc
    TEST ECX,ECX                        ; 005dc6df
    JLE 0x005dc705                      ; 005dc6e1
        ;   XREF to: 005dc705 (CONDITIONAL_JUMP)  ; LAB_005dc705
    LEA ESI,[EDI + 0x6d68]              ; 005dc6e3
    PUSH ESI                            ; 005dc6e9
        ;   Label: LAB_005dc6e9
    PUSH EBP                            ; 005dc6ea
    CALL crt_string.c_strcmp_FUN_005fef20 ; 005dc6eb
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 005dc6f0
    TEST EAX,EAX                        ; 005dc6f3
    JZ 0x005dc71c                       ; 005dc6f5
        ;   XREF to: 005dc71c (CONDITIONAL_JUMP)  ; LAB_005dc71c
    INC EBX                             ; 005dc6f7
    MOV EAX,dword ptr [EDI + 0x6d64]    ; 005dc6f8
    ADD ESI,0x10                        ; 005dc6fe
    CMP EBX,EAX                         ; 005dc701
    JL 0x005dc6e9                       ; 005dc703
        ;   XREF to: 005dc6e9 (CONDITIONAL_JUMP)  ; LAB_005dc6e9
    CMP dword ptr [ESP],-0x1            ; 005dc705
        ;   Label: LAB_005dc705
    JZ 0x005dc721                       ; 005dc709
        ;   XREF to: 005dc721 (CONDITIONAL_JUMP)  ; LAB_005dc721
    MOV EAX,dword ptr [ESP]             ; 005dc70b
    MOV dword ptr [EDI + 0x1a5e8],EAX   ; 005dc70e
    ADD ESP,0x4                         ; 005dc714
    POP EBP                             ; 005dc717
    POP EDI                             ; 005dc718
    POP ESI                             ; 005dc719
    POP EBX                             ; 005dc71a
    RET                                 ; 005dc71b
    MOV dword ptr [ESP],EBX             ; 005dc71c
        ;   Label: LAB_005dc71c
    JMP 0x005dc705                      ; 005dc71f
        ;   XREF to: 005dc705 (UNCONDITIONAL_JUMP)  ; LAB_005dc705
    PUSH EBP                            ; 005dc721
        ;   Label: LAB_005dc721
    MOV ECX,0x6550e0                    ; 005dc722 | = "..\\core\\texlist.cpp"
    MOV EBX,0x18f                       ; 005dc727
    PUSH 0x6550f4                       ; 005dc72c | = "CTextureList::setMasterTextureSelecti..."
    MOV dword ptr [0x02f0ca48],ECX      ; 005dc731 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 005dc737 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005dc73d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005dc742
    MOV EAX,dword ptr [ESP]             ; 005dc745
    MOV dword ptr [EDI + 0x1a5e8],EAX   ; 005dc748
    ADD ESP,0x4                         ; 005dc74e
    POP EBP                             ; 005dc751
    POP EDI                             ; 005dc752
    POP ESI                             ; 005dc753
    POP EBX                             ; 005dc754
    RET                                 ; 005dc755

