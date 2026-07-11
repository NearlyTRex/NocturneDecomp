; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0047dc30(undefined4 param_1,char *param_2)
;
;
; XREF[13]:
;   FUN_0047a030 at 0047a04f
;   FUN_0047ac50 at 0047cd52
;   FUN_00481840 at 0048185b
;   FUN_0048d0c0 at 0048d0fa
;   FUN_004a0550 at 004a057b
;   FUN_004aded0 at 004adee1
;   FUN_004d9180 at 004d926a
;   FUN_004f6170 at 004f61d0
;   FUN_004ff2c0 at 0050091f
;   FUN_0050d040 at 0050d107
;   ... and 3 more
;
; Referenced Globals:
;   undefined4 DAT_0058022c
;   undefined4 DAT_00580231
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_0077ad0c
;   undefined4 DAT_01c08b5c
;   undefined4 DAT_01c08b60
;
; Called Functions:
;   FUN_0043ac60
;   FUN_0047dd10
;   FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047dc30
        ;   Label: FUN_0047dc30
    MOV EBX,dword ptr [ESP + 0xc]       ; 0047dc31
    TEST EBX,EBX                        ; 0047dc35
    JZ 0x0047dc3e                       ; 0047dc37
        ;   XREF to: 0047dc3e (CONDITIONAL_JUMP)  ; LAB_0047dc3e
    CMP byte ptr [EBX],0x0              ; 0047dc39
    JNZ 0x0047dc42                      ; 0047dc3c
        ;   XREF to: 0047dc42 (CONDITIONAL_JUMP)  ; LAB_0047dc42
    XOR EAX,EAX                         ; 0047dc3e
        ;   Label: LAB_0047dc3e
    POP EBX                             ; 0047dc40
        ;   Label: LAB_0047dc40
    RET                                 ; 0047dc41
    PUSH 0x58022c                       ; 0047dc42 | DAT_0058022c
        ;   Label: LAB_0047dc42
    PUSH EBX                            ; 0047dc47
    CALL FUN_00564520                   ; 0047dc48
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined FUN_00564520()
    ADD ESP,0x8                         ; 0047dc4d
    TEST EAX,EAX                        ; 0047dc50
    JZ 0x0047dc40                       ; 0047dc52
        ;   XREF to: 0047dc40 (CONDITIONAL_JUMP)  ; LAB_0047dc40
    PUSH EBX                            ; 0047dc54
    MOV ECX,dword ptr [ESP + 0xc]       ; 0047dc55
    XOR EDX,EDX                         ; 0047dc59
    PUSH ECX                            ; 0047dc5b
    MOV dword ptr [0x01c08b5c],EDX      ; 0047dc5c | DAT_01c08b5c
    CALL FUN_0047dd10                   ; 0047dc62
        ;   XREF to: 0047dd10 (UNCONDITIONAL_CALL)  ; undefined FUN_0047dd10()
    ADD ESP,0x8                         ; 0047dc67
    TEST EAX,EAX                        ; 0047dc6a
    JGE 0x0047dc40                      ; 0047dc6c
        ;   XREF to: 0047dc40 (CONDITIONAL_JUMP)  ; LAB_0047dc40
    PUSH 0x1c08b60                      ; 0047dc6e | DAT_01c08b60
    PUSH 0x580231                       ; 0047dc73 | DAT_00580231
    MOV EBX,dword ptr [0x005ad350]      ; 0047dc78 | PTR_DAT_005ad350
    PUSH EBX                            ; 0047dc7e | DAT_0077ad0c
    CALL FUN_0043ac60                   ; 0047dc7f
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined FUN_0043ac60()
    ADD ESP,0xc                         ; 0047dc84
    XOR EAX,EAX                         ; 0047dc87
    POP EBX                             ; 0047dc89
    RET                                 ; 0047dc8a

