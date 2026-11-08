; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005801e0(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00616494
;
; Called Functions:
;   FUN_00589e50
;
; *****************************************************************************

section .text

    MOV EAX,[0x00616494]                ; 005801e0 | DAT_00616494
        ;   Label: FUN_005801e0
    CMP dword ptr [EAX + 0x220],0x0     ; 005801e5
    JNZ 0x005801f1                      ; 005801ec
        ;   XREF to: 005801f1 (CONDITIONAL_JUMP)  ; LAB_005801f1
    XOR EAX,EAX                         ; 005801ee
    RET                                 ; 005801f0
    PUSH EBX                            ; 005801f1
        ;   Label: LAB_005801f1
    MOV ECX,dword ptr [ESP + 0xc]       ; 005801f2
    PUSH ECX                            ; 005801f6
    MOV EBX,dword ptr [ESP + 0xc]       ; 005801f7
    PUSH EBX                            ; 005801fb
    CALL FUN_00589e50                   ; 005801fc
        ;   XREF to: 00589e50 (UNCONDITIONAL_CALL)  ; undefined FUN_00589e50()
    ADD ESP,0x8                         ; 00580201
    POP EBX                             ; 00580204
    RET                                 ; 00580205

