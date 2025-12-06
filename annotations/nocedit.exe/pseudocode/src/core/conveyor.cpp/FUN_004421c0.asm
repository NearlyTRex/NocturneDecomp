; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_conveyor.cpp_FUN_004421c0()
;
;
; Referenced Globals:
;   double DOUBLE_00618ed3 = 4
;   CGame* g_CGamePtr = 02d81a9c
;   CKeys* g_CKeysPtr = 02dcd7d4
;   undefined4 g_CGameInstance.delta_time_float
;   void* g_CKeysPtr
;
; Called Functions:
;   core_platfrm.cpp_FUN_0054ea00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004421c0
        ;   Label: core_conveyor.cpp_FUN_004421c0
    SUB ESP,0x8                         ; 004421c1
    MOV EBX,dword ptr [ESP + 0x10]      ; 004421c4
    PUSH 0x1d                           ; 004421c8
    MOV EAX,[0x0067cf44]                ; 004421ca | CKeys * g_CKeysPtr
    MOV dword ptr [EBX + 0x724],0x4     ; 004421cf
    PUSH EAX                            ; 004421d9 | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 004421da | void * g_CKeysPtr
    CALL dword ptr [EDX]                ; 004421dc
    ADD ESP,0x8                         ; 004421de
    TEST EAX,EAX                        ; 004421e1
    JZ 0x004422da                       ; 004421e3 | LAB_004422da
        ;   XREF to: 004422da (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 004421e9 | CGame * g_CGamePtr
    PUSH 0x4b                           ; 004421ee
    FLD float ptr [EAX + 0x264]         ; 004421f0 | g_CGameInstance.delta_time_float
    MOV EAX,[0x0067cf44]                ; 004421f6 | CKeys * g_CKeysPtr
    FMUL double ptr [0x00618ed3]        ; 004421fb | double DOUBLE_00618ed3
    PUSH EAX                            ; 00442201 | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 00442202 | void * g_CKeysPtr
    FSTP float ptr [ESP + 0xc]          ; 00442204
    CALL dword ptr [EDX]                ; 00442208
    ADD ESP,0x8                         ; 0044220a
    TEST EAX,EAX                        ; 0044220d
    JZ 0x00442221                       ; 0044220f | LAB_00442221
        ;   XREF to: 00442221 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x72c]         ; 00442211
    FSUB float ptr [ESP + 0x4]          ; 00442217
    FSTP float ptr [EBX + 0x72c]        ; 0044221b
    PUSH 0x4d                           ; 00442221
        ;   Label: LAB_00442221
    MOV EAX,[0x0067cf44]                ; 00442223 | CKeys * g_CKeysPtr
    PUSH EAX                            ; 00442228 | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 00442229 | void * g_CKeysPtr
    CALL dword ptr [EDX]                ; 0044222b
    ADD ESP,0x8                         ; 0044222d
    TEST EAX,EAX                        ; 00442230
    JZ 0x00442244                       ; 00442232 | LAB_00442244
        ;   XREF to: 00442244 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x72c]         ; 00442234
    FADD float ptr [ESP + 0x4]          ; 0044223a
    FSTP float ptr [EBX + 0x72c]        ; 0044223e
    PUSH 0x50                           ; 00442244
        ;   Label: LAB_00442244
    MOV EAX,[0x0067cf44]                ; 00442246 | CKeys * g_CKeysPtr
    PUSH EAX                            ; 0044224b | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 0044224c | void * g_CKeysPtr
    CALL dword ptr [EDX]                ; 0044224e
    ADD ESP,0x8                         ; 00442250
    TEST EAX,EAX                        ; 00442253
    JZ 0x00442267                       ; 00442255 | LAB_00442267
        ;   XREF to: 00442267 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x734]         ; 00442257
    FSUB float ptr [ESP + 0x4]          ; 0044225d
    FSTP float ptr [EBX + 0x734]        ; 00442261
    PUSH 0x48                           ; 00442267
        ;   Label: LAB_00442267
    MOV EAX,[0x0067cf44]                ; 00442269 | CKeys * g_CKeysPtr
    PUSH EAX                            ; 0044226e | void * g_CKeysPtr
    MOV EDX,dword ptr [EAX]             ; 0044226f | void * g_CKeysPtr
    CALL dword ptr [EDX]                ; 00442271
    ADD ESP,0x8                         ; 00442273
    TEST EAX,EAX                        ; 00442276
    JZ 0x0044228a                       ; 00442278 | LAB_0044228a
        ;   XREF to: 0044228a (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x734]         ; 0044227a
    FADD float ptr [ESP + 0x4]          ; 00442280
    FSTP float ptr [EBX + 0x734]        ; 00442284
    MOV EDX,0x3f000000                  ; 0044228a
        ;   Label: LAB_0044228a
    MOV ECX,dword ptr [EBX + 0x72c]     ; 0044228f
    MOV dword ptr [ESP],EDX             ; 00442295
    CMP ECX,EDX                         ; 00442298
    JGE 0x004422a2                      ; 0044229a | LAB_004422a2
        ;   XREF to: 004422a2 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x72c],EDX     ; 0044229c
    FLD float ptr [EBX + 0x730]         ; 004422a2
        ;   Label: LAB_004422a2
    FCOMP float ptr [ESP]               ; 004422a8
    FNSTSW AX                           ; 004422ab
    SAHF                                ; 004422ad
    JNC 0x004422b9                      ; 004422ae | LAB_004422b9
        ;   XREF to: 004422b9 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP]             ; 004422b0
    MOV dword ptr [EBX + 0x730],EAX     ; 004422b3
    FLD float ptr [EBX + 0x734]         ; 004422b9
        ;   Label: LAB_004422b9
    FCOMP float ptr [ESP]               ; 004422bf
    FNSTSW AX                           ; 004422c2
    SAHF                                ; 004422c4
    JC 0x004422cc                       ; 004422c5 | LAB_004422cc
        ;   XREF to: 004422cc (CONDITIONAL_JUMP)
    ADD ESP,0x8                         ; 004422c7
    POP EBX                             ; 004422ca
    RET                                 ; 004422cb
    MOV EAX,dword ptr [ESP]             ; 004422cc
        ;   Label: LAB_004422cc
    MOV dword ptr [EBX + 0x734],EAX     ; 004422cf
    ADD ESP,0x8                         ; 004422d5
    POP EBX                             ; 004422d8
    RET                                 ; 004422d9
    PUSH EBX                            ; 004422da
        ;   Label: LAB_004422da
    CALL core_platfrm.cpp_FUN_0054ea00  ; 004422db | undefined core_platfrm.cpp_FUN_0054ea00()
        ;   XREF to: 0054ea00 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004422e0
    ADD ESP,0x8                         ; 004422e3
    POP EBX                             ; 004422e6
    RET                                 ; 004422e7

