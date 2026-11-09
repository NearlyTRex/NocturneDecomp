; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_hero_cpp_FUN_004ce9d0(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 g_CBasicEnemyClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02668498]      ; 004ce9d0 | g_CBasicEnemyClassInfo.name_hash
        ;   Label: core_hero.cpp_FUN_004ce9d0
    PUSH EDX                            ; 004ce9d6
    MOV ECX,dword ptr [ESP + 0xc]       ; 004ce9d7
    PUSH ECX                            ; 004ce9db
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004ce9dc
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004ce9e1
    TEST EAX,EAX                        ; 004ce9e4
    JZ 0x004ce9fa                       ; 004ce9e6
        ;   XREF to: 004ce9fa (CONDITIONAL_JUMP)  ; LAB_004ce9fa
    MOV EAX,dword ptr [EAX + 0x11344]   ; 004ce9e8
    TEST EAX,EAX                        ; 004ce9ee
    JBE 0x004ce9fa                      ; 004ce9f0
        ;   XREF to: 004ce9fa (CONDITIONAL_JUMP)  ; LAB_004ce9fa
    CMP EAX,0x2                         ; 004ce9f2
    JNZ 0x004ce9fa                      ; 004ce9f5
        ;   XREF to: 004ce9fa (CONDITIONAL_JUMP)  ; LAB_004ce9fa
    XOR EAX,EAX                         ; 004ce9f7
    RET                                 ; 004ce9f9
    MOV EAX,0x1                         ; 004ce9fa
        ;   Label: LAB_004ce9fa
    RET                                 ; 004ce9ff

