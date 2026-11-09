; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pod_cpp_CPod_dismountPod_FUN_0053d490(CPod *this_ptr,int index)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
;
; XREF[2]:
;   engine_pod.cpp_CPod_dismount_FUN_0053c800 at 0053c87f
;   engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_0053cfa0 at 0053d017
;
; Referenced Globals:
;   TerminatedCString s_engine_pod_cpp_005edb64
;   TerminatedCString s_CPod_dismountPod_invalid_005edb76
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_unknown.c_FUN_005c0344
;   engine_pod.cpp_CPodFile_dtor_FUN_0053b210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053d490
        ;   Label: engine_pod.cpp_CPod_dismountPod_FUN_0053d490
    PUSH ESI                            ; 0053d491
    PUSH EBP                            ; 0053d492
    MOV EBX,dword ptr [ESP + 0x10]      ; 0053d493
    MOV ESI,dword ptr [ESP + 0x14]      ; 0053d497
    TEST ESI,ESI                        ; 0053d49b
    JL 0x0053d4a3                       ; 0053d49d
        ;   XREF to: 0053d4a3 (CONDITIONAL_JUMP)  ; LAB_0053d4a3
    CMP ESI,dword ptr [EBX]             ; 0053d49f
    JL 0x0053d4c8                       ; 0053d4a1
        ;   XREF to: 0053d4c8 (CONDITIONAL_JUMP)  ; LAB_0053d4c8
    PUSH EDI                            ; 0053d4a3
        ;   Label: LAB_0053d4a3
    MOV ECX,0x5edb64                    ; 0053d4a4 | = "..\\engine\\pod.cpp"
    MOV EDI,0x6be                       ; 0053d4a9
    PUSH 0x5edb76                       ; 0053d4ae | = "CPod::dismountPod - invalid index"
    MOV dword ptr [0x01d1d400],ECX      ; 0053d4b3 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0053d4b9 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0053d4bf
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0053d4c4
    POP EDI                             ; 0053d4c7
    MOV EAX,dword ptr [EBX + ESI*0x4 + 0x4] ; 0053d4c8
        ;   Label: LAB_0053d4c8
    TEST EAX,EAX                        ; 0053d4cc
    JZ 0x0053d4e4                       ; 0053d4ce
        ;   XREF to: 0053d4e4 (CONDITIONAL_JUMP)  ; LAB_0053d4e4
    PUSH 0x0                            ; 0053d4d0
    PUSH EAX                            ; 0053d4d2
    CALL engine_pod.cpp_CPodFile_dtor_FUN_0053b210 ; 0053d4d3
        ;   XREF to: 0053b210 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_0053b210(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0053d4d8
    PUSH EAX                            ; 0053d4db
    CALL crt_unknown.c_FUN_005c0344     ; 0053d4dc
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0053d4e1
    MOV EBP,dword ptr [EBX]             ; 0053d4e4
        ;   Label: LAB_0053d4e4
    DEC EBP                             ; 0053d4e6
    MOV EDX,ESI                         ; 0053d4e7
    MOV dword ptr [EBX],EBP             ; 0053d4e9
    CMP ESI,EBP                         ; 0053d4eb
    JGE 0x0053d510                      ; 0053d4ed
        ;   XREF to: 0053d510 (CONDITIONAL_JUMP)  ; LAB_0053d510
    LEA EAX,[ESI*0x4 + 0x0]             ; 0053d4ef
    ADD EAX,EBX                         ; 0053d4f6
    MOV ECX,dword ptr [EAX + 0x8]       ; 0053d4f8
        ;   Label: LAB_0053d4f8
    MOV dword ptr [EAX + 0x4],ECX       ; 0053d4fb
    INC EDX                             ; 0053d4fe
    MOV ECX,dword ptr [EBX]             ; 0053d4ff
    ADD EAX,0x4                         ; 0053d501
    CMP EDX,ECX                         ; 0053d504
    JL 0x0053d4f8                       ; 0053d506
        ;   XREF to: 0053d4f8 (CONDITIONAL_JUMP)  ; LAB_0053d4f8
    LEA EAX,[EAX]                       ; 0053d508
    MOV EDX,EDX                         ; 0053d50e
    MOV EAX,dword ptr [EBX]             ; 0053d510
        ;   Label: LAB_0053d510
    MOV dword ptr [EBX + EAX*0x4 + 0x4],0x0 ; 0053d512
    POP EBP                             ; 0053d51a
    POP ESI                             ; 0053d51b
    POP EBX                             ; 0053d51c
    RET                                 ; 0053d51d

