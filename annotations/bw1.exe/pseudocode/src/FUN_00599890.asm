; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00599890(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061f650
;   undefined4 DAT_01d2d908
;
; Called Functions:
;   FUN_0042f240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599890
        ;   Label: FUN_00599890
    MOV EBX,dword ptr [ESP + 0x8]       ; 00599891
    PUSH EBX                            ; 00599895
    MOV EAX,dword ptr [EBX + 0x154]     ; 00599896
    CALL dword ptr [EAX + 0x70]         ; 0059989c
    ADD ESP,0x4                         ; 0059989f
    TEST EAX,EAX                        ; 005998a2
    JZ 0x005998b8                       ; 005998a4
        ;   XREF to: 005998b8 (CONDITIONAL_JUMP)  ; LAB_005998b8
    MOV EAX,[0x0061f650]                ; 005998a6 | DAT_0061f650
    CMP dword ptr [EAX + 0x1008],0x0    ; 005998ab | DAT_01d2d908
    JNZ 0x005998b8                      ; 005998b2
        ;   XREF to: 005998b8 (CONDITIONAL_JUMP)  ; LAB_005998b8
    XOR EAX,EAX                         ; 005998b4
    POP EBX                             ; 005998b6
    RET                                 ; 005998b7
    PUSH EBX                            ; 005998b8
        ;   Label: LAB_005998b8
    CALL FUN_0042f240                   ; 005998b9
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; undefined FUN_0042f240()
    ADD ESP,0x4                         ; 005998be
    POP EBX                             ; 005998c1
    RET                                 ; 005998c2

