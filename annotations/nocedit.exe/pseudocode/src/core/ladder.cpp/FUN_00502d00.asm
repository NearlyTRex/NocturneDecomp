; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_ladder.cpp_FUN_00502d00()
;
;
; Referenced Globals:
;   double DOUBLE_00630e80 = 4
;   double DOUBLE_00630e88 = 0.5
;   undefined4 DAT_006605e8
;   CGame* g_CGamePtr = 02d81a9c
;   CKeys* g_CKeysPtr = 02dcd7d4
;   undefined4 g_CGameInstance.delta_time_float
;   void* g_CKeysPtr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
;   crt_math.c_floor_FUN_005feb90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502d00
        ;   Label: core_ladder.cpp_FUN_00502d00
    SUB ESP,0xc                         ; 00502d01
    MOV EBX,dword ptr [ESP + 0x14]      ; 00502d04
    PUSH 0x1d                           ; 00502d08
    MOV EAX,[0x0067cf44]                ; 00502d0a | CKeys * g_CKeysPtr
    PUSH EAX                            ; 00502d0f | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 00502d10 | void * g_CKeysPtr
    CALL dword ptr [EDX]                ; 00502d12
    ADD ESP,0x8                         ; 00502d14
    TEST EAX,EAX                        ; 00502d17
    JZ 0x00502e44                       ; 00502d19 | LAB_00502e44
        ;   XREF to: 00502e44 (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 00502d1f | CGame * g_CGamePtr
    PUSH 0x4b                           ; 00502d24
    FLD float ptr [EAX + 0x264]         ; 00502d26 | g_CGameInstance.delta_time_float
    MOV EAX,[0x0067cf44]                ; 00502d2c | CKeys * g_CKeysPtr
    FMUL double ptr [0x00630e80]        ; 00502d31 | double DOUBLE_00630e80
    PUSH EAX                            ; 00502d37 | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 00502d38 | void * g_CKeysPtr
    FSTP float ptr [ESP + 0x10]         ; 00502d3a
    CALL dword ptr [EDX]                ; 00502d3e
    ADD ESP,0x8                         ; 00502d40
    TEST EAX,EAX                        ; 00502d43
    JZ 0x00502d57                       ; 00502d45 | LAB_00502d57
        ;   XREF to: 00502d57 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x2d4]         ; 00502d47
    FSUB float ptr [ESP + 0x8]          ; 00502d4d
    FSTP float ptr [EBX + 0x2d4]        ; 00502d51
    PUSH 0x4d                           ; 00502d57
        ;   Label: LAB_00502d57
    MOV EAX,[0x0067cf44]                ; 00502d59 | CKeys * g_CKeysPtr
    PUSH EAX                            ; 00502d5e | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 00502d5f | void * g_CKeysPtr
    CALL dword ptr [EDX]                ; 00502d61
    ADD ESP,0x8                         ; 00502d63
    TEST EAX,EAX                        ; 00502d66
    JZ 0x00502d7a                       ; 00502d68 | LAB_00502d7a
        ;   XREF to: 00502d7a (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x2d4]         ; 00502d6a
    FADD float ptr [ESP + 0x8]          ; 00502d70
    FSTP float ptr [EBX + 0x2d4]        ; 00502d74
    PUSH 0x1e                           ; 00502d7a
        ;   Label: LAB_00502d7a
    MOV EAX,[0x0067cf44]                ; 00502d7c | CKeys * g_CKeysPtr
    PUSH EAX                            ; 00502d81 | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 00502d82 | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 00502d84
    ADD ESP,0x8                         ; 00502d87
    TEST EAX,EAX                        ; 00502d8a
    JZ 0x00502da0                       ; 00502d8c | LAB_00502da0
        ;   XREF to: 00502da0 (CONDITIONAL_JUMP)
    FLD float ptr [0x006605e8]          ; 00502d8e | undefined4 DAT_006605e8
    FSUBR float ptr [EBX + 0x2d8]       ; 00502d94
    FSTP float ptr [EBX + 0x2d8]        ; 00502d9a
    PUSH 0x10                           ; 00502da0
        ;   Label: LAB_00502da0
    MOV EAX,[0x0067cf44]                ; 00502da2 | CKeys * g_CKeysPtr
    PUSH EAX                            ; 00502da7 | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 00502da8 | void * g_CKeysPtr
    CALL dword ptr [EDX + 0x4]          ; 00502daa
    ADD ESP,0x8                         ; 00502dad
    TEST EAX,EAX                        ; 00502db0
    JZ 0x00502dc6                       ; 00502db2 | LAB_00502dc6
        ;   XREF to: 00502dc6 (CONDITIONAL_JUMP)
    FLD float ptr [0x006605e8]          ; 00502db4 | undefined4 DAT_006605e8
    FADD float ptr [EBX + 0x2d8]        ; 00502dba
    FSTP float ptr [EBX + 0x2d8]        ; 00502dc0
    FLD float ptr [EBX + 0x2d4]         ; 00502dc6
        ;   Label: LAB_00502dc6
    FCOMP double ptr [0x00630e88]       ; 00502dcc | double DOUBLE_00630e88
    FNSTSW AX                           ; 00502dd2
    SAHF                                ; 00502dd4
    JNC 0x00502de1                      ; 00502dd5 | LAB_00502de1
        ;   XREF to: 00502de1 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x2d4],0x3f000000 ; 00502dd7
    FLD float ptr [EBX + 0x2d8]         ; 00502de1
        ;   Label: LAB_00502de1
    FCOMP float ptr [0x006605e8]        ; 00502de7 | undefined4 DAT_006605e8
    FNSTSW AX                           ; 00502ded
    SAHF                                ; 00502def
    JNC 0x00502dfd                      ; 00502df0 | LAB_00502dfd
        ;   XREF to: 00502dfd (CONDITIONAL_JUMP)
    MOV EAX,[0x006605e8]                ; 00502df2 | undefined4 DAT_006605e8
    MOV dword ptr [EBX + 0x2d8],EAX     ; 00502df7
    FLD float ptr [EBX + 0x2d8]         ; 00502dfd
        ;   Label: LAB_00502dfd
    FDIV float ptr [0x006605e8]         ; 00502e03 | undefined4 DAT_006605e8
    FADD double ptr [0x00630e88]        ; 00502e09 | double DOUBLE_00630e88
    SUB ESP,0x8                         ; 00502e0f
    FSTP double ptr [ESP]               ; 00502e12
    CALL crt_math.c_floor_FUN_005feb90  ; 00502e15 | double crt_math.c_floor_FUN_005feb90(double input_value)
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x8],EAX       ; 00502e1a
    MOV dword ptr [ESP + 0xc],EDX       ; 00502e1e
    FLD double ptr [ESP + 0x8]          ; 00502e22
    FMUL float ptr [0x006605e8]         ; 00502e26 | undefined4 DAT_006605e8
    MOV dword ptr [EBX + 0x2dc],0x0     ; 00502e2c
    ADD ESP,0x8                         ; 00502e36
    FSTP float ptr [EBX + 0x2d8]        ; 00502e39
    ADD ESP,0xc                         ; 00502e3f
    POP EBX                             ; 00502e42
    RET                                 ; 00502e43
    PUSH EBX                            ; 00502e44
        ;   Label: LAB_00502e44
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 00502e45 | void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00502e4a
    JMP 0x00502dfd                      ; 00502e4d | LAB_00502dfd
        ;   XREF to: 00502dfd (UNCONDITIONAL_JUMP)

