; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dpart_cpp_CDemonPart_free_FUN_00457060(CDemonPart *this_ptr)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dpart.cpp_CDemonPart_alloc_FUN_00456f60 at 00456f71
;   core_dpart.cpp_CDemonPart_dtor_FUN_00456f40 at 00456f46
;
; Called Functions:
;   crt_memory.c_free_FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00457060
        ;   Label: core_dpart.cpp_CDemonPart_free_FUN_00457060
    PUSH ESI                            ; 00457061
    PUSH EBP                            ; 00457062
    MOV EBX,dword ptr [ESP + 0x10]      ; 00457063
    MOV EDX,dword ptr [EBX + 0x2c]      ; 00457067
    TEST EDX,EDX                        ; 0045706a
    JNZ 0x00457090                      ; 0045706c
        ;   XREF to: 00457090 (CONDITIONAL_JUMP)  ; LAB_00457090
    MOV ESI,dword ptr [EBX + 0x34]      ; 0045706e
        ;   Label: LAB_0045706e
    TEST ESI,ESI                        ; 00457071
    JZ 0x00457085                       ; 00457073
        ;   XREF to: 00457085 (CONDITIONAL_JUMP)  ; LAB_00457085
    PUSH ESI                            ; 00457075
    CALL crt_memory.c_free_FUN_005638d0 ; 00457076
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    ADD ESP,0x4                         ; 0045707b
    MOV dword ptr [EBX + 0x34],0x0      ; 0045707e
    MOV EBP,dword ptr [EBX + 0x30]      ; 00457085
        ;   Label: LAB_00457085
    TEST EBP,EBP                        ; 00457088
    JNZ 0x004570a2                      ; 0045708a
        ;   XREF to: 004570a2 (CONDITIONAL_JUMP)  ; LAB_004570a2
    POP EBP                             ; 0045708c
    POP ESI                             ; 0045708d
    POP EBX                             ; 0045708e
    RET                                 ; 0045708f
    PUSH EDX                            ; 00457090
        ;   Label: LAB_00457090
    CALL crt_memory.c_free_FUN_005638d0 ; 00457091
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    ADD ESP,0x4                         ; 00457096
    MOV dword ptr [EBX + 0x2c],0x0      ; 00457099
    JMP 0x0045706e                      ; 004570a0
        ;   XREF to: 0045706e (UNCONDITIONAL_JUMP)  ; LAB_0045706e
    PUSH EBP                            ; 004570a2
        ;   Label: LAB_004570a2
    CALL crt_memory.c_free_FUN_005638d0 ; 004570a3
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_005638d0(void * ptr)
    ADD ESP,0x4                         ; 004570a8
    MOV dword ptr [EBX + 0x30],0x0      ; 004570ab
    POP EBP                             ; 004570b2
    POP ESI                             ; 004570b3
    POP EBX                             ; 004570b4
    RET                                 ; 004570b5

