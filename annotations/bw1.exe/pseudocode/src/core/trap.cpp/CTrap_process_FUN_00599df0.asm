; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trap_cpp_CTrap_process_FUN_00599df0(CTrap *this_ptr,float delta_time)
;
; Parameters:
; CTrap *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CWerewolfClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408bb0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599df0
        ;   Label: core_trap.cpp_CTrap_process_FUN_00599df0
    PUSH ESI                            ; 00599df1
    PUSH EDI                            ; 00599df2
    PUSH EBP                            ; 00599df3
    SUB ESP,0xb4                        ; 00599df4
    MOV EBP,dword ptr [ESP + 0xc8]      ; 00599dfa
    CMP dword ptr [EBP + 0x2d4],0x0     ; 00599e01
    JNZ 0x00599e5c                      ; 00599e08
        ;   XREF to: 00599e5c (CONDITIONAL_JUMP)  ; LAB_00599e5c
    MOV ECX,dword ptr [EBP + 0x2d8]     ; 00599e0a
    TEST ECX,ECX                        ; 00599e10
    JNZ 0x00599e67                      ; 00599e12
        ;   XREF to: 00599e67 (CONDITIONAL_JUMP)  ; LAB_00599e67
    LEA ESI,[ESP + 0x64]                ; 00599e14
        ;   Label: LAB_00599e14
    PUSH EBP                            ; 00599e18
    MOV EAX,dword ptr [EBP + 0x154]     ; 00599e19
    LEA EDI,[ESP + 0x80]                ; 00599e1f
    XOR EBX,EBX                         ; 00599e26
    CALL dword ptr [EAX + 0x1c]         ; 00599e28
    MOV ECX,0x6                         ; 00599e2b
    ADD ESP,0x4                         ; 00599e30
    LEA ESI,[ESP + 0x64]                ; 00599e33
    MOV dword ptr [ESP + 0xb0],EBX      ; 00599e37
    MOV dword ptr [ESP + 0xac],EBX      ; 00599e3e
    MOVSD.REP ES:EDI,ESI                ; 00599e45
    MOV EBX,dword ptr [0x00622c18]      ; 00599e47 | g_CDemonSetPtr
        ;   Label: LAB_00599e47
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00599e4d
    CMP EAX,dword ptr [EBX + 0x150fec]  ; 00599e54
    JL 0x00599ebc                       ; 00599e5a
        ;   XREF to: 00599ebc (CONDITIONAL_JUMP)  ; LAB_00599ebc
    ADD ESP,0xb4                        ; 00599e5c
        ;   Label: LAB_00599e5c
    POP EBP                             ; 00599e62
    POP EDI                             ; 00599e63
    POP ESI                             ; 00599e64
    POP EBX                             ; 00599e65
    RET                                 ; 00599e66
    PUSH ECX                            ; 00599e67
        ;   Label: LAB_00599e67
    MOV EBX,dword ptr [ECX + 0x154]     ; 00599e68
    CALL dword ptr [EBX + 0x10c]        ; 00599e6e
    ADD ESP,0x4                         ; 00599e74
    TEST EAX,EAX                        ; 00599e77
    JZ 0x00599e5c                       ; 00599e79
        ;   XREF to: 00599e5c (CONDITIONAL_JUMP)  ; LAB_00599e5c
    MOV EAX,dword ptr [EBP + 0x2d8]     ; 00599e7b
    MOV dword ptr [EAX + 0xc294],0x0    ; 00599e81
    MOV dword ptr [EBP + 0x2d8],0x0     ; 00599e8b
    JMP 0x00599e14                      ; 00599e95
        ;   XREF to: 00599e14 (UNCONDITIONAL_JUMP)  ; LAB_00599e14
    MOV EDX,dword ptr [ESP + 0xb0]      ; 00599e9a
        ;   Label: LAB_00599e9a
    MOV EAX,dword ptr [ESP + 0xac]      ; 00599ea1
    INC EDX                             ; 00599ea8
    ADD EAX,0x4                         ; 00599ea9
    MOV dword ptr [ESP + 0xb0],EDX      ; 00599eac
    MOV dword ptr [ESP + 0xac],EAX      ; 00599eb3
    JMP 0x00599e47                      ; 00599eba
        ;   XREF to: 00599e47 (UNCONDITIONAL_JUMP)  ; LAB_00599e47
    MOV EDX,dword ptr [ESP + 0xac]      ; 00599ebc
        ;   Label: LAB_00599ebc
    MOV EAX,[0x02c9a594]                ; 00599ec3 | g_CWerewolfClassInfo.name_hash
    ADD EBX,EDX                         ; 00599ec8
    PUSH EAX                            ; 00599eca
    MOV ECX,dword ptr [EBX + 0x150ff0]  ; 00599ecb
    PUSH ECX                            ; 00599ed1
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 00599ed2
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV EBX,EAX                         ; 00599ed7
    ADD ESP,0x8                         ; 00599ed9
    TEST EAX,EAX                        ; 00599edc
    JZ 0x00599e9a                       ; 00599ede
        ;   XREF to: 00599e9a (CONDITIONAL_JUMP)  ; LAB_00599e9a
    CMP dword ptr [EAX + 0xc294],0x0    ; 00599ee0
    JNZ 0x00599e9a                      ; 00599ee7
        ;   XREF to: 00599e9a (CONDITIONAL_JUMP)  ; LAB_00599e9a
    LEA ESI,[ESP + 0x3c]                ; 00599ee9
    PUSH ESI                            ; 00599eed
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0 ; 00599eee
        ;   XREF to: 005593c0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 00599ef3
    LEA ESI,[ESP + 0x3c]                ; 00599ef6
    PUSH ESI                            ; 00599efa
    MOV EAX,dword ptr [EBX + 0x154]     ; 00599efb
    PUSH EBX                            ; 00599f01
    CALL dword ptr [EAX + 0x3c]         ; 00599f02
    ADD ESP,0x8                         ; 00599f05
    FLD float ptr [EBP + 0x24]          ; 00599f08
    FADD float ptr [ESP + 0x8c]         ; 00599f0b
    FCOMP float ptr [EBX + 0x24]        ; 00599f12
    FNSTSW AX                           ; 00599f15
    SAHF                                ; 00599f17
    JC 0x00599e9a                       ; 00599f18
        ;   XREF to: 00599e9a (CONDITIONAL_JUMP)  ; LAB_00599e9a
    FLD float ptr [EBX + 0x24]          ; 00599f1a
    FADD float ptr [ESP + 0x54]         ; 00599f1d
    FLD float ptr [EBP + 0x24]          ; 00599f21
    FADD float ptr [ESP + 0x80]         ; 00599f24
    FCOMPP                              ; 00599f2b
    FNSTSW AX                           ; 00599f2d
    SAHF                                ; 00599f2f
    JA 0x00599e9a                       ; 00599f30
        ;   XREF to: 00599e9a (CONDITIONAL_JUMP)  ; LAB_00599e9a
    LEA ESI,[EBX + 0x20]                ; 00599f36
    PUSH ESI                            ; 00599f39
    PUSH EBP                            ; 00599f3a
    LEA ESI,[ESP + 0x9c]                ; 00599f3b
    LEA EDI,[ESP + 0xa8]                ; 00599f42
    CALL core_actor.cpp_FUN_00408bb0    ; 00599f49
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x9c]                ; 00599f4e
    ADD ESP,0x8                         ; 00599f55
    MOVSD ES:EDI,ESI                    ; 00599f58
    MOVSD ES:EDI,ESI                    ; 00599f59
    MOVSD ES:EDI,ESI                    ; 00599f5a
    FLD float ptr [ESP + 0xa0]          ; 00599f5b
    FADD float ptr [ESP + 0x58]         ; 00599f62
    FCOMP float ptr [ESP + 0x7c]        ; 00599f66
    FNSTSW AX                           ; 00599f6a
    SAHF                                ; 00599f6c
    JC 0x00599e9a                       ; 00599f6d
        ;   XREF to: 00599e9a (CONDITIONAL_JUMP)  ; LAB_00599e9a
    FLD float ptr [ESP + 0xa0]          ; 00599f73
    FSUB float ptr [ESP + 0x58]         ; 00599f7a
    FCOMP float ptr [ESP + 0x88]        ; 00599f7e
    FNSTSW AX                           ; 00599f85
    SAHF                                ; 00599f87
    JA 0x00599e9a                       ; 00599f88
        ;   XREF to: 00599e9a (CONDITIONAL_JUMP)  ; LAB_00599e9a
    FLD float ptr [ESP + 0xa8]          ; 00599f8e
    FADD float ptr [ESP + 0x58]         ; 00599f95
    FCOMP float ptr [ESP + 0x84]        ; 00599f99
    FNSTSW AX                           ; 00599fa0
    SAHF                                ; 00599fa2
    JC 0x00599e9a                       ; 00599fa3
        ;   XREF to: 00599e9a (CONDITIONAL_JUMP)  ; LAB_00599e9a
    FLD float ptr [ESP + 0xa8]          ; 00599fa9
    FSUB float ptr [ESP + 0x58]         ; 00599fb0
    FCOMP float ptr [ESP + 0x90]        ; 00599fb4
    FNSTSW AX                           ; 00599fbb
    SAHF                                ; 00599fbd
    JA 0x00599e9a                       ; 00599fbe
        ;   XREF to: 00599e9a (CONDITIONAL_JUMP)  ; LAB_00599e9a
    MOV dword ptr [EBP + 0x2d8],EBX     ; 00599fc4
    MOV EAX,ESP                         ; 00599fca
    MOV dword ptr [EBX + 0xc298],0x40000000 ; 00599fcc
    PUSH EAX                            ; 00599fd6
    MOV dword ptr [EBX + 0xc294],EBP    ; 00599fd7
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 00599fdd
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00599fe2
    MOV EAX,ESP                         ; 00599fe5
    MOV EDI,0x41200000                  ; 00599fe7
    PUSH EAX                            ; 00599fec
    MOV dword ptr [ESP + 0x8],EDI       ; 00599fed
    PUSH EBX                            ; 00599ff1
    MOV ESI,dword ptr [EBX + 0x154]     ; 00599ff2
    CALL dword ptr [ESI + 0x108]        ; 00599ff8
    ADD ESP,0x8                         ; 00599ffe
    ADD ESP,0xb4                        ; 0059a001
    POP EBP                             ; 0059a007
    POP EDI                             ; 0059a008
    POP ESI                             ; 0059a009
    POP EBX                             ; 0059a00a
    RET                                 ; 0059a00b

