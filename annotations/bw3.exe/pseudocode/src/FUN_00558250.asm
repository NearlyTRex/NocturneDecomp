; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00558250(void)
;
;
; XREF[7]:
;   FUN_004e94f0 at 004ea141
;   FUN_00556760 at 0055676b
;   FUN_00558010 at 00558024
;   FUN_00558050 at 0055807e
;   FUN_005587e0 at 005587e2
;   FUN_0055fee0 at 0055ff24
;   FUN_00560930 at 00560930
;
; Referenced Globals:
;   undefined4 DAT_02cf3280
;   undefined4 DAT_02cf3284
;
; Called Functions:
;   FUN_00552b30
;   FUN_00556c60
;
; *****************************************************************************

section .text

    CALL FUN_00556c60                   ; 00558250
        ;   XREF to: 00556c60 (UNCONDITIONAL_CALL)  ; undefined FUN_00556c60()
        ;   Label: FUN_00558250
    MOV EDX,dword ptr [0x02cf3280]      ; 00558255 | DAT_02cf3280
    TEST EDX,EDX                        ; 0055825b
    JZ 0x0055826f                       ; 0055825d
        ;   XREF to: 0055826f (CONDITIONAL_JUMP)  ; LAB_0055826f
    MOV EAX,EDX                         ; 0055825f
    PUSH EAX                            ; 00558261
    MOV EDX,dword ptr [EDX]             ; 00558262
    CALL dword ptr [EDX + 0x8]          ; 00558264
    ADD ESP,0x4                         ; 00558267
    TEST EAX,EAX                        ; 0055826a
    JNZ 0x0055826f                      ; 0055826c
        ;   XREF to: 0055826f (CONDITIONAL_JUMP)  ; LAB_0055826f
    RET                                 ; 0055826e
    XOR ECX,ECX                         ; 0055826f
        ;   Label: LAB_0055826f
    MOV dword ptr [0x02cf3284],ECX      ; 00558271 | DAT_02cf3284
    CALL FUN_00552b30                   ; 00558277
        ;   XREF to: 00552b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00552b30()
    MOV EAX,0x1                         ; 0055827c
    RET                                 ; 00558281

