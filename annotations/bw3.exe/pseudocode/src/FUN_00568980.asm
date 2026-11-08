; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00568980(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01548bfc
;
; Called Functions:
;   FUN_0040c790
;   FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568980
        ;   Label: FUN_00568980
    PUSH EBP                            ; 00568981
    MOV EBX,dword ptr [ESP + 0xc]       ; 00568982
    MOV EDX,dword ptr [0x01548bfc]      ; 00568986 | DAT_01548bfc
    PUSH EDX                            ; 0056898c
    MOV ECX,dword ptr [EBX + 0x6e8]     ; 0056898d
    PUSH ECX                            ; 00568993
    CALL FUN_0040c840                   ; 00568994
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 00568999
    TEST EAX,EAX                        ; 0056899c
    JZ 0x005689a9                       ; 0056899e
        ;   XREF to: 005689a9 (CONDITIONAL_JUMP)  ; LAB_005689a9
    CMP dword ptr [EAX + 0x184],0x0     ; 005689a0
    JNZ 0x005689bb                      ; 005689a7
        ;   XREF to: 005689bb (CONDITIONAL_JUMP)  ; LAB_005689bb
    CMP dword ptr [EBX + 0x314],0x3     ; 005689a9
        ;   Label: LAB_005689a9
    JNZ 0x005689c0                      ; 005689b0
        ;   XREF to: 005689c0 (CONDITIONAL_JUMP)  ; LAB_005689c0
    MOV EAX,dword ptr [EBX + 0x314]     ; 005689b2
        ;   Label: LAB_005689b2
    POP EBP                             ; 005689b8
    POP EBX                             ; 005689b9
    RET                                 ; 005689ba
    XOR EAX,EAX                         ; 005689bb
        ;   Label: LAB_005689bb
    POP EBP                             ; 005689bd
    POP EBX                             ; 005689be
    RET                                 ; 005689bf
    PUSH 0x5d5cbf                       ; 005689c0
        ;   Label: LAB_005689c0
    MOV EBP,dword ptr [ESP + 0x14]      ; 005689c5
    PUSH EBP                            ; 005689c9
    CALL FUN_0040c790                   ; 005689ca
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 005689cf
    TEST EAX,EAX                        ; 005689d2
    JNZ 0x005689b2                      ; 005689d4
        ;   XREF to: 005689b2 (CONDITIONAL_JUMP)  ; LAB_005689b2
    POP EBP                             ; 005689d6
    POP EBX                             ; 005689d7
    RET                                 ; 005689d8

