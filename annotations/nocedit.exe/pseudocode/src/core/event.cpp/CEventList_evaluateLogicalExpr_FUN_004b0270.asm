; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_evaluateLogicalExpr_FUN_004b0270(CEventList *this_ptr,char *expression,int *parse_position)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   expression
; int *            Stack[0xc]:4   parse_position
;
; XREF[2]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_004ae140 at 004ae1fe
;   core_event.cpp_CEventList_evaluateExpression_FUN_004add80 at 004add9f
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateAtom_FUN_004ae140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0270
        ;   Label: core_event.cpp_CEventList_evaluateLogicalExpr_FUN_004b0270
    PUSH ESI                            ; 004b0271
    PUSH EDI                            ; 004b0272
    PUSH EBP                            ; 004b0273
    MOV EBP,dword ptr [ESP + 0x14]      ; 004b0274
    MOV ESI,dword ptr [ESP + 0x18]      ; 004b0278
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004b027c
    PUSH EBX                            ; 004b0280
    PUSH ESI                            ; 004b0281
    PUSH EBP                            ; 004b0282
    CALL core_event.cpp_CEventList_evaluateAtom_FUN_004ae140 ; 004b0283
        ;   XREF to: 004ae140 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateAtom_FUN_004ae140(CEventList * this_ptr, char * expression, int * parse_position)
    ADD ESP,0xc                         ; 004b0288
    MOV EDI,EAX                         ; 004b028b
    TEST EAX,EAX                        ; 004b028d
    JL 0x004ae1bc                       ; 004b028f
        ;   XREF to: 004ae1bc (CONDITIONAL_JUMP)  ; LAB_004ae1bc
    MOV EAX,dword ptr [EBX]             ; 004b0295
        ;   Label: LAB_004b0295
    ADD EAX,ESI                         ; 004b0297
    MOV DL,byte ptr [EAX]               ; 004b0299
    TEST DL,DL                          ; 004b029b
    JZ 0x004b0323                       ; 004b029d
        ;   XREF to: 004b0323 (CONDITIONAL_JUMP)  ; LAB_004b0323
    CMP DL,0x7c                         ; 004b02a3
    JZ 0x004b02e5                       ; 004b02a6
        ;   XREF to: 004b02e5 (CONDITIONAL_JUMP)  ; LAB_004b02e5
    CMP DL,0x26                         ; 004b02a8
    JNZ 0x004b0323                      ; 004b02ab
        ;   XREF to: 004b0323 (CONDITIONAL_JUMP)  ; LAB_004b0323
    MOV EDX,dword ptr [EBX]             ; 004b02b1
    INC EDX                             ; 004b02b3
    MOV EAX,EDX                         ; 004b02b4
    MOV dword ptr [EBX],EDX             ; 004b02b6
    CMP byte ptr [ESI + EAX*0x1],0x26   ; 004b02b8
    JNZ 0x004b02c3                      ; 004b02bc
        ;   XREF to: 004b02c3 (CONDITIONAL_JUMP)  ; LAB_004b02c3
    LEA ECX,[EDX + 0x1]                 ; 004b02be
    MOV dword ptr [EBX],ECX             ; 004b02c1
    PUSH EBX                            ; 004b02c3
        ;   Label: LAB_004b02c3
    PUSH ESI                            ; 004b02c4
    PUSH EBP                            ; 004b02c5
    CALL core_event.cpp_CEventList_evaluateAtom_FUN_004ae140 ; 004b02c6
        ;   XREF to: 004ae140 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateAtom_FUN_004ae140(CEventList * this_ptr, char * expression, int * parse_position)
    ADD ESP,0xc                         ; 004b02cb
    TEST EAX,EAX                        ; 004b02ce
    JL 0x004ae1bc                       ; 004b02d0
        ;   XREF to: 004ae1bc (CONDITIONAL_JUMP)  ; LAB_004ae1bc
    TEST EDI,EDI                        ; 004b02d6
    JZ 0x004b031c                       ; 004b02d8
        ;   XREF to: 004b031c (CONDITIONAL_JUMP)  ; LAB_004b031c
    TEST EAX,EAX                        ; 004b02da
    JZ 0x004b031c                       ; 004b02dc
        ;   XREF to: 004b031c (CONDITIONAL_JUMP)  ; LAB_004b031c
    MOV EDI,0x1                         ; 004b02de
    JMP 0x004b0295                      ; 004b02e3
        ;   XREF to: 004b0295 (UNCONDITIONAL_JUMP)  ; LAB_004b0295
    MOV EAX,dword ptr [EBX]             ; 004b02e5
        ;   Label: LAB_004b02e5
    INC EAX                             ; 004b02e7
    MOV dword ptr [EBX],EAX             ; 004b02e8
    CMP byte ptr [ESI + EAX*0x1],0x7c   ; 004b02ea
    JNZ 0x004b02f5                      ; 004b02ee
        ;   XREF to: 004b02f5 (CONDITIONAL_JUMP)  ; LAB_004b02f5
    LEA EDX,[EAX + 0x1]                 ; 004b02f0
    MOV dword ptr [EBX],EDX             ; 004b02f3
    PUSH EBX                            ; 004b02f5
        ;   Label: LAB_004b02f5
    PUSH ESI                            ; 004b02f6
    PUSH EBP                            ; 004b02f7
    CALL core_event.cpp_CEventList_evaluateAtom_FUN_004ae140 ; 004b02f8
        ;   XREF to: 004ae140 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateAtom_FUN_004ae140(CEventList * this_ptr, char * expression, int * parse_position)
    ADD ESP,0xc                         ; 004b02fd
    TEST EAX,EAX                        ; 004b0300
    JL 0x004ae1bc                       ; 004b0302
        ;   XREF to: 004ae1bc (CONDITIONAL_JUMP)  ; LAB_004ae1bc
    TEST EDI,EDI                        ; 004b0308
    JZ 0x004b0313                       ; 004b030a
        ;   XREF to: 004b0313 (CONDITIONAL_JUMP)  ; LAB_004b0313
    MOV EDI,0x1                         ; 004b030c
        ;   Label: LAB_004b030c
    JMP 0x004b0295                      ; 004b0311
        ;   XREF to: 004b0295 (UNCONDITIONAL_JUMP)  ; LAB_004b0295
    TEST EAX,EAX                        ; 004b0313
        ;   Label: LAB_004b0313
    JNZ 0x004b030c                      ; 004b0315
        ;   XREF to: 004b030c (CONDITIONAL_JUMP)  ; LAB_004b030c
    JMP 0x004b0295                      ; 004b0317
        ;   XREF to: 004b0295 (UNCONDITIONAL_JUMP)  ; LAB_004b0295
    XOR EDI,EDI                         ; 004b031c
        ;   Label: LAB_004b031c
    JMP 0x004b0295                      ; 004b031e
        ;   XREF to: 004b0295 (UNCONDITIONAL_JUMP)  ; LAB_004b0295
    MOV EAX,EDI                         ; 004b0323
        ;   Label: LAB_004b0323
    POP EBP                             ; 004b0325
    POP EDI                             ; 004b0326
    POP ESI                             ; 004b0327
    POP EBX                             ; 004b0328
    RET                                 ; 004b0329

