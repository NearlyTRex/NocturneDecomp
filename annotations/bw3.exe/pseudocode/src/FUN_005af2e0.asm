; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_005af2e0(char *param_1,char *param_2,int param_3)
;
;
; XREF[1]:
;   FUN_005ac930 at 005ac950
;
; Referenced Globals:
;   undefined4 DAT_02d25930
;
; Called Functions:
;   FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005af2e0
        ;   Label: FUN_005af2e0
    PUSH ESI                            ; 005af2e1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005af2e2
    MOV EAX,dword ptr [ESP + 0x10]      ; 005af2e6
    MOV EBX,dword ptr [ESP + 0x14]      ; 005af2ea
    MOV EDX,ESI                         ; 005af2ee
    TEST EBX,EBX                        ; 005af2f0
    JBE 0x005af305                      ; 005af2f2
        ;   XREF to: 005af305 (CONDITIONAL_JUMP)  ; LAB_005af305
    CMP byte ptr [EAX],0x0              ; 005af2f4
        ;   Label: LAB_005af2f4
    JZ 0x005af305                       ; 005af2f7
        ;   XREF to: 005af305 (CONDITIONAL_JUMP)  ; LAB_005af305
    INC EDX                             ; 005af2f9
    MOV CL,byte ptr [EAX]               ; 005af2fa
    INC EAX                             ; 005af2fc
    DEC EBX                             ; 005af2fd
    MOV byte ptr [EDX + -0x1],CL        ; 005af2fe
    TEST EBX,EBX                        ; 005af301
    JA 0x005af2f4                       ; 005af303
        ;   XREF to: 005af2f4 (CONDITIONAL_JUMP)  ; LAB_005af2f4
    CMP byte ptr [EAX],0x0              ; 005af305
        ;   Label: LAB_005af305
    JZ 0x005af332                       ; 005af308
        ;   XREF to: 005af332 (CONDITIONAL_JUMP)  ; LAB_005af332
    CMP EDX,ESI                         ; 005af30a
    JBE 0x005af332                      ; 005af30c
        ;   XREF to: 005af332 (CONDITIONAL_JUMP)  ; LAB_005af332
    CMP dword ptr [0x02d25930],0x0      ; 005af30e | DAT_02d25930
    JZ 0x005af332                       ; 005af315
        ;   XREF to: 005af332 (CONDITIONAL_JUMP)  ; LAB_005af332
    MOV AL,byte ptr [EAX + -0x1]        ; 005af317
    AND EAX,0xff                        ; 005af31a
    MOV AL,byte ptr [EAX + 0x2d25941]   ; 005af31f
    AND AL,0x1                          ; 005af325
    AND EAX,0xff                        ; 005af327
    JZ 0x005af332                       ; 005af32c
        ;   XREF to: 005af332 (CONDITIONAL_JUMP)  ; LAB_005af332
    MOV byte ptr [EDX + -0x1],0x0       ; 005af32e
    TEST EBX,EBX                        ; 005af332
        ;   Label: LAB_005af332
    JBE 0x005af342                      ; 005af334
        ;   XREF to: 005af342 (CONDITIONAL_JUMP)  ; LAB_005af342
    PUSH EBX                            ; 005af336
    PUSH 0x0                            ; 005af337
    PUSH EDX                            ; 005af339
    CALL FUN_005a28f0                   ; 005af33a
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    ADD ESP,0xc                         ; 005af33f
    MOV EAX,ESI                         ; 005af342
        ;   Label: LAB_005af342
    POP ESI                             ; 005af344
    POP EBX                             ; 005af345
    RET                                 ; 005af346

