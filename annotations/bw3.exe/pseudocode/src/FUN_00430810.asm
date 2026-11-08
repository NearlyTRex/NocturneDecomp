; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00430810(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_00527050 at 0052706d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430810
        ;   Label: FUN_00430810
    PUSH ESI                            ; 00430811
    PUSH EDI                            ; 00430812
    PUSH EBP                            ; 00430813
    MOV EDI,dword ptr [ESP + 0x18]      ; 00430814
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00430818
    MOV ESI,dword ptr [ESP + 0x14]      ; 0043081c
    ADD ESI,0x25a8                      ; 00430820
    MOV EBX,ESI                         ; 00430826
    ADD ESI,0xf0                        ; 00430828
    MOV EDX,dword ptr [EBX + 0x8]       ; 0043082e
        ;   Label: LAB_0043082e
    CMP EDI,EDX                         ; 00430831
    JZ 0x00430841                       ; 00430833
        ;   XREF to: 00430841 (CONDITIONAL_JUMP)  ; LAB_00430841
    ADD EBX,0x78                        ; 00430835
    CMP EBX,ESI                         ; 00430838
    JNZ 0x0043082e                      ; 0043083a
        ;   XREF to: 0043082e (CONDITIONAL_JUMP)  ; LAB_0043082e
    POP EBP                             ; 0043083c
    POP EDI                             ; 0043083d
    POP ESI                             ; 0043083e
    POP EBX                             ; 0043083f
    RET                                 ; 00430840
    PUSH EBP                            ; 00430841
        ;   Label: LAB_00430841
    MOV EDX,dword ptr [EDX + 0x154]     ; 00430842
    PUSH EDI                            ; 00430848
    CALL dword ptr [EDX + 0x8c]         ; 00430849
    ADD ESP,0x8                         ; 0043084f
    MOV dword ptr [EBX + 0x8],0x0       ; 00430852
    ADD EBX,0x78                        ; 00430859
    CMP EBX,ESI                         ; 0043085c
    JNZ 0x0043082e                      ; 0043085e
        ;   XREF to: 0043082e (CONDITIONAL_JUMP)  ; LAB_0043082e
    POP EBP                             ; 00430860
    POP EDI                             ; 00430861
    POP ESI                             ; 00430862
    POP EBX                             ; 00430863
    RET                                 ; 00430864

