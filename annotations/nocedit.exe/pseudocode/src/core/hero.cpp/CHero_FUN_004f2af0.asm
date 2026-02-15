; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_CHero_FUN_004f2af0(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x64]:1  local_64
;
; XREF[6]:
;   core_colonel.cpp_CColonel_process_FUN_0043fa00 at 0043fdb7
;   core_gabriela.cpp_CGabriella_process_FUN_004d2ea0 at 004d3fc8
;   core_haystack.cpp_CHaystack_process_FUN_004f0e40 at 004f1244
;   core_icepick.cpp_CIcePick_process_FUN_004f80b0 at 004f85c3
;   core_stranger.cpp_CStranger_FUN_005c5b90 at 005c5d54
;   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 at 005d907f
;
; Referenced Globals:
;   float FLOAT_0062ec0a = 0.5
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2af0
        ;   Label: core_hero.cpp_CHero_FUN_004f2af0
    PUSH ESI                            ; 004f2af1
    PUSH EDI                            ; 004f2af2
    PUSH EBP                            ; 004f2af3
    MOV EBP,ESP                         ; 004f2af4
    SUB ESP,0x54                        ; 004f2af6
    AND ESP,0xfffffff8                  ; 004f2af9
    LEA EDX,[ESP + 0x4]                 ; 004f2afc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f2b00
    PUSH EDX                            ; 004f2b03
    MOV EDX,dword ptr [EBP + 0x14]      ; 004f2b04
    MOV EAX,dword ptr [EAX + 0x154]     ; 004f2b07
    PUSH EDX                            ; 004f2b0d
    CALL dword ptr [EAX + 0x14]         ; 004f2b0e
    LEA EDX,[EAX + 0xc]                 ; 004f2b11
    FLD float ptr [EAX]                 ; 004f2b14
    FADD float ptr [EDX]                ; 004f2b16
    ADD ESP,0x8                         ; 004f2b18
    FST float ptr [ESP + 0x34]          ; 004f2b1b
    FLD float ptr [EAX + 0x4]           ; 004f2b1f
    FADD float ptr [EDX + 0x4]          ; 004f2b22
    FXCH                                ; 004f2b25
    FLD float ptr [0x0062ec0a]          ; 004f2b27 | FLOAT_0062ec0a
    FXCH                                ; 004f2b2d
    FMUL ST1                            ; 004f2b2f
    FXCH ST2                            ; 004f2b31
    FST float ptr [ESP + 0x38]          ; 004f2b33
    FLD float ptr [EAX + 0x8]           ; 004f2b37
    FADD float ptr [EDX + 0x8]          ; 004f2b3a
    FXCH                                ; 004f2b3d
    FMUL ST2                            ; 004f2b3f
    FXCH                                ; 004f2b41
    FST float ptr [ESP + 0x3c]          ; 004f2b43
    FMULP ST2                           ; 004f2b47
    MOV EBX,0x3fc00000                  ; 004f2b49
    MOV EDI,0x7149f2ca                  ; 004f2b4e
    XOR ECX,ECX                         ; 004f2b53
    FSTP float ptr [ESP + 0x44]         ; 004f2b55
    MOV EAX,dword ptr [ESP + 0x44]      ; 004f2b59
    MOV ESI,dword ptr [EBP + 0x14]      ; 004f2b5d
    MOV dword ptr [ESP + 0x2c],EAX      ; 004f2b60
    LEA EAX,[ESP + 0x28]                ; 004f2b64
    FXCH                                ; 004f2b68
    FSTP float ptr [ESP + 0x40]         ; 004f2b6a
    PUSH EAX                            ; 004f2b6e
    LEA EAX,[ESP + 0x20]                ; 004f2b6f
    MOV dword ptr [ESP + 0x2c],ECX      ; 004f2b73
    PUSH EAX                            ; 004f2b77
    MOV dword ptr [ESP + 0x38],EBX      ; 004f2b78
    XOR EBX,EBX                         ; 004f2b7c
    PUSH ESI                            ; 004f2b7e
    FSTP float ptr [ESP + 0x54]         ; 004f2b7f
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004f2b83
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004f2b88
    XOR ESI,ESI                         ; 004f2b8b
    MOV dword ptr [ESP + 0x4c],EDI      ; 004f2b8d
    XOR EDI,EDI                         ; 004f2b91
    MOV EAX,[0x006810c8]                ; 004f2b93 | g_CDemonSetPtr
        ;   Label: LAB_004f2b93
    CMP ESI,dword ptr [EAX + 0x14d154]  ; 004f2b98 | g_CDemonSetInstance.actor_count
    JL 0x004f2bd2                       ; 004f2b9e
        ;   XREF to: 004f2bd2 (CONDITIONAL_JUMP)  ; LAB_004f2bd2
    TEST EDI,EDI                        ; 004f2ba0
    JZ 0x004f2c2b                       ; 004f2ba2
        ;   XREF to: 004f2c2b (CONDITIONAL_JUMP)  ; LAB_004f2c2b
    PUSH EDI                            ; 004f2ba8
    MOV EAX,dword ptr [EDI + 0x154]     ; 004f2ba9
    CALL dword ptr [EAX + 0x5c]         ; 004f2baf
    ADD ESP,0x4                         ; 004f2bb2
    TEST EAX,EAX                        ; 004f2bb5
    JZ 0x004f2bc6                       ; 004f2bb7
        ;   XREF to: 004f2bc6 (CONDITIONAL_JUMP)  ; LAB_004f2bc6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f2bb9
    MOV dword ptr [EAX + 0xbe38],0x0    ; 004f2bbc
    MOV EAX,0x1                         ; 004f2bc6
        ;   Label: LAB_004f2bc6
    MOV ESP,EBP                         ; 004f2bcb
    POP EBP                             ; 004f2bcd
    POP EDI                             ; 004f2bce
    POP ESI                             ; 004f2bcf
    POP EBX                             ; 004f2bd0
    RET                                 ; 004f2bd1
    LEA EDX,[ESP + 0x1c]                ; 004f2bd2
        ;   Label: LAB_004f2bd2
    PUSH EDX                            ; 004f2bd6
    MOV EDX,dword ptr [EBP + 0x14]      ; 004f2bd7
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x14d158] ; 004f2bda | g_CDemonSetInstance.actors[0]
    PUSH EDX                            ; 004f2be1
    MOV ECX,dword ptr [EAX + 0x154]     ; 004f2be2
    PUSH EAX                            ; 004f2be8
    CALL dword ptr [ECX + 0x58]         ; 004f2be9
    MOV dword ptr [ESP + 0x5c],EAX      ; 004f2bec
    FLD float ptr [ESP + 0x5c]          ; 004f2bf0
    ADD ESP,0xc                         ; 004f2bf4
    FST float ptr [ESP]                 ; 004f2bf7
    FLDZ                                ; 004f2bfa
    FCOMPP                              ; 004f2bfc
    FNSTSW AX                           ; 004f2bfe
    SAHF                                ; 004f2c00
    JA 0x004f2c22                       ; 004f2c01
        ;   XREF to: 004f2c22 (CONDITIONAL_JUMP)  ; LAB_004f2c22
    FLD float ptr [ESP]                 ; 004f2c03
    FCOMP float ptr [ESP + 0x4c]        ; 004f2c06
    FNSTSW AX                           ; 004f2c0a
    SAHF                                ; 004f2c0c
    JNC 0x004f2c22                      ; 004f2c0d
        ;   XREF to: 004f2c22 (CONDITIONAL_JUMP)  ; LAB_004f2c22
    MOV EAX,dword ptr [ESP]             ; 004f2c0f
    MOV dword ptr [ESP + 0x4c],EAX      ; 004f2c12
    MOV EAX,[0x006810c8]                ; 004f2c16 | g_CDemonSetPtr
    MOV EDI,dword ptr [EBX + EAX*0x1 + 0x14d158] ; 004f2c1b | g_CDemonSetInstance.actors[0]
    INC ESI                             ; 004f2c22
        ;   Label: LAB_004f2c22
    ADD EBX,0x4                         ; 004f2c23
    JMP 0x004f2b93                      ; 004f2c26
        ;   XREF to: 004f2b93 (UNCONDITIONAL_JUMP)  ; LAB_004f2b93
    XOR EAX,EAX                         ; 004f2c2b
        ;   Label: LAB_004f2c2b
    MOV ESP,EBP                         ; 004f2c2d
    POP EBP                             ; 004f2c2f
    POP EDI                             ; 004f2c30
    POP ESI                             ; 004f2c31
    POP EBX                             ; 004f2c32
    RET                                 ; 004f2c33

