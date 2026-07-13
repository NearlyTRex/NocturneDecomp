; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00476100(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   string s_..\\shape\\edittool.cpp_0057ef58
;   string s_CPickList::remove_-_can't_do_thi_0057ef6e
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_00473f10
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00476100
        ;   Label: FUN_00476100
    PUSH EDI                            ; 00476101
    PUSH EBP                            ; 00476102
    MOV EAX,dword ptr [ESP + 0x10]      ; 00476103
    CMP dword ptr [EAX + 0x130],0x0     ; 00476107
    JG 0x0047612b                       ; 0047610e
        ;   XREF to: 0047612b (CONDITIONAL_JUMP)  ; LAB_0047612b
    MOV ESI,dword ptr [ESP + 0x18]      ; 00476110
        ;   Label: LAB_00476110
    PUSH ESI                            ; 00476114
    MOV EDI,dword ptr [ESP + 0x18]      ; 00476115
    PUSH EDI                            ; 00476119
    MOV EBP,dword ptr [ESP + 0x18]      ; 0047611a
    PUSH EBP                            ; 0047611e
    CALL FUN_00473f10                   ; 0047611f
        ;   XREF to: 00473f10 (UNCONDITIONAL_CALL)  ; undefined FUN_00473f10()
    ADD ESP,0xc                         ; 00476124
    POP EBP                             ; 00476127
    POP EDI                             ; 00476128
    POP ESI                             ; 00476129
    RET                                 ; 0047612a
    PUSH EBX                            ; 0047612b
        ;   Label: LAB_0047612b
    MOV ECX,0x57ef58                    ; 0047612c | = "..\\shape\\edittool.cpp"
    MOV EBX,0xe22                       ; 00476131
    PUSH 0x57ef6e                       ; 00476136 | = "CPickList::remove - can't do this aft..."
    MOV dword ptr [0x01cc4800],ECX      ; 0047613b | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 00476141 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00476147
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0047614c
    POP EBX                             ; 0047614f
    JMP 0x00476110                      ; 00476150
        ;   XREF to: 00476110 (UNCONDITIONAL_JUMP)  ; LAB_00476110

