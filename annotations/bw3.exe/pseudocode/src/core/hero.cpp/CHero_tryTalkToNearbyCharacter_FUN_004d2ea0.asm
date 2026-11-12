; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004d2ea0(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_hero.cpp_FUN_004d4900 at 004d49a3
;
; Referenced Globals:
;   undefined4 DAT_005c4d05
;   undefined4 DAT_005c4d0d
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 g_CDemonSetInstance.character_count
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408b80
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2ea0
        ;   Label: core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004d2ea0
    PUSH ESI                            ; 004d2ea1
    PUSH EDI                            ; 004d2ea2
    PUSH EBP                            ; 004d2ea3
    MOV EBP,ESP                         ; 004d2ea4
    SUB ESP,0x78                        ; 004d2ea6
    AND ESP,0xfffffff8                  ; 004d2ea9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d2eac
    MOV ESI,0x3fc00000                  ; 004d2eaf
    LEA EAX,[ESP + 0x24]                ; 004d2eb4
    MOV EDI,0x40a00000                  ; 004d2eb8
    XOR EDX,EDX                         ; 004d2ebd
    PUSH EAX                            ; 004d2ebf
    MOV dword ptr [ESP + 0x28],EDX      ; 004d2ec0
    MOV dword ptr [ESP + 0x30],ESI      ; 004d2ec4
    PUSH EBX                            ; 004d2ec8
    LEA ESI,[ESP + 0x50]                ; 004d2ec9
    MOV dword ptr [ESP + 0x30],EDX      ; 004d2ecd
    CALL core_actor.cpp_FUN_00408b80    ; 004d2ed1
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 004d2ed6
    XOR EAX,EAX                         ; 004d2ed9
    XOR EDX,EDX                         ; 004d2edb
    MOV dword ptr [ESP + 0x60],EDI      ; 004d2edd
    MOV dword ptr [ESP + 0x70],EAX      ; 004d2ee1
    LEA EAX,[EBX + 0x20]                ; 004d2ee5
    MOV dword ptr [ESP + 0x6c],EDX      ; 004d2ee8
    MOV dword ptr [ESP + 0x68],EAX      ; 004d2eec
    MOV EAX,[0x00603b28]                ; 004d2ef0 | g_CDemonSetPtr
        ;   Label: LAB_004d2ef0
    MOV ESI,dword ptr [ESP + 0x70]      ; 004d2ef5
    CMP ESI,dword ptr [EAX + 0x14f0a8]  ; 004d2ef9 | g_CDemonSetInstance.character_count
    JGE 0x004d3024                      ; 004d2eff
        ;   XREF to: 004d3024 (CONDITIONAL_JUMP)  ; LAB_004d3024
    ADD EAX,dword ptr [ESP + 0x6c]      ; 004d2f05
    MOV EAX,dword ptr [EAX + 0x14f0ac]  ; 004d2f09
    MOV DL,byte ptr [EAX + 0x2698]      ; 004d2f0f
    MOV dword ptr [ESP + 0x74],EAX      ; 004d2f15
    TEST DL,DL                          ; 004d2f19
    JNZ 0x004d2f33                      ; 004d2f1b
        ;   XREF to: 004d2f33 (CONDITIONAL_JUMP)  ; LAB_004d2f33
    MOV ECX,dword ptr [ESP + 0x70]      ; 004d2f1d
        ;   Label: LAB_004d2f1d
    MOV EDX,dword ptr [ESP + 0x6c]      ; 004d2f21
    INC ECX                             ; 004d2f25
    ADD EDX,0x4                         ; 004d2f26
    MOV dword ptr [ESP + 0x70],ECX      ; 004d2f29
    MOV dword ptr [ESP + 0x6c],EDX      ; 004d2f2d
    JMP 0x004d2ef0                      ; 004d2f31
        ;   XREF to: 004d2ef0 (UNCONDITIONAL_JUMP)  ; LAB_004d2ef0
    CMP EBX,EAX                         ; 004d2f33
        ;   Label: LAB_004d2f33
    JZ 0x004d2f1d                       ; 004d2f35
        ;   XREF to: 004d2f1d (CONDITIONAL_JUMP)  ; LAB_004d2f1d
    FLD float ptr [EAX + 0x20]          ; 004d2f37
    FLD float ptr [EAX + 0x24]          ; 004d2f3a
    MOV ESI,dword ptr [ESP + 0x68]      ; 004d2f3d
    FLD float ptr [EAX + 0x28]          ; 004d2f41
    LEA EDI,[ESP + 0xc]                 ; 004d2f44
    FXCH ST2                            ; 004d2f48
    FSUB float ptr [ESI]                ; 004d2f4a
    FXCH                                ; 004d2f4c
    FSUB float ptr [ESI + 0x4]          ; 004d2f4e
    FXCH ST2                            ; 004d2f51
    FSUB float ptr [ESI + 0x8]          ; 004d2f53
    FXCH                                ; 004d2f56
    FSTP float ptr [ESP + 0x18]         ; 004d2f58
    FXCH                                ; 004d2f5c
    FSTP float ptr [ESP + 0x1c]         ; 004d2f5e
    LEA ESI,[ESP + 0x18]                ; 004d2f62
    FSTP float ptr [ESP + 0x20]         ; 004d2f66
    MOVSD ES:EDI,ESI                    ; 004d2f6a
    MOVSD ES:EDI,ESI                    ; 004d2f6b
    MOVSD ES:EDI,ESI                    ; 004d2f6c
    FLD float ptr [ESP + 0x10]          ; 004d2f6d
    FABS                                ; 004d2f71
    FCOMP double ptr [0x005c4d05]       ; 004d2f73 | DAT_005c4d05
    FNSTSW AX                           ; 004d2f79
    SAHF                                ; 004d2f7b
    JA 0x004d2f1d                       ; 004d2f7c
        ;   XREF to: 004d2f1d (CONDITIONAL_JUMP)  ; LAB_004d2f1d
    FLD float ptr [ESP + 0xc]           ; 004d2f7e
    FMUL ST0                            ; 004d2f82
    FLD float ptr [ESP + 0x14]          ; 004d2f84
    FMUL ST0                            ; 004d2f88
    XOR EAX,EAX                         ; 004d2f8a
    FADDP                               ; 004d2f8c
    MOV dword ptr [ESP + 0x10],EAX      ; 004d2f8e
    FSQRT                               ; 004d2f92
    FST float ptr [ESP + 0x64]          ; 004d2f94
    FCOMP float ptr [ESP + 0x60]        ; 004d2f98
    FNSTSW AX                           ; 004d2f9c
    SAHF                                ; 004d2f9e
    JNC 0x004d2f1d                      ; 004d2f9f
        ;   XREF to: 004d2f1d (CONDITIONAL_JUMP)  ; LAB_004d2f1d
    LEA EAX,[ESP + 0xc]                 ; 004d2fa5
    PUSH EAX                            ; 004d2fa9
    PUSH EBX                            ; 004d2faa
    LEA ESI,[ESP + 0x38]                ; 004d2fab
    LEA EDI,[ESP + 0x44]                ; 004d2faf
    CALL core_actor.cpp_FUN_00408b40    ; 004d2fb3
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x38]                ; 004d2fb8
    ADD ESP,0x8                         ; 004d2fbc
    LEA EAX,[ESP + 0x3c]                ; 004d2fbf
    MOVSD ES:EDI,ESI                    ; 004d2fc3
    MOVSD ES:EDI,ESI                    ; 004d2fc4
    MOVSD ES:EDI,ESI                    ; 004d2fc5
    PUSH EAX                            ; 004d2fc6
    LEA ESI,[ESP + 0x4]                 ; 004d2fc7
    LEA EDI,[ESP + 0x58]                ; 004d2fcb
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 004d2fcf
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[ESP + 0x4]                 ; 004d2fd4
    ADD ESP,0x4                         ; 004d2fd8
    MOVSD ES:EDI,ESI                    ; 004d2fdb
    MOVSD ES:EDI,ESI                    ; 004d2fdc
    MOVSD ES:EDI,ESI                    ; 004d2fdd
    FLD float ptr [ESP + 0x58]          ; 004d2fde
    FABS                                ; 004d2fe2
    FCOMP double ptr [0x005c4d0d]       ; 004d2fe4 | DAT_005c4d0d
    FNSTSW AX                           ; 004d2fea
    SAHF                                ; 004d2fec
    JA 0x004d2f1d                       ; 004d2fed
        ;   XREF to: 004d2f1d (CONDITIONAL_JUMP)  ; LAB_004d2f1d
    MOV EAX,dword ptr [ESP + 0x74]      ; 004d2ff3
    MOV dword ptr [EBX + 0x20b7c],0x0   ; 004d2ff7
    MOV dword ptr [EBX + 0x20b6c],EAX   ; 004d3001
    MOV dword ptr [EBX + 0x20b70],EAX   ; 004d3007
    MOV EAX,dword ptr [ESP + 0x64]      ; 004d300d
    MOV dword ptr [EBX + 0x20b68],0x2   ; 004d3011
    MOV dword ptr [ESP + 0x60],EAX      ; 004d301b
    JMP 0x004d2f1d                      ; 004d301f
        ;   XREF to: 004d2f1d (UNCONDITIONAL_JUMP)  ; LAB_004d2f1d
    CMP dword ptr [EBX + 0x20b68],0x2   ; 004d3024
        ;   Label: LAB_004d3024
    SETZ AL                             ; 004d302b
    AND EAX,0xff                        ; 004d302e
    MOV ESP,EBP                         ; 004d3033
    POP EBP                             ; 004d3035
    POP EDI                             ; 004d3036
    POP ESI                             ; 004d3037
    POP EBX                             ; 004d3038
    RET                                 ; 004d3039

