; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0057dca0(int param_1,undefined4 param_2,int param_3)
;
;
; XREF[3]:
;   FUN_00402940 at 00402a54
;   FUN_00441f50 at 0044206e
;   FUN_004bb9b0 at 004bbcf5
;
; Called Functions:
;   FUN_005b9690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057dca0
        ;   Label: FUN_0057dca0
    PUSH ESI                            ; 0057dca1
    PUSH EDI                            ; 0057dca2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0057dca3
    MOV EDX,dword ptr [EBX + 0x4]       ; 0057dca7
    TEST EDX,EDX                        ; 0057dcaa
    JNZ 0x0057dcb7                      ; 0057dcac
        ;   XREF to: 0057dcb7 (CONDITIONAL_JUMP)  ; LAB_0057dcb7
    MOV EAX,0xfffffffe                  ; 0057dcae
        ;   Label: LAB_0057dcae
    POP EDI                             ; 0057dcb3
    POP ESI                             ; 0057dcb4
    POP EBX                             ; 0057dcb5
    RET                                 ; 0057dcb6
    PUSH EDX                            ; 0057dcb7
        ;   Label: LAB_0057dcb7
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0057dcb8
    PUSH ESI                            ; 0057dcbc
    PUSH 0x1                            ; 0057dcbd
    MOV EDI,dword ptr [ESP + 0x20]      ; 0057dcbf
    PUSH EDI                            ; 0057dcc3
    CALL FUN_005b9690                   ; 0057dcc4
        ;   XREF to: 005b9690 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9690()
    ADD ESP,0x10                        ; 0057dcc9
    MOV EDX,EAX                         ; 0057dccc
    CMP EAX,ESI                         ; 0057dcce
    JZ 0x0057dcdb                       ; 0057dcd0
        ;   XREF to: 0057dcdb (CONDITIONAL_JUMP)  ; LAB_0057dcdb
    MOV EAX,dword ptr [EBX + 0x4]       ; 0057dcd2
    TEST byte ptr [EAX + 0xc],0x20      ; 0057dcd5
    JNZ 0x0057dcae                      ; 0057dcd9
        ;   XREF to: 0057dcae (CONDITIONAL_JUMP)  ; LAB_0057dcae
    MOV EAX,EDX                         ; 0057dcdb
        ;   Label: LAB_0057dcdb
    POP EDI                             ; 0057dcdd
    POP ESI                             ; 0057dcde
    POP EBX                             ; 0057dcdf
    RET                                 ; 0057dce0

