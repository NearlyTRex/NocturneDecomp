; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050f990(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_0050fda0 at 0050fe04
;
; Called Functions:
;   FUN_00438ef0
;   FUN_0050f9e0
;   FUN_0050fd90
;   FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f990
        ;   Label: FUN_0050f990
    PUSH ESI                            ; 0050f991
    MOV EBX,dword ptr [ESP + 0xc]       ; 0050f992
    MOV ESI,dword ptr [EBX + 0x18]      ; 0050f996
    IMUL ESI,dword ptr [EBX + 0x1c]     ; 0050f999
    PUSH ESI                            ; 0050f99d
    PUSH 0x0                            ; 0050f99e
    PUSH EBX                            ; 0050f9a0
    CALL FUN_00438ef0                   ; 0050f9a1
        ;   XREF to: 00438ef0 (UNCONDITIONAL_CALL)  ; undefined FUN_00438ef0()
    MOV ESI,EAX                         ; 0050f9a6
    ADD ESP,0xc                         ; 0050f9a8
    TEST EAX,EAX                        ; 0050f9ab
    JNZ 0x0050f9b2                      ; 0050f9ad
        ;   XREF to: 0050f9b2 (CONDITIONAL_JUMP)  ; LAB_0050f9b2
    POP ESI                             ; 0050f9af
        ;   Label: LAB_0050f9af
    POP EBX                             ; 0050f9b0
    RET                                 ; 0050f9b1
    MOV ECX,dword ptr [EBX + 0x18]      ; 0050f9b2
        ;   Label: LAB_0050f9b2
    PUSH ECX                            ; 0050f9b5
    PUSH EAX                            ; 0050f9b6
    PUSH EBX                            ; 0050f9b7
    CALL FUN_0050f9e0                   ; 0050f9b8
        ;   XREF to: 0050f9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050f9e0()
    ADD ESP,0xc                         ; 0050f9bd
    PUSH ESI                            ; 0050f9c0
    CALL FUN_005a3770                   ; 0050f9c1
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 0050f9c6
    CMP dword ptr [ESP + 0x10],0x0      ; 0050f9c9
    JZ 0x0050f9af                       ; 0050f9ce
        ;   XREF to: 0050f9af (CONDITIONAL_JUMP)  ; LAB_0050f9af
    PUSH EBX                            ; 0050f9d0
    CALL FUN_0050fd90                   ; 0050f9d1
        ;   XREF to: 0050fd90 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fd90()
    ADD ESP,0x4                         ; 0050f9d6
    POP ESI                             ; 0050f9d9
    POP EBX                             ; 0050f9da
    RET                                 ; 0050f9db

