; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0049dea0(byte *param_1,byte *param_2,int param_3)
;
;
; XREF[8]:
;   FUN_00435380 at 0043540f
;   FUN_0049a300 at 0049a41d
;   FUN_004de100 at 004de1bf
;   FUN_0053cb50 at 0053cbf8
;   FUN_00544460 at 00549242
;   FUN_0057b6e0 at 0057b712
;   FUN_0057be00 at 0057be46
;   FUN_0059bdf0 at 0059be25
;
; Called Functions:
;   FUN_005c0820
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049dea0
        ;   Label: FUN_0049dea0
    PUSH ESI                            ; 0049dea1
    PUSH EDI                            ; 0049dea2
    PUSH EBP                            ; 0049dea3
    MOV EAX,dword ptr [ESP + 0x14]      ; 0049dea4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0049dea8
    MOV EBX,dword ptr [ESP + 0x18]      ; 0049deac
    MOV DL,byte ptr [EAX]               ; 0049deb0
    MOV ESI,EAX                         ; 0049deb2
    TEST DL,DL                          ; 0049deb4
    JZ 0x0049ded5                       ; 0049deb6
        ;   XREF to: 0049ded5 (CONDITIONAL_JUMP)  ; LAB_0049ded5
    MOV AL,byte ptr [ESI]               ; 0049deb8
        ;   Label: LAB_0049deb8
    CMP AL,0x2a                         ; 0049deba
    JNC 0x0049df3a                      ; 0049debc
        ;   XREF to: 0049df3a (CONDITIONAL_JUMP)  ; LAB_0049df3a
    TEST EBP,EBP                        ; 0049dec2
        ;   Label: LAB_0049dec2
    JZ 0x0049df13                       ; 0049dec4
        ;   XREF to: 0049df13 (CONDITIONAL_JUMP)  ; LAB_0049df13
    MOV AL,byte ptr [ESI]               ; 0049dec6
    CMP AL,byte ptr [EBX]               ; 0049dec8
    JNZ 0x0049df0c                      ; 0049deca
        ;   XREF to: 0049df0c (CONDITIONAL_JUMP)  ; LAB_0049df0c
    INC EBX                             ; 0049decc
        ;   Label: LAB_0049decc
    MOV DH,byte ptr [ESI + 0x1]         ; 0049decd
    INC ESI                             ; 0049ded0
    TEST DH,DH                          ; 0049ded1
    JNZ 0x0049deb8                      ; 0049ded3
        ;   XREF to: 0049deb8 (CONDITIONAL_JUMP)  ; LAB_0049deb8
    CMP byte ptr [EBX],0x0              ; 0049ded5
        ;   Label: LAB_0049ded5
    SETZ AL                             ; 0049ded8
    AND EAX,0xff                        ; 0049dedb
    POP EBP                             ; 0049dee0
        ;   Label: LAB_0049dee0
    POP EDI                             ; 0049dee1
    POP ESI                             ; 0049dee2
    POP EBX                             ; 0049dee3
    RET                                 ; 0049dee4
    INC ESI                             ; 0049dee5
        ;   Label: LAB_0049dee5
    PUSH EBP                            ; 0049dee6
        ;   Label: LAB_0049dee6
    PUSH EBX                            ; 0049dee7
    PUSH ESI                            ; 0049dee8
    CALL FUN_0049dea0                   ; 0049dee9
        ;   XREF to: 0049dea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049dea0()
    ADD ESP,0xc                         ; 0049deee
    TEST EAX,EAX                        ; 0049def1
    JNZ 0x0049defd                      ; 0049def3
        ;   XREF to: 0049defd (CONDITIONAL_JUMP)  ; LAB_0049defd
    CMP byte ptr [EBX],0x0              ; 0049def5
    JZ 0x0049dee0                       ; 0049def8
        ;   XREF to: 0049dee0 (CONDITIONAL_JUMP)  ; LAB_0049dee0
    INC EBX                             ; 0049defa
    JMP 0x0049dee6                      ; 0049defb
        ;   XREF to: 0049dee6 (UNCONDITIONAL_JUMP)  ; LAB_0049dee6
    MOV EAX,0x1                         ; 0049defd
        ;   Label: LAB_0049defd
    POP EBP                             ; 0049df02
    POP EDI                             ; 0049df03
    POP ESI                             ; 0049df04
    POP EBX                             ; 0049df05
    RET                                 ; 0049df06
    CMP byte ptr [EBX],0x0              ; 0049df07
        ;   Label: LAB_0049df07
    JNZ 0x0049decc                      ; 0049df0a
        ;   XREF to: 0049decc (CONDITIONAL_JUMP)  ; LAB_0049decc
    XOR EAX,EAX                         ; 0049df0c
        ;   Label: LAB_0049df0c
    POP EBP                             ; 0049df0e
    POP EDI                             ; 0049df0f
    POP ESI                             ; 0049df10
    POP EBX                             ; 0049df11
    RET                                 ; 0049df12
    XOR EAX,EAX                         ; 0049df13
        ;   Label: LAB_0049df13
    MOV AL,byte ptr [ESI]               ; 0049df15
    PUSH EAX                            ; 0049df17
    CALL FUN_005c0820                   ; 0049df18
        ;   XREF to: 005c0820 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0820()
    MOV EDI,EAX                         ; 0049df1d
    XOR EAX,EAX                         ; 0049df1f
    ADD ESP,0x4                         ; 0049df21
    MOV AL,byte ptr [EBX]               ; 0049df24
    PUSH EAX                            ; 0049df26
    CALL FUN_005c0820                   ; 0049df27
        ;   XREF to: 005c0820 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0820()
    ADD ESP,0x4                         ; 0049df2c
    CMP EDI,EAX                         ; 0049df2f
    JZ 0x0049decc                       ; 0049df31
        ;   XREF to: 0049decc (CONDITIONAL_JUMP)  ; LAB_0049decc
    XOR EAX,EAX                         ; 0049df33
    POP EBP                             ; 0049df35
    POP EDI                             ; 0049df36
    POP ESI                             ; 0049df37
    POP EBX                             ; 0049df38
    RET                                 ; 0049df39
    JBE 0x0049dee5                      ; 0049df3a
        ;   XREF to: 0049dee5 (CONDITIONAL_JUMP)  ; LAB_0049dee5
        ;   Label: LAB_0049df3a
    CMP AL,0x3f                         ; 0049df3c
    JZ 0x0049df07                       ; 0049df3e
        ;   XREF to: 0049df07 (CONDITIONAL_JUMP)  ; LAB_0049df07
    JMP 0x0049dec2                      ; 0049df40
        ;   XREF to: 0049dec2 (UNCONDITIONAL_JUMP)  ; LAB_0049dec2

