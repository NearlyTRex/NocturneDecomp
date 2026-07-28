; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_stranger_cpp_CStranger_getGrabbed_FUN_00540770(CHero *param_1,CDemonActor *param_2,int param_3)
;
;
; Called Functions:
;   core_hero.cpp_CHero_getGrabbed_FUN_004b4c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540770
        ;   Label: core_stranger.cpp_CStranger_getGrabbed_FUN_00540770
    PUSH ESI                            ; 00540771
    PUSH EBP                            ; 00540772
    MOV EBX,dword ptr [ESP + 0x10]      ; 00540773
    CMP dword ptr [EBX + 0x1fa08],0x0   ; 00540777
    JNZ 0x0054080d                      ; 0054077e
        ;   XREF to: 0054080d (CONDITIONAL_JUMP)  ; LAB_0054080d
    CMP dword ptr [EBX + 0x1fa04],0x0   ; 00540784
    JNZ 0x0054080d                      ; 0054078b
        ;   XREF to: 0054080d (CONDITIONAL_JUMP)  ; LAB_0054080d
    MOV ESI,dword ptr [EBX + 0x1faa0]   ; 00540791
    TEST ESI,ESI                        ; 00540797
    JZ 0x005407a0                       ; 00540799
        ;   XREF to: 005407a0 (CONDITIONAL_JUMP)  ; LAB_005407a0
    CMP ESI,0x3                         ; 0054079b
    JNZ 0x0054080d                      ; 0054079e
        ;   XREF to: 0054080d (CONDITIONAL_JUMP)  ; LAB_0054080d
    MOV EBP,dword ptr [ESP + 0x18]      ; 005407a0
        ;   Label: LAB_005407a0
    PUSH EBP                            ; 005407a4
    MOV EAX,dword ptr [ESP + 0x18]      ; 005407a5
    PUSH EAX                            ; 005407a9
    PUSH EBX                            ; 005407aa
    CALL core_hero.cpp_CHero_getGrabbed_FUN_004b4c70 ; 005407ab
        ;   XREF to: 004b4c70 (UNCONDITIONAL_CALL)  ; int core_hero.cpp_CHero_getGrabbed_FUN_004b4c70(CHero * this_ptr, CDemonActor * grabber, int grab_type)
    ADD ESP,0xc                         ; 005407b0
    MOV ESI,EAX                         ; 005407b3
    TEST EAX,EAX                        ; 005407b5
    JZ 0x00540807                       ; 005407b7
        ;   XREF to: 00540807 (CONDITIONAL_JUMP)  ; LAB_00540807
    MOV EDX,dword ptr [EBX + 0x1fa94]   ; 005407b9
    CMP EDX,dword ptr [EBX + 0x24ac]    ; 005407bf
    JZ 0x005407db                       ; 005407c5
        ;   XREF to: 005407db (CONDITIONAL_JUMP)  ; LAB_005407db
    PUSH 0x0                            ; 005407c7
    PUSH 0x0                            ; 005407c9
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005407cb
    PUSH EBX                            ; 005407d1
    CALL dword ptr [EAX + 0x120]        ; 005407d2
    ADD ESP,0xc                         ; 005407d8
    MOV ECX,dword ptr [EBX + 0x1fa94]   ; 005407db
        ;   Label: LAB_005407db
    CMP ECX,dword ptr [EBX + 0x24f0]    ; 005407e1
    JZ 0x005407fd                       ; 005407e7
        ;   XREF to: 005407fd (CONDITIONAL_JUMP)  ; LAB_005407fd
    PUSH 0x0                            ; 005407e9
    PUSH 0x1                            ; 005407eb
    MOV EAX,dword ptr [EBX + 0x14c]     ; 005407ed
    PUSH EBX                            ; 005407f3
    CALL dword ptr [EAX + 0x120]        ; 005407f4
    ADD ESP,0xc                         ; 005407fa
    MOV dword ptr [EBX + 0x1fb3c],0x0   ; 005407fd
        ;   Label: LAB_005407fd
    MOV EAX,ESI                         ; 00540807
        ;   Label: LAB_00540807
    POP EBP                             ; 00540809
    POP ESI                             ; 0054080a
    POP EBX                             ; 0054080b
    RET                                 ; 0054080c
    XOR EAX,EAX                         ; 0054080d
        ;   Label: LAB_0054080d
    POP EBP                             ; 0054080f
    POP ESI                             ; 00540810
    POP EBX                             ; 00540811
    RET                                 ; 00540812

