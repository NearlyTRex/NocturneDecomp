; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pod_cpp_CPod_init_FUN_0053c8a0(CPod *this_ptr)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_005032a0 at 00503319
;
; Referenced Globals:
;   TerminatedCString s_engine_pod_cpp_005eda2f
;   TerminatedCString s_CPod_init_No_POD_to_init_005eda41
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053c8a0
        ;   Label: engine_pod.cpp_CPod_init_FUN_0053c8a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053c8a1
    TEST EBX,EBX                        ; 0053c8a5
    JZ 0x0053c8b0                       ; 0053c8a7
        ;   XREF to: 0053c8b0 (CONDITIONAL_JUMP)  ; LAB_0053c8b0
    CMP dword ptr [EBX],0x0             ; 0053c8a9
    JZ 0x0053c8da                       ; 0053c8ac
        ;   XREF to: 0053c8da (CONDITIONAL_JUMP)  ; LAB_0053c8da
    POP EBX                             ; 0053c8ae
    RET                                 ; 0053c8af
    MOV EDX,0x5eda2f                    ; 0053c8b0 | = "..\\engine\\pod.cpp"
        ;   Label: LAB_0053c8b0
    MOV ECX,0x4a2                       ; 0053c8b5
    PUSH 0x5eda41                       ; 0053c8ba | = "CPod::init - No .POD to init!"
    MOV dword ptr [0x01d1d400],EDX      ; 0053c8bf | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0053c8c5 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0053c8cb
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0053c8d0
    CMP dword ptr [EBX],0x0             ; 0053c8d3
    JZ 0x0053c8da                       ; 0053c8d6
        ;   XREF to: 0053c8da (CONDITIONAL_JUMP)  ; LAB_0053c8da
    POP EBX                             ; 0053c8d8
    RET                                 ; 0053c8d9
    PUSH EBX                            ; 0053c8da
        ;   Label: LAB_0053c8da
    MOV EAX,dword ptr [EBX + 0x194]     ; 0053c8db
    CALL dword ptr [EAX + 0x4]          ; 0053c8e1
    ADD ESP,0x4                         ; 0053c8e4
    POP EBX                             ; 0053c8e7
    RET                                 ; 0053c8e8

