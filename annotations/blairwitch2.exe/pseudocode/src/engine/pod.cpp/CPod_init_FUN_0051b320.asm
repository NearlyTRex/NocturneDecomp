; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pod_cpp_CPod_init_FUN_0051b320(CPod *this_ptr)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_main.c_FUN_004e46c0 at 004e4739
;
; Referenced Globals:
;   TerminatedCString s_engine_pod_cpp_005e2829
;   TerminatedCString s_CPod_init_No_POD_to_init_005e283b
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b320
        ;   Label: engine_pod.cpp_CPod_init_FUN_0051b320
    MOV EBX,dword ptr [ESP + 0x8]       ; 0051b321
    TEST EBX,EBX                        ; 0051b325
    JZ 0x0051b330                       ; 0051b327
        ;   XREF to: 0051b330 (CONDITIONAL_JUMP)  ; LAB_0051b330
    CMP dword ptr [EBX],0x0             ; 0051b329
    JZ 0x0051b35a                       ; 0051b32c
        ;   XREF to: 0051b35a (CONDITIONAL_JUMP)  ; LAB_0051b35a
    POP EBX                             ; 0051b32e
    RET                                 ; 0051b32f
    MOV EDX,0x5e2829                    ; 0051b330 | = "..\\engine\\pod.cpp"
        ;   Label: LAB_0051b330
    MOV ECX,0x432                       ; 0051b335
    PUSH 0x5e283b                       ; 0051b33a | = "CPod::init - No .POD to init!"
    MOV dword ptr [0x01d046a0],EDX      ; 0051b33f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0051b345 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0051b34b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0051b350
    CMP dword ptr [EBX],0x0             ; 0051b353
    JZ 0x0051b35a                       ; 0051b356
        ;   XREF to: 0051b35a (CONDITIONAL_JUMP)  ; LAB_0051b35a
    POP EBX                             ; 0051b358
    RET                                 ; 0051b359
    PUSH EBX                            ; 0051b35a
        ;   Label: LAB_0051b35a
    MOV EAX,dword ptr [EBX + 0x194]     ; 0051b35b
    CALL dword ptr [EAX + 0x4]          ; 0051b361
    ADD ESP,0x4                         ; 0051b364
    POP EBX                             ; 0051b367
    RET                                 ; 0051b368

