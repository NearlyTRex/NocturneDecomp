; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_ctor_FUN_00418630(CBoneGuy *this_ptr)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_boneguy.cpp_factoryFuncBoneGuy_FUN_004182a0 at 004182b3
;
; Referenced Globals:
;   TerminatedCString s_boneguy_dfm_00579186
;   TerminatedCString s_boneguydie_00579192
;   undefined4 s_oneguydie_00579192+1
;   undefined4 s_neguydie_00579192+2
;   undefined4 s_eguydie_00579192+3
;   undefined4 DAT_0057919e
;   float FLOAT_0059a8a0 = 50
;   float FLOAT_0059a8a4 = 100
;   CBoneGuy_full_vtable g_CBoneGuyVTable
;   WatcomTypeInfo g_SBoneGuyBoxTypeInfo_0059aa00
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_getRandomInt_FUN_0040de00
;   core_boneguy.cpp_hsvToRgb_FUN_00418480
;   core_enemy.cpp_CEnemy_ctor_FUN_00479560
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;   crt_math.c_round_FUN_00563a30
;   crt_memory.c___arrinit_FUN_005644a7
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418630
        ;   Label: core_boneguy.cpp_CBoneGuy_ctor_FUN_00418630
    SUB ESP,0x1c                        ; 00418631
    MOV EBX,dword ptr [ESP + 0x24]      ; 00418634
    PUSH EDI                            ; 00418638
    PUSH ESI                            ; 00418639
    PUSH EBX                            ; 0041863a
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00479560 ; 0041863b
        ;   XREF to: 00479560 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00479560(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00418640
    PUSH 0x59aa00                       ; 00418643 | g_SBoneGuyBoxTypeInfo_0059aa00
    PUSH 0x14                           ; 00418648
    ADD EAX,0xbda4                      ; 0041864a
    PUSH EAX                            ; 0041864f
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 00418650
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00418655
    LEA EBX,[EAX + 0xffff425c]          ; 00418658
    PUSH 0x579186                       ; 0041865e | = "boneguy.dfm"
    LEA EAX,[EBX + 0x150]               ; 00418663
    PUSH EAX                            ; 00418669
    MOV dword ptr [EBX + 0x14c],0x59a8b4 ; 0041866a | g_CBoneGuyVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 00418674
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2dd4],0x3f19999a ; 00418679
    MOV dword ptr [EBX + 0x2dd8],0x3f666666 ; 00418683
    MOV ESI,0x579192                    ; 0041868d | = "boneguydie"
    MOV dword ptr [EBX + 0xfc],0x1      ; 00418692
    LEA EDI,[EBX + 0xbd38]              ; 0041869c
    MOV dword ptr [EBX + 0xc344],0x0    ; 004186a2
    FLD float ptr [0x0059a8a0]          ; 004186ac | FLOAT_0059a8a0
    MOV dword ptr [EBX + 0x2608],0x2    ; 004186b2
    FLD float ptr [0x0059a8a4]          ; 004186bc | FLOAT_0059a8a4
    MOV dword ptr [EBX + 0xbd9c],0x41200000 ; 004186c2
    ADD ESP,0x8                         ; 004186cc
    FXCH                                ; 004186cf
    FSTP float ptr [EBX + 0x2ddc]       ; 004186d1
    FSTP float ptr [EBX + 0x2de0]       ; 004186d7
    PUSH EDI                            ; 004186dd
    MOV AL,byte ptr [ESI]               ; 004186de | = "boneguydie" | s_neguydie_00579192+2
        ;   Label: LAB_004186de
    MOV byte ptr [EDI],AL               ; 004186e0
    CMP AL,0x0                          ; 004186e2
    JZ 0x004186f6                       ; 004186e4
        ;   XREF to: 004186f6 (CONDITIONAL_JUMP)  ; LAB_004186f6
    MOV AL,byte ptr [ESI + 0x1]         ; 004186e6 | s_oneguydie_00579192+1 | s_eguydie_00579192+3
    ADD ESI,0x2                         ; 004186e9
    MOV byte ptr [EDI + 0x1],AL         ; 004186ec
    ADD EDI,0x2                         ; 004186ef
    CMP AL,0x0                          ; 004186f2
    JNZ 0x004186de                      ; 004186f4
        ;   XREF to: 004186de (CONDITIONAL_JUMP)  ; LAB_004186de
    POP EDI                             ; 004186f6
        ;   Label: LAB_004186f6
    PUSH 0x5a0                          ; 004186f7
    PUSH 0x0                            ; 004186fc
    LEA EAX,[EBX + 0xbda4]              ; 004186fe
    PUSH EAX                            ; 00418704
    MOV dword ptr [EBX + 0xbda0],0x0    ; 00418705
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0041870f
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00418714
    PUSH 0xff                           ; 00418717
    PUSH 0x0                            ; 0041871c
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 0041871e
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040de00(int min_value, int max_value)
    MOV dword ptr [EBX + 0xbd28],0x0    ; 00418723
    MOV dword ptr [EBX + 0xbd2c],0x0    ; 0041872d
    MOV dword ptr [EBX + 0xbd30],0x0    ; 00418737
    MOV dword ptr [EBX + 0xbd18],0x40c00000 ; 00418741
    ADD ESP,0x8                         ; 0041874b
    MOV dword ptr [EBX + 0xbd24],EAX    ; 0041874e
    POP ESI                             ; 00418754
    POP EDI                             ; 00418755
    PUSH 0x437f0000                     ; 00418756
    PUSH 0x0                            ; 0041875b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0041875d
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x20],EAX      ; 00418762
    FLD float ptr [ESP + 0x20]          ; 00418766
    ADD ESP,0x8                         ; 0041876a
    PUSH 0x42200000                     ; 0041876d
    PUSH 0x0                            ; 00418772
    FSTP float ptr [ESP + 0x14]         ; 00418774
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00418778
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x20],EAX      ; 0041877d
    FLD float ptr [ESP + 0x20]          ; 00418781
    ADD ESP,0x8                         ; 00418785
    PUSH 0x43800000                     ; 00418788
    PUSH 0x42d40000                     ; 0041878d
    FSTP float ptr [ESP + 0x18]         ; 00418792
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00418796
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x20],EAX      ; 0041879b
    FLD float ptr [ESP + 0x20]          ; 0041879f
    ADD ESP,0x8                         ; 004187a3
    LEA EAX,[ESP + 0xc]                 ; 004187a6
    PUSH EAX                            ; 004187aa
    LEA EAX,[ESP + 0x4]                 ; 004187ab
    PUSH EAX                            ; 004187af
    FSTP float ptr [ESP + 0x1c]         ; 004187b0
    CALL core_boneguy.cpp_hsvToRgb_FUN_00418480 ; 004187b4
        ;   XREF to: 00418480 (UNCONDITIONAL_CALL)  ; CColor3f * core_boneguy.cpp_hsvToRgb_FUN_00418480(CColor3f * out_rgb, CColor3f * in_hsv)
    ADD ESP,0x8                         ; 004187b9
    FLD float ptr [0x0057919e]          ; 004187bc | DAT_0057919e
    FLD float ptr [ESP]                 ; 004187c2
    FMUL ST1                            ; 004187c5
    CALL crt_math.c_round_FUN_00563a30  ; 004187c7
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [EBX + 0x108]       ; 004187cc
    FLD float ptr [ESP + 0x4]           ; 004187d2
    FMUL ST1                            ; 004187d6
    CALL crt_math.c_round_FUN_00563a30  ; 004187d8
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [EBX + 0x10c]       ; 004187dd
    FMUL float ptr [ESP + 0x8]          ; 004187e3
    MOV EAX,EBX                         ; 004187e7
    CALL crt_math.c_round_FUN_00563a30  ; 004187e9
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [EBX + 0x110]       ; 004187ee
    ADD ESP,0x1c                        ; 004187f4
    POP EBX                             ; 004187f7
    RET                                 ; 004187f8

