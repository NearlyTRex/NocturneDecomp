; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e2de0(int param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   FUN_004e85b0 at 004e8ebf
;
; Referenced Globals:
;   string s_..\\sound\\mp3.cpp_0058b60b
;   string s_hputbuf_-_Not_Supported_yet!!_Fi_0058b61c
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e2de0
        ;   Label: FUN_004e2de0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e2de1
    CMP dword ptr [ESP + 0x10],0x8      ; 004e2de5
    JNZ 0x004e2e0a                      ; 004e2dea
        ;   XREF to: 004e2e0a (CONDITIONAL_JUMP)  ; LAB_004e2e0a
    MOV EAX,dword ptr [EBX + 0x1310]    ; 004e2dec
        ;   Label: LAB_004e2dec
    AND EAX,0xfff                       ; 004e2df2
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e2df7
    MOV dword ptr [EBX + EAX*0x4 + 0x131c],EDX ; 004e2dfb
    INC dword ptr [EBX + 0x1310]        ; 004e2e02
    POP EBX                             ; 004e2e08
    RET                                 ; 004e2e09
    PUSH ESI                            ; 004e2e0a
        ;   Label: LAB_004e2e0a
    PUSH 0x1cd8b28                      ; 004e2e0b
    MOV ECX,0x58b60b                    ; 004e2e10 | = "..\\sound\\mp3.cpp"
    MOV ESI,0x2d4                       ; 004e2e15
    PUSH 0x58b61c                       ; 004e2e1a | = "hputbuf - Not Supported yet!!  File: %s"
    MOV dword ptr [0x01cc4800],ECX      ; 004e2e1f | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004e2e25 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004e2e2b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 004e2e30
    POP ESI                             ; 004e2e33
    JMP 0x004e2dec                      ; 004e2e34
        ;   XREF to: 004e2dec (UNCONDITIONAL_JUMP)  ; LAB_004e2dec

