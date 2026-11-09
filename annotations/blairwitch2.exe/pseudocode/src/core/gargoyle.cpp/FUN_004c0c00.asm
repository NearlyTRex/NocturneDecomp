; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gargoyle_cpp_FUN_004c0c00(CGargoyle *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_gargoyle.cpp_FUN_004c0ea0 at 004c0f1b
;
; Referenced Globals:
;   undefined1* switchdataD_004c0be8 = 004c0c3d
;   undefined4 DAT_005d8e22
;   undefined4 DAT_005d8e2a
;   undefined4 DAT_005d8e32
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 g_CGameInstance.field508_0x1fc
;
; Called Functions:
;   core_actor.cpp_FUN_0040d060
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700
;   core_bodypart.cpp_FUN_004154f0
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0
;   core_charactr.cpp_FUN_00427770
;   crt_stdlib.c_rand_FUN_005b849c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0c00
        ;   Label: core_gargoyle.cpp_FUN_004c0c00
    PUSH ESI                            ; 004c0c01
    PUSH EDI                            ; 004c0c02
    PUSH EBP                            ; 004c0c03
    SUB ESP,0xc                         ; 004c0c04
    MOV EBX,dword ptr [ESP + 0x20]      ; 004c0c07
    MOV ESI,dword ptr [ESP + 0x24]      ; 004c0c0b
    FLD float ptr [ESI + 0x2c]          ; 004c0c0f
    FLDZ                                ; 004c0c12
    FCOMPP                              ; 004c0c14
    FNSTSW AX                           ; 004c0c16
    SAHF                                ; 004c0c18
    JNC 0x004c0c45                      ; 004c0c19
        ;   XREF to: 004c0c45 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 004c0c1b
    JNZ 0x004c0c45                      ; 004c0c1e
        ;   XREF to: 004c0c45 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005b849c ; 004c0c20
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
    MOV EDX,EAX                         ; 004c0c25
    MOV EDI,0x6                         ; 004c0c27
    SAR EDX,0x1f                        ; 004c0c2c
    IDIV EDI                            ; 004c0c2f
    CMP EDX,0x5                         ; 004c0c31
    JA 0x004c0c45                       ; 004c0c34
        ;   XREF to: 004c0c45 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4c0be8]  ; 004c0c36 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0x10af8]   ; 004c0c3d
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 004c0c43
        ;   Label: LAB_004c0c43
    MOV ECX,dword ptr [EBX + 0x10af8]   ; 004c0c45
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 004c0c4b
    CMP EAX,ECX                         ; 004c0c4d
    JNZ 0x004c0e1c                      ; 004c0c4f
        ;   XREF to: 004c0e1c (CONDITIONAL_JUMP)  ; LAB_004c0e1c
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004c0c55
        ;   Label: LAB_004c0c55
    MOV EBP,dword ptr [EBX + 0x10b20]   ; 004c0c58
    MOV dword ptr [ESP + 0x8],EAX       ; 004c0c5e
    CMP EBP,dword ptr [ESI]             ; 004c0c62
    JNZ 0x004c0c6e                      ; 004c0c64
        ;   XREF to: 004c0c6e (CONDITIONAL_JUMP)  ; LAB_004c0c6e
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 004c0c66
    MOV EDX,dword ptr [EBX + 0x10b1c]   ; 004c0c6e
        ;   Label: LAB_004c0c6e
    CMP EDX,dword ptr [ESI]             ; 004c0c74
    JNZ 0x004c0c80                      ; 004c0c76
        ;   XREF to: 004c0c80 (CONDITIONAL_JUMP)  ; LAB_004c0c80
    MOV dword ptr [ESP + 0x8],0x3ca3d70a ; 004c0c78
    MOV EAX,[0x00616494]                ; 004c0c80 | g_CGamePtr
        ;   Label: LAB_004c0c80
    CMP dword ptr [EAX + 0x1fc],0x0     ; 004c0c85 | g_CGameInstance.field508_0x1fc
    JZ 0x004c0c96                       ; 004c0c8c
        ;   XREF to: 004c0c96 (CONDITIONAL_JUMP)  ; LAB_004c0c96
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 004c0c8e
    PUSH dword ptr [ESP + 0x8]          ; 004c0c96
        ;   Label: LAB_004c0c96
    CALL core_actor.cpp_FUN_0040d060    ; 004c0c9a
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 004c0c9f
    TEST EAX,EAX                        ; 004c0ca2
    JZ 0x004c0db3                       ; 004c0ca4
        ;   XREF to: 004c0db3 (CONDITIONAL_JUMP)  ; LAB_004c0db3
    MOV EAX,dword ptr [EBX + 0x280c]    ; 004c0caa
    PUSH EAX                            ; 004c0cb0
    PUSH 0x0                            ; 004c0cb1
    PUSH 0x0                            ; 004c0cb3
    PUSH EBX                            ; 004c0cb5
    LEA EAX,[ESI + 0xc]                 ; 004c0cb6
    PUSH EAX                            ; 004c0cb9
    LEA EAX,[EBX + 0x30]                ; 004c0cba
    PUSH EAX                            ; 004c0cbd
    LEA EAX,[EBX + 0x20]                ; 004c0cbe
    PUSH EAX                            ; 004c0cc1
    CALL core_bodypart.cpp_FUN_004154f0 ; 004c0cc2
        ;   XREF to: 004154f0 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_FUN_004154f0(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 004c0cc7
    PUSH 0x1                            ; 004c0cca
    MOV EDX,dword ptr [ESI]             ; 004c0ccc
    PUSH EDX                            ; 004c0cce
    PUSH EAX                            ; 004c0ccf
    PUSH EBX                            ; 004c0cd0
    MOV EDI,EAX                         ; 004c0cd1
    MOV EBP,EAX                         ; 004c0cd3
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0 ; 004c0cd5
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [ESI]             ; 004c0cda
    MOV ECX,dword ptr [EBX + 0x10af8]   ; 004c0cdc
    ADD ESP,0x10                        ; 004c0ce2
    CMP EAX,ECX                         ; 004c0ce5
    JNZ 0x004c0cfc                      ; 004c0ce7
        ;   XREF to: 004c0cfc (CONDITIONAL_JUMP)  ; LAB_004c0cfc
    PUSH 0x1                            ; 004c0ce9
    MOV EAX,dword ptr [EBX + 0x10afc]   ; 004c0ceb
    PUSH EAX                            ; 004c0cf1
    PUSH EDI                            ; 004c0cf2
    PUSH EBX                            ; 004c0cf3
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0 ; 004c0cf4
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 004c0cf9
    MOV EDX,dword ptr [EBX + 0x10b00]   ; 004c0cfc
        ;   Label: LAB_004c0cfc
    CMP EDX,dword ptr [ESI]             ; 004c0d02
    JNZ 0x004c0d19                      ; 004c0d04
        ;   XREF to: 004c0d19 (CONDITIONAL_JUMP)  ; LAB_004c0d19
    PUSH 0x1                            ; 004c0d06
    MOV ECX,dword ptr [EBX + 0x10b04]   ; 004c0d08
    PUSH ECX                            ; 004c0d0e
    PUSH EBP                            ; 004c0d0f
    PUSH EBX                            ; 004c0d10
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0 ; 004c0d11
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 004c0d16
    MOV EDI,dword ptr [EBX + 0x10b1c]   ; 004c0d19
        ;   Label: LAB_004c0d19
    CMP EDI,dword ptr [ESI]             ; 004c0d1f
    JNZ 0x004c0d85                      ; 004c0d21
        ;   XREF to: 004c0d85 (CONDITIONAL_JUMP)  ; LAB_004c0d85
    PUSH 0x1                            ; 004c0d23
    LEA EDI,[ESI + 0xc]                 ; 004c0d25
    PUSH EDI                            ; 004c0d28
    MOV EAX,dword ptr [EBX + 0x10b00]   ; 004c0d29
    PUSH EAX                            ; 004c0d2f
    PUSH EBX                            ; 004c0d30
    CALL core_charactr.cpp_FUN_00427770 ; 004c0d31
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004c0d36
    PUSH 0x1                            ; 004c0d39
    PUSH EDI                            ; 004c0d3b
    MOV EDX,dword ptr [EBX + 0x10b04]   ; 004c0d3c
    PUSH EDX                            ; 004c0d42
    PUSH EBX                            ; 004c0d43
    CALL core_charactr.cpp_FUN_00427770 ; 004c0d44
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004c0d49
    PUSH 0x1                            ; 004c0d4c
    PUSH EDI                            ; 004c0d4e
    MOV ECX,dword ptr [EBX + 0x10af8]   ; 004c0d4f
    PUSH ECX                            ; 004c0d55
    PUSH EBX                            ; 004c0d56
    CALL core_charactr.cpp_FUN_00427770 ; 004c0d57
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004c0d5c
    PUSH 0x1                            ; 004c0d5f
    PUSH EDI                            ; 004c0d61
    MOV EAX,dword ptr [EBX + 0x10afc]   ; 004c0d62
    PUSH EAX                            ; 004c0d68
    PUSH EBX                            ; 004c0d69
    CALL core_charactr.cpp_FUN_00427770 ; 004c0d6a
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004c0d6f
    PUSH 0x1                            ; 004c0d72
    PUSH EDI                            ; 004c0d74
    MOV EDX,dword ptr [EBX + 0x10b20]   ; 004c0d75
    PUSH EDX                            ; 004c0d7b
    PUSH EBX                            ; 004c0d7c
    CALL core_charactr.cpp_FUN_00427770 ; 004c0d7d
        ;   XREF to: 00427770 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00427770(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 004c0d82
    PUSH EBP                            ; 004c0d85
        ;   Label: LAB_004c0d85
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700 ; 004c0d86
        ;   XREF to: 00416700 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700(CBodyPart * this_ptr)
    MOV EAX,dword ptr [EBX + 0x10b20]   ; 004c0d8b
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 004c0d91
    ADD ESP,0x4                         ; 004c0d98
    TEST ECX,ECX                        ; 004c0d9b
    JZ 0x004c0e5d                       ; 004c0d9d
        ;   XREF to: 004c0e5d (CONDITIONAL_JUMP)  ; LAB_004c0e5d
    FLD float ptr [ESI + 0x8]           ; 004c0da3
        ;   Label: LAB_004c0da3
    FLD ST0                             ; 004c0da6
    FMUL double ptr [0x005d8e22]        ; 004c0da8 | DAT_005d8e22
    FSTP ST1                            ; 004c0dae
    FSTP float ptr [ESI + 0x8]          ; 004c0db0
    MOV EDI,dword ptr [EBX + 0x10b20]   ; 004c0db3
        ;   Label: LAB_004c0db3
    MOV EAX,dword ptr [ESI]             ; 004c0db9
    CMP EAX,EDI                         ; 004c0dbb
    JZ 0x004c0e69                       ; 004c0dbd
        ;   XREF to: 004c0e69 (CONDITIONAL_JUMP)  ; LAB_004c0e69
    CMP EAX,dword ptr [EBX + 0x10b18]   ; 004c0dc3
    JZ 0x004c0dd7                       ; 004c0dc9
        ;   XREF to: 004c0dd7 (CONDITIONAL_JUMP)  ; LAB_004c0dd7
    CMP EAX,dword ptr [EBX + 0x10b1c]   ; 004c0dcb
    JNZ 0x004c0e81                      ; 004c0dd1
        ;   XREF to: 004c0e81 (CONDITIONAL_JUMP)  ; LAB_004c0e81
    MOV EAX,dword ptr [ESI + 0x4]       ; 004c0dd7
        ;   Label: LAB_004c0dd7
    MOV dword ptr [ESI + 0x4],EAX       ; 004c0dda
    ADD ESP,0xc                         ; 004c0ddd
    POP EBP                             ; 004c0de0
    POP EDI                             ; 004c0de1
    POP ESI                             ; 004c0de2
    POP EBX                             ; 004c0de3
    RET                                 ; 004c0de4
    MOV EAX,dword ptr [EBX + 0x10afc]   ; 004c0de5
        ;   Label: caseD_1
    JMP 0x004c0c43                      ; 004c0deb
        ;   XREF to: 004c0c43 (UNCONDITIONAL_JUMP)  ; LAB_004c0c43
    MOV EAX,dword ptr [EBX + 0x10b00]   ; 004c0df0
        ;   Label: caseD_2
    JMP 0x004c0c43                      ; 004c0df6
        ;   XREF to: 004c0c43 (UNCONDITIONAL_JUMP)  ; LAB_004c0c43
    MOV EAX,dword ptr [EBX + 0x10b04]   ; 004c0dfb
        ;   Label: caseD_3
    JMP 0x004c0c43                      ; 004c0e01
        ;   XREF to: 004c0c43 (UNCONDITIONAL_JUMP)  ; LAB_004c0c43
    MOV EAX,dword ptr [EBX + 0x10b20]   ; 004c0e06
        ;   Label: caseD_4
    JMP 0x004c0c43                      ; 004c0e0c
        ;   XREF to: 004c0c43 (UNCONDITIONAL_JUMP)  ; LAB_004c0c43
    MOV EAX,dword ptr [EBX + 0x10b1c]   ; 004c0e11
        ;   Label: caseD_5
    JMP 0x004c0c43                      ; 004c0e17
        ;   XREF to: 004c0c43 (UNCONDITIONAL_JUMP)  ; LAB_004c0c43
    CMP EAX,dword ptr [EBX + 0x10afc]   ; 004c0e1c
        ;   Label: LAB_004c0e1c
    JZ 0x004c0c55                       ; 004c0e22
        ;   XREF to: 004c0c55 (CONDITIONAL_JUMP)  ; LAB_004c0c55
    CMP EAX,dword ptr [EBX + 0x10b00]   ; 004c0e28
    JZ 0x004c0c55                       ; 004c0e2e
        ;   XREF to: 004c0c55 (CONDITIONAL_JUMP)  ; LAB_004c0c55
    CMP EAX,dword ptr [EBX + 0x10b04]   ; 004c0e34
    JZ 0x004c0c55                       ; 004c0e3a
        ;   XREF to: 004c0c55 (CONDITIONAL_JUMP)  ; LAB_004c0c55
    CMP EAX,dword ptr [EBX + 0x10b1c]   ; 004c0e40
    JZ 0x004c0c55                       ; 004c0e46
        ;   XREF to: 004c0c55 (CONDITIONAL_JUMP)  ; LAB_004c0c55
    CMP EAX,dword ptr [EBX + 0x10b20]   ; 004c0e4c
    JZ 0x004c0c55                       ; 004c0e52
        ;   XREF to: 004c0c55 (CONDITIONAL_JUMP)  ; LAB_004c0c55
    JMP 0x004c0db3                      ; 004c0e58
        ;   XREF to: 004c0db3 (UNCONDITIONAL_JUMP)  ; LAB_004c0db3
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 004c0e5d
        ;   Label: LAB_004c0e5d
    JMP 0x004c0da3                      ; 004c0e64
        ;   XREF to: 004c0da3 (UNCONDITIONAL_JUMP)  ; LAB_004c0da3
    FLD float ptr [ESI + 0x4]           ; 004c0e69
        ;   Label: LAB_004c0e69
    FLD ST0                             ; 004c0e6c
    FMUL double ptr [0x005d8e32]        ; 004c0e6e | DAT_005d8e32
    FSTP ST1                            ; 004c0e74
    FSTP float ptr [ESI + 0x4]          ; 004c0e76
    ADD ESP,0xc                         ; 004c0e79
    POP EBP                             ; 004c0e7c
    POP EDI                             ; 004c0e7d
    POP ESI                             ; 004c0e7e
    POP EBX                             ; 004c0e7f
    RET                                 ; 004c0e80
    FLD float ptr [ESI + 0x4]           ; 004c0e81
        ;   Label: LAB_004c0e81
    FLD ST0                             ; 004c0e84
    FMUL double ptr [0x005d8e2a]        ; 004c0e86 | DAT_005d8e2a
    FSTP ST1                            ; 004c0e8c
    FSTP float ptr [ESI + 0x4]          ; 004c0e8e
    ADD ESP,0xc                         ; 004c0e91
    POP EBP                             ; 004c0e94
    POP EDI                             ; 004c0e95
    POP ESI                             ; 004c0e96
    POP EBX                             ; 004c0e97
    RET                                 ; 004c0e98

