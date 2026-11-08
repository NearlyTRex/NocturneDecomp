; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004b2840(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f7500
;
; Called Functions:
;   FUN_004ce3d0
;   FUN_005ade00
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2840
        ;   Label: FUN_004b2840
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b2841
    TEST byte ptr [ESP + 0xc],0x4       ; 004b2845
    JNZ 0x004b287d                      ; 004b284a
        ;   XREF to: 004b287d (CONDITIONAL_JUMP)  ; LAB_004b287d
    PUSH 0x0                            ; 004b284c
    ADD EBX,0x25680                     ; 004b284e
    PUSH EBX                            ; 004b2854
    CALL FUN_005ade00                   ; 004b2855
        ;   XREF to: 005ade00 (UNCONDITIONAL_CALL)  ; undefined FUN_005ade00()
    ADD ESP,0x8                         ; 004b285a
    PUSH 0x1                            ; 004b285d
    LEA EBX,[EAX + 0xfffda980]          ; 004b285f
    PUSH EBX                            ; 004b2865
    CALL FUN_004ce3d0                   ; 004b2866
        ;   XREF to: 004ce3d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce3d0()
    ADD ESP,0x8                         ; 004b286b
    MOV DL,byte ptr [ESP + 0xc]         ; 004b286e
    MOV EBX,EAX                         ; 004b2872
    TEST DL,0x2                         ; 004b2874
    JNZ 0x004b2898                      ; 004b2877
        ;   XREF to: 004b2898 (CONDITIONAL_JUMP)  ; LAB_004b2898
    MOV EAX,EBX                         ; 004b2879
    POP EBX                             ; 004b287b
    RET                                 ; 004b287c
    PUSH 0x5f7500                       ; 004b287d | DAT_005f7500
        ;   Label: LAB_004b287d
    PUSH EBX                            ; 004b2882
    CALL FUN_005b7fa7                   ; 004b2883
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 004b2888
    PUSH EAX                            ; 004b288b
    CALL FUN_005b7fce                   ; 004b288c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 004b2891
    MOV EAX,EBX                         ; 004b2894
    POP EBX                             ; 004b2896
    RET                                 ; 004b2897
    PUSH EAX                            ; 004b2898
        ;   Label: LAB_004b2898
    CALL FUN_005b7fdc                   ; 004b2899
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004b289e
    MOV EAX,EBX                         ; 004b28a1
    POP EBX                             ; 004b28a3
    RET                                 ; 004b28a4

