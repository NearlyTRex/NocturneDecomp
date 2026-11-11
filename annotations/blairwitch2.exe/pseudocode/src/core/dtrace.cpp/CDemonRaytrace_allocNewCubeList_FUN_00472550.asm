; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00472550(CDemonRaytrace *this_ptr)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dtrace.cpp_FUN_004728d0 at 004729f3
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_005d198d
;   TerminatedCString s_CDemonRaytrace_allocNewC_005d19a0
;   WatcomTypeInfo g_CDemonCubeTypeInfo
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c___vec_new_FUN_005ba2b4
;   crt_memory.c_operator_new_array_FUN_005b8df8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00472550
        ;   Label: core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00472550
    MOV EBX,dword ptr [ESP + 0x8]       ; 00472551
    MOV EAX,dword ptr [EBX + 0x40]      ; 00472555
    IMUL EAX,dword ptr [EBX + 0x44]     ; 00472558
    MOV EDX,dword ptr [EBX + 0x48]      ; 0047255c
    IMUL EDX,EAX                        ; 0047255f
    PUSH 0x5f5b30                       ; 00472562 | g_CDemonCubeTypeInfo
    PUSH EDX                            ; 00472567
    LEA EAX,[EDX*0x4 + 0x0]             ; 00472568
    SUB EAX,EDX                         ; 0047256f
    SHL EAX,0x2                         ; 00472571
    ADD EAX,EDX                         ; 00472574
    SHL EAX,0x2                         ; 00472576
    ADD EAX,0x4                         ; 00472579
    PUSH EAX                            ; 0047257c
    CALL crt_memory.c_operator_new_array_FUN_005b8df8 ; 0047257d
        ;   XREF to: 005b8df8 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005b8df8()
    ADD ESP,0x4                         ; 00472582
    PUSH EAX                            ; 00472585
    CALL crt_memory.c___vec_new_FUN_005ba2b4 ; 00472586
        ;   XREF to: 005ba2b4 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_new_FUN_005ba2b4()
    ADD ESP,0xc                         ; 0047258b
    MOV dword ptr [EBX + 0x50],EAX      ; 0047258e
    TEST EAX,EAX                        ; 00472591
    JZ 0x00472597                       ; 00472593
        ;   XREF to: 00472597 (CONDITIONAL_JUMP)  ; LAB_00472597
    POP EBX                             ; 00472595
    RET                                 ; 00472596
    PUSH ESI                            ; 00472597
        ;   Label: LAB_00472597
    MOV EBX,0x5d198d                    ; 00472598 | = "..\\core\\dtrace.cpp"
    MOV ESI,0xae                        ; 0047259d
    PUSH 0x5d19a0                       ; 004725a2 | = "CDemonRaytrace::allocNewCubeList - Ou..."
    MOV dword ptr [0x01d046a0],EBX      ; 004725a7 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004725ad | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004725b3
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004725b8
    POP ESI                             ; 004725bb
    POP EBX                             ; 004725bc
    RET                                 ; 004725bd

