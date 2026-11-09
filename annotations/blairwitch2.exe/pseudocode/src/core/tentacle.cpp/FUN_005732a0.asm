; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_tentacle_cpp_FUN_005732a0(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005ec542
;
; Called Functions:
;   core_actor.cpp_FUN_0040c890
;   core_motion.cpp_FUN_005035c0
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005732a0
        ;   Label: core_tentacle.cpp_FUN_005732a0
    MOV EBP,ESP                         ; 005732a1
    MOV EAX,dword ptr [EBP + 0x8]       ; 005732a3
    PUSH 0x5ec542                       ; 005732a6 | DAT_005ec542
    ADD EAX,0x2b4                       ; 005732ab
    PUSH EAX                            ; 005732b0
    CALL core_motion.cpp_FUN_005035c0   ; 005732b1
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 005732b6
    PUSH EAX                            ; 005732b9
    CALL crt_string.c__stricmp_FUN_005b8130 ; 005732ba
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 005732bf
    TEST EAX,EAX                        ; 005732c2
    JNZ 0x005732cd                      ; 005732c4
        ;   XREF to: 005732cd (CONDITIONAL_JUMP)  ; LAB_005732cd
    MOV EAX,0x1                         ; 005732c6
    POP EBP                             ; 005732cb
    RET                                 ; 005732cc
    MOV EDX,dword ptr [EBP + 0x8]       ; 005732cd
        ;   Label: LAB_005732cd
    PUSH EDX                            ; 005732d0
    CALL core_actor.cpp_FUN_0040c890    ; 005732d1
        ;   XREF to: 0040c890 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c890(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005732d6
    POP EBP                             ; 005732d9
    RET                                 ; 005732da

