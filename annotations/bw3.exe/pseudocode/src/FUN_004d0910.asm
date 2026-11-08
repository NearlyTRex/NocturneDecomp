; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d0910(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_005723d0 at 005724b3
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   FUN_0046d460
;   FUN_004d0110
;   FUN_004d07f0
;   FUN_004e6a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d0910
        ;   Label: FUN_004d0910
    PUSH ESI                            ; 004d0911
    PUSH EBP                            ; 004d0912
    SUB ESP,0xc                         ; 004d0913
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004d0916
    MOV ESI,ESP                         ; 004d091a
    CALL FUN_004e6a90                   ; 004d091c
        ;   XREF to: 004e6a90 (UNCONDITIONAL_CALL)  ; undefined FUN_004e6a90()
    MOV EAX,dword ptr [ESP]             ; 004d0921
    MOV ESI,dword ptr [EBX + 0x1c]      ; 004d0924
    MOV EDX,EAX                         ; 004d0927
    SHL ESI,0x8                         ; 004d0929
    SAR EDX,0x1f                        ; 004d092c
    IDIV ESI                            ; 004d092f
    MOV dword ptr [EBX + 0x2c],EAX      ; 004d0931
    MOV EAX,dword ptr [ESP + 0x8]       ; 004d0934
    MOV ESI,dword ptr [EBX + 0x1c]      ; 004d0938
    MOV EDX,EAX                         ; 004d093b
    SHL ESI,0x8                         ; 004d093d
    SAR EDX,0x1f                        ; 004d0940
    IDIV ESI                            ; 004d0943
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004d0945
    MOV dword ptr [EBX + 0x30],EAX      ; 004d0948
    TEST EDX,EDX                        ; 004d094b
    JL 0x004d0990                       ; 004d094d
        ;   XREF to: 004d0990 (CONDITIONAL_JUMP)  ; LAB_004d0990
    MOV ESI,dword ptr [EBX + 0x30]      ; 004d094f
        ;   Label: LAB_004d094f
    TEST ESI,ESI                        ; 004d0952
    JL 0x004d0998                       ; 004d0954
        ;   XREF to: 004d0998 (CONDITIONAL_JUMP)  ; LAB_004d0998
    PUSH EBX                            ; 004d0956
        ;   Label: LAB_004d0956
    CALL FUN_004d0110                   ; 004d0957
        ;   XREF to: 004d0110 (UNCONDITIONAL_CALL)  ; undefined FUN_004d0110()
    ADD ESP,0x4                         ; 004d095c
    PUSH 0x1                            ; 004d095f
    MOV EBP,dword ptr [0x005f2afc]      ; 004d0961 | DAT_005f2afc
    PUSH EBP                            ; 004d0967 | DAT_01bdd7e4
    CALL FUN_0046d460                   ; 004d0968
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d460()
    ADD ESP,0x8                         ; 004d096d
    PUSH EBX                            ; 004d0970
    CALL FUN_004d07f0                   ; 004d0971
        ;   XREF to: 004d07f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d07f0()
    ADD ESP,0x4                         ; 004d0976
    PUSH 0x0                            ; 004d0979
    MOV EAX,[0x005f2afc]                ; 004d097b | DAT_005f2afc
    PUSH EAX                            ; 004d0980 | DAT_01bdd7e4
    CALL FUN_0046d460                   ; 004d0981
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d460()
    ADD ESP,0x8                         ; 004d0986
    ADD ESP,0xc                         ; 004d0989
    POP EBP                             ; 004d098c
    POP ESI                             ; 004d098d
    POP EBX                             ; 004d098e
    RET                                 ; 004d098f
    LEA ECX,[EDX + -0x1]                ; 004d0990
        ;   Label: LAB_004d0990
    MOV dword ptr [EBX + 0x2c],ECX      ; 004d0993
    JMP 0x004d094f                      ; 004d0996
        ;   XREF to: 004d094f (UNCONDITIONAL_JUMP)  ; LAB_004d094f
    PUSH EDI                            ; 004d0998
        ;   Label: LAB_004d0998
    LEA EDI,[ESI + -0x1]                ; 004d0999
    MOV dword ptr [EBX + 0x30],EDI      ; 004d099c
    POP EDI                             ; 004d099f
    JMP 0x004d0956                      ; 004d09a0
        ;   XREF to: 004d0956 (UNCONDITIONAL_JUMP)  ; LAB_004d0956

