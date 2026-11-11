; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_CDemonCube_allocGeometryMemory_FUN_00446590(CDemonCube *this_ptr)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dcube.cpp_CDemonCube_load_FUN_004467a0 at 00446863
;
; Referenced Globals:
;   TerminatedCString s_core_dcube_cpp_005ce886
;   TerminatedCString s_CDemonCube_allocMemory_O_005ce898
;   TerminatedCString s_core_dcube_cpp_005ce8c7
;   TerminatedCString s_CDemonCube_allocMemory_O_005ce8d9
;   TerminatedCString s_core_dcube_cpp_005ce905
;   TerminatedCString s_CDemonCube_allocMemory_O_005ce917
;   TerminatedCString s_core_dcube_cpp_005ce94b
;   TerminatedCString s_CDemonCube_allocMemory_O_005ce95d
;   TerminatedCString s_core_dcube_cpp_005ce98b
;   TerminatedCString s_CDemonCube_allocMemory_O_005ce99d
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_malloc_FUN_005b8580
;   crt_memory.c_operator_new_array_FUN_005b8df8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00446590
        ;   Label: core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00446590
    PUSH ESI                            ; 00446591
    PUSH EBP                            ; 00446592
    MOV EBX,dword ptr [ESP + 0x10]      ; 00446593
    MOV EDX,dword ptr [EBX + 0x20]      ; 00446597
    LEA EAX,[EDX*0x4 + 0x0]             ; 0044659a
    SUB EAX,EDX                         ; 004465a1
    SHL EAX,0x2                         ; 004465a3
    PUSH EAX                            ; 004465a6
    CALL crt_memory.c_operator_new_array_FUN_005b8df8 ; 004465a7
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005b8df8()
    ADD ESP,0x4                         ; 004465ac
    MOV dword ptr [EBX + 0x24],EAX      ; 004465af
    TEST EAX,EAX                        ; 004465b2
    JZ 0x00446671                       ; 004465b4
        ;   XREF to: 00446671 (CONDITIONAL_JUMP)  ; LAB_00446671
    MOV EAX,dword ptr [EBX + 0x28]      ; 004465ba
        ;   Label: LAB_004465ba
    SHL EAX,0x5                         ; 004465bd
    PUSH EAX                            ; 004465c0
    CALL crt_memory.c_operator_new_array_FUN_005b8df8 ; 004465c1
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005b8df8()
    ADD ESP,0x4                         ; 004465c6
    MOV dword ptr [EBX + 0x2c],EAX      ; 004465c9
    TEST EAX,EAX                        ; 004465cc
    JNZ 0x004465f2                      ; 004465ce
        ;   XREF to: 004465f2 (CONDITIONAL_JUMP)  ; LAB_004465f2
    MOV EBP,0x5ce8c7                    ; 004465d0 | = "..\\core\\dcube.cpp"
    MOV EAX,0x602                       ; 004465d5
    PUSH 0x5ce8d9                       ; 004465da | = "CDemonCube::allocMemory - Out of tri ..."
    MOV dword ptr [0x01d046a0],EBP      ; 004465df | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 004465e5 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004465ea
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004465ef
    MOV EDX,dword ptr [EBX + 0x28]      ; 004465f2
        ;   Label: LAB_004465f2
    PUSH EDX                            ; 004465f5
    CALL crt_memory.c_malloc_FUN_005b8580 ; 004465f6
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 004465fb
    MOV dword ptr [EBX + 0x30],EAX      ; 004465fe
    TEST EAX,EAX                        ; 00446601
    JNZ 0x0044662a                      ; 00446603
        ;   XREF to: 0044662a (CONDITIONAL_JUMP)  ; LAB_0044662a
    PUSH EDI                            ; 00446605
    MOV ESI,0x5ce905                    ; 00446606 | = "..\\core\\dcube.cpp"
    MOV EDI,0x604                       ; 0044660b
    PUSH 0x5ce917                       ; 00446610 | = "CDemonCube::allocMemory - Out of grou..."
    MOV dword ptr [0x01d046a0],ESI      ; 00446615 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0044661b | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00446621
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00446626
    POP EDI                             ; 00446629
    PUSH 0x40                           ; 0044662a
        ;   Label: LAB_0044662a
    CALL crt_memory.c_malloc_FUN_005b8580 ; 0044662c
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 00446631
    MOV dword ptr [EBX],EAX             ; 00446634
    TEST EAX,EAX                        ; 00446636
    JNZ 0x0044665c                      ; 00446638
        ;   XREF to: 0044665c (CONDITIONAL_JUMP)  ; LAB_0044665c
    MOV EAX,0x5ce94b                    ; 0044663a | = "..\\core\\dcube.cpp"
    MOV EDX,0x606                       ; 0044663f
    PUSH 0x5ce95d                       ; 00446644 | = "CDemonCube::allocMemory - Out of voxe..."
    MOV [0x01d046a0],EAX                ; 00446649 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0044664e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00446654
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00446659
    PUSH 0x40                           ; 0044665c
        ;   Label: LAB_0044665c
    CALL crt_memory.c_malloc_FUN_005b8580 ; 0044665e
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 00446663
    MOV dword ptr [EBX + 0x4],EAX       ; 00446666
    TEST EAX,EAX                        ; 00446669
    JZ 0x00446699                       ; 0044666b
        ;   XREF to: 00446699 (CONDITIONAL_JUMP)  ; LAB_00446699
    POP EBP                             ; 0044666d
    POP ESI                             ; 0044666e
    POP EBX                             ; 0044666f
    RET                                 ; 00446670
    MOV ECX,0x5ce886                    ; 00446671 | = "..\\core\\dcube.cpp"
        ;   Label: LAB_00446671
    MOV ESI,0x600                       ; 00446676
    PUSH 0x5ce898                       ; 0044667b | = "CDemonCube::allocMemory - Out of vert..."
    MOV dword ptr [0x01d046a0],ECX      ; 00446680 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00446686 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0044668c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00446691
    JMP 0x004465ba                      ; 00446694
        ;   XREF to: 004465ba (UNCONDITIONAL_JUMP)  ; LAB_004465ba
    MOV EBX,0x5ce98b                    ; 00446699 | = "..\\core\\dcube.cpp"
        ;   Label: LAB_00446699
    MOV ESI,0x608                       ; 0044669e
    PUSH 0x5ce99d                       ; 004466a3 | = "CDemonCube::allocMemory - Out of voxe..."
    MOV dword ptr [0x01d046a0],EBX      ; 004466a8 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004466ae | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004466b4
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004466b9
    POP EBP                             ; 004466bc
    POP ESI                             ; 004466bd
    POP EBX                             ; 004466be
    RET                                 ; 004466bf

