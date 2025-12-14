; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float core_actor.cpp_getRandomFloat_FUN_0040cbc0(void)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   float FLOAT_006142e8 = 0.00003051851
;   int INT_006142ec = 0x33800001
;   CGame* g_CGamePtr = 02d81a9c
;   CGame g_CGameInstance
;   undefined4 DAT_02d81cd8
;
; Called Functions:
;   core_actor.cpp_generateRandomValue_FUN_0040cba0
;   crt_stdlib.c_rand_FUN_005feb5c
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0040cbc0
        ;   Label: core_actor.cpp_getRandomFloat_FUN_0040cbc0
    MOV EAX,[0x0067b654]                ; 0040cbc3 | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x23c],0x0     ; 0040cbc8 | DAT_02d81cd8
    JZ 0x0040cbee                       ; 0040cbcf
        ;   XREF to: 0040cbee (CONDITIONAL_JUMP)  ; LAB_0040cbee
    CALL core_actor.cpp_generateRandomValue_FUN_0040cba0 ; 0040cbd1
        ;   XREF to: 0040cba0 (UNCONDITIONAL_CALL)  ; uint core_actor.cpp_generateRandomValue_FUN_0040cba0()
    MOV dword ptr [ESP + 0x4],EAX       ; 0040cbd6
    FILD dword ptr [ESP + 0x4]          ; 0040cbda
    FMUL float ptr [0x006142ec]         ; 0040cbde | INT_006142ec
    FSTP float ptr [ESP]                ; 0040cbe4
    MOV EAX,dword ptr [ESP]             ; 0040cbe7
    ADD ESP,0x8                         ; 0040cbea
    RET                                 ; 0040cbed
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 0040cbee
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
        ;   Label: LAB_0040cbee
    MOV dword ptr [ESP + 0x4],EAX       ; 0040cbf3
    FILD dword ptr [ESP + 0x4]          ; 0040cbf7
    FMUL float ptr [0x006142e8]         ; 0040cbfb | FLOAT_006142e8
    FSTP float ptr [ESP]                ; 0040cc01
    MOV EAX,dword ptr [ESP]             ; 0040cc04
    ADD ESP,0x8                         ; 0040cc07
    RET                                 ; 0040cc0a

