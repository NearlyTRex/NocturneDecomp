; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_flamegun_cpp_FUN_0048ec60(int param_1)
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

    SUB ESP,0x8                         ; 0048ec60
        ;   Label: core_flamegun.cpp_FUN_0048ec60
    MOV EAX,dword ptr [ESP + 0xc]       ; 0048ec63
    CMP dword ptr [EAX + 0x564],0x6     ; 0048ec67
    JNZ 0x0048ec81                      ; 0048ec6e
        ;   XREF to: 0048ec81 (CONDITIONAL_JUMP)  ; LAB_0048ec81
    XOR ECX,ECX                         ; 0048ec70
    MOV dword ptr [ESP],ECX             ; 0048ec72
    MOV EAX,dword ptr [ESP]             ; 0048ec75
    ADD ESP,0x8                         ; 0048ec78
    LEA EAX,[EAX]                       ; 0048ec7b
    MOV ECX,ECX                         ; 0048ec7e
    PUSH 0x43480000                     ; 0048ec81
        ;   Label: LAB_0048ec81
    PUSH 0x43160000                     ; 0048ec86
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0048ec8b
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0xc],EAX       ; 0048ec90
    FLD float ptr [ESP + 0xc]           ; 0048ec94
    ADD ESP,0x8                         ; 0048ec98
    FSTP float ptr [ESP]                ; 0048ec9b
    MOV EAX,dword ptr [ESP]             ; 0048ec9e
    ADD ESP,0x8                         ; 0048eca1
    RET                                 ; 0048eca4

