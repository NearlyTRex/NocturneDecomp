; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * FUN_004579c0(int param_1,int *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01b4cd30
;   undefined4 DAT_01b4cd34
;   undefined4 DAT_01b4cd7c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004579c0
        ;   Label: FUN_004579c0
    PUSH ESI                            ; 004579c1
    MOV EBX,dword ptr [0x01b4cd30]      ; 004579c2 | DAT_01b4cd30
    MOV ECX,dword ptr [ESP + 0xc]       ; 004579c8
    MOV ESI,dword ptr [ESP + 0x10]      ; 004579cc
    MOV EAX,0x1b4cd34                   ; 004579d0
    XOR EDX,EDX                         ; 004579d5
    TEST EBX,EBX                        ; 004579d7
    JLE 0x004579eb                      ; 004579d9
        ;   XREF to: 004579eb (CONDITIONAL_JUMP)  ; LAB_004579eb
    CMP ECX,dword ptr [EAX]             ; 004579db | DAT_01b4cd34 | DAT_01b4cd7c
        ;   Label: LAB_004579db
    JNZ 0x004579e3                      ; 004579dd
        ;   XREF to: 004579e3 (CONDITIONAL_JUMP)  ; LAB_004579e3
    CMP EAX,ESI                         ; 004579df
    JNZ 0x004579ed                      ; 004579e1
        ;   XREF to: 004579ed (CONDITIONAL_JUMP)  ; LAB_004579ed
    INC EDX                             ; 004579e3
        ;   Label: LAB_004579e3
    ADD EAX,0x48                        ; 004579e4 | DAT_01b4cd7c
    CMP EDX,EBX                         ; 004579e7
    JL 0x004579db                       ; 004579e9
        ;   XREF to: 004579db (CONDITIONAL_JUMP)  ; LAB_004579db
    XOR EAX,EAX                         ; 004579eb
        ;   Label: LAB_004579eb
    MOV dword ptr [0x01b4cd30],EBX      ; 004579ed | DAT_01b4cd30
        ;   Label: LAB_004579ed
    POP ESI                             ; 004579f3
    POP EBX                             ; 004579f4
    RET                                 ; 004579f5

