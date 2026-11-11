; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_004735c0(CDemonRaytrace *this_ptr)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dtrace.cpp_FUN_00473940 at 00473a63
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_005bc843
;   TerminatedCString s_CDemonRaytrace_allocNewC_005bc856
;   WatcomTypeInfo g_CDemonCubeTypeInfo
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c___vec_new_FUN_005a5584
;   crt_memory.c_operator_new_array_FUN_005a40df
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004735c0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_004735c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004735c1
    MOV EAX,dword ptr [EBX + 0x40]      ; 004735c5
    IMUL EAX,dword ptr [EBX + 0x44]     ; 004735c8
    MOV EDX,dword ptr [EBX + 0x48]      ; 004735cc
    IMUL EDX,EAX                        ; 004735cf
    PUSH 0x5dee50                       ; 004735d2 | g_CDemonCubeTypeInfo
    PUSH EDX                            ; 004735d7
    LEA EAX,[EDX*0x4 + 0x0]             ; 004735d8
    SUB EAX,EDX                         ; 004735df
    SHL EAX,0x2                         ; 004735e1
    ADD EAX,EDX                         ; 004735e4
    SHL EAX,0x2                         ; 004735e6
    ADD EAX,0x4                         ; 004735e9
    PUSH EAX                            ; 004735ec
    CALL crt_memory.c_operator_new_array_FUN_005a40df ; 004735ed
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_array_FUN_005a40df()
    ADD ESP,0x4                         ; 004735f2
    PUSH EAX                            ; 004735f5
    CALL crt_memory.c___vec_new_FUN_005a5584 ; 004735f6
        ;   XREF to: 005a5584 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_new_FUN_005a5584()
    ADD ESP,0xc                         ; 004735fb
    MOV dword ptr [EBX + 0x50],EAX      ; 004735fe
    TEST EAX,EAX                        ; 00473601
    JZ 0x00473607                       ; 00473603
        ;   XREF to: 00473607 (CONDITIONAL_JUMP)  ; LAB_00473607
    POP EBX                             ; 00473605
    RET                                 ; 00473606
    PUSH ESI                            ; 00473607
        ;   Label: LAB_00473607
    MOV EBX,0x5bc843                    ; 00473608 | = "..\\core\\dtrace.cpp"
    MOV ESI,0xae                        ; 0047360d
    PUSH 0x5bc856                       ; 00473612 | = "CDemonRaytrace::allocNewCubeList - Ou..."
    MOV dword ptr [0x01d71de0],EBX      ; 00473617 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0047361d | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00473623
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00473628
    POP ESI                             ; 0047362b
    POP EBX                             ; 0047362c
    RET                                 ; 0047362d

