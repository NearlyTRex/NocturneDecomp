; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 FUN_00580790(void)
;
;
; XREF[8]:
;   FUN_004b7f90 at 004b8d36
;   FUN_004bfee0 at 004c026a
;   FUN_004df580 at 004df580
;   FUN_004df590 at 004df590
;   FUN_004e4400 at 004e444c
;   FUN_004e8380 at 004e84b6
;   FUN_00532b80 at 00533b60
;   FUN_0057a0e0 at 0057a2c8
;
; Referenced Globals:
;   undefined4 DAT_02d20328
;   undefined4 DAT_02d2032c
;   undefined4 DAT_02d21b80
;
; Called Functions:
;   FUN_0057a8a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00580790
        ;   Label: FUN_00580790
    PUSH EDI                            ; 00580791
    PUSH EBP                            ; 00580792
    MOV EAX,[0x02d20328]                ; 00580793 | DAT_02d20328
    MOV EDX,dword ptr [0x02d2032c]      ; 00580798 | DAT_02d2032c
    XOR EBX,EBX                         ; 0058079e
    CMP EAX,EDX                         ; 005807a0
    JNZ 0x005807bf                      ; 005807a2
        ;   XREF to: 005807bf (CONDITIONAL_JUMP)  ; LAB_005807bf
    CMP dword ptr [0x02d21b80],0x0      ; 005807a4 | DAT_02d21b80
        ;   Label: LAB_005807a4
    JNZ 0x005807bf                      ; 005807ab
        ;   XREF to: 005807bf (CONDITIONAL_JUMP)  ; LAB_005807bf
    CALL FUN_0057a8a0                   ; 005807ad
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057a8a0()
    MOV EAX,[0x02d20328]                ; 005807b2 | DAT_02d20328
    CMP EAX,dword ptr [0x02d2032c]      ; 005807b7 | DAT_02d2032c
    JZ 0x005807a4                       ; 005807bd
        ;   XREF to: 005807a4 (CONDITIONAL_JUMP)  ; LAB_005807a4
    MOV EDI,dword ptr [0x02d2032c]      ; 005807bf | DAT_02d2032c
        ;   Label: LAB_005807bf
    MOV EAX,[0x02d20328]                ; 005807c5 | DAT_02d20328
    CMP EAX,EDI                         ; 005807ca
    JZ 0x005807e3                       ; 005807cc
        ;   XREF to: 005807e3 (CONDITIONAL_JUMP)  ; LAB_005807e3
    LEA EBP,[EAX + 0x1]                 ; 005807ce
    MOV EBX,dword ptr [EAX*0x4 + 0x2d202d8] ; 005807d1
    MOV dword ptr [0x02d20328],EBP      ; 005807d8 | DAT_02d20328
    CMP EBP,0x14                        ; 005807de
    JGE 0x005807e9                      ; 005807e1
        ;   XREF to: 005807e9 (CONDITIONAL_JUMP)  ; LAB_005807e9
    MOV AL,BL                           ; 005807e3
        ;   Label: LAB_005807e3
    POP EBP                             ; 005807e5
    POP EDI                             ; 005807e6
    POP EBX                             ; 005807e7
    RET                                 ; 005807e8
    XOR EDX,EDX                         ; 005807e9
        ;   Label: LAB_005807e9
    MOV dword ptr [0x02d20328],EDX      ; 005807eb | DAT_02d20328
    MOV AL,BL                           ; 005807f1
    POP EBP                             ; 005807f3
    POP EDI                             ; 005807f4
    POP EBX                             ; 005807f5
    RET                                 ; 005807f6

