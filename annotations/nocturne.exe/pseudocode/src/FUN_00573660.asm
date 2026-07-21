; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00573660(char *param_1,int param_2)
;
;
; XREF[1]:
;   FUN_005729e8 at 00572a04
;
; Referenced Globals:
;   void* PTR_FUN_005c1ac0 = 005671e4
;   void* PTR_FUN_005c1ac4 = 005671e4
;
; Called Functions:
;   crt_stdio.c_fputc_FUN_00566cc0
;   FUN_005671e4
;   FUN_00568890
;   FUN_00568ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573660
        ;   Label: FUN_00573660
    PUSH ESI                            ; 00573661
    PUSH EDI                            ; 00573662
    PUSH EBP                            ; 00573663
    SUB ESP,0x4                         ; 00573664
    MOV EBX,dword ptr [ESP + 0x18]      ; 00573667
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0057366b
    MOV EDX,dword ptr [ESI + 0x10]      ; 0057366f
    PUSH EDX                            ; 00573672
    CALL dword ptr [0x005c1ac0]         ; 00573673 | PTR_FUN_005c1ac0
    MOV EAX,dword ptr [ESI + 0x8]       ; 00573679
    MOV ECX,dword ptr [EAX + 0x8]       ; 0057367c
    ADD ESP,0x4                         ; 0057367f
    TEST ECX,ECX                        ; 00573682
    JNZ 0x0057368f                      ; 00573684
        ;   XREF to: 0057368f (CONDITIONAL_JUMP)  ; LAB_0057368f
    PUSH ESI                            ; 00573686
    CALL FUN_00568ed0                   ; 00573687
        ;   XREF to: 00568ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_00568ed0()
    ADD ESP,0x4                         ; 0057368c
    MOV AH,byte ptr [ESI + 0xd]         ; 0057368f
        ;   Label: LAB_0057368f
    XOR EBP,EBP                         ; 00573692
    TEST AH,0x4                         ; 00573694
    JZ 0x005736ae                       ; 00573697
        ;   XREF to: 005736ae (CONDITIONAL_JUMP)  ; LAB_005736ae
    MOV DL,AH                           ; 00573699
    AND DL,0xf9                         ; 0057369b
    MOV byte ptr [ESI + 0xd],DL         ; 0057369e
    MOV DH,DL                           ; 005736a1
    OR DH,0x2                           ; 005736a3
    MOV EBP,0x1                         ; 005736a6
    MOV byte ptr [ESI + 0xd],DH         ; 005736ab
    MOV dword ptr [ESP],EBX             ; 005736ae
        ;   Label: LAB_005736ae
    XOR EDI,EDI                         ; 005736b1
    XOR EAX,EAX                         ; 005736b3
        ;   Label: LAB_005736b3
    MOV AL,byte ptr [EBX]               ; 005736b5
    TEST EAX,EAX                        ; 005736b7
    JZ 0x005736cd                       ; 005736b9
        ;   XREF to: 005736cd (CONDITIONAL_JUMP)  ; LAB_005736cd
    PUSH ESI                            ; 005736bb
    PUSH EAX                            ; 005736bc
    INC EBX                             ; 005736bd
    CALL crt_stdio.c_fputc_FUN_00566cc0 ; 005736be
        ;   XREF to: 00566cc0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_00566cc0()
    ADD ESP,0x8                         ; 005736c3
    CMP EAX,-0x1                        ; 005736c6
    JNZ 0x005736b3                      ; 005736c9
        ;   XREF to: 005736b3 (CONDITIONAL_JUMP)  ; LAB_005736b3
    MOV EDI,EAX                         ; 005736cb
    TEST EBP,EBP                        ; 005736cd
        ;   Label: LAB_005736cd
    JZ 0x005736f1                       ; 005736cf
        ;   XREF to: 005736f1 (CONDITIONAL_JUMP)  ; LAB_005736f1
    MOV CL,byte ptr [ESI + 0xd]         ; 005736d1
    AND CL,0xf9                         ; 005736d4
    MOV byte ptr [ESI + 0xd],CL         ; 005736d7
    MOV CH,CL                           ; 005736da
    OR CH,0x4                           ; 005736dc
    MOV byte ptr [ESI + 0xd],CH         ; 005736df
    TEST EDI,EDI                        ; 005736e2
    JNZ 0x005736f1                      ; 005736e4
        ;   XREF to: 005736f1 (CONDITIONAL_JUMP)  ; LAB_005736f1
    PUSH ESI                            ; 005736e6
    CALL FUN_00568890                   ; 005736e7
        ;   XREF to: 00568890 (UNCONDITIONAL_CALL)  ; undefined FUN_00568890()
    ADD ESP,0x4                         ; 005736ec
    MOV EDI,EAX                         ; 005736ef
    TEST EDI,EDI                        ; 005736f1
        ;   Label: LAB_005736f1
    JNZ 0x005736fc                      ; 005736f3
        ;   XREF to: 005736fc (CONDITIONAL_JUMP)  ; LAB_005736fc
    MOV EDI,dword ptr [ESP]             ; 005736f5
    SUB EBX,EDI                         ; 005736f8
    MOV EDI,EBX                         ; 005736fa
    MOV EBP,dword ptr [ESI + 0x10]      ; 005736fc
        ;   Label: LAB_005736fc
    PUSH EBP                            ; 005736ff
    CALL dword ptr [0x005c1ac4]         ; 00573700 | PTR_FUN_005c1ac4
    ADD ESP,0x4                         ; 00573706
    MOV EAX,EDI                         ; 00573709
    ADD ESP,0x4                         ; 0057370b
    POP EBP                             ; 0057370e
    POP EDI                             ; 0057370f
    POP ESI                             ; 00573710
    POP EBX                             ; 00573711
    RET                                 ; 00573712

