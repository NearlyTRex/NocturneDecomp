; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_00495e70(CEditorTools *this_ptr,char *prompt_text,float *result_ptr,int enable_range_check,float min_value,float max_value,int show_current_value)
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
;   core_game.cpp_CGame_processCheatCodes_FUN_004d27b0 at 004d3024
;   core_game.cpp_setupMovieRecording_FUN_004cb870 at 004cb8a1
;
; Referenced Globals:
;   undefined4 DAT_005dbf28
;   undefined4 DAT_005dbf2b
;   TerminatedCString s_Please_enter_a_valid_num_005dbf2e
;   TerminatedCString s_Please_enter_a_valid_int_005dbf4b
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_005c2cac
;   crt_unknown.c_sprintf_FUN_005bfb40
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00496150
;   shape_edittool.cpp_FUN_004943a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00495e70
        ;   Label: shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_00495e70
    PUSH ESI                            ; 00495e71
    PUSH EDI                            ; 00495e72
    PUSH EBP                            ; 00495e73
    MOV EBP,ESP                         ; 00495e74
    SUB ESP,0x2c                        ; 00495e76
    AND ESP,0xfffffff8                  ; 00495e79
    MOV EBX,dword ptr [EBP + 0x14]      ; 00495e7c
    MOV EAX,dword ptr [EBP + 0x24]      ; 00495e7f
    MOV ESI,dword ptr [EBP + 0x18]      ; 00495e82
    MOV dword ptr [ESP],EAX             ; 00495e85
    MOV EAX,dword ptr [EBP + 0x28]      ; 00495e88
    MOV EDI,dword ptr [EBP + 0x20]      ; 00495e8b
    MOV dword ptr [ESP + 0x4],EAX       ; 00495e8e
    TEST byte ptr [EBP + 0x2c],0x1      ; 00495e92
    JNZ 0x00495ebc                      ; 00495e96
        ;   XREF to: 00495ebc (CONDITIONAL_JUMP)  ; LAB_00495ebc
    XOR DL,DL                           ; 00495e98
    MOV byte ptr [ESP + 0x8],DL         ; 00495e9a
    PUSH 0x1                            ; 00495e9e
        ;   Label: LAB_00495e9e
    PUSH 0x1e                           ; 00495ea0
    LEA EAX,[ESP + 0x10]                ; 00495ea2
    PUSH EAX                            ; 00495ea6
    PUSH ESI                            ; 00495ea7
    PUSH EBX                            ; 00495ea8
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00496150 ; 00495ea9
        ;   XREF to: 00496150 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_00496150(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 00495eae
    TEST EAX,EAX                        ; 00495eb1
    JNZ 0x00495edb                      ; 00495eb3
        ;   XREF to: 00495edb (CONDITIONAL_JUMP)  ; LAB_00495edb
    MOV ESP,EBP                         ; 00495eb5
    POP EBP                             ; 00495eb7
    POP EDI                             ; 00495eb8
    POP ESI                             ; 00495eb9
    POP EBX                             ; 00495eba
    RET                                 ; 00495ebb
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00495ebc
        ;   Label: LAB_00495ebc
    SUB ESP,0x8                         ; 00495ebf
    FLD float ptr [EAX]                 ; 00495ec2
    FSTP double ptr [ESP]               ; 00495ec4
    PUSH 0x5dbf28                       ; 00495ec7 | DAT_005dbf28
    LEA EAX,[ESP + 0x14]                ; 00495ecc
    PUSH EAX                            ; 00495ed0
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00495ed1
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 00495ed6
    JMP 0x00495e9e                      ; 00495ed9
        ;   XREF to: 00495e9e (UNCONDITIONAL_JUMP)  ; LAB_00495e9e
    LEA EAX,[ESP + 0x28]                ; 00495edb
        ;   Label: LAB_00495edb
    PUSH EAX                            ; 00495edf
    PUSH 0x5dbf2b                       ; 00495ee0 | DAT_005dbf2b
    LEA EAX,[ESP + 0x10]                ; 00495ee5
    PUSH EAX                            ; 00495ee9
    CALL crt_stdio.c_sscanf_FUN_005c2cac ; 00495eea
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_005c2cac(char * str, char * format)
    ADD ESP,0xc                         ; 00495eef
    CMP EAX,0x1                         ; 00495ef2
    JNZ 0x00495f29                      ; 00495ef5
        ;   XREF to: 00495f29 (CONDITIONAL_JUMP)  ; LAB_00495f29
    TEST EDI,EDI                        ; 00495ef7
    JZ 0x00495f14                       ; 00495ef9
        ;   XREF to: 00495f14 (CONDITIONAL_JUMP)  ; LAB_00495f14
    FLD float ptr [ESP + 0x28]          ; 00495efb
    FCOMP float ptr [ESP]               ; 00495eff
    FNSTSW AX                           ; 00495f02
    SAHF                                ; 00495f04
    JC 0x00495f3c                       ; 00495f05
        ;   XREF to: 00495f3c (CONDITIONAL_JUMP)  ; LAB_00495f3c
    FLD float ptr [ESP + 0x28]          ; 00495f07
    FCOMP float ptr [ESP + 0x4]         ; 00495f0b
    FNSTSW AX                           ; 00495f0f
    SAHF                                ; 00495f11
    JA 0x00495f3c                       ; 00495f12
        ;   XREF to: 00495f3c (CONDITIONAL_JUMP)  ; LAB_00495f3c
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00495f14
        ;   Label: LAB_00495f14
    MOV EAX,dword ptr [ESP + 0x28]      ; 00495f17
    MOV dword ptr [EBX],EAX             ; 00495f1b
    MOV EAX,0x1                         ; 00495f1d
    MOV ESP,EBP                         ; 00495f22
    POP EBP                             ; 00495f24
    POP EDI                             ; 00495f25
    POP ESI                             ; 00495f26
    POP EBX                             ; 00495f27
    RET                                 ; 00495f28
    PUSH 0x5dbf2e                       ; 00495f29 | = "Please enter a valid number."
        ;   Label: LAB_00495f29
    PUSH EBX                            ; 00495f2e
    CALL shape_edittool.cpp_FUN_004943a0 ; 00495f2f
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004943a0()
    ADD ESP,0x8                         ; 00495f34
    JMP 0x00495e9e                      ; 00495f37
        ;   XREF to: 00495e9e (UNCONDITIONAL_JUMP)  ; LAB_00495e9e
    FLD float ptr [ESP + 0x4]           ; 00495f3c
        ;   Label: LAB_00495f3c
    SUB ESP,0x8                         ; 00495f40
    FSTP double ptr [ESP]               ; 00495f43
    FLD float ptr [ESP + 0x8]           ; 00495f46
    SUB ESP,0x8                         ; 00495f4a
    FSTP double ptr [ESP]               ; 00495f4d
    PUSH 0x5dbf4b                       ; 00495f50 | = "Please enter a valid integer between ..."
    PUSH EBX                            ; 00495f55
    CALL shape_edittool.cpp_FUN_004943a0 ; 00495f56
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004943a0()
    ADD ESP,0x18                        ; 00495f5b
    JMP 0x00495e9e                      ; 00495f5e
        ;   XREF to: 00495e9e (UNCONDITIONAL_JUMP)  ; LAB_00495e9e

