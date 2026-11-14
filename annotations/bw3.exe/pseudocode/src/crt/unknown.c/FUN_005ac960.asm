; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005ac960(byte *param_1,int param_2)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005a50e0 at 005a5119
;   crt_unknown.c_FUN_005ac930 at 005ac940
;
; Referenced Globals:
;   undefined4 DAT_02d25930
;
; Called Functions:
;   crt_unknown.c_FUN_005aca00
;   crt_unknown.c_FUN_005aca50
;   crt_unknown.c_FUN_005af2a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ac960
        ;   Label: crt_unknown.c_FUN_005ac960
    PUSH ESI                            ; 005ac961
    PUSH EDI                            ; 005ac962
    MOV EBX,dword ptr [ESP + 0x10]      ; 005ac963
    MOV EDI,dword ptr [ESP + 0x14]      ; 005ac967
    XOR ESI,ESI                         ; 005ac96b
    PUSH EBX                            ; 005ac96d
        ;   Label: LAB_005ac96d
    CALL crt_unknown.c_FUN_005af2a0     ; 005ac96e
        ;   XREF to: 005af2a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005af2a0()
    ADD ESP,0x4                         ; 005ac973
    TEST EAX,EAX                        ; 005ac976
    JNZ 0x005ac9ba                      ; 005ac978
        ;   XREF to: 005ac9ba (CONDITIONAL_JUMP)  ; LAB_005ac9ba
    TEST EDI,EDI                        ; 005ac97a
    JBE 0x005ac9ba                      ; 005ac97c
        ;   XREF to: 005ac9ba (CONDITIONAL_JUMP)  ; LAB_005ac9ba
    CMP dword ptr [0x02d25930],0x0      ; 005ac97e | DAT_02d25930
    JZ 0x005ac9ab                       ; 005ac985
        ;   XREF to: 005ac9ab (CONDITIONAL_JUMP)  ; LAB_005ac9ab
    MOV AL,byte ptr [EBX]               ; 005ac987
    MOV AL,byte ptr [EAX + 0x2d25941]   ; 005ac989
    AND AL,0x1                          ; 005ac98f
    AND EAX,0xff                        ; 005ac991
    JZ 0x005ac9ab                       ; 005ac996
        ;   XREF to: 005ac9ab (CONDITIONAL_JUMP)  ; LAB_005ac9ab
    CMP byte ptr [EBX + 0x1],0x0        ; 005ac998
    JZ 0x005ac9ba                       ; 005ac99c
        ;   XREF to: 005ac9ba (CONDITIONAL_JUMP)  ; LAB_005ac9ba
    PUSH EBX                            ; 005ac99e
    CALL crt_unknown.c_FUN_005aca50     ; 005ac99f
        ;   XREF to: 005aca50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aca50()
    ADD ESP,0x4                         ; 005ac9a4
    ADD ESI,EAX                         ; 005ac9a7
    JMP 0x005ac9ac                      ; 005ac9a9
        ;   XREF to: 005ac9ac (UNCONDITIONAL_JUMP)  ; LAB_005ac9ac
    INC ESI                             ; 005ac9ab
        ;   Label: LAB_005ac9ab
    PUSH EBX                            ; 005ac9ac
        ;   Label: LAB_005ac9ac
    CALL crt_unknown.c_FUN_005aca00     ; 005ac9ad
        ;   XREF to: 005aca00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aca00()
    DEC EDI                             ; 005ac9b2
    MOV EBX,EAX                         ; 005ac9b3
    ADD ESP,0x4                         ; 005ac9b5
    JMP 0x005ac96d                      ; 005ac9b8
        ;   XREF to: 005ac96d (UNCONDITIONAL_JUMP)  ; LAB_005ac96d
    MOV EAX,ESI                         ; 005ac9ba
        ;   Label: LAB_005ac9ba
    POP EDI                             ; 005ac9bc
    POP ESI                             ; 005ac9bd
    POP EBX                             ; 005ac9be
    RET                                 ; 005ac9bf

