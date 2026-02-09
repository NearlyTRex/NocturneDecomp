; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_skeledit_cpp_CDeformableModel_FUN_0058b8e0(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x214]:1  local_214
; undefined        Stack[-0x110]:1  local_110
;
; XREF[2]:
;   core_skeledit.cpp_CDeformableModel_FUN_0058b660 at 0058b862
;   core_skeledit.cpp_FUN_0058c190 at 0058c315
;
; Referenced Globals:
;   TerminatedCString s_anon_0064a8c3
;   TerminatedCString s_raw_0064a8ca
;
; Called Functions:
;   crt_file.c_makepath_FUN_005febfc
;   crt_stack.c___STK_FUN_005ff9f3
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   crt_string.c_splitpath_FUN_005ff178
;
; *****************************************************************************

section .text

    PUSH 0x22c                          ; 0058b8e0
        ;   Label: core_skeledit.cpp_CDeformableModel_FUN_0058b8e0
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 0058b8e5
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH EBX                            ; 0058b8ea
    PUSH ESI                            ; 0058b8eb
    PUSH EDI                            ; 0058b8ec
    PUSH EBP                            ; 0058b8ed
    SUB ESP,0x204                       ; 0058b8ee
    MOV EDI,dword ptr [ESP + 0x218]     ; 0058b8f4
    MOV EBP,dword ptr [ESP + 0x21c]     ; 0058b8fb
    MOV EBX,0x1                         ; 0058b902
    MOV ESI,EBP                         ; 0058b907
    PUSH ESI                            ; 0058b909
        ;   Label: LAB_0058b909
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058b90a
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0058b90f
    TEST EAX,EAX                        ; 0058b912
    JL 0x0058b920                       ; 0058b914
        ;   XREF to: 0058b920 (CONDITIONAL_JUMP)  ; LAB_0058b920
    CMP EAX,0xa                         ; 0058b916
    JNZ 0x0058b909                      ; 0058b919
        ;   XREF to: 0058b909 (CONDITIONAL_JUMP)  ; LAB_0058b909
    DEC EBX                             ; 0058b91b
    TEST EBX,EBX                        ; 0058b91c
    JG 0x0058b909                       ; 0058b91e
        ;   XREF to: 0058b909 (CONDITIONAL_JUMP)  ; LAB_0058b909
    MOV EDX,dword ptr [EDI + 0xbc]      ; 0058b920
        ;   Label: LAB_0058b920
    XOR EBX,EBX                         ; 0058b926
    TEST EDX,EDX                        ; 0058b928
    JLE 0x0058b998                      ; 0058b92a
        ;   XREF to: 0058b998 (CONDITIONAL_JUMP)  ; LAB_0058b998
    LEA ESI,[EDI + 0xc8]                ; 0058b92c
    MOV EAX,ESP                         ; 0058b932
        ;   Label: LAB_0058b932
    PUSH EAX                            ; 0058b934
    PUSH 0x64a8c3                       ; 0058b935 | = "%[^\n]\n"
    PUSH EBP                            ; 0058b93a
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058b93b
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0058b940
    CMP EAX,0x1                         ; 0058b943
    JZ 0x0058b955                       ; 0058b946
        ;   XREF to: 0058b955 (CONDITIONAL_JUMP)  ; LAB_0058b955
    XOR EAX,EAX                         ; 0058b948
    ADD ESP,0x204                       ; 0058b94a
    POP EBP                             ; 0058b950
    POP EDI                             ; 0058b951
    POP ESI                             ; 0058b952
    POP EBX                             ; 0058b953
    RET                                 ; 0058b954
    PUSH 0x0                            ; 0058b955
        ;   Label: LAB_0058b955
    LEA EAX,[ESP + 0x108]               ; 0058b957
    PUSH EAX                            ; 0058b95e
    PUSH 0x0                            ; 0058b95f
    PUSH 0x0                            ; 0058b961
    LEA EAX,[ESP + 0x10]                ; 0058b963
    PUSH EAX                            ; 0058b967
    CALL crt_string.c_splitpath_FUN_005ff178 ; 0058b968
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 0058b96d
    PUSH 0x64a8ca                       ; 0058b970 | = ".raw"
    LEA EAX,[ESP + 0x108]               ; 0058b975
    PUSH EAX                            ; 0058b97c
    PUSH 0x0                            ; 0058b97d
    PUSH 0x0                            ; 0058b97f
    PUSH ESI                            ; 0058b981
    INC EBX                             ; 0058b982
    CALL crt_file.c_makepath_FUN_005febfc ; 0058b983
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0058b988
    MOV ECX,dword ptr [EDI + 0xbc]      ; 0058b98b
    ADD ESI,0x48                        ; 0058b991
    CMP EBX,ECX                         ; 0058b994
    JL 0x0058b932                       ; 0058b996
        ;   XREF to: 0058b932 (CONDITIONAL_JUMP)  ; LAB_0058b932
    MOV EAX,0x1                         ; 0058b998
        ;   Label: LAB_0058b998
    ADD ESP,0x204                       ; 0058b99d
    POP EBP                             ; 0058b9a3
    POP EDI                             ; 0058b9a4
    POP ESI                             ; 0058b9a5
    POP EBX                             ; 0058b9a6
    RET                                 ; 0058b9a7

