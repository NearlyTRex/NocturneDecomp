; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFirefly_process_FUN_00494ec0(CFirefly *this_ptr)
;
; Parameters:
; CFirefly *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005d53b2
;   undefined4 DAT_005d53ba
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_01c2a370
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.delta_time_float
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_game.cpp_CGame_slamDT_FUN_004bd460
;   core_particle.cpp_FUN_00510ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494ec0
        ;   Label: core_fire.cpp_CFirefly_process_FUN_00494ec0
    PUSH EDI                            ; 00494ec1
    PUSH EBP                            ; 00494ec2
    SUB ESP,0x14                        ; 00494ec3
    MOV EBX,dword ptr [ESP + 0x24]      ; 00494ec6
    CMP dword ptr [EBX + 0x4c],0x0      ; 00494eca
    JNZ 0x00494fd5                      ; 00494ece
        ;   XREF to: 00494fd5 (CONDITIONAL_JUMP)  ; LAB_00494fd5
    MOV dword ptr [EBX + 0x4c],0x1      ; 00494ed4
    MOV EAX,[0x00616494]                ; 00494edb | g_CGamePtr
        ;   Label: LAB_00494edb
    MOV EAX,dword ptr [EAX + 0x284]     ; 00494ee0 | g_CGameInstance.delta_time_float
    MOV EDX,dword ptr [0x01c2a370]      ; 00494ee6 | DAT_01c2a370
    MOV dword ptr [ESP + 0xc],EAX       ; 00494eec
    MOV EAX,dword ptr [EBX + 0x58]      ; 00494ef0
    IMUL EDX                            ; 00494ef3
    SHRD EAX,EDX,0x10                   ; 00494ef5
    MOV dword ptr [ESP + 0x10],EAX      ; 00494ef9
    FILD dword ptr [ESP + 0x10]         ; 00494efd
    FMUL double ptr [0x005d53b2]        ; 00494f01 | DAT_005d53b2
    SUB ESP,0x4                         ; 00494f07
    MOV EDI,dword ptr [0x00616494]      ; 00494f0a | g_CGamePtr
    FSTP float ptr [ESP]                ; 00494f10
    PUSH EDI                            ; 00494f13 | g_CGameInstance
    CALL core_game.cpp_CGame_slamDT_FUN_004bd460 ; 00494f14
        ;   XREF to: 004bd460 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_slamDT_FUN_004bd460(CGame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00494f19
    PUSH EBX                            ; 00494f1c
    CALL core_particle.cpp_FUN_00510ef0 ; 00494f1d
        ;   XREF to: 00510ef0 (UNCONDITIONAL_CALL)  ; undefined core_particle.cpp_FUN_00510ef0()
    FLD float ptr [EBX + 0x48]          ; 00494f22
    ADD ESP,0x4                         ; 00494f25
    FMUL float ptr [0x005d53ba]         ; 00494f28 | DAT_005d53ba
    SUB ESP,0x4                         ; 00494f2e
    FSTP float ptr [ESP]                ; 00494f31
    PUSH 0x0                            ; 00494f34
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00494f36
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    FLD float ptr [EBX + 0x48]          ; 00494f3b
    MOV dword ptr [ESP + 0x18],EAX      ; 00494f3e
    FMUL float ptr [0x005d53ba]         ; 00494f42 | DAT_005d53ba
    FLD float ptr [ESP + 0x18]          ; 00494f48
    FSUB float ptr [EBX + 0x48]         ; 00494f4c
    ADD ESP,0x8                         ; 00494f4f
    FSTP float ptr [ESP + 0x4]          ; 00494f52
    SUB ESP,0x4                         ; 00494f56
    FSTP float ptr [ESP]                ; 00494f59
    PUSH 0x0                            ; 00494f5c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00494f5e
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    FLD float ptr [EBX + 0x48]          ; 00494f63
    MOV dword ptr [ESP + 0x18],EAX      ; 00494f66
    FMUL float ptr [0x005d53ba]         ; 00494f6a | DAT_005d53ba
    FLD float ptr [ESP + 0x18]          ; 00494f70
    FSUB float ptr [EBX + 0x48]         ; 00494f74
    ADD ESP,0x8                         ; 00494f77
    FSTP float ptr [ESP + 0x8]          ; 00494f7a
    SUB ESP,0x4                         ; 00494f7e
    FSTP float ptr [ESP]                ; 00494f81
    PUSH 0x0                            ; 00494f84
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00494f86
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    FLD float ptr [EBX + 0xc]           ; 00494f8b
    FLD float ptr [EBX + 0x10]          ; 00494f8e
    MOV dword ptr [ESP + 0x18],EAX      ; 00494f91
    FLD float ptr [EBX + 0x14]          ; 00494f95
    FLD float ptr [ESP + 0x18]          ; 00494f98
    ADD ESP,0x8                         ; 00494f9c
    MOV EBP,dword ptr [0x00616494]      ; 00494f9f | g_CGamePtr
    PUSH dword ptr [ESP + 0xc]          ; 00494fa5
    FSUB float ptr [EBX + 0x48]         ; 00494fa9
    FXCH ST3                            ; 00494fac
    FADD float ptr [ESP + 0x8]          ; 00494fae
    FXCH ST2                            ; 00494fb2
    FADD float ptr [ESP + 0xc]          ; 00494fb4
    PUSH EBP                            ; 00494fb8 | g_CGameInstance
    FXCH ST2                            ; 00494fb9
    FSTP float ptr [EBX + 0xc]          ; 00494fbb
    FADDP ST2,ST0                       ; 00494fbe
    FSTP float ptr [EBX + 0x10]         ; 00494fc0
    FSTP float ptr [EBX + 0x14]         ; 00494fc3
    CALL core_game.cpp_CGame_slamDT_FUN_004bd460 ; 00494fc6
        ;   XREF to: 004bd460 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_slamDT_FUN_004bd460(CGame * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00494fcb
    ADD ESP,0x14                        ; 00494fce
    POP EBP                             ; 00494fd1
    POP EDI                             ; 00494fd2
    POP EBX                             ; 00494fd3
    RET                                 ; 00494fd4
    MOV EAX,[0x01c2a370]                ; 00494fd5 | DAT_01c2a370
        ;   Label: LAB_00494fd5
    MOV EDX,dword ptr [EBX + 0x58]      ; 00494fda
    MOV ECX,dword ptr [EBX + 0x44]      ; 00494fdd
    IMUL EDX                            ; 00494fe0
    SHRD EAX,EDX,0x10                   ; 00494fe2
    MOV EDX,EAX                         ; 00494fe6
    MOV EAX,ECX                         ; 00494fe8
    IMUL EDX                            ; 00494fea
    SHRD EAX,EDX,0x10                   ; 00494fec
    MOV ECX,dword ptr [EBX + 0x40]      ; 00494ff0
    SUB ECX,EAX                         ; 00494ff3
    MOV dword ptr [EBX + 0x40],ECX      ; 00494ff5
    TEST ECX,ECX                        ; 00494ff8
    JGE 0x00494edb                      ; 00494ffa
        ;   XREF to: 00494edb (CONDITIONAL_JUMP)  ; LAB_00494edb
    MOV dword ptr [EBX + 0x24],0x0      ; 00495000
    MOV dword ptr [EBX + 0x40],0x0      ; 00495007
    JMP 0x00494edb                      ; 0049500e
        ;   XREF to: 00494edb (UNCONDITIONAL_JUMP)  ; LAB_00494edb

