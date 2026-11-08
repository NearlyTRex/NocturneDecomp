; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004c7da0(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d9452
;   undefined4 DAT_006167e0
;
; Called Functions:
;   FUN_004c97e0
;   FUN_004c9810
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004c7da0
        ;   Label: FUN_004c7da0
    PUSH EBP                            ; 004c7da1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c7da2
    MOV ECX,dword ptr [ESP + 0x10]      ; 004c7da6
    FLD float ptr [ECX + 0x4]           ; 004c7daa
    FCOMP double ptr [0x005d9452]       ; 004c7dad | DAT_005d9452
    FNSTSW AX                           ; 004c7db3
    SAHF                                ; 004c7db5
    JBE 0x004c7dd4                      ; 004c7db6
        ;   XREF to: 004c7dd4 (CONDITIONAL_JUMP)  ; LAB_004c7dd4
    MOV EDI,dword ptr [EDX + 0x40]      ; 004c7db8
    PUSH EDI                            ; 004c7dbb
    PUSH EDX                            ; 004c7dbc
    MOV EBP,dword ptr [0x006167e0]      ; 004c7dbd | DAT_006167e0
    PUSH EBP                            ; 004c7dc3
    CALL FUN_004c97e0                   ; 004c7dc4
        ;   XREF to: 004c97e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c97e0()
    ADD ESP,0xc                         ; 004c7dc9
    MOV EAX,0x1                         ; 004c7dcc
    POP EBP                             ; 004c7dd1
    POP EDI                             ; 004c7dd2
    RET                                 ; 004c7dd3
    PUSH ESI                            ; 004c7dd4
        ;   Label: LAB_004c7dd4
    PUSH EBX                            ; 004c7dd5
    MOV EBX,dword ptr [EDX + 0x40]      ; 004c7dd6
    PUSH EBX                            ; 004c7dd9
    PUSH ECX                            ; 004c7dda
    PUSH EDX                            ; 004c7ddb
    MOV ESI,dword ptr [0x006167e0]      ; 004c7ddc | DAT_006167e0
    PUSH ESI                            ; 004c7de2
    CALL FUN_004c9810                   ; 004c7de3
        ;   XREF to: 004c9810 (UNCONDITIONAL_CALL)  ; undefined FUN_004c9810()
    ADD ESP,0x10                        ; 004c7de8
    POP EBX                             ; 004c7deb
    POP ESI                             ; 004c7dec
    MOV EAX,0x1                         ; 004c7ded
    POP EBP                             ; 004c7df2
    POP EDI                             ; 004c7df3
    RET                                 ; 004c7df4

