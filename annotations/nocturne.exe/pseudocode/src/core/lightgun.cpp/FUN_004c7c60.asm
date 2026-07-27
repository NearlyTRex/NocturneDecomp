; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_lightgun_cpp_FUN_004c7c60(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 004c7c60
        ;   Label: core_lightgun.cpp_FUN_004c7c60
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c7c63
    CMP dword ptr [EAX + 0x564],0x6     ; 004c7c67
    JNZ 0x004c7c7c                      ; 004c7c6e
        ;   XREF to: 004c7c7c (CONDITIONAL_JUMP)  ; LAB_004c7c7c
    XOR ECX,ECX                         ; 004c7c70
    MOV dword ptr [ESP],ECX             ; 004c7c72
    MOV EAX,dword ptr [ESP]             ; 004c7c75
    ADD ESP,0x8                         ; 004c7c78
    RET                                 ; 004c7c7b
    PUSH 0x43480000                     ; 004c7c7c
        ;   Label: LAB_004c7c7c
    PUSH 0x43160000                     ; 004c7c81
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004c7c86
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0xc],EAX       ; 004c7c8b
    FLD float ptr [ESP + 0xc]           ; 004c7c8f
    ADD ESP,0x8                         ; 004c7c93
    FSTP float ptr [ESP]                ; 004c7c96
    MOV EAX,dword ptr [ESP]             ; 004c7c99
    ADD ESP,0x8                         ; 004c7c9c
    RET                                 ; 004c7c9f

