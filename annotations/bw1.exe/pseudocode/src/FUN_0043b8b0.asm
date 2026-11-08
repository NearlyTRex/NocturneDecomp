; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043b8b0(int *param_1,int *param_2,int *param_3)
;
;
; XREF[1]:
;   FUN_0043c190 at 0043cb2b
;
; Referenced Globals:
;   undefined4 DAT_00610d44
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b8b0
        ;   Label: FUN_0043b8b0
    PUSH ESI                            ; 0043b8b1
    PUSH EDI                            ; 0043b8b2
    PUSH EBP                            ; 0043b8b3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0043b8b4
    MOV EDI,dword ptr [ESP + 0x18]      ; 0043b8b8
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0043b8bc
    MOV EBX,dword ptr [EDI + 0x8]       ; 0043b8c0
    MOV EDX,dword ptr [ESI + 0x8]       ; 0043b8c3
    MOV ECX,dword ptr [ESI + 0x8]       ; 0043b8c6
    SUB EBX,EDX                         ; 0043b8c9
    MOV EDX,dword ptr [0x00610d44]      ; 0043b8cb | DAT_00610d44
    SUB EDX,ECX                         ; 0043b8d1
    CMP EDX,EBX                         ; 0043b8d3
    JGE 0x0043b8e9                      ; 0043b8d5
        ;   XREF to: 0043b8e9 (CONDITIONAL_JUMP)  ; LAB_0043b8e9
    NEG EBX                             ; 0043b8d7
    CMP EDX,EBX                         ; 0043b8d9
    JLE 0x0043b8f0                      ; 0043b8db
        ;   XREF to: 0043b8f0 (CONDITIONAL_JUMP)  ; LAB_0043b8f0
    NEG EBX                             ; 0043b8dd
    XOR EAX,EAX                         ; 0043b8df
    SAR EDX,0x1                         ; 0043b8e1
    RCR EAX,0x1                         ; 0043b8e3
    IDIV EBX                            ; 0043b8e5
    JMP 0x0043b8f7                      ; 0043b8e7
        ;   XREF to: 0043b8f7 (UNCONDITIONAL_JUMP)  ; LAB_0043b8f7
    MOV EAX,0x7fffffff                  ; 0043b8e9
        ;   Label: LAB_0043b8e9
    JMP 0x0043b8f7                      ; 0043b8ee
        ;   XREF to: 0043b8f7 (UNCONDITIONAL_JUMP)  ; LAB_0043b8f7
    NEG EBX                             ; 0043b8f0
        ;   Label: LAB_0043b8f0
    MOV EAX,0x80000000                  ; 0043b8f2
    MOV ECX,EAX                         ; 0043b8f7
        ;   Label: LAB_0043b8f7
    MOV EBX,dword ptr [ESI + 0x8]       ; 0043b8f9
    MOV EAX,dword ptr [EDI + 0x8]       ; 0043b8fc
    MOV EDX,ECX                         ; 0043b8ff
    SUB EAX,EBX                         ; 0043b901
    IMUL EDX                            ; 0043b903
    ADD EAX,EAX                         ; 0043b905
    ADC EDX,EDX                         ; 0043b907
    MOV EAX,EDX                         ; 0043b909
    MOV EBX,dword ptr [ESI + 0x8]       ; 0043b90b
    ADD EAX,EBX                         ; 0043b90e
    MOV dword ptr [EBP + 0x8],EAX       ; 0043b910
    MOV EAX,dword ptr [EDI + 0x4]       ; 0043b913
    SUB EAX,dword ptr [ESI + 0x4]       ; 0043b916
    MOV EDX,ECX                         ; 0043b919
    IMUL EDX                            ; 0043b91b
    ADD EAX,EAX                         ; 0043b91d
    ADC EDX,EDX                         ; 0043b91f
    MOV EAX,EDX                         ; 0043b921
    MOV EBX,dword ptr [ESI + 0x4]       ; 0043b923
    ADD EAX,EBX                         ; 0043b926
    MOV dword ptr [EBP + 0x4],EAX       ; 0043b928
    MOV EAX,dword ptr [EDI]             ; 0043b92b
    MOV EBX,dword ptr [ESI]             ; 0043b92d
    MOV EDX,ECX                         ; 0043b92f
    SUB EAX,EBX                         ; 0043b931
    IMUL EDX                            ; 0043b933
    ADD EAX,EAX                         ; 0043b935
    ADC EDX,EDX                         ; 0043b937
    MOV EAX,EDX                         ; 0043b939
    MOV EBX,dword ptr [ESI]             ; 0043b93b
    ADD EAX,EBX                         ; 0043b93d
    MOV dword ptr [EBP],EAX             ; 0043b93f
    MOV EAX,dword ptr [EDI + 0x20]      ; 0043b942
    SUB EAX,dword ptr [ESI + 0x20]      ; 0043b945
    MOV EDX,ECX                         ; 0043b948
    IMUL EDX                            ; 0043b94a
    ADD EAX,EAX                         ; 0043b94c
    ADC EDX,EDX                         ; 0043b94e
    MOV EAX,EDX                         ; 0043b950
    MOV EBX,dword ptr [ESI + 0x20]      ; 0043b952
    ADD EAX,EBX                         ; 0043b955
    MOV dword ptr [EBP + 0x20],EAX      ; 0043b957
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0043b95a
    MOV EBX,dword ptr [ESI + 0x2c]      ; 0043b95d
    MOV EDX,ECX                         ; 0043b960
    SUB EAX,EBX                         ; 0043b962
    IMUL EDX                            ; 0043b964
    ADD EAX,EAX                         ; 0043b966
    ADC EDX,EDX                         ; 0043b968
    MOV EAX,EDX                         ; 0043b96a
    MOV EBX,dword ptr [ESI + 0x2c]      ; 0043b96c
    ADD EAX,EBX                         ; 0043b96f
    MOV dword ptr [EBP + 0x2c],EAX      ; 0043b971
    MOV EAX,dword ptr [EDI + 0x18]      ; 0043b974
    SUB EAX,dword ptr [ESI + 0x18]      ; 0043b977
    MOV EDX,ECX                         ; 0043b97a
    IMUL EDX                            ; 0043b97c
    ADD EAX,EAX                         ; 0043b97e
    ADC EDX,EDX                         ; 0043b980
    MOV EAX,EDX                         ; 0043b982
    MOV EBX,dword ptr [ESI + 0x18]      ; 0043b984
    ADD EAX,EBX                         ; 0043b987
    MOV dword ptr [EBP + 0x18],EAX      ; 0043b989
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0043b98c
    MOV EBX,dword ptr [ESI + 0x1c]      ; 0043b98f
    MOV EDX,ECX                         ; 0043b992
    SUB EAX,EBX                         ; 0043b994
    IMUL EDX                            ; 0043b996
    ADD EAX,EAX                         ; 0043b998
    ADC EDX,EDX                         ; 0043b99a
    MOV EAX,EDX                         ; 0043b99c
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0043b99e
    MOV dword ptr [EBP + 0x10],0xffffffff ; 0043b9a1
    ADD ECX,EAX                         ; 0043b9a8
    MOV dword ptr [EBP + 0x1c],ECX      ; 0043b9aa
    POP EBP                             ; 0043b9ad
    POP EDI                             ; 0043b9ae
    POP ESI                             ; 0043b9af
    POP EBX                             ; 0043b9b0
    RET                                 ; 0043b9b1

