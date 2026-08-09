; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_updateInventory_FUN_004c1850(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[3]:
;   core_icepick.cpp_CIcePick_process_FUN_004b9fe0 at 004ba22f
;   core_scat.cpp_CScat_process_FUN_004fbf20 at 004fc13f
;   core_stranger.cpp_CStranger_processFrame_FUN_00535900 at 005364ac
;
; Referenced Globals:
;   double DOUBLE_00587409 = 100
;   float FLOAT_0059f7f0 = 30
;   float FLOAT_0059f7f4 = 120
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   undefined4 g_CBatteryActorType_00764674.name_hash
;   undefined4 g_CGame_01c775ec.goggles_active
;   undefined4 g_CGame_01c775ec.flashlight_active
;   undefined4 g_CGame_01c775ec.delta_time_float
;   undefined4 g_CLightGunActorType_01cc3688.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004c1d20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c1850
        ;   Label: core_inv.cpp_CInventory_updateInventory_FUN_004c1850
    PUSH ESI                            ; 004c1851
    PUSH EDI                            ; 004c1852
    PUSH EBP                            ; 004c1853
    MOV EBP,ESP                         ; 004c1854
    SUB ESP,0x10                        ; 004c1856
    AND ESP,0xfffffff8                  ; 004c1859
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c185c
    MOV EDX,dword ptr [EBX + 0x330]     ; 004c185f
    TEST EDX,EDX                        ; 004c1865
    JZ 0x004c18a9                       ; 004c1867
        ;   XREF to: 004c18a9 (CONDITIONAL_JUMP)  ; LAB_004c18a9
    MOV EAX,EDX                         ; 004c1869
    MOV ECX,dword ptr [EBX + 0x45c]     ; 004c186b
    CMP ECX,dword ptr [EDX + 0x560]     ; 004c1871
    JZ 0x004c1897                       ; 004c1877
        ;   XREF to: 004c1897 (CONDITIONAL_JUMP)  ; LAB_004c1897
    MOV ESI,dword ptr [0x01cc36c0]      ; 004c1879 | g_CLightGunActorType_01cc3688.name_hash
    PUSH ESI                            ; 004c187f
    PUSH EAX                            ; 004c1880
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004c1881
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004c1886
    TEST EAX,EAX                        ; 004c1889
    JNZ 0x004c1897                      ; 004c188b
        ;   XREF to: 004c1897 (CONDITIONAL_JUMP)  ; LAB_004c1897
    PUSH EAX                            ; 004c188d
    PUSH EBX                            ; 004c188e
    CALL core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004c1d20 ; 004c188f
        ;   XREF to: 004c1d20 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004c1d20(CInventory * this_ptr, int reset_both)
    ADD ESP,0x8                         ; 004c1894
    MOV EAX,dword ptr [EBX + 0x330]     ; 004c1897
        ;   Label: LAB_004c1897
    MOV EAX,dword ptr [EAX + 0x560]     ; 004c189d
    MOV dword ptr [EBX + 0x45c],EAX     ; 004c18a3
    MOV EAX,[0x005b9354]                ; 004c18a9 | g_CGame_PTR_005b9354
        ;   Label: LAB_004c18a9
    CMP dword ptr [EAX + 0x244],0x0     ; 004c18ae | g_CGame_01c775ec.flashlight_active
    JZ 0x004c1a41                       ; 004c18b5
        ;   XREF to: 004c1a41 (CONDITIONAL_JUMP)  ; LAB_004c1a41
    MOV EAX,[0x0059f7f0]                ; 004c18bb | FLOAT_0059f7f0
        ;   Label: LAB_004c18bb
    MOV EDI,dword ptr [EBX + 0x8]       ; 004c18c0
    XOR ESI,ESI                         ; 004c18c3
    MOV dword ptr [ESP + 0x4],EAX       ; 004c18c5
    TEST EDI,EDI                        ; 004c18c9
    JLE 0x004c18f5                      ; 004c18cb
        ;   XREF to: 004c18f5 (CONDITIONAL_JUMP)  ; LAB_004c18f5
    MOV EDI,EBX                         ; 004c18cd
    MOV EDX,dword ptr [0x007646ac]      ; 004c18cf | g_CBatteryActorType_00764674.name_hash
        ;   Label: LAB_004c18cf
    PUSH EDX                            ; 004c18d5
    MOV ECX,dword ptr [EDI + 0xc]       ; 004c18d6
    PUSH ECX                            ; 004c18d9
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004c18da
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004c18df
    TEST EAX,EAX                        ; 004c18e2
    JNZ 0x004c1ab8                      ; 004c18e4
        ;   XREF to: 004c1ab8 (CONDITIONAL_JUMP)  ; LAB_004c1ab8
    INC ESI                             ; 004c18ea
        ;   Label: LAB_004c18ea
    MOV EAX,dword ptr [EBX + 0x8]       ; 004c18eb
    ADD EDI,0x4                         ; 004c18ee
    CMP ESI,EAX                         ; 004c18f1
    JL 0x004c18cf                       ; 004c18f3
        ;   XREF to: 004c18cf (CONDITIONAL_JUMP)  ; LAB_004c18cf
    MOV EAX,[0x005b9354]                ; 004c18f5 | g_CGame_PTR_005b9354
        ;   Label: LAB_004c18f5
    FLD float ptr [EAX + 0x264]         ; 004c18fa | g_CGame_01c775ec.delta_time_float
    FMUL double ptr [0x00587409]        ; 004c1900 | DOUBLE_00587409
    FDIV float ptr [ESP + 0x4]          ; 004c1906
    FSUBR float ptr [EBX]               ; 004c190a
    FST float ptr [EBX]                 ; 004c190c
    FLDZ                                ; 004c190e
    FCOMPP                              ; 004c1910
    FNSTSW AX                           ; 004c1912
    SAHF                                ; 004c1914
    JBE 0x004c191d                      ; 004c1915
        ;   XREF to: 004c191d (CONDITIONAL_JUMP)  ; LAB_004c191d
    MOV dword ptr [EBX],0x0             ; 004c1917
    MOV EDI,dword ptr [EBX + 0x8]       ; 004c191d
        ;   Label: LAB_004c191d
    XOR ESI,ESI                         ; 004c1920
    TEST EDI,EDI                        ; 004c1922
    JLE 0x004c194e                      ; 004c1924
        ;   XREF to: 004c194e (CONDITIONAL_JUMP)  ; LAB_004c194e
    MOV EDI,EBX                         ; 004c1926
    MOV EDX,dword ptr [0x01cc36c0]      ; 004c1928 | g_CLightGunActorType_01cc3688.name_hash
        ;   Label: LAB_004c1928
    PUSH EDX                            ; 004c192e
    MOV ECX,dword ptr [EDI + 0xc]       ; 004c192f
    PUSH ECX                            ; 004c1932
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004c1933
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004c1938
    TEST EAX,EAX                        ; 004c193b
    JNZ 0x004c1add                      ; 004c193d
        ;   XREF to: 004c1add (CONDITIONAL_JUMP)  ; LAB_004c1add
    INC ESI                             ; 004c1943
        ;   Label: LAB_004c1943
    MOV EAX,dword ptr [EBX + 0x8]       ; 004c1944
    ADD EDI,0x4                         ; 004c1947
    CMP ESI,EAX                         ; 004c194a
    JL 0x004c1928                       ; 004c194c
        ;   XREF to: 004c1928 (CONDITIONAL_JUMP)  ; LAB_004c1928
    MOV EDX,dword ptr [0x005b9354]      ; 004c194e | g_CGame_PTR_005b9354
        ;   Label: LAB_004c194e
    LEA EAX,[EBX + 0x338]               ; 004c1954
    FLD float ptr [EDX + 0x264]         ; 004c195a | g_CGame_01c775ec.delta_time_float
    FSUBR float ptr [EAX]               ; 004c1960
    FSTP float ptr [EAX]                ; 004c1962
    FLD float ptr [EBX + 0x338]         ; 004c1964
    FLDZ                                ; 004c196a
    FCOMPP                              ; 004c196c
    FNSTSW AX                           ; 004c196e
    SAHF                                ; 004c1970
    JC 0x004c197d                       ; 004c1971
        ;   XREF to: 004c197d (CONDITIONAL_JUMP)  ; LAB_004c197d
    MOV dword ptr [EBX + 0x338],0x0     ; 004c1973
    MOV EDX,dword ptr [0x005b9354]      ; 004c197d | g_CGame_PTR_005b9354
        ;   Label: LAB_004c197d
    LEA EAX,[EBX + 0x33c]               ; 004c1983
    FLD float ptr [EDX + 0x264]         ; 004c1989 | g_CGame_01c775ec.delta_time_float
    FSUBR float ptr [EAX]               ; 004c198f
    FSTP float ptr [EAX]                ; 004c1991
    FLD float ptr [EBX + 0x33c]         ; 004c1993
    FLDZ                                ; 004c1999
    FCOMPP                              ; 004c199b
    FNSTSW AX                           ; 004c199d
    SAHF                                ; 004c199f
    JC 0x004c19ac                       ; 004c19a0
        ;   XREF to: 004c19ac (CONDITIONAL_JUMP)  ; LAB_004c19ac
    MOV dword ptr [EBX + 0x33c],0x0     ; 004c19a2
    MOV EDX,dword ptr [0x005b9354]      ; 004c19ac | g_CGame_PTR_005b9354
        ;   Label: LAB_004c19ac
    LEA EAX,[EBX + 0x340]               ; 004c19b2
    FLD float ptr [EDX + 0x264]         ; 004c19b8 | g_CGame_01c775ec.delta_time_float
    FSUBR float ptr [EAX]               ; 004c19be
    FSTP float ptr [EAX]                ; 004c19c0
    FLD float ptr [EBX + 0x340]         ; 004c19c2
    FLDZ                                ; 004c19c8
    FCOMPP                              ; 004c19ca
    FNSTSW AX                           ; 004c19cc
    SAHF                                ; 004c19ce
    JC 0x004c19db                       ; 004c19cf
        ;   XREF to: 004c19db (CONDITIONAL_JUMP)  ; LAB_004c19db
    MOV dword ptr [EBX + 0x340],0x0     ; 004c19d1
    MOV EDX,dword ptr [0x005b9354]      ; 004c19db | g_CGame_PTR_005b9354
        ;   Label: LAB_004c19db
    LEA EAX,[EBX + 0x344]               ; 004c19e1
    FLD float ptr [EDX + 0x264]         ; 004c19e7 | g_CGame_01c775ec.delta_time_float
    FSUBR float ptr [EAX]               ; 004c19ed
    FSTP float ptr [EAX]                ; 004c19ef
    FLD float ptr [EBX + 0x344]         ; 004c19f1
    FLDZ                                ; 004c19f7
    FCOMPP                              ; 004c19f9
    FNSTSW AX                           ; 004c19fb
    SAHF                                ; 004c19fd
    JC 0x004c1a11                       ; 004c19fe
        ;   XREF to: 004c1a11 (CONDITIONAL_JUMP)  ; LAB_004c1a11
    MOV byte ptr [EBX + 0x34c],0x0      ; 004c1a00
    MOV dword ptr [EBX + 0x344],0x0     ; 004c1a07
    MOV EDX,dword ptr [0x005b9354]      ; 004c1a11 | g_CGame_PTR_005b9354
        ;   Label: LAB_004c1a11
    LEA EAX,[EBX + 0x348]               ; 004c1a17
    FLD float ptr [EDX + 0x264]         ; 004c1a1d | g_CGame_01c775ec.delta_time_float
    FSUBR float ptr [EAX]               ; 004c1a23
    FSTP float ptr [EAX]                ; 004c1a25
    FLD float ptr [EBX + 0x348]         ; 004c1a27
    FLDZ                                ; 004c1a2d
    FCOMPP                              ; 004c1a2f
    FNSTSW AX                           ; 004c1a31
    SAHF                                ; 004c1a33
    JA 0x004c1b0e                       ; 004c1a34
        ;   XREF to: 004c1b0e (CONDITIONAL_JUMP)  ; LAB_004c1b0e
    MOV ESP,EBP                         ; 004c1a3a
    POP EBP                             ; 004c1a3c
    POP EDI                             ; 004c1a3d
    POP ESI                             ; 004c1a3e
    POP EBX                             ; 004c1a3f
    RET                                 ; 004c1a40
    CMP dword ptr [EAX + 0x240],0x0     ; 004c1a41 | g_CGame_01c775ec.goggles_active
        ;   Label: LAB_004c1a41
    JNZ 0x004c18bb                      ; 004c1a48
        ;   XREF to: 004c18bb (CONDITIONAL_JUMP)  ; LAB_004c18bb
    FLD float ptr [0x0059f7f4]          ; 004c1a4e | FLOAT_0059f7f4
    FLD1                                ; 004c1a54
    FDIVRP                              ; 004c1a56
    MOV ECX,dword ptr [EBX + 0x8]       ; 004c1a58
    XOR ESI,ESI                         ; 004c1a5b
    FSTP float ptr [ESP]                ; 004c1a5d
    TEST ECX,ECX                        ; 004c1a60
    JLE 0x004c1a88                      ; 004c1a62
        ;   XREF to: 004c1a88 (CONDITIONAL_JUMP)  ; LAB_004c1a88
    MOV EDI,EBX                         ; 004c1a64
    MOV EDX,dword ptr [0x007646ac]      ; 004c1a66 | g_CBatteryActorType_00764674.name_hash
        ;   Label: LAB_004c1a66
    PUSH EDX                            ; 004c1a6c
    MOV ECX,dword ptr [EDI + 0xc]       ; 004c1a6d
    PUSH ECX                            ; 004c1a70
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004c1a71
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004c1a76
    TEST EAX,EAX                        ; 004c1a79
    JNZ 0x004c1acb                      ; 004c1a7b
        ;   XREF to: 004c1acb (CONDITIONAL_JUMP)  ; LAB_004c1acb
    INC ESI                             ; 004c1a7d
        ;   Label: LAB_004c1a7d
    MOV EAX,dword ptr [EBX + 0x8]       ; 004c1a7e
    ADD EDI,0x4                         ; 004c1a81
    CMP ESI,EAX                         ; 004c1a84
    JL 0x004c1a66                       ; 004c1a86
        ;   XREF to: 004c1a66 (CONDITIONAL_JUMP)  ; LAB_004c1a66
    MOV EAX,[0x005b9354]                ; 004c1a88 | g_CGame_PTR_005b9354
        ;   Label: LAB_004c1a88
    FLD double ptr [0x00587409]         ; 004c1a8d | DOUBLE_00587409
    FLD float ptr [EAX + 0x264]         ; 004c1a93 | g_CGame_01c775ec.delta_time_float
    FMUL ST1                            ; 004c1a99
    FMUL float ptr [ESP]                ; 004c1a9b
    FADD float ptr [EBX]                ; 004c1a9e
    FST float ptr [EBX]                 ; 004c1aa0
    FCOMPP                              ; 004c1aa2
    FNSTSW AX                           ; 004c1aa4
    SAHF                                ; 004c1aa6
    JBE 0x004c191d                      ; 004c1aa7
        ;   XREF to: 004c191d (CONDITIONAL_JUMP)  ; LAB_004c191d
    MOV dword ptr [EBX],0x42c80000      ; 004c1aad
    JMP 0x004c191d                      ; 004c1ab3
        ;   XREF to: 004c191d (UNCONDITIONAL_JUMP)  ; LAB_004c191d
    FLD float ptr [ESP + 0x4]           ; 004c1ab8
        ;   Label: LAB_004c1ab8
    FADD float ptr [EAX + 0x2d4]        ; 004c1abc
    FSTP float ptr [ESP + 0x4]          ; 004c1ac2
    JMP 0x004c18ea                      ; 004c1ac6
        ;   XREF to: 004c18ea (UNCONDITIONAL_JUMP)  ; LAB_004c18ea
    FLD float ptr [EAX + 0x2d0]         ; 004c1acb
        ;   Label: LAB_004c1acb
    FLD1                                ; 004c1ad1
    FDIVRP                              ; 004c1ad3
    FADD float ptr [ESP]                ; 004c1ad5
    FSTP float ptr [ESP]                ; 004c1ad8
    JMP 0x004c1a7d                      ; 004c1adb
        ;   XREF to: 004c1a7d (UNCONDITIONAL_JUMP)  ; LAB_004c1a7d
    CMP dword ptr [EAX + 0x2cc],0x2     ; 004c1add
        ;   Label: LAB_004c1add
    JZ 0x004c1943                       ; 004c1ae4
        ;   XREF to: 004c1943 (CONDITIONAL_JUMP)  ; LAB_004c1943
    MOV EDX,dword ptr [0x005b9354]      ; 004c1aea | g_CGame_PTR_005b9354
    SUB ESP,0x4                         ; 004c1af0
    MOV ECX,dword ptr [EAX + 0x14c]     ; 004c1af3
    FLD float ptr [EDX + 0x264]         ; 004c1af9 | g_CGame_01c775ec.delta_time_float
    FSTP float ptr [ESP]                ; 004c1aff
    PUSH EAX                            ; 004c1b02
    CALL dword ptr [ECX + 0x4]          ; 004c1b03
    ADD ESP,0x8                         ; 004c1b06
    JMP 0x004c1943                      ; 004c1b09
        ;   XREF to: 004c1943 (UNCONDITIONAL_JUMP)  ; LAB_004c1943
    MOV dword ptr [EBX + 0x348],0x0     ; 004c1b0e
        ;   Label: LAB_004c1b0e
    MOV ESP,EBP                         ; 004c1b18
    POP EBP                             ; 004c1b1a
    POP EDI                             ; 004c1b1b
    POP ESI                             ; 004c1b1c
    POP EBX                             ; 004c1b1d
    RET                                 ; 004c1b1e

