; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005684f8(int param_1)
;
;
; XREF[1]:
;   FUN_0056808c at 0056822b
;
; Called Functions:
;   FUN_00564860
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005684f8
        ;   Label: FUN_005684f8
    CMP EAX,0x30                        ; 005684fc
    JL 0x0056850a                       ; 005684ff
        ;   XREF to: 0056850a (CONDITIONAL_JUMP)  ; LAB_0056850a
    CMP EAX,0x39                        ; 00568501
    JG 0x0056850a                       ; 00568504
        ;   XREF to: 0056850a (CONDITIONAL_JUMP)  ; LAB_0056850a
    SUB EAX,0x30                        ; 00568506
    RET                                 ; 00568509
    PUSH EAX                            ; 0056850a
        ;   Label: LAB_0056850a
    CALL FUN_00564860                   ; 0056850b
        ;   XREF to: 00564860 (UNCONDITIONAL_CALL)  ; undefined FUN_00564860()
    ADD ESP,0x4                         ; 00568510
    CMP EAX,0x61                        ; 00568513
    JL 0x00568521                       ; 00568516
        ;   XREF to: 00568521 (CONDITIONAL_JUMP)  ; LAB_00568521
    CMP EAX,0x66                        ; 00568518
    JG 0x00568521                       ; 0056851b
        ;   XREF to: 00568521 (CONDITIONAL_JUMP)  ; LAB_00568521
    SUB EAX,0x57                        ; 0056851d
    RET                                 ; 00568520
    MOV EAX,0x10                        ; 00568521
        ;   Label: LAB_00568521
    RET                                 ; 00568526

