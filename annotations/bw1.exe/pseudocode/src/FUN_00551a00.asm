; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00551a00(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004b8100 at 004b81df
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_0061f650
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01d2c900
;   undefined4 DAT_01d2d908
;   undefined4 DAT_01fe5764
;
; Called Functions:
;   FUN_00484180
;
; *****************************************************************************

section .text

    MOV EAX,[0x0061f650]                ; 00551a00 | DAT_0061f650 | DAT_01d2c900
        ;   Label: FUN_00551a00
    CMP dword ptr [EAX + 0x1008],0x0    ; 00551a05 | DAT_01d2d908
    JNZ 0x00551a19                      ; 00551a0c
        ;   XREF to: 00551a19 (CONDITIONAL_JUMP)  ; LAB_00551a19
    MOV ECX,dword ptr [0x01fe5764]      ; 00551a0e | DAT_01fe5764
    CMP ECX,0x64                        ; 00551a14
    JL 0x00551a1a                       ; 00551a17
        ;   XREF to: 00551a1a (CONDITIONAL_JUMP)  ; LAB_00551a1a
    RET                                 ; 00551a19
        ;   Label: LAB_00551a19
    PUSH ESI                            ; 00551a1a
        ;   Label: LAB_00551a1a
    PUSH EBX                            ; 00551a1b
    MOV EBX,dword ptr [0x00612560]      ; 00551a1c | DAT_00612560
    MOV EDX,dword ptr [ESP + 0x10]      ; 00551a22
    PUSH EBX                            ; 00551a26 | DAT_01bc120c
    MOV dword ptr [ECX*0x4 + 0x1fe5768],EDX ; 00551a27
    CALL FUN_00484180                   ; 00551a2e
        ;   XREF to: 00484180 (UNCONDITIONAL_CALL)  ; undefined FUN_00484180()
    MOV EDX,dword ptr [0x01fe5764]      ; 00551a33 | DAT_01fe5764
    ADD ESP,0x4                         ; 00551a39
    LEA ESI,[EDX + 0x1]                 ; 00551a3c
    MOV dword ptr [EDX*0x4 + 0x1fe58f8],EAX ; 00551a3f
    MOV dword ptr [0x01fe5764],ESI      ; 00551a46 | DAT_01fe5764
    POP EBX                             ; 00551a4c
    POP ESI                             ; 00551a4d
    RET                                 ; 00551a4e

