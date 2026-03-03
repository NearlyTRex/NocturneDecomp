; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_updateInventory_FUN_004ffad0(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[3]:
;   core_icepick.cpp_CIcePick_process_FUN_004f80b0 at 004f82ff
;   core_scat.cpp_CScat_process_FUN_005571f0 at 0055740f
;   core_stranger.cpp_CStranger_processFrame_FUN_005bb960 at 005bc50e
;
; Referenced Globals:
;   double DOUBLE_00630aaa = 100
;   float FLOAT_00660480 = 30
;   float FLOAT_00660484 = 120
;   CGame* g_CGamePtr = 02d81a9c
;   undefined4 g_CBatteryClassInfo.name_hash
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.block_auto_save
;   undefined4 g_CGameInstance.auto_save_blocked
;   undefined4 g_CGameInstance.delta_time_float
;   undefined4 g_CLightGunClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ffad0
        ;   Label: core_inv.cpp_CInventory_updateInventory_FUN_004ffad0
    PUSH ESI                            ; 004ffad1
    PUSH EDI                            ; 004ffad2
    PUSH EBP                            ; 004ffad3
    MOV EBP,ESP                         ; 004ffad4
    SUB ESP,0x10                        ; 004ffad6
    AND ESP,0xfffffff8                  ; 004ffad9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ffadc
    MOV EDX,dword ptr [EBX + 0x330]     ; 004ffadf
    TEST EDX,EDX                        ; 004ffae5
    JZ 0x004ffb29                       ; 004ffae7
        ;   XREF to: 004ffb29 (CONDITIONAL_JUMP)  ; LAB_004ffb29
    MOV EAX,EDX                         ; 004ffae9
    MOV ECX,dword ptr [EBX + 0x45c]     ; 004ffaeb
    CMP ECX,dword ptr [EDX + 0x568]     ; 004ffaf1
    JZ 0x004ffb17                       ; 004ffaf7
        ;   XREF to: 004ffb17 (CONDITIONAL_JUMP)  ; LAB_004ffb17
    MOV ESI,dword ptr [0x02dd30f0]      ; 004ffaf9 | g_CLightGunClassInfo.name_hash
    PUSH ESI                            ; 004ffaff
    PUSH EAX                            ; 004ffb00
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004ffb01
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004ffb06
    TEST EAX,EAX                        ; 004ffb09
    JNZ 0x004ffb17                      ; 004ffb0b
        ;   XREF to: 004ffb17 (CONDITIONAL_JUMP)  ; LAB_004ffb17
    PUSH EAX                            ; 004ffb0d
    PUSH EBX                            ; 004ffb0e
    CALL core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0 ; 004ffb0f
        ;   XREF to: 004fffa0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0(CInventory * this_ptr, int reset_both)
    ADD ESP,0x8                         ; 004ffb14
    MOV EAX,dword ptr [EBX + 0x330]     ; 004ffb17
        ;   Label: LAB_004ffb17
    MOV EAX,dword ptr [EAX + 0x568]     ; 004ffb1d
    MOV dword ptr [EBX + 0x45c],EAX     ; 004ffb23
    MOV EAX,[0x0067b654]                ; 004ffb29 | g_CGameInstance | g_CGamePtr
        ;   Label: LAB_004ffb29
    CMP dword ptr [EAX + 0x244],0x0     ; 004ffb2e | g_CGameInstance.auto_save_blocked
    JZ 0x004ffcc1                       ; 004ffb35
        ;   XREF to: 004ffcc1 (CONDITIONAL_JUMP)  ; LAB_004ffcc1
    MOV EAX,[0x00660480]                ; 004ffb3b | FLOAT_00660480
        ;   Label: LAB_004ffb3b
    MOV EDI,dword ptr [EBX + 0x8]       ; 004ffb40
    XOR ESI,ESI                         ; 004ffb43
    MOV dword ptr [ESP + 0x4],EAX       ; 004ffb45
    TEST EDI,EDI                        ; 004ffb49
    JLE 0x004ffb75                      ; 004ffb4b
        ;   XREF to: 004ffb75 (CONDITIONAL_JUMP)  ; LAB_004ffb75
    MOV EDI,EBX                         ; 004ffb4d
    MOV EDX,dword ptr [0x0082285c]      ; 004ffb4f | g_CBatteryClassInfo.name_hash
        ;   Label: LAB_004ffb4f
    PUSH EDX                            ; 004ffb55
    MOV ECX,dword ptr [EDI + 0xc]       ; 004ffb56
    PUSH ECX                            ; 004ffb59
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004ffb5a
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004ffb5f
    TEST EAX,EAX                        ; 004ffb62
    JNZ 0x004ffd38                      ; 004ffb64
        ;   XREF to: 004ffd38 (CONDITIONAL_JUMP)  ; LAB_004ffd38
    INC ESI                             ; 004ffb6a
        ;   Label: LAB_004ffb6a
    MOV EAX,dword ptr [EBX + 0x8]       ; 004ffb6b
    ADD EDI,0x4                         ; 004ffb6e
    CMP ESI,EAX                         ; 004ffb71
    JL 0x004ffb4f                       ; 004ffb73
        ;   XREF to: 004ffb4f (CONDITIONAL_JUMP)  ; LAB_004ffb4f
    MOV EAX,[0x0067b654]                ; 004ffb75 | g_CGamePtr
        ;   Label: LAB_004ffb75
    FLD float ptr [EAX + 0x264]         ; 004ffb7a | g_CGameInstance.delta_time_float
    FMUL double ptr [0x00630aaa]        ; 004ffb80 | DOUBLE_00630aaa
    FDIV float ptr [ESP + 0x4]          ; 004ffb86
    FSUBR float ptr [EBX]               ; 004ffb8a
    FST float ptr [EBX]                 ; 004ffb8c
    FLDZ                                ; 004ffb8e
    FCOMPP                              ; 004ffb90
    FNSTSW AX                           ; 004ffb92
    SAHF                                ; 004ffb94
    JBE 0x004ffb9d                      ; 004ffb95
        ;   XREF to: 004ffb9d (CONDITIONAL_JUMP)  ; LAB_004ffb9d
    MOV dword ptr [EBX],0x0             ; 004ffb97
    MOV EDI,dword ptr [EBX + 0x8]       ; 004ffb9d
        ;   Label: LAB_004ffb9d
    XOR ESI,ESI                         ; 004ffba0
    TEST EDI,EDI                        ; 004ffba2
    JLE 0x004ffbce                      ; 004ffba4
        ;   XREF to: 004ffbce (CONDITIONAL_JUMP)  ; LAB_004ffbce
    MOV EDI,EBX                         ; 004ffba6
    MOV EDX,dword ptr [0x02dd30f0]      ; 004ffba8 | g_CLightGunClassInfo.name_hash
        ;   Label: LAB_004ffba8
    PUSH EDX                            ; 004ffbae
    MOV ECX,dword ptr [EDI + 0xc]       ; 004ffbaf
    PUSH ECX                            ; 004ffbb2
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004ffbb3
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004ffbb8
    TEST EAX,EAX                        ; 004ffbbb
    JNZ 0x004ffd5d                      ; 004ffbbd
        ;   XREF to: 004ffd5d (CONDITIONAL_JUMP)  ; LAB_004ffd5d
    INC ESI                             ; 004ffbc3
        ;   Label: LAB_004ffbc3
    MOV EAX,dword ptr [EBX + 0x8]       ; 004ffbc4
    ADD EDI,0x4                         ; 004ffbc7
    CMP ESI,EAX                         ; 004ffbca
    JL 0x004ffba8                       ; 004ffbcc
        ;   XREF to: 004ffba8 (CONDITIONAL_JUMP)  ; LAB_004ffba8
    MOV EDX,dword ptr [0x0067b654]      ; 004ffbce | g_CGamePtr
        ;   Label: LAB_004ffbce
    LEA EAX,[EBX + 0x338]               ; 004ffbd4
    FLD float ptr [EDX + 0x264]         ; 004ffbda | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX]               ; 004ffbe0
    FSTP float ptr [EAX]                ; 004ffbe2
    FLD float ptr [EBX + 0x338]         ; 004ffbe4
    FLDZ                                ; 004ffbea
    FCOMPP                              ; 004ffbec
    FNSTSW AX                           ; 004ffbee
    SAHF                                ; 004ffbf0
    JC 0x004ffbfd                       ; 004ffbf1
        ;   XREF to: 004ffbfd (CONDITIONAL_JUMP)  ; LAB_004ffbfd
    MOV dword ptr [EBX + 0x338],0x0     ; 004ffbf3
    MOV EDX,dword ptr [0x0067b654]      ; 004ffbfd | g_CGamePtr
        ;   Label: LAB_004ffbfd
    LEA EAX,[EBX + 0x33c]               ; 004ffc03
    FLD float ptr [EDX + 0x264]         ; 004ffc09 | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX]               ; 004ffc0f
    FSTP float ptr [EAX]                ; 004ffc11
    FLD float ptr [EBX + 0x33c]         ; 004ffc13
    FLDZ                                ; 004ffc19
    FCOMPP                              ; 004ffc1b
    FNSTSW AX                           ; 004ffc1d
    SAHF                                ; 004ffc1f
    JC 0x004ffc2c                       ; 004ffc20
        ;   XREF to: 004ffc2c (CONDITIONAL_JUMP)  ; LAB_004ffc2c
    MOV dword ptr [EBX + 0x33c],0x0     ; 004ffc22
    MOV EDX,dword ptr [0x0067b654]      ; 004ffc2c | g_CGamePtr
        ;   Label: LAB_004ffc2c
    LEA EAX,[EBX + 0x340]               ; 004ffc32
    FLD float ptr [EDX + 0x264]         ; 004ffc38 | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX]               ; 004ffc3e
    FSTP float ptr [EAX]                ; 004ffc40
    FLD float ptr [EBX + 0x340]         ; 004ffc42
    FLDZ                                ; 004ffc48
    FCOMPP                              ; 004ffc4a
    FNSTSW AX                           ; 004ffc4c
    SAHF                                ; 004ffc4e
    JC 0x004ffc5b                       ; 004ffc4f
        ;   XREF to: 004ffc5b (CONDITIONAL_JUMP)  ; LAB_004ffc5b
    MOV dword ptr [EBX + 0x340],0x0     ; 004ffc51
    MOV EDX,dword ptr [0x0067b654]      ; 004ffc5b | g_CGamePtr
        ;   Label: LAB_004ffc5b
    LEA EAX,[EBX + 0x344]               ; 004ffc61
    FLD float ptr [EDX + 0x264]         ; 004ffc67 | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX]               ; 004ffc6d
    FSTP float ptr [EAX]                ; 004ffc6f
    FLD float ptr [EBX + 0x344]         ; 004ffc71
    FLDZ                                ; 004ffc77
    FCOMPP                              ; 004ffc79
    FNSTSW AX                           ; 004ffc7b
    SAHF                                ; 004ffc7d
    JC 0x004ffc91                       ; 004ffc7e
        ;   XREF to: 004ffc91 (CONDITIONAL_JUMP)  ; LAB_004ffc91
    MOV byte ptr [EBX + 0x34c],0x0      ; 004ffc80
    MOV dword ptr [EBX + 0x344],0x0     ; 004ffc87
    MOV EDX,dword ptr [0x0067b654]      ; 004ffc91 | g_CGamePtr
        ;   Label: LAB_004ffc91
    LEA EAX,[EBX + 0x348]               ; 004ffc97
    FLD float ptr [EDX + 0x264]         ; 004ffc9d | g_CGameInstance.delta_time_float
    FSUBR float ptr [EAX]               ; 004ffca3
    FSTP float ptr [EAX]                ; 004ffca5
    FLD float ptr [EBX + 0x348]         ; 004ffca7
    FLDZ                                ; 004ffcad
    FCOMPP                              ; 004ffcaf
    FNSTSW AX                           ; 004ffcb1
    SAHF                                ; 004ffcb3
    JA 0x004ffd8e                       ; 004ffcb4
        ;   XREF to: 004ffd8e (CONDITIONAL_JUMP)  ; LAB_004ffd8e
    MOV ESP,EBP                         ; 004ffcba
    POP EBP                             ; 004ffcbc
    POP EDI                             ; 004ffcbd
    POP ESI                             ; 004ffcbe
    POP EBX                             ; 004ffcbf
    RET                                 ; 004ffcc0
    CMP dword ptr [EAX + 0x240],0x0     ; 004ffcc1 | g_CGameInstance.block_auto_save
        ;   Label: LAB_004ffcc1
    JNZ 0x004ffb3b                      ; 004ffcc8
        ;   XREF to: 004ffb3b (CONDITIONAL_JUMP)  ; LAB_004ffb3b
    FLD float ptr [0x00660484]          ; 004ffcce | FLOAT_00660484
    FLD1                                ; 004ffcd4
    FDIVRP                              ; 004ffcd6
    MOV ECX,dword ptr [EBX + 0x8]       ; 004ffcd8
    XOR ESI,ESI                         ; 004ffcdb
    FSTP float ptr [ESP]                ; 004ffcdd
    TEST ECX,ECX                        ; 004ffce0
    JLE 0x004ffd08                      ; 004ffce2
        ;   XREF to: 004ffd08 (CONDITIONAL_JUMP)  ; LAB_004ffd08
    MOV EDI,EBX                         ; 004ffce4
    MOV EDX,dword ptr [0x0082285c]      ; 004ffce6 | g_CBatteryClassInfo.name_hash
        ;   Label: LAB_004ffce6
    PUSH EDX                            ; 004ffcec
    MOV ECX,dword ptr [EDI + 0xc]       ; 004ffced
    PUSH ECX                            ; 004ffcf0
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004ffcf1
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004ffcf6
    TEST EAX,EAX                        ; 004ffcf9
    JNZ 0x004ffd4b                      ; 004ffcfb
        ;   XREF to: 004ffd4b (CONDITIONAL_JUMP)  ; LAB_004ffd4b
    INC ESI                             ; 004ffcfd
        ;   Label: LAB_004ffcfd
    MOV EAX,dword ptr [EBX + 0x8]       ; 004ffcfe
    ADD EDI,0x4                         ; 004ffd01
    CMP ESI,EAX                         ; 004ffd04
    JL 0x004ffce6                       ; 004ffd06
        ;   XREF to: 004ffce6 (CONDITIONAL_JUMP)  ; LAB_004ffce6
    MOV EAX,[0x0067b654]                ; 004ffd08 | g_CGamePtr
        ;   Label: LAB_004ffd08
    FLD double ptr [0x00630aaa]         ; 004ffd0d | DOUBLE_00630aaa
    FLD float ptr [EAX + 0x264]         ; 004ffd13 | g_CGameInstance.delta_time_float
    FMUL ST1                            ; 004ffd19
    FMUL float ptr [ESP]                ; 004ffd1b
    FADD float ptr [EBX]                ; 004ffd1e
    FST float ptr [EBX]                 ; 004ffd20
    FCOMPP                              ; 004ffd22
    FNSTSW AX                           ; 004ffd24
    SAHF                                ; 004ffd26
    JBE 0x004ffb9d                      ; 004ffd27
        ;   XREF to: 004ffb9d (CONDITIONAL_JUMP)  ; LAB_004ffb9d
    MOV dword ptr [EBX],0x42c80000      ; 004ffd2d
    JMP 0x004ffb9d                      ; 004ffd33
        ;   XREF to: 004ffb9d (UNCONDITIONAL_JUMP)  ; LAB_004ffb9d
    FLD float ptr [ESP + 0x4]           ; 004ffd38
        ;   Label: LAB_004ffd38
    FADD float ptr [EAX + 0x2dc]        ; 004ffd3c
    FSTP float ptr [ESP + 0x4]          ; 004ffd42
    JMP 0x004ffb6a                      ; 004ffd46
        ;   XREF to: 004ffb6a (UNCONDITIONAL_JUMP)  ; LAB_004ffb6a
    FLD float ptr [EAX + 0x2d8]         ; 004ffd4b
        ;   Label: LAB_004ffd4b
    FLD1                                ; 004ffd51
    FDIVRP                              ; 004ffd53
    FADD float ptr [ESP]                ; 004ffd55
    FSTP float ptr [ESP]                ; 004ffd58
    JMP 0x004ffcfd                      ; 004ffd5b
        ;   XREF to: 004ffcfd (UNCONDITIONAL_JUMP)  ; LAB_004ffcfd
    CMP dword ptr [EAX + 0x2d4],0x2     ; 004ffd5d
        ;   Label: LAB_004ffd5d
    JZ 0x004ffbc3                       ; 004ffd64
        ;   XREF to: 004ffbc3 (CONDITIONAL_JUMP)  ; LAB_004ffbc3
    MOV EDX,dword ptr [0x0067b654]      ; 004ffd6a | g_CGamePtr
    SUB ESP,0x4                         ; 004ffd70
    MOV ECX,dword ptr [EAX + 0x154]     ; 004ffd73
    FLD float ptr [EDX + 0x264]         ; 004ffd79 | g_CGameInstance.delta_time_float
    FSTP float ptr [ESP]                ; 004ffd7f
    PUSH EAX                            ; 004ffd82
    CALL dword ptr [ECX + 0x4]          ; 004ffd83
    ADD ESP,0x8                         ; 004ffd86
    JMP 0x004ffbc3                      ; 004ffd89
        ;   XREF to: 004ffbc3 (UNCONDITIONAL_JUMP)  ; LAB_004ffbc3
    MOV dword ptr [EBX + 0x348],0x0     ; 004ffd8e
        ;   Label: LAB_004ffd8e
    MOV ESP,EBP                         ; 004ffd98
    POP EBP                             ; 004ffd9a
    POP EDI                             ; 004ffd9b
    POP ESI                             ; 004ffd9c
    POP EBX                             ; 004ffd9d
    RET                                 ; 004ffd9e

