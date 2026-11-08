; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047f860(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   FUN_0047f8c0 at 0047f8d2
;
; Called Functions:
;   FUN_0047f4a0
;   FUN_0047f5c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047f860
        ;   Label: FUN_0047f860
    PUSH ESI                            ; 0047f861
    PUSH EDI                            ; 0047f862
    PUSH EBP                            ; 0047f863
    MOV EBX,dword ptr [ESP + 0x14]      ; 0047f864
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0047f868
    MOV ESI,dword ptr [ESP + 0x20]      ; 0047f86c
    MOV EDI,dword ptr [ESP + 0x24]      ; 0047f870
    PUSH ESI                            ; 0047f874
    PUSH EBP                            ; 0047f875
    MOV EDX,dword ptr [ESP + 0x20]      ; 0047f876
    PUSH EDX                            ; 0047f87a
    PUSH EBX                            ; 0047f87b
    CALL FUN_0047f4a0                   ; 0047f87c
        ;   XREF to: 0047f4a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047f4a0()
    ADD ESP,0x10                        ; 0047f881
    PUSH ESI                            ; 0047f884
    PUSH EDI                            ; 0047f885
    MOV ECX,dword ptr [ESP + 0x20]      ; 0047f886
    PUSH ECX                            ; 0047f88a
    PUSH EBX                            ; 0047f88b
    CALL FUN_0047f4a0                   ; 0047f88c
        ;   XREF to: 0047f4a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047f4a0()
    ADD ESP,0x10                        ; 0047f891
    PUSH EDI                            ; 0047f894
    PUSH EBP                            ; 0047f895
    MOV EAX,dword ptr [ESP + 0x20]      ; 0047f896
    PUSH EAX                            ; 0047f89a
    PUSH EBX                            ; 0047f89b
    CALL FUN_0047f5c0                   ; 0047f89c
        ;   XREF to: 0047f5c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047f5c0()
    ADD ESP,0x10                        ; 0047f8a1
    PUSH EDI                            ; 0047f8a4
    PUSH EBP                            ; 0047f8a5
    PUSH ESI                            ; 0047f8a6
    PUSH EBX                            ; 0047f8a7
    CALL FUN_0047f5c0                   ; 0047f8a8
        ;   XREF to: 0047f5c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047f5c0()
    ADD ESP,0x10                        ; 0047f8ad
    POP EBP                             ; 0047f8b0
    POP EDI                             ; 0047f8b1
    POP ESI                             ; 0047f8b2
    POP EBX                             ; 0047f8b3
    RET                                 ; 0047f8b4

