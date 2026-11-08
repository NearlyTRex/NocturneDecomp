; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00563910(char *param_1)
;
;
; Called Functions:
;   FUN_00408890
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00563910
        ;   Label: FUN_00563910
    PUSH EDI                            ; 00563911
    MOV ESI,dword ptr [ESP + 0xc]       ; 00563912
    PUSH ESI                            ; 00563916
    CALL FUN_00408890                   ; 00563917
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; undefined FUN_00408890()
    ADD ESP,0x4                         ; 0056391c
    LEA EDI,[ESI + 0x158]               ; 0056391f
    PUSH EDI                            ; 00563925
    MOV AL,byte ptr [ESI]               ; 00563926
        ;   Label: LAB_00563926
    MOV byte ptr [EDI],AL               ; 00563928
    CMP AL,0x0                          ; 0056392a
    JZ 0x0056393e                       ; 0056392c
        ;   XREF to: 0056393e (CONDITIONAL_JUMP)  ; LAB_0056393e
    MOV AL,byte ptr [ESI + 0x1]         ; 0056392e
    ADD ESI,0x2                         ; 00563931
    MOV byte ptr [EDI + 0x1],AL         ; 00563934
    ADD EDI,0x2                         ; 00563937
    CMP AL,0x0                          ; 0056393a
    JNZ 0x00563926                      ; 0056393c
        ;   XREF to: 00563926 (CONDITIONAL_JUMP)  ; LAB_00563926
    POP EDI                             ; 0056393e
        ;   Label: LAB_0056393e
    MOV ESI,0x5d54a8                    ; 0056393f
    PUSH EDI                            ; 00563944
    SUB ECX,ECX                         ; 00563945
    DEC ECX                             ; 00563947
    MOV AL,0x0                          ; 00563948
    SCASB.REPNE ES:EDI                  ; 0056394a
    DEC EDI                             ; 0056394c
    MOV AL,byte ptr [ESI]               ; 0056394d
        ;   Label: LAB_0056394d
    MOV byte ptr [EDI],AL               ; 0056394f
    CMP AL,0x0                          ; 00563951
    JZ 0x00563965                       ; 00563953
        ;   XREF to: 00563965 (CONDITIONAL_JUMP)  ; LAB_00563965
    MOV AL,byte ptr [ESI + 0x1]         ; 00563955
    ADD ESI,0x2                         ; 00563958
    MOV byte ptr [EDI + 0x1],AL         ; 0056395b
    ADD EDI,0x2                         ; 0056395e
    CMP AL,0x0                          ; 00563961
    JNZ 0x0056394d                      ; 00563963
        ;   XREF to: 0056394d (CONDITIONAL_JUMP)  ; LAB_0056394d
    POP EDI                             ; 00563965
        ;   Label: LAB_00563965
    POP EDI                             ; 00563966
    POP ESI                             ; 00563967
    RET                                 ; 00563968

