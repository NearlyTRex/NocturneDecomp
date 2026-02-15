; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_wateract_cpp_CWaterActor_process_FUN_005eb100(CWaterActor *this_ptr,float delta_time)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   void* PTR_caseD_1_005eb0f0 = 005eb1ce
;   void* PTR_caseD_3_005eb0f8 = 005eb203
;   TerminatedCString s_core_wateract_cpp_006572b7
;   TerminatedCString s_CWaterActor_process_Bad__006572cc
;   double DOUBLE_006572ef = 65536
;   double DOUBLE_006572f7 = 8
;   CEventList* g_CEventListPtr = 02d05310
;   CEventList g_CEventListInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005eb100
        ;   Label: core_wateract.cpp_CWaterActor_process_FUN_005eb100
    PUSH ESI                            ; 005eb101
    PUSH EDI                            ; 005eb102
    SUB ESP,0x4                         ; 005eb103
    MOV EBX,dword ptr [ESP + 0x14]      ; 005eb106
    FLD float ptr [ESP + 0x18]          ; 005eb10a
    FMUL double ptr [0x006572ef]        ; 005eb10e | DOUBLE_006572ef
    FMUL double ptr [0x006572f7]        ; 005eb114 | DOUBLE_006572f7
    MOV EDX,dword ptr [EBX + 0x2b22c]   ; 005eb11a
    CALL crt_math.c_round_FUN_005fe6b0  ; 005eb120
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP]               ; 005eb125
    MOV EAX,dword ptr [ESP]             ; 005eb128
    ADD EDX,EAX                         ; 005eb12b
    MOV dword ptr [EBX + 0x2b22c],EDX   ; 005eb12d
    CMP EDX,0x10000                     ; 005eb133
    JLE 0x005eb163                      ; 005eb139
        ;   XREF to: 005eb163 (CONDITIONAL_JUMP)  ; LAB_005eb163
    MOV EDI,dword ptr [EBX + 0x2b228]   ; 005eb13b
    LEA ESI,[EDX + 0xffff0000]          ; 005eb141
    INC EDI                             ; 005eb147
    MOV dword ptr [EBX + 0x2b22c],ESI   ; 005eb148
    MOV dword ptr [EBX + 0x2b228],EDI   ; 005eb14e
    CMP EDI,0x10                        ; 005eb154
    JL 0x005eb163                       ; 005eb157
        ;   XREF to: 005eb163 (CONDITIONAL_JUMP)  ; LAB_005eb163
    MOV dword ptr [EBX + 0x2b228],0x0   ; 005eb159
    FLD float ptr [ESP + 0x18]          ; 005eb163
        ;   Label: LAB_005eb163
    FLD1                                ; 005eb167
    FDIVRP                              ; 005eb169
    LEA EAX,[EBX + 0x1b4]               ; 005eb16b
    PUSH EAX                            ; 005eb171
    MOV EAX,[0x006793d0]                ; 005eb172 | g_CEventListInstance | g_CEventListPtr
    PUSH EAX                            ; 005eb177 | g_CEventListInstance
    FSTP float ptr [EBX + 0x7f9c]       ; 005eb178
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 005eb17e
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005eb183
    TEST EAX,EAX                        ; 005eb186
    JZ 0x005eb194                       ; 005eb188
        ;   XREF to: 005eb194 (CONDITIONAL_JUMP)  ; LAB_005eb194
    MOV dword ptr [EBX + 0x280],0x1     ; 005eb18a
    LEA EAX,[EBX + 0x218]               ; 005eb194
        ;   Label: LAB_005eb194
    PUSH EAX                            ; 005eb19a
    MOV EDX,dword ptr [0x006793d0]      ; 005eb19b | g_CEventListInstance | g_CEventListPtr
    PUSH EDX                            ; 005eb1a1 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 005eb1a2
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005eb1a7
    TEST EAX,EAX                        ; 005eb1aa
    JZ 0x005eb1b8                       ; 005eb1ac
        ;   XREF to: 005eb1b8 (CONDITIONAL_JUMP)  ; LAB_005eb1b8
    MOV dword ptr [EBX + 0x280],0x3     ; 005eb1ae
    MOV EAX,dword ptr [EBX + 0x280]     ; 005eb1b8
        ;   Label: LAB_005eb1b8
    CMP EAX,0x3                         ; 005eb1be
    JA 0x005eb252                       ; 005eb1c1
        ;   XREF to: 005eb252 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5eb0ec]  ; 005eb1c7 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    FLD float ptr [ESP + 0x18]          ; 005eb1ce
        ;   Label: caseD_1
    FDIV float ptr [EBX + 0x16c]        ; 005eb1d2
    FADD float ptr [EBX + 0x27c]        ; 005eb1d8
    FST float ptr [EBX + 0x27c]         ; 005eb1de
    FLD1                                ; 005eb1e4
    FCOMPP                              ; 005eb1e6
    FNSTSW AX                           ; 005eb1e8
    SAHF                                ; 005eb1ea
    JNC 0x005eb236                      ; 005eb1eb
        ;   XREF to: 005eb236 (CONDITIONAL_JUMP)  ; LAB_005eb236
    MOV dword ptr [EBX + 0x280],0x2     ; 005eb1ed
    MOV dword ptr [EBX + 0x27c],0x3f800000 ; 005eb1f7
        ;   Label: caseD_2
    JMP 0x005eb236                      ; 005eb201
        ;   XREF to: 005eb236 (UNCONDITIONAL_JUMP)  ; LAB_005eb236
    FLD float ptr [ESP + 0x18]          ; 005eb203
        ;   Label: caseD_3
    FDIV float ptr [EBX + 0x170]        ; 005eb207
    FSUBR float ptr [EBX + 0x27c]       ; 005eb20d
    FST float ptr [EBX + 0x27c]         ; 005eb213
    FLDZ                                ; 005eb219
    FCOMPP                              ; 005eb21b
    FNSTSW AX                           ; 005eb21d
    SAHF                                ; 005eb21f
    JBE 0x005eb236                      ; 005eb220
        ;   XREF to: 005eb236 (CONDITIONAL_JUMP)  ; LAB_005eb236
    MOV dword ptr [EBX + 0x280],0x0     ; 005eb222
    MOV dword ptr [EBX + 0x27c],0x0     ; 005eb22c
        ;   Label: caseD_0
    FLD float ptr [EBX + 0x168]         ; 005eb236
        ;   Label: LAB_005eb236
    FMUL float ptr [EBX + 0x27c]        ; 005eb23c
    FADD float ptr [EBX + 0x2b230]      ; 005eb242
    FSTP float ptr [EBX + 0x24]         ; 005eb248
    ADD ESP,0x4                         ; 005eb24b
    POP EDI                             ; 005eb24e
    POP ESI                             ; 005eb24f
    POP EBX                             ; 005eb250
    RET                                 ; 005eb251
    MOV ECX,0x6572b7                    ; 005eb252 | = "..\\core\\wateract.cpp"
        ;   Label: default
    MOV ESI,0x1a5                       ; 005eb257
    PUSH 0x6572cc                       ; 005eb25c | = "CWaterActor::process - Bad state"
    MOV dword ptr [0x02f0ca48],ECX      ; 005eb261 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005eb267 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005eb26d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005eb272
    JMP 0x005eb236                      ; 005eb275
        ;   XREF to: 005eb236 (UNCONDITIONAL_JUMP)  ; LAB_005eb236

