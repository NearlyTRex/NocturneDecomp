; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00516960(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_00516d70 at 00516dd4
;
; Called Functions:
;   FUN_0042c520
;   FUN_005169b0
;   FUN_00516d60
;   FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516960
        ;   Label: FUN_00516960
    PUSH ESI                            ; 00516961
    MOV EBX,dword ptr [ESP + 0xc]       ; 00516962
    MOV ESI,dword ptr [EBX + 0x18]      ; 00516966
    IMUL ESI,dword ptr [EBX + 0x1c]     ; 00516969
    PUSH ESI                            ; 0051696d
    PUSH 0x0                            ; 0051696e
    PUSH EBX                            ; 00516970
    CALL FUN_0042c520                   ; 00516971
        ;   XREF to: 0042c520 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c520()
    MOV ESI,EAX                         ; 00516976
    ADD ESP,0xc                         ; 00516978
    TEST EAX,EAX                        ; 0051697b
    JNZ 0x00516982                      ; 0051697d
        ;   XREF to: 00516982 (CONDITIONAL_JUMP)  ; LAB_00516982
    POP ESI                             ; 0051697f
        ;   Label: LAB_0051697f
    POP EBX                             ; 00516980
    RET                                 ; 00516981
    MOV ECX,dword ptr [EBX + 0x18]      ; 00516982
        ;   Label: LAB_00516982
    PUSH ECX                            ; 00516985
    PUSH EAX                            ; 00516986
    PUSH EBX                            ; 00516987
    CALL FUN_005169b0                   ; 00516988
        ;   XREF to: 005169b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005169b0()
    ADD ESP,0xc                         ; 0051698d
    PUSH ESI                            ; 00516990
    CALL FUN_005b86a0                   ; 00516991
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 00516996
    CMP dword ptr [ESP + 0x10],0x0      ; 00516999
    JZ 0x0051697f                       ; 0051699e
        ;   XREF to: 0051697f (CONDITIONAL_JUMP)  ; LAB_0051697f
    PUSH EBX                            ; 005169a0
    CALL FUN_00516d60                   ; 005169a1
        ;   XREF to: 00516d60 (UNCONDITIONAL_CALL)  ; undefined FUN_00516d60()
    ADD ESP,0x4                         ; 005169a6
    POP ESI                             ; 005169a9
    POP EBX                             ; 005169aa
    RET                                 ; 005169ab

