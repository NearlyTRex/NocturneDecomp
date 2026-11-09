; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_004727f0(int param_1)
;
;
; XREF[2]:
;   core_dtrace.cpp_CDemonRaytrace_dtor_FUN_00472440 at 0047244f
;   core_dtrace.cpp_FUN_004725fe at 00472620
;
; Called Functions:
;   crt_unknown.c_FUN_005b7fce
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004727f0
        ;   Label: core_dtrace.cpp_FUN_004727f0
    PUSH ESI                            ; 004727f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004727f2
    MOV EDX,dword ptr [EBX + 0x8]       ; 004727f6
    TEST EDX,EDX                        ; 004727f9
    JNZ 0x0047281c                      ; 004727fb
        ;   XREF to: 0047281c (CONDITIONAL_JUMP)  ; LAB_0047281c
    MOV ESI,dword ptr [EBX + 0xc]       ; 004727fd
        ;   Label: LAB_004727fd
    TEST ESI,ESI                        ; 00472800
    JNZ 0x00472827                      ; 00472802
        ;   XREF to: 00472827 (CONDITIONAL_JUMP)  ; LAB_00472827
    MOV dword ptr [EBX + 0xc],0x0       ; 00472804
        ;   Label: LAB_00472804
    MOV dword ptr [EBX + 0x4],0x0       ; 0047280b
    MOV dword ptr [EBX + 0x8],0x0       ; 00472812
    POP ESI                             ; 00472819
    POP EBX                             ; 0047281a
    RET                                 ; 0047281b
    PUSH EDX                            ; 0047281c
        ;   Label: LAB_0047281c
    CALL crt_unknown.c_FUN_005b7fce     ; 0047281d
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00472822
    JMP 0x004727fd                      ; 00472825
        ;   XREF to: 004727fd (UNCONDITIONAL_JUMP)  ; LAB_004727fd
    PUSH ESI                            ; 00472827
        ;   Label: LAB_00472827
    CALL crt_unknown.c_FUN_005b7fce     ; 00472828
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0047282d
    JMP 0x00472804                      ; 00472830
        ;   XREF to: 00472804 (UNCONDITIONAL_JUMP)  ; LAB_00472804

