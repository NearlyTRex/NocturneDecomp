; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059c830(int param_1,char *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f8368
;
; Called Functions:
;   FUN_0059c590
;   FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c830
        ;   Label: FUN_0059c830
    PUSH ESI                            ; 0059c831
    MOV ESI,dword ptr [ESP + 0xc]       ; 0059c832
    MOV EBX,dword ptr [ESP + 0x10]      ; 0059c836
    PUSH EBX                            ; 0059c83a
    PUSH ESI                            ; 0059c83b
    CALL FUN_0059c590                   ; 0059c83c
        ;   XREF to: 0059c590 (UNCONDITIONAL_CALL)  ; undefined FUN_0059c590()
    ADD ESP,0x8                         ; 0059c841
    MOV SI,word ptr [ESI + 0x4]         ; 0059c844
    AND ESI,0xffff                      ; 0059c848
    PUSH ESI                            ; 0059c84e
    PUSH 0x5f8368                       ; 0059c84f | DAT_005f8368
    XOR DL,DL                           ; 0059c854
    MOV ESI,EBX                         ; 0059c856
    MOV AL,byte ptr [ESI]               ; 0059c858
        ;   Label: LAB_0059c858
    CMP AL,DL                           ; 0059c85a
    JZ 0x0059c870                       ; 0059c85c
        ;   XREF to: 0059c870 (CONDITIONAL_JUMP)  ; LAB_0059c870
    CMP AL,0x0                          ; 0059c85e
    JZ 0x0059c86e                       ; 0059c860
        ;   XREF to: 0059c86e (CONDITIONAL_JUMP)  ; LAB_0059c86e
    INC ESI                             ; 0059c862
    MOV AL,byte ptr [ESI]               ; 0059c863
    CMP AL,DL                           ; 0059c865
    JZ 0x0059c870                       ; 0059c867
        ;   XREF to: 0059c870 (CONDITIONAL_JUMP)  ; LAB_0059c870
    INC ESI                             ; 0059c869
    CMP AL,0x0                          ; 0059c86a
    JNZ 0x0059c858                      ; 0059c86c
        ;   XREF to: 0059c858 (CONDITIONAL_JUMP)  ; LAB_0059c858
    SUB ESI,ESI                         ; 0059c86e
        ;   Label: LAB_0059c86e
    PUSH ESI                            ; 0059c870
        ;   Label: LAB_0059c870
    CALL FUN_005bfb40                   ; 0059c871
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0xc                         ; 0059c876
    POP ESI                             ; 0059c879
    POP EBX                             ; 0059c87a
    RET                                 ; 0059c87b

