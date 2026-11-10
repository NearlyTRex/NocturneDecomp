; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEditorTools_promptForValidDouble_FUN_00495f70(CEditorTools *this_ptr,char *prompt_text,double *result_ptr,int enable_range_check,double min_value,double max_value,int show_current_value)
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
;   crt_stdio.c_sscanf_FUN_005c2cac
;   crt_unknown.c_sprintf_FUN_005bfb40
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00496150
;   shape_edittool.cpp_FUN_004943a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00495f70
        ;   Label: shape_edittool.cpp_CEditorTools_promptForValidDouble_FUN_00495f70
    PUSH ESI                            ; 00495f71
    PUSH EDI                            ; 00495f72
    PUSH EBP                            ; 00495f73
    MOV EBP,ESP                         ; 00495f74
    SUB ESP,0x38                        ; 00495f76
    AND ESP,0xfffffff8                  ; 00495f79
    MOV EAX,dword ptr [EBP + 0x24]      ; 00495f7c
    MOV dword ptr [ESP + 0x8],EAX       ; 00495f7f
    MOV EAX,dword ptr [EBP + 0x28]      ; 00495f83
    MOV EBX,dword ptr [EBP + 0x14]      ; 00495f86
    MOV dword ptr [ESP + 0xc],EAX       ; 00495f89
    MOV EAX,dword ptr [EBP + 0x2c]      ; 00495f8d
    MOV ESI,dword ptr [EBP + 0x18]      ; 00495f90
    MOV dword ptr [ESP + 0x10],EAX      ; 00495f93
    MOV EAX,dword ptr [EBP + 0x30]      ; 00495f97
    MOV EDI,dword ptr [EBP + 0x20]      ; 00495f9a
    MOV dword ptr [ESP + 0x14],EAX      ; 00495f9d
    TEST byte ptr [EBP + 0x34],0x1      ; 00495fa1
    JNZ 0x00495fcb                      ; 00495fa5
        ;   XREF to: 00495fcb (CONDITIONAL_JUMP)  ; LAB_00495fcb
    XOR DL,DL                           ; 00495fa7
    MOV byte ptr [ESP + 0x18],DL        ; 00495fa9
    PUSH 0x1                            ; 00495fad
        ;   Label: LAB_00495fad
    PUSH 0x1e                           ; 00495faf
    LEA EAX,[ESP + 0x20]                ; 00495fb1
    PUSH EAX                            ; 00495fb5
    PUSH ESI                            ; 00495fb6
    PUSH EBX                            ; 00495fb7
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00496150 ; 00495fb8
        ;   XREF to: 00496150 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00496150(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 00495fbd
    TEST EAX,EAX                        ; 00495fc0
    JNZ 0x00495fe9                      ; 00495fc2
        ;   XREF to: 00495fe9 (CONDITIONAL_JUMP)  ; LAB_00495fe9
    MOV ESP,EBP                         ; 00495fc4
    POP EBP                             ; 00495fc6
    POP EDI                             ; 00495fc7
    POP ESI                             ; 00495fc8
    POP EBX                             ; 00495fc9
    RET                                 ; 00495fca
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00495fcb
        ;   Label: LAB_00495fcb
    MOV EDX,dword ptr [EAX + 0x4]       ; 00495fce
    PUSH EDX                            ; 00495fd1
    MOV ECX,dword ptr [EAX]             ; 00495fd2
    PUSH ECX                            ; 00495fd4
    PUSH 0x5dbf7b                       ; 00495fd5
    LEA EAX,[ESP + 0x24]                ; 00495fda
    PUSH EAX                            ; 00495fde
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00495fdf
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 00495fe4
    JMP 0x00495fad                      ; 00495fe7
        ;   XREF to: 00495fad (UNCONDITIONAL_JUMP)  ; LAB_00495fad
    MOV EAX,ESP                         ; 00495fe9
        ;   Label: LAB_00495fe9
    PUSH EAX                            ; 00495feb
    PUSH 0x5dbf81                       ; 00495fec
    LEA EAX,[ESP + 0x20]                ; 00495ff1
    PUSH EAX                            ; 00495ff5
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00495ff6
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0xc                         ; 00495ffb
    CMP EAX,0x1                         ; 00495ffe
    JNZ 0x0049603a                      ; 00496001
        ;   XREF to: 0049603a (CONDITIONAL_JUMP)  ; LAB_0049603a
    TEST EDI,EDI                        ; 00496003
    JZ 0x0049601f                       ; 00496005
        ;   XREF to: 0049601f (CONDITIONAL_JUMP)  ; LAB_0049601f
    FLD double ptr [ESP]                ; 00496007
    FCOMP double ptr [ESP + 0x8]        ; 0049600a
    FNSTSW AX                           ; 0049600e
    SAHF                                ; 00496010
    JC 0x0049604d                       ; 00496011
        ;   XREF to: 0049604d (CONDITIONAL_JUMP)  ; LAB_0049604d
    FLD double ptr [ESP]                ; 00496013
    FCOMP double ptr [ESP + 0x10]       ; 00496016
    FNSTSW AX                           ; 0049601a
    SAHF                                ; 0049601c
    JA 0x0049604d                       ; 0049601d
        ;   XREF to: 0049604d (CONDITIONAL_JUMP)  ; LAB_0049604d
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0049601f
        ;   Label: LAB_0049601f
    MOV EAX,dword ptr [ESP]             ; 00496022
    MOV dword ptr [EBX],EAX             ; 00496025
    MOV EAX,dword ptr [ESP + 0x4]       ; 00496027
    MOV dword ptr [EBX + 0x4],EAX       ; 0049602b
    MOV EAX,0x1                         ; 0049602e
    MOV ESP,EBP                         ; 00496033
    POP EBP                             ; 00496035
    POP EDI                             ; 00496036
    POP ESI                             ; 00496037
    POP EBX                             ; 00496038
    RET                                 ; 00496039
    PUSH 0x5dbf85                       ; 0049603a
        ;   Label: LAB_0049603a
    PUSH EBX                            ; 0049603f
    CALL shape_edittool.cpp_FUN_004943a0 ; 00496040
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004943a0()
    ADD ESP,0x8                         ; 00496045
    JMP 0x00495fad                      ; 00496048
        ;   XREF to: 00495fad (UNCONDITIONAL_JUMP)  ; LAB_00495fad
    MOV EAX,dword ptr [ESP + 0x14]      ; 0049604d
        ;   Label: LAB_0049604d
    PUSH EAX                            ; 00496051
    MOV EDX,dword ptr [ESP + 0x14]      ; 00496052
    PUSH EDX                            ; 00496056
    MOV ECX,dword ptr [ESP + 0x14]      ; 00496057
    PUSH ECX                            ; 0049605b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0049605c
    PUSH EAX                            ; 00496060
    PUSH 0x5dbfa2                       ; 00496061
    PUSH EBX                            ; 00496066
    CALL shape_edittool.cpp_FUN_004943a0 ; 00496067
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004943a0()
    ADD ESP,0x18                        ; 0049606c
    JMP 0x00495fad                      ; 0049606f
        ;   XREF to: 00495fad (UNCONDITIONAL_JUMP)  ; LAB_00495fad

