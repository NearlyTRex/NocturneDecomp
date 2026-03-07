; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a9880(CEnemy *this_ptr,CVector3f *point,float radius,SDamageInfo *damage_info)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   point
; float            Stack[0xc]:4   radius
; SDamageInfo *    Stack[0x10]:4   damage_info
;
; XREF[14]:
;   core_batcreat.cpp_CBatCreature_process_FUN_00415470 at 004157b4
;   core_batman.cpp_CBatman_process_FUN_00416870 at 00416fb6
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bf90 at 0041c696
;   core_cow.cpp_CZombieCow_process_FUN_00444310 at 0044461d
;   core_dog.cpp_CZombieDog_process_FUN_0047f140 at 0047f468
;   core_dracbrid.cpp_CDraculaBride_process_FUN_00484410 at 00484dc8
;   core_drone.cpp_CDrone_process_FUN_0048ec70 at 0048f014
;   core_gargoyle.cpp_CGargoyle_process_FUN_004e4a00 at 004e4dd2
;   core_ghoul.cpp_CGhoul_process_FUN_004e6600 at 004e7d55
;   core_hotdemon.cpp_CHotDemon_process_FUN_004f6f20 at 004f725a
;   ... and 4 more
;
; Referenced Globals:
;   double DOUBLE_0062438a = 1.20000000000000
;   double DOUBLE_00624392 = 0.25
;   CGore* g_CGorePtr = 02d83364
;   CGore g_CGoreInstance
;
; Called Functions:
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9880
        ;   Label: core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a9880
    PUSH ESI                            ; 004a9881
    PUSH EBP                            ; 004a9882
    MOV EBP,ESP                         ; 004a9883
    SUB ESP,0x18                        ; 004a9885
    AND ESP,0xfffffff8                  ; 004a9888
    MOV EAX,dword ptr [EBP + 0x10]      ; 004a988b
    MOV EBX,dword ptr [EBP + 0x14]      ; 004a988e
    MOV EDX,dword ptr [EAX + 0xbe3c]    ; 004a9891
    TEST EDX,EDX                        ; 004a9897
    JNZ 0x004a98a3                      ; 004a9899
        ;   XREF to: 004a98a3 (CONDITIONAL_JUMP)  ; LAB_004a98a3
    XOR EAX,EAX                         ; 004a989b
        ;   Label: LAB_004a989b
    MOV ESP,EBP                         ; 004a989d
    POP EBP                             ; 004a989f
    POP ESI                             ; 004a98a0
    POP EBX                             ; 004a98a1
    RET                                 ; 004a98a2
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004a98a3
        ;   Label: LAB_004a98a3
    PUSH ECX                            ; 004a98a6
    PUSH dword ptr [EBP + 0x18]         ; 004a98a7
    PUSH EBX                            ; 004a98aa
    MOV EAX,EDX                         ; 004a98ab
    MOV EDX,dword ptr [EDX + 0x154]     ; 004a98ad
    PUSH EAX                            ; 004a98b3
    CALL dword ptr [EDX + 0x114]        ; 004a98b4
    ADD ESP,0x10                        ; 004a98ba
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004a98bd
    FLDZ                                ; 004a98c0
    FLD float ptr [EAX + 0x4]           ; 004a98c2
    FSTP double ptr [ESP]               ; 004a98c5
    FCOMP double ptr [ESP]              ; 004a98c8
    FNSTSW AX                           ; 004a98cb
    SAHF                                ; 004a98cd
    JNC 0x004a989b                      ; 004a98ce
        ;   XREF to: 004a989b (CONDITIONAL_JUMP)  ; LAB_004a989b
    FLD double ptr [ESP]                ; 004a98d0
    FMUL double ptr [0x0062438a]        ; 004a98d3 | DOUBLE_0062438a
    MOV EAX,dword ptr [EBX]             ; 004a98d9
    FMUL double ptr [0x00624392]        ; 004a98db | DOUBLE_00624392
    MOV dword ptr [ESP + 0x8],EAX       ; 004a98e1
    LEA EAX,[EBX + 0x4]                 ; 004a98e5
    PUSH 0x0                            ; 004a98e8
    MOV EAX,dword ptr [EAX]             ; 004a98ea
    CALL crt_math.c_round_FUN_005fe6b0  ; 004a98ec
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV dword ptr [ESP + 0x10],EAX      ; 004a98f1
    LEA EAX,[EBX + 0x8]                 ; 004a98f5
    FISTP dword ptr [ESP + 0x18]        ; 004a98f8
    MOV EBX,dword ptr [ESP + 0x18]      ; 004a98fc
    PUSH EBX                            ; 004a9900
    MOV EAX,dword ptr [EAX]             ; 004a9901
    PUSH 0x0                            ; 004a9903
    MOV dword ptr [ESP + 0x1c],EAX      ; 004a9905
    LEA EAX,[ESP + 0x14]                ; 004a9909
    PUSH EAX                            ; 004a990d
    MOV ESI,dword ptr [0x0067b9a0]      ; 004a990e | g_CGorePtr
    PUSH ESI                            ; 004a9914 | g_CGoreInstance
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0 ; 004a9915
        ;   XREF to: 004edbb0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004edbb0(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    MOV EAX,0x1                         ; 004a991a
    ADD ESP,0x14                        ; 004a991f
    MOV ESP,EBP                         ; 004a9922
    POP EBP                             ; 004a9924
    POP ESI                             ; 004a9925
    POP EBX                             ; 004a9926
    RET                                 ; 004a9927

