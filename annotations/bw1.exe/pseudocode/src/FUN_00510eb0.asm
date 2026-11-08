; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00510eb0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00603c50
;
; Called Functions:
;   FUN_00408730
;   FUN_00447d30
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510eb0
        ;   Label: FUN_00510eb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00510eb1
    TEST byte ptr [ESP + 0xc],0x4       ; 00510eb5
    JNZ 0x00510eed                      ; 00510eba
        ;   XREF to: 00510eed (CONDITIONAL_JUMP)  ; LAB_00510eed
    PUSH 0x0                            ; 00510ebc
    ADD EBX,0x310                       ; 00510ebe
    PUSH EBX                            ; 00510ec4
    CALL FUN_00447d30                   ; 00510ec5
        ;   XREF to: 00447d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00447d30()
    ADD ESP,0x8                         ; 00510eca
    PUSH 0x1                            ; 00510ecd
    LEA EBX,[EAX + 0xfffffcf0]          ; 00510ecf
    PUSH EBX                            ; 00510ed5
    CALL FUN_00408730                   ; 00510ed6
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 00510edb
    MOV DL,byte ptr [ESP + 0xc]         ; 00510ede
    MOV EBX,EAX                         ; 00510ee2
    TEST DL,0x2                         ; 00510ee4
    JNZ 0x00510f08                      ; 00510ee7
        ;   XREF to: 00510f08 (CONDITIONAL_JUMP)  ; LAB_00510f08
    MOV EAX,EBX                         ; 00510ee9
    POP EBX                             ; 00510eeb
    RET                                 ; 00510eec
    PUSH 0x603c50                       ; 00510eed | DAT_00603c50
        ;   Label: LAB_00510eed
    PUSH EBX                            ; 00510ef2
    CALL FUN_005c030f                   ; 00510ef3
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00510ef8
    PUSH EAX                            ; 00510efb
    CALL FUN_005c0336                   ; 00510efc
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00510f01
    MOV EAX,EBX                         ; 00510f04
    POP EBX                             ; 00510f06
    RET                                 ; 00510f07
    PUSH EAX                            ; 00510f08
        ;   Label: LAB_00510f08
    CALL FUN_005c0344                   ; 00510f09
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00510f0e
    MOV EAX,EBX                         ; 00510f11
    POP EBX                             ; 00510f13
    RET                                 ; 00510f14

