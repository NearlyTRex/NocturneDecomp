; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_004a2930(undefined4 param_1,undefined4 param_2,undefined4 param_3,CKeyFramedModel *param_4,undefined4 param_5)
;
;
; XREF[2]:
;   core_actor.cpp_FUN_0040cab0 at 0040cce0
;   core_emitter.cpp_FUN_00487eb0 at 0048849a
;
; Referenced Globals:
;   undefined4 DAT_01cf3b84
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   core_fire.cpp_FUN_0049a140
;   crt_stdlib.c_rand_FUN_005a35cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2930
        ;   Label: core_fire.cpp_FUN_004a2930
    PUSH EBP                            ; 004a2931
    MOV ECX,dword ptr [ESP + 0x18]      ; 004a2932
    MOV EDX,dword ptr [0x01cf3b84]      ; 004a2936 | DAT_01cf3b84
    LEA EAX,[EDX*0x4 + 0x0]             ; 004a293c
    ADD EAX,EDX                         ; 004a2943
    SHL EAX,0x2                         ; 004a2945
    MOV EBX,0x1cf3b88                   ; 004a2948
    ADD EAX,EDX                         ; 004a294d
    INC EDX                             ; 004a294f
    SHL EAX,0x2                         ; 004a2950
    MOV dword ptr [0x01cf3b84],EDX      ; 004a2953 | DAT_01cf3b84
    ADD EBX,EAX                         ; 004a2959
    CMP EDX,0x40                        ; 004a295b
    JGE 0x004a297f                      ; 004a295e
        ;   XREF to: 004a297f (CONDITIONAL_JUMP)  ; LAB_004a297f
    TEST ECX,ECX                        ; 004a2960
        ;   Label: LAB_004a2960
    JZ 0x004a298b                       ; 004a2962
        ;   XREF to: 004a298b (CONDITIONAL_JUMP)  ; LAB_004a298b
    PUSH dword ptr [ESP + 0x1c]         ; 004a2964
        ;   Label: LAB_004a2964
    PUSH ECX                            ; 004a2968
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004a2969
    PUSH EBP                            ; 004a296d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004a296e
    PUSH EAX                            ; 004a2972
    PUSH EBX                            ; 004a2973
    CALL core_fire.cpp_FUN_0049a140     ; 004a2974
        ;   XREF to: 0049a140 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_0049a140()
    ADD ESP,0x14                        ; 004a2979
    POP EBP                             ; 004a297c
    POP EBX                             ; 004a297d
    RET                                 ; 004a297e
    PUSH EDI                            ; 004a297f
        ;   Label: LAB_004a297f
    XOR EDI,EDI                         ; 004a2980
    MOV dword ptr [0x01cf3b84],EDI      ; 004a2982 | DAT_01cf3b84
    POP EDI                             ; 004a2988
    JMP 0x004a2960                      ; 004a2989
        ;   XREF to: 004a2960 (UNCONDITIONAL_JUMP)  ; LAB_004a2960
    CALL crt_stdlib.c_rand_FUN_005a35cc ; 004a298b
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005a35cc()
        ;   Label: LAB_004a298b
    MOV EDX,EAX                         ; 004a2990
    MOV ECX,0x4                         ; 004a2992
    SAR EDX,0x1f                        ; 004a2997
    IDIV ECX                            ; 004a299a
    LEA EAX,[EDX*0x4 + 0x0]             ; 004a299c
    ADD EAX,EDX                         ; 004a29a3
    SHL EAX,0x2                         ; 004a29a5
    SUB EAX,EDX                         ; 004a29a8
    SHL EAX,0x2                         ; 004a29aa
    MOV EDX,EAX                         ; 004a29ad
    SHL EAX,0x2                         ; 004a29af
    ADD EAX,EDX                         ; 004a29b2
    ADD EAX,0x1c73c88                   ; 004a29b4
    PUSH EAX                            ; 004a29b9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 004a29ba
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004a29bf
    MOV ECX,EAX                         ; 004a29c2
    JMP 0x004a2964                      ; 004a29c4
        ;   XREF to: 004a2964 (UNCONDITIONAL_JUMP)  ; LAB_004a2964

