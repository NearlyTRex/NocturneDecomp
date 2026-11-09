; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_0056a610(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cf60e4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056a610
        ;   Label: engine_texture.cpp_FUN_0056a610
    PUSH EBP                            ; 0056a611
    MOV EBX,dword ptr [ESP + 0x10]      ; 0056a612
    MOV EDX,dword ptr [EBX + 0x4]       ; 0056a616
    TEST EDX,EDX                        ; 0056a619
    JL 0x0056a653                       ; 0056a61b
        ;   XREF to: 0056a653 (CONDITIONAL_JUMP)  ; LAB_0056a653
    MOV EAX,EDX                         ; 0056a61d
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056a61f
    CMP EAX,dword ptr [EDX + 0x18004]   ; 0056a623
    JGE 0x0056a653                      ; 0056a629
        ;   XREF to: 0056a653 (CONDITIONAL_JUMP)  ; LAB_0056a653
    MOV EBX,dword ptr [EBX + 0x4]       ; 0056a62b
        ;   Label: LAB_0056a62b
    LEA EAX,[EBX*0x4 + 0x0]             ; 0056a62e
    SUB EAX,EBX                         ; 0056a635
    MOV EBX,EAX                         ; 0056a637
    MOV EAX,dword ptr [ESP + 0xc]       ; 0056a639
    SHL EBX,0x5                         ; 0056a63d
    PUSH 0x0                            ; 0056a640
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x60] ; 0056a642
    PUSH EDX                            ; 0056a646
    CALL dword ptr [0x02cf60e4]         ; 0056a647 | DAT_02cf60e4
    ADD ESP,0x8                         ; 0056a64d
    POP EBP                             ; 0056a650
    POP EBX                             ; 0056a651
    RET                                 ; 0056a652
    PUSH EDI                            ; 0056a653
        ;   Label: LAB_0056a653
    PUSH ESI                            ; 0056a654
    LEA EAX,[EBX + 0x8]                 ; 0056a655
    PUSH EAX                            ; 0056a658
    MOV EBP,dword ptr [EBX + 0x4]       ; 0056a659
    PUSH EBP                            ; 0056a65c
    MOV ESI,0x5d60c5                    ; 0056a65d
    MOV EDI,0x2e9                       ; 0056a662
    PUSH 0x5d60db                       ; 0056a667
    MOV dword ptr [0x01d71de0],ESI      ; 0056a66c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0056a672 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0056a678
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 0056a67d
    POP ESI                             ; 0056a680
    POP EDI                             ; 0056a681
    JMP 0x0056a62b                      ; 0056a682
        ;   XREF to: 0056a62b (UNCONDITIONAL_JUMP)  ; LAB_0056a62b

