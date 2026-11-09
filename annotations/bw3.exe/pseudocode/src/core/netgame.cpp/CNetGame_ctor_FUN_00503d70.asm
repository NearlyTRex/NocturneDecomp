; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CNetGame * __cdecl core_netgame_cpp_CNetGame_ctor_FUN_00503d70(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_netgame.cpp_staticInit_FUN_005039b0 at 005039b5
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005a30d7
;   support_trisock.cpp_CSocket_ctor_FUN_0056f8d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00503d70
        ;   Label: core_netgame.cpp_CNetGame_ctor_FUN_00503d70
    PUSH EDI                            ; 00503d71
    MOV EDX,dword ptr [ESP + 0xc]       ; 00503d72
    PUSH 0x5e2d60                       ; 00503d76
    PUSH 0x2                            ; 00503d7b
    ADD EDX,0x20                        ; 00503d7d
    PUSH EDX                            ; 00503d80
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 00503d81
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    ADD ESP,0xc                         ; 00503d86
    ADD EAX,0x160                       ; 00503d89
    PUSH EAX                            ; 00503d8e
    CALL support_trisock.cpp_CSocket_ctor_FUN_0056f8d0 ; 00503d8f
        ;   XREF to: 0056f8d0 (UNCONDITIONAL_CALL)  ; CSocket * support_trisock.cpp_CSocket_ctor_FUN_0056f8d0(CSocket * this_ptr)
    LEA EDX,[EAX + 0xfffffe80]          ; 00503d94
    MOV dword ptr [EDX],0x0             ; 00503d9a
    MOV dword ptr [EDX + 0x4],0x0       ; 00503da0
    MOV ESI,0x5ca475                    ; 00503da7
    MOV dword ptr [EDX + 0x1c],0x0      ; 00503dac
    ADD ESP,0x4                         ; 00503db3
    MOV dword ptr [EDX + 0x120],0xffffffff ; 00503db6
    LEA EDI,[EDX + 0x8]                 ; 00503dc0
    MOV dword ptr [EDX + 0x124],0xffffffff ; 00503dc3
    PUSH EDI                            ; 00503dcd
    MOV AL,byte ptr [ESI]               ; 00503dce
        ;   Label: LAB_00503dce
    MOV byte ptr [EDI],AL               ; 00503dd0
    CMP AL,0x0                          ; 00503dd2
    JZ 0x00503de6                       ; 00503dd4
        ;   XREF to: 00503de6 (CONDITIONAL_JUMP)  ; LAB_00503de6
    MOV AL,byte ptr [ESI + 0x1]         ; 00503dd6
    ADD ESI,0x2                         ; 00503dd9
    MOV byte ptr [EDI + 0x1],AL         ; 00503ddc
    ADD EDI,0x2                         ; 00503ddf
    CMP AL,0x0                          ; 00503de2
    JNZ 0x00503dce                      ; 00503de4
        ;   XREF to: 00503dce (CONDITIONAL_JUMP)  ; LAB_00503dce
    POP EDI                             ; 00503de6
        ;   Label: LAB_00503de6
    MOV EAX,EDX                         ; 00503de7
    MOV dword ptr [EDX + 0x178],0x0     ; 00503de9
    POP EDI                             ; 00503df3
    POP ESI                             ; 00503df4
    RET                                 ; 00503df5

