; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_00476460(CCharacter *param_1,int param_2,CVector3f *param_3)
;
;
; Called Functions:
;   core_charactr.cpp_FUN_00432820
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476460
        ;   Label: core_doc.cpp_FUN_00476460
    PUSH ESI                            ; 00476461
    MOV EBX,dword ptr [ESP + 0xc]       ; 00476462
    MOV EAX,dword ptr [ESP + 0x10]      ; 00476466
    SHL EAX,0x3                         ; 0047646a
    MOV EDX,EAX                         ; 0047646d
    SHL EAX,0x4                         ; 0047646f
    SUB EAX,EDX                         ; 00476472
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x25b0] ; 00476474
    CMP EAX,dword ptr [EBX + 0x20004]   ; 0047647b
    JZ 0x00476499                       ; 00476481
        ;   XREF to: 00476499 (CONDITIONAL_JUMP)  ; LAB_00476499
    MOV ECX,dword ptr [ESP + 0x14]      ; 00476483
        ;   Label: LAB_00476483
    PUSH ECX                            ; 00476487
    MOV ESI,dword ptr [ESP + 0x14]      ; 00476488
    PUSH ESI                            ; 0047648c
    PUSH EBX                            ; 0047648d
    CALL core_charactr.cpp_FUN_00432820 ; 0047648e
        ;   XREF to: 00432820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00432820(CCharacter * this_ptr, int hand_index, CVector3f * drop_direction)
    ADD ESP,0xc                         ; 00476493
    POP ESI                             ; 00476496
    POP EBX                             ; 00476497
    RET                                 ; 00476498
    PUSH 0x0                            ; 00476499
        ;   Label: LAB_00476499
    MOV EAX,dword ptr [EBX + 0x154]     ; 0047649b
    PUSH EBX                            ; 004764a1
    MOV dword ptr [EBX + 0x20004],0x0   ; 004764a2
    CALL dword ptr [EAX + 0x144]        ; 004764ac
    ADD ESP,0x8                         ; 004764b2
    JMP 0x00476483                      ; 004764b5
        ;   XREF to: 00476483 (UNCONDITIONAL_JUMP)  ; LAB_00476483

