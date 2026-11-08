; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a6838(undefined4 param_1,char *param_2,int param_3)
;
;
; XREF[1]:
;   FUN_005a6a78 at 005a6f85
;
; Called Functions:
;   FUN_005acc88
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a6838
        ;   Label: FUN_005a6838
    PUSH ESI                            ; 005a6839
    PUSH EDI                            ; 005a683a
    PUSH EBP                            ; 005a683b
    MOV EBP,dword ptr [ESP + 0x18]      ; 005a683c
    PUSH 0x10                           ; 005a6840
    PUSH EBP                            ; 005a6842
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005a6843
    PUSH EDX                            ; 005a6847
    CALL FUN_005acc88                   ; 005a6848
        ;   XREF to: 005acc88 (UNCONDITIONAL_CALL)  ; undefined FUN_005acc88()
    ADD ESP,0xc                         ; 005a684d
    MOV EDI,EBP                         ; 005a6850
    PUSH ES                             ; 005a6852
    MOV AX,DS                           ; 005a6853
    MOV ES,AX                           ; 005a6855
    SUB ECX,ECX                         ; 005a6857
    DEC ECX                             ; 005a6859
    XOR EAX,EAX                         ; 005a685a
    SCASB.REPNE ES:EDI                  ; 005a685c
    NOT ECX                             ; 005a685e
    DEC ECX                             ; 005a6860
    POP ES                              ; 005a6861
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005a6862
    DEC EAX                             ; 005a6866
    TEST ECX,ECX                        ; 005a6867
    JZ 0x005a6880                       ; 005a6869
        ;   XREF to: 005a6880 (CONDITIONAL_JUMP)  ; LAB_005a6880
    MOV ESI,EBP                         ; 005a686b
    LEA EBX,[EAX + EBP*0x1]             ; 005a686d
    LEA EDX,[ECX + EBP*0x1]             ; 005a6870
    DEC EBX                             ; 005a6873
        ;   Label: LAB_005a6873
    MOV CL,byte ptr [EDX + -0x1]        ; 005a6874
    DEC EDX                             ; 005a6877
    DEC EAX                             ; 005a6878
    MOV byte ptr [EBX + 0x1],CL         ; 005a6879
    CMP EDX,ESI                         ; 005a687c
    JNZ 0x005a6873                      ; 005a687e
        ;   XREF to: 005a6873 (CONDITIONAL_JUMP)  ; LAB_005a6873
    LEA EDX,[EAX + EBP*0x1]             ; 005a6880
        ;   Label: LAB_005a6880
    TEST EAX,EAX                        ; 005a6883
        ;   Label: LAB_005a6883
    JL 0x005a688e                       ; 005a6885
        ;   XREF to: 005a688e (CONDITIONAL_JUMP)  ; LAB_005a688e
    DEC EAX                             ; 005a6887
    MOV byte ptr [EDX],0x30             ; 005a6888
    DEC EDX                             ; 005a688b
    JMP 0x005a6883                      ; 005a688c
        ;   XREF to: 005a6883 (UNCONDITIONAL_JUMP)  ; LAB_005a6883
    ADD EBP,dword ptr [ESP + 0x1c]      ; 005a688e
        ;   Label: LAB_005a688e
    MOV byte ptr [EBP],0x0              ; 005a6892
    POP EBP                             ; 005a6896
    POP EDI                             ; 005a6897
    POP ESI                             ; 005a6898
    POP EBX                             ; 005a6899
    RET                                 ; 005a689a

