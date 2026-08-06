; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_CHero_tryInteract_FUN_004b4e90(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x64]:1  local_64
;
; XREF[6]:
;   core_colonel.cpp_CColonel_process_FUN_00439f50 at 0043a307
;   core_gabriela.cpp_CGabriella_process_FUN_00495a20 at 00496b48
;   core_haystack.cpp_CHaystack_process_FUN_004b32d0 at 004b36d4
;   core_icepick.cpp_CIcePick_process_FUN_004b9fe0 at 004ba4f3
;   core_stranger.cpp_CStranger_FUN_0053fc60 at 0053fe24
;   core_svetlana.cpp_CSvetlana_process_FUN_00541d00 at 005421df
;
; Referenced Globals:
;   undefined4 DAT_00585827
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 g_CDemonSet_01e57284.actor_count
;   undefined4 g_CDemonSet_01e57284.actors[0]
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b4e90
        ;   Label: core_hero.cpp_CHero_tryInteract_FUN_004b4e90
    PUSH ESI                            ; 004b4e91
    PUSH EDI                            ; 004b4e92
    PUSH EBP                            ; 004b4e93
    MOV EBP,ESP                         ; 004b4e94
    SUB ESP,0x54                        ; 004b4e96
    AND ESP,0xfffffff8                  ; 004b4e99
    LEA EDX,[ESP + 0x4]                 ; 004b4e9c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b4ea0
    PUSH EDX                            ; 004b4ea3
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b4ea4
    MOV EAX,dword ptr [EAX + 0x14c]     ; 004b4ea7
    PUSH EDX                            ; 004b4ead
    CALL dword ptr [EAX + 0x14]         ; 004b4eae
    LEA EDX,[EAX + 0xc]                 ; 004b4eb1
    FLD float ptr [EAX]                 ; 004b4eb4
    FADD float ptr [EDX]                ; 004b4eb6
    ADD ESP,0x8                         ; 004b4eb8
    FST float ptr [ESP + 0x34]          ; 004b4ebb
    FLD float ptr [EAX + 0x4]           ; 004b4ebf
    FADD float ptr [EDX + 0x4]          ; 004b4ec2
    FXCH                                ; 004b4ec5
    FLD float ptr [0x00585827]          ; 004b4ec7 | DAT_00585827
    FXCH                                ; 004b4ecd
    FMUL ST1                            ; 004b4ecf
    FXCH ST2                            ; 004b4ed1
    FST float ptr [ESP + 0x38]          ; 004b4ed3
    FLD float ptr [EAX + 0x8]           ; 004b4ed7
    FADD float ptr [EDX + 0x8]          ; 004b4eda
    FXCH                                ; 004b4edd
    FMUL ST2                            ; 004b4edf
    FXCH                                ; 004b4ee1
    FST float ptr [ESP + 0x3c]          ; 004b4ee3
    FMULP ST2                           ; 004b4ee7
    MOV EBX,0x3fc00000                  ; 004b4ee9
    MOV EDI,0x7149f2ca                  ; 004b4eee
    XOR ECX,ECX                         ; 004b4ef3
    FSTP float ptr [ESP + 0x44]         ; 004b4ef5
    MOV EAX,dword ptr [ESP + 0x44]      ; 004b4ef9
    MOV ESI,dword ptr [EBP + 0x14]      ; 004b4efd
    MOV dword ptr [ESP + 0x2c],EAX      ; 004b4f00
    LEA EAX,[ESP + 0x28]                ; 004b4f04
    FXCH                                ; 004b4f08
    FSTP float ptr [ESP + 0x40]         ; 004b4f0a
    PUSH EAX                            ; 004b4f0e
    LEA EAX,[ESP + 0x20]                ; 004b4f0f
    MOV dword ptr [ESP + 0x2c],ECX      ; 004b4f13
    PUSH EAX                            ; 004b4f17
    MOV dword ptr [ESP + 0x38],EBX      ; 004b4f18
    XOR EBX,EBX                         ; 004b4f1c
    PUSH ESI                            ; 004b4f1e
    FSTP float ptr [ESP + 0x54]         ; 004b4f1f
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004b4f23
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004b4f28
    XOR ESI,ESI                         ; 004b4f2b
    MOV dword ptr [ESP + 0x4c],EDI      ; 004b4f2d
    XOR EDI,EDI                         ; 004b4f31
    MOV EAX,[0x005be368]                ; 004b4f33 | g_CDemonSet_PTR_005be368
        ;   Label: LAB_004b4f33
    CMP ESI,dword ptr [EAX + 0x14cd6c]  ; 004b4f38 | g_CDemonSet_01e57284.actor_count
    JL 0x004b4f72                       ; 004b4f3e
        ;   XREF to: 004b4f72 (CONDITIONAL_JUMP)  ; LAB_004b4f72
    TEST EDI,EDI                        ; 004b4f40
    JZ 0x004b4fcb                       ; 004b4f42
        ;   XREF to: 004b4fcb (CONDITIONAL_JUMP)  ; LAB_004b4fcb
    PUSH EDI                            ; 004b4f48
    MOV EAX,dword ptr [EDI + 0x14c]     ; 004b4f49
    CALL dword ptr [EAX + 0x5c]         ; 004b4f4f
    ADD ESP,0x4                         ; 004b4f52
    TEST EAX,EAX                        ; 004b4f55
    JZ 0x004b4f66                       ; 004b4f57
        ;   XREF to: 004b4f66 (CONDITIONAL_JUMP)  ; LAB_004b4f66
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b4f59
    MOV dword ptr [EAX + 0xbca0],0x0    ; 004b4f5c
    MOV EAX,0x1                         ; 004b4f66
        ;   Label: LAB_004b4f66
    MOV ESP,EBP                         ; 004b4f6b
    POP EBP                             ; 004b4f6d
    POP EDI                             ; 004b4f6e
    POP ESI                             ; 004b4f6f
    POP EBX                             ; 004b4f70
    RET                                 ; 004b4f71
    LEA EDX,[ESP + 0x1c]                ; 004b4f72
        ;   Label: LAB_004b4f72
    PUSH EDX                            ; 004b4f76
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b4f77
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x14cd70] ; 004b4f7a | g_CDemonSet_01e57284.actors[0]
    PUSH EDX                            ; 004b4f81
    MOV ECX,dword ptr [EAX + 0x14c]     ; 004b4f82
    PUSH EAX                            ; 004b4f88
    CALL dword ptr [ECX + 0x58]         ; 004b4f89
    MOV dword ptr [ESP + 0x5c],EAX      ; 004b4f8c
    FLD float ptr [ESP + 0x5c]          ; 004b4f90
    ADD ESP,0xc                         ; 004b4f94
    FST float ptr [ESP]                 ; 004b4f97
    FLDZ                                ; 004b4f9a
    FCOMPP                              ; 004b4f9c
    FNSTSW AX                           ; 004b4f9e
    SAHF                                ; 004b4fa0
    JA 0x004b4fc2                       ; 004b4fa1
        ;   XREF to: 004b4fc2 (CONDITIONAL_JUMP)  ; LAB_004b4fc2
    FLD float ptr [ESP]                 ; 004b4fa3
    FCOMP float ptr [ESP + 0x4c]        ; 004b4fa6
    FNSTSW AX                           ; 004b4faa
    SAHF                                ; 004b4fac
    JNC 0x004b4fc2                      ; 004b4fad
        ;   XREF to: 004b4fc2 (CONDITIONAL_JUMP)  ; LAB_004b4fc2
    MOV EAX,dword ptr [ESP]             ; 004b4faf
    MOV dword ptr [ESP + 0x4c],EAX      ; 004b4fb2
    MOV EAX,[0x005be368]                ; 004b4fb6 | g_CDemonSet_PTR_005be368
    MOV EDI,dword ptr [EBX + EAX*0x1 + 0x14cd70] ; 004b4fbb | g_CDemonSet_01e57284.actors[0]
    INC ESI                             ; 004b4fc2
        ;   Label: LAB_004b4fc2
    ADD EBX,0x4                         ; 004b4fc3
    JMP 0x004b4f33                      ; 004b4fc6
        ;   XREF to: 004b4f33 (UNCONDITIONAL_JUMP)  ; LAB_004b4f33
    XOR EAX,EAX                         ; 004b4fcb
        ;   Label: LAB_004b4fcb
    MOV ESP,EBP                         ; 004b4fcd
    POP EBP                             ; 004b4fcf
    POP EDI                             ; 004b4fd0
    POP ESI                             ; 004b4fd1
    POP EBX                             ; 004b4fd2
    RET                                 ; 004b4fd3

