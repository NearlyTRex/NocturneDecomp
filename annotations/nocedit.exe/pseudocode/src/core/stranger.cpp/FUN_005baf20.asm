; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 core_stranger_cpp_FUN_005baf20(void)
;
;
; Referenced Globals:
;   undefined4 g_CMeleeClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005baf20
        ;   Label: core_stranger.cpp_FUN_005baf20
    TEST EDX,EDX                        ; 005baf24
    JZ 0x005baf3d                       ; 005baf26
        ;   XREF to: 005baf3d (CONDITIONAL_JUMP)  ; caseD_8
    MOV EAX,dword ptr [EDX + 0x2e0]     ; 005baf28
    CMP EAX,0x7                         ; 005baf2e
    JNC 0x005baf63                      ; 005baf31
        ;   XREF to: 005baf63 (CONDITIONAL_JUMP)  ; LAB_005baf63
    TEST EAX,EAX                        ; 005baf33
    JNZ 0x005baf6a                      ; 005baf35
        ;   XREF to: 005baf6a (CONDITIONAL_JUMP)  ; LAB_005baf6a
    MOV EAX,0x1                         ; 005baf37
    RET                                 ; 005baf3c
    MOV ECX,dword ptr [0x02f0d928]      ; 005baf40 | g_CMeleeClassInfo.name_hash
        ;   Label: LAB_005baf40
    PUSH ECX                            ; 005baf46
    PUSH EDX                            ; 005baf47
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005baf48
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005baf4d
    TEST EAX,EAX                        ; 005baf50
    JZ 0x005baf3d                       ; 005baf52
        ;   XREF to: 005baf3d (CONDITIONAL_JUMP)  ; caseD_8
    CMP dword ptr [EAX + 0x588],0x0     ; 005baf54
    JZ 0x005baf3d                       ; 005baf5b
        ;   XREF to: 005baf3d (CONDITIONAL_JUMP)  ; caseD_8
    MOV EAX,0x3                         ; 005baf5d
    RET                                 ; 005baf62
    JBE 0x005baf40                      ; 005baf63
        ;   XREF to: 005baf40 (CONDITIONAL_JUMP)  ; LAB_005baf40
        ;   Label: LAB_005baf63
    CMP EAX,0x8                         ; 005baf65
    JZ 0x005baf40                       ; 005baf68
        ;   XREF to: 005baf40 (CONDITIONAL_JUMP)  ; LAB_005baf40
    MOV EAX,0x3                         ; 005baf6a
        ;   Label: LAB_005baf6a
    RET                                 ; 005baf6f

