; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_boxactor_cpp_FUN_0041ccc0(int param_1,CDemonActor *param_2)
;
;
; Called Functions:
;   core_actor.cpp_FUN_0040c840
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041ccc0
        ;   Label: core_boxactor.cpp_FUN_0041ccc0
    CMP dword ptr [EAX + 0x470],0x3     ; 0041ccc4
    JNZ 0x0041ccd8                      ; 0041cccb
        ;   XREF to: 0041ccd8 (CONDITIONAL_JUMP)  ; LAB_0041ccd8
    MOV EAX,dword ptr [ESP + 0x4]       ; 0041cccd
        ;   Label: LAB_0041cccd
    MOV EAX,dword ptr [EAX + 0x470]     ; 0041ccd1
    RET                                 ; 0041ccd7
    PUSH 0x5cc679                       ; 0041ccd8
        ;   Label: LAB_0041ccd8
    MOV ECX,dword ptr [ESP + 0xc]       ; 0041ccdd
    PUSH ECX                            ; 0041cce1
    CALL core_actor.cpp_FUN_0040c840    ; 0041cce2
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0041cce7
    TEST EAX,EAX                        ; 0041ccea
    JNZ 0x0041cccd                      ; 0041ccec
        ;   XREF to: 0041cccd (CONDITIONAL_JUMP)  ; LAB_0041cccd
    RET                                 ; 0041ccee

