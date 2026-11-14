; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_CDemonCube_allocGeometryMemory_FUN_00457c40(CDemonCube *this_ptr)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dcube.cpp_CDemonCube_load_FUN_00457e50 at 00457f13
;
; Referenced Globals:
;   TerminatedCString s_core_dcube_cpp_005d7b4f
;   TerminatedCString s_CDemonCube_allocMemory_O_005d7b61
;   TerminatedCString s_core_dcube_cpp_005d7b90
;   TerminatedCString s_CDemonCube_allocMemory_O_005d7ba2
;   TerminatedCString s_core_dcube_cpp_005d7bce
;   TerminatedCString s_CDemonCube_allocMemory_O_005d7be0
;   TerminatedCString s_core_dcube_cpp_005d7c14
;   TerminatedCString s_CDemonCube_allocMemory_O_005d7c26
;   TerminatedCString s_core_dcube_cpp_005d7c54
;   TerminatedCString s_CDemonCube_allocMemory_O_005d7c66
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_malloc_FUN_005c08d0
;   crt_memory.c_operator_new_array_FUN_005c1268
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00457c40
        ;   Label: core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00457c40
    PUSH ESI                            ; 00457c41
    PUSH EBP                            ; 00457c42
    MOV EBX,dword ptr [ESP + 0x10]      ; 00457c43
    MOV EDX,dword ptr [EBX + 0x20]      ; 00457c47
    LEA EAX,[EDX*0x4 + 0x0]             ; 00457c4a
    SUB EAX,EDX                         ; 00457c51
    SHL EAX,0x2                         ; 00457c53
    PUSH EAX                            ; 00457c56
    CALL crt_memory.c_operator_new_array_FUN_005c1268 ; 00457c57
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005c1268()
    ADD ESP,0x4                         ; 00457c5c
    MOV dword ptr [EBX + 0x24],EAX      ; 00457c5f
    TEST EAX,EAX                        ; 00457c62
    JZ 0x00457d21                       ; 00457c64
        ;   XREF to: 00457d21 (CONDITIONAL_JUMP)  ; LAB_00457d21
    MOV EAX,dword ptr [EBX + 0x28]      ; 00457c6a
        ;   Label: LAB_00457c6a
    SHL EAX,0x5                         ; 00457c6d
    PUSH EAX                            ; 00457c70
    CALL crt_memory.c_operator_new_array_FUN_005c1268 ; 00457c71
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005c1268()
    ADD ESP,0x4                         ; 00457c76
    MOV dword ptr [EBX + 0x2c],EAX      ; 00457c79
    TEST EAX,EAX                        ; 00457c7c
    JNZ 0x00457ca2                      ; 00457c7e
        ;   XREF to: 00457ca2 (CONDITIONAL_JUMP)  ; LAB_00457ca2
    MOV EBP,0x5d7b90                    ; 00457c80 | = "..\\core\\dcube.cpp"
    MOV EAX,0x602                       ; 00457c85
    PUSH 0x5d7ba2                       ; 00457c8a | = "CDemonCube::allocMemory - Out of tri ..."
    MOV dword ptr [0x01d1d400],EBP      ; 00457c8f | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 00457c95 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00457c9a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00457c9f
    MOV EDX,dword ptr [EBX + 0x28]      ; 00457ca2
        ;   Label: LAB_00457ca2
    PUSH EDX                            ; 00457ca5
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 00457ca6
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 00457cab
    MOV dword ptr [EBX + 0x30],EAX      ; 00457cae
    TEST EAX,EAX                        ; 00457cb1
    JNZ 0x00457cda                      ; 00457cb3
        ;   XREF to: 00457cda (CONDITIONAL_JUMP)  ; LAB_00457cda
    PUSH EDI                            ; 00457cb5
    MOV ESI,0x5d7bce                    ; 00457cb6 | = "..\\core\\dcube.cpp"
    MOV EDI,0x604                       ; 00457cbb
    PUSH 0x5d7be0                       ; 00457cc0 | = "CDemonCube::allocMemory - Out of grou..."
    MOV dword ptr [0x01d1d400],ESI      ; 00457cc5 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00457ccb | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00457cd1
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00457cd6
    POP EDI                             ; 00457cd9
    PUSH 0x40                           ; 00457cda
        ;   Label: LAB_00457cda
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 00457cdc
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 00457ce1
    MOV dword ptr [EBX],EAX             ; 00457ce4
    TEST EAX,EAX                        ; 00457ce6
    JNZ 0x00457d0c                      ; 00457ce8
        ;   XREF to: 00457d0c (CONDITIONAL_JUMP)  ; LAB_00457d0c
    MOV EAX,0x5d7c14                    ; 00457cea | = "..\\core\\dcube.cpp"
    MOV EDX,0x606                       ; 00457cef
    PUSH 0x5d7c26                       ; 00457cf4 | = "CDemonCube::allocMemory - Out of voxe..."
    MOV [0x01d1d400],EAX                ; 00457cf9 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 00457cfe | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00457d04
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00457d09
    PUSH 0x40                           ; 00457d0c
        ;   Label: LAB_00457d0c
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 00457d0e
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 00457d13
    MOV dword ptr [EBX + 0x4],EAX       ; 00457d16
    TEST EAX,EAX                        ; 00457d19
    JZ 0x00457d49                       ; 00457d1b
        ;   XREF to: 00457d49 (CONDITIONAL_JUMP)  ; LAB_00457d49
    POP EBP                             ; 00457d1d
    POP ESI                             ; 00457d1e
    POP EBX                             ; 00457d1f
    RET                                 ; 00457d20
    MOV ECX,0x5d7b4f                    ; 00457d21 | = "..\\core\\dcube.cpp"
        ;   Label: LAB_00457d21
    MOV ESI,0x600                       ; 00457d26
    PUSH 0x5d7b61                       ; 00457d2b | = "CDemonCube::allocMemory - Out of vert..."
    MOV dword ptr [0x01d1d400],ECX      ; 00457d30 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00457d36 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00457d3c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00457d41
    JMP 0x00457c6a                      ; 00457d44
        ;   XREF to: 00457c6a (UNCONDITIONAL_JUMP)  ; LAB_00457c6a
    MOV EBX,0x5d7c54                    ; 00457d49 | = "..\\core\\dcube.cpp"
        ;   Label: LAB_00457d49
    MOV ESI,0x608                       ; 00457d4e
    PUSH 0x5d7c66                       ; 00457d53 | = "CDemonCube::allocMemory - Out of voxe..."
    MOV dword ptr [0x01d1d400],EBX      ; 00457d58 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00457d5e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00457d64
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00457d69
    POP EBP                             ; 00457d6c
    POP ESI                             ; 00457d6d
    POP EBX                             ; 00457d6e
    RET                                 ; 00457d6f

