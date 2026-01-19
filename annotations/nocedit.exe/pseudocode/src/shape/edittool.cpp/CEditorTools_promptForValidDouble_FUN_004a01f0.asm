; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_edittool.cpp_CEditorTools_promptForValidDouble_FUN_004a01f0(CEditorTools * this_ptr, char * prompt_text, double * result_ptr, int enable_range_check, double min_value, double max_value, int show_current_value)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   prompt_text
; double *         Stack[0xc]:4   result_ptr
; int              Stack[0x10]:4   enable_range_check
; double           Stack[0x14]:8   min_value
; double           Stack[0x1c]:8   max_value
; int              Stack[0x24]:4   show_current_value
; Local Variables:
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined1       Stack[-0x30]:1  local_30
;
; Referenced Globals:
;   TerminatedCString s_s_15g_00623258
;   TerminatedCString s_lf_0062325e
;   TerminatedCString s_Please_enter_a_valid_num_00623262
;   TerminatedCString s_Please_enter_a_valid_int_0062327f
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_stdio.c_sscanf_FUN_0060013c
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a01f0
        ;   Label: shape_edittool.cpp_CEditorTools_promptForValidDouble_FUN_004a01f0
    PUSH ESI                            ; 004a01f1
    PUSH EDI                            ; 004a01f2
    PUSH EBP                            ; 004a01f3
    MOV EBP,ESP                         ; 004a01f4
    SUB ESP,0x38                        ; 004a01f6
    AND ESP,0xfffffff8                  ; 004a01f9
    MOV EAX,dword ptr [EBP + 0x24]      ; 004a01fc
    MOV dword ptr [ESP + 0x8],EAX       ; 004a01ff
    MOV EAX,dword ptr [EBP + 0x28]      ; 004a0203
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a0206
    MOV dword ptr [ESP + 0xc],EAX       ; 004a0209
    MOV EAX,dword ptr [EBP + 0x2c]      ; 004a020d
    MOV ESI,dword ptr [EBP + 0x18]      ; 004a0210
    MOV dword ptr [ESP + 0x10],EAX      ; 004a0213
    MOV EAX,dword ptr [EBP + 0x30]      ; 004a0217
    MOV EDI,dword ptr [EBP + 0x20]      ; 004a021a
    MOV dword ptr [ESP + 0x14],EAX      ; 004a021d
    TEST byte ptr [EBP + 0x34],0x1      ; 004a0221
    JNZ 0x004a024b                      ; 004a0225
        ;   XREF to: 004a024b (CONDITIONAL_JUMP)  ; LAB_004a024b
    XOR DL,DL                           ; 004a0227
    MOV byte ptr [ESP + 0x18],DL        ; 004a0229
    PUSH 0x1                            ; 004a022d
        ;   Label: LAB_004a022d
    PUSH 0x1e                           ; 004a022f
    LEA EAX,[ESP + 0x20]                ; 004a0231
    PUSH EAX                            ; 004a0235
    PUSH ESI                            ; 004a0236
    PUSH EBX                            ; 004a0237
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 004a0238
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 004a023d
    TEST EAX,EAX                        ; 004a0240
    JNZ 0x004a0269                      ; 004a0242
        ;   XREF to: 004a0269 (CONDITIONAL_JUMP)  ; LAB_004a0269
    MOV ESP,EBP                         ; 004a0244
    POP EBP                             ; 004a0246
    POP EDI                             ; 004a0247
    POP ESI                             ; 004a0248
    POP EBX                             ; 004a0249
    RET                                 ; 004a024a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004a024b
        ;   Label: LAB_004a024b
    MOV EDX,dword ptr [EAX + 0x4]       ; 004a024e
    PUSH EDX                            ; 004a0251
    MOV ECX,dword ptr [EAX]             ; 004a0252
    PUSH ECX                            ; 004a0254
    PUSH 0x623258                       ; 004a0255 | = "%.15g"
    LEA EAX,[ESP + 0x24]                ; 004a025a
    PUSH EAX                            ; 004a025e
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004a025f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004a0264
    JMP 0x004a022d                      ; 004a0267
        ;   XREF to: 004a022d (UNCONDITIONAL_JUMP)  ; LAB_004a022d
    MOV EAX,ESP                         ; 004a0269
        ;   Label: LAB_004a0269
    PUSH EAX                            ; 004a026b
    PUSH 0x62325e                       ; 004a026c | = "%lf"
    LEA EAX,[ESP + 0x20]                ; 004a0271
    PUSH EAX                            ; 004a0275
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004a0276
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0xc                         ; 004a027b
    CMP EAX,0x1                         ; 004a027e
    JNZ 0x004a02ba                      ; 004a0281
        ;   XREF to: 004a02ba (CONDITIONAL_JUMP)  ; LAB_004a02ba
    TEST EDI,EDI                        ; 004a0283
    JZ 0x004a029f                       ; 004a0285
        ;   XREF to: 004a029f (CONDITIONAL_JUMP)  ; LAB_004a029f
    FLD double ptr [ESP]                ; 004a0287
    FCOMP double ptr [ESP + 0x8]        ; 004a028a
    FNSTSW AX                           ; 004a028e
    SAHF                                ; 004a0290
    JC 0x004a02cd                       ; 004a0291
        ;   XREF to: 004a02cd (CONDITIONAL_JUMP)  ; LAB_004a02cd
    FLD double ptr [ESP]                ; 004a0293
    FCOMP double ptr [ESP + 0x10]       ; 004a0296
    FNSTSW AX                           ; 004a029a
    SAHF                                ; 004a029c
    JA 0x004a02cd                       ; 004a029d
        ;   XREF to: 004a02cd (CONDITIONAL_JUMP)  ; LAB_004a02cd
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004a029f
        ;   Label: LAB_004a029f
    MOV EAX,dword ptr [ESP]             ; 004a02a2
    MOV dword ptr [EBX],EAX             ; 004a02a5
    MOV EAX,dword ptr [ESP + 0x4]       ; 004a02a7
    MOV dword ptr [EBX + 0x4],EAX       ; 004a02ab
    MOV EAX,0x1                         ; 004a02ae
    MOV ESP,EBP                         ; 004a02b3
    POP EBP                             ; 004a02b5
    POP EDI                             ; 004a02b6
    POP ESI                             ; 004a02b7
    POP EBX                             ; 004a02b8
    RET                                 ; 004a02b9
    PUSH 0x623262                       ; 004a02ba | = "Please enter a valid number."
        ;   Label: LAB_004a02ba
    PUSH EBX                            ; 004a02bf
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004a02c0
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 004a02c5
    JMP 0x004a022d                      ; 004a02c8
        ;   XREF to: 004a022d (UNCONDITIONAL_JUMP)  ; LAB_004a022d
    MOV EAX,dword ptr [ESP + 0x14]      ; 004a02cd
        ;   Label: LAB_004a02cd
    PUSH EAX                            ; 004a02d1
    MOV EDX,dword ptr [ESP + 0x14]      ; 004a02d2
    PUSH EDX                            ; 004a02d6
    MOV ECX,dword ptr [ESP + 0x14]      ; 004a02d7
    PUSH ECX                            ; 004a02db
    MOV EAX,dword ptr [ESP + 0x14]      ; 004a02dc
    PUSH EAX                            ; 004a02e0
    PUSH 0x62327f                       ; 004a02e1 | = "Please enter a valid integer between ..."
    PUSH EBX                            ; 004a02e6
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 004a02e7
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x18                        ; 004a02ec
    JMP 0x004a022d                      ; 004a02ef
        ;   XREF to: 004a022d (UNCONDITIONAL_JUMP)  ; LAB_004a022d

