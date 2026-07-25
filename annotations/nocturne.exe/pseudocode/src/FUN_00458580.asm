; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00458580(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01b4d200
;   undefined4 DAT_01b4d204
;   undefined4 DAT_01b4d208
;   undefined4 DAT_01b4d20c
;   undefined4 DAT_01b4d210
;   undefined4 DAT_01b4d214
;   undefined4 DAT_01b4d218
;   undefined4 DAT_01b4d21c
;   undefined4 DAT_01b4d220
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;   crt_memory.c___arrinit_FUN_005644a7
;   FUN_00564bb0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00458580
        ;   Label: FUN_00458580
    MOV ECX,0x3f000000                  ; 00458581
    PUSH 0x1bcdebc                      ; 00458586
    MOV ESI,0xbf19999a                  ; 0045858b
    XOR EDX,EDX                         ; 00458590
    PUSH 0x9                            ; 00458592
    MOV EAX,0x3f19999a                  ; 00458594
    MOV dword ptr [0x01b4d200],EDX      ; 00458599 | DAT_01b4d200
    PUSH 0x5ae6c8                       ; 0045859f
    MOV dword ptr [0x01b4d204],ECX      ; 004585a4 | DAT_01b4d204
    MOV dword ptr [0x01b4d208],EDX      ; 004585aa | DAT_01b4d208
    PUSH 0x458610                       ; 004585b0
    MOV dword ptr [0x01b4d20c],ESI      ; 004585b5 | DAT_01b4d20c
    MOV dword ptr [0x01b4d210],EDX      ; 004585bb | DAT_01b4d210
    PUSH 0x57d49e                       ; 004585c1
    MOV dword ptr [0x01b4d214],EDX      ; 004585c6 | DAT_01b4d214
    MOV [0x01b4d218],EAX                ; 004585cc | DAT_01b4d218
    PUSH 0x1b4d224                      ; 004585d1
    MOV dword ptr [0x01b4d21c],EDX      ; 004585d6 | DAT_01b4d21c
    MOV dword ptr [0x01b4d220],EDX      ; 004585dc | DAT_01b4d220
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004585e2
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004585e7
    PUSH 0x59c560                       ; 004585ea
    PUSH 0x6                            ; 004585ef
    PUSH 0x1b4d280                      ; 004585f1
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004585f6
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 004585fb
    PUSH 0x5ae6b8                       ; 004585fe
    CALL FUN_00564bb0                   ; 00458603
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00564bb0()
    ADD ESP,0x4                         ; 00458608
    POP ESI                             ; 0045860b
    RET                                 ; 0045860c

