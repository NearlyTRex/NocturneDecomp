; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_updateInventory_FUN_004dccd0(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[4]:
;   core_doc.cpp_FUN_00450c60 at 00451ad1
;   core_icepick.cpp_CIcePick_process_FUN_004d4c50 at 004d4f21
;   core_scat.cpp_CScat_process_FUN_0051ecc0 at 0051ef69
;   core_stranger.cpp_CStranger_processFrame_FUN_00563060 at 00563ddc
;
; Referenced Globals:
;   undefined4 DAT_005db9ea
;   undefined4 DAT_005f901c
;   undefined4 DAT_005f9020
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 g_CBatteryClassInfo.name_hash
;   undefined4 g_CGameInstance.goggles_active
;   undefined4 g_CGameInstance.flashlight_active
;   undefined4 g_CGameInstance.delta_time_float
;   undefined4 g_CLightGunClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dccd0
        ;   Label: core_inv.cpp_CInventory_updateInventory_FUN_004dccd0
    PUSH ESI                            ; 004dccd1
    PUSH EDI                            ; 004dccd2
    PUSH EBP                            ; 004dccd3
    MOV EBP,ESP                         ; 004dccd4
    SUB ESP,0x10                        ; 004dccd6
    AND ESP,0xfffffff8                  ; 004dccd9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004dccdc
    MOV EAX,dword ptr [EBX + 0x468]     ; 004dccdf
    SHL EAX,0x2                         ; 004dcce5
    ADD EAX,EBX                         ; 004dcce8
    MOV EDX,dword ptr [EAX + 0x610]     ; 004dccea
    TEST EDX,EDX                        ; 004dccf0
    JZ 0x004dcd3b                       ; 004dccf2
        ;   XREF to: 004dcd3b (CONDITIONAL_JUMP)  ; LAB_004dcd3b
    MOV EAX,EDX                         ; 004dccf4
    MOV ECX,dword ptr [EBX + 0x45c]     ; 004dccf6
    CMP ECX,dword ptr [EDX + 0x6c4]     ; 004dccfc
    JZ 0x004dcd22                       ; 004dcd02
        ;   XREF to: 004dcd22 (CONDITIONAL_JUMP)  ; LAB_004dcd22
    MOV ESI,dword ptr [0x01d03560]      ; 004dcd04 | g_CLightGunClassInfo.name_hash
    PUSH ESI                            ; 004dcd0a
    PUSH EAX                            ; 004dcd0b
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004dcd0c
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004dcd11
    TEST EAX,EAX                        ; 004dcd14
    JNZ 0x004dcd22                      ; 004dcd16
        ;   XREF to: 004dcd22 (CONDITIONAL_JUMP)  ; LAB_004dcd22
    PUSH EAX                            ; 004dcd18
    PUSH EBX                            ; 004dcd19
    CALL core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd270 ; 004dcd1a
        ;   XREF to: 004dd270 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd270(CInventory * this_ptr, int reset_both)
    ADD ESP,0x8                         ; 004dcd1f
    MOV EAX,dword ptr [EBX + 0x468]     ; 004dcd22
        ;   Label: LAB_004dcd22
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x610] ; 004dcd28
    MOV EAX,dword ptr [EAX + 0x6c4]     ; 004dcd2f
    MOV dword ptr [EBX + 0x45c],EAX     ; 004dcd35
    MOV EAX,[0x00616494]                ; 004dcd3b | g_CGamePtr
        ;   Label: LAB_004dcd3b
    MOV EDI,dword ptr [EAX + 0x264]     ; 004dcd40 | g_CGameInstance.flashlight_active
    TEST EDI,EDI                        ; 004dcd46
    JZ 0x004dced2                       ; 004dcd48
        ;   XREF to: 004dced2 (CONDITIONAL_JUMP)  ; LAB_004dced2
    MOV EAX,[0x005f901c]                ; 004dcd4e | DAT_005f901c
        ;   Label: LAB_004dcd4e
    MOV EDI,dword ptr [EBX + 0x10]      ; 004dcd53
    XOR ESI,ESI                         ; 004dcd56
    MOV dword ptr [ESP],EAX             ; 004dcd58
    TEST EDI,EDI                        ; 004dcd5b
    JLE 0x004dcd87                      ; 004dcd5d
        ;   XREF to: 004dcd87 (CONDITIONAL_JUMP)  ; LAB_004dcd87
    MOV EDI,EBX                         ; 004dcd5f
    MOV EDX,dword ptr [0x007bc85c]      ; 004dcd61 | g_CBatteryClassInfo.name_hash
        ;   Label: LAB_004dcd61
    PUSH EDX                            ; 004dcd67
    MOV ECX,dword ptr [EDI + 0x14]      ; 004dcd68
    PUSH ECX                            ; 004dcd6b
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004dcd6c
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004dcd71
    TEST EAX,EAX                        ; 004dcd74
    JNZ 0x004dcf49                      ; 004dcd76
        ;   XREF to: 004dcf49 (CONDITIONAL_JUMP)  ; LAB_004dcf49
    INC ESI                             ; 004dcd7c
        ;   Label: LAB_004dcd7c
    MOV EAX,dword ptr [EBX + 0x10]      ; 004dcd7d
    ADD EDI,0x4                         ; 004dcd80
    CMP ESI,EAX                         ; 004dcd83
    JL 0x004dcd61                       ; 004dcd85
        ;   XREF to: 004dcd61 (CONDITIONAL_JUMP)  ; LAB_004dcd61
    MOV EAX,[0x00616494]                ; 004dcd87 | g_CGamePtr
        ;   Label: LAB_004dcd87
    FLD float ptr [EAX + 0x284]         ; 004dcd8c | g_CGameInstance.delta_time_float
    FMUL double ptr [0x005db9ea]        ; 004dcd92 | DAT_005db9ea
    FDIV float ptr [ESP]                ; 004dcd98
    FSUBR float ptr [EBX]               ; 004dcd9b
    FST float ptr [EBX]                 ; 004dcd9d
    FLDZ                                ; 004dcd9f
    FCOMPP                              ; 004dcda1
    FNSTSW AX                           ; 004dcda3
    SAHF                                ; 004dcda5
    JBE 0x004dcdae                      ; 004dcda6
        ;   XREF to: 004dcdae (CONDITIONAL_JUMP)  ; LAB_004dcdae
    MOV dword ptr [EBX],0x0             ; 004dcda8
    MOV ESI,dword ptr [EBX + 0x10]      ; 004dcdae
        ;   Label: LAB_004dcdae
    XOR EDI,EDI                         ; 004dcdb1
    TEST ESI,ESI                        ; 004dcdb3
    JLE 0x004dcddf                      ; 004dcdb5
        ;   XREF to: 004dcddf (CONDITIONAL_JUMP)  ; LAB_004dcddf
    MOV ESI,EBX                         ; 004dcdb7
    MOV EDX,dword ptr [0x01d03560]      ; 004dcdb9 | g_CLightGunClassInfo.name_hash
        ;   Label: LAB_004dcdb9
    PUSH EDX                            ; 004dcdbf
    MOV ECX,dword ptr [ESI + 0x14]      ; 004dcdc0
    PUSH ECX                            ; 004dcdc3
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004dcdc4
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004dcdc9
    TEST EAX,EAX                        ; 004dcdcc
    JNZ 0x004dcf6e                      ; 004dcdce
        ;   XREF to: 004dcf6e (CONDITIONAL_JUMP)  ; LAB_004dcf6e
    INC EDI                             ; 004dcdd4
        ;   Label: LAB_004dcdd4
    MOV EAX,dword ptr [EBX + 0x10]      ; 004dcdd5
    ADD ESI,0x4                         ; 004dcdd8
    CMP EDI,EAX                         ; 004dcddb
    JL 0x004dcdb9                       ; 004dcddd
        ;   XREF to: 004dcdb9 (CONDITIONAL_JUMP)  ; LAB_004dcdb9
    MOV EDX,dword ptr [0x00616494]      ; 004dcddf | g_CGamePtr
        ;   Label: LAB_004dcddf
    LEA EAX,[EBX + 0x340]               ; 004dcde5
    FLD float ptr [EDX + 0x284]         ; 004dcdeb | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX]               ; 004dcdf1
    FSTP float ptr [EAX]                ; 004dcdf3
    FLD float ptr [EBX + 0x340]         ; 004dcdf5
    FLDZ                                ; 004dcdfb
    FCOMPP                              ; 004dcdfd
    FNSTSW AX                           ; 004dcdff
    SAHF                                ; 004dce01
    JC 0x004dce0e                       ; 004dce02
        ;   XREF to: 004dce0e (CONDITIONAL_JUMP)  ; LAB_004dce0e
    MOV dword ptr [EBX + 0x340],0x0     ; 004dce04
    MOV EDX,dword ptr [0x00616494]      ; 004dce0e | g_CGamePtr
        ;   Label: LAB_004dce0e
    LEA EAX,[EBX + 0x344]               ; 004dce14
    FLD float ptr [EDX + 0x284]         ; 004dce1a | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX]               ; 004dce20
    FSTP float ptr [EAX]                ; 004dce22
    FLD float ptr [EBX + 0x344]         ; 004dce24
    FLDZ                                ; 004dce2a
    FCOMPP                              ; 004dce2c
    FNSTSW AX                           ; 004dce2e
    SAHF                                ; 004dce30
    JC 0x004dce3d                       ; 004dce31
        ;   XREF to: 004dce3d (CONDITIONAL_JUMP)  ; LAB_004dce3d
    MOV dword ptr [EBX + 0x344],0x0     ; 004dce33
    MOV EDX,dword ptr [0x00616494]      ; 004dce3d | g_CGamePtr
        ;   Label: LAB_004dce3d
    LEA EAX,[EBX + 0x348]               ; 004dce43
    FLD float ptr [EDX + 0x284]         ; 004dce49 | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX]               ; 004dce4f
    FSTP float ptr [EAX]                ; 004dce51
    FLD float ptr [EBX + 0x348]         ; 004dce53
    FLDZ                                ; 004dce59
    FCOMPP                              ; 004dce5b
    FNSTSW AX                           ; 004dce5d
    SAHF                                ; 004dce5f
    JC 0x004dce6c                       ; 004dce60
        ;   XREF to: 004dce6c (CONDITIONAL_JUMP)  ; LAB_004dce6c
    MOV dword ptr [EBX + 0x348],0x0     ; 004dce62
    MOV EDX,dword ptr [0x00616494]      ; 004dce6c | g_CGamePtr
        ;   Label: LAB_004dce6c
    LEA EAX,[EBX + 0x34c]               ; 004dce72
    FLD float ptr [EDX + 0x284]         ; 004dce78 | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX]               ; 004dce7e
    FSTP float ptr [EAX]                ; 004dce80
    FLD float ptr [EBX + 0x34c]         ; 004dce82
    FLDZ                                ; 004dce88
    FCOMPP                              ; 004dce8a
    FNSTSW AX                           ; 004dce8c
    SAHF                                ; 004dce8e
    JC 0x004dcea2                       ; 004dce8f
        ;   XREF to: 004dcea2 (CONDITIONAL_JUMP)  ; LAB_004dcea2
    MOV byte ptr [EBX + 0x354],0x0      ; 004dce91
    MOV dword ptr [EBX + 0x34c],0x0     ; 004dce98
    MOV EDX,dword ptr [0x00616494]      ; 004dcea2 | g_CGamePtr
        ;   Label: LAB_004dcea2
    LEA EAX,[EBX + 0x350]               ; 004dcea8
    FLD float ptr [EDX + 0x284]         ; 004dceae | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX]               ; 004dceb4
    FSTP float ptr [EAX]                ; 004dceb6
    FLD float ptr [EBX + 0x350]         ; 004dceb8
    FLDZ                                ; 004dcebe
    FCOMPP                              ; 004dcec0
    FNSTSW AX                           ; 004dcec2
    SAHF                                ; 004dcec4
    JA 0x004dcf9f                       ; 004dcec5
        ;   XREF to: 004dcf9f (CONDITIONAL_JUMP)  ; LAB_004dcf9f
    MOV ESP,EBP                         ; 004dcecb
    POP EBP                             ; 004dcecd
    POP EDI                             ; 004dcece
    POP ESI                             ; 004dcecf
    POP EBX                             ; 004dced0
    RET                                 ; 004dced1
    CMP dword ptr [EAX + 0x25c],0x0     ; 004dced2 | g_CGameInstance.goggles_active
        ;   Label: LAB_004dced2
    JNZ 0x004dcd4e                      ; 004dced9
        ;   XREF to: 004dcd4e (CONDITIONAL_JUMP)  ; LAB_004dcd4e
    FLD float ptr [0x005f9020]          ; 004dcedf | DAT_005f9020
    FLD1                                ; 004dcee5
    FDIVRP                              ; 004dcee7
    MOV ECX,dword ptr [EBX + 0x10]      ; 004dcee9
    FSTP float ptr [ESP + 0x4]          ; 004dceec
    TEST ECX,ECX                        ; 004dcef0
    JLE 0x004dcf18                      ; 004dcef2
        ;   XREF to: 004dcf18 (CONDITIONAL_JUMP)  ; LAB_004dcf18
    MOV ESI,EBX                         ; 004dcef4
    MOV EDX,dword ptr [0x007bc85c]      ; 004dcef6 | g_CBatteryClassInfo.name_hash
        ;   Label: LAB_004dcef6
    PUSH EDX                            ; 004dcefc
    MOV ECX,dword ptr [ESI + 0x14]      ; 004dcefd
    PUSH ECX                            ; 004dcf00
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004dcf01
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004dcf06
    TEST EAX,EAX                        ; 004dcf09
    JNZ 0x004dcf5a                      ; 004dcf0b
        ;   XREF to: 004dcf5a (CONDITIONAL_JUMP)  ; LAB_004dcf5a
    INC EDI                             ; 004dcf0d
        ;   Label: LAB_004dcf0d
    MOV EAX,dword ptr [EBX + 0x10]      ; 004dcf0e
    ADD ESI,0x4                         ; 004dcf11
    CMP EDI,EAX                         ; 004dcf14
    JL 0x004dcef6                       ; 004dcf16
        ;   XREF to: 004dcef6 (CONDITIONAL_JUMP)  ; LAB_004dcef6
    MOV EAX,[0x00616494]                ; 004dcf18 | g_CGamePtr
        ;   Label: LAB_004dcf18
    FLD double ptr [0x005db9ea]         ; 004dcf1d | DAT_005db9ea
    FLD float ptr [EAX + 0x284]         ; 004dcf23 | g_CGameInstance.delta_time_float
    FMUL ST1                            ; 004dcf29
    FMUL float ptr [ESP + 0x4]          ; 004dcf2b
    FADD float ptr [EBX]                ; 004dcf2f
    FST float ptr [EBX]                 ; 004dcf31
    FCOMPP                              ; 004dcf33
    FNSTSW AX                           ; 004dcf35
    SAHF                                ; 004dcf37
    JBE 0x004dcdae                      ; 004dcf38
        ;   XREF to: 004dcdae (CONDITIONAL_JUMP)  ; LAB_004dcdae
    MOV dword ptr [EBX],0x42c80000      ; 004dcf3e
    JMP 0x004dcdae                      ; 004dcf44
        ;   XREF to: 004dcdae (UNCONDITIONAL_JUMP)  ; LAB_004dcdae
    FLD float ptr [ESP]                 ; 004dcf49
        ;   Label: LAB_004dcf49
    FADD float ptr [EAX + 0x438]        ; 004dcf4c
    FSTP float ptr [ESP]                ; 004dcf52
    JMP 0x004dcd7c                      ; 004dcf55
        ;   XREF to: 004dcd7c (UNCONDITIONAL_JUMP)  ; LAB_004dcd7c
    FLD float ptr [EAX + 0x434]         ; 004dcf5a
        ;   Label: LAB_004dcf5a
    FLD1                                ; 004dcf60
    FDIVRP                              ; 004dcf62
    FADD float ptr [ESP + 0x4]          ; 004dcf64
    FSTP float ptr [ESP + 0x4]          ; 004dcf68
    JMP 0x004dcf0d                      ; 004dcf6c
        ;   XREF to: 004dcf0d (UNCONDITIONAL_JUMP)  ; LAB_004dcf0d
    CMP dword ptr [EAX + 0x430],0x2     ; 004dcf6e
        ;   Label: LAB_004dcf6e
    JZ 0x004dcdd4                       ; 004dcf75
        ;   XREF to: 004dcdd4 (CONDITIONAL_JUMP)  ; LAB_004dcdd4
    MOV ECX,dword ptr [0x00616494]      ; 004dcf7b | g_CGamePtr
    SUB ESP,0x4                         ; 004dcf81
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004dcf84
    FLD float ptr [ECX + 0x284]         ; 004dcf8a | g_CGameInstance.delta_time_float
    FSTP float ptr [ESP]                ; 004dcf90
    PUSH EAX                            ; 004dcf93
    CALL dword ptr [EDX + 0x14]         ; 004dcf94
    ADD ESP,0x8                         ; 004dcf97
    JMP 0x004dcdd4                      ; 004dcf9a
        ;   XREF to: 004dcdd4 (UNCONDITIONAL_JUMP)  ; LAB_004dcdd4
    MOV dword ptr [EBX + 0x350],0x0     ; 004dcf9f
        ;   Label: LAB_004dcf9f
    MOV ESP,EBP                         ; 004dcfa9
    POP EBP                             ; 004dcfab
    POP EDI                             ; 004dcfac
    POP ESI                             ; 004dcfad
    POP EBX                             ; 004dcfae
    RET                                 ; 004dcfaf

