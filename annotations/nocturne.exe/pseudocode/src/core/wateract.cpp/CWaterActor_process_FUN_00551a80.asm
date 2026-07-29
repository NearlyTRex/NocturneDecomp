; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_wateract_cpp_CWaterActor_process_FUN_00551a80(CWaterActor *this_ptr,float delta_time)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00551a70 = 00551b4e
;   undefined1* PTR_caseD_3_00551a78 = 00551b83
;   TerminatedCString s_core_wateract_cpp_00597617
;   TerminatedCString s_CWaterActor_process_Bad_0059762c
;   double DOUBLE_0059764f = 65536
;   double DOUBLE_00597657 = 8
;   undefined4 DAT_005b7650
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;   core_main.c_FUN_004c8440
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551a80
        ;   Label: core_wateract.cpp_CWaterActor_process_FUN_00551a80
    PUSH ESI                            ; 00551a81
    PUSH EDI                            ; 00551a82
    SUB ESP,0x4                         ; 00551a83
    MOV EBX,dword ptr [ESP + 0x14]      ; 00551a86
    FLD float ptr [ESP + 0x18]          ; 00551a8a
    FMUL double ptr [0x0059764f]        ; 00551a8e | DOUBLE_0059764f
    FMUL double ptr [0x00597657]        ; 00551a94 | DOUBLE_00597657
    MOV EDX,dword ptr [EBX + 0x2b224]   ; 00551a9a
    CALL crt_math.c_round_FUN_00563a30  ; 00551aa0
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP]               ; 00551aa5
    MOV EAX,dword ptr [ESP]             ; 00551aa8
    ADD EDX,EAX                         ; 00551aab
    MOV dword ptr [EBX + 0x2b224],EDX   ; 00551aad
    CMP EDX,0x10000                     ; 00551ab3
    JLE 0x00551ae3                      ; 00551ab9
        ;   XREF to: 00551ae3 (CONDITIONAL_JUMP)  ; LAB_00551ae3
    MOV EDI,dword ptr [EBX + 0x2b220]   ; 00551abb
    LEA ESI,[EDX + 0xffff0000]          ; 00551ac1
    INC EDI                             ; 00551ac7
    MOV dword ptr [EBX + 0x2b224],ESI   ; 00551ac8
    MOV dword ptr [EBX + 0x2b220],EDI   ; 00551ace
    CMP EDI,0x10                        ; 00551ad4
    JL 0x00551ae3                       ; 00551ad7
        ;   XREF to: 00551ae3 (CONDITIONAL_JUMP)  ; LAB_00551ae3
    MOV dword ptr [EBX + 0x2b220],0x0   ; 00551ad9
    FLD float ptr [ESP + 0x18]          ; 00551ae3
        ;   Label: LAB_00551ae3
    FLD1                                ; 00551ae7
    FDIVRP                              ; 00551ae9
    LEA EAX,[EBX + 0x1ac]               ; 00551aeb
    PUSH EAX                            ; 00551af1
    MOV EAX,[0x005b7650]                ; 00551af2 | DAT_005b7650
    PUSH EAX                            ; 00551af7
    FSTP float ptr [EBX + 0x7f94]       ; 00551af8
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 00551afe
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00551b03
    TEST EAX,EAX                        ; 00551b06
    JZ 0x00551b14                       ; 00551b08
        ;   XREF to: 00551b14 (CONDITIONAL_JUMP)  ; LAB_00551b14
    MOV dword ptr [EBX + 0x278],0x1     ; 00551b0a
    LEA EAX,[EBX + 0x210]               ; 00551b14
        ;   Label: LAB_00551b14
    PUSH EAX                            ; 00551b1a
    MOV EDX,dword ptr [0x005b7650]      ; 00551b1b | DAT_005b7650
    PUSH EDX                            ; 00551b21
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 00551b22
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00551b27
    TEST EAX,EAX                        ; 00551b2a
    JZ 0x00551b38                       ; 00551b2c
        ;   XREF to: 00551b38 (CONDITIONAL_JUMP)  ; LAB_00551b38
    MOV dword ptr [EBX + 0x278],0x3     ; 00551b2e
    MOV EAX,dword ptr [EBX + 0x278]     ; 00551b38
        ;   Label: LAB_00551b38
    CMP EAX,0x3                         ; 00551b3e
    JA 0x00551bd2                       ; 00551b41
        ;   XREF to: 00551bd2 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x551a6c]  ; 00551b47 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    FLD float ptr [ESP + 0x18]          ; 00551b4e
        ;   Label: caseD_1
    FDIV float ptr [EBX + 0x164]        ; 00551b52
    FADD float ptr [EBX + 0x274]        ; 00551b58
    FST float ptr [EBX + 0x274]         ; 00551b5e
    FLD1                                ; 00551b64
    FCOMPP                              ; 00551b66
    FNSTSW AX                           ; 00551b68
    SAHF                                ; 00551b6a
    JNC 0x00551bb6                      ; 00551b6b
        ;   XREF to: 00551bb6 (CONDITIONAL_JUMP)  ; LAB_00551bb6
    MOV dword ptr [EBX + 0x278],0x2     ; 00551b6d
    MOV dword ptr [EBX + 0x274],0x3f800000 ; 00551b77
        ;   Label: caseD_2
    JMP 0x00551bb6                      ; 00551b81
        ;   XREF to: 00551bb6 (UNCONDITIONAL_JUMP)  ; LAB_00551bb6
    FLD float ptr [ESP + 0x18]          ; 00551b83
        ;   Label: caseD_3
    FDIV float ptr [EBX + 0x168]        ; 00551b87
    FSUBR float ptr [EBX + 0x274]       ; 00551b8d
    FST float ptr [EBX + 0x274]         ; 00551b93
    FLDZ                                ; 00551b99
    FCOMPP                              ; 00551b9b
    FNSTSW AX                           ; 00551b9d
    SAHF                                ; 00551b9f
    JBE 0x00551bb6                      ; 00551ba0
        ;   XREF to: 00551bb6 (CONDITIONAL_JUMP)  ; LAB_00551bb6
    MOV dword ptr [EBX + 0x278],0x0     ; 00551ba2
    MOV dword ptr [EBX + 0x274],0x0     ; 00551bac
        ;   Label: caseD_0
    FLD float ptr [EBX + 0x160]         ; 00551bb6
        ;   Label: LAB_00551bb6
    FMUL float ptr [EBX + 0x274]        ; 00551bbc
    FADD float ptr [EBX + 0x2b228]      ; 00551bc2
    FSTP float ptr [EBX + 0x24]         ; 00551bc8
    ADD ESP,0x4                         ; 00551bcb
    POP EDI                             ; 00551bce
    POP ESI                             ; 00551bcf
    POP EBX                             ; 00551bd0
    RET                                 ; 00551bd1
    MOV ECX,0x597617                    ; 00551bd2 | = "..\\core\\wateract.cpp"
        ;   Label: default
    MOV ESI,0x1a5                       ; 00551bd7
    PUSH 0x59762c                       ; 00551bdc | = "CWaterActor::process - Bad state"
    MOV dword ptr [0x01cc4800],ECX      ; 00551be1 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00551be7 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00551bed
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00551bf2
    JMP 0x00551bb6                      ; 00551bf5
        ;   XREF to: 00551bb6 (UNCONDITIONAL_JUMP)  ; LAB_00551bb6

