; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pod_cpp_CPod_cleanup_FUN_00514650(CPod *this_ptr)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_main.c_FUN_004e4c70 at 004e4ce8
;   engine_pod.cpp_CPod_dtor_FUN_00514350 at 00514367
;
; Called Functions:
;   crt_unknown.c_FUN_005a30c4
;   engine_pod.cpp_CPodFile_dtor_FUN_00512f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514650
        ;   Label: engine_pod.cpp_CPod_cleanup_FUN_00514650
    PUSH ESI                            ; 00514651
    PUSH EDI                            ; 00514652
    MOV EDI,dword ptr [ESP + 0x10]      ; 00514653
    MOV EDX,dword ptr [EDI]             ; 00514657
    XOR ESI,ESI                         ; 00514659
    TEST EDX,EDX                        ; 0051465b
    JLE 0x00514679                      ; 0051465d
        ;   XREF to: 00514679 (CONDITIONAL_JUMP)  ; LAB_00514679
    MOV EBX,EDI                         ; 0051465f
    MOV EAX,dword ptr [EBX + 0x4]       ; 00514661
        ;   Label: LAB_00514661
    TEST EAX,EAX                        ; 00514664
    JNZ 0x00514683                      ; 00514666
        ;   XREF to: 00514683 (CONDITIONAL_JUMP)  ; LAB_00514683
    MOV dword ptr [EBX + 0x4],0x0       ; 00514668
        ;   Label: LAB_00514668
    INC ESI                             ; 0051466f
    MOV ECX,dword ptr [EDI]             ; 00514670
    ADD EBX,0x4                         ; 00514672
    CMP ESI,ECX                         ; 00514675
    JL 0x00514661                       ; 00514677
        ;   XREF to: 00514661 (CONDITIONAL_JUMP)  ; LAB_00514661
    MOV dword ptr [EDI],0x0             ; 00514679
        ;   Label: LAB_00514679
    POP EDI                             ; 0051467f
    POP ESI                             ; 00514680
    POP EBX                             ; 00514681
    RET                                 ; 00514682
    PUSH 0x0                            ; 00514683
        ;   Label: LAB_00514683
    PUSH EAX                            ; 00514685
    CALL engine_pod.cpp_CPodFile_dtor_FUN_00512f70 ; 00514686
        ;   XREF to: 00512f70 (UNCONDITIONAL_CALL)  ; CPodFile * engine_pod.cpp_CPodFile_dtor_FUN_00512f70(CPodFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0051468b
    PUSH EAX                            ; 0051468e
    CALL crt_unknown.c_FUN_005a30c4     ; 0051468f
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00514694
    JMP 0x00514668                      ; 00514697
        ;   XREF to: 00514668 (UNCONDITIONAL_JUMP)  ; LAB_00514668

