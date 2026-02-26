; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_netgame_cpp_findSimFrame_FUN_0053f550(int sequence_number)
;
; Parameters:
; int              Stack[0x4]:4   sequence_number
;
; Referenced Globals:
;   int g_SimFrameCount
;   SSimFrame[512] g_SimFrameHistory
;   undefined4 DAT_02f9c128
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053f550
        ;   Label: core_netgame.cpp_findSimFrame_FUN_0053f550
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053f551
    MOV ECX,dword ptr [0x02f9c0c0]      ; 0053f555 | g_SimFrameCount
    XOR EDX,EDX                         ; 0053f55b
    TEST ECX,ECX                        ; 0053f55d
    JLE 0x0053f584                      ; 0053f55f
        ;   XREF to: 0053f584 (CONDITIONAL_JUMP)  ; LAB_0053f584
    PUSH ESI                            ; 0053f561
    MOV ESI,ECX                         ; 0053f562
    SHL ECX,0x2                         ; 0053f564
    SUB ECX,ESI                         ; 0053f567
    SHL ECX,0x3                         ; 0053f569
    ADD ECX,ESI                         ; 0053f56c
    XOR EAX,EAX                         ; 0053f56e
    SHL ECX,0x2                         ; 0053f570
    POP ESI                             ; 0053f573
    CMP EBX,dword ptr [EAX + 0x2f9c0c4] ; 0053f574 | g_SimFrameHistory | DAT_02f9c128
        ;   Label: LAB_0053f574
    JZ 0x0053f58d                       ; 0053f57a
        ;   XREF to: 0053f58d (CONDITIONAL_JUMP)  ; LAB_0053f58d
    ADD EAX,0x64                        ; 0053f57c
    INC EDX                             ; 0053f57f
    CMP EAX,ECX                         ; 0053f580
    JL 0x0053f574                       ; 0053f582
        ;   XREF to: 0053f574 (CONDITIONAL_JUMP)  ; LAB_0053f574
    MOV ECX,0xffffffff                  ; 0053f584
        ;   Label: LAB_0053f584
    MOV EAX,ECX                         ; 0053f589
    POP EBX                             ; 0053f58b
    RET                                 ; 0053f58c
    MOV ECX,EDX                         ; 0053f58d
        ;   Label: LAB_0053f58d
    MOV EAX,ECX                         ; 0053f58f
    POP EBX                             ; 0053f591
    RET                                 ; 0053f592

