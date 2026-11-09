; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_dismember_FUN_00430d90(CCharacter *this_ptr,CVector3f *impact_point,float impact_force,int render_in_background)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   impact_point
; float            Stack[0xc]:4   impact_force
; int              Stack[0x10]:4   render_in_background
; Local Variables:
; undefined4       Stack[-0x108]:4  local_108
; undefined        Stack[-0x104]:1  local_104
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0xc4]:1  local_c4
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[9]:
;   core_armour.cpp_FUN_0040eaa0 at 0040ebd1
;   core_armour.cpp_FUN_0040ec40 at 0040ec5a
;   core_batman.cpp_FUN_00413c40 at 00413f72
;   core_charactr.cpp_FUN_0042f8e0 at 0042fc9b
;   core_charactr.cpp_FUN_00430c90 at 00430d7a
;   core_charactr.cpp_FUN_004319e0 at 00431bbc
;   core_gargoyle.cpp_FUN_004dd630 at 004dd726
;   core_hpriest.cpp_FUN_004f0a20 at 004f0a58
;   core_vampboss.cpp_FUN_005a5550 at 005a6402
;
; Referenced Globals:
;   undefined4 DAT_005d5a57
;   CGore* g_CGorePtr = 01cd0e3c
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_0040cc00
;   core_charactr.cpp_FUN_004311a0
;   core_dirmat.cpp_FUN_0045f3e0
;   core_dirmat.cpp_FUN_0045f690
;   core_gore.cpp_FUN_004e6060
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_vecdir.cpp_FUN_005a7520
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430d90
        ;   Label: core_charactr.cpp_CCharacter_dismember_FUN_00430d90
    PUSH ESI                            ; 00430d91
    PUSH EDI                            ; 00430d92
    PUSH EBP                            ; 00430d93
    MOV EBP,ESP                         ; 00430d94
    SUB ESP,0xf4                        ; 00430d96
    AND ESP,0xfffffff8                  ; 00430d9c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00430d9f
    MOV EBX,dword ptr [EBP + 0x18]      ; 00430da2
    MOV dword ptr [ESP],EAX             ; 00430da5
    MOV EAX,dword ptr [EBP + 0x14]      ; 00430da8
    MOV EDX,dword ptr [EAX + 0xb9e4]    ; 00430dab
    PUSH EDX                            ; 00430db1
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 00430db2
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 00430db7
    MOV ESI,dword ptr [EBP + 0x14]      ; 00430dba
    MOV EAX,dword ptr [EBP + 0x14]      ; 00430dbd
    MOV DL,byte ptr [ESI + 0x24a8]      ; 00430dc0
    ADD EAX,0x158                       ; 00430dc6
    TEST DL,DL                          ; 00430dcb
    JZ 0x00430e50                       ; 00430dcd
        ;   XREF to: 00430e50 (CONDITIONAL_JUMP)  ; LAB_00430e50
    PUSH EAX                            ; 00430dd3
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 00430dd4
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00430dd9
    MOV EAX,dword ptr [EAX + 0xc00]     ; 00430ddc
    MOV dword ptr [ESP + 0xe8],EAX      ; 00430de2
    CMP EAX,0x1                         ; 00430de9
    JLE 0x00430e50                      ; 00430dec
        ;   XREF to: 00430e50 (CONDITIONAL_JUMP)  ; LAB_00430e50
    FLD float ptr [ESP]                 ; 00430dee
    FLDZ                                ; 00430df1
    FCOMPP                              ; 00430df3
    FNSTSW AX                           ; 00430df5
    SAHF                                ; 00430df7
    JBE 0x00430e01                      ; 00430df8
        ;   XREF to: 00430e01 (CONDITIONAL_JUMP)  ; LAB_00430e01
    MOV dword ptr [ESP],0x41a00000      ; 00430dfa
    XOR ESI,ESI                         ; 00430e01
        ;   Label: LAB_00430e01
    MOV EDI,dword ptr [ESP + 0xe8]      ; 00430e03
    MOV dword ptr [ESP + 0xec],ESI      ; 00430e0a
    TEST EDI,EDI                        ; 00430e11
    JLE 0x00430e50                      ; 00430e13
        ;   XREF to: 00430e50 (CONDITIONAL_JUMP)  ; LAB_00430e50
    TEST EBX,EBX                        ; 00430e15
        ;   Label: LAB_00430e15
    JNZ 0x00430f47                      ; 00430e17
        ;   XREF to: 00430f47 (CONDITIONAL_JUMP)  ; LAB_00430f47
    MOV ECX,dword ptr [EBP + 0x20]      ; 00430e1d
        ;   Label: LAB_00430e1d
    PUSH ECX                            ; 00430e20
    PUSH EBX                            ; 00430e21
    MOV ESI,dword ptr [ESP + 0xf4]      ; 00430e22
    PUSH ESI                            ; 00430e29
    MOV EDI,dword ptr [EBP + 0x14]      ; 00430e2a
    PUSH EDI                            ; 00430e2d
    CALL core_charactr.cpp_FUN_004311a0 ; 00430e2e
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
        ;   Label: LAB_00430e2e
    ADD ESP,0x10                        ; 00430e33
    MOV EAX,dword ptr [ESP + 0xec]      ; 00430e36
    INC EAX                             ; 00430e3d
    MOV EDX,dword ptr [ESP + 0xe8]      ; 00430e3e
    MOV dword ptr [ESP + 0xec],EAX      ; 00430e45
    CMP EAX,EDX                         ; 00430e4c
    JL 0x00430e15                       ; 00430e4e
        ;   XREF to: 00430e15 (CONDITIONAL_JUMP)  ; LAB_00430e15
    MOV EDX,dword ptr [EBP + 0x14]      ; 00430e50
        ;   Label: LAB_00430e50
    MOV EAX,dword ptr [EBP + 0x14]      ; 00430e53
    PUSH EDX                            ; 00430e56
    MOV EAX,dword ptr [EAX + 0x154]     ; 00430e57
    LEA ESI,[ESP + 0x48]                ; 00430e5d
    LEA EDI,[ESP + 0x30]                ; 00430e61
    CALL dword ptr [EAX + 0x1c]         ; 00430e65
    MOV ECX,0x6                         ; 00430e68
    LEA ESI,[ESP + 0x48]                ; 00430e6d
    ADD ESP,0x4                         ; 00430e71
    MOVSD.REP ES:EDI,ESI                ; 00430e74
    FLD float ptr [ESP + 0x2c]          ; 00430e76
    FLD float ptr [ESP + 0x30]          ; 00430e7a
    LEA ESI,[ESP + 0x2c]                ; 00430e7e
    FLD float ptr [ESP + 0x34]          ; 00430e82
    LEA EDI,[ESP + 0x74]                ; 00430e86
    FXCH ST2                            ; 00430e8a
    FADD float ptr [ESI + 0xc]          ; 00430e8c
    FXCH                                ; 00430e8f
    FADD float ptr [ESI + 0x10]         ; 00430e91
    FXCH ST2                            ; 00430e94
    FADD float ptr [ESI + 0x14]         ; 00430e96
    FXCH                                ; 00430e99
    FSTP float ptr [ESP + 0x5c]         ; 00430e9b
    FXCH                                ; 00430e9f
    FSTP float ptr [ESP + 0x60]         ; 00430ea1
    LEA ESI,[ESP + 0x5c]                ; 00430ea5
    FSTP float ptr [ESP + 0x64]         ; 00430ea9
    MOVSD ES:EDI,ESI                    ; 00430ead
    MOVSD ES:EDI,ESI                    ; 00430eae
    MOVSD ES:EDI,ESI                    ; 00430eaf
    FLD float ptr [0x005d5a57]          ; 00430eb0 | DAT_005d5a57
    FLD float ptr [ESP + 0x74]          ; 00430eb6
    FMUL ST1                            ; 00430eba
    FLD float ptr [ESP + 0x78]          ; 00430ebc
    FMUL ST2                            ; 00430ec0
    LEA EAX,[ESP + 0x8c]                ; 00430ec2
    FLD float ptr [ESP + 0x7c]          ; 00430ec9
    FMULP ST3                           ; 00430ecd
    PUSH EAX                            ; 00430ecf
    MOV ECX,dword ptr [EBP + 0x14]      ; 00430ed0
    LEA EDI,[ESP + 0x90]                ; 00430ed3
    LEA ESI,[ESP + 0xc0]                ; 00430eda
    FXCH                                ; 00430ee1
    FSTP float ptr [ESP + 0xc0]         ; 00430ee3
    FSTP float ptr [ESP + 0xc4]         ; 00430eea
    FSTP float ptr [ESP + 0xc8]         ; 00430ef1
    MOVSD ES:EDI,ESI                    ; 00430ef8
    MOVSD ES:EDI,ESI                    ; 00430ef9
    MOVSD ES:EDI,ESI                    ; 00430efa
    PUSH ECX                            ; 00430efb
    LEA ESI,[ESP + 0xac]                ; 00430efc
    LEA EDI,[ESP + 0xa0]                ; 00430f03
    CALL core_actor.cpp_FUN_00408b40    ; 00430f0a
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00430f0f
    LEA ESI,[ESP + 0xa4]                ; 00430f12
    MOV EAX,dword ptr [EBP + 0x14]      ; 00430f19
    MOVSD ES:EDI,ESI                    ; 00430f1c
    MOVSD ES:EDI,ESI                    ; 00430f1d
    MOVSD ES:EDI,ESI                    ; 00430f1e
    CMP dword ptr [EAX + 0xb9e8],0x0    ; 00430f1f
    JZ 0x00431073                       ; 00430f26
        ;   XREF to: 00431073 (CONDITIONAL_JUMP)  ; LAB_00431073
    MOV dword ptr [EAX + 0x3120],0x0    ; 00430f2c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00430f36
    MOV dword ptr [EAX + 0x70],0x2      ; 00430f39
    MOV ESP,EBP                         ; 00430f40
    POP EBP                             ; 00430f42
    POP EDI                             ; 00430f43
    POP ESI                             ; 00430f44
    POP EBX                             ; 00430f45
    RET                                 ; 00430f46
    FLD float ptr [ESP]                 ; 00430f47
        ;   Label: LAB_00430f47
    FLDZ                                ; 00430f4a
    FCOMPP                              ; 00430f4c
    FNSTSW AX                           ; 00430f4e
    SAHF                                ; 00430f50
    JNC 0x00430e1d                      ; 00430f51
        ;   XREF to: 00430e1d (CONDITIONAL_JUMP)  ; LAB_00430e1d
    PUSH EBX                            ; 00430f57
    LEA ESI,[ESP + 0x6c]                ; 00430f58
    LEA EDI,[ESP + 0xb4]                ; 00430f5c
    CALL core_vecdir.cpp_FUN_005a7520   ; 00430f63
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005a7520()
    ADD ESP,0x4                         ; 00430f68
    LEA ESI,[ESP + 0x68]                ; 00430f6b
    PUSH dword ptr [ESP]                ; 00430f6f
    FLD float ptr [ESP + 0x4]           ; 00430f72
    FCHS                                ; 00430f76
    FSTP float ptr [ESP + 0xe8]         ; 00430f78
    PUSH dword ptr [ESP + 0xe8]         ; 00430f7f
    MOVSD ES:EDI,ESI                    ; 00430f86
    MOVSD ES:EDI,ESI                    ; 00430f87
    MOVSD ES:EDI,ESI                    ; 00430f88
    CALL core_actor.cpp_FUN_0040cc00    ; 00430f89
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0xf8],EAX      ; 00430f8e
    FLD float ptr [ESP + 0xf8]          ; 00430f95
    ADD ESP,0x8                         ; 00430f9c
    PUSH dword ptr [ESP]                ; 00430f9f
    FADD float ptr [ESP + 0xb8]         ; 00430fa2
    PUSH dword ptr [ESP + 0xe8]         ; 00430fa9
    FSTP float ptr [ESP + 0xbc]         ; 00430fb0
    CALL core_actor.cpp_FUN_0040cc00    ; 00430fb7
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0xf8],EAX      ; 00430fbc
    FLD float ptr [ESP + 0xf8]          ; 00430fc3
    ADD ESP,0x8                         ; 00430fca
    LEA ESI,[ESP + 0xb0]                ; 00430fcd
    PUSH ESI                            ; 00430fd4
    LEA ESI,[ESP + 0x8]                 ; 00430fd5
    FADD float ptr [ESP + 0xb4]         ; 00430fd9
    PUSH ESI                            ; 00430fe0
    FSTP float ptr [ESP + 0xb8]         ; 00430fe1
    CALL core_dirmat.cpp_FUN_0045f3e0   ; 00430fe8
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    FLD float ptr [EBX + 0x4]           ; 00430fed
    FMUL ST0                            ; 00430ff0
    FLD float ptr [EBX]                 ; 00430ff2
    FMUL ST0                            ; 00430ff4
    FADDP                               ; 00430ff6
    FLD float ptr [EBX + 0x8]           ; 00430ff8
    FMUL ST0                            ; 00430ffb
    FADDP                               ; 00430ffd
    ADD ESP,0x8                         ; 00430fff
    FSQRT                               ; 00431002
    LEA ESI,[ESP + 0xc8]                ; 00431004
    LEA EDI,[ESP + 0x80]                ; 0043100b
    PUSH ESI                            ; 00431012
    LEA ESI,[ESP + 0x8]                 ; 00431013
    XOR ECX,ECX                         ; 00431017
    PUSH ESI                            ; 00431019
    LEA ESI,[ESP + 0xdc]                ; 0043101a
    MOV dword ptr [ESP + 0xd0],ECX      ; 00431021
    FSTP float ptr [ESP + 0xe8]         ; 00431028
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0043102f
    MOV dword ptr [ESP + 0xd4],ECX      ; 00431036
    MOV dword ptr [ESP + 0xd8],EAX      ; 0043103d
    CALL core_dirmat.cpp_FUN_0045f690   ; 00431044
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0xdc]                ; 00431049
    ADD ESP,0x8                         ; 00431050
    MOVSD ES:EDI,ESI                    ; 00431053
    MOVSD ES:EDI,ESI                    ; 00431054
    MOVSD ES:EDI,ESI                    ; 00431055
    MOV EDI,dword ptr [EBP + 0x20]      ; 00431056
    PUSH EDI                            ; 00431059
    LEA ESI,[ESP + 0x84]                ; 0043105a
    PUSH ESI                            ; 00431061
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00431062
    PUSH EAX                            ; 00431069
    MOV EDX,dword ptr [EBP + 0x14]      ; 0043106a
    PUSH EDX                            ; 0043106d
    JMP 0x00430e2e                      ; 0043106e
        ;   XREF to: 00430e2e (UNCONDITIONAL_JUMP)  ; LAB_00430e2e
    MOV EDI,dword ptr [EAX + 0x27a0]    ; 00431073
        ;   Label: LAB_00431073
    PUSH EDI                            ; 00431079
    PUSH 0x64                           ; 0043107a
    PUSH EBX                            ; 0043107c
    LEA EAX,[ESP + 0xa4]                ; 0043107d
    PUSH EAX                            ; 00431084
    MOV EAX,[0x0061dca4]                ; 00431085 | g_CGorePtr
    PUSH EAX                            ; 0043108a
    CALL core_gore.cpp_FUN_004e6060     ; 0043108b
        ;   XREF to: 004e6060 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004e6060(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 00431090
    MOV EAX,dword ptr [EBP + 0x14]      ; 00431093
    MOV dword ptr [EAX + 0x70],0x2      ; 00431096
    MOV ESP,EBP                         ; 0043109d
    POP EBP                             ; 0043109f
    POP EDI                             ; 004310a0
    POP ESI                             ; 004310a1
    POP EBX                             ; 004310a2
    RET                                 ; 004310a3

