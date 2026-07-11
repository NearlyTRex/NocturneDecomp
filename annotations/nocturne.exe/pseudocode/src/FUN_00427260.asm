; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00427260(int param_1)
;
;
; Called Functions:
;   FUN_00427290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427260
        ;   Label: FUN_00427260
    MOV EBX,dword ptr [ESP + 0x8]       ; 00427261
    CMP dword ptr [EBX + 0x2f08],0x0    ; 00427265
    JLE 0x00427277                      ; 0042726c
        ;   XREF to: 00427277 (CONDITIONAL_JUMP)  ; LAB_00427277
    CMP dword ptr [EBX + 0x2618],0x0    ; 0042726e
    JNZ 0x0042727f                      ; 00427275
        ;   XREF to: 0042727f (CONDITIONAL_JUMP)  ; LAB_0042727f
    MOV EAX,dword ptr [EBX + 0x2618]    ; 00427277
        ;   Label: LAB_00427277
    POP EBX                             ; 0042727d
    RET                                 ; 0042727e
    PUSH EBX                            ; 0042727f
        ;   Label: LAB_0042727f
    CALL FUN_00427290                   ; 00427280
        ;   XREF to: 00427290 (UNCONDITIONAL_CALL)  ; undefined FUN_00427290()
    ADD ESP,0x4                         ; 00427285
    MOV EAX,dword ptr [EBX + 0x2618]    ; 00427288
    POP EBX                             ; 0042728e
    RET                                 ; 0042728f

