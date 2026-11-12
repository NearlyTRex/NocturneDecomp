; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00539ff0(CDemonSet *this_ptr,_FILE *file_handle)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_load_FUN_0052c0e0 at 0052c899
;
; Referenced Globals:
;   undefined4 DAT_005e609f
;   TerminatedCString s_d_005e60a3
;
; Called Functions:
;   crt_stdio.c_fgets_FUN_005b9600
;   crt_stdio.c_fscanf_FUN_005b8100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00539ff0
        ;   Label: core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00539ff0
    PUSH ESI                            ; 00539ff1
    PUSH EDI                            ; 00539ff2
    PUSH EBP                            ; 00539ff3
    SUB ESP,0x108                       ; 00539ff4
    MOV ESI,dword ptr [ESP + 0x120]     ; 00539ffa
    PUSH ESI                            ; 0053a001
    PUSH 0xff                           ; 0053a002
    LEA EAX,[ESP + 0x8]                 ; 0053a007
    PUSH EAX                            ; 0053a00b
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0053a00c
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0053a011
    LEA EAX,[ESP + 0x100]               ; 0053a014
    PUSH EAX                            ; 0053a01b
    PUSH 0x5e609f                       ; 0053a01c | DAT_005e609f
    PUSH ESI                            ; 0053a021
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0053a022
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0053a027
    MOV EDX,dword ptr [ESP + 0x100]     ; 0053a02a
    XOR EDI,EDI                         ; 0053a031
    TEST EDX,EDX                        ; 0053a033
    JLE 0x0053a083                      ; 0053a035
        ;   XREF to: 0053a083 (CONDITIONAL_JUMP)  ; LAB_0053a083
    LEA EAX,[ESP + 0x104]               ; 0053a037
        ;   Label: LAB_0053a037
    PUSH EAX                            ; 0053a03e
    PUSH 0x5e60a3                       ; 0053a03f | = "\"%*[^\"]\", %d\n"
    PUSH ESI                            ; 0053a044
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0053a045
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0053a04a
    MOV EBP,dword ptr [ESP + 0x104]     ; 0053a04d
    XOR EBX,EBX                         ; 0053a054
    TEST EBP,EBP                        ; 0053a056
    JLE 0x0053a077                      ; 0053a058
        ;   XREF to: 0053a077 (CONDITIONAL_JUMP)  ; LAB_0053a077
    PUSH ESI                            ; 0053a05a
        ;   Label: LAB_0053a05a
    PUSH 0xff                           ; 0053a05b
    LEA EAX,[ESP + 0x8]                 ; 0053a060
    PUSH EAX                            ; 0053a064
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 0053a065
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005b9600(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0053a06a
    INC EBX                             ; 0053a06d
    CMP EBX,dword ptr [ESP + 0x104]     ; 0053a06e
    JL 0x0053a05a                       ; 0053a075
        ;   XREF to: 0053a05a (CONDITIONAL_JUMP)  ; LAB_0053a05a
    MOV ECX,dword ptr [ESP + 0x100]     ; 0053a077
        ;   Label: LAB_0053a077
    INC EDI                             ; 0053a07e
    CMP EDI,ECX                         ; 0053a07f
    JL 0x0053a037                       ; 0053a081
        ;   XREF to: 0053a037 (CONDITIONAL_JUMP)  ; LAB_0053a037
    ADD ESP,0x108                       ; 0053a083
        ;   Label: LAB_0053a083
    POP EBP                             ; 0053a089
    POP EDI                             ; 0053a08a
    POP ESI                             ; 0053a08b
    POP EBX                             ; 0053a08c
    RET                                 ; 0053a08d

