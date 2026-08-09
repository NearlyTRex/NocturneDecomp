; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoneGuy * __cdecl core_boneguy_cpp_CBoneGuy_ctor_FUN_0041bbc0(CBoneGuy *this_ptr)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
; Local Variables:
; CVector3f        Stack[-0x20]:12  local_20
; CVector3f        Stack[-0x14]:12  local_14
;
; XREF[1]:
;   core_boneguy.cpp_factoryFuncBoneGuy_FUN_0041b820 at 0041b83a
;
; Referenced Globals:
;   TerminatedCString s_boneguy_dfm_00615f7d
;   TerminatedCString s_boneguydie_00615f89
;   undefined4 s_oneguydie_00615f8a
;   undefined4 s_neguydie_00615f8b
;   undefined4 s_eguydie_00615f8c
;   float FLOAT_00615f95 = 256
;   float FLOAT_0065af60 = 50
;   float FLOAT_0065af64 = 100
;   CBoneGuy_full_vtable g_CBoneGuyVTable
;   WatcomTypeInfo g_SBoneGuyBoxTypeInfo
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_boneguy.cpp_hsvToRgb_FUN_0041ba10
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;   crt_math.c_round_FUN_005fe6b0
;   crt_memory.c___arrinit_FUN_005fe667
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041bbc0
        ;   Label: core_boneguy.cpp_CBoneGuy_ctor_FUN_0041bbc0
    SUB ESP,0x1c                        ; 0041bbc1
    MOV EBX,dword ptr [ESP + 0x24]      ; 0041bbc4
    PUSH EDI                            ; 0041bbc8
    PUSH ESI                            ; 0041bbc9
    PUSH EBX                            ; 0041bbca
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500 ; 0041bbcb
        ;   XREF to: 004a9500 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0041bbd0
    PUSH 0x65b0e0                       ; 0041bbd3 | g_SBoneGuyBoxTypeInfo
    PUSH 0x14                           ; 0041bbd8
    ADD EAX,0xbf3c                      ; 0041bbda
    PUSH EAX                            ; 0041bbdf
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 0041bbe0
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0041bbe5
    LEA EBX,[EAX + 0xffff40c4]          ; 0041bbe8
    PUSH 0x615f7d                       ; 0041bbee | = "boneguy.dfm"
    LEA EAX,[EBX + 0x158]               ; 0041bbf3
    PUSH EAX                            ; 0041bbf9
    MOV dword ptr [EBX + 0x154],0x65af74 ; 0041bbfa | g_CBoneGuyVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 0041bc04
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2ddc],0x3f19999a ; 0041bc09
    MOV dword ptr [EBX + 0x2de0],0x3f666666 ; 0041bc13
    MOV ESI,0x615f89                    ; 0041bc1d | = "boneguydie"
    MOV dword ptr [EBX + 0xfc],0x1      ; 0041bc22
    LEA EDI,[EBX + 0xbed0]              ; 0041bc2c
    MOV dword ptr [EBX + 0xc4dc],0x0    ; 0041bc32
    FLD float ptr [0x0065af60]          ; 0041bc3c | FLOAT_0065af60
    MOV dword ptr [EBX + 0x2610],0x2    ; 0041bc42
    FLD float ptr [0x0065af64]          ; 0041bc4c | FLOAT_0065af64
    MOV dword ptr [EBX + 0xbf34],0x41200000 ; 0041bc52
    ADD ESP,0x8                         ; 0041bc5c
    FXCH                                ; 0041bc5f
    FSTP float ptr [EBX + 0x2de4]       ; 0041bc61
    FSTP float ptr [EBX + 0x2de8]       ; 0041bc67
    PUSH EDI                            ; 0041bc6d
    MOV AL,byte ptr [ESI]               ; 0041bc6e | = "boneguydie" | s_neguydie_00615f8b
        ;   Label: LAB_0041bc6e
    MOV byte ptr [EDI],AL               ; 0041bc70
    CMP AL,0x0                          ; 0041bc72
    JZ 0x0041bc86                       ; 0041bc74
        ;   XREF to: 0041bc86 (CONDITIONAL_JUMP)  ; LAB_0041bc86
    MOV AL,byte ptr [ESI + 0x1]         ; 0041bc76 | s_oneguydie_00615f8a | s_eguydie_00615f8c
    ADD ESI,0x2                         ; 0041bc79
    MOV byte ptr [EDI + 0x1],AL         ; 0041bc7c
    ADD EDI,0x2                         ; 0041bc7f
    CMP AL,0x0                          ; 0041bc82
    JNZ 0x0041bc6e                      ; 0041bc84
        ;   XREF to: 0041bc6e (CONDITIONAL_JUMP)  ; LAB_0041bc6e
    POP EDI                             ; 0041bc86
        ;   Label: LAB_0041bc86
    PUSH 0x5a0                          ; 0041bc87
    PUSH 0x0                            ; 0041bc8c
    LEA EAX,[EBX + 0xbf3c]              ; 0041bc8e
    PUSH EAX                            ; 0041bc94
    MOV dword ptr [EBX + 0xbf38],0x0    ; 0041bc95
    CALL crt_memory.c_memset_FUN_005fde40 ; 0041bc9f
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0041bca4
    PUSH 0xff                           ; 0041bca7
    PUSH 0x0                            ; 0041bcac
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 0041bcae
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    MOV dword ptr [EBX + 0xbec0],0x0    ; 0041bcb3
    MOV dword ptr [EBX + 0xbec4],0x0    ; 0041bcbd
    MOV dword ptr [EBX + 0xbec8],0x0    ; 0041bcc7
    MOV dword ptr [EBX + 0xbeb0],0x40c00000 ; 0041bcd1
    ADD ESP,0x8                         ; 0041bcdb
    MOV dword ptr [EBX + 0xbebc],EAX    ; 0041bcde
    POP ESI                             ; 0041bce4
    POP EDI                             ; 0041bce5
    PUSH 0x437f0000                     ; 0041bce6
    PUSH 0x0                            ; 0041bceb
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 0041bced
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x20],EAX      ; 0041bcf2
    FLD float ptr [ESP + 0x20]          ; 0041bcf6
    ADD ESP,0x8                         ; 0041bcfa
    PUSH 0x42200000                     ; 0041bcfd
    PUSH 0x0                            ; 0041bd02
    FSTP float ptr [ESP + 0x14]         ; 0041bd04
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 0041bd08
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x20],EAX      ; 0041bd0d
    FLD float ptr [ESP + 0x20]          ; 0041bd11
    ADD ESP,0x8                         ; 0041bd15
    PUSH 0x43800000                     ; 0041bd18
    PUSH 0x42d40000                     ; 0041bd1d
    FSTP float ptr [ESP + 0x18]         ; 0041bd22
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 0041bd26
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x20],EAX      ; 0041bd2b
    FLD float ptr [ESP + 0x20]          ; 0041bd2f
    ADD ESP,0x8                         ; 0041bd33
    LEA EAX,[ESP + 0xc]                 ; 0041bd36
    PUSH EAX                            ; 0041bd3a
    LEA EAX,[ESP + 0x4]                 ; 0041bd3b
    PUSH EAX                            ; 0041bd3f
    FSTP float ptr [ESP + 0x1c]         ; 0041bd40
    CALL core_boneguy.cpp_hsvToRgb_FUN_0041ba10 ; 0041bd44
        ;   XREF to: 0041ba10 (UNCONDITIONAL_CALL)  ; CColor3f * core_boneguy.cpp_hsvToRgb_FUN_0041ba10(CColor3f * out_rgb, CColor3f * in_hsv)
    ADD ESP,0x8                         ; 0041bd49
    FLD float ptr [0x00615f95]          ; 0041bd4c | FLOAT_00615f95
    FLD float ptr [ESP]                 ; 0041bd52
    FMUL ST1                            ; 0041bd55
    CALL crt_math.c_round_FUN_005fe6b0  ; 0041bd57
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBX + 0x108]       ; 0041bd5c
    FLD float ptr [ESP + 0x4]           ; 0041bd62
    FMUL ST1                            ; 0041bd66
    CALL crt_math.c_round_FUN_005fe6b0  ; 0041bd68
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBX + 0x10c]       ; 0041bd6d
    FMUL float ptr [ESP + 0x8]          ; 0041bd73
    MOV EAX,EBX                         ; 0041bd77
    CALL crt_math.c_round_FUN_005fe6b0  ; 0041bd79
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBX + 0x110]       ; 0041bd7e
    ADD ESP,0x1c                        ; 0041bd84
    POP EBX                             ; 0041bd87
    RET                                 ; 0041bd88

