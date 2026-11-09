; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_door_cpp_factoryFuncDoor_FUN_00477240(void)
;
;
; Called Functions:
;   core_door.cpp_CDoor_ctor_FUN_00477270
;   crt_unknown.c_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xa4c                          ; 00477240
        ;   Label: core_door.cpp_factoryFuncDoor_FUN_00477240
    CALL crt_unknown.c_FUN_005c0f32     ; 00477245
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f32()
    ADD ESP,0x4                         ; 0047724a
    TEST EAX,EAX                        ; 0047724d
    JNZ 0x00477252                      ; 0047724f
        ;   XREF to: 00477252 (CONDITIONAL_JUMP)  ; LAB_00477252
    RET                                 ; 00477251
    PUSH EAX                            ; 00477252
        ;   Label: LAB_00477252
    CALL core_door.cpp_CDoor_ctor_FUN_00477270 ; 00477253
        ;   XREF to: 00477270 (UNCONDITIONAL_CALL)  ; CDoor * core_door.cpp_CDoor_ctor_FUN_00477270(CDoor * this_ptr)
    ADD ESP,0x4                         ; 00477258
    RET                                 ; 0047725b

