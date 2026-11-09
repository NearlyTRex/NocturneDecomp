; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWaterActor * __cdecl core_wateract_cpp_CWaterActor_ctor_FUN_005869a0(CWaterActor *this_ptr)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_wateract.cpp_factoryFuncWaterActor_FUN_00586970 at 00586983
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005869a0
        ;   Label: core_wateract.cpp_CWaterActor_ctor_FUN_005869a0
    PUSH EDI                            ; 005869a1
    MOV EDX,dword ptr [ESP + 0xc]       ; 005869a2
    PUSH EDX                            ; 005869a6
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 005869a7
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005869ac
    PUSH 0x5fddd0                       ; 005869af
    PUSH 0x3e8                          ; 005869b4
    ADD EAX,0x3f8                       ; 005869b9
    PUSH EAX                            ; 005869be
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 005869bf
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    LEA EDX,[EAX + 0xfffffc08]          ; 005869c4
    MOV dword ptr [EDX + 0x2b0],0x5fdcc4 ; 005869ca
    MOV dword ptr [EDX + 0x2b4],0x40800000 ; 005869d4
    MOV dword ptr [EDX + 0x2b8],0x3dcccccd ; 005869de
    MOV dword ptr [EDX + 0x2bc],0x40800000 ; 005869e8
    MOV dword ptr [EDX + 0x2c0],0x8000  ; 005869f2
    MOV dword ptr [EDX + 0x2b384],0x0   ; 005869fc
    MOV dword ptr [EDX + 0x2b388],0x0   ; 00586a06
    MOV dword ptr [EDX + 0xfc],0x1      ; 00586a10
    MOV dword ptr [EDX + 0xf8],0x0      ; 00586a1a
    MOV dword ptr [EDX + 0x2c8],0x3f800000 ; 00586a24
    MOV dword ptr [EDX + 0x2cc],0x3f800000 ; 00586a2e
    MOV dword ptr [EDX + 0x2c4],0x0     ; 00586a38
    MOV ESI,0x5edf22                    ; 00586a42
    MOV dword ptr [EDX + 0x3d8],0x0     ; 00586a47
    ADD ESP,0xc                         ; 00586a51
    MOV byte ptr [EDX + 0x2d0],0x0      ; 00586a54
    LEA EDI,[EDX + 0x310]               ; 00586a5b
    MOV byte ptr [EDX + 0x2f0],0x0      ; 00586a61
    PUSH EDI                            ; 00586a68
    MOV AL,byte ptr [ESI]               ; 00586a69
        ;   Label: LAB_00586a69
    MOV byte ptr [EDI],AL               ; 00586a6b
    CMP AL,0x0                          ; 00586a6d
    JZ 0x00586a81                       ; 00586a6f
        ;   XREF to: 00586a81 (CONDITIONAL_JUMP)  ; LAB_00586a81
    MOV AL,byte ptr [ESI + 0x1]         ; 00586a71
    ADD ESI,0x2                         ; 00586a74
    MOV byte ptr [EDI + 0x1],AL         ; 00586a77
    ADD EDI,0x2                         ; 00586a7a
    CMP AL,0x0                          ; 00586a7d
    JNZ 0x00586a69                      ; 00586a7f
        ;   XREF to: 00586a69 (CONDITIONAL_JUMP)  ; LAB_00586a69
    POP EDI                             ; 00586a81
        ;   Label: LAB_00586a81
    MOV ESI,0x5edf27                    ; 00586a82
    LEA EDI,[EDX + 0x374]               ; 00586a87
    PUSH EDI                            ; 00586a8d
    MOV AL,byte ptr [ESI]               ; 00586a8e
        ;   Label: LAB_00586a8e
    MOV byte ptr [EDI],AL               ; 00586a90
    CMP AL,0x0                          ; 00586a92
    JZ 0x00586aa6                       ; 00586a94
        ;   XREF to: 00586aa6 (CONDITIONAL_JUMP)  ; LAB_00586aa6
    MOV AL,byte ptr [ESI + 0x1]         ; 00586a96
    ADD ESI,0x2                         ; 00586a99
    MOV byte ptr [EDI + 0x1],AL         ; 00586a9c
    ADD EDI,0x2                         ; 00586a9f
    CMP AL,0x0                          ; 00586aa2
    JNZ 0x00586a8e                      ; 00586aa4
        ;   XREF to: 00586a8e (CONDITIONAL_JUMP)  ; LAB_00586a8e
    POP EDI                             ; 00586aa6
        ;   Label: LAB_00586aa6
    MOV dword ptr [EDX + 0x3dc],0x0     ; 00586aa7
    MOV dword ptr [EDX + 0x3e0],0x3f800000 ; 00586ab1
    MOV dword ptr [EDX + 0x3e4],0x0     ; 00586abb
    MOV dword ptr [EDX + 0x3f0],0xff    ; 00586ac5
    MOV EAX,dword ptr [EDX + 0x3f0]     ; 00586acf
    MOV dword ptr [EDX + 0x3ec],EAX     ; 00586ad5
    MOV dword ptr [EDX + 0x3e8],EAX     ; 00586adb
    MOV EAX,EDX                         ; 00586ae1
    POP EDI                             ; 00586ae3
    POP ESI                             ; 00586ae4
    RET                                 ; 00586ae5

