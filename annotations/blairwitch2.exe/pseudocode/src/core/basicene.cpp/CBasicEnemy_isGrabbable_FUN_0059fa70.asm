; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_basicene_cpp_CBasicEnemy_isGrabbable_FUN_0059fa70(CBasicEnemy *this_ptr,CDemonActor *grabber)
;
; Parameters:
; CBasicEnemy *    Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   grabber
;
; Referenced Globals:
;   undefined4 g_CBasicEnemyClassInfo.name_hash
;   undefined4 g_CDogClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059fa70
        ;   Label: core_basicene.cpp_CBasicEnemy_isGrabbable_FUN_0059fa70
    PUSH ESI                            ; 0059fa71
    MOV EAX,dword ptr [ESP + 0x10]      ; 0059fa72
    MOV EDX,dword ptr [ESP + 0xc]       ; 0059fa76
    CMP EAX,EDX                         ; 0059fa7a
    JNZ 0x0059fa83                      ; 0059fa7c
        ;   XREF to: 0059fa83 (CONDITIONAL_JUMP)  ; LAB_0059fa83
    XOR EAX,EDX                         ; 0059fa7e
    POP ESI                             ; 0059fa80
    POP EBX                             ; 0059fa81
    RET                                 ; 0059fa82
    MOV ECX,dword ptr [0x02668498]      ; 0059fa83 | g_CBasicEnemyClassInfo.name_hash
        ;   Label: LAB_0059fa83
    PUSH ECX                            ; 0059fa89
    PUSH EAX                            ; 0059fa8a
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0059fa8b
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0059fa90
    TEST EAX,EAX                        ; 0059fa93
    JZ 0x0059fad5                       ; 0059fa95
        ;   XREF to: 0059fad5 (CONDITIONAL_JUMP)  ; LAB_0059fad5
    MOV EAX,dword ptr [EAX + 0x11344]   ; 0059fa97
    CMP EAX,0x1                         ; 0059fa9d
    JNC 0x0059face                      ; 0059faa0
        ;   XREF to: 0059face (CONDITIONAL_JUMP)  ; LAB_0059face
    TEST EAX,EAX                        ; 0059faa2
    JNZ 0x0059fad5                      ; 0059faa4
        ;   XREF to: 0059fad5 (CONDITIONAL_JUMP)  ; LAB_0059fad5
    POP ESI                             ; 0059faa6
    POP EBX                             ; 0059faa7
    RET                                 ; 0059faa8
    MOV EAX,0x1                         ; 0059faa9
        ;   Label: LAB_0059faa9
    POP ESI                             ; 0059faae
    POP EBX                             ; 0059faaf
    RET                                 ; 0059fab0
    MOV EBX,dword ptr [0x02668958]      ; 0059fab1 | g_CDogClassInfo.name_hash
        ;   Label: LAB_0059fab1
    PUSH EBX                            ; 0059fab7
    MOV ESI,dword ptr [ESP + 0x10]      ; 0059fab8
    PUSH ESI                            ; 0059fabc
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0059fabd
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0059fac2
    TEST EAX,EAX                        ; 0059fac5
    JZ 0x0059faa9                       ; 0059fac7
        ;   XREF to: 0059faa9 (CONDITIONAL_JUMP)  ; LAB_0059faa9
    XOR EAX,EAX                         ; 0059fac9
    POP ESI                             ; 0059facb
    POP EBX                             ; 0059facc
    RET                                 ; 0059facd
    JBE 0x0059fab1                      ; 0059face
        ;   XREF to: 0059fab1 (CONDITIONAL_JUMP)  ; LAB_0059fab1
        ;   Label: LAB_0059face
    CMP EAX,0x2                         ; 0059fad0
    JZ 0x0059faa9                       ; 0059fad3
        ;   XREF to: 0059faa9 (CONDITIONAL_JUMP)  ; LAB_0059faa9
    MOV EAX,0x1                         ; 0059fad5
        ;   Label: LAB_0059fad5
    POP ESI                             ; 0059fada
    POP EBX                             ; 0059fadb
    RET                                 ; 0059fadc

