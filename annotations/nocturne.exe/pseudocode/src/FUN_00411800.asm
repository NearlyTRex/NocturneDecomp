; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00411800(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00578750
;   string s_effectClassNameList_00578755
;   string s_addToPathGrid_00578769
;   undefined4 DAT_005acf80
;
; Called Functions:
;   FUN_0040c450
;   FUN_0040c6d0
;   FUN_0040c900
;   FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411800
        ;   Label: FUN_00411800
    MOV EBX,dword ptr [ESP + 0x8]       ; 00411801
    PUSH EBX                            ; 00411805
    CALL FUN_0040d2d0                   ; 00411806
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d2d0()
    ADD ESP,0x4                         ; 0041180b
    PUSH 0x578750                       ; 0041180e | DAT_00578750
    LEA EAX,[EBX + 0x150]               ; 00411813
    PUSH EAX                            ; 00411819
    CALL FUN_0040c450                   ; 0041181a
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    MOV EDX,dword ptr [0x005acf80]      ; 0041181f | DAT_005acf80
    ADD ESP,0x8                         ; 00411825
    CMP EDX,0x2                         ; 00411828
    JGE 0x0041182f                      ; 0041182b
        ;   XREF to: 0041182f (CONDITIONAL_JUMP)  ; LAB_0041182f
    POP EBX                             ; 0041182d
    RET                                 ; 0041182e
    PUSH 0x578755                       ; 0041182f | = "effectClassNameList"
        ;   Label: LAB_0041182f
    LEA EAX,[EBX + 0x160]               ; 00411834
    PUSH EAX                            ; 0041183a
    CALL FUN_0040c6d0                   ; 0041183b
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c6d0()
    ADD ESP,0x8                         ; 00411840
    PUSH 0x578769                       ; 00411843 | = "addToPathGrid"
    ADD EBX,0x15c                       ; 00411848
    PUSH EBX                            ; 0041184e
    CALL FUN_0040c900                   ; 0041184f
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 00411854
    POP EBX                             ; 00411857
    RET                                 ; 00411858

