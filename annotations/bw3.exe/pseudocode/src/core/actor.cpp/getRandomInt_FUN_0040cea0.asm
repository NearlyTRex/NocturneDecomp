; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_getRandomInt_FUN_0040cea0(int min_value,int max_value)
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
; XREF[73]:
;   core_actor.cpp_CDemonActor_handleFootstep_FUN_0040cab0 at 0040cd9f
;   core_baal.cpp_CBaal_processDamage_FUN_00597af0 at 00597b40
;   core_baal.cpp_CBaal_process_FUN_005968a0 at 00597184
;   core_baal.cpp_FUN_00597700 at 005977a9
;   core_baal.cpp_FUN_00597be0 at 00597bff
;   core_bird.cpp_CBird_renderOpaque_FUN_0040fe90 at 0040ff09
;   core_bird.cpp_FUN_00410030 at 0041008b
;   core_bmppuzzl.cpp_CChemPuzzle_load_FUN_004133c0 at 00413b62
;   core_bmppuzzl.cpp_CChemPuzzle_reset_FUN_004132c0 at 0041335a
;   core_boneguy.cpp_CBoneGuy_ctor_FUN_00417400 at 004174ee
;   ... and 63 more
;
; Referenced Globals:
;   undefined4 DAT_005b5ef1
;   undefined4 DAT_005b5ef9
;   undefined4 DAT_005b5efd
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 g_CGameInstance.is_processing
;
; Called Functions:
;   core_actor.cpp_generateRandomValue_FUN_0040cdd0
;   crt_math.c_round_FUN_005a3120
;   crt_stdlib.c_rand_FUN_005a35cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040cea0
        ;   Label: core_actor.cpp_getRandomInt_FUN_0040cea0
    PUSH ESI                            ; 0040cea1
    PUSH EBP                            ; 0040cea2
    MOV EBP,ESP                         ; 0040cea3
    SUB ESP,0x14                        ; 0040cea5
    AND ESP,0xfffffff8                  ; 0040cea8
    MOV EBX,dword ptr [EBP + 0x10]      ; 0040ceab
    MOV ESI,dword ptr [EBP + 0x14]      ; 0040ceae
    MOV EAX,ESI                         ; 0040ceb1
    SUB EAX,EBX                         ; 0040ceb3
    MOV dword ptr [ESP + 0x10],EAX      ; 0040ceb5
    FILD dword ptr [ESP + 0x10]         ; 0040ceb9
    MOV EAX,[0x005fe9dc]                ; 0040cebd | g_CGamePtr
    FADD double ptr [0x005b5ef1]        ; 0040cec2 | DAT_005b5ef1
    MOV EDX,dword ptr [EAX + 0x260]     ; 0040cec8 | g_CGameInstance.is_processing
    FSTP double ptr [ESP]               ; 0040cece
    TEST EDX,EDX                        ; 0040ced1
    JNZ 0x0040cf1a                      ; 0040ced3
        ;   XREF to: 0040cf1a (CONDITIONAL_JUMP)  ; LAB_0040cf1a
    CALL crt_stdlib.c_rand_FUN_005a35cc ; 0040ced5
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005a35cc()
    MOV dword ptr [ESP + 0x10],EAX      ; 0040ceda
    FILD dword ptr [ESP + 0x10]         ; 0040cede
    FMUL float ptr [0x005b5ef9]         ; 0040cee2 | DAT_005b5ef9
    FSTP float ptr [ESP + 0x8]          ; 0040cee8
        ;   Label: LAB_0040cee8
    FLD float ptr [ESP + 0x8]           ; 0040ceec
    FMUL double ptr [ESP]               ; 0040cef0
    MOV dword ptr [ESP + 0x10],EBX      ; 0040cef3
    FILD dword ptr [ESP + 0x10]         ; 0040cef7
    FADDP                               ; 0040cefb
    CALL crt_math.c_round_FUN_005a3120  ; 0040cefd
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0xc]         ; 0040cf02
    MOV ECX,dword ptr [ESP + 0xc]       ; 0040cf06
    CMP EBX,ECX                         ; 0040cf0a
    JG 0x0040cf2f                       ; 0040cf0c
        ;   XREF to: 0040cf2f (CONDITIONAL_JUMP)  ; LAB_0040cf2f
    CMP ESI,ECX                         ; 0040cf0e
    JGE 0x0040cf33                      ; 0040cf10
        ;   XREF to: 0040cf33 (CONDITIONAL_JUMP)  ; LAB_0040cf33
    MOV EAX,ESI                         ; 0040cf12
    MOV ESP,EBP                         ; 0040cf14
        ;   Label: LAB_0040cf14
    POP EBP                             ; 0040cf16
    POP ESI                             ; 0040cf17
    POP EBX                             ; 0040cf18
    RET                                 ; 0040cf19
    CALL core_actor.cpp_generateRandomValue_FUN_0040cdd0 ; 0040cf1a
        ;   XREF to: 0040cdd0 (UNCONDITIONAL_CALL)  ; uint core_actor.cpp_generateRandomValue_FUN_0040cdd0()
        ;   Label: LAB_0040cf1a
    MOV dword ptr [ESP + 0x10],EAX      ; 0040cf1f
    FILD dword ptr [ESP + 0x10]         ; 0040cf23
    FMUL float ptr [0x005b5efd]         ; 0040cf27 | DAT_005b5efd
    JMP 0x0040cee8                      ; 0040cf2d
        ;   XREF to: 0040cee8 (UNCONDITIONAL_JUMP)  ; LAB_0040cee8
    MOV EAX,EBX                         ; 0040cf2f
        ;   Label: LAB_0040cf2f
    JMP 0x0040cf14                      ; 0040cf31
        ;   XREF to: 0040cf14 (UNCONDITIONAL_JUMP)  ; LAB_0040cf14
    MOV EAX,ECX                         ; 0040cf33
        ;   Label: LAB_0040cf33
    MOV ESP,EBP                         ; 0040cf35
    POP EBP                             ; 0040cf37
    POP ESI                             ; 0040cf38
    POP EBX                             ; 0040cf39
    RET                                 ; 0040cf3a

