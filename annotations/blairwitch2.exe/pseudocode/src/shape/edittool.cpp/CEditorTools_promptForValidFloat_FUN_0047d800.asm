; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_0047d800(CEditorTools *this_ptr,char *prompt_text,float *result_ptr,int enable_range_check,float min_value,float max_value,int show_current_value)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   prompt_text
; float *          Stack[0xc]:4   result_ptr
; int              Stack[0x10]:4   enable_range_check
; float            Stack[0x14]:4   min_value
; float            Stack[0x18]:4   max_value
; int              Stack[0x1c]:4   show_current_value
; Local Variables:
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined1       Stack[-0x38]:1  local_38
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_game.cpp_FUN_004b2970 at 004b29a1
;   core_game.cpp_FUN_004b90d0 at 004b989c
;
; Referenced Globals:
;   undefined4 DAT_005d218a
;   undefined4 DAT_005d218d
;   TerminatedCString s_Please_enter_a_valid_num_005d2190
;   TerminatedCString s_Please_enter_a_valid_int_005d21ad
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_005ba8cc
;   crt_unknown.c_sprintf_FUN_005b7790
;   shape_edittool.cpp_CEditorTools_showError_FUN_0047be40
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047dae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047d800
        ;   Label: shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_0047d800
    PUSH ESI                            ; 0047d801
    PUSH EDI                            ; 0047d802
    PUSH EBP                            ; 0047d803
    MOV EBP,ESP                         ; 0047d804
    SUB ESP,0x2c                        ; 0047d806
    AND ESP,0xfffffff8                  ; 0047d809
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047d80c
    MOV EAX,dword ptr [EBP + 0x24]      ; 0047d80f
    MOV ESI,dword ptr [EBP + 0x18]      ; 0047d812
    MOV dword ptr [ESP],EAX             ; 0047d815
    MOV EAX,dword ptr [EBP + 0x28]      ; 0047d818
    MOV EDI,dword ptr [EBP + 0x20]      ; 0047d81b
    MOV dword ptr [ESP + 0x4],EAX       ; 0047d81e
    TEST byte ptr [EBP + 0x2c],0x1      ; 0047d822
    JNZ 0x0047d84c                      ; 0047d826
        ;   XREF to: 0047d84c (CONDITIONAL_JUMP)  ; LAB_0047d84c
    XOR DL,DL                           ; 0047d828
    MOV byte ptr [ESP + 0x8],DL         ; 0047d82a
    PUSH 0x1                            ; 0047d82e
        ;   Label: LAB_0047d82e
    PUSH 0x1e                           ; 0047d830
    LEA EAX,[ESP + 0x10]                ; 0047d832
    PUSH EAX                            ; 0047d836
    PUSH ESI                            ; 0047d837
    PUSH EBX                            ; 0047d838
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047dae0 ; 0047d839
        ;   XREF to: 0047dae0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_0047dae0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0047d83e
    TEST EAX,EAX                        ; 0047d841
    JNZ 0x0047d86b                      ; 0047d843
        ;   XREF to: 0047d86b (CONDITIONAL_JUMP)  ; LAB_0047d86b
    MOV ESP,EBP                         ; 0047d845
    POP EBP                             ; 0047d847
    POP EDI                             ; 0047d848
    POP ESI                             ; 0047d849
    POP EBX                             ; 0047d84a
    RET                                 ; 0047d84b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0047d84c
        ;   Label: LAB_0047d84c
    SUB ESP,0x8                         ; 0047d84f
    FLD float ptr [EAX]                 ; 0047d852
    FSTP double ptr [ESP]               ; 0047d854
    PUSH 0x5d218a                       ; 0047d857 | DAT_005d218a
    LEA EAX,[ESP + 0x14]                ; 0047d85c
    PUSH EAX                            ; 0047d860
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0047d861
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 0047d866
    JMP 0x0047d82e                      ; 0047d869
        ;   XREF to: 0047d82e (UNCONDITIONAL_JUMP)  ; LAB_0047d82e
    LEA EAX,[ESP + 0x28]                ; 0047d86b
        ;   Label: LAB_0047d86b
    PUSH EAX                            ; 0047d86f
    PUSH 0x5d218d                       ; 0047d870 | DAT_005d218d
    LEA EAX,[ESP + 0x10]                ; 0047d875
    PUSH EAX                            ; 0047d879
    CALL crt_stdio.c_sscanf_FUN_005ba8cc ; 0047d87a
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005ba8cc(char * str, char * format)
    ADD ESP,0xc                         ; 0047d87f
    CMP EAX,0x1                         ; 0047d882
    JNZ 0x0047d8b9                      ; 0047d885
        ;   XREF to: 0047d8b9 (CONDITIONAL_JUMP)  ; LAB_0047d8b9
    TEST EDI,EDI                        ; 0047d887
    JZ 0x0047d8a4                       ; 0047d889
        ;   XREF to: 0047d8a4 (CONDITIONAL_JUMP)  ; LAB_0047d8a4
    FLD float ptr [ESP + 0x28]          ; 0047d88b
    FCOMP float ptr [ESP]               ; 0047d88f
    FNSTSW AX                           ; 0047d892
    SAHF                                ; 0047d894
    JC 0x0047d8cc                       ; 0047d895
        ;   XREF to: 0047d8cc (CONDITIONAL_JUMP)  ; LAB_0047d8cc
    FLD float ptr [ESP + 0x28]          ; 0047d897
    FCOMP float ptr [ESP + 0x4]         ; 0047d89b
    FNSTSW AX                           ; 0047d89f
    SAHF                                ; 0047d8a1
    JA 0x0047d8cc                       ; 0047d8a2
        ;   XREF to: 0047d8cc (CONDITIONAL_JUMP)  ; LAB_0047d8cc
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0047d8a4
        ;   Label: LAB_0047d8a4
    MOV EAX,dword ptr [ESP + 0x28]      ; 0047d8a7
    MOV dword ptr [EBX],EAX             ; 0047d8ab
    MOV EAX,0x1                         ; 0047d8ad
    MOV ESP,EBP                         ; 0047d8b2
    POP EBP                             ; 0047d8b4
    POP EDI                             ; 0047d8b5
    POP ESI                             ; 0047d8b6
    POP EBX                             ; 0047d8b7
    RET                                 ; 0047d8b8
    PUSH 0x5d2190                       ; 0047d8b9 | = "Please enter a valid number."
        ;   Label: LAB_0047d8b9
    PUSH EBX                            ; 0047d8be
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 0047d8bf
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0047d8c4
    JMP 0x0047d82e                      ; 0047d8c7
        ;   XREF to: 0047d82e (UNCONDITIONAL_JUMP)  ; LAB_0047d82e
    FLD float ptr [ESP + 0x4]           ; 0047d8cc
        ;   Label: LAB_0047d8cc
    SUB ESP,0x8                         ; 0047d8d0
    FSTP double ptr [ESP]               ; 0047d8d3
    FLD float ptr [ESP + 0x8]           ; 0047d8d6
    SUB ESP,0x8                         ; 0047d8da
    FSTP double ptr [ESP]               ; 0047d8dd
    PUSH 0x5d21ad                       ; 0047d8e0 | = "Please enter a valid integer between ..."
    PUSH EBX                            ; 0047d8e5
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0047be40 ; 0047d8e6
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0047be40(CEditorTools * this_ptr, char * format)
    ADD ESP,0x18                        ; 0047d8eb
    JMP 0x0047d82e                      ; 0047d8ee
        ;   XREF to: 0047d82e (UNCONDITIONAL_JUMP)  ; LAB_0047d82e

