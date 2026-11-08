; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_005a1860(undefined4 *param_1,byte param_2)
;
;
; XREF[5]:
;   FUN_00402940 at 00402a77
;   FUN_00442e10 at 00442ea6
;   FUN_00453610 at 00453be6
;   FUN_004d6420 at 004d681c
;   FUN_004d6990 at 004d6d6f
;
; Referenced Globals:
;   undefined4 DAT_005fb2f0
;   undefined1* PTR_FUN_00607424 = 005a1860
;
; Called Functions:
;   FUN_005a14b0
;   FUN_005a19b0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1860
        ;   Label: FUN_005a1860
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a1861
    TEST byte ptr [ESP + 0xc],0x4       ; 005a1865
    JNZ 0x005a1895                      ; 005a186a
        ;   XREF to: 005a1895 (CONDITIONAL_JUMP)  ; LAB_005a1895
    PUSH EBX                            ; 005a186c
    MOV dword ptr [EBX],0x607424        ; 005a186d | PTR_FUN_00607424
    CALL FUN_005a19b0                   ; 005a1873
        ;   XREF to: 005a19b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a19b0()
    ADD ESP,0x4                         ; 005a1878
    PUSH 0x1                            ; 005a187b
    PUSH EBX                            ; 005a187d
    CALL FUN_005a14b0                   ; 005a187e
        ;   XREF to: 005a14b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a14b0()
    ADD ESP,0x8                         ; 005a1883
    MOV DL,byte ptr [ESP + 0xc]         ; 005a1886
    MOV EBX,EAX                         ; 005a188a
    TEST DL,0x2                         ; 005a188c
    JNZ 0x005a18b0                      ; 005a188f
        ;   XREF to: 005a18b0 (CONDITIONAL_JUMP)  ; LAB_005a18b0
    MOV EAX,EBX                         ; 005a1891
    POP EBX                             ; 005a1893
    RET                                 ; 005a1894
    PUSH 0x5fb2f0                       ; 005a1895 | DAT_005fb2f0
        ;   Label: LAB_005a1895
    PUSH EBX                            ; 005a189a
    CALL FUN_005c030f                   ; 005a189b
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 005a18a0
    PUSH EAX                            ; 005a18a3
    CALL FUN_005c0336                   ; 005a18a4
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 005a18a9
    MOV EAX,EBX                         ; 005a18ac
    POP EBX                             ; 005a18ae
    RET                                 ; 005a18af
    PUSH EAX                            ; 005a18b0
        ;   Label: LAB_005a18b0
    CALL FUN_005c0344                   ; 005a18b1
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 005a18b6
    MOV EAX,EBX                         ; 005a18b9
    POP EBX                             ; 005a18bb
    RET                                 ; 005a18bc

