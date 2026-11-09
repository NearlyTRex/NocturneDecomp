; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_melee_cpp_FUN_004e7270(int param_1,CDemonActor *param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_CHero_005c7157
;
; Called Functions:
;   core_actor.cpp_FUN_0040c790
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e7270
        ;   Label: core_melee.cpp_FUN_004e7270
    CMP dword ptr [EAX + 0x5a4],0x0     ; 004e7274
    JNZ 0x004e7283                      ; 004e727b
        ;   XREF to: 004e7283 (CONDITIONAL_JUMP)  ; LAB_004e7283
    MOV EAX,0x3                         ; 004e727d
    RET                                 ; 004e7282
        ;   Label: LAB_004e7282
    PUSH 0x5c7157                       ; 004e7283 | = "CHero"
        ;   Label: LAB_004e7283
    MOV ECX,dword ptr [ESP + 0xc]       ; 004e7288
    PUSH ECX                            ; 004e728c
    CALL core_actor.cpp_FUN_0040c790    ; 004e728d
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004e7292
    TEST EAX,EAX                        ; 004e7295
    JZ 0x004e7282                       ; 004e7297
        ;   XREF to: 004e7282 (CONDITIONAL_JUMP)  ; LAB_004e7282
    MOV EAX,0x2                         ; 004e7299
    RET                                 ; 004e729e

