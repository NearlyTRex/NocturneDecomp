; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005265e0(undefined4 param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0052b450 at 0052b50e
;
; Called Functions:
;   FUN_00525cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005265e0
        ;   Label: FUN_005265e0
    PUSH ESI                            ; 005265e1
    PUSH EDI                            ; 005265e2
    PUSH EBP                            ; 005265e3
    SUB ESP,0x4                         ; 005265e4
    XOR EDX,EDX                         ; 005265e7
    MOV EBP,dword ptr [ESP + 0x24]      ; 005265e9
    MOV dword ptr [ESP],EDX             ; 005265ed
    MOV EBP,dword ptr [EBP + 0x10]      ; 005265f0
    XOR ESI,ESI                         ; 005265f3
        ;   Label: LAB_005265f3
    TEST EBP,EBP                        ; 005265f5
    JLE 0x00526627                      ; 005265f7
        ;   XREF to: 00526627 (CONDITIONAL_JUMP)  ; LAB_00526627
    MOV EBX,dword ptr [ESP]             ; 005265f9
    MOV EDI,dword ptr [ESP + 0x20]      ; 005265fc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00526600
    ADD EBX,EDI                         ; 00526604
    MOV EDI,dword ptr [ESP]             ; 00526606
    ADD EDI,EAX                         ; 00526609
    CMP dword ptr [EDI],0x0             ; 0052660b
        ;   Label: LAB_0052660b
    JNZ 0x00526640                      ; 0052660e
        ;   XREF to: 00526640 (CONDITIONAL_JUMP)  ; LAB_00526640
    MOV dword ptr [EBX],0x3f            ; 00526610
    ADD EBX,0x180                       ; 00526616
        ;   Label: LAB_00526616
    INC ESI                             ; 0052661c
    ADD EDI,0x80                        ; 0052661d
    CMP ESI,EBP                         ; 00526623
    JL 0x0052660b                       ; 00526625
        ;   XREF to: 0052660b (CONDITIONAL_JUMP)  ; LAB_0052660b
    MOV ECX,dword ptr [ESP]             ; 00526627
        ;   Label: LAB_00526627
    ADD ECX,0x4                         ; 0052662a
    MOV dword ptr [ESP],ECX             ; 0052662d
    CMP ECX,0x80                        ; 00526630
    JNZ 0x005265f3                      ; 00526636
        ;   XREF to: 005265f3 (CONDITIONAL_JUMP)  ; LAB_005265f3
    ADD ESP,0x4                         ; 00526638
    POP EBP                             ; 0052663b
    POP EDI                             ; 0052663c
    POP ESI                             ; 0052663d
    POP EBX                             ; 0052663e
    RET                                 ; 0052663f
    PUSH 0x6                            ; 00526640
        ;   Label: LAB_00526640
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00526642
    PUSH ECX                            ; 00526646
    CALL FUN_00525cd0                   ; 00526647
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00525cd0()
    ADD ESP,0x8                         ; 0052664c
    MOV dword ptr [EBX],EAX             ; 0052664f
    JMP 0x00526616                      ; 00526651
        ;   XREF to: 00526616 (UNCONDITIONAL_JUMP)  ; LAB_00526616

