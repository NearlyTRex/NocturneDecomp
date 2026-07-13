; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00474d70(int *param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[10]:
;   FUN_00470230 at 004702e6
;   FUN_00470310 at 004703c6
;   FUN_004703f0 at 004704dd
;   FUN_00470550 at 00470651
;   FUN_0049da10 at 0049df56
;   FUN_004a4b50 at 004a5055
;   FUN_004d12e0 at 004d2125
;   FUN_004d2d00 at 004d3baa
;   FUN_004d9c20 at 004d9c9d
;   FUN_0052ed40 at 0052ed8a
;
; Referenced Globals:
;   undefined4 s_..\\shape\\edittool.cpp_0057e4f9+1
;   string s_gEdFont_must_be_set_by_the_appli_0057e510
;   undefined4 DAT_005b6d50
;   undefined4 DAT_005b7630
;   undefined4 DAT_01bcd070
;   undefined4 DAT_01bcd9b8
;   undefined4 DAT_01bcd9bc
;   undefined4 DAT_01bd1d8c
;   undefined4 DAT_01bd1d90
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_00403f50
;   FUN_004720c0
;   FUN_00474e70
;   FUN_00475230
;   FUN_004759d0
;   FUN_004930e0
;   FUN_004c8440
;   FUN_00553910
;   FUN_00558d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00474d70
        ;   Label: FUN_00474d70
    PUSH ESI                            ; 00474d71
    PUSH EDI                            ; 00474d72
    PUSH EBP                            ; 00474d73
    SUB ESP,0x4                         ; 00474d74
    MOV ESI,dword ptr [ESP + 0x18]      ; 00474d77
    CMP dword ptr [0x01bcd070],0x0      ; 00474d7b | DAT_01bcd070
    JNZ 0x00474da7                      ; 00474d82
        ;   XREF to: 00474da7 (CONDITIONAL_JUMP)  ; LAB_00474da7
    MOV ECX,0x57e4fa                    ; 00474d84 | s_..\shape\edittool.cpp_0057e4f9+1
    MOV EBX,0x8b                        ; 00474d89
    PUSH 0x57e510                       ; 00474d8e | = "gEdFont must be set by the application."
    MOV dword ptr [0x01cc4800],ECX      ; 00474d93 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 00474d99 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00474d9f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00474da4
    MOV EAX,[0x01bcd070]                ; 00474da7 | DAT_01bcd070
        ;   Label: LAB_00474da7
    PUSH 0x6a                           ; 00474dac
    MOV EBX,dword ptr [EAX + 0x3168]    ; 00474dae
    PUSH EAX                            ; 00474db4
    MOV dword ptr [0x01bcd9b8],EBX      ; 00474db5 | DAT_01bcd9b8
    CALL FUN_004930e0                   ; 00474dbb
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004930e0()
    ADD ESP,0x8                         ; 00474dc0
    MOV EDI,dword ptr [ESI]             ; 00474dc3
    MOV [0x01bcd9bc],EAX                ; 00474dc5 | DAT_01bcd9bc
    CMP EDI,0x1                         ; 00474dca
    JL 0x00474e56                       ; 00474dcd
        ;   XREF to: 00474e56 (CONDITIONAL_JUMP)  ; LAB_00474e56
    PUSH 0x0                            ; 00474dd3
    MOV EDX,dword ptr [ESP + 0x24]      ; 00474dd5
    MOV EAX,0x7f                        ; 00474dd9
    PUSH EDX                            ; 00474dde
    MOV ECX,dword ptr [ESP + 0x24]      ; 00474ddf
    MOV EBP,dword ptr [0x005b7630]      ; 00474de3 | DAT_005b7630
    PUSH ECX                            ; 00474de9
    MOV [0x005b7630],EAX                ; 00474dea | DAT_005b7630
    MOV EAX,[0x01bd1d90]                ; 00474def | DAT_01bd1d90
    PUSH ESI                            ; 00474df4
    MOV EDI,dword ptr [0x01bd1d8c]      ; 00474df5 | DAT_01bd1d8c
    MOV dword ptr [ESP + 0x10],EAX      ; 00474dfb
    CALL FUN_00474e70                   ; 00474dff
        ;   XREF to: 00474e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00474e70()
    ADD ESP,0x10                        ; 00474e04
    PUSH ESI                            ; 00474e07
        ;   Label: LAB_00474e07
    CALL FUN_00475230                   ; 00474e08
        ;   XREF to: 00475230 (UNCONDITIONAL_CALL)  ; undefined FUN_00475230()
    ADD ESP,0x4                         ; 00474e0d
    PUSH ESI                            ; 00474e10
    MOV EBX,EAX                         ; 00474e11
    CALL FUN_004759d0                   ; 00474e13
        ;   XREF to: 004759d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004759d0()
    ADD ESP,0x4                         ; 00474e18
    CALL FUN_00553910                   ; 00474e1b
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined FUN_00553910()
    CMP EBX,-0x2                        ; 00474e20
    JZ 0x00474e07                       ; 00474e23
        ;   XREF to: 00474e07 (CONDITIONAL_JUMP)  ; LAB_00474e07
    MOV ESI,dword ptr [ESP]             ; 00474e25
    PUSH ESI                            ; 00474e28
    PUSH EDI                            ; 00474e29
    CALL FUN_00558d60                   ; 00474e2a
        ;   XREF to: 00558d60 (UNCONDITIONAL_CALL)  ; undefined FUN_00558d60()
    ADD ESP,0x8                         ; 00474e2f
    CALL FUN_00403f50                   ; 00474e32
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00403f50()
    MOV EDI,dword ptr [0x005b6d50]      ; 00474e37 | DAT_005b6d50
    PUSH EDI                            ; 00474e3d
    CALL FUN_004720c0                   ; 00474e3e
        ;   XREF to: 004720c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004720c0()
    ADD ESP,0x4                         ; 00474e43
    MOV dword ptr [0x005b7630],EBP      ; 00474e46 | DAT_005b7630
    MOV EAX,EBX                         ; 00474e4c
    ADD ESP,0x4                         ; 00474e4e
    POP EBP                             ; 00474e51
    POP EDI                             ; 00474e52
    POP ESI                             ; 00474e53
    POP EBX                             ; 00474e54
    RET                                 ; 00474e55
    MOV EAX,0xffffffff                  ; 00474e56
        ;   Label: LAB_00474e56
    ADD ESP,0x4                         ; 00474e5b
    POP EBP                             ; 00474e5e
    POP EDI                             ; 00474e5f
    POP ESI                             ; 00474e60
    POP EBX                             ; 00474e61
    RET                                 ; 00474e62

