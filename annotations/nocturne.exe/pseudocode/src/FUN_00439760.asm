; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00439760(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_00439a70 at 00439a8a
;   FUN_00439af0 at 00439b0d
;
; Called Functions:
;   FUN_00564ce5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439760
        ;   Label: FUN_00439760
    PUSH EDI                            ; 00439761
    PUSH EBP                            ; 00439762
    MOV EDI,dword ptr [ESP + 0x10]      ; 00439763
    MOV EBP,dword ptr [ESP + 0x18]      ; 00439767
    MOV EBX,dword ptr [ESP + 0x14]      ; 0043976b
    MOV EAX,dword ptr [EDI + 0x10]      ; 0043976f
    SHL EBX,0x4                         ; 00439772
    ADD EAX,EBX                         ; 00439775
    MOV EDX,dword ptr [EAX + 0x4]       ; 00439777
    TEST EDX,EDX                        ; 0043977a
    JL 0x004397a6                       ; 0043977c
        ;   XREF to: 004397a6 (CONDITIONAL_JUMP)  ; LAB_004397a6
    PUSH ESI                            ; 0043977e
    PUSH EBP                            ; 0043977f
    PUSH EDX                            ; 00439780
    PUSH EDI                            ; 00439781
    CALL FUN_00439760                   ; 00439782
        ;   XREF to: 00439760 (UNCONDITIONAL_CALL)  ; undefined FUN_00439760()
    MOV ESI,EAX                         ; 00439787
    MOV EAX,dword ptr [EDI + 0x10]      ; 00439789
    ADD EBX,EAX                         ; 0043978c
    XOR EAX,EAX                         ; 0043978e
    ADD ESP,0xc                         ; 00439790
    MOV AL,byte ptr [EBX]               ; 00439793
    PUSH EAX                            ; 00439795
    PUSH EBP                            ; 00439796
    CALL FUN_00564ce5                   ; 00439797
        ;   XREF to: 00564ce5 (UNCONDITIONAL_CALL)  ; undefined FUN_00564ce5()
    ADD ESP,0x8                         ; 0043979c
    MOV EAX,ESI                         ; 0043979f
    POP ESI                             ; 004397a1
    POP EBP                             ; 004397a2
    POP EDI                             ; 004397a3
    POP EBX                             ; 004397a4
    RET                                 ; 004397a5
    MOV AL,byte ptr [EAX]               ; 004397a6
        ;   Label: LAB_004397a6
    AND EAX,0xff                        ; 004397a8
    PUSH EAX                            ; 004397ad
    PUSH EBP                            ; 004397ae
    CALL FUN_00564ce5                   ; 004397af
        ;   XREF to: 00564ce5 (UNCONDITIONAL_CALL)  ; undefined FUN_00564ce5()
    MOV EAX,dword ptr [EDI + 0x10]      ; 004397b4
    ADD ESP,0x8                         ; 004397b7
    MOV EAX,dword ptr [EBX + EAX*0x1]   ; 004397ba
    POP EBP                             ; 004397bd
    POP EDI                             ; 004397be
    POP EBX                             ; 004397bf
    RET                                 ; 004397c0

