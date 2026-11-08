; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00492920(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408790
;   FUN_0044fc80
;   FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00492920
        ;   Label: FUN_00492920
    PUSH ESI                            ; 00492921
    PUSH EDI                            ; 00492922
    MOV EBX,dword ptr [ESP + 0x10]      ; 00492923
    PUSH EBX                            ; 00492927
    CALL FUN_00408790                   ; 00492928
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; undefined FUN_00408790()
    ADD ESP,0x4                         ; 0049292d
    ADD EAX,0x2b4                       ; 00492930
    PUSH EAX                            ; 00492935
    CALL FUN_0044fc80                   ; 00492936
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 0049293b
    LEA EBX,[EAX + 0xfffffd4c]          ; 0049293e
    PUSH 0x5d525e                       ; 00492944
    LEA EAX,[EBX + 0x2b4]               ; 00492949
    PUSH EAX                            ; 0049294f
    MOV dword ptr [EBX + 0x2b0],0x5f6244 ; 00492950
    CALL FUN_0044fd70                   ; 0049295a
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 0049295f
    MOV ESI,0x5d526b                    ; 00492962
    LEA EDI,[EBX + 0x434]               ; 00492967
    PUSH EDI                            ; 0049296d
    MOV AL,byte ptr [ESI]               ; 0049296e
        ;   Label: LAB_0049296e
    MOV byte ptr [EDI],AL               ; 00492970
    CMP AL,0x0                          ; 00492972
    JZ 0x00492986                       ; 00492974
        ;   XREF to: 00492986 (CONDITIONAL_JUMP)  ; LAB_00492986
    MOV AL,byte ptr [ESI + 0x1]         ; 00492976
    ADD ESI,0x2                         ; 00492979
    MOV byte ptr [EDI + 0x1],AL         ; 0049297c
    ADD EDI,0x2                         ; 0049297f
    CMP AL,0x0                          ; 00492982
    JNZ 0x0049296e                      ; 00492984
        ;   XREF to: 0049296e (CONDITIONAL_JUMP)  ; LAB_0049296e
    POP EDI                             ; 00492986
        ;   Label: LAB_00492986
    MOV EAX,EBX                         ; 00492987
    POP EDI                             ; 00492989
    POP ESI                             ; 0049298a
    POP EBX                             ; 0049298b
    RET                                 ; 0049298c

