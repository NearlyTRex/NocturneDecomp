; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_0055b8f0(CDemonSet *this_ptr,_FILE *file_handle)
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
;   core_set.cpp_FUN_0054d3c0 at 0054db79
;
; Referenced Globals:
;   undefined4 DAT_005f106f
;   TerminatedCString s_d_005f1073
;
; Called Functions:
;   crt_stdio.c_fgets_FUN_005c1180
;   crt_stdio.c_fscanf_FUN_005c04b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055b8f0
        ;   Label: core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_0055b8f0
    PUSH ESI                            ; 0055b8f1
    PUSH EDI                            ; 0055b8f2
    PUSH EBP                            ; 0055b8f3
    SUB ESP,0x108                       ; 0055b8f4
    MOV ESI,dword ptr [ESP + 0x120]     ; 0055b8fa
    PUSH ESI                            ; 0055b901
    PUSH 0xff                           ; 0055b902
    LEA EAX,[ESP + 0x8]                 ; 0055b907
    PUSH EAX                            ; 0055b90b
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0055b90c
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0055b911
    LEA EAX,[ESP + 0x100]               ; 0055b914
    PUSH EAX                            ; 0055b91b
    PUSH 0x5f106f                       ; 0055b91c | DAT_005f106f
    PUSH ESI                            ; 0055b921
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055b922
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0055b927
    MOV EDX,dword ptr [ESP + 0x100]     ; 0055b92a
    XOR EDI,EDI                         ; 0055b931
    TEST EDX,EDX                        ; 0055b933
    JLE 0x0055b983                      ; 0055b935
        ;   XREF to: 0055b983 (CONDITIONAL_JUMP)  ; LAB_0055b983
    LEA EAX,[ESP + 0x104]               ; 0055b937
        ;   Label: LAB_0055b937
    PUSH EAX                            ; 0055b93e
    PUSH 0x5f1073                       ; 0055b93f | = "\"%*[^\"]\", %d\n"
    PUSH ESI                            ; 0055b944
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055b945
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0055b94a
    MOV EBP,dword ptr [ESP + 0x104]     ; 0055b94d
    XOR EBX,EBX                         ; 0055b954
    TEST EBP,EBP                        ; 0055b956
    JLE 0x0055b977                      ; 0055b958
        ;   XREF to: 0055b977 (CONDITIONAL_JUMP)  ; LAB_0055b977
    PUSH ESI                            ; 0055b95a
        ;   Label: LAB_0055b95a
    PUSH 0xff                           ; 0055b95b
    LEA EAX,[ESP + 0x8]                 ; 0055b960
    PUSH EAX                            ; 0055b964
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0055b965
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0055b96a
    INC EBX                             ; 0055b96d
    CMP EBX,dword ptr [ESP + 0x104]     ; 0055b96e
    JL 0x0055b95a                       ; 0055b975
        ;   XREF to: 0055b95a (CONDITIONAL_JUMP)  ; LAB_0055b95a
    MOV ECX,dword ptr [ESP + 0x100]     ; 0055b977
        ;   Label: LAB_0055b977
    INC EDI                             ; 0055b97e
    CMP EDI,ECX                         ; 0055b97f
    JL 0x0055b937                       ; 0055b981
        ;   XREF to: 0055b937 (CONDITIONAL_JUMP)  ; LAB_0055b937
    ADD ESP,0x108                       ; 0055b983
        ;   Label: LAB_0055b983
    POP EBP                             ; 0055b989
    POP EDI                             ; 0055b98a
    POP ESI                             ; 0055b98b
    POP EBX                             ; 0055b98c
    RET                                 ; 0055b98d

