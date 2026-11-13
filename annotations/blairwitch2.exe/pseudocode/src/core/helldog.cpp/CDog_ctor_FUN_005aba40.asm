; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDog * __cdecl core_helldog_cpp_CDog_ctor_FUN_005aba40(CDog *this_ptr)
;
; Parameters:
; CDog *           Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_helldog.cpp_factoryFuncDog_FUN_005aba10 at 005aba23
;
; Referenced Globals:
;   undefined4 DAT_00600c50
;
; Called Functions:
;   core_basicene.cpp_CBasicEnemy_ctor_FUN_0059e3b0
;   core_helldog.cpp_CDog_processStates_FUN_005abe90
;   core_muzzle.cpp_FUN_0059d6f0
;   core_muzzle.cpp_FUN_0059d7f0
;   core_muzzle.cpp_FUN_0059d990
;   core_muzzle.cpp_FUN_0059dc80
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aba40
        ;   Label: core_helldog.cpp_CDog_ctor_FUN_005aba40
    PUSH ESI                            ; 005aba41
    PUSH EDI                            ; 005aba42
    PUSH EBP                            ; 005aba43
    SUB ESP,0x48                        ; 005aba44
    MOV EBP,dword ptr [ESP + 0x5c]      ; 005aba47
    PUSH EBP                            ; 005aba4b
    CALL core_basicene.cpp_CBasicEnemy_ctor_FUN_0059e3b0 ; 005aba4c
        ;   XREF to: 0059e3b0 (UNCONDITIONAL_CALL)  ; int core_basicene.cpp_CBasicEnemy_ctor_FUN_0059e3b0(CBasicEnemy * this_ptr)
    ADD ESP,0x4                         ; 005aba51
    MOV EBX,EAX                         ; 005aba54
    PUSH 0x5f0cc3                       ; 005aba56
    MOV EBP,EAX                         ; 005aba5b
    ADD EAX,0x2b4                       ; 005aba5d
    PUSH EAX                            ; 005aba62
    MOV dword ptr [EAX + -0x4],0x600c64 ; 005aba63
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 005aba6a
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x3434],0x3f000000 ; 005aba6f
    MOV dword ptr [EBX + 0x1134c],0x3fe00000 ; 005aba79
    MOV dword ptr [EBX + 0xfc],0x0      ; 005aba83
    MOV dword ptr [EBX + 0x113c4],0x3f800000 ; 005aba8d
    MOV dword ptr [EBX + 0x2a8],0x3dcccccd ; 005aba97
    MOV dword ptr [EBX + 0x11380],0x0   ; 005abaa1
    ADD ESP,0x8                         ; 005abaab
    MOV dword ptr [EBX + 0x11384],0x0   ; 005abaae
    PUSH 0x0                            ; 005abab8
    MOV dword ptr [EBX + 0x11388],0x1   ; 005ababa
    PUSH 0x0                            ; 005abac4
    MOV dword ptr [EBX + 0x1138c],0x2   ; 005abac6
    PUSH EBX                            ; 005abad0
    MOV dword ptr [EBX + 0x11390],0x0   ; 005abad1
    CALL core_helldog.cpp_CDog_processStates_FUN_005abe90 ; 005abadb
        ;   XREF to: 005abe90 (UNCONDITIONAL_CALL)  ; void core_helldog.cpp_CDog_processStates_FUN_005abe90(CDog * this_ptr, float delta_time, int mode)
    ADD ESP,0xc                         ; 005abae0
    PUSH 0x5f0cd0                       ; 005abae3
    FLD float ptr [0x00600c50]          ; 005abae8 | DAT_00600c50
    PUSH 0x5f0cd6                       ; 005abaee
    LEA ESI,[EBX + 0x10af8]             ; 005abaf3
    MOV dword ptr [EBX + 0x11398],0x40a00000 ; 005abaf9
    PUSH ESI                            ; 005abb03
    FSTP float ptr [EBX + 0x11394]      ; 005abb04
    CALL core_muzzle.cpp_FUN_0059d6f0   ; 005abb0a
        ;   XREF to: 0059d6f0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d6f0()
    ADD ESP,0xc                         ; 005abb0f
    PUSH 0x5f0ce8                       ; 005abb12
    PUSH 0x5f0cf4                       ; 005abb17
    PUSH ESI                            ; 005abb1c
    CALL core_muzzle.cpp_FUN_0059d7f0   ; 005abb1d
        ;   XREF to: 0059d7f0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d7f0()
    ADD ESP,0xc                         ; 005abb22
    PUSH 0x5f0d02                       ; 005abb25
    PUSH ESI                            ; 005abb2a
    CALL core_muzzle.cpp_FUN_0059d990   ; 005abb2b
        ;   XREF to: 0059d990 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d990()
    ADD ESP,0x8                         ; 005abb30
    PUSH ESI                            ; 005abb33
    ADD EBX,0x10a0c                     ; 005abb34
    CALL core_muzzle.cpp_FUN_0059dc80   ; 005abb3a
        ;   XREF to: 0059dc80 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059dc80()
    MOV dword ptr [EBX + 0x970],0x0     ; 005abb3f
    MOV dword ptr [EBX + 0x9f0],0xffffffff ; 005abb49
    MOV dword ptr [EBX + 0xe50],0x0     ; 005abb53
    MOV dword ptr [EBX + 0xe58],0x40a00000 ; 005abb5d
    MOV dword ptr [EBX + 0xe54],0x3f800000 ; 005abb67
    MOV EDX,0xbe883127                  ; 005abb71
    MOV dword ptr [EBX + 0xffff2a28],0x3fc00000 ; 005abb76
    MOV ECX,0x3e000000                  ; 005abb80
    MOV dword ptr [EBX + 0xffff2a34],0x3f800000 ; 005abb85
    MOV ESI,0x3f00cb29                  ; 005abb8f
    MOV dword ptr [EBX + 0xffff2a38],0x40400000 ; 005abb94
    ADD ESP,0x4                         ; 005abb9e
    MOV dword ptr [EBX + 0x938],0x1     ; 005abba1
    LEA EAX,[ESP + 0x24]                ; 005abbab
    MOV dword ptr [ESP + 0x24],EDX      ; 005abbaf
    MOV dword ptr [ESP + 0x28],ECX      ; 005abbb3
    MOV dword ptr [ESP + 0x2c],ESI      ; 005abbb7
    CMP EBX,EAX                         ; 005abbbb
    JNZ 0x005abd1a                      ; 005abbbd
        ;   XREF to: 005abd1a (CONDITIONAL_JUMP)  ; LAB_005abd1a
    MOV EAX,0x3e000000                  ; 005abbc3
        ;   Label: LAB_005abbc3
    MOV EDX,0x3f00cb29                  ; 005abbc8
    MOV EDI,0x3e883127                  ; 005abbcd
    LEA EBX,[EBP + 0x10a18]             ; 005abbd2
    MOV dword ptr [ESP + 0x4],EAX       ; 005abbd8
    MOV dword ptr [ESP + 0x8],EDX       ; 005abbdc
    MOV EAX,ESP                         ; 005abbe0
    MOV dword ptr [ESP],EDI             ; 005abbe2
    CMP EBX,EAX                         ; 005abbe5
    JZ 0x005abbf9                       ; 005abbe7
        ;   XREF to: 005abbf9 (CONDITIONAL_JUMP)  ; LAB_005abbf9
    MOV dword ptr [EBX],EDI             ; 005abbe9
    MOV EAX,dword ptr [ESP + 0x4]       ; 005abbeb
    MOV dword ptr [EBX + 0x4],EAX       ; 005abbef
    MOV EAX,dword ptr [ESP + 0x8]       ; 005abbf2
    MOV dword ptr [EBX + 0x8],EAX       ; 005abbf6
    MOV ESI,0x3fc90fdb                  ; 005abbf9
        ;   Label: LAB_005abbf9
    LEA EDI,[ESP + 0x30]                ; 005abbfe
    XOR ECX,ECX                         ; 005abc02
    LEA EAX,[ESP + 0x30]                ; 005abc04
    MOV dword ptr [ESP + 0x20],ECX      ; 005abc08
    MOV dword ptr [ESP + 0x1c],ESI      ; 005abc0c
    LEA ESI,[ESP + 0x18]                ; 005abc10
    MOV dword ptr [ESP + 0x18],ECX      ; 005abc14
    LEA EBX,[EBP + 0x10a48]             ; 005abc18
    MOVSD ES:EDI,ESI                    ; 005abc1e
    MOVSD ES:EDI,ESI                    ; 005abc1f
    MOVSD ES:EDI,ESI                    ; 005abc20
    CMP EBX,EAX                         ; 005abc21
    JZ 0x005abc39                       ; 005abc23
        ;   XREF to: 005abc39 (CONDITIONAL_JUMP)  ; LAB_005abc39
    MOV EAX,dword ptr [ESP + 0x30]      ; 005abc25
    MOV dword ptr [EBX],EAX             ; 005abc29
    MOV EAX,dword ptr [ESP + 0x34]      ; 005abc2b
    MOV dword ptr [EBX + 0x4],EAX       ; 005abc2f
    MOV EAX,dword ptr [ESP + 0x38]      ; 005abc32
    MOV dword ptr [EBX + 0x8],EAX       ; 005abc36
    MOV EDX,0x3fc90fdb                  ; 005abc39
        ;   Label: LAB_005abc39
    LEA ESI,[ESP + 0x3c]                ; 005abc3e
    XOR EDI,EDI                         ; 005abc42
    LEA EAX,[ESP + 0xc]                 ; 005abc44
    MOV dword ptr [ESP + 0x44],EDI      ; 005abc48
    MOV dword ptr [ESP + 0x3c],EDI      ; 005abc4c
    LEA EDI,[ESP + 0xc]                 ; 005abc50
    MOV dword ptr [ESP + 0x40],EDX      ; 005abc54
    LEA EBX,[EBP + 0x10a54]             ; 005abc58
    MOVSD ES:EDI,ESI                    ; 005abc5e
    MOVSD ES:EDI,ESI                    ; 005abc5f
    MOVSD ES:EDI,ESI                    ; 005abc60
    CMP EBX,EAX                         ; 005abc61
    JZ 0x005abc79                       ; 005abc63
        ;   XREF to: 005abc79 (CONDITIONAL_JUMP)  ; LAB_005abc79
    MOV EAX,dword ptr [ESP + 0xc]       ; 005abc65
    MOV dword ptr [EBX],EAX             ; 005abc69
    MOV EAX,dword ptr [ESP + 0x10]      ; 005abc6b
    MOV dword ptr [EBX + 0x4],EAX       ; 005abc6f
    MOV EAX,dword ptr [ESP + 0x14]      ; 005abc72
    MOV dword ptr [EBX + 0x8],EAX       ; 005abc76
    MOV ESI,0x5f0d08                    ; 005abc79
        ;   Label: LAB_005abc79
    LEA EDI,[EBP + 0x11444]             ; 005abc7e
    PUSH EDI                            ; 005abc84
    MOV AL,byte ptr [ESI]               ; 005abc85
        ;   Label: LAB_005abc85
    MOV byte ptr [EDI],AL               ; 005abc87
    CMP AL,0x0                          ; 005abc89
    JZ 0x005abc9d                       ; 005abc8b
        ;   XREF to: 005abc9d (CONDITIONAL_JUMP)  ; LAB_005abc9d
    MOV AL,byte ptr [ESI + 0x1]         ; 005abc8d
    ADD ESI,0x2                         ; 005abc90
    MOV byte ptr [EDI + 0x1],AL         ; 005abc93
    ADD EDI,0x2                         ; 005abc96
    CMP AL,0x0                          ; 005abc99
    JNZ 0x005abc85                      ; 005abc9b
        ;   XREF to: 005abc85 (CONDITIONAL_JUMP)  ; LAB_005abc85
    POP EDI                             ; 005abc9d
        ;   Label: LAB_005abc9d
    MOV ESI,0x5f0d15                    ; 005abc9e
    LEA EDI,[EBP + 0x11543]             ; 005abca3
    PUSH EDI                            ; 005abca9
    MOV AL,byte ptr [ESI]               ; 005abcaa
        ;   Label: LAB_005abcaa
    MOV byte ptr [EDI],AL               ; 005abcac
    CMP AL,0x0                          ; 005abcae
    JZ 0x005abcc2                       ; 005abcb0
        ;   XREF to: 005abcc2 (CONDITIONAL_JUMP)  ; LAB_005abcc2
    MOV AL,byte ptr [ESI + 0x1]         ; 005abcb2
    ADD ESI,0x2                         ; 005abcb5
    MOV byte ptr [EDI + 0x1],AL         ; 005abcb8
    ADD EDI,0x2                         ; 005abcbb
    CMP AL,0x0                          ; 005abcbe
    JNZ 0x005abcaa                      ; 005abcc0
        ;   XREF to: 005abcaa (CONDITIONAL_JUMP)  ; LAB_005abcaa
    POP EDI                             ; 005abcc2
        ;   Label: LAB_005abcc2
    MOV ESI,0x5f0d24                    ; 005abcc3
    LEA EDI,[EBP + 0x11741]             ; 005abcc8
    PUSH EDI                            ; 005abcce
    MOV AL,byte ptr [ESI]               ; 005abccf
        ;   Label: LAB_005abccf
    MOV byte ptr [EDI],AL               ; 005abcd1
    CMP AL,0x0                          ; 005abcd3
    JZ 0x005abce7                       ; 005abcd5
        ;   XREF to: 005abce7 (CONDITIONAL_JUMP)  ; LAB_005abce7
    MOV AL,byte ptr [ESI + 0x1]         ; 005abcd7
    ADD ESI,0x2                         ; 005abcda
    MOV byte ptr [EDI + 0x1],AL         ; 005abcdd
    ADD EDI,0x2                         ; 005abce0
    CMP AL,0x0                          ; 005abce3
    JNZ 0x005abccf                      ; 005abce5
        ;   XREF to: 005abccf (CONDITIONAL_JUMP)  ; LAB_005abccf
    POP EDI                             ; 005abce7
        ;   Label: LAB_005abce7
    MOV dword ptr [EBP + 0x11844],0x40e00000 ; 005abce8
    MOV dword ptr [EBP + 0xfc],0x1      ; 005abcf2
    MOV dword ptr [EBP + 0x10a28],0x0   ; 005abcfc
    MOV EAX,EBP                         ; 005abd06
    MOV dword ptr [EBP + 0x1186c],0x0   ; 005abd08
    ADD ESP,0x48                        ; 005abd12
    POP EBP                             ; 005abd15
    POP EDI                             ; 005abd16
    POP ESI                             ; 005abd17
    POP EBX                             ; 005abd18
    RET                                 ; 005abd19
    MOV dword ptr [EBX],EDX             ; 005abd1a
        ;   Label: LAB_005abd1a
    MOV EAX,dword ptr [ESP + 0x28]      ; 005abd1c
    MOV dword ptr [EBX + 0x4],EAX       ; 005abd20
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005abd23
    MOV dword ptr [EBX + 0x8],EAX       ; 005abd27
    JMP 0x005abbc3                      ; 005abd2a
        ;   XREF to: 005abbc3 (UNCONDITIONAL_JUMP)  ; LAB_005abbc3

