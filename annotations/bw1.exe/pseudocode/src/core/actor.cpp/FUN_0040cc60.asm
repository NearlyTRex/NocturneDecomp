; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_FUN_0040cc60(int min_value,int max_value)
;
; Parameters:
; int              Stack[0x4]:4   min_value
; int              Stack[0x8]:4   max_value
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[64]:
;   core_actor.cpp_FUN_0040c870 at 0040cb5f
;   core_batcreat.cpp_FUN_004123d0 at 004124a8
;   core_batman.cpp_FUN_00413f90 at 00414068
;   core_biggs.cpp_FUN_00414fc0 at 00414ffa
;   core_boneguy.cpp_CBoneGuy_ctor_FUN_0041b750 at 0041b83e
;   core_boneguy.cpp_FUN_0041c9a0 at 0041cf6d
;   core_boxactor.cpp_FUN_00422f90 at 00423003
;   core_bugs.cpp_FUN_00425120 at 0042527f
;   core_bugs.cpp_FUN_00427830 at 00427a0b
;   core_bugs.cpp_FUN_00427b40 at 00427d7b
;   ... and 54 more
;
; Referenced Globals:
;   undefined4 DAT_005d2ea1
;   undefined4 DAT_005d2ea9
;   undefined4 DAT_005d2ead
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 g_CGameInstance.field600_0x258
;
; Called Functions:
;   core_actor.cpp_generateRandomValue_FUN_0040cb90
;   crt_math.c_round_FUN_005c03a0
;   crt_stdlib.c_rand_FUN_005c084c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040cc60
        ;   Label: core_actor.cpp_FUN_0040cc60
    PUSH ESI                            ; 0040cc61
    PUSH EBP                            ; 0040cc62
    MOV EBP,ESP                         ; 0040cc63
    SUB ESP,0x14                        ; 0040cc65
    AND ESP,0xfffffff8                  ; 0040cc68
    MOV EBX,dword ptr [EBP + 0x10]      ; 0040cc6b
    MOV ESI,dword ptr [EBP + 0x14]      ; 0040cc6e
    MOV EAX,ESI                         ; 0040cc71
    SUB EAX,EBX                         ; 0040cc73
    MOV dword ptr [ESP + 0x10],EAX      ; 0040cc75
    FILD dword ptr [ESP + 0x10]         ; 0040cc79
    MOV EAX,[0x0061d95c]                ; 0040cc7d | g_CGamePtr
    FADD double ptr [0x005d2ea1]        ; 0040cc82 | DAT_005d2ea1
    MOV EDX,dword ptr [EAX + 0x258]     ; 0040cc88 | g_CGameInstance.field600_0x258
    FSTP double ptr [ESP]               ; 0040cc8e
    TEST EDX,EDX                        ; 0040cc91
    JNZ 0x0040ccda                      ; 0040cc93
        ;   XREF to: 0040ccda (CONDITIONAL_JUMP)  ; LAB_0040ccda
    CALL crt_stdlib.c_rand_FUN_005c084c ; 0040cc95
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    MOV dword ptr [ESP + 0x10],EAX      ; 0040cc9a
    FILD dword ptr [ESP + 0x10]         ; 0040cc9e
    FMUL float ptr [0x005d2ea9]         ; 0040cca2 | DAT_005d2ea9
    FSTP float ptr [ESP + 0x8]          ; 0040cca8
        ;   Label: LAB_0040cca8
    FLD float ptr [ESP + 0x8]           ; 0040ccac
    FMUL double ptr [ESP]               ; 0040ccb0
    MOV dword ptr [ESP + 0x10],EBX      ; 0040ccb3
    FILD dword ptr [ESP + 0x10]         ; 0040ccb7
    FADDP                               ; 0040ccbb
    CALL crt_math.c_round_FUN_005c03a0  ; 0040ccbd
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0xc]         ; 0040ccc2
    MOV ECX,dword ptr [ESP + 0xc]       ; 0040ccc6
    CMP EBX,ECX                         ; 0040ccca
    JG 0x0040ccef                       ; 0040cccc
        ;   XREF to: 0040ccef (CONDITIONAL_JUMP)  ; LAB_0040ccef
    CMP ESI,ECX                         ; 0040ccce
    JGE 0x0040ccf3                      ; 0040ccd0
        ;   XREF to: 0040ccf3 (CONDITIONAL_JUMP)  ; LAB_0040ccf3
    MOV EAX,ESI                         ; 0040ccd2
    MOV ESP,EBP                         ; 0040ccd4
        ;   Label: LAB_0040ccd4
    POP EBP                             ; 0040ccd6
    POP ESI                             ; 0040ccd7
    POP EBX                             ; 0040ccd8
    RET                                 ; 0040ccd9
    CALL core_actor.cpp_generateRandomValue_FUN_0040cb90 ; 0040ccda
        ;   XREF to: 0040cb90 (UNCONDITIONAL_CALL)  ; uint core_actor.cpp_generateRandomValue_FUN_0040cb90()
        ;   Label: LAB_0040ccda
    MOV dword ptr [ESP + 0x10],EAX      ; 0040ccdf
    FILD dword ptr [ESP + 0x10]         ; 0040cce3
    FMUL float ptr [0x005d2ead]         ; 0040cce7 | DAT_005d2ead
    JMP 0x0040cca8                      ; 0040cced
        ;   XREF to: 0040cca8 (UNCONDITIONAL_JUMP)  ; LAB_0040cca8
    MOV EAX,EBX                         ; 0040ccef
        ;   Label: LAB_0040ccef
    JMP 0x0040ccd4                      ; 0040ccf1
        ;   XREF to: 0040ccd4 (UNCONDITIONAL_JUMP)  ; LAB_0040ccd4
    MOV EAX,ECX                         ; 0040ccf3
        ;   Label: LAB_0040ccf3
    MOV ESP,EBP                         ; 0040ccf5
    POP EBP                             ; 0040ccf7
    POP ESI                             ; 0040ccf8
    POP EBX                             ; 0040ccf9
    RET                                 ; 0040ccfa

