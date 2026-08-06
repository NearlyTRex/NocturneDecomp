; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pod_cpp_CPodFile_cleanup_FUN_004f80e0(CPodFile *this_ptr)
;
; Parameters:
; CPodFile *       Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   engine_pod.cpp_CPodFile_FUN_004f7ae0 at 004f7af9
;   engine_pod.cpp_CPodFile_dtor_FUN_004f7ac0 at 004f7ac6
;   engine_pod.cpp_FUN_004f8eb0 at 004f8f25
;
; Called Functions:
;   crt_memory.c_free_FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f80e0
        ;   Label: engine_pod.cpp_CPodFile_cleanup_FUN_004f80e0
    PUSH ESI                            ; 004f80e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f80e2
    MOV EDX,dword ptr [EBX + 0x20c]     ; 004f80e6
    MOV dword ptr [EBX + 0x208],0x0     ; 004f80ec
    TEST EDX,EDX                        ; 004f80f6
    JNZ 0x004f811b                      ; 004f80f8
        ;   XREF to: 004f811b (CONDITIONAL_JUMP)  ; LAB_004f811b
    MOV ESI,dword ptr [EBX + 0x210]     ; 004f80fa
        ;   Label: LAB_004f80fa
    MOV dword ptr [EBX + 0x214],0x0     ; 004f8100
    TEST ESI,ESI                        ; 004f810a
    JNZ 0x004f8130                      ; 004f810c
        ;   XREF to: 004f8130 (CONDITIONAL_JUMP)  ; LAB_004f8130
    MOV dword ptr [EBX],0x0             ; 004f810e
    MOV byte ptr [EBX + 0x4],0x0        ; 004f8114
    POP ESI                             ; 004f8118
    POP EBX                             ; 004f8119
    RET                                 ; 004f811a
    PUSH EDX                            ; 004f811b
        ;   Label: LAB_004f811b
    CALL crt_memory.c_free_FUN_005638d0 ; 004f811c
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    ADD ESP,0x4                         ; 004f8121
    MOV dword ptr [EBX + 0x20c],0x0     ; 004f8124
    JMP 0x004f80fa                      ; 004f812e
        ;   XREF to: 004f80fa (UNCONDITIONAL_JUMP)  ; LAB_004f80fa
    PUSH ESI                            ; 004f8130
        ;   Label: LAB_004f8130
    CALL crt_memory.c_free_FUN_005638d0 ; 004f8131
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    ADD ESP,0x4                         ; 004f8136
    MOV dword ptr [EBX + 0x210],0x0     ; 004f8139
    MOV dword ptr [EBX],0x0             ; 004f8143
    MOV byte ptr [EBX + 0x4],0x0        ; 004f8149
    POP ESI                             ; 004f814d
    POP EBX                             ; 004f814e
    RET                                 ; 004f814f

