; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_enemy_cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy *this_ptr,CVector3f *point,float radius,SDamageInfo *damage_info)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   point
; float            Stack[0xc]:4   radius
; SDamageInfo *    Stack[0x10]:4   damage_info
;
; XREF[22]:
;   core_batcreat.cpp_CBatCreature_process_FUN_00411a10 at 00411de8
;   core_batman.cpp_CBatman_process_FUN_00412f40 at 004137e2
;   core_boneguy.cpp_CBoneGuy_process_FUN_004186c0 at 00418e6f
;   core_bride.cpp_CBride_process_FUN_0041dbe0 at 0041e17f
;   core_conveyor.cpp_CConstruct_process_FUN_00436e80 at 004376b4
;   core_cow.cpp_CZombieCow_process_FUN_004392b0 at 004395f7
;   core_dog.cpp_CZombieDog_process_FUN_0045e360 at 0045e704
;   core_dracbrid.cpp_CDraculaBride_process_FUN_00462ff0 at 00463aff
;   core_drone.cpp_CDrone_process_FUN_0046d870 at 0046dc55
;   core_gargoyle.cpp_CGargoyle_process_FUN_004c0050 at 004c048b
;   ... and 12 more
;
; Referenced Globals:
;   undefined4 DAT_005d2da9
;   undefined4 DAT_005d2db1
;   CGore* g_CGorePtr = 01cb8284
;
; Called Functions:
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488110
        ;   Label: core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110
    PUSH ESI                            ; 00488111
    PUSH EDI                            ; 00488112
    PUSH EBP                            ; 00488113
    MOV EBP,ESP                         ; 00488114
    SUB ESP,0x18                        ; 00488116
    AND ESP,0xfffffff8                  ; 00488119
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048811c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0048811f
    MOV EDX,dword ptr [EAX + 0x10a78]   ; 00488122
    TEST EDX,EDX                        ; 00488128
    JNZ 0x00488135                      ; 0048812a
        ;   XREF to: 00488135 (CONDITIONAL_JUMP)  ; LAB_00488135
    XOR EAX,EAX                         ; 0048812c
        ;   Label: LAB_0048812c
    MOV ESP,EBP                         ; 0048812e
    POP EBP                             ; 00488130
    POP EDI                             ; 00488131
    POP ESI                             ; 00488132
    POP EBX                             ; 00488133
    RET                                 ; 00488134
    MOV ECX,dword ptr [EBP + 0x20]      ; 00488135
        ;   Label: LAB_00488135
    PUSH ECX                            ; 00488138
    PUSH dword ptr [EBP + 0x1c]         ; 00488139
    PUSH ESI                            ; 0048813c
    MOV EAX,EDX                         ; 0048813d
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 0048813f
    PUSH EAX                            ; 00488145
    CALL dword ptr [EDX + 0x108]        ; 00488146
    ADD ESP,0x10                        ; 0048814c
    MOV EAX,dword ptr [EBP + 0x20]      ; 0048814f
    FLDZ                                ; 00488152
    FLD float ptr [EAX + 0x4]           ; 00488154
    FSTP double ptr [ESP]               ; 00488157
    FCOMP double ptr [ESP]              ; 0048815a
    FNSTSW AX                           ; 0048815d
    SAHF                                ; 0048815f
    JNC 0x0048812c                      ; 00488160
        ;   XREF to: 0048812c (CONDITIONAL_JUMP)  ; LAB_0048812c
    FLD double ptr [ESP]                ; 00488162
    FMUL double ptr [0x005d2da9]        ; 00488165 | DAT_005d2da9
    FMUL double ptr [0x005d2db1]        ; 0048816b | DAT_005d2db1
    PUSH 0x0                            ; 00488171
    CALL crt_math.c_round_FUN_005b7ff0  ; 00488173
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x18]        ; 00488178
    MOV EBX,dword ptr [ESP + 0x18]      ; 0048817c
    PUSH EBX                            ; 00488180
    LEA EDI,[ESP + 0x10]                ; 00488181
    LEA EAX,[ESP + 0x10]                ; 00488185
    PUSH 0x0                            ; 00488189
    MOVSD ES:EDI,ESI                    ; 0048818b
    MOVSD ES:EDI,ESI                    ; 0048818c
    MOVSD ES:EDI,ESI                    ; 0048818d
    PUSH EAX                            ; 0048818e
    MOV ESI,dword ptr [0x006167e0]      ; 0048818f | g_CGorePtr
    PUSH ESI                            ; 00488195
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850 ; 00488196
        ;   XREF to: 004c9850 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    MOV EAX,0x1                         ; 0048819b
    ADD ESP,0x14                        ; 004881a0
    MOV ESP,EBP                         ; 004881a3
    POP EBP                             ; 004881a5
    POP EDI                             ; 004881a6
    POP ESI                             ; 004881a7
    POP EBX                             ; 004881a8
    RET                                 ; 004881a9

