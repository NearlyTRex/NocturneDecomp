; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_wateract_cpp_CWaterActor_process_FUN_00587280(CWaterActor *this_ptr,float delta_time)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_005edfa6
;   undefined4 DAT_005edfae
;   undefined4 DAT_006141f0
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_0048e340
;   core_main.c_FUN_004e4500
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00587280
        ;   Label: core_wateract.cpp_CWaterActor_process_FUN_00587280
    PUSH ESI                            ; 00587281
    PUSH EDI                            ; 00587282
    SUB ESP,0x4                         ; 00587283
    MOV EBX,dword ptr [ESP + 0x14]      ; 00587286
    FLD float ptr [ESP + 0x18]          ; 0058728a
    FMUL double ptr [0x005edfa6]        ; 0058728e | DAT_005edfa6
    FMUL double ptr [0x005edfae]        ; 00587294 | DAT_005edfae
    MOV EDX,dword ptr [EBX + 0x2b388]   ; 0058729a
    CALL crt_math.c_round_FUN_005b7ff0  ; 005872a0
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP]               ; 005872a5
    MOV EAX,dword ptr [ESP]             ; 005872a8
    ADD EDX,EAX                         ; 005872ab
    MOV dword ptr [EBX + 0x2b388],EDX   ; 005872ad
    CMP EDX,0x10000                     ; 005872b3
    JLE 0x005872e3                      ; 005872b9
        ;   XREF to: 005872e3 (CONDITIONAL_JUMP)  ; LAB_005872e3
    MOV EDI,dword ptr [EBX + 0x2b384]   ; 005872bb
    LEA ESI,[EDX + 0xffff0000]          ; 005872c1
    INC EDI                             ; 005872c7
    MOV dword ptr [EBX + 0x2b388],ESI   ; 005872c8
    MOV dword ptr [EBX + 0x2b384],EDI   ; 005872ce
    CMP EDI,0x10                        ; 005872d4
    JL 0x005872e3                       ; 005872d7
        ;   XREF to: 005872e3 (CONDITIONAL_JUMP)  ; LAB_005872e3
    MOV dword ptr [EBX + 0x2b384],0x0   ; 005872d9
    FLD float ptr [ESP + 0x18]          ; 005872e3
        ;   Label: LAB_005872e3
    FLD1                                ; 005872e7
    FDIVRP                              ; 005872e9
    LEA EAX,[EBX + 0x310]               ; 005872eb
    PUSH EAX                            ; 005872f1
    MOV EAX,[0x006141f0]                ; 005872f2 | DAT_006141f0
    PUSH EAX                            ; 005872f7
    FSTP float ptr [EBX + 0x80f8]       ; 005872f8
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 005872fe
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00587303
    TEST EAX,EAX                        ; 00587306
    JZ 0x00587314                       ; 00587308
        ;   XREF to: 00587314 (CONDITIONAL_JUMP)  ; LAB_00587314
    MOV dword ptr [EBX + 0x3dc],0x1     ; 0058730a
    LEA EAX,[EBX + 0x374]               ; 00587314
        ;   Label: LAB_00587314
    PUSH EAX                            ; 0058731a
    MOV EDX,dword ptr [0x006141f0]      ; 0058731b | DAT_006141f0
    PUSH EDX                            ; 00587321
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 00587322
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00587327
    TEST EAX,EAX                        ; 0058732a
    JZ 0x00587338                       ; 0058732c
        ;   XREF to: 00587338 (CONDITIONAL_JUMP)  ; LAB_00587338
    MOV dword ptr [EBX + 0x3dc],0x3     ; 0058732e
    MOV EAX,dword ptr [EBX + 0x3dc]     ; 00587338
        ;   Label: LAB_00587338
    CMP EAX,0x3                         ; 0058733e
    JA 0x005873d2                       ; 00587341
        ;   XREF to: 005873d2 (CONDITIONAL_JUMP)  ; LAB_005873d2
    JMP dword ptr [EAX*0x4 + 0x587270]  ; 00587347
    FLD float ptr [EBX + 0x2c4]         ; 005873b6
        ;   Label: LAB_005873b6
    FMUL float ptr [EBX + 0x3d8]        ; 005873bc
    FADD float ptr [EBX + 0x2b38c]      ; 005873c2
    FSTP float ptr [EBX + 0x24]         ; 005873c8
    ADD ESP,0x4                         ; 005873cb
    POP EDI                             ; 005873ce
    POP ESI                             ; 005873cf
    POP EBX                             ; 005873d0
    RET                                 ; 005873d1
    MOV ECX,0x5edf6e                    ; 005873d2
        ;   Label: LAB_005873d2
    MOV ESI,0x1a5                       ; 005873d7
    PUSH 0x5edf83                       ; 005873dc
    MOV dword ptr [0x01d046a0],ECX      ; 005873e1 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 005873e7 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005873ed
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005873f2
    JMP 0x005873b6                      ; 005873f5
        ;   XREF to: 005873b6 (UNCONDITIONAL_JUMP)  ; LAB_005873b6

