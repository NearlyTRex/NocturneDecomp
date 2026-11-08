; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00438370(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00427680
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00438370
        ;   Label: FUN_00438370
    CMP dword ptr [EAX + 0x112d8],0x0   ; 00438374
    JZ 0x00438380                       ; 0043837b
        ;   XREF to: 00438380 (CONDITIONAL_JUMP)  ; LAB_00438380
    XOR EAX,EAX                         ; 0043837d
    RET                                 ; 0043837f
    MOV ECX,dword ptr [ESP + 0x8]       ; 00438380
        ;   Label: LAB_00438380
    PUSH ECX                            ; 00438384
    PUSH EAX                            ; 00438385
    CALL FUN_00427680                   ; 00438386
        ;   XREF to: 00427680 (UNCONDITIONAL_CALL)  ; undefined FUN_00427680()
    ADD ESP,0x8                         ; 0043838b
    RET                                 ; 0043838e

