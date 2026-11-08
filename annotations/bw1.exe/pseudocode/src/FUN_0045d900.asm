; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0045d900(int *param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_0045ddb0 at 0045dedd
;   FUN_0045df40 at 0045df55
;
; Called Functions:
;   FUN_005c0f80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d900
        ;   Label: FUN_0045d900
    PUSH ESI                            ; 0045d901
    PUSH EDI                            ; 0045d902
    PUSH EBP                            ; 0045d903
    MOV EDI,dword ptr [ESP + 0x14]      ; 0045d904
    MOV EBP,dword ptr [ESP + 0x18]      ; 0045d908
    MOV EDX,dword ptr [EDI]             ; 0045d90c
    XOR EBX,EBX                         ; 0045d90e
    TEST EDX,EDX                        ; 0045d910
    JLE 0x0045d92f                      ; 0045d912
        ;   XREF to: 0045d92f (CONDITIONAL_JUMP)  ; LAB_0045d92f
    LEA ESI,[EDI + 0x4]                 ; 0045d914
    PUSH EBP                            ; 0045d917
        ;   Label: LAB_0045d917
    PUSH ESI                            ; 0045d918
    CALL FUN_005c0f80                   ; 0045d919
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0f80()
    ADD ESP,0x8                         ; 0045d91e
    TEST EAX,EAX                        ; 0045d921
    JZ 0x0045d936                       ; 0045d923
        ;   XREF to: 0045d936 (CONDITIONAL_JUMP)  ; LAB_0045d936
    INC EBX                             ; 0045d925
    MOV ECX,dword ptr [EDI]             ; 0045d926
    ADD ESI,0x28                        ; 0045d928
    CMP EBX,ECX                         ; 0045d92b
    JL 0x0045d917                       ; 0045d92d
        ;   XREF to: 0045d917 (CONDITIONAL_JUMP)  ; LAB_0045d917
    XOR EAX,EAX                         ; 0045d92f
        ;   Label: LAB_0045d92f
    POP EBP                             ; 0045d931
    POP EDI                             ; 0045d932
    POP ESI                             ; 0045d933
    POP EBX                             ; 0045d934
    RET                                 ; 0045d935
    SHL EBX,0x2                         ; 0045d936
        ;   Label: LAB_0045d936
    LEA EAX,[EDI + EBX*0x1]             ; 0045d939
    MOV EAX,dword ptr [EAX + 0xa04]     ; 0045d93c
    POP EBP                             ; 0045d942
    POP EDI                             ; 0045d943
    POP ESI                             ; 0045d944
    POP EBX                             ; 0045d945
    RET                                 ; 0045d946

