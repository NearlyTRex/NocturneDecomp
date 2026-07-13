; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 APIDLLsetFogColor(int param_1,int param_2,uint param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_100141bc
;   undefined4 DAT_100141c0
;   undefined4 DAT_100141c4
;   undefined4 DAT_10014204
;
; Called Functions:
;   APIDLLbeginScene
;   APIDLLendScene
;   FUN_100037e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 100049f0
        ;   Label: APIDLLsetFogColor
    MOV ECX,dword ptr [ESP + 0x8]       ; 100049f4
    MOV EDX,dword ptr [ESP + 0xc]       ; 100049f8
    MOV [0x100141bc],EAX                ; 100049fc | DAT_100141bc
    MOV dword ptr [0x100141c0],ECX      ; 10004a01 | DAT_100141c0
    MOV dword ptr [0x100141c4],EDX      ; 10004a07 | DAT_100141c4
    CMP dword ptr [0x10014204],0x0      ; 10004a0d | DAT_10014204
    JNZ 0x10004a1b                      ; 10004a14
        ;   XREF to: 10004a1b (CONDITIONAL_JUMP)  ; LAB_10004a1b
    CALL APIDLLbeginScene               ; 10004a16
        ;   XREF to: 10002ce0 (UNCONDITIONAL_CALL)  ; undefined APIDLLbeginScene() | Ordinal_6
    MOV EAX,[0x100141bc]                ; 10004a1b | DAT_100141bc
        ;   Label: LAB_10004a1b
    MOV ECX,dword ptr [0x100141c0]      ; 10004a20 | DAT_100141c0
    SHL EAX,0x10                        ; 10004a26
    SHL ECX,0x8                         ; 10004a29
    OR EAX,ECX                          ; 10004a2c
    OR EAX,dword ptr [0x100141c4]       ; 10004a2e | DAT_100141c4
    PUSH EAX                            ; 10004a34
    PUSH 0x22                           ; 10004a35
    CALL FUN_100037e0                   ; 10004a37
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined FUN_100037e0()
    ADD ESP,0x8                         ; 10004a3c
    CMP dword ptr [0x10014204],0x0      ; 10004a3f | DAT_10014204
    JZ 0x10004a4d                       ; 10004a46
        ;   XREF to: 10004a4d (CONDITIONAL_JUMP)  ; LAB_10004a4d
    CALL APIDLLendScene                 ; 10004a48
        ;   XREF to: 10002d10 (UNCONDITIONAL_CALL)  ; undefined APIDLLendScene() | Ordinal_15
    MOV EAX,0x1                         ; 10004a4d
        ;   Label: LAB_10004a4d
    RET                                 ; 10004a52

