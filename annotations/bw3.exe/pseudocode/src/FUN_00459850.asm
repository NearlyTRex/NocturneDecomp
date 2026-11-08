; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00459850(int *param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_00459d00 at 00459e2d
;   FUN_00459e90 at 00459ea5
;
; Called Functions:
;   FUN_005a3d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00459850
        ;   Label: FUN_00459850
    PUSH ESI                            ; 00459851
    PUSH EDI                            ; 00459852
    PUSH EBP                            ; 00459853
    MOV EDI,dword ptr [ESP + 0x14]      ; 00459854
    MOV EBP,dword ptr [ESP + 0x18]      ; 00459858
    MOV EDX,dword ptr [EDI]             ; 0045985c
    XOR EBX,EBX                         ; 0045985e
    TEST EDX,EDX                        ; 00459860
    JLE 0x0045987f                      ; 00459862
        ;   XREF to: 0045987f (CONDITIONAL_JUMP)  ; LAB_0045987f
    LEA ESI,[EDI + 0x4]                 ; 00459864
    PUSH EBP                            ; 00459867
        ;   Label: LAB_00459867
    PUSH ESI                            ; 00459868
    CALL FUN_005a3d00                   ; 00459869
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3d00()
    ADD ESP,0x8                         ; 0045986e
    TEST EAX,EAX                        ; 00459871
    JZ 0x00459886                       ; 00459873
        ;   XREF to: 00459886 (CONDITIONAL_JUMP)  ; LAB_00459886
    INC EBX                             ; 00459875
    MOV ECX,dword ptr [EDI]             ; 00459876
    ADD ESI,0x28                        ; 00459878
    CMP EBX,ECX                         ; 0045987b
    JL 0x00459867                       ; 0045987d
        ;   XREF to: 00459867 (CONDITIONAL_JUMP)  ; LAB_00459867
    XOR EAX,EAX                         ; 0045987f
        ;   Label: LAB_0045987f
    POP EBP                             ; 00459881
    POP EDI                             ; 00459882
    POP ESI                             ; 00459883
    POP EBX                             ; 00459884
    RET                                 ; 00459885
    SHL EBX,0x2                         ; 00459886
        ;   Label: LAB_00459886
    LEA EAX,[EDI + EBX*0x1]             ; 00459889
    MOV EAX,dword ptr [EAX + 0xa04]     ; 0045988c
    POP EBP                             ; 00459892
    POP EDI                             ; 00459893
    POP ESI                             ; 00459894
    POP EBX                             ; 00459895
    RET                                 ; 00459896

