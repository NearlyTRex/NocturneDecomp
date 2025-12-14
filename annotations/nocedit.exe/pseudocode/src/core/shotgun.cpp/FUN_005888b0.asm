; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_shotgun.cpp_FUN_005888b0()
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005888b0
        ;   Label: core_shotgun.cpp_FUN_005888b0
    MOV EAX,dword ptr [ESP + 0xc]       ; 005888b3
    CMP dword ptr [EAX + 0x56c],0x6     ; 005888b7
    JNZ 0x005888cc                      ; 005888be
        ;   XREF to: 005888cc (CONDITIONAL_JUMP)  ; LAB_005888cc
    XOR ECX,ECX                         ; 005888c0
    MOV dword ptr [ESP],ECX             ; 005888c2
    MOV EAX,dword ptr [ESP]             ; 005888c5
    ADD ESP,0x8                         ; 005888c8
    RET                                 ; 005888cb
    PUSH 0x43480000                     ; 005888cc
        ;   Label: LAB_005888cc
    PUSH 0x43160000                     ; 005888d1
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005888d6
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

