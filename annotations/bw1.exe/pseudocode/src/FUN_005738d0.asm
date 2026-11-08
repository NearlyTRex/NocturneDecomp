; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005738d0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004b5e00 at 004b5e94
;
; Called Functions:
;   FUN_0056fa10
;   FUN_00573e70
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005738d0
        ;   Label: FUN_005738d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005738d2
    PUSH EDX                            ; 005738d6
    CALL FUN_0056fa10                   ; 005738d7
        ;   XREF to: 0056fa10 (UNCONDITIONAL_CALL)  ; undefined FUN_0056fa10()
    ADD ESP,0x8                         ; 005738dc
    TEST EAX,EAX                        ; 005738df
    JNZ 0x005738e4                      ; 005738e1
        ;   XREF to: 005738e4 (CONDITIONAL_JUMP)  ; LAB_005738e4
    RET                                 ; 005738e3
    MOV EDX,dword ptr [ESP + 0x8]       ; 005738e4
        ;   Label: LAB_005738e4
    MOV dword ptr [EAX + 0x30],EDX      ; 005738e8
    MOV DL,byte ptr [EAX + 0x118]       ; 005738eb
    MOV dword ptr [EAX + 0x34],0x1      ; 005738f1
    OR DL,0x4                           ; 005738f8
    MOV byte ptr [EAX + 0x118],DL       ; 005738fb
    CALL FUN_00573e70                   ; 00573901
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00573e70()
    MOV EAX,0x1                         ; 00573906
    RET                                 ; 0057390b

