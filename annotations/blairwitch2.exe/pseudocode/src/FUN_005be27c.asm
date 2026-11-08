; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005be27c(uint param_1)
;
;
; XREF[2]:
;   FUN_005b8280 at 005b82ac
;   FUN_005be270 at 005be272
;
; Referenced Globals:
;   void* PTR_FUN_0061f2b8 = 005bce04
;   void* PTR_FUN_0061f2bc = 005bce04
;   undefined4 DAT_02680160
;
; Called Functions:
;   FUN_005bce04
;   FUN_005bea80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005be27c
        ;   Label: FUN_005be27c
    PUSH ESI                            ; 005be27d
    PUSH EDI                            ; 005be27e
    MOV EDI,dword ptr [ESP + 0x10]      ; 005be27f
    CALL dword ptr [0x0061f2b8]         ; 005be283 | PTR_FUN_0061f2b8
    MOV EBX,dword ptr [0x02680160]      ; 005be289 | DAT_02680160
    XOR ESI,ESI                         ; 005be28f
    TEST EBX,EBX                        ; 005be291
    JZ 0x005be2b5                       ; 005be293
        ;   XREF to: 005be2b5 (CONDITIONAL_JUMP)  ; LAB_005be2b5
    MOV EAX,dword ptr [EBX + 0x4]       ; 005be295
        ;   Label: LAB_005be295
    TEST dword ptr [EAX + 0xc],EDI      ; 005be298
    JZ 0x005be2af                       ; 005be29b
        ;   XREF to: 005be2af (CONDITIONAL_JUMP)  ; LAB_005be2af
    MOV DL,byte ptr [EAX + 0xd]         ; 005be29d
    INC ESI                             ; 005be2a0
    TEST DL,0x10                        ; 005be2a1
    JZ 0x005be2af                       ; 005be2a4
        ;   XREF to: 005be2af (CONDITIONAL_JUMP)  ; LAB_005be2af
    PUSH EAX                            ; 005be2a6
    CALL FUN_005bea80                   ; 005be2a7
        ;   XREF to: 005bea80 (UNCONDITIONAL_CALL)  ; undefined FUN_005bea80()
    ADD ESP,0x4                         ; 005be2ac
    MOV EBX,dword ptr [EBX]             ; 005be2af
        ;   Label: LAB_005be2af
    TEST EBX,EBX                        ; 005be2b1
    JNZ 0x005be295                      ; 005be2b3
        ;   XREF to: 005be295 (CONDITIONAL_JUMP)  ; LAB_005be295
    CALL dword ptr [0x0061f2bc]         ; 005be2b5 | PTR_FUN_0061f2bc
        ;   Label: LAB_005be2b5
    MOV EAX,ESI                         ; 005be2bb
    POP EDI                             ; 005be2bd
    POP ESI                             ; 005be2be
    POP EBX                             ; 005be2bf
    RET                                 ; 005be2c0

