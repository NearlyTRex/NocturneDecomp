; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_zombie_cpp_classifyObjectShape_FUN_005f8e50(CVector3f *dimensions)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   dimensions
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[1]:
;   core_zombie.cpp_CZombie_processPickup_FUN_005fb530 at 005fbb6e
;
; Referenced Globals:
;   double DOUBLE_0065845d = 2
;   double DOUBLE_00658465 = 0.700000000000000
;   double DOUBLE_0065846d = 6
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005f8e50
        ;   Label: core_zombie.cpp_classifyObjectShape_FUN_005f8e50
    MOV EBP,ESP                         ; 005f8e51
    SUB ESP,0x28                        ; 005f8e53
    AND ESP,0xfffffff8                  ; 005f8e56
    MOV EDX,dword ptr [EBP + 0x8]       ; 005f8e59
    FLD float ptr [EDX]                 ; 005f8e5c
    FST double ptr [ESP + 0x8]          ; 005f8e5e
    FCOMP double ptr [0x0065845d]       ; 005f8e62 | DOUBLE_0065845d
    FNSTSW AX                           ; 005f8e68
    SAHF                                ; 005f8e6a
    JC 0x005f8f28                       ; 005f8e6b
        ;   XREF to: 005f8f28 (CONDITIONAL_JUMP)  ; LAB_005f8f28
    FLD float ptr [EDX]                 ; 005f8e71
        ;   Label: LAB_005f8e71
    FLD1                                ; 005f8e73
    FCOMPP                              ; 005f8e75
    FNSTSW AX                           ; 005f8e77
    SAHF                                ; 005f8e79
    JBE 0x005f8ec2                      ; 005f8e7a
        ;   XREF to: 005f8ec2 (CONDITIONAL_JUMP)  ; LAB_005f8ec2
    FLD float ptr [EDX + 0x4]           ; 005f8e7c
    FLD1                                ; 005f8e7f
    FCOMPP                              ; 005f8e81
    FNSTSW AX                           ; 005f8e83
    SAHF                                ; 005f8e85
    JBE 0x005f8ec2                      ; 005f8e86
        ;   XREF to: 005f8ec2 (CONDITIONAL_JUMP)  ; LAB_005f8ec2
    FLD float ptr [EDX + 0x8]           ; 005f8e88
    FST double ptr [ESP + 0x20]         ; 005f8e8b
    FCOMP double ptr [0x0065845d]       ; 005f8e8f | DOUBLE_0065845d
    FNSTSW AX                           ; 005f8e95
    SAHF                                ; 005f8e97
    JBE 0x005f8ec2                      ; 005f8e98
        ;   XREF to: 005f8ec2 (CONDITIONAL_JUMP)  ; LAB_005f8ec2
    FLD double ptr [ESP + 0x20]         ; 005f8e9a
    FCOMP double ptr [0x0065846d]       ; 005f8e9e | DOUBLE_0065846d
    FNSTSW AX                           ; 005f8ea4
    SAHF                                ; 005f8ea6
    JNC 0x005f8ec2                      ; 005f8ea7
        ;   XREF to: 005f8ec2 (CONDITIONAL_JUMP)  ; LAB_005f8ec2
    FLD float ptr [EDX + 0x8]           ; 005f8ea9
    FCOMP float ptr [EDX]               ; 005f8eac
    FNSTSW AX                           ; 005f8eae
    SAHF                                ; 005f8eb0
    JBE 0x005f8ec2                      ; 005f8eb1
        ;   XREF to: 005f8ec2 (CONDITIONAL_JUMP)  ; LAB_005f8ec2
    FLD float ptr [EDX + 0x8]           ; 005f8eb3
    FCOMP float ptr [EDX + 0x4]         ; 005f8eb6
    FNSTSW AX                           ; 005f8eb9
    SAHF                                ; 005f8ebb
    JA 0x005f8f91                       ; 005f8ebc
        ;   XREF to: 005f8f91 (CONDITIONAL_JUMP)  ; LAB_005f8f91
    FLD float ptr [EDX]                 ; 005f8ec2
        ;   Label: LAB_005f8ec2
    FLD1                                ; 005f8ec4
    FCOMPP                              ; 005f8ec6
    FNSTSW AX                           ; 005f8ec8
    SAHF                                ; 005f8eca
    JBE 0x005f8f8b                      ; 005f8ecb
        ;   XREF to: 005f8f8b (CONDITIONAL_JUMP)  ; LAB_005f8f8b
    FLD float ptr [EDX + 0x4]           ; 005f8ed1
    FLD1                                ; 005f8ed4
    FCOMPP                              ; 005f8ed6
    FNSTSW AX                           ; 005f8ed8
    SAHF                                ; 005f8eda
    JBE 0x005f8f8b                      ; 005f8edb
        ;   XREF to: 005f8f8b (CONDITIONAL_JUMP)  ; LAB_005f8f8b
    FLD1                                ; 005f8ee1
    FLD float ptr [EDX + 0x8]           ; 005f8ee3
    FSTP double ptr [ESP + 0x10]        ; 005f8ee6
    FCOMP double ptr [ESP + 0x10]       ; 005f8eea
    FNSTSW AX                           ; 005f8eee
    SAHF                                ; 005f8ef0
    JNC 0x005f8f8b                      ; 005f8ef1
        ;   XREF to: 005f8f8b (CONDITIONAL_JUMP)  ; LAB_005f8f8b
    FLD double ptr [ESP + 0x10]         ; 005f8ef7
    FCOMP double ptr [0x0065845d]       ; 005f8efb | DOUBLE_0065845d
    FNSTSW AX                           ; 005f8f01
    SAHF                                ; 005f8f03
    JNC 0x005f8f8b                      ; 005f8f04
        ;   XREF to: 005f8f8b (CONDITIONAL_JUMP)  ; LAB_005f8f8b
    FLD float ptr [EDX + 0x8]           ; 005f8f0a
    FCOMP float ptr [EDX]               ; 005f8f0d
    FNSTSW AX                           ; 005f8f0f
    SAHF                                ; 005f8f11
    JBE 0x005f8f8b                      ; 005f8f12
        ;   XREF to: 005f8f8b (CONDITIONAL_JUMP)  ; LAB_005f8f8b
    FLD float ptr [EDX + 0x8]           ; 005f8f14
    FCOMP float ptr [EDX + 0x4]         ; 005f8f17
    FNSTSW AX                           ; 005f8f1a
    SAHF                                ; 005f8f1c
    JBE 0x005f8f8b                      ; 005f8f1d
        ;   XREF to: 005f8f8b (CONDITIONAL_JUMP)  ; LAB_005f8f8b
    MOV EAX,0x3                         ; 005f8f1f
    MOV ESP,EBP                         ; 005f8f24
    POP EBP                             ; 005f8f26
    RET                                 ; 005f8f27
    FLD float ptr [EDX + 0x4]           ; 005f8f28
        ;   Label: LAB_005f8f28
    FST double ptr [ESP + 0x18]         ; 005f8f2b
    FCOMP double ptr [0x0065845d]       ; 005f8f2f | DOUBLE_0065845d
    FNSTSW AX                           ; 005f8f35
    SAHF                                ; 005f8f37
    JNC 0x005f8e71                      ; 005f8f38
        ;   XREF to: 005f8e71 (CONDITIONAL_JUMP)  ; LAB_005f8e71
    FLD float ptr [EDX + 0x8]           ; 005f8f3e
    FST double ptr [ESP]                ; 005f8f41
    FCOMP double ptr [0x0065845d]       ; 005f8f44 | DOUBLE_0065845d
    FNSTSW AX                           ; 005f8f4a
    SAHF                                ; 005f8f4c
    JNC 0x005f8e71                      ; 005f8f4d
        ;   XREF to: 005f8e71 (CONDITIONAL_JUMP)  ; LAB_005f8e71
    FLD double ptr [ESP + 0x8]          ; 005f8f53
    FCOMP double ptr [0x00658465]       ; 005f8f57 | DOUBLE_00658465
    FNSTSW AX                           ; 005f8f5d
    SAHF                                ; 005f8f5f
    JBE 0x005f8e71                      ; 005f8f60
        ;   XREF to: 005f8e71 (CONDITIONAL_JUMP)  ; LAB_005f8e71
    FLD double ptr [ESP + 0x18]         ; 005f8f66
    FCOMP double ptr [0x00658465]       ; 005f8f6a | DOUBLE_00658465
    FNSTSW AX                           ; 005f8f70
    SAHF                                ; 005f8f72
    JBE 0x005f8e71                      ; 005f8f73
        ;   XREF to: 005f8e71 (CONDITIONAL_JUMP)  ; LAB_005f8e71
    FLD double ptr [ESP]                ; 005f8f79
    FCOMP double ptr [0x00658465]       ; 005f8f7c | DOUBLE_00658465
    FNSTSW AX                           ; 005f8f82
    SAHF                                ; 005f8f84
    JBE 0x005f8e71                      ; 005f8f85
        ;   XREF to: 005f8e71 (CONDITIONAL_JUMP)  ; LAB_005f8e71
    XOR EAX,EAX                         ; 005f8f8b
        ;   Label: LAB_005f8f8b
    MOV ESP,EBP                         ; 005f8f8d
    POP EBP                             ; 005f8f8f
    RET                                 ; 005f8f90
    MOV EAX,0x1                         ; 005f8f91
        ;   Label: LAB_005f8f91
    MOV ESP,EBP                         ; 005f8f96
    POP EBP                             ; 005f8f98
    RET                                 ; 005f8f99

