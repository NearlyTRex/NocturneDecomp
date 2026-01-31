; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_actor_cpp_getRandomInt_FUN_0040cc70(int min_value,int max_value)
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
; XREF[36]:
;   core_batcreat.cpp_CBatCreature_processDamage_FUN_00416030 at 004160e4
;   core_batman.cpp_CBatman_processDamage_FUN_004179a0 at 00417a54
;   core_biggs.cpp_CBiggs_processDamage_FUN_00418b50 at 00418b7d
;   core_boneguy.cpp_CBoneGuy_ctor_FUN_0041bbc0 at 0041bcae
;   core_boneguy.cpp_FUN_0041cc40 at 0041d11b
;   core_boxactor.cpp_CLightActor_process_FUN_00422a50 at 00422ac3
;   core_bugs.cpp_FUN_00424e50 at 00424faf
;   core_bugs.cpp_FUN_004270f0 at 004272cb
;   core_bugs.cpp_FUN_00427400 at 0042763b
;   core_charactr.cpp_CCharacter_FUN_0042e050 at 0042e2a5
;   ... and 26 more
;
; Referenced Globals:
;   double DOUBLE_006142f8 = 0.999990000000000
;   float FLOAT_00614300 = 0.00003051851
;   int INT_00614304 = 0x33800001
;   CGame* g_CGamePtr = 02d81a9c
;   CGame g_CGameInstance
;   undefined4 DAT_02d81cd8
;
; Called Functions:
;   core_actor.cpp_generateRandomValue_FUN_0040cba0
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdlib.c_rand_FUN_005feb5c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040cc70
        ;   Label: core_actor.cpp_getRandomInt_FUN_0040cc70
    PUSH ESI                            ; 0040cc71
    PUSH EBP                            ; 0040cc72
    MOV EBP,ESP                         ; 0040cc73
    SUB ESP,0x14                        ; 0040cc75
    AND ESP,0xfffffff8                  ; 0040cc78
    MOV EBX,dword ptr [EBP + 0x10]      ; 0040cc7b
    MOV ESI,dword ptr [EBP + 0x14]      ; 0040cc7e
    MOV EAX,ESI                         ; 0040cc81
    SUB EAX,EBX                         ; 0040cc83
    MOV dword ptr [ESP + 0x10],EAX      ; 0040cc85
    FILD dword ptr [ESP + 0x10]         ; 0040cc89
    MOV EAX,[0x0067b654]                ; 0040cc8d | g_CGameInstance | g_CGamePtr
    FADD double ptr [0x006142f8]        ; 0040cc92 | DOUBLE_006142f8
    MOV EDX,dword ptr [EAX + 0x23c]     ; 0040cc98 | DAT_02d81cd8
    FSTP double ptr [ESP]               ; 0040cc9e
    TEST EDX,EDX                        ; 0040cca1
    JNZ 0x0040ccea                      ; 0040cca3
        ;   XREF to: 0040ccea (CONDITIONAL_JUMP)  ; LAB_0040ccea
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 0040cca5
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    MOV dword ptr [ESP + 0x10],EAX      ; 0040ccaa
    FILD dword ptr [ESP + 0x10]         ; 0040ccae
    FMUL float ptr [0x00614300]         ; 0040ccb2 | FLOAT_00614300
    FSTP float ptr [ESP + 0x8]          ; 0040ccb8
        ;   Label: LAB_0040ccb8
    FLD float ptr [ESP + 0x8]           ; 0040ccbc
    FMUL double ptr [ESP]               ; 0040ccc0
    MOV dword ptr [ESP + 0x10],EBX      ; 0040ccc3
    FILD dword ptr [ESP + 0x10]         ; 0040ccc7
    FADDP                               ; 0040cccb
    CALL crt_math.c_round_FUN_005fe6b0  ; 0040cccd
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0xc]         ; 0040ccd2
    MOV ECX,dword ptr [ESP + 0xc]       ; 0040ccd6
    CMP EBX,ECX                         ; 0040ccda
    JG 0x0040ccff                       ; 0040ccdc
        ;   XREF to: 0040ccff (CONDITIONAL_JUMP)  ; LAB_0040ccff
    CMP ESI,ECX                         ; 0040ccde
    JGE 0x0040cd03                      ; 0040cce0
        ;   XREF to: 0040cd03 (CONDITIONAL_JUMP)  ; LAB_0040cd03
    MOV EAX,ESI                         ; 0040cce2
    MOV ESP,EBP                         ; 0040cce4
        ;   Label: LAB_0040cce4
    POP EBP                             ; 0040cce6
    POP ESI                             ; 0040cce7
    POP EBX                             ; 0040cce8
    RET                                 ; 0040cce9
    CALL core_actor.cpp_generateRandomValue_FUN_0040cba0 ; 0040ccea
        ;   XREF to: 0040cba0 (UNCONDITIONAL_CALL)  ; uint core_actor.cpp_generateRandomValue_FUN_0040cba0()
        ;   Label: LAB_0040ccea
    MOV dword ptr [ESP + 0x10],EAX      ; 0040ccef
    FILD dword ptr [ESP + 0x10]         ; 0040ccf3
    FMUL float ptr [0x00614304]         ; 0040ccf7 | INT_00614304
    JMP 0x0040ccb8                      ; 0040ccfd
        ;   XREF to: 0040ccb8 (UNCONDITIONAL_JUMP)  ; LAB_0040ccb8
    MOV EAX,EBX                         ; 0040ccff
        ;   Label: LAB_0040ccff
    JMP 0x0040cce4                      ; 0040cd01
        ;   XREF to: 0040cce4 (UNCONDITIONAL_JUMP)  ; LAB_0040cce4
    MOV EAX,ECX                         ; 0040cd03
        ;   Label: LAB_0040cd03
    MOV ESP,EBP                         ; 0040cd05
    POP EBP                             ; 0040cd07
    POP ESI                             ; 0040cd08
    POP EBX                             ; 0040cd09
    RET                                 ; 0040cd0a

