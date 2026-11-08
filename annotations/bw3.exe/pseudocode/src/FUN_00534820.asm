; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00534820(undefined4 param_1,int param_2)
;
;
; XREF[5]:
;   FUN_00455080 at 00456f07
;   FUN_00487eb0 at 00488103
;   FUN_004cc040 at 004cc456
;   FUN_004cf580 at 004cf5ce
;   FUN_00534890 at 005349f8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534820
        ;   Label: FUN_00534820
    MOV ECX,dword ptr [ESP + 0xc]       ; 00534821
    LEA EDX,[ECX + 0x12c]               ; 00534825
    LEA EAX,[ECX + 0x20]                ; 0053482b
    MOV dword ptr [ECX + 0x144],0x1f    ; 0053482e
    CMP EDX,EAX                         ; 00534838
    JNZ 0x00534855                      ; 0053483a
        ;   XREF to: 00534855 (CONDITIONAL_JUMP)  ; LAB_00534855
    LEA EDX,[ECX + 0x138]               ; 0053483c
        ;   Label: LAB_0053483c
    LEA EAX,[ECX + 0x30]                ; 00534842
    CMP EDX,EAX                         ; 00534845
    JNZ 0x00534867                      ; 00534847
        ;   XREF to: 00534867 (CONDITIONAL_JUMP)  ; LAB_00534867
    MOV dword ptr [ECX + 0x148],0x0     ; 00534849
    POP EBX                             ; 00534853
    RET                                 ; 00534854
    MOV EBX,dword ptr [EAX]             ; 00534855
        ;   Label: LAB_00534855
    MOV dword ptr [EDX],EBX             ; 00534857
    MOV EBX,dword ptr [EAX + 0x4]       ; 00534859
    MOV dword ptr [EDX + 0x4],EBX       ; 0053485c
    MOV EBX,dword ptr [EAX + 0x8]       ; 0053485f
    MOV dword ptr [EDX + 0x8],EBX       ; 00534862
    JMP 0x0053483c                      ; 00534865
        ;   XREF to: 0053483c (UNCONDITIONAL_JUMP)  ; LAB_0053483c
    MOV EBX,dword ptr [EAX]             ; 00534867
        ;   Label: LAB_00534867
    MOV dword ptr [EDX],EBX             ; 00534869
    MOV EBX,dword ptr [EAX + 0x4]       ; 0053486b
    MOV dword ptr [EDX + 0x4],EBX       ; 0053486e
    MOV EBX,dword ptr [EAX + 0x8]       ; 00534871
    MOV dword ptr [EDX + 0x8],EBX       ; 00534874
    MOV dword ptr [ECX + 0x148],0x0     ; 00534877
    POP EBX                             ; 00534881
    RET                                 ; 00534882

