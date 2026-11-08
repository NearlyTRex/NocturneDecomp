; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_0057df10(undefined4 *param_1,byte param_2)
;
;
; XREF[3]:
;   FUN_00433f60 at 00433fba
;   FUN_004341e0 at 00434238
;   FUN_00435300 at 00435395
;
; Referenced Globals:
;   undefined4 DAT_005f4390
;   undefined1* PTR_FUN_005fd4b4 = 0057df10
;
; Called Functions:
;   FUN_0057d860
;   FUN_0057e0d0
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057df10
        ;   Label: FUN_0057df10
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057df11
    TEST byte ptr [ESP + 0xc],0x4       ; 0057df15
    JNZ 0x0057df45                      ; 0057df1a
        ;   XREF to: 0057df45 (CONDITIONAL_JUMP)  ; LAB_0057df45
    PUSH EBX                            ; 0057df1c
    MOV dword ptr [EBX],0x5fd4b4        ; 0057df1d | PTR_FUN_005fd4b4
    CALL FUN_0057e0d0                   ; 0057df23
        ;   XREF to: 0057e0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057e0d0()
    ADD ESP,0x4                         ; 0057df28
    PUSH 0x1                            ; 0057df2b
    PUSH EBX                            ; 0057df2d
    CALL FUN_0057d860                   ; 0057df2e
        ;   XREF to: 0057d860 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d860()
    ADD ESP,0x8                         ; 0057df33
    MOV DL,byte ptr [ESP + 0xc]         ; 0057df36
    MOV EBX,EAX                         ; 0057df3a
    TEST DL,0x2                         ; 0057df3c
    JNZ 0x0057df60                      ; 0057df3f
        ;   XREF to: 0057df60 (CONDITIONAL_JUMP)  ; LAB_0057df60
    MOV EAX,EBX                         ; 0057df41
    POP EBX                             ; 0057df43
    RET                                 ; 0057df44
    PUSH 0x5f4390                       ; 0057df45 | DAT_005f4390
        ;   Label: LAB_0057df45
    PUSH EBX                            ; 0057df4a
    CALL FUN_005b7fa7                   ; 0057df4b
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 0057df50
    PUSH EAX                            ; 0057df53
    CALL FUN_005b7fce                   ; 0057df54
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0057df59
    MOV EAX,EBX                         ; 0057df5c
    POP EBX                             ; 0057df5e
    RET                                 ; 0057df5f
    PUSH EAX                            ; 0057df60
        ;   Label: LAB_0057df60
    CALL FUN_005b7fdc                   ; 0057df61
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0057df66
    MOV EAX,EBX                         ; 0057df69
    POP EBX                             ; 0057df6b
    RET                                 ; 0057df6c

