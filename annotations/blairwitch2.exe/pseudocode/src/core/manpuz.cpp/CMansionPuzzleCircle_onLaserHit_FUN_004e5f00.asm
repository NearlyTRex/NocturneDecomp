; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_onLaserHit_FUN_004e5f00(CMansionPuzzleCircle *this_ptr,SLaserInfo *laser_info)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; SLaserInfo *     Stack[0x8]:4   laser_info
;
; Referenced Globals:
;   undefined4 DAT_005dc515
;   undefined4 DAT_005dc51d
;
; Called Functions:
;   core_actor.cpp_CDemonActor_onLaserHit_FUN_00409830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5f00
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_onLaserHit_FUN_004e5f00
    PUSH ESI                            ; 004e5f01
    PUSH EDI                            ; 004e5f02
    PUSH EBP                            ; 004e5f03
    MOV EBP,ESP                         ; 004e5f04
    SUB ESP,0x24                        ; 004e5f06
    AND ESP,0xfffffff8                  ; 004e5f09
    MOV EBX,dword ptr [EBP + 0x18]      ; 004e5f0c
    PUSH EBX                            ; 004e5f0f
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e5f10
    PUSH EDX                            ; 004e5f13
    CALL core_actor.cpp_CDemonActor_onLaserHit_FUN_00409830 ; 004e5f14
        ;   XREF to: 00409830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_onLaserHit_FUN_00409830(CDemonActor * this_ptr, SLaserInfo * laser_info)
    ADD ESP,0x8                         ; 004e5f19
    XOR ESI,ESI                         ; 004e5f1c
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e5f1e
    LEA ECX,[EBX + 0x2c]                ; 004e5f21
    ADD EDX,0x14b8                      ; 004e5f24
    FLD float ptr [EDX]                 ; 004e5f2a
        ;   Label: LAB_004e5f2a
    FSUB float ptr [ECX]                ; 004e5f2c
    FMUL ST0                            ; 004e5f2e
    FLD float ptr [EDX + 0x4]           ; 004e5f30
    FSUB float ptr [ECX + 0x4]          ; 004e5f33
    FMUL ST0                            ; 004e5f36
    FLD float ptr [EDX + 0x8]           ; 004e5f38
    FXCH                                ; 004e5f3b
    FADDP ST2,ST0                       ; 004e5f3d
    FSUB float ptr [ECX + 0x8]          ; 004e5f3f
    FMUL ST0                            ; 004e5f42
    FADDP                               ; 004e5f44
    FLD1                                ; 004e5f46
    FCOMPP                              ; 004e5f48
    FNSTSW AX                           ; 004e5f4a
    SAHF                                ; 004e5f4c
    JA 0x004e5fc3                       ; 004e5f4d
        ;   XREF to: 004e5fc3 (CONDITIONAL_JUMP)  ; LAB_004e5fc3
    INC ESI                             ; 004e5f53
    ADD EDX,0x60                        ; 004e5f54
    CMP ESI,0x2                         ; 004e5f57
    JL 0x004e5f2a                       ; 004e5f5a
        ;   XREF to: 004e5f2a (CONDITIONAL_JUMP)  ; LAB_004e5f2a
    CMP dword ptr [EBX + 0x8],0x2       ; 004e5f5c
    JNZ 0x004e5fbc                      ; 004e5f60
        ;   XREF to: 004e5fbc (CONDITIONAL_JUMP)  ; LAB_004e5fbc
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e5f62
    MOV ECX,dword ptr [EBP + 0x14]      ; 004e5f65
    LEA EDI,[EBX + 0x2c]                ; 004e5f68
    XOR ESI,ESI                         ; 004e5f6b
    ADD EDX,0xbfc                       ; 004e5f6d
    ADD ECX,0xc20                       ; 004e5f73
    MOV dword ptr [ESP + 0x18],EDX      ; 004e5f79
    IMUL EDX,ESI,0xb8                   ; 004e5f7d
        ;   Label: LAB_004e5f7d
    FLD float ptr [ECX]                 ; 004e5f83
    FSUB float ptr [EDI]                ; 004e5f85
    FMUL ST0                            ; 004e5f87
    FLD float ptr [ECX + 0x4]           ; 004e5f89
    FSUB float ptr [EDI + 0x4]          ; 004e5f8c
    FMUL ST0                            ; 004e5f8f
    FLD float ptr [ECX + 0x8]           ; 004e5f91
    FXCH                                ; 004e5f94
    FADDP ST2,ST0                       ; 004e5f96
    FSUB float ptr [EDI + 0x8]          ; 004e5f98
    FMUL ST0                            ; 004e5f9b
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e5f9d
    FADDP                               ; 004e5fa1
    ADD EDX,EAX                         ; 004e5fa3
    FCOMP double ptr [0x005dc51d]       ; 004e5fa5 | DAT_005dc51d
    FNSTSW AX                           ; 004e5fab
    SAHF                                ; 004e5fad
    JC 0x004e5fcc                       ; 004e5fae
        ;   XREF to: 004e5fcc (CONDITIONAL_JUMP)  ; LAB_004e5fcc
    INC ESI                             ; 004e5fb0
        ;   Label: LAB_004e5fb0
    ADD ECX,0xb8                        ; 004e5fb1
    CMP ESI,0xc                         ; 004e5fb7
    JL 0x004e5f7d                       ; 004e5fba
        ;   XREF to: 004e5f7d (CONDITIONAL_JUMP)  ; LAB_004e5f7d
    MOV ESP,EBP                         ; 004e5fbc
        ;   Label: LAB_004e5fbc
    POP EBP                             ; 004e5fbe
    POP EDI                             ; 004e5fbf
    POP ESI                             ; 004e5fc0
    POP EBX                             ; 004e5fc1
    RET                                 ; 004e5fc2
    MOV dword ptr [EBX + 0x50],0x3f800000 ; 004e5fc3
        ;   Label: LAB_004e5fc3
    JMP 0x004e5fbc                      ; 004e5fca
        ;   XREF to: 004e5fbc (UNCONDITIONAL_JUMP)  ; LAB_004e5fbc
    FILD dword ptr [EBX + 0xc]          ; 004e5fcc
        ;   Label: LAB_004e5fcc
    FMUL float ptr [EBX]                ; 004e5fcf
    FMUL float ptr [EDX]                ; 004e5fd1
    FLD double ptr [0x005dc515]         ; 004e5fd3 | DAT_005dc515
    FXCH                                ; 004e5fd9
    FMUL ST1                            ; 004e5fdb
    FADD float ptr [EDX + 0x18]         ; 004e5fdd
    FSTP float ptr [EDX + 0x18]         ; 004e5fe0
    FILD dword ptr [EBX + 0x10]         ; 004e5fe3
    FMUL float ptr [EBX]                ; 004e5fe6
    FMUL float ptr [EDX + 0x4]          ; 004e5fe8
    FMUL ST1                            ; 004e5feb
    FADD float ptr [EDX + 0x1c]         ; 004e5fed
    FSTP float ptr [EDX + 0x1c]         ; 004e5ff0
    FILD dword ptr [EBX + 0x14]         ; 004e5ff3
    FMUL float ptr [EBX]                ; 004e5ff6
    FMUL float ptr [EDX + 0x8]          ; 004e5ff8
    FMULP                               ; 004e5ffb
    FADD float ptr [EDX + 0x20]         ; 004e5ffd
    FSTP float ptr [EDX + 0x20]         ; 004e6000
    JMP 0x004e5fb0                      ; 004e6003
        ;   XREF to: 004e5fb0 (UNCONDITIONAL_JUMP)  ; LAB_004e5fb0

