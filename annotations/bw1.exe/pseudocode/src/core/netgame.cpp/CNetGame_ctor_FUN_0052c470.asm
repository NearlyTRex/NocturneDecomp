; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CNetGame * __cdecl core_netgame_cpp_CNetGame_ctor_FUN_0052c470(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_netgame.cpp_staticInit_FUN_0052c0a0 at 0052c0a5
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005c0357
;   support_trisock.cpp_CSocket_ctor_FUN_0059c8e0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0052c470
        ;   Label: core_netgame.cpp_CNetGame_ctor_FUN_0052c470
    PUSH EDI                            ; 0052c471
    MOV EDX,dword ptr [ESP + 0xc]       ; 0052c472
    PUSH 0x6043c0                       ; 0052c476
    PUSH 0x2                            ; 0052c47b
    ADD EDX,0x20                        ; 0052c47d
    PUSH EDX                            ; 0052c480
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0052c481
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0052c486
    ADD EAX,0x158                       ; 0052c489
    PUSH EAX                            ; 0052c48e
    CALL support_trisock.cpp_CSocket_ctor_FUN_0059c8e0 ; 0052c48f
        ;   XREF to: 0059c8e0 (UNCONDITIONAL_CALL)  ; CSocket * support_trisock.cpp_CSocket_ctor_FUN_0059c8e0(CSocket * this_ptr)
    LEA EDX,[EAX + 0xfffffe88]          ; 0052c494
    MOV dword ptr [EDX],0x0             ; 0052c49a
    MOV dword ptr [EDX + 0x4],0x0       ; 0052c4a0
    MOV ESI,0x5eb664                    ; 0052c4a7
    MOV dword ptr [EDX + 0x1c],0x0      ; 0052c4ac
    ADD ESP,0x4                         ; 0052c4b3
    MOV dword ptr [EDX + 0x118],0xffffffff ; 0052c4b6
    LEA EDI,[EDX + 0x8]                 ; 0052c4c0
    MOV dword ptr [EDX + 0x11c],0xffffffff ; 0052c4c3
    PUSH EDI                            ; 0052c4cd
    MOV AL,byte ptr [ESI]               ; 0052c4ce
        ;   Label: LAB_0052c4ce
    MOV byte ptr [EDI],AL               ; 0052c4d0
    CMP AL,0x0                          ; 0052c4d2
    JZ 0x0052c4e6                       ; 0052c4d4
        ;   XREF to: 0052c4e6 (CONDITIONAL_JUMP)  ; LAB_0052c4e6
    MOV AL,byte ptr [ESI + 0x1]         ; 0052c4d6
    ADD ESI,0x2                         ; 0052c4d9
    MOV byte ptr [EDI + 0x1],AL         ; 0052c4dc
    ADD EDI,0x2                         ; 0052c4df
    CMP AL,0x0                          ; 0052c4e2
    JNZ 0x0052c4ce                      ; 0052c4e4
        ;   XREF to: 0052c4ce (CONDITIONAL_JUMP)  ; LAB_0052c4ce
    POP EDI                             ; 0052c4e6
        ;   Label: LAB_0052c4e6
    MOV EAX,EDX                         ; 0052c4e7
    MOV dword ptr [EDX + 0x170],0x0     ; 0052c4e9
    POP EDI                             ; 0052c4f3
    POP ESI                             ; 0052c4f4
    RET                                 ; 0052c4f5

