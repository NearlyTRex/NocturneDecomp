; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_muzzle_cpp_FUN_0059ded0(int param_1)
;
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_ctor_FUN_00422340 at 004223a6
;
; Referenced Globals:
;   WatcomTypeInfo g_SFollowSlotStructTypeInfo
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 0059ded0
        ;   Label: core_muzzle.cpp_FUN_0059ded0
    PUSH 0x5feba0                       ; 0059ded4 | g_SFollowSlotStructTypeInfo
    PUSH 0x10                           ; 0059ded9
    ADD ECX,0x4                         ; 0059dedb
    PUSH ECX                            ; 0059dede
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0059dedf
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    LEA ECX,[EAX + -0x4]                ; 0059dee4
    ADD ESP,0xc                         ; 0059dee7
    LEA EDX,[ECX + 0x4]                 ; 0059deea
    MOV dword ptr [ECX + 0x3c4],0x0     ; 0059deed
    MOV EAX,EDX                         ; 0059def7
    ADD EDX,0x3c0                       ; 0059def9
    MOV dword ptr [EAX],0x0             ; 0059deff
        ;   Label: LAB_0059deff
    ADD EAX,0x3c                        ; 0059df05
    MOV dword ptr [EAX + -0x38],0x0     ; 0059df08
    MOV dword ptr [EAX + -0x1c],0x0     ; 0059df0f
    MOV dword ptr [EAX + -0x18],0x0     ; 0059df16
    MOV dword ptr [EAX + -0x14],0x0     ; 0059df1d
    MOV dword ptr [EAX + -0x10],0x0     ; 0059df24
    MOV dword ptr [EAX + -0x4],0x0      ; 0059df2b
    MOV dword ptr [EAX + -0xc],0x0      ; 0059df32
    MOV dword ptr [EAX + -0x8],0x0      ; 0059df39
    CMP EAX,EDX                         ; 0059df40
    JNZ 0x0059deff                      ; 0059df42
        ;   XREF to: 0059deff (CONDITIONAL_JUMP)  ; LAB_0059deff
    MOV dword ptr [ECX + 0x3cc],0x3f000000 ; 0059df44
    MOV dword ptr [ECX + 0x3d0],0x40400000 ; 0059df4e
    MOV EAX,ECX                         ; 0059df58
    MOV EDX,dword ptr [ECX + 0x3cc]     ; 0059df5a
    MOV dword ptr [ECX + 0x3c8],EDX     ; 0059df60
    RET                                 ; 0059df66

