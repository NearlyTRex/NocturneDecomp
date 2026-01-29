; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown float core_hero_cpp_FUN_004f3960 (undefined4 param_1,undefined4 param_2,float *unaff_EBX,undefined4 param_4, int param_5,float *param_6)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[7]:
;   core_baron.cpp_CBaron_FUN_004136b0 at 004136cb
;   core_colonel.cpp_FUN_0043ff20 at 0043ffe3
;   core_gabriela.cpp_FUN_004d4190 at 004d4269
;   core_haystack.cpp_FUN_004f13f0 at 004f14bc
;   core_icepick.cpp_FUN_004f8c70 at 004f8d8e
;   core_scat.cpp_FUN_005578e0 at 00557996
;   core_svetlana.cpp_FUN_005d9260 at 005d937e
;
; Referenced Globals:
;   double DOUBLE_0062ecce = 2
;   WatcomTypeInfo g_CVectorTypeInfo
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CMobsterClassInfo.name_hash
;   undefined4 g_CDemonSetInstance.unk4[7996]
;   undefined4 DAT_03265258
;   undefined4 g_CVehicleClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   crt_memory.c___arrinit_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3960
        ;   Label: core_hero.cpp_FUN_004f3960
    PUSH ESI                            ; 004f3961
    PUSH EDI                            ; 004f3962
    PUSH EBP                            ; 004f3963
    MOV EBP,ESP                         ; 004f3964
    SUB ESP,0x98                        ; 004f3966
    AND ESP,0xfffffff8                  ; 004f396c
    MOV EAX,dword ptr [EBP + 0x18]      ; 004f396f
    XOR EDX,EDX                         ; 004f3972
    XOR EDI,EDI                         ; 004f3974
    MOV dword ptr [EAX],0x461c3f9a      ; 004f3976
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f397c
    XOR ESI,ESI                         ; 004f397f
    ADD EAX,0x20                        ; 004f3981
    MOV dword ptr [ESP + 0x8c],EDX      ; 004f3984
    MOV dword ptr [ESP + 0x94],EAX      ; 004f398b
    MOV EAX,[0x006810c8]                ; 004f3992 | g_CDemonSetPtr
        ;   Label: LAB_004f3992
    CMP EDI,dword ptr [EAX + 0x150fdc]  ; 004f3997 | g_CDemonSetInstance.unk4[7996]
    JL 0x004f39bb                       ; 004f399d
        ;   XREF to: 004f39bb (CONDITIONAL_JUMP)  ; LAB_004f39bb
    CMP dword ptr [ESP + 0x8c],0x0      ; 004f399f
    JNZ 0x004f3ace                      ; 004f39a7
        ;   XREF to: 004f3ace (CONDITIONAL_JUMP)  ; LAB_004f3ace
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004f39ad
    MOV ESP,EBP                         ; 004f39b4
    POP EBP                             ; 004f39b6
    POP EDI                             ; 004f39b7
    POP ESI                             ; 004f39b8
    POP EBX                             ; 004f39b9
    RET                                 ; 004f39ba
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x150fe0] ; 004f39bb | DAT_03265258
        ;   Label: LAB_004f39bb
    MOV EAX,[0x03f8759c]                ; 004f39c2 | g_CVehicleClassInfo.name_hash
    PUSH EAX                            ; 004f39c7
    PUSH EBX                            ; 004f39c8
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004f39c9
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f39ce
    TEST EAX,EAX                        ; 004f39d1
    JNZ 0x004f3ac5                      ; 004f39d3
        ;   XREF to: 004f3ac5 (CONDITIONAL_JUMP)  ; LAB_004f3ac5
    MOV EDX,dword ptr [0x02f37f30]      ; 004f39d9 | g_CMobsterClassInfo.name_hash
    PUSH EDX                            ; 004f39df
    PUSH EBX                            ; 004f39e0
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004f39e1
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004f39e6
    TEST EAX,EAX                        ; 004f39e9
    JZ 0x004f39fa                       ; 004f39eb
        ;   XREF to: 004f39fa (CONDITIONAL_JUMP)  ; LAB_004f39fa
    CMP dword ptr [EAX + 0xbee0],0x0    ; 004f39ed
    JNZ 0x004f3ac5                      ; 004f39f4
        ;   XREF to: 004f3ac5 (CONDITIONAL_JUMP)  ; LAB_004f3ac5
    PUSH EBX                            ; 004f39fa
        ;   Label: LAB_004f39fa
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f39fb
    CALL dword ptr [EAX + 0x120]        ; 004f3a01
    ADD ESP,0x4                         ; 004f3a07
    TEST EAX,EAX                        ; 004f3a0a
    JNZ 0x004f3ac5                      ; 004f3a0c
        ;   XREF to: 004f3ac5 (CONDITIONAL_JUMP)  ; LAB_004f3ac5
    PUSH EBX                            ; 004f3a12
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f3a13
    CALL dword ptr [EAX + 0x68]         ; 004f3a19
    ADD ESP,0x4                         ; 004f3a1c
    TEST EAX,EAX                        ; 004f3a1f
    JNZ 0x004f3ac5                      ; 004f3a21
        ;   XREF to: 004f3ac5 (CONDITIONAL_JUMP)  ; LAB_004f3ac5
    PUSH 0x6598c0                       ; 004f3a27 | g_CVectorTypeInfo
    PUSH 0xa                            ; 004f3a2c
    LEA EAX,[ESP + 0x8]                 ; 004f3a2e
    PUSH EAX                            ; 004f3a32
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004f3a33
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004f3a38
    MOV EDX,ESP                         ; 004f3a3b
    PUSH EDX                            ; 004f3a3d
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f3a3e
    PUSH EBX                            ; 004f3a44
    CALL dword ptr [EAX + 0x4c]         ; 004f3a45
    ADD ESP,0x8                         ; 004f3a48
    TEST EAX,EAX                        ; 004f3a4b
    JLE 0x004f3ac5                      ; 004f3a4d
        ;   XREF to: 004f3ac5 (CONDITIONAL_JUMP)  ; LAB_004f3ac5
    MOV EDX,dword ptr [ESP + 0x94]      ; 004f3a4f
    LEA EAX,[EBX + 0x20]                ; 004f3a56
    FLD float ptr [EDX]                 ; 004f3a59
    FSUB float ptr [EAX]                ; 004f3a5b
    FSTP float ptr [ESP + 0x78]         ; 004f3a5d
    FLD float ptr [EDX + 0x4]           ; 004f3a61
    FSUB float ptr [EAX + 0x4]          ; 004f3a64
    FST float ptr [ESP + 0x7c]          ; 004f3a67
    FLD ST0                             ; 004f3a6b
    FMUL double ptr [0x0062ecce]        ; 004f3a6d | DOUBLE_0062ecce
    FLD float ptr [EDX + 0x8]           ; 004f3a73
    FSUB float ptr [EAX + 0x8]          ; 004f3a76
    FXCH                                ; 004f3a79
    FSTP ST2                            ; 004f3a7b
    FXCH                                ; 004f3a7d
    FST float ptr [ESP + 0x7c]          ; 004f3a7f
    FMUL float ptr [ESP + 0x7c]         ; 004f3a83
    FLD float ptr [ESP + 0x78]          ; 004f3a87
    FMUL ST0                            ; 004f3a8b
    FADDP                               ; 004f3a8d
    FXCH                                ; 004f3a8f
    FST float ptr [ESP + 0x80]          ; 004f3a91
    FMUL float ptr [ESP + 0x80]         ; 004f3a98
    FADDP                               ; 004f3a9f
    MOV EAX,dword ptr [EBP + 0x18]      ; 004f3aa1
    FST float ptr [ESP + 0x90]          ; 004f3aa4
    FCOMP float ptr [EAX]               ; 004f3aab
    FNSTSW AX                           ; 004f3aad
    SAHF                                ; 004f3aaf
    JNC 0x004f3ac5                      ; 004f3ab0
        ;   XREF to: 004f3ac5 (CONDITIONAL_JUMP)  ; LAB_004f3ac5
    MOV EDX,dword ptr [EBP + 0x18]      ; 004f3ab2
    MOV EAX,dword ptr [ESP + 0x90]      ; 004f3ab5
    MOV dword ptr [ESP + 0x8c],EBX      ; 004f3abc
    MOV dword ptr [EDX],EAX             ; 004f3ac3
    INC EDI                             ; 004f3ac5
        ;   Label: LAB_004f3ac5
    ADD ESI,0x4                         ; 004f3ac6
    JMP 0x004f3992                      ; 004f3ac9
        ;   XREF to: 004f3992 (UNCONDITIONAL_JUMP)  ; LAB_004f3992
    MOV EAX,dword ptr [EBP + 0x18]      ; 004f3ace
        ;   Label: LAB_004f3ace
    FLD float ptr [EAX]                 ; 004f3ad1
    FSQRT                               ; 004f3ad3
    MOV EAX,dword ptr [EBP + 0x18]      ; 004f3ad5
    FSTP float ptr [EAX]                ; 004f3ad8
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004f3ada
    MOV ESP,EBP                         ; 004f3ae1
    POP EBP                             ; 004f3ae3
    POP EDI                             ; 004f3ae4
    POP ESI                             ; 004f3ae5
    POP EBX                             ; 004f3ae6
    RET                                 ; 004f3ae7

