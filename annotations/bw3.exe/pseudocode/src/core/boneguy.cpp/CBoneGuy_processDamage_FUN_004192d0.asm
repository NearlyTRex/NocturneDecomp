; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boneguy_cpp_CBoneGuy_processDamage_FUN_004192d0(CBoneGuy *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Called Functions:
;   core_boneguy.cpp_CBoneGuy_explode_FUN_00419550
;   core_enemy.cpp_CEnemy_processDamage_FUN_00489b80
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;   unkafter_enemy.cpp_FUN_0048a1b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004192d0
        ;   Label: core_boneguy.cpp_CBoneGuy_processDamage_FUN_004192d0
    PUSH EDI                            ; 004192d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004192d2
    MOV EDI,dword ptr [ESP + 0x10]      ; 004192d6
    MOV EDX,dword ptr [EBX + 0xd078]    ; 004192da
    PUSH EDX                            ; 004192e0
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 004192e1
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    MOV ECX,dword ptr [EDI + 0x30]      ; 004192e6
    ADD ESP,0x4                         ; 004192e9
    CMP ECX,0x70                        ; 004192ec
    JZ 0x00419355                       ; 004192ef
        ;   XREF to: 00419355 (CONDITIONAL_JUMP)  ; LAB_00419355
    PUSH ESI                            ; 004192f1
    FLD float ptr [EDI + 0x4]           ; 004192f2
    FSUBR float ptr [EBX + 0x2538]      ; 004192f5
    FST float ptr [EBX + 0x2538]        ; 004192fb
    FLDZ                                ; 00419301
    FCOMPP                              ; 00419303
    FNSTSW AX                           ; 00419305
    SAHF                                ; 00419307
    JC 0x0041939b                       ; 00419308
        ;   XREF to: 0041939b (CONDITIONAL_JUMP)  ; LAB_0041939b
    CMP dword ptr [EBX + 0xd0ec],0x0    ; 0041930e
    JLE 0x00419358                      ; 00419315
        ;   XREF to: 00419358 (CONDITIONAL_JUMP)  ; LAB_00419358
    LEA ESI,[EBX + 0x158]               ; 00419317
        ;   Label: LAB_00419317
    PUSH ESI                            ; 0041931d
    MOV dword ptr [EBX + 0x2538],0x0    ; 0041931e
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00419328
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0041932d
    ADD ESP,0x4                         ; 00419330
    CMP EAX,0x5                         ; 00419333
    JZ 0x0041934a                       ; 00419336
        ;   XREF to: 0041934a (CONDITIONAL_JUMP)  ; LAB_0041934a
    CMP EAX,0x4                         ; 00419338
    JZ 0x0041934a                       ; 0041933b
        ;   XREF to: 0041934a (CONDITIONAL_JUMP)  ; LAB_0041934a
    PUSH 0x1                            ; 0041933d
    PUSH 0x4                            ; 0041933f
    PUSH ESI                            ; 00419341
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00419342
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00419342
    ADD ESP,0xc                         ; 00419347
    PUSH EDI                            ; 0041934a
        ;   Label: LAB_0041934a
    PUSH EBX                            ; 0041934b
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00489b80 ; 0041934c
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00489b80(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00419351
    POP ESI                             ; 00419354
    POP EDI                             ; 00419355
        ;   Label: LAB_00419355
    POP EBX                             ; 00419356
    RET                                 ; 00419357
    TEST dword ptr [EBX + 0x3254],0x7fffffff ; 00419358
        ;   Label: LAB_00419358
    JZ 0x0041936d                       ; 00419362
        ;   XREF to: 0041936d (CONDITIONAL_JUMP)  ; LAB_0041936d
    CMP dword ptr [EBX + 0x3258],0x0    ; 00419364
    JZ 0x00419317                       ; 0041936b
        ;   XREF to: 00419317 (CONDITIONAL_JUMP)  ; LAB_00419317
    PUSH EBX                            ; 0041936d
        ;   Label: LAB_0041936d
    MOV dword ptr [EBX + 0x2538],0x3f800000 ; 0041936e
    CALL core_boneguy.cpp_CBoneGuy_explode_FUN_00419550 ; 00419378
        ;   XREF to: 00419550 (UNCONDITIONAL_CALL)  ; void core_boneguy.cpp_CBoneGuy_explode_FUN_00419550(CBoneGuy * this_ptr)
    MOV EDX,dword ptr [EBX + 0xd0ec]    ; 0041937d
    INC EDX                             ; 00419383
    ADD ESP,0x4                         ; 00419384
    MOV dword ptr [EBX + 0xd0ec],EDX    ; 00419387
    PUSH EDI                            ; 0041938d
    PUSH EBX                            ; 0041938e
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00489b80 ; 0041938f
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00489b80(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00419394
    POP ESI                             ; 00419397
    POP EDI                             ; 00419398
    POP EBX                             ; 00419399
    RET                                 ; 0041939a
    PUSH dword ptr [EDI + 0x4]          ; 0041939b
        ;   Label: LAB_0041939b
    PUSH EBX                            ; 0041939e
    CALL unkafter_enemy.cpp_FUN_0048a1b0 ; 0041939f
        ;   XREF to: 0048a1b0 (UNCONDITIONAL_CALL)  ; undefined unkafter_enemy.cpp_FUN_0048a1b0()
    ADD ESP,0x8                         ; 004193a4
    TEST EAX,EAX                        ; 004193a7
    JZ 0x0041934a                       ; 004193a9
        ;   XREF to: 0041934a (CONDITIONAL_JUMP)  ; LAB_0041934a
    PUSH 0x1                            ; 004193ab
    PUSH 0x3                            ; 004193ad
    LEA EAX,[EBX + 0x158]               ; 004193af
    PUSH EAX                            ; 004193b5
    JMP 0x00419342                      ; 004193b6
        ;   XREF to: 00419342 (UNCONDITIONAL_JUMP)  ; LAB_00419342

