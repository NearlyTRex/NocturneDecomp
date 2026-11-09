; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_inv_cpp_FUN_004db760(undefined4 param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_actor.cpp_FUN_00408a50
;   core_ammo.cpp_CAmmo_ctor_FUN_0040ddb0
;   core_ammo.cpp_FUN_0040e240
;   core_inv.cpp_FUN_004dadb0
;   core_main.c_FUN_004e4500
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004db760
        ;   Label: core_inv.cpp_FUN_004db760
    PUSH EBP                            ; 004db761
    MOV ESI,dword ptr [ESP + 0x10]      ; 004db762
    CMP dword ptr [ESI + 0x6c8],-0x1    ; 004db766
    JNZ 0x004db772                      ; 004db76d
        ;   XREF to: 004db772 (CONDITIONAL_JUMP)  ; LAB_004db772
    POP EBP                             ; 004db76f
    POP ESI                             ; 004db770
    RET                                 ; 004db771
    PUSH 0x47c                          ; 004db772
        ;   Label: LAB_004db772
    CALL crt_unknown.c_FUN_005b8be2     ; 004db777
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 004db77c
    TEST EAX,EAX                        ; 004db77f
    JZ 0x004db78c                       ; 004db781
        ;   XREF to: 004db78c (CONDITIONAL_JUMP)  ; LAB_004db78c
    PUSH EAX                            ; 004db783
    CALL core_ammo.cpp_CAmmo_ctor_FUN_0040ddb0 ; 004db784
        ;   XREF to: 0040ddb0 (UNCONDITIONAL_CALL)  ; CAmmo * core_ammo.cpp_CAmmo_ctor_FUN_0040ddb0(CAmmo * this_ptr)
    ADD ESP,0x4                         ; 004db789
    PUSH EDI                            ; 004db78c
        ;   Label: LAB_004db78c
    PUSH EBX                            ; 004db78d
    MOV EBX,EAX                         ; 004db78e
    TEST EAX,EAX                        ; 004db790
    JNZ 0x004db7b7                      ; 004db792
        ;   XREF to: 004db7b7 (CONDITIONAL_JUMP)  ; LAB_004db7b7
    MOV ECX,0x5db70a                    ; 004db794
    MOV EDI,0x3b9                       ; 004db799
    PUSH 0x5db71a                       ; 004db79e
    MOV dword ptr [0x01d046a0],ECX      ; 004db7a3 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 004db7a9 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004db7af
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004db7b4
    MOV EAX,dword ptr [ESI + 0x6c4]     ; 004db7b7
        ;   Label: LAB_004db7b7
    MOV dword ptr [EBX + 0x470],EAX     ; 004db7bd
    MOV EAX,dword ptr [ESI + 0x6c8]     ; 004db7c3
    PUSH ESI                            ; 004db7c9
    MOV dword ptr [EBX + 0x474],EAX     ; 004db7ca
    CALL core_actor.cpp_FUN_00408a50    ; 004db7d0
        ;   XREF to: 00408a50 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408a50()
    ADD ESP,0x4                         ; 004db7d5
    PUSH EAX                            ; 004db7d8
    PUSH EBX                            ; 004db7d9
    CALL core_ammo.cpp_FUN_0040e240     ; 004db7da
        ;   XREF to: 0040e240 (UNCONDITIONAL_CALL)  ; void core_ammo.cpp_FUN_0040e240(CAmmo * this_ptr, char * weapon_class_name)
    ADD ESP,0x8                         ; 004db7df
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004db7e2
    PUSH EBX                            ; 004db7e8
    CALL dword ptr [EAX + 0x8]          ; 004db7e9
    ADD ESP,0x4                         ; 004db7ec
    MOV EDI,EBX                         ; 004db7ef
    MOV ESI,0x5db728                    ; 004db7f1
    PUSH EDI                            ; 004db7f6
    MOV AL,byte ptr [ESI]               ; 004db7f7
        ;   Label: LAB_004db7f7
    MOV byte ptr [EDI],AL               ; 004db7f9
    CMP AL,0x0                          ; 004db7fb
    JZ 0x004db80f                       ; 004db7fd
        ;   XREF to: 004db80f (CONDITIONAL_JUMP)  ; LAB_004db80f
    MOV AL,byte ptr [ESI + 0x1]         ; 004db7ff
    ADD ESI,0x2                         ; 004db802
    MOV byte ptr [EDI + 0x1],AL         ; 004db805
    ADD EDI,0x2                         ; 004db808
    CMP AL,0x0                          ; 004db80b
    JNZ 0x004db7f7                      ; 004db80d
        ;   XREF to: 004db7f7 (CONDITIONAL_JUMP)  ; LAB_004db7f7
    POP EDI                             ; 004db80f
        ;   Label: LAB_004db80f
    PUSH 0x0                            ; 004db810
    PUSH 0x0                            ; 004db812
    PUSH EBX                            ; 004db814
    MOV EBP,dword ptr [ESP + 0x20]      ; 004db815
    PUSH EBP                            ; 004db819
    CALL core_inv.cpp_FUN_004dadb0      ; 004db81a
        ;   XREF to: 004dadb0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004dadb0()
    ADD ESP,0x10                        ; 004db81f
    POP EBX                             ; 004db822
    POP EDI                             ; 004db823
    POP EBP                             ; 004db824
    POP ESI                             ; 004db825
    RET                                 ; 004db826

