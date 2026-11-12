; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_enemy_cpp_CEnemy_testAttackRadius_FUN_004893f0(CEnemy *this_ptr,CVector3f *point,float radius,SDamageInfo *damage_info)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   point
; float            Stack[0xc]:4   radius
; SDamageInfo *    Stack[0x10]:4   damage_info
;
; XREF[19]:
;   core_baal.cpp_CBaal_process_FUN_005968a0 at 00597619
;   core_boneguy.cpp_CBaalSkel_process_FUN_00419b40 at 0041a2ff
;   core_boneguy.cpp_CBoneGuy_process_FUN_004179b0 at 004181ab
;   core_construc.cpp_CConstruct_process_FUN_00442a20 at 00443734
;   core_cow.cpp_CZombieCow_process_FUN_00445130 at 00445480
;   core_dog.cpp_CZombieDog_process_FUN_004628b0 at 00462c5a
;   core_gargoyle.cpp_CGargoyle_process_FUN_004c5350 at 004c5795
;   core_ghoul.cpp_CGhoul_process_FUN_004c6eb0 at 004c8835
;   core_hotdemon.cpp_CHotDemon_process_FUN_004d56b0 at 004d5a59
;   core_imp.cpp_CImp_process_FUN_004d6a90 at 004d724e
;   ... and 9 more
;
; Referenced Globals:
;   undefined4 DAT_005bdc4f
;   undefined4 DAT_005bdc57
;   CGore* g_CGorePtr = 01d22e44
;
; Called Functions:
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004893f0
        ;   Label: core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0
    PUSH ESI                            ; 004893f1
    PUSH EDI                            ; 004893f2
    PUSH EBP                            ; 004893f3
    MOV EBP,ESP                         ; 004893f4
    SUB ESP,0x18                        ; 004893f6
    AND ESP,0xfffffff8                  ; 004893f9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004893fc
    MOV ESI,dword ptr [EBP + 0x18]      ; 004893ff
    MOV EDX,dword ptr [EAX + 0xcde4]    ; 00489402
    TEST EDX,EDX                        ; 00489408
    JNZ 0x00489415                      ; 0048940a
        ;   XREF to: 00489415 (CONDITIONAL_JUMP)  ; LAB_00489415
    XOR EAX,EAX                         ; 0048940c
        ;   Label: LAB_0048940c
    MOV ESP,EBP                         ; 0048940e
    POP EBP                             ; 00489410
    POP EDI                             ; 00489411
    POP ESI                             ; 00489412
    POP EBX                             ; 00489413
    RET                                 ; 00489414
    MOV ECX,dword ptr [EBP + 0x20]      ; 00489415
        ;   Label: LAB_00489415
    PUSH ECX                            ; 00489418
    PUSH dword ptr [EBP + 0x1c]         ; 00489419
    PUSH ESI                            ; 0048941c
    MOV EAX,EDX                         ; 0048941d
    MOV EDX,dword ptr [EDX + 0x154]     ; 0048941f
    PUSH EAX                            ; 00489425
    CALL dword ptr [EDX + 0x100]        ; 00489426
    ADD ESP,0x10                        ; 0048942c
    MOV EAX,dword ptr [EBP + 0x20]      ; 0048942f
    FLDZ                                ; 00489432
    FLD float ptr [EAX + 0x4]           ; 00489434
    FSTP double ptr [ESP]               ; 00489437
    FCOMP double ptr [ESP]              ; 0048943a
    FNSTSW AX                           ; 0048943d
    SAHF                                ; 0048943f
    JNC 0x0048940c                      ; 00489440
        ;   XREF to: 0048940c (CONDITIONAL_JUMP)  ; LAB_0048940c
    FLD double ptr [ESP]                ; 00489442
    FMUL double ptr [0x005bdc4f]        ; 00489445 | DAT_005bdc4f
    FMUL double ptr [0x005bdc57]        ; 0048944b | DAT_005bdc57
    PUSH 0x0                            ; 00489451
    CALL crt_math.c_round_FUN_005a3120  ; 00489453
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x18]        ; 00489458
    MOV EBX,dword ptr [ESP + 0x18]      ; 0048945c
    PUSH EBX                            ; 00489460
    LEA EDI,[ESP + 0x10]                ; 00489461
    LEA EAX,[ESP + 0x10]                ; 00489465
    PUSH 0x0                            ; 00489469
    MOVSD ES:EDI,ESI                    ; 0048946b
    MOVSD ES:EDI,ESI                    ; 0048946c
    MOVSD ES:EDI,ESI                    ; 0048946d
    PUSH EAX                            ; 0048946e
    MOV ESI,dword ptr [0x005fed24]      ; 0048946f | g_CGorePtr
    PUSH ESI                            ; 00489475
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0 ; 00489476
        ;   XREF to: 004ce9c0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004ce9c0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    MOV EAX,0x1                         ; 0048947b
    ADD ESP,0x14                        ; 00489480
    MOV ESP,EBP                         ; 00489483
    POP EBP                             ; 00489485
    POP EDI                             ; 00489486
    POP ESI                             ; 00489487
    POP EBX                             ; 00489488
    RET                                 ; 00489489

