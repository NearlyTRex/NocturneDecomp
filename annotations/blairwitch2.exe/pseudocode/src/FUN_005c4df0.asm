; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c4df0(int param_1,undefined4 param_2)
;
;
; XREF[3]:
;   FUN_005c4fb8 at 005c4fd8
;   FUN_005c4ff8 at 005c5062
;   FUN_005c50b8 at 005c5107
;
; Referenced Globals:
;   void* PTR_FUN_0061f2a4 = 005bcdfc
;   undefined4 DAT_0061f764
;
; Called Functions:
;   FUN_005bcdfc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c4df0
        ;   Label: FUN_005c4df0
    PUSH ESI                            ; 005c4df1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c4df2
    CMP EBX,0x7                         ; 005c4df6
    JZ 0x005c4e00                       ; 005c4df9
        ;   XREF to: 005c4e00 (CONDITIONAL_JUMP)  ; LAB_005c4e00
    CMP EBX,0x4                         ; 005c4dfb
    JNZ 0x005c4e1c                      ; 005c4dfe
        ;   XREF to: 005c4e1c (CONDITIONAL_JUMP)  ; LAB_005c4e1c
    LEA EAX,[EBX*0x8 + 0x0]             ; 005c4e00
        ;   Label: LAB_005c4e00
    MOV ESI,dword ptr [ESP + 0x10]      ; 005c4e07
    MOV EBX,dword ptr [EAX + 0x61f764]  ; 005c4e0b | DAT_0061f764
    MOV dword ptr [EAX + 0x61f764],ESI  ; 005c4e11 | DAT_0061f764
    MOV EAX,EBX                         ; 005c4e17
    POP ESI                             ; 005c4e19
    POP EBX                             ; 005c4e1a
    RET                                 ; 005c4e1b
    LEA ESI,[EBX*0x8 + 0x0]             ; 005c4e1c
        ;   Label: LAB_005c4e1c
    CALL dword ptr [0x0061f2a4]         ; 005c4e23 | PTR_FUN_0061f2a4
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x58] ; 005c4e29
    CALL dword ptr [0x0061f2a4]         ; 005c4e2d | PTR_FUN_0061f2a4
    ADD EAX,ESI                         ; 005c4e33
    MOV ESI,dword ptr [ESP + 0x10]      ; 005c4e35
    MOV dword ptr [EAX + 0x58],ESI      ; 005c4e39
    MOV EAX,EBX                         ; 005c4e3c
    POP ESI                             ; 005c4e3e
    POP EBX                             ; 005c4e3f
    RET                                 ; 005c4e40

