; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_lightgun_cpp_FUN_004ffff0(CCharacter *param_1)
;
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ffff0
        ;   Label: core_lightgun.cpp_FUN_004ffff0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ffff1
    PUSH EBX                            ; 004ffff5
    MOV EAX,dword ptr [EBX + 0x154]     ; 004ffff6
    CALL dword ptr [EAX + 0xe0]         ; 004ffffc
    ADD ESP,0x4                         ; 00500002
    TEST EAX,EAX                        ; 00500005
    JZ 0x0050000d                       ; 00500007
        ;   XREF to: 0050000d (CONDITIONAL_JUMP)  ; LAB_0050000d
    XOR EAX,EAX                         ; 00500009
    POP EBX                             ; 0050000b
        ;   Label: LAB_0050000b
    RET                                 ; 0050000c
    PUSH 0x5e6e49                       ; 0050000d
        ;   Label: LAB_0050000d
    PUSH EBX                            ; 00500012
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 00500013
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00500018
    TEST EAX,EAX                        ; 0050001b
    JZ 0x00500026                       ; 0050001d
        ;   XREF to: 00500026 (CONDITIONAL_JUMP)  ; LAB_00500026
    MOV EAX,0x1                         ; 0050001f
    POP EBX                             ; 00500024
    RET                                 ; 00500025
    PUSH 0x5e6e50                       ; 00500026
        ;   Label: LAB_00500026
    PUSH EBX                            ; 0050002b
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 0050002c
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00500031
    TEST EAX,EAX                        ; 00500034
    JZ 0x0050003f                       ; 00500036
        ;   XREF to: 0050003f (CONDITIONAL_JUMP)  ; LAB_0050003f
    MOV EAX,0x1                         ; 00500038
    POP EBX                             ; 0050003d
    RET                                 ; 0050003e
    PUSH 0x5e6e57                       ; 0050003f
        ;   Label: LAB_0050003f
    PUSH EBX                            ; 00500044
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 00500045
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0050004a
    TEST EAX,EAX                        ; 0050004d
    JZ 0x00500058                       ; 0050004f
        ;   XREF to: 00500058 (CONDITIONAL_JUMP)  ; LAB_00500058
    MOV EAX,0x1                         ; 00500051
    POP EBX                             ; 00500056
    RET                                 ; 00500057
    PUSH 0x5e6e64                       ; 00500058
        ;   Label: LAB_00500058
    PUSH EBX                            ; 0050005d
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 0050005e
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00500063
    TEST EAX,EAX                        ; 00500066
    JZ 0x00500071                       ; 00500068
        ;   XREF to: 00500071 (CONDITIONAL_JUMP)  ; LAB_00500071
    MOV EAX,0x1                         ; 0050006a
    POP EBX                             ; 0050006f
    RET                                 ; 00500070
    PUSH 0x5e6e6e                       ; 00500071
        ;   Label: LAB_00500071
    PUSH EBX                            ; 00500076
    CALL core_actor.cpp_isOfClass_FUN_0040c550 ; 00500077
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0050007c
    TEST EAX,EAX                        ; 0050007f
    JZ 0x0050000b                       ; 00500081
        ;   XREF to: 0050000b (CONDITIONAL_JUMP)  ; LAB_0050000b
    MOV EAX,0x1                         ; 00500083
    POP EBX                             ; 00500088
    RET                                 ; 00500089

