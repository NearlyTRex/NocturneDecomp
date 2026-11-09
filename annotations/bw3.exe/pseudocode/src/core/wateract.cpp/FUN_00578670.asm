; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_wateract_cpp_FUN_00578670(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d7273
;   undefined4 DAT_005d727b
;   undefined4 DAT_005fba60
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   core_main.c_FUN_004e4330
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578670
        ;   Label: core_wateract.cpp_FUN_00578670
    PUSH ESI                            ; 00578671
    PUSH EDI                            ; 00578672
    SUB ESP,0x4                         ; 00578673
    MOV EBX,dword ptr [ESP + 0x14]      ; 00578676
    FLD float ptr [ESP + 0x18]          ; 0057867a
    FMUL double ptr [0x005d7273]        ; 0057867e | DAT_005d7273
    FMUL double ptr [0x005d727b]        ; 00578684 | DAT_005d727b
    MOV EDX,dword ptr [EBX + 0x2b230]   ; 0057868a
    CALL crt_math.c_round_FUN_005a3120  ; 00578690
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP]               ; 00578695
    MOV EAX,dword ptr [ESP]             ; 00578698
    ADD EDX,EAX                         ; 0057869b
    MOV dword ptr [EBX + 0x2b230],EDX   ; 0057869d
    CMP EDX,0x10000                     ; 005786a3
    JLE 0x005786d3                      ; 005786a9
        ;   XREF to: 005786d3 (CONDITIONAL_JUMP)  ; LAB_005786d3
    MOV EDI,dword ptr [EBX + 0x2b22c]   ; 005786ab
    LEA ESI,[EDX + 0xffff0000]          ; 005786b1
    INC EDI                             ; 005786b7
    MOV dword ptr [EBX + 0x2b230],ESI   ; 005786b8
    MOV dword ptr [EBX + 0x2b22c],EDI   ; 005786be
    CMP EDI,0x10                        ; 005786c4
    JL 0x005786d3                       ; 005786c7
        ;   XREF to: 005786d3 (CONDITIONAL_JUMP)  ; LAB_005786d3
    MOV dword ptr [EBX + 0x2b22c],0x0   ; 005786c9
    FLD float ptr [ESP + 0x18]          ; 005786d3
        ;   Label: LAB_005786d3
    FLD1                                ; 005786d7
    FDIVRP                              ; 005786d9
    LEA EAX,[EBX + 0x1b4]               ; 005786db
    PUSH EAX                            ; 005786e1
    MOV EAX,[0x005fba60]                ; 005786e2 | DAT_005fba60
    PUSH EAX                            ; 005786e7
    FSTP float ptr [EBX + 0x7fa0]       ; 005786e8
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 005786ee
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005786f3
    TEST EAX,EAX                        ; 005786f6
    JZ 0x00578704                       ; 005786f8
        ;   XREF to: 00578704 (CONDITIONAL_JUMP)  ; LAB_00578704
    MOV dword ptr [EBX + 0x280],0x1     ; 005786fa
    LEA EAX,[EBX + 0x218]               ; 00578704
        ;   Label: LAB_00578704
    PUSH EAX                            ; 0057870a
    MOV EDX,dword ptr [0x005fba60]      ; 0057870b | DAT_005fba60
    PUSH EDX                            ; 00578711
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 00578712
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00578717
    TEST EAX,EAX                        ; 0057871a
    JZ 0x00578728                       ; 0057871c
        ;   XREF to: 00578728 (CONDITIONAL_JUMP)  ; LAB_00578728
    MOV dword ptr [EBX + 0x280],0x3     ; 0057871e
    MOV EAX,dword ptr [EBX + 0x280]     ; 00578728
        ;   Label: LAB_00578728
    CMP EAX,0x3                         ; 0057872e
    JA 0x005787c2                       ; 00578731
        ;   XREF to: 005787c2 (CONDITIONAL_JUMP)  ; LAB_005787c2
    JMP dword ptr [EAX*0x4 + 0x578660]  ; 00578737
    FLD float ptr [EBX + 0x168]         ; 005787a6
        ;   Label: LAB_005787a6
    FMUL float ptr [EBX + 0x27c]        ; 005787ac
    FADD float ptr [EBX + 0x2b234]      ; 005787b2
    FSTP float ptr [EBX + 0x24]         ; 005787b8
    ADD ESP,0x4                         ; 005787bb
    POP EDI                             ; 005787be
    POP ESI                             ; 005787bf
    POP EBX                             ; 005787c0
    RET                                 ; 005787c1
    MOV ECX,0x5d723b                    ; 005787c2
        ;   Label: LAB_005787c2
    MOV ESI,0x1b9                       ; 005787c7
    PUSH 0x5d7250                       ; 005787cc
    MOV dword ptr [0x01d71de0],ECX      ; 005787d1 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 005787d7 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 005787dd
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 005787e2
    JMP 0x005787a6                      ; 005787e5
        ;   XREF to: 005787a6 (UNCONDITIONAL_JUMP)  ; LAB_005787a6

