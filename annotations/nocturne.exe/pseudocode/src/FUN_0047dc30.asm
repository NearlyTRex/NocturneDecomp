; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0047dc30(undefined4 param_1,char *param_2)
;
;
; XREF[47]:
;   FUN_00410490 at 004104be
;   FUN_00413800 at 00413e86
;   FUN_004154b0 at 004156b1
;   FUN_004168d0 at 00416a7e
;   FUN_00418a00 at 00418a23
;   FUN_00421480 at 004214d9
;   FUN_0043b1a0 at 0043b1b9
;   FUN_0043ebf0 at 0043ec3e
;   FUN_00455640 at 004556a8
;   FUN_00458a90 at 004596c7
;   ... and 37 more
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

