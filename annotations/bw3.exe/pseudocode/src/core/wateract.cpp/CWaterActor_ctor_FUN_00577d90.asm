; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWaterActor * __cdecl core_wateract_cpp_CWaterActor_ctor_FUN_00577d90(CWaterActor *this_ptr)
;
; Parameters:
; CWaterActor *    Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_wateract.cpp_CLava_ctor_FUN_00579020 at 00579025
;   core_wateract.cpp_factoryFuncWaterActor_FUN_00577d60 at 00577d73
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00577d90
        ;   Label: core_wateract.cpp_CWaterActor_ctor_FUN_00577d90
    PUSH EDI                            ; 00577d91
    MOV EDX,dword ptr [ESP + 0xc]       ; 00577d92
    PUSH EDX                            ; 00577d96
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 00577d97
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00577d9c
    PUSH 0x5e60a0                       ; 00577d9f
    PUSH 0x3e8                          ; 00577da4
    ADD EAX,0x2a0                       ; 00577da9
    PUSH EAX                            ; 00577dae
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 00577daf
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    LEA EDX,[EAX + 0xfffffd60]          ; 00577db4
    MOV dword ptr [EDX + 0x154],0x5e5ee4 ; 00577dba
    MOV dword ptr [EDX + 0x158],0x40800000 ; 00577dc4
    MOV dword ptr [EDX + 0x15c],0x3dcccccd ; 00577dce
    MOV dword ptr [EDX + 0x160],0x40800000 ; 00577dd8
    MOV dword ptr [EDX + 0x164],0x8000  ; 00577de2
    MOV dword ptr [EDX + 0x2b22c],0x0   ; 00577dec
    MOV dword ptr [EDX + 0x2b230],0x0   ; 00577df6
    MOV dword ptr [EDX + 0xfc],0x1      ; 00577e00
    MOV dword ptr [EDX + 0xf8],0x0      ; 00577e0a
    MOV dword ptr [EDX + 0x16c],0x3f800000 ; 00577e14
    MOV dword ptr [EDX + 0x170],0x3f800000 ; 00577e1e
    MOV dword ptr [EDX + 0x168],0x0     ; 00577e28
    MOV ESI,0x5d71ed                    ; 00577e32
    MOV dword ptr [EDX + 0x27c],0x0     ; 00577e37
    ADD ESP,0xc                         ; 00577e41
    MOV byte ptr [EDX + 0x174],0x0      ; 00577e44
    LEA EDI,[EDX + 0x1b4]               ; 00577e4b
    MOV byte ptr [EDX + 0x194],0x0      ; 00577e51
    PUSH EDI                            ; 00577e58
    MOV AL,byte ptr [ESI]               ; 00577e59
        ;   Label: LAB_00577e59
    MOV byte ptr [EDI],AL               ; 00577e5b
    CMP AL,0x0                          ; 00577e5d
    JZ 0x00577e71                       ; 00577e5f
        ;   XREF to: 00577e71 (CONDITIONAL_JUMP)  ; LAB_00577e71
    MOV AL,byte ptr [ESI + 0x1]         ; 00577e61
    ADD ESI,0x2                         ; 00577e64
    MOV byte ptr [EDI + 0x1],AL         ; 00577e67
    ADD EDI,0x2                         ; 00577e6a
    CMP AL,0x0                          ; 00577e6d
    JNZ 0x00577e59                      ; 00577e6f
        ;   XREF to: 00577e59 (CONDITIONAL_JUMP)  ; LAB_00577e59
    POP EDI                             ; 00577e71
        ;   Label: LAB_00577e71
    MOV ESI,0x5d71f2                    ; 00577e72
    LEA EDI,[EDX + 0x218]               ; 00577e77
    PUSH EDI                            ; 00577e7d
    MOV AL,byte ptr [ESI]               ; 00577e7e
        ;   Label: LAB_00577e7e
    MOV byte ptr [EDI],AL               ; 00577e80
    CMP AL,0x0                          ; 00577e82
    JZ 0x00577e96                       ; 00577e84
        ;   XREF to: 00577e96 (CONDITIONAL_JUMP)  ; LAB_00577e96
    MOV AL,byte ptr [ESI + 0x1]         ; 00577e86
    ADD ESI,0x2                         ; 00577e89
    MOV byte ptr [EDI + 0x1],AL         ; 00577e8c
    ADD EDI,0x2                         ; 00577e8f
    CMP AL,0x0                          ; 00577e92
    JNZ 0x00577e7e                      ; 00577e94
        ;   XREF to: 00577e7e (CONDITIONAL_JUMP)  ; LAB_00577e7e
    POP EDI                             ; 00577e96
        ;   Label: LAB_00577e96
    MOV dword ptr [EDX + 0x280],0x0     ; 00577e97
    MOV dword ptr [EDX + 0x284],0x3f800000 ; 00577ea1
    MOV dword ptr [EDX + 0x288],0x0     ; 00577eab
    MOV dword ptr [EDX + 0x294],0xff    ; 00577eb5
    MOV dword ptr [EDX + 0x298],0x0     ; 00577ebf
    MOV EAX,dword ptr [EDX + 0x294]     ; 00577ec9
    MOV dword ptr [EDX + 0x290],EAX     ; 00577ecf
    MOV dword ptr [EDX + 0x28c],EAX     ; 00577ed5
    MOV EAX,EDX                         ; 00577edb
    POP EDI                             ; 00577edd
    POP ESI                             ; 00577ede
    RET                                 ; 00577edf

