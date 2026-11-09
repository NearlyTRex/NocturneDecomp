; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gabriela_cpp_FUN_004b1e00(CGabriella *this_ptr,float delta_time,int has_carried_objects)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; int              Stack[0xc]:4   has_carried_objects
; Local Variables:
; undefined        Stack[-0xb0]:1  local_b0
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_gabriela.cpp_FUN_004ad640 at 004adce1
;
; Referenced Globals:
;   undefined4 DAT_005f734c
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01cb067c
;   undefined4 DAT_01cb0680
;   undefined4 DAT_01cb06b8
;   undefined4 DAT_01cb06bc
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_gabriela.cpp_FUN_004b20d0
;   core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00537e90
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30
;   core_setcolid.cpp_CDemonSet_init_FUN_00537e00
;   core_skeleton.cpp_FUN_00545a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1e00
        ;   Label: core_gabriela.cpp_FUN_004b1e00
    PUSH ESI                            ; 004b1e01
    PUSH EDI                            ; 004b1e02
    PUSH EBP                            ; 004b1e03
    SUB ESP,0xa0                        ; 004b1e04
    MOV EBX,dword ptr [ESP + 0xb4]      ; 004b1e0a
    FLD float ptr [ESP + 0xb8]          ; 004b1e11
    FLD float ptr [EBX + 0x2565c]       ; 004b1e18
    FLD float ptr [EBX + 0x25660]       ; 004b1e1e
    FXCH ST2                            ; 004b1e24
    FDIV float ptr [0x005f734c]         ; 004b1e26 | DAT_005f734c
    FXCH                                ; 004b1e2c
    FSUB ST0,ST1                        ; 004b1e2e
    FXCH ST2                            ; 004b1e30
    FSUBRP                              ; 004b1e32
    FXCH                                ; 004b1e34
    FSTP float ptr [EBX + 0x2565c]      ; 004b1e36
    FSTP float ptr [EBX + 0x25660]      ; 004b1e3c
    FLD float ptr [EBX + 0x2565c]       ; 004b1e42
    FLDZ                                ; 004b1e48
    FCOMPP                              ; 004b1e4a
    FNSTSW AX                           ; 004b1e4c
    SAHF                                ; 004b1e4e
    JA 0x004b2049                       ; 004b1e4f
        ;   XREF to: 004b2049 (CONDITIONAL_JUMP)  ; LAB_004b2049
    FLD float ptr [EBX + 0x25660]       ; 004b1e55
        ;   Label: LAB_004b1e55
    FLDZ                                ; 004b1e5b
    FCOMPP                              ; 004b1e5d
    FNSTSW AX                           ; 004b1e5f
    SAHF                                ; 004b1e61
    JBE 0x004b1e6e                      ; 004b1e62
        ;   XREF to: 004b1e6e (CONDITIONAL_JUMP)  ; LAB_004b1e6e
    MOV dword ptr [EBX + 0x25660],0x0   ; 004b1e64
    MOV EDX,dword ptr [ESP + 0xbc]      ; 004b1e6e
        ;   Label: LAB_004b1e6e
    TEST EDX,EDX                        ; 004b1e75
    JZ 0x004b2075                       ; 004b1e77
        ;   XREF to: 004b2075 (CONDITIONAL_JUMP)  ; LAB_004b2075
    PUSH EBX                            ; 004b1e7d
    MOV EBP,dword ptr [0x0061b5a8]      ; 004b1e7e | g_CDemonSetPtr
    PUSH EBP                            ; 004b1e84 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 004b1e85
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    MOV EAX,dword ptr [EBX + 0x2620]    ; 004b1e8a
    ADD ESP,0x8                         ; 004b1e90
    TEST EAX,EAX                        ; 004b1e93
    JZ 0x004b1ea7                       ; 004b1e95
        ;   XREF to: 004b1ea7 (CONDITIONAL_JUMP)  ; LAB_004b1ea7
    PUSH EAX                            ; 004b1e97
    MOV ECX,dword ptr [0x0061b5a8]      ; 004b1e98 | g_CDemonSetPtr
    PUSH ECX                            ; 004b1e9e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 004b1e9f
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004b1ea4
    MOV ESI,dword ptr [EBX + 0x2698]    ; 004b1ea7
        ;   Label: LAB_004b1ea7
    TEST ESI,ESI                        ; 004b1ead
    JZ 0x004b1ec1                       ; 004b1eaf
        ;   XREF to: 004b1ec1 (CONDITIONAL_JUMP)  ; LAB_004b1ec1
    PUSH ESI                            ; 004b1eb1
    MOV EBP,dword ptr [0x0061b5a8]      ; 004b1eb2 | g_CDemonSetPtr
    PUSH EBP                            ; 004b1eb8 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 004b1eb9
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004b1ebe
    MOV EAX,[0x0061b5a8]                ; 004b1ec1 | g_CDemonSetPtr
        ;   Label: LAB_004b1ec1
    PUSH EAX                            ; 004b1ec6 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00537e90 ; 004b1ec7
        ;   XREF to: 00537e90 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_disableIgnore_FUN_00537e90(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004b1ecc
    XOR EDX,EDX                         ; 004b1ecf
    MOV dword ptr [ESP + 0x98],EDX      ; 004b1ed1
    MOV dword ptr [ESP + 0x94],EDX      ; 004b1ed8
    MOV dword ptr [ESP + 0x90],EDX      ; 004b1edf
    MOV EDI,dword ptr [EBX + 0x2620]    ; 004b1ee6
    TEST EDI,EDI                        ; 004b1eec
    JZ 0x004b2058                       ; 004b1eee
        ;   XREF to: 004b2058 (CONDITIONAL_JUMP)  ; LAB_004b2058
    PUSH EDI                            ; 004b1ef4
    MOV EDX,dword ptr [EDI + 0x2b0]     ; 004b1ef5
    LEA ESI,[ESP + 0x4]                 ; 004b1efb
    CALL dword ptr [EDX + 0x24]         ; 004b1eff
    MOV ECX,0x6                         ; 004b1f02
    LEA EDI,[ESP + 0x4c]                ; 004b1f07
    LEA ESI,[ESP + 0x4]                 ; 004b1f0b
    ADD ESP,0x4                         ; 004b1f0f
    LEA EAX,[ESP + 0x48]                ; 004b1f12
    MOVSD.REP ES:EDI,ESI                ; 004b1f16
    FLD float ptr [EAX + 0xc]           ; 004b1f18
    FLD float ptr [EAX + 0x10]          ; 004b1f1b
    FLD float ptr [EAX + 0x14]          ; 004b1f1e
    LEA EDI,[ESP + 0x84]                ; 004b1f21
    LEA ESI,[ESP + 0x60]                ; 004b1f28
    FXCH ST2                            ; 004b1f2c
    FSUB float ptr [ESP + 0x48]         ; 004b1f2e
    FXCH                                ; 004b1f32
    FSUB float ptr [ESP + 0x4c]         ; 004b1f34
    FXCH ST2                            ; 004b1f38
    FSUB float ptr [ESP + 0x50]         ; 004b1f3a
    FXCH                                ; 004b1f3e
    FSTP float ptr [ESP + 0x60]         ; 004b1f40
    FXCH                                ; 004b1f44
    FSTP float ptr [ESP + 0x64]         ; 004b1f46
    FSTP float ptr [ESP + 0x68]         ; 004b1f4a
    MOVSD ES:EDI,ESI                    ; 004b1f4e
    MOVSD ES:EDI,ESI                    ; 004b1f4f
    MOVSD ES:EDI,ESI                    ; 004b1f50
    FLD float ptr [ESP + 0x8c]          ; 004b1f51
    FCHS                                ; 004b1f58
    FSTP float ptr [ESP + 0x90]         ; 004b1f5a
    LEA EAX,[ESP + 0x90]                ; 004b1f61
        ;   Label: LAB_004b1f61
    PUSH EAX                            ; 004b1f68
    MOV EAX,[0x01cb067c]                ; 004b1f69 | DAT_01cb067c
    PUSH EAX                            ; 004b1f6e
    MOV EDX,dword ptr [0x01cb06b8]      ; 004b1f6f | DAT_01cb06b8
    PUSH EDX                            ; 004b1f75
    LEA EAX,[EBX + 0x2565c]             ; 004b1f76
    PUSH EAX                            ; 004b1f7c
    PUSH dword ptr [ESP + 0xc8]         ; 004b1f7d
    PUSH EBX                            ; 004b1f84
    CALL core_gabriela.cpp_FUN_004b20d0 ; 004b1f85
        ;   XREF to: 004b20d0 (UNCONDITIONAL_CALL)  ; undefined core_gabriela.cpp_FUN_004b20d0()
    MOV ECX,dword ptr [EBX + 0x2698]    ; 004b1f8a
    ADD ESP,0x18                        ; 004b1f90
    TEST ECX,ECX                        ; 004b1f93
    JZ 0x004b2068                       ; 004b1f95
        ;   XREF to: 004b2068 (CONDITIONAL_JUMP)  ; LAB_004b2068
    PUSH ECX                            ; 004b1f9b
    MOV EDX,dword ptr [ECX + 0x2b0]     ; 004b1f9c
    LEA ESI,[ESP + 0x34]                ; 004b1fa2
    LEA EDI,[ESP + 0x1c]                ; 004b1fa6
    CALL dword ptr [EDX + 0x24]         ; 004b1faa
    MOV ECX,0x6                         ; 004b1fad
    LEA ESI,[ESP + 0x34]                ; 004b1fb2
    ADD ESP,0x4                         ; 004b1fb6
    LEA EAX,[ESP + 0x18]                ; 004b1fb9
    MOVSD.REP ES:EDI,ESI                ; 004b1fbd
    FLD float ptr [EAX + 0xc]           ; 004b1fbf
    FLD float ptr [EAX + 0x10]          ; 004b1fc2
    FLD float ptr [EAX + 0x14]          ; 004b1fc5
    LEA EDI,[ESP + 0x6c]                ; 004b1fc8
    LEA ESI,[ESP + 0x78]                ; 004b1fcc
    FXCH ST2                            ; 004b1fd0
    FSUB float ptr [ESP + 0x18]         ; 004b1fd2
    FXCH                                ; 004b1fd6
    FSUB float ptr [ESP + 0x1c]         ; 004b1fd8
    FXCH ST2                            ; 004b1fdc
    FSUB float ptr [ESP + 0x20]         ; 004b1fde
    FXCH                                ; 004b1fe2
    FSTP float ptr [ESP + 0x78]         ; 004b1fe4
    FXCH                                ; 004b1fe8
    FSTP float ptr [ESP + 0x7c]         ; 004b1fea
    FSTP float ptr [ESP + 0x80]         ; 004b1fee
    MOVSD ES:EDI,ESI                    ; 004b1ff5
    MOVSD ES:EDI,ESI                    ; 004b1ff6
    MOVSD ES:EDI,ESI                    ; 004b1ff7
    MOV EAX,dword ptr [ESP + 0x74]      ; 004b1ff8
    MOV dword ptr [ESP + 0x90],EAX      ; 004b1ffc
    LEA EAX,[ESP + 0x90]                ; 004b2003
        ;   Label: LAB_004b2003
    PUSH EAX                            ; 004b200a
    MOV EDI,dword ptr [0x01cb0680]      ; 004b200b | DAT_01cb0680
    PUSH EDI                            ; 004b2011
    MOV EBP,dword ptr [0x01cb06bc]      ; 004b2012 | DAT_01cb06bc
    PUSH EBP                            ; 004b2018
    LEA EAX,[EBX + 0x25660]             ; 004b2019
    PUSH EAX                            ; 004b201f
    PUSH dword ptr [ESP + 0xc8]         ; 004b2020
    PUSH EBX                            ; 004b2027
    CALL core_gabriela.cpp_FUN_004b20d0 ; 004b2028
        ;   XREF to: 004b20d0 (UNCONDITIONAL_CALL)  ; undefined core_gabriela.cpp_FUN_004b20d0()
    ADD ESP,0x18                        ; 004b202d
    MOV EAX,[0x0061b5a8]                ; 004b2030 | g_CDemonSetPtr
    PUSH EAX                            ; 004b2035 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 004b2036
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004b203b
    ADD ESP,0xa0                        ; 004b203e
    POP EBP                             ; 004b2044
    POP EDI                             ; 004b2045
    POP ESI                             ; 004b2046
    POP EBX                             ; 004b2047
    RET                                 ; 004b2048
    MOV dword ptr [EBX + 0x2565c],0x0   ; 004b2049
        ;   Label: LAB_004b2049
    JMP 0x004b1e55                      ; 004b2053
        ;   XREF to: 004b1e55 (UNCONDITIONAL_JUMP)  ; LAB_004b1e55
    MOV dword ptr [ESP + 0x90],0xbf000000 ; 004b2058
        ;   Label: LAB_004b2058
    JMP 0x004b1f61                      ; 004b2063
        ;   XREF to: 004b1f61 (UNCONDITIONAL_JUMP)  ; LAB_004b1f61
    MOV dword ptr [ESP + 0x90],0x3f000000 ; 004b2068
        ;   Label: LAB_004b2068
    JMP 0x004b2003                      ; 004b2073
        ;   XREF to: 004b2003 (UNCONDITIONAL_JUMP)  ; LAB_004b2003
    PUSH 0x544cc0                       ; 004b2075
        ;   Label: LAB_004b2075
    MOV ECX,dword ptr [0x01cb067c]      ; 004b207a | DAT_01cb067c
    PUSH ECX                            ; 004b2080
    PUSH dword ptr [EBX + 0x2565c]      ; 004b2081
    PUSH 0x0                            ; 004b2087
    PUSH EDX                            ; 004b2089
    LEA ESI,[EBX + 0x2b4]               ; 004b208a
    PUSH ESI                            ; 004b2090
    CALL core_skeleton.cpp_FUN_00545a60 ; 004b2091
        ;   XREF to: 00545a60 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00545a60()
    ADD ESP,0x18                        ; 004b2096
    PUSH 0x544cc0                       ; 004b2099
    MOV EDI,dword ptr [0x01cb0680]      ; 004b209e | DAT_01cb0680
    PUSH EDI                            ; 004b20a4
    PUSH dword ptr [EBX + 0x25660]      ; 004b20a5
    PUSH 0x0                            ; 004b20ab
    PUSH 0x0                            ; 004b20ad
    PUSH ESI                            ; 004b20af
    CALL core_skeleton.cpp_FUN_00545a60 ; 004b20b0
        ;   XREF to: 00545a60 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00545a60()
    ADD ESP,0x18                        ; 004b20b5
    ADD ESP,0xa0                        ; 004b20b8
    POP EBP                             ; 004b20be
    POP EDI                             ; 004b20bf
    POP ESI                             ; 004b20c0
    POP EBX                             ; 004b20c1
    RET                                 ; 004b20c2

