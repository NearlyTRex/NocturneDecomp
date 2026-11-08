; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00531090(undefined4 param_1)
;
;
; XREF[41]:
;   FUN_00478b40 at 00478bc6
;   FUN_00494fd0 at 0049513c
;   FUN_004958d0 at 004959e7
;   FUN_0049a620 at 0049a6a6
;   FUN_004bbd10 at 004bbeac
;   FUN_004be0f0 at 004be8d8
;   FUN_004ccc40 at 004cccac
;   FUN_004ce580 at 004cef37
;   FUN_004cf5e0 at 004cfc20
;   FUN_004d1a80 at 004d2225
;   ... and 31 more
;
; Referenced Globals:
;   undefined4 DAT_01d7f1bc
;   undefined4 DAT_01d7f1c0
;
; Called Functions:
;   FUN_00531010
;   FUN_005c0f80
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00531090
        ;   Label: FUN_00531090
    PUSH EBP                            ; 00531091
    MOV EDI,dword ptr [ESP + 0xc]       ; 00531092
    CMP dword ptr [0x01d7f1bc],0x0      ; 00531096 | DAT_01d7f1bc
    JZ 0x005310b3                       ; 0053109d
        ;   XREF to: 005310b3 (CONDITIONAL_JUMP)  ; LAB_005310b3
    PUSH ESI                            ; 0053109f
    PUSH EBX                            ; 005310a0
    MOV EBX,dword ptr [0x01d7f1c0]      ; 005310a1 | DAT_01d7f1c0
    DEC EBX                             ; 005310a7
    TEST EBX,EBX                        ; 005310a8
    JGE 0x005310b8                      ; 005310aa
        ;   XREF to: 005310b8 (CONDITIONAL_JUMP)  ; LAB_005310b8
    MOV EAX,EDI                         ; 005310ac
    POP EBX                             ; 005310ae
    POP ESI                             ; 005310af
    POP EBP                             ; 005310b0
    POP EDI                             ; 005310b1
    RET                                 ; 005310b2
    MOV EAX,EDI                         ; 005310b3
        ;   Label: LAB_005310b3
    POP EBP                             ; 005310b5
    POP EDI                             ; 005310b6
    RET                                 ; 005310b7
    MOV EDX,EBX                         ; 005310b8
        ;   Label: LAB_005310b8
    MOV EAX,EBX                         ; 005310ba
    SAR EDX,0x1f                        ; 005310bc
    SUB EAX,EDX                         ; 005310bf
    SAR EAX,0x1                         ; 005310c1
    MOV ESI,EAX                         ; 005310c3
    LEA EBP,[EAX*0x4 + 0x0]             ; 005310c5
    MOV ECX,dword ptr [EBP + 0x1d7f1c4] ; 005310cc
    PUSH ECX                            ; 005310d2
    PUSH EDI                            ; 005310d3
    CALL FUN_005c0f80                   ; 005310d4
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0f80()
    ADD ESP,0x8                         ; 005310d9
    TEST EAX,EAX                        ; 005310dc
    JL 0x005310ed                       ; 005310de
        ;   XREF to: 005310ed (CONDITIONAL_JUMP)  ; LAB_005310ed
    JG 0x005310ff                       ; 005310e0
        ;   XREF to: 005310ff (CONDITIONAL_JUMP)  ; LAB_005310ff
    MOV EAX,dword ptr [EBP + 0x1d7f994] ; 005310e2
    POP EBX                             ; 005310e8
    POP ESI                             ; 005310e9
    POP EBP                             ; 005310ea
    POP EDI                             ; 005310eb
    RET                                 ; 005310ec
    DEC ESI                             ; 005310ed
        ;   Label: LAB_005310ed
    PUSH ESI                            ; 005310ee
    PUSH 0x0                            ; 005310ef
    PUSH EDI                            ; 005310f1
    CALL FUN_00531010                   ; 005310f2
        ;   XREF to: 00531010 (UNCONDITIONAL_CALL)  ; undefined FUN_00531010()
    ADD ESP,0xc                         ; 005310f7
    POP EBX                             ; 005310fa
    POP ESI                             ; 005310fb
    POP EBP                             ; 005310fc
    POP EDI                             ; 005310fd
    RET                                 ; 005310fe
    PUSH EBX                            ; 005310ff
        ;   Label: LAB_005310ff
    INC ESI                             ; 00531100
    PUSH ESI                            ; 00531101
    PUSH EDI                            ; 00531102
    CALL FUN_00531010                   ; 00531103
        ;   XREF to: 00531010 (UNCONDITIONAL_CALL)  ; undefined FUN_00531010()
    ADD ESP,0xc                         ; 00531108
    POP EBX                             ; 0053110b
    POP ESI                             ; 0053110c
    POP EBP                             ; 0053110d
    POP EDI                             ; 0053110e
    RET                                 ; 0053110f

