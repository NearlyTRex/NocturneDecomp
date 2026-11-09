; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CNetGame * __cdecl core_netgame_cpp_CNetGame_ctor_FUN_0050b290(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_netgame.cpp_staticInit_FUN_0050aed0 at 0050aed5
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005b7f5f
;   support_trisock.cpp_CSocket_ctor_FUN_00579000
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0050b290
        ;   Label: core_netgame.cpp_CNetGame_ctor_FUN_0050b290
    PUSH EDI                            ; 0050b291
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050b292
    PUSH 0x5fa6c0                       ; 0050b296
    PUSH 0x2                            ; 0050b29b
    ADD EDX,0x20                        ; 0050b29d
    PUSH EDX                            ; 0050b2a0
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0050b2a1
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    ADD ESP,0xc                         ; 0050b2a6
    ADD EAX,0x160                       ; 0050b2a9
    PUSH EAX                            ; 0050b2ae
    CALL support_trisock.cpp_CSocket_ctor_FUN_00579000 ; 0050b2af
        ;   XREF to: 00579000 (UNCONDITIONAL_CALL)  ; CSocket * support_trisock.cpp_CSocket_ctor_FUN_00579000(CSocket * this_ptr)
    LEA EDX,[EAX + 0xfffffe80]          ; 0050b2b4
    MOV dword ptr [EDX],0x0             ; 0050b2ba
    MOV dword ptr [EDX + 0x4],0x0       ; 0050b2c0
    MOV ESI,0x5e0409                    ; 0050b2c7
    MOV dword ptr [EDX + 0x1c],0x0      ; 0050b2cc
    ADD ESP,0x4                         ; 0050b2d3
    MOV dword ptr [EDX + 0x120],0xffffffff ; 0050b2d6
    LEA EDI,[EDX + 0x8]                 ; 0050b2e0
    MOV dword ptr [EDX + 0x124],0xffffffff ; 0050b2e3
    PUSH EDI                            ; 0050b2ed
    MOV AL,byte ptr [ESI]               ; 0050b2ee
        ;   Label: LAB_0050b2ee
    MOV byte ptr [EDI],AL               ; 0050b2f0
    CMP AL,0x0                          ; 0050b2f2
    JZ 0x0050b306                       ; 0050b2f4
        ;   XREF to: 0050b306 (CONDITIONAL_JUMP)  ; LAB_0050b306
    MOV AL,byte ptr [ESI + 0x1]         ; 0050b2f6
    ADD ESI,0x2                         ; 0050b2f9
    MOV byte ptr [EDI + 0x1],AL         ; 0050b2fc
    ADD EDI,0x2                         ; 0050b2ff
    CMP AL,0x0                          ; 0050b302
    JNZ 0x0050b2ee                      ; 0050b304
        ;   XREF to: 0050b2ee (CONDITIONAL_JUMP)  ; LAB_0050b2ee
    POP EDI                             ; 0050b306
        ;   Label: LAB_0050b306
    MOV EAX,EDX                         ; 0050b307
    MOV dword ptr [EDX + 0x178],0x0     ; 0050b309
    POP EDI                             ; 0050b313
    POP ESI                             ; 0050b314
    RET                                 ; 0050b315

