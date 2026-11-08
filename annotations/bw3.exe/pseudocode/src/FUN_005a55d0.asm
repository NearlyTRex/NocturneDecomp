; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a55d0(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_005a5628 at 005a5637
;
; Referenced Globals:
;   undefined4 DAT_00607d3c
;   undefined4 DAT_00607d44
;
; Called Functions:
;   FUN_005abf84
;   FUN_005ac290
;   FUN_005ac558
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a55d0
        ;   Label: FUN_005a55d0
    PUSH ESI                            ; 005a55d1
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a55d2
    CALL FUN_005ac558                   ; 005a55d6
        ;   XREF to: 005ac558 (UNCONDITIONAL_CALL)  ; undefined FUN_005ac558()
    PUSH EBX                            ; 005a55db
    MOV EDX,dword ptr [0x00607d3c]      ; 005a55dc | DAT_00607d3c
    MOV ESI,dword ptr [ESP + 0x10]      ; 005a55e2
    PUSH EDX                            ; 005a55e6
    MOV ESI,dword ptr [ESI]             ; 005a55e7
    PUSH ESI                            ; 005a55e9
    PUSH 0x63df                         ; 005a55ea
    CALL FUN_005ac290                   ; 005a55ef
        ;   XREF to: 005ac290 (UNCONDITIONAL_CALL)  ; undefined FUN_005ac290()
    ADD ESP,0x10                        ; 005a55f4
    PUSH EBX                            ; 005a55f7
    CALL FUN_005abf84                   ; 005a55f8
        ;   XREF to: 005abf84 (UNCONDITIONAL_CALL)  ; undefined FUN_005abf84()
    ADD ESP,0x4                         ; 005a55fd
    TEST EAX,EAX                        ; 005a5600
    JZ 0x005a5621                       ; 005a5602
        ;   XREF to: 005a5621 (CONDITIONAL_JUMP)  ; LAB_005a5621
    MOV EAX,[0x00607d3c]                ; 005a5604 | DAT_00607d3c
    MOV ECX,dword ptr [0x00607d44]      ; 005a5609 | DAT_00607d44
    PUSH EBX                            ; 005a560f
    SUB EAX,ECX                         ; 005a5610
    PUSH EAX                            ; 005a5612
    PUSH ESI                            ; 005a5613
    PUSH 0x63df                         ; 005a5614
    CALL FUN_005ac290                   ; 005a5619
        ;   XREF to: 005ac290 (UNCONDITIONAL_CALL)  ; undefined FUN_005ac290()
    ADD ESP,0x10                        ; 005a561e
    MOV EAX,EBX                         ; 005a5621
        ;   Label: LAB_005a5621
    POP ESI                             ; 005a5623
    POP EBX                             ; 005a5624
    RET                                 ; 005a5625

