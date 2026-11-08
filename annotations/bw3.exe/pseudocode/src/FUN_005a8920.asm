; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a8920(int param_1,int *param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_005a82c0 at 005a850a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a8920
        ;   Label: FUN_005a8920
    PUSH ESI                            ; 005a8921
    PUSH EDI                            ; 005a8922
    PUSH ES                             ; 005a8923
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a8924
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a8928
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005a892c
    MOV CL,byte ptr [EDX + 0x10]        ; 005a8930
    TEST CL,0x1                         ; 005a8933
    JZ 0x005a8985                       ; 005a8936
        ;   XREF to: 005a8985 (CONDITIONAL_JUMP)  ; LAB_005a8985
    TEST CL,0x4                         ; 005a8938
    JZ 0x005a8949                       ; 005a893b
        ;   XREF to: 005a8949 (CONDITIONAL_JUMP)  ; LAB_005a8949
    MOV EDI,dword ptr [EAX]             ; 005a893d
    ADD EDI,0x8                         ; 005a893f
    MOV dword ptr [EAX],EDI             ; 005a8942
    LES EAX,[EDI + -0x8]                ; 005a8944
    JMP 0x005a896e                      ; 005a8947
        ;   XREF to: 005a896e (UNCONDITIONAL_JUMP)  ; LAB_005a896e
    TEST CL,0x8                         ; 005a8949
        ;   Label: LAB_005a8949
    JZ 0x005a895e                       ; 005a894c
        ;   XREF to: 005a895e (CONDITIONAL_JUMP)  ; LAB_005a895e
    MOV ESI,dword ptr [EAX]             ; 005a894e
    ADD ESI,0x4                         ; 005a8950
    MOV CX,DS                           ; 005a8953
    MOV dword ptr [EAX],ESI             ; 005a8955
    MOV ES,CX                           ; 005a8957
    MOV EAX,dword ptr [ESI + -0x4]      ; 005a8959
    JMP 0x005a896e                      ; 005a895c
        ;   XREF to: 005a896e (UNCONDITIONAL_JUMP)  ; LAB_005a896e
    MOV ECX,dword ptr [EAX]             ; 005a895e
        ;   Label: LAB_005a895e
    ADD ECX,0x4                         ; 005a8960
    MOV dword ptr [EAX],ECX             ; 005a8963
    MOV EAX,ECX                         ; 005a8965
    MOV CX,DS                           ; 005a8967
    MOV ES,CX                           ; 005a8969
    MOV EAX,dword ptr [EAX + -0x4]      ; 005a896b
    MOV CH,byte ptr [EDX + 0x10]        ; 005a896e
        ;   Label: LAB_005a896e
    TEST CH,0x10                        ; 005a8971
    JZ 0x005a897f                       ; 005a8974
        ;   XREF to: 005a897f (CONDITIONAL_JUMP)  ; LAB_005a897f
    MOV word ptr ES:[EAX],BX            ; 005a8976
    POP ES                              ; 005a897a
    POP EDI                             ; 005a897b
    POP ESI                             ; 005a897c
    POP EBX                             ; 005a897d
    RET                                 ; 005a897e
    TEST CH,0x20                        ; 005a897f
        ;   Label: LAB_005a897f
    MOV dword ptr ES:[EAX],EBX          ; 005a8982
    POP ES                              ; 005a8985
        ;   Label: LAB_005a8985
    POP EDI                             ; 005a8986
    POP ESI                             ; 005a8987
    POP EBX                             ; 005a8988
    RET                                 ; 005a8989

