; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_smiley_cpp_FUN_0056ce10(CSmiley *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CSmiley *        Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_smiley.cpp_FUN_0056d0f0 at 0056d132
;
; Referenced Globals:
;   undefined1* switchdataD_0056cdf4 = 0056cea0
;   TerminatedCString s_limb_wav_005f2a2e
;   undefined4 DAT_005f2a3f
;   undefined4 DAT_005f2a47
;   undefined4 DAT_005f2a4f
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 g_CGameInstance.field508_0x1fc
;
; Called Functions:
;   core_actor.cpp_FUN_0040cd00
;   core_bodypart.cpp_FUN_00418940
;   core_bodypart.cpp_FUN_00419b90
;   core_charactr.cpp_FUN_004311a0
;   core_charactr.cpp_FUN_00431210
;   core_charactr.cpp_FUN_004352e0
;   crt_stdlib.c_rand_FUN_005c084c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ce10
        ;   Label: core_smiley.cpp_FUN_0056ce10
    PUSH ESI                            ; 0056ce11
    PUSH EDI                            ; 0056ce12
    PUSH EBP                            ; 0056ce13
    SUB ESP,0xc                         ; 0056ce14
    MOV EBX,dword ptr [ESP + 0x20]      ; 0056ce17
    MOV ESI,dword ptr [ESP + 0x24]      ; 0056ce1b
    MOV EDX,dword ptr [ESI + 0x30]      ; 0056ce1f
    CMP EDX,0xb                         ; 0056ce22
    JLE 0x0056d025                      ; 0056ce25
        ;   XREF to: 0056d025 (CONDITIONAL_JUMP)  ; LAB_0056d025
    CMP EDX,0x6b                        ; 0056ce2b
    JNZ 0x0056d02d                      ; 0056ce2e
        ;   XREF to: 0056d02d (CONDITIONAL_JUMP)  ; LAB_0056d02d
    FLD float ptr [EBX + 0xc2a4]        ; 0056ce34
    FLDZ                                ; 0056ce3a
    FCOMPP                              ; 0056ce3c
    FNSTSW AX                           ; 0056ce3e
    SAHF                                ; 0056ce40
    JC 0x0056d02d                       ; 0056ce41
        ;   XREF to: 0056d02d (CONDITIONAL_JUMP)  ; LAB_0056d02d
    FLD1                                ; 0056ce47
    MOV EDI,dword ptr [EBX + 0xc2a0]    ; 0056ce49
    FADD float ptr [EBX + 0xc2a4]       ; 0056ce4f
    INC EDI                             ; 0056ce55
    FSTP float ptr [EBX + 0xc2a4]       ; 0056ce56
    MOV dword ptr [EBX + 0xc2a0],EDI    ; 0056ce5c
    CMP EDI,0x3                         ; 0056ce62
    JL 0x0056d02d                       ; 0056ce65
        ;   XREF to: 0056d02d (CONDITIONAL_JUMP)  ; LAB_0056d02d
    MOV dword ptr [ESI + 0x2c],0x3f800000 ; 0056ce6b
    FLD float ptr [ESI + 0x2c]          ; 0056ce72
    FLDZ                                ; 0056ce75
    FCOMPP                              ; 0056ce77
    FNSTSW AX                           ; 0056ce79
    SAHF                                ; 0056ce7b
    JNC 0x0056cea8                      ; 0056ce7c
        ;   XREF to: 0056cea8 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 0056ce7e
    JNZ 0x0056cea8                      ; 0056ce81
        ;   XREF to: 0056cea8 (CONDITIONAL_JUMP)  ; default
    CALL crt_stdlib.c_rand_FUN_005c084c ; 0056ce83
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    MOV EDX,EAX                         ; 0056ce88
    MOV EDI,0x6                         ; 0056ce8a
    SAR EDX,0x1f                        ; 0056ce8f
    IDIV EDI                            ; 0056ce92
    CMP EDX,0x5                         ; 0056ce94
    JA 0x0056cea8                       ; 0056ce97
        ;   XREF to: 0056cea8 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x56cdf4]  ; 0056ce99 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xc270]    ; 0056cea0
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 0056cea6
        ;   Label: LAB_0056cea6
    MOV EDX,dword ptr [EBX + 0xc270]    ; 0056cea8
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 0056ceae
    CMP EAX,EDX                         ; 0056ceb0
    JNZ 0x0056d073                      ; 0056ceb2
        ;   XREF to: 0056d073 (CONDITIONAL_JUMP)  ; LAB_0056d073
    MOV EAX,dword ptr [ESI + 0x2c]      ; 0056ceb8
        ;   Label: LAB_0056ceb8
    MOV dword ptr [ESP + 0x8],EAX       ; 0056cebb
    MOV EAX,[0x0061d95c]                ; 0056cebf | g_CGamePtr
    CMP dword ptr [EAX + 0x1fc],0x0     ; 0056cec4 | g_CGameInstance.field508_0x1fc
    JZ 0x0056ced5                       ; 0056cecb
        ;   XREF to: 0056ced5 (CONDITIONAL_JUMP)  ; LAB_0056ced5
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 0056cecd
    PUSH dword ptr [ESP + 0x8]          ; 0056ced5
        ;   Label: LAB_0056ced5
    CALL core_actor.cpp_FUN_0040cd00    ; 0056ced9
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0056cede
    TEST EAX,EAX                        ; 0056cee1
    JZ 0x0056cffb                       ; 0056cee3
        ;   XREF to: 0056cffb (CONDITIONAL_JUMP)  ; LAB_0056cffb
    PUSH 0x0                            ; 0056cee9
    PUSH 0x0                            ; 0056ceeb
    PUSH 0x0                            ; 0056ceed
    PUSH EBX                            ; 0056ceef
    LEA EAX,[ESI + 0xc]                 ; 0056cef0
    PUSH EAX                            ; 0056cef3
    LEA EAX,[EBX + 0x30]                ; 0056cef4
    PUSH EAX                            ; 0056cef7
    LEA EAX,[EBX + 0x20]                ; 0056cef8
    PUSH EAX                            ; 0056cefb
    CALL core_bodypart.cpp_FUN_00418940 ; 0056cefc
        ;   XREF to: 00418940 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_FUN_00418940(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 0056cf01
    MOV EDI,EAX                         ; 0056cf04
    PUSH 0x0                            ; 0056cf06
    MOV EBP,EAX                         ; 0056cf08
    MOV EAX,dword ptr [ESI]             ; 0056cf0a
    PUSH EAX                            ; 0056cf0c
    PUSH EDI                            ; 0056cf0d
    PUSH EBX                            ; 0056cf0e
    CALL core_charactr.cpp_FUN_00431210 ; 0056cf0f
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    MOV EAX,dword ptr [ESI]             ; 0056cf14
    MOV EDX,dword ptr [EBX + 0xc270]    ; 0056cf16
    ADD ESP,0x10                        ; 0056cf1c
    CMP EAX,EDX                         ; 0056cf1f
    JNZ 0x0056cf36                      ; 0056cf21
        ;   XREF to: 0056cf36 (CONDITIONAL_JUMP)  ; LAB_0056cf36
    PUSH 0x0                            ; 0056cf23
    MOV ECX,dword ptr [EBX + 0xc274]    ; 0056cf25
    PUSH ECX                            ; 0056cf2b
    PUSH EDI                            ; 0056cf2c
    PUSH EBX                            ; 0056cf2d
    CALL core_charactr.cpp_FUN_00431210 ; 0056cf2e
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 0056cf33
    MOV EDI,dword ptr [EBX + 0xc278]    ; 0056cf36
        ;   Label: LAB_0056cf36
    CMP EDI,dword ptr [ESI]             ; 0056cf3c
    JNZ 0x0056cf53                      ; 0056cf3e
        ;   XREF to: 0056cf53 (CONDITIONAL_JUMP)  ; LAB_0056cf53
    PUSH 0x0                            ; 0056cf40
    MOV EAX,dword ptr [EBX + 0xc27c]    ; 0056cf42
    PUSH EAX                            ; 0056cf48
    PUSH EBP                            ; 0056cf49
    PUSH EBX                            ; 0056cf4a
    CALL core_charactr.cpp_FUN_00431210 ; 0056cf4b
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 0056cf50
    MOV EDX,dword ptr [EBX + 0xc294]    ; 0056cf53
        ;   Label: LAB_0056cf53
    CMP EDX,dword ptr [ESI]             ; 0056cf59
    JNZ 0x0056cfbf                      ; 0056cf5b
        ;   XREF to: 0056cfbf (CONDITIONAL_JUMP)  ; LAB_0056cfbf
    PUSH 0x0                            ; 0056cf5d
    LEA EDI,[ESI + 0xc]                 ; 0056cf5f
    PUSH EDI                            ; 0056cf62
    MOV ECX,dword ptr [EBX + 0xc278]    ; 0056cf63
    PUSH ECX                            ; 0056cf69
    PUSH EBX                            ; 0056cf6a
    CALL core_charactr.cpp_FUN_004311a0 ; 0056cf6b
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0056cf70
    PUSH 0x0                            ; 0056cf73
    PUSH EDI                            ; 0056cf75
    MOV EAX,dword ptr [EBX + 0xc27c]    ; 0056cf76
    PUSH EAX                            ; 0056cf7c
    PUSH EBX                            ; 0056cf7d
    CALL core_charactr.cpp_FUN_004311a0 ; 0056cf7e
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0056cf83
    PUSH 0x0                            ; 0056cf86
    PUSH EDI                            ; 0056cf88
    MOV EDX,dword ptr [EBX + 0xc270]    ; 0056cf89
    PUSH EDX                            ; 0056cf8f
    PUSH EBX                            ; 0056cf90
    CALL core_charactr.cpp_FUN_004311a0 ; 0056cf91
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0056cf96
    PUSH 0x0                            ; 0056cf99
    PUSH EDI                            ; 0056cf9b
    MOV ECX,dword ptr [EBX + 0xc274]    ; 0056cf9c
    PUSH ECX                            ; 0056cfa2
    PUSH EBX                            ; 0056cfa3
    CALL core_charactr.cpp_FUN_004311a0 ; 0056cfa4
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0056cfa9
    PUSH 0x0                            ; 0056cfac
    PUSH EDI                            ; 0056cfae
    MOV EDI,dword ptr [EBX + 0xc298]    ; 0056cfaf
    PUSH EDI                            ; 0056cfb5
    PUSH EBX                            ; 0056cfb6
    CALL core_charactr.cpp_FUN_004311a0 ; 0056cfb7
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_004311a0(CCharacter * this_ptr, int part_index, CVector3f * initial_velocity, int render_in_background)
    ADD ESP,0x10                        ; 0056cfbc
    PUSH 0x5f2a2e                       ; 0056cfbf | = "limb?.wav"
        ;   Label: LAB_0056cfbf
    PUSH EBX                            ; 0056cfc4
    CALL core_charactr.cpp_FUN_004352e0 ; 0056cfc5
        ;   XREF to: 004352e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_004352e0(CCharacter * this_ptr, char * sound_name)
    ADD ESP,0x8                         ; 0056cfca
    PUSH EBP                            ; 0056cfcd
    CALL core_bodypart.cpp_FUN_00419b90 ; 0056cfce
        ;   XREF to: 00419b90 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_FUN_00419b90(CBodyPart * this_ptr)
    MOV EAX,dword ptr [EBX + 0xc298]    ; 0056cfd3
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0056cfd9
    ADD ESP,0x4                         ; 0056cfe0
    TEST EBP,EBP                        ; 0056cfe3
    JZ 0x0056d0b4                       ; 0056cfe5
        ;   XREF to: 0056d0b4 (CONDITIONAL_JUMP)  ; LAB_0056d0b4
    FLD float ptr [ESI + 0x8]           ; 0056cfeb
        ;   Label: LAB_0056cfeb
    FLD ST0                             ; 0056cfee
    FMUL double ptr [0x005f2a3f]        ; 0056cff0 | DAT_005f2a3f
    FSTP ST1                            ; 0056cff6
    FSTP float ptr [ESI + 0x8]          ; 0056cff8
    MOV EDX,dword ptr [EBX + 0xc298]    ; 0056cffb
        ;   Label: LAB_0056cffb
    MOV EAX,dword ptr [ESI]             ; 0056d001
    CMP EAX,EDX                         ; 0056d003
    JZ 0x0056d0c0                       ; 0056d005
        ;   XREF to: 0056d0c0 (CONDITIONAL_JUMP)  ; LAB_0056d0c0
    CMP EAX,dword ptr [EBX + 0xc290]    ; 0056d00b
    JZ 0x0056d01f                       ; 0056d011
        ;   XREF to: 0056d01f (CONDITIONAL_JUMP)  ; LAB_0056d01f
    CMP EAX,dword ptr [EBX + 0xc294]    ; 0056d013
    JNZ 0x0056d0d8                      ; 0056d019
        ;   XREF to: 0056d0d8 (CONDITIONAL_JUMP)  ; LAB_0056d0d8
    MOV EAX,dword ptr [ESI + 0x4]       ; 0056d01f
        ;   Label: LAB_0056d01f
    MOV dword ptr [ESI + 0x4],EAX       ; 0056d022
    ADD ESP,0xc                         ; 0056d025
        ;   Label: LAB_0056d025
    POP EBP                             ; 0056d028
    POP EDI                             ; 0056d029
    POP ESI                             ; 0056d02a
    POP EBX                             ; 0056d02b
    RET                                 ; 0056d02c
    MOV dword ptr [ESI + 0x4],0x0       ; 0056d02d
        ;   Label: LAB_0056d02d
    ADD ESP,0xc                         ; 0056d034
    POP EBP                             ; 0056d037
    POP EDI                             ; 0056d038
    POP ESI                             ; 0056d039
    POP EBX                             ; 0056d03a
    RET                                 ; 0056d03b
    MOV EAX,dword ptr [EBX + 0xc274]    ; 0056d03c
        ;   Label: caseD_1
    JMP 0x0056cea6                      ; 0056d042
        ;   XREF to: 0056cea6 (UNCONDITIONAL_JUMP)  ; LAB_0056cea6
    MOV EAX,dword ptr [EBX + 0xc278]    ; 0056d047
        ;   Label: caseD_2
    JMP 0x0056cea6                      ; 0056d04d
        ;   XREF to: 0056cea6 (UNCONDITIONAL_JUMP)  ; LAB_0056cea6
    MOV EAX,dword ptr [EBX + 0xc27c]    ; 0056d052
        ;   Label: caseD_3
    JMP 0x0056cea6                      ; 0056d058
        ;   XREF to: 0056cea6 (UNCONDITIONAL_JUMP)  ; LAB_0056cea6
    MOV EAX,dword ptr [EBX + 0xc298]    ; 0056d05d
        ;   Label: caseD_4
    JMP 0x0056cea6                      ; 0056d063
        ;   XREF to: 0056cea6 (UNCONDITIONAL_JUMP)  ; LAB_0056cea6
    MOV EAX,dword ptr [EBX + 0xc294]    ; 0056d068
        ;   Label: caseD_5
    JMP 0x0056cea6                      ; 0056d06e
        ;   XREF to: 0056cea6 (UNCONDITIONAL_JUMP)  ; LAB_0056cea6
    CMP EAX,dword ptr [EBX + 0xc274]    ; 0056d073
        ;   Label: LAB_0056d073
    JZ 0x0056ceb8                       ; 0056d079
        ;   XREF to: 0056ceb8 (CONDITIONAL_JUMP)  ; LAB_0056ceb8
    CMP EAX,dword ptr [EBX + 0xc278]    ; 0056d07f
    JZ 0x0056ceb8                       ; 0056d085
        ;   XREF to: 0056ceb8 (CONDITIONAL_JUMP)  ; LAB_0056ceb8
    CMP EAX,dword ptr [EBX + 0xc27c]    ; 0056d08b
    JZ 0x0056ceb8                       ; 0056d091
        ;   XREF to: 0056ceb8 (CONDITIONAL_JUMP)  ; LAB_0056ceb8
    CMP EAX,dword ptr [EBX + 0xc294]    ; 0056d097
    JZ 0x0056ceb8                       ; 0056d09d
        ;   XREF to: 0056ceb8 (CONDITIONAL_JUMP)  ; LAB_0056ceb8
    CMP EAX,dword ptr [EBX + 0xc298]    ; 0056d0a3
    JZ 0x0056ceb8                       ; 0056d0a9
        ;   XREF to: 0056ceb8 (CONDITIONAL_JUMP)  ; LAB_0056ceb8
    JMP 0x0056cffb                      ; 0056d0af
        ;   XREF to: 0056cffb (UNCONDITIONAL_JUMP)  ; LAB_0056cffb
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 0056d0b4
        ;   Label: LAB_0056d0b4
    JMP 0x0056cfeb                      ; 0056d0bb
        ;   XREF to: 0056cfeb (UNCONDITIONAL_JUMP)  ; LAB_0056cfeb
    FLD float ptr [ESI + 0x4]           ; 0056d0c0
        ;   Label: LAB_0056d0c0
    FLD ST0                             ; 0056d0c3
    FMUL double ptr [0x005f2a4f]        ; 0056d0c5 | DAT_005f2a4f
    FSTP ST1                            ; 0056d0cb
    FSTP float ptr [ESI + 0x4]          ; 0056d0cd
    ADD ESP,0xc                         ; 0056d0d0
    POP EBP                             ; 0056d0d3
    POP EDI                             ; 0056d0d4
    POP ESI                             ; 0056d0d5
    POP EBX                             ; 0056d0d6
    RET                                 ; 0056d0d7
    FLD float ptr [ESI + 0x4]           ; 0056d0d8
        ;   Label: LAB_0056d0d8
    FLD ST0                             ; 0056d0db
    FMUL double ptr [0x005f2a47]        ; 0056d0dd | DAT_005f2a47
    FSTP ST1                            ; 0056d0e3
    FSTP float ptr [ESI + 0x4]          ; 0056d0e5
    ADD ESP,0xc                         ; 0056d0e8
    POP EBP                             ; 0056d0eb
    POP EDI                             ; 0056d0ec
    POP ESI                             ; 0056d0ed
    POP EBX                             ; 0056d0ee
    RET                                 ; 0056d0ef

