; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00481840(int *param_1)
;
;
; XREF[1]:
;   FUN_00481890 at 00481895
;
; Referenced Globals:
;   undefined4 DAT_005b7650
;
; Called Functions:
;   FUN_0047dc30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481840
        ;   Label: FUN_00481840
    PUSH ESI                            ; 00481841
    PUSH EDI                            ; 00481842
    PUSH EBP                            ; 00481843
    MOV EDI,dword ptr [ESP + 0x14]      ; 00481844
    MOV EDX,dword ptr [EDI]             ; 00481848
    XOR EBX,EBX                         ; 0048184a
    TEST EDX,EDX                        ; 0048184c
    JLE 0x00481871                      ; 0048184e
        ;   XREF to: 00481871 (CONDITIONAL_JUMP)  ; LAB_00481871
    LEA ESI,[EDI + 0x4]                 ; 00481850
    PUSH ESI                            ; 00481853
        ;   Label: LAB_00481853
    MOV EBP,dword ptr [0x005b7650]      ; 00481854 | DAT_005b7650
    PUSH EBP                            ; 0048185a
    CALL FUN_0047dc30                   ; 0048185b
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined FUN_0047dc30()
    ADD ESP,0x8                         ; 00481860
    TEST EAX,EAX                        ; 00481863
    JNZ 0x0048187b                      ; 00481865
        ;   XREF to: 0048187b (CONDITIONAL_JUMP)  ; LAB_0048187b
    INC EBX                             ; 00481867
    MOV ECX,dword ptr [EDI]             ; 00481868
    ADD ESI,0x64                        ; 0048186a
    CMP EBX,ECX                         ; 0048186d
    JL 0x00481853                       ; 0048186f
        ;   XREF to: 00481853 (CONDITIONAL_JUMP)  ; LAB_00481853
    MOV EAX,0xffffffff                  ; 00481871
        ;   Label: LAB_00481871
    POP EBP                             ; 00481876
    POP EDI                             ; 00481877
    POP ESI                             ; 00481878
    POP EBX                             ; 00481879
    RET                                 ; 0048187a
    MOV EAX,EBX                         ; 0048187b
        ;   Label: LAB_0048187b
    POP EBP                             ; 0048187d
    POP EDI                             ; 0048187e
    POP ESI                             ; 0048187f
    POP EBX                             ; 00481880
    RET                                 ; 00481881

