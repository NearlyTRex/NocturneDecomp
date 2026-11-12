; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_ctor_FUN_00417400(CBoneGuy *this_ptr)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_boneguy.cpp_CBaalSkel_ctor_FUN_00419ac0 at 00419ac6
;   core_boneguy.cpp_CSkeletonDemon_ctor_FUN_00419a20 at 00419a26
;   core_boneguy.cpp_CSkeletonForest_ctor_FUN_004198e0 at 004198e6
;   core_boneguy.cpp_CSkeletonIndian_ctor_FUN_00419980 at 00419986
;   core_boneguy.cpp_factoryFuncBoneGuy_FUN_00417050 at 00417063
;
; Referenced Globals:
;   undefined4 DAT_005b6d92
;   undefined4 DAT_005dc13c
;   undefined4 DAT_005dc140
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_boneguy.cpp_hsvToRgb_FUN_00417240
;   core_enemy.cpp_CEnemy_ctor_FUN_00488fd0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;   crt_math.c_round_FUN_005a3120
;   crt_memory.c___arrinit_FUN_005a30d7
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00417400
        ;   Label: core_boneguy.cpp_CBoneGuy_ctor_FUN_00417400
    PUSH ESI                            ; 00417401
    PUSH EDI                            ; 00417402
    SUB ESP,0x28                        ; 00417403
    MOV EBX,dword ptr [ESP + 0x38]      ; 00417406
    PUSH EBX                            ; 0041740a
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00488fd0 ; 0041740b
        ;   XREF to: 00488fd0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00488fd0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00417410
    PUSH 0x5dc830                       ; 00417413
    PUSH 0x14                           ; 00417418
    ADD EAX,0xd0f0                      ; 0041741a
    PUSH EAX                            ; 0041741f
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 00417420
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00417425
    LEA EBX,[EAX + 0xffff2f10]          ; 00417428
    PUSH 0x5b6d7a                       ; 0041742e
    LEA EAX,[EBX + 0x158]               ; 00417433
    PUSH EAX                            ; 00417439
    MOV dword ptr [EBX + 0x154],0x5dc154 ; 0041743a
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 00417444
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x326c],0x3f19999a ; 00417449
    MOV dword ptr [EBX + 0x3270],0x3f666666 ; 00417453
    MOV ESI,0x5b6d86                    ; 0041745d
    MOV dword ptr [EBX + 0xfc],0x1      ; 00417462
    LEA EDI,[EBX + 0xd07c]              ; 0041746c
    MOV dword ptr [EBX + 0xd0e4],0x0    ; 00417472
    FLD float ptr [0x005dc13c]          ; 0041747c | DAT_005dc13c
    MOV dword ptr [EBX + 0x27a0],0x3    ; 00417482
    FLD float ptr [0x005dc140]          ; 0041748c | DAT_005dc140
    MOV dword ptr [EBX + 0xd0e0],0x41200000 ; 00417492
    ADD ESP,0x8                         ; 0041749c
    FXCH                                ; 0041749f
    FSTP float ptr [EBX + 0x3274]       ; 004174a1
    FSTP float ptr [EBX + 0x3278]       ; 004174a7
    PUSH EDI                            ; 004174ad
    MOV AL,byte ptr [ESI]               ; 004174ae
        ;   Label: LAB_004174ae
    MOV byte ptr [EDI],AL               ; 004174b0
    CMP AL,0x0                          ; 004174b2
    JZ 0x004174c6                       ; 004174b4
        ;   XREF to: 004174c6 (CONDITIONAL_JUMP)  ; LAB_004174c6
    MOV AL,byte ptr [ESI + 0x1]         ; 004174b6
    ADD ESI,0x2                         ; 004174b9
    MOV byte ptr [EDI + 0x1],AL         ; 004174bc
    ADD EDI,0x2                         ; 004174bf
    CMP AL,0x0                          ; 004174c2
    JNZ 0x004174ae                      ; 004174c4
        ;   XREF to: 004174ae (CONDITIONAL_JUMP)  ; LAB_004174ae
    POP EDI                             ; 004174c6
        ;   Label: LAB_004174c6
    PUSH 0x5a0                          ; 004174c7
    PUSH 0x0                            ; 004174cc
    LEA EAX,[EBX + 0xd0f0]              ; 004174ce
    PUSH EAX                            ; 004174d4
    MOV dword ptr [EBX + 0xd0e8],0x0    ; 004174d5
    CALL crt_memory.c_memset_FUN_005a28f0 ; 004174df
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004174e4
    PUSH 0xff                           ; 004174e7
    PUSH 0x0                            ; 004174ec
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 004174ee
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    MOV dword ptr [EBX + 0xd05c],0x0    ; 004174f3
    MOV dword ptr [EBX + 0xd060],0x0    ; 004174fd
    MOV dword ptr [EBX + 0xd064],0x0    ; 00417507
    MOV dword ptr [EBX + 0xce58],0x40c00000 ; 00417511
    MOV dword ptr [EBX + 0x252c],0x3f490fdb ; 0041751b
    MOV dword ptr [EBX + 0xd0ec],0x0    ; 00417525
    MOV dword ptr [EBX + 0xd074],0x0    ; 0041752f
    ADD ESP,0x8                         ; 00417539
    MOV dword ptr [EBX + 0xd054],EAX    ; 0041753c
    PUSH 0x437f0000                     ; 00417542
    PUSH 0x0                            ; 00417547
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00417549
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x2c],EAX      ; 0041754e
    FLD float ptr [ESP + 0x2c]          ; 00417552
    ADD ESP,0x8                         ; 00417556
    PUSH 0x42200000                     ; 00417559
    PUSH 0x0                            ; 0041755e
    FSTP float ptr [ESP + 0x14]         ; 00417560
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00417564
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x2c],EAX      ; 00417569
    FLD float ptr [ESP + 0x2c]          ; 0041756d
    ADD ESP,0x8                         ; 00417571
    PUSH 0x43800000                     ; 00417574
    PUSH 0x42d40000                     ; 00417579
    FSTP float ptr [ESP + 0x18]         ; 0041757e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00417582
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x2c],EAX      ; 00417587
    LEA ESI,[ESP + 0x20]                ; 0041758b
    FLD float ptr [ESP + 0x2c]          ; 0041758f
    ADD ESP,0x8                         ; 00417593
    LEA EAX,[ESP + 0xc]                 ; 00417596
    MOV EDI,ESP                         ; 0041759a
    PUSH EAX                            ; 0041759c
    FSTP float ptr [ESP + 0x18]         ; 0041759d
    CALL core_boneguy.cpp_hsvToRgb_FUN_00417240 ; 004175a1
        ;   XREF to: 00417240 (UNCONDITIONAL_CALL)  ; undefined core_boneguy.cpp_hsvToRgb_FUN_00417240()
    LEA ESI,[ESP + 0x1c]                ; 004175a6
    ADD ESP,0x4                         ; 004175aa
    MOVSD ES:EDI,ESI                    ; 004175ad
    MOVSD ES:EDI,ESI                    ; 004175ae
    MOVSD ES:EDI,ESI                    ; 004175af
    FLD float ptr [0x005b6d92]          ; 004175b0 | DAT_005b6d92
    FLD float ptr [ESP]                 ; 004175b6
    FMUL ST1                            ; 004175b9
    FLD float ptr [ESP + 0x4]           ; 004175bb
    FMUL ST2                            ; 004175bf
    FLD float ptr [ESP + 0x8]           ; 004175c1
    FMULP ST3                           ; 004175c5
    MOV EAX,EBX                         ; 004175c7
    MOV dword ptr [EBX + 0x3264],0x0    ; 004175c9
    FXCH                                ; 004175d3
    CALL crt_math.c_round_FUN_005a3120  ; 004175d5
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 004175da
    CALL crt_math.c_round_FUN_005a3120  ; 004175dc
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST2                            ; 004175e1
    CALL crt_math.c_round_FUN_005a3120  ; 004175e3
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 004175e8
    FISTP dword ptr [EBX + 0x108]       ; 004175ea
    FXCH                                ; 004175f0
    FISTP dword ptr [EBX + 0x10c]       ; 004175f2
    FISTP dword ptr [EBX + 0x110]       ; 004175f8
    ADD ESP,0x28                        ; 004175fe
    POP EDI                             ; 00417601
    POP ESI                             ; 00417602
    POP EBX                             ; 00417603
    RET                                 ; 00417604

