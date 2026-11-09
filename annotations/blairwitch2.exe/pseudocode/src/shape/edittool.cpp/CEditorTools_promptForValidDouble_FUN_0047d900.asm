; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEditorTools_promptForValidDouble_FUN_0047d900(CEditorTools *this_ptr,char *prompt_text,double *result_ptr,int enable_range_check,double min_value,double max_value,int show_current_value)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   prompt_text
; double *         Stack[0xc]:4   result_ptr
; int              Stack[0x10]:4   enable_range_check
; double           Stack[0x14]:8   min_value
; double           Stack[0x1c]:8   max_value
; int              Stack[0x24]:4   show_current_value
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_005ba8cc
;   crt_unknown.c_FUN_005b7790
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047dae0
;   shape_edittool.cpp_FUN_0047be40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047d900
        ;   Label: shape_edittool.cpp_CEditorTools_promptForValidDouble_FUN_0047d900
    PUSH ESI                            ; 0047d901
    PUSH EDI                            ; 0047d902
    PUSH EBP                            ; 0047d903
    MOV EBP,ESP                         ; 0047d904
    SUB ESP,0x38                        ; 0047d906
    AND ESP,0xfffffff8                  ; 0047d909
    MOV EAX,dword ptr [EBP + 0x24]      ; 0047d90c
    MOV dword ptr [ESP + 0x8],EAX       ; 0047d90f
    MOV EAX,dword ptr [EBP + 0x28]      ; 0047d913
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047d916
    MOV dword ptr [ESP + 0xc],EAX       ; 0047d919
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0047d91d
    MOV ESI,dword ptr [EBP + 0x18]      ; 0047d920
    MOV dword ptr [ESP + 0x10],EAX      ; 0047d923
    MOV EAX,dword ptr [EBP + 0x30]      ; 0047d927
    MOV EDI,dword ptr [EBP + 0x20]      ; 0047d92a
    MOV dword ptr [ESP + 0x14],EAX      ; 0047d92d
    TEST byte ptr [EBP + 0x34],0x1      ; 0047d931
    JNZ 0x0047d95b                      ; 0047d935
        ;   XREF to: 0047d95b (CONDITIONAL_JUMP)  ; LAB_0047d95b
    XOR DL,DL                           ; 0047d937
    MOV byte ptr [ESP + 0x18],DL        ; 0047d939
    PUSH 0x1                            ; 0047d93d
        ;   Label: LAB_0047d93d
    PUSH 0x1e                           ; 0047d93f
    LEA EAX,[ESP + 0x20]                ; 0047d941
    PUSH EAX                            ; 0047d945
    PUSH ESI                            ; 0047d946
    PUSH EBX                            ; 0047d947
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047dae0 ; 0047d948
        ;   XREF to: 0047dae0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047dae0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0047d94d
    TEST EAX,EAX                        ; 0047d950
    JNZ 0x0047d979                      ; 0047d952
        ;   XREF to: 0047d979 (CONDITIONAL_JUMP)  ; LAB_0047d979
    MOV ESP,EBP                         ; 0047d954
    POP EBP                             ; 0047d956
    POP EDI                             ; 0047d957
    POP ESI                             ; 0047d958
    POP EBX                             ; 0047d959
    RET                                 ; 0047d95a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0047d95b
        ;   Label: LAB_0047d95b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0047d95e
    PUSH EDX                            ; 0047d961
    MOV ECX,dword ptr [EAX]             ; 0047d962
    PUSH ECX                            ; 0047d964
    PUSH 0x5d21dd                       ; 0047d965
    LEA EAX,[ESP + 0x24]                ; 0047d96a
    PUSH EAX                            ; 0047d96e
    CALL crt_unknown.c_FUN_005b7790     ; 0047d96f
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 0047d974
    JMP 0x0047d93d                      ; 0047d977
        ;   XREF to: 0047d93d (UNCONDITIONAL_JUMP)  ; LAB_0047d93d
    MOV EAX,ESP                         ; 0047d979
        ;   Label: LAB_0047d979
    PUSH EAX                            ; 0047d97b
    PUSH 0x5d21e3                       ; 0047d97c
    LEA EAX,[ESP + 0x20]                ; 0047d981
    PUSH EAX                            ; 0047d985
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0047d986
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0xc                         ; 0047d98b
    CMP EAX,0x1                         ; 0047d98e
    JNZ 0x0047d9ca                      ; 0047d991
        ;   XREF to: 0047d9ca (CONDITIONAL_JUMP)  ; LAB_0047d9ca
    TEST EDI,EDI                        ; 0047d993
    JZ 0x0047d9af                       ; 0047d995
        ;   XREF to: 0047d9af (CONDITIONAL_JUMP)  ; LAB_0047d9af
    FLD double ptr [ESP]                ; 0047d997
    FCOMP double ptr [ESP + 0x8]        ; 0047d99a
    FNSTSW AX                           ; 0047d99e
    SAHF                                ; 0047d9a0
    JC 0x0047d9dd                       ; 0047d9a1
        ;   XREF to: 0047d9dd (CONDITIONAL_JUMP)  ; LAB_0047d9dd
    FLD double ptr [ESP]                ; 0047d9a3
    FCOMP double ptr [ESP + 0x10]       ; 0047d9a6
    FNSTSW AX                           ; 0047d9aa
    SAHF                                ; 0047d9ac
    JA 0x0047d9dd                       ; 0047d9ad
        ;   XREF to: 0047d9dd (CONDITIONAL_JUMP)  ; LAB_0047d9dd
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0047d9af
        ;   Label: LAB_0047d9af
    MOV EAX,dword ptr [ESP]             ; 0047d9b2
    MOV dword ptr [EBX],EAX             ; 0047d9b5
    MOV EAX,dword ptr [ESP + 0x4]       ; 0047d9b7
    MOV dword ptr [EBX + 0x4],EAX       ; 0047d9bb
    MOV EAX,0x1                         ; 0047d9be
    MOV ESP,EBP                         ; 0047d9c3
    POP EBP                             ; 0047d9c5
    POP EDI                             ; 0047d9c6
    POP ESI                             ; 0047d9c7
    POP EBX                             ; 0047d9c8
    RET                                 ; 0047d9c9
    PUSH 0x5d21e7                       ; 0047d9ca
        ;   Label: LAB_0047d9ca
    PUSH EBX                            ; 0047d9cf
    CALL shape_edittool.cpp_FUN_0047be40 ; 0047d9d0
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047be40()
    ADD ESP,0x8                         ; 0047d9d5
    JMP 0x0047d93d                      ; 0047d9d8
        ;   XREF to: 0047d93d (UNCONDITIONAL_JUMP)  ; LAB_0047d93d
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047d9dd
        ;   Label: LAB_0047d9dd
    PUSH EAX                            ; 0047d9e1
    MOV EDX,dword ptr [ESP + 0x14]      ; 0047d9e2
    PUSH EDX                            ; 0047d9e6
    MOV ECX,dword ptr [ESP + 0x14]      ; 0047d9e7
    PUSH ECX                            ; 0047d9eb
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047d9ec
    PUSH EAX                            ; 0047d9f0
    PUSH 0x5d2204                       ; 0047d9f1
    PUSH EBX                            ; 0047d9f6
    CALL shape_edittool.cpp_FUN_0047be40 ; 0047d9f7
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047be40()
    ADD ESP,0x18                        ; 0047d9fc
    JMP 0x0047d93d                      ; 0047d9ff
        ;   XREF to: 0047d93d (UNCONDITIONAL_JUMP)  ; LAB_0047d93d

