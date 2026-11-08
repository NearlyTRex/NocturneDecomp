; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040f050(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_005d3337
;   TerminatedCString s_collideWithMe_005d3341
;   TerminatedCString s_groundType_005d334f
;   TerminatedCString s_castShadowsFlag_005d335a
;   undefined4 DAT_006108f4
;
; Called Functions:
;   FUN_0040b670
;   FUN_0040b770
;   FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f050
        ;   Label: FUN_0040f050
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f051
    PUSH EBX                            ; 0040f055
    CALL FUN_0040c040                   ; 0040f056
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    ADD ESP,0x4                         ; 0040f05b
    PUSH 0x5d3337                       ; 0040f05e | = "modelName"
    LEA EAX,[EBX + 0x15c]               ; 0040f063
    PUSH EAX                            ; 0040f069
    CALL FUN_0040b770                   ; 0040f06a
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b770()
    ADD ESP,0x8                         ; 0040f06f
    PUSH 0x5d3341                       ; 0040f072 | = "collideWithMe"
    LEA EAX,[EBX + 0x2d8]               ; 0040f077
    PUSH EAX                            ; 0040f07d
    CALL FUN_0040b670                   ; 0040f07e
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    MOV EDX,dword ptr [0x006108f4]      ; 0040f083 | DAT_006108f4
    ADD ESP,0x8                         ; 0040f089
    CMP EDX,0x2                         ; 0040f08c
    JGE 0x0040f09c                      ; 0040f08f
        ;   XREF to: 0040f09c (CONDITIONAL_JUMP)  ; LAB_0040f09c
    CMP dword ptr [0x006108f4],0x3      ; 0040f091 | DAT_006108f4
    JGE 0x0040f0bb                      ; 0040f098
        ;   XREF to: 0040f0bb (CONDITIONAL_JUMP)  ; LAB_0040f0bb
    POP EBX                             ; 0040f09a
    RET                                 ; 0040f09b
    PUSH 0x5d334f                       ; 0040f09c | = "groundType"
        ;   Label: LAB_0040f09c
    LEA EAX,[EBX + 0x2dc]               ; 0040f0a1
    PUSH EAX                            ; 0040f0a7
    CALL FUN_0040b670                   ; 0040f0a8
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 0040f0ad
    CMP dword ptr [0x006108f4],0x3      ; 0040f0b0 | DAT_006108f4
    JGE 0x0040f0bb                      ; 0040f0b7
        ;   XREF to: 0040f0bb (CONDITIONAL_JUMP)  ; LAB_0040f0bb
    POP EBX                             ; 0040f0b9
    RET                                 ; 0040f0ba
    PUSH 0x5d335a                       ; 0040f0bb | = "castShadowsFlag"
        ;   Label: LAB_0040f0bb
    ADD EBX,0x158                       ; 0040f0c0
    PUSH EBX                            ; 0040f0c6
    CALL FUN_0040b670                   ; 0040f0c7
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 0040f0cc
    POP EBX                             ; 0040f0cf
    RET                                 ; 0040f0d0

