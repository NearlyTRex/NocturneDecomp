; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0045c110(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005de4d0
;
; Called Functions:
;   FUN_0057aed0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045c110
        ;   Label: FUN_0045c110
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045c111
    TEST byte ptr [ESP + 0xc],0x4       ; 0045c115
    JNZ 0x0045c136                      ; 0045c11a
        ;   XREF to: 0045c136 (CONDITIONAL_JUMP)  ; LAB_0045c136
    PUSH 0x1                            ; 0045c11c
    PUSH EBX                            ; 0045c11e
    CALL FUN_0057aed0                   ; 0045c11f
        ;   XREF to: 0057aed0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057aed0()
    ADD ESP,0x8                         ; 0045c124
    MOV DL,byte ptr [ESP + 0xc]         ; 0045c127
    MOV EBX,EAX                         ; 0045c12b
    TEST DL,0x2                         ; 0045c12d
    JNZ 0x0045c151                      ; 0045c130
        ;   XREF to: 0045c151 (CONDITIONAL_JUMP)  ; LAB_0045c151
    MOV EAX,EBX                         ; 0045c132
    POP EBX                             ; 0045c134
    RET                                 ; 0045c135
    PUSH 0x5de4d0                       ; 0045c136 | DAT_005de4d0
        ;   Label: LAB_0045c136
    PUSH EBX                            ; 0045c13b
    CALL FUN_005a308f                   ; 0045c13c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0045c141
    PUSH EAX                            ; 0045c144
    CALL FUN_005a30b6                   ; 0045c145
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0045c14a
    MOV EAX,EBX                         ; 0045c14d
    POP EBX                             ; 0045c14f
    RET                                 ; 0045c150
    PUSH EAX                            ; 0045c151
        ;   Label: LAB_0045c151
    CALL FUN_005a30c4                   ; 0045c152
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0045c157
    MOV EAX,EBX                         ; 0045c15a
    POP EBX                             ; 0045c15c
    RET                                 ; 0045c15d

