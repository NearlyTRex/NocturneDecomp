; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMattanntote * core_mattnntt_cpp_CMattanntote_ctor_FUN_00591ba0(CMattanntote *this_ptr)
;
; Parameters:
; CMattanntote *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_mattnntt.cpp_factoryFuncMattanntote_FUN_00591b70 at 00591b83
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00488fd0
;   core_skeleton.cpp_FUN_0054eae0
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00591ba0
        ;   Label: core_mattnntt.cpp_CMattanntote_ctor_FUN_00591ba0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00591ba1
    PUSH EBX                            ; 00591ba5
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00488fd0 ; 00591ba6
        ;   XREF to: 00488fd0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00488fd0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00591bab
    PUSH 0x5dbca0                       ; 00591bae
    PUSH 0xc                            ; 00591bb3
    ADD EAX,0xd0b8                      ; 00591bb5
    PUSH EAX                            ; 00591bba
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 00591bbb
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    ADD ESP,0xc                         ; 00591bc0
    LEA EBX,[EAX + 0xffff2f48]          ; 00591bc3
    PUSH 0x5d8f28                       ; 00591bc9
    LEA EAX,[EBX + 0x158]               ; 00591bce
    PUSH EAX                            ; 00591bd4
    MOV dword ptr [EBX + 0x154],0x5e7394 ; 00591bd5
    CALL core_skeleton.cpp_FUN_0054eae0 ; 00591bdf
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054eae0()
    MOV dword ptr [EBX + 0x326c],0x3f000000 ; 00591be4
    MOV dword ptr [EBX + 0x3270],0x3f800000 ; 00591bee
    MOV dword ptr [EBX + 0xd054],0x0    ; 00591bf8
    MOV dword ptr [EBX + 0xd050],0x0    ; 00591c02
    MOV dword ptr [EBX + 0x252c],0x3fc90fdb ; 00591c0c
    MOV dword ptr [EBX + 0xfc],0x1      ; 00591c16
    MOV dword ptr [EBX + 0xf8],0x0      ; 00591c20
    MOV dword ptr [EBX + 0xd068],0x1    ; 00591c2a
    MOV dword ptr [EBX + 0xd06c],0x40000000 ; 00591c34
    MOV dword ptr [EBX + 0xd070],0x4b   ; 00591c3e
    MOV dword ptr [EBX + 0xd0a0],0x1    ; 00591c48
    MOV dword ptr [EBX + 0xd08c],0x0    ; 00591c52
    MOV dword ptr [EBX + 0xd090],0x0    ; 00591c5c
    MOV dword ptr [EBX + 0xd098],0x0    ; 00591c66
    MOV dword ptr [EBX + 0xd09c],0x0    ; 00591c70
    MOV dword ptr [EBX + 0xd0a4],0x0    ; 00591c7a
    MOV dword ptr [EBX + 0xd094],0xbf800000 ; 00591c84
    MOV dword ptr [EBX + 0xd060],0x10000 ; 00591c8e
    ADD ESP,0x8                         ; 00591c98
    MOV dword ptr [EBX + 0xd0a8],0x0    ; 00591c9b
    MOV EAX,EBX                         ; 00591ca5
    FLD float ptr [EBX + 0xd06c]        ; 00591ca7
    LEA EDX,[EBX + 0x34]                ; 00591cad
    FSTP float ptr [EBX + 0xd064]       ; 00591cb0
    ADD EAX,0x4                         ; 00591cb6
        ;   Label: LAB_00591cb6
    MOV dword ptr [EAX + 0xf064],0x0    ; 00591cb9
    CMP EAX,EDX                         ; 00591cc3
    JNZ 0x00591cb6                      ; 00591cc5
        ;   XREF to: 00591cb6 (CONDITIONAL_JUMP)  ; LAB_00591cb6
    MOV EAX,EBX                         ; 00591cc7
    LEA EDX,[EBX + 0xa90]               ; 00591cc9
    ADD EAX,0x2a4                       ; 00591ccf
        ;   Label: LAB_00591ccf
    MOV dword ptr [EAX + 0xcf6c],0x3f800000 ; 00591cd4
    MOV dword ptr [EAX + 0xcf70],0x3fc00000 ; 00591cde
    MOV dword ptr [EAX + 0xcf74],0x3f800000 ; 00591ce8
    MOV dword ptr [EAX + 0xcfbc],0x0    ; 00591cf2
    MOV dword ptr [EAX + 0xcfc0],0x0    ; 00591cfc
    CMP EAX,EDX                         ; 00591d06
    JNZ 0x00591ccf                      ; 00591d08
        ;   XREF to: 00591ccf (CONDITIONAL_JUMP)  ; LAB_00591ccf
    MOV EAX,EBX                         ; 00591d0a
    POP EBX                             ; 00591d0c
    RET                                 ; 00591d0d

