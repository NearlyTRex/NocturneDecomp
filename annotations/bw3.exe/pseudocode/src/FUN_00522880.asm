; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00522880(int param_1)
;
;
; Called Functions:
;   FUN_0042f510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00522880
        ;   Label: FUN_00522880
    MOV EBX,dword ptr [ESP + 0x8]       ; 00522881
    PUSH EBX                            ; 00522885
    CALL FUN_0042f510                   ; 00522886
        ;   XREF to: 0042f510 (UNCONDITIONAL_CALL)  ; undefined FUN_0042f510()
    MOV EDX,dword ptr [EBX + 0x20c24]   ; 0052288b
    ADD ESP,0x4                         ; 00522891
    TEST EDX,EDX                        ; 00522894
    JNZ 0x0052289f                      ; 00522896
        ;   XREF to: 0052289f (CONDITIONAL_JUMP)  ; LAB_0052289f
    MOV EAX,0x1                         ; 00522898
    POP EBX                             ; 0052289d
    RET                                 ; 0052289e
    MOV EAX,EDX                         ; 0052289f
        ;   Label: LAB_0052289f
    PUSH EAX                            ; 005228a1
    MOV EDX,dword ptr [EDX + 0x154]     ; 005228a2
    CALL dword ptr [EDX + 0x14]         ; 005228a8
    ADD ESP,0x4                         ; 005228ab
    MOV EAX,0x1                         ; 005228ae
    POP EBX                             ; 005228b3
    RET                                 ; 005228b4

