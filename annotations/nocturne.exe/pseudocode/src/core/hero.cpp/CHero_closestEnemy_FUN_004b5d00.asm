; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_hero_cpp_CHero_closestEnemy_FUN_004b5d00(int param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[7]:
;   FUN_004baba0 at 004bacbe
;   FUN_005423c0 at 005424de
;   core_baron.cpp_FUN_00410cc0 at 00410cdb
;   core_colonel.cpp_CColonel_processAI_FUN_0043a470 at 0043a533
;   core_gabriela.cpp_CGabriella_processAI_FUN_00496d10 at 00496de9
;   core_haystack.cpp_CHaystack_updateAI_FUN_004b3880 at 004b394c
;   core_scat.cpp_CScat_updateAI_FUN_004fc610 at 004fc6c6
;
; Referenced Globals:
;   double DOUBLE_005858eb = 2
;   undefined4 DAT_005993b0
;   undefined4 DAT_005be368
;   undefined4 DAT_01ccdc10
;   undefined4 DAT_01fa7e78
;   undefined4 DAT_02dd11c8
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b5d00
        ;   Label: core_hero.cpp_CHero_closestEnemy_FUN_004b5d00
    PUSH ESI                            ; 004b5d01
    PUSH EDI                            ; 004b5d02
    PUSH EBP                            ; 004b5d03
    MOV EBP,ESP                         ; 004b5d04
    SUB ESP,0x98                        ; 004b5d06
    AND ESP,0xfffffff8                  ; 004b5d0c
    MOV EAX,dword ptr [EBP + 0x18]      ; 004b5d0f
    XOR EDX,EDX                         ; 004b5d12
    XOR EDI,EDI                         ; 004b5d14
    MOV dword ptr [EAX],0x461c3f9a      ; 004b5d16
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b5d1c
    XOR ESI,ESI                         ; 004b5d1f
    ADD EAX,0x20                        ; 004b5d21
    MOV dword ptr [ESP + 0x8c],EDX      ; 004b5d24
    MOV dword ptr [ESP + 0x94],EAX      ; 004b5d2b
    MOV EAX,[0x005be368]                ; 004b5d32 | DAT_005be368
        ;   Label: LAB_004b5d32
    CMP EDI,dword ptr [EAX + 0x150bf4]  ; 004b5d37 | DAT_01fa7e78
    JL 0x004b5d5b                       ; 004b5d3d
        ;   XREF to: 004b5d5b (CONDITIONAL_JUMP)  ; LAB_004b5d5b
    CMP dword ptr [ESP + 0x8c],0x0      ; 004b5d3f
    JNZ 0x004b5e6e                      ; 004b5d47
        ;   XREF to: 004b5e6e (CONDITIONAL_JUMP)  ; LAB_004b5e6e
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004b5d4d
    MOV ESP,EBP                         ; 004b5d54
    POP EBP                             ; 004b5d56
    POP EDI                             ; 004b5d57
    POP ESI                             ; 004b5d58
    POP EBX                             ; 004b5d59
    RET                                 ; 004b5d5a
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x150bf8] ; 004b5d5b
        ;   Label: LAB_004b5d5b
    MOV EAX,[0x02dd11c8]                ; 004b5d62 | DAT_02dd11c8
    PUSH EAX                            ; 004b5d67
    PUSH EBX                            ; 004b5d68
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004b5d69
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004b5d6e
    TEST EAX,EAX                        ; 004b5d71
    JNZ 0x004b5e65                      ; 004b5d73
        ;   XREF to: 004b5e65 (CONDITIONAL_JUMP)  ; LAB_004b5e65
    MOV EDX,dword ptr [0x01ccdc10]      ; 004b5d79 | DAT_01ccdc10
    PUSH EDX                            ; 004b5d7f
    PUSH EBX                            ; 004b5d80
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004b5d81
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004b5d86
    TEST EAX,EAX                        ; 004b5d89
    JZ 0x004b5d9a                       ; 004b5d8b
        ;   XREF to: 004b5d9a (CONDITIONAL_JUMP)  ; LAB_004b5d9a
    CMP dword ptr [EAX + 0xbd48],0x0    ; 004b5d8d
    JNZ 0x004b5e65                      ; 004b5d94
        ;   XREF to: 004b5e65 (CONDITIONAL_JUMP)  ; LAB_004b5e65
    PUSH EBX                            ; 004b5d9a
        ;   Label: LAB_004b5d9a
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004b5d9b
    CALL dword ptr [EAX + 0x104]        ; 004b5da1
    ADD ESP,0x4                         ; 004b5da7
    TEST EAX,EAX                        ; 004b5daa
    JNZ 0x004b5e65                      ; 004b5dac
        ;   XREF to: 004b5e65 (CONDITIONAL_JUMP)  ; LAB_004b5e65
    PUSH EBX                            ; 004b5db2
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004b5db3
    CALL dword ptr [EAX + 0x68]         ; 004b5db9
    ADD ESP,0x4                         ; 004b5dbc
    TEST EAX,EAX                        ; 004b5dbf
    JNZ 0x004b5e65                      ; 004b5dc1
        ;   XREF to: 004b5e65 (CONDITIONAL_JUMP)  ; LAB_004b5e65
    PUSH 0x5993b0                       ; 004b5dc7 | DAT_005993b0
    PUSH 0xa                            ; 004b5dcc
    LEA EAX,[ESP + 0x8]                 ; 004b5dce
    PUSH EAX                            ; 004b5dd2
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004b5dd3
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 004b5dd8
    MOV EDX,ESP                         ; 004b5ddb
    PUSH EDX                            ; 004b5ddd
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004b5dde
    PUSH EBX                            ; 004b5de4
    CALL dword ptr [EAX + 0x4c]         ; 004b5de5
    ADD ESP,0x8                         ; 004b5de8
    TEST EAX,EAX                        ; 004b5deb
    JLE 0x004b5e65                      ; 004b5ded
        ;   XREF to: 004b5e65 (CONDITIONAL_JUMP)  ; LAB_004b5e65
    MOV EDX,dword ptr [ESP + 0x94]      ; 004b5def
    LEA EAX,[EBX + 0x20]                ; 004b5df6
    FLD float ptr [EDX]                 ; 004b5df9
    FSUB float ptr [EAX]                ; 004b5dfb
    FSTP float ptr [ESP + 0x78]         ; 004b5dfd
    FLD float ptr [EDX + 0x4]           ; 004b5e01
    FSUB float ptr [EAX + 0x4]          ; 004b5e04
    FST float ptr [ESP + 0x7c]          ; 004b5e07
    FLD ST0                             ; 004b5e0b
    FMUL double ptr [0x005858eb]        ; 004b5e0d | DOUBLE_005858eb
    FLD float ptr [EDX + 0x8]           ; 004b5e13
    FSUB float ptr [EAX + 0x8]          ; 004b5e16
    FXCH                                ; 004b5e19
    FSTP ST2                            ; 004b5e1b
    FXCH                                ; 004b5e1d
    FST float ptr [ESP + 0x7c]          ; 004b5e1f
    FMUL float ptr [ESP + 0x7c]         ; 004b5e23
    FLD float ptr [ESP + 0x78]          ; 004b5e27
    FMUL ST0                            ; 004b5e2b
    FADDP                               ; 004b5e2d
    FXCH                                ; 004b5e2f
    FST float ptr [ESP + 0x80]          ; 004b5e31
    FMUL float ptr [ESP + 0x80]         ; 004b5e38
    FADDP                               ; 004b5e3f
    MOV EAX,dword ptr [EBP + 0x18]      ; 004b5e41
    FST float ptr [ESP + 0x90]          ; 004b5e44
    FCOMP float ptr [EAX]               ; 004b5e4b
    FNSTSW AX                           ; 004b5e4d
    SAHF                                ; 004b5e4f
    JNC 0x004b5e65                      ; 004b5e50
        ;   XREF to: 004b5e65 (CONDITIONAL_JUMP)  ; LAB_004b5e65
    MOV EDX,dword ptr [EBP + 0x18]      ; 004b5e52
    MOV EAX,dword ptr [ESP + 0x90]      ; 004b5e55
    MOV dword ptr [ESP + 0x8c],EBX      ; 004b5e5c
    MOV dword ptr [EDX],EAX             ; 004b5e63
    INC EDI                             ; 004b5e65
        ;   Label: LAB_004b5e65
    ADD ESI,0x4                         ; 004b5e66
    JMP 0x004b5d32                      ; 004b5e69
        ;   XREF to: 004b5d32 (UNCONDITIONAL_JUMP)  ; LAB_004b5d32
    MOV EAX,dword ptr [EBP + 0x18]      ; 004b5e6e
        ;   Label: LAB_004b5e6e
    FLD float ptr [EAX]                 ; 004b5e71
    FSQRT                               ; 004b5e73
    MOV EAX,dword ptr [EBP + 0x18]      ; 004b5e75
    FSTP float ptr [EAX]                ; 004b5e78
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004b5e7a
    MOV ESP,EBP                         ; 004b5e81
    POP EBP                             ; 004b5e83
    POP EDI                             ; 004b5e84
    POP ESI                             ; 004b5e85
    POP EBX                             ; 004b5e86
    RET                                 ; 004b5e87

