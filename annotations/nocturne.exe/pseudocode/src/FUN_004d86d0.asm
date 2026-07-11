; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d86d0(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x104]:1  local_104
;
; XREF[1]:
;   FUN_004d9780 at 004d9836
;
; Referenced Globals:
;   undefined4 DAT_00589a49
;   undefined4 DAT_005be220
;   undefined4 DAT_01e56da0
;
; Called Functions:
;   FUN_004febd0
;   FUN_0056626c
;
; *****************************************************************************

section .text

    SUB ESP,0x104                       ; 004d86d0
        ;   Label: FUN_004d86d0
    MOV EAX,dword ptr [ESP + 0x108]     ; 004d86d6
    PUSH 0x589a49                       ; 004d86dd | DAT_00589a49
    ADD EAX,0x10                        ; 004d86e2
    PUSH EAX                            ; 004d86e5
    PUSH 0x0                            ; 004d86e6
    PUSH 0x0                            ; 004d86e8
    LEA EAX,[ESP + 0x10]                ; 004d86ea
    PUSH EAX                            ; 004d86ee
    CALL FUN_0056626c                   ; 004d86ef
        ;   XREF to: 0056626c (UNCONDITIONAL_CALL)  ; undefined FUN_0056626c()
    ADD ESP,0x14                        ; 004d86f4
    MOV EDX,dword ptr [ESP + 0x10c]     ; 004d86f7
    PUSH EDX                            ; 004d86fe
    LEA EAX,[ESP + 0x4]                 ; 004d86ff
    PUSH EAX                            ; 004d8703
    MOV ECX,dword ptr [0x005be220]      ; 004d8704 | DAT_005be220
    PUSH ECX                            ; 004d870a | DAT_01e56da0
    CALL FUN_004febd0                   ; 004d870b
        ;   XREF to: 004febd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004febd0()
    ADD ESP,0xc                         ; 004d8710
    ADD ESP,0x104                       ; 004d8713
    RET                                 ; 004d8719

