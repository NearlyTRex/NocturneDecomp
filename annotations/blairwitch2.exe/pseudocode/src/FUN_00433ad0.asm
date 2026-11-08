; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00433ad0(int *param_1,int *param_2)
;
;
; XREF[1]:
;   FUN_00434910 at 00434966
;
; Called Functions:
;   FUN_00433a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433ad0
        ;   Label: FUN_00433ad0
    PUSH ESI                            ; 00433ad1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00433ad2
    MOV ESI,dword ptr [ESP + 0x10]      ; 00433ad6
    PUSH ESI                            ; 00433ada
    PUSH EBX                            ; 00433adb
    CALL FUN_00433a90                   ; 00433adc
        ;   XREF to: 00433a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00433a90()
    ADD ESP,0x8                         ; 00433ae1
    TEST EAX,EAX                        ; 00433ae4
    JL 0x00433aef                       ; 00433ae6
        ;   XREF to: 00433aef (CONDITIONAL_JUMP)  ; LAB_00433aef
    CMP dword ptr [EBX],0x0             ; 00433ae8
    JG 0x00433af2                       ; 00433aeb
        ;   XREF to: 00433af2 (CONDITIONAL_JUMP)  ; LAB_00433af2
    XOR EAX,EAX                         ; 00433aed
    POP ESI                             ; 00433aef
        ;   Label: LAB_00433aef
    POP EBX                             ; 00433af0
    RET                                 ; 00433af1
    XOR EDX,EDX                         ; 00433af2
        ;   Label: LAB_00433af2
    MOV DL,byte ptr [EBX + 0x4]         ; 00433af4
    PUSH EDX                            ; 00433af7
    MOV EAX,dword ptr [ESI]             ; 00433af8
    PUSH ESI                            ; 00433afa
    CALL dword ptr [EAX + 0x4]          ; 00433afb
    ADD ESP,0x8                         ; 00433afe
    TEST EAX,EAX                        ; 00433b01
    JL 0x00433aef                       ; 00433b03
        ;   XREF to: 00433aef (CONDITIONAL_JUMP)  ; LAB_00433aef
    MOV dword ptr [EBX],0x0             ; 00433b05
    MOV dword ptr [EBX + 0x4],0x0       ; 00433b0b
    XOR EAX,EAX                         ; 00433b12
    POP ESI                             ; 00433b14
    POP EBX                             ; 00433b15
    RET                                 ; 00433b16

