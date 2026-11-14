; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pod_cpp_CPod_init_FUN_00514600(CPod *this_ptr)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_004e44e0 at 004e4559
;
; Referenced Globals:
;   TerminatedCString s_engine_pod_cpp_005cc897
;   TerminatedCString s_CPod_init_No_POD_to_init_005cc8a9
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514600
        ;   Label: engine_pod.cpp_CPod_init_FUN_00514600
    MOV EBX,dword ptr [ESP + 0x8]       ; 00514601
    TEST EBX,EBX                        ; 00514605
    JZ 0x00514610                       ; 00514607
        ;   XREF to: 00514610 (CONDITIONAL_JUMP)  ; LAB_00514610
    CMP dword ptr [EBX],0x0             ; 00514609
    JZ 0x0051463a                       ; 0051460c
        ;   XREF to: 0051463a (CONDITIONAL_JUMP)  ; LAB_0051463a
    POP EBX                             ; 0051460e
    RET                                 ; 0051460f
    MOV EDX,0x5cc897                    ; 00514610 | = "..\\engine\\pod.cpp"
        ;   Label: LAB_00514610
    MOV ECX,0x4a2                       ; 00514615
    PUSH 0x5cc8a9                       ; 0051461a | = "CPod::init - No .POD to init!"
    MOV dword ptr [0x01d71de0],EDX      ; 0051461f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00514625 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0051462b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00514630
    CMP dword ptr [EBX],0x0             ; 00514633
    JZ 0x0051463a                       ; 00514636
        ;   XREF to: 0051463a (CONDITIONAL_JUMP)  ; LAB_0051463a
    POP EBX                             ; 00514638
    RET                                 ; 00514639
    PUSH EBX                            ; 0051463a
        ;   Label: LAB_0051463a
    MOV EAX,dword ptr [EBX + 0x194]     ; 0051463b
    CALL dword ptr [EAX + 0x4]          ; 00514641
    ADD ESP,0x4                         ; 00514644
    POP EBX                             ; 00514647
    RET                                 ; 00514648

