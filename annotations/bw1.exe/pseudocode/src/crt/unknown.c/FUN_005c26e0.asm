; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c26e0(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   crt_time.c__localtime_FUN_005c2738 at 005c2747
;
; Referenced Globals:
;   undefined4 DAT_00626998
;   undefined4 DAT_006269a0
;
; Called Functions:
;   crt_unknown.c_FUN_005c9428
;   crt_unknown.c_FUN_005c97c0
;   crt_unknown.c_FUN_005c9ae4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c26e0
        ;   Label: crt_unknown.c_FUN_005c26e0
    PUSH ESI                            ; 005c26e1
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c26e2
    CALL crt_unknown.c_FUN_005c9428     ; 005c26e6
        ;   XREF to: 005c9428 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9428()
    PUSH EBX                            ; 005c26eb
    MOV EDX,dword ptr [0x00626998]      ; 005c26ec | DAT_00626998
    MOV ESI,dword ptr [ESP + 0x10]      ; 005c26f2
    PUSH EDX                            ; 005c26f6
    MOV ESI,dword ptr [ESI]             ; 005c26f7
    PUSH ESI                            ; 005c26f9
    PUSH 0x63df                         ; 005c26fa
    CALL crt_unknown.c_FUN_005c97c0     ; 005c26ff
        ;   XREF to: 005c97c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c97c0()
    ADD ESP,0x10                        ; 005c2704
    PUSH EBX                            ; 005c2707
    CALL crt_unknown.c_FUN_005c9ae4     ; 005c2708
        ;   XREF to: 005c9ae4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9ae4()
    ADD ESP,0x4                         ; 005c270d
    TEST EAX,EAX                        ; 005c2710
    JZ 0x005c2731                       ; 005c2712
        ;   XREF to: 005c2731 (CONDITIONAL_JUMP)  ; LAB_005c2731
    MOV EAX,[0x00626998]                ; 005c2714 | DAT_00626998
    MOV ECX,dword ptr [0x006269a0]      ; 005c2719 | DAT_006269a0
    PUSH EBX                            ; 005c271f
    SUB EAX,ECX                         ; 005c2720
    PUSH EAX                            ; 005c2722
    PUSH ESI                            ; 005c2723
    PUSH 0x63df                         ; 005c2724
    CALL crt_unknown.c_FUN_005c97c0     ; 005c2729
        ;   XREF to: 005c97c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c97c0()
    ADD ESP,0x10                        ; 005c272e
    MOV EAX,EBX                         ; 005c2731
        ;   Label: LAB_005c2731
    POP ESI                             ; 005c2733
    POP EBX                             ; 005c2734
    RET                                 ; 005c2735

