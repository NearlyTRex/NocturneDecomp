; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_bodypart_cpp_FUN_00417ef0(CDemonActor *param_1)
;
;
; Called Functions:
;   core_actor.cpp_FUN_0040b200
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00417ef0
        ;   Label: core_bodypart.cpp_FUN_00417ef0
    CMP dword ptr [EAX + 0x150],0x0     ; 00417ef4
    JZ 0x00417f00                       ; 00417efb
        ;   XREF to: 00417f00 (CONDITIONAL_JUMP)  ; LAB_00417f00
    XOR EAX,EAX                         ; 00417efd
    RET                                 ; 00417eff
    PUSH EAX                            ; 00417f00
        ;   Label: LAB_00417f00
    CALL core_actor.cpp_FUN_0040b200    ; 00417f01
        ;   XREF to: 0040b200 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040b200(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00417f06
    RET                                 ; 00417f09

