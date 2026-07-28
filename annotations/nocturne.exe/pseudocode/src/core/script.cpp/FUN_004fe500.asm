; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_script_cpp_FUN_004fe500(CScript *param_1)
;
;
; XREF[2]:
;   core_script.cpp_FUN_004fe4d0 at 004fe4d6
;   core_script.cpp_FUN_004febd0 at 004febf3
;
; Called Functions:
;   core_script.cpp_CScript_freeParsedLines_FUN_004fe550
;   crt_unknown.c_FUN_005638d0
;   shape_edittool.cpp_CStrList_clear_FUN_00473c50
;   shape_edittool.cpp_FUN_00476160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fe500
        ;   Label: core_script.cpp_FUN_004fe500
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fe501
    LEA EAX,[EBX + 0x30]                ; 004fe505
    PUSH EAX                            ; 004fe508
    CALL shape_edittool.cpp_CStrList_clear_FUN_00473c50 ; 004fe509
        ;   XREF to: 00473c50 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_clear_FUN_00473c50(CStrList * this_ptr)
    ADD ESP,0x4                         ; 004fe50e
    PUSH EBX                            ; 004fe511
    CALL core_script.cpp_CScript_freeParsedLines_FUN_004fe550 ; 004fe512
        ;   XREF to: 004fe550 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_freeParsedLines_FUN_004fe550(CScript * this_ptr)
    MOV EDX,dword ptr [EBX + 0x20]      ; 004fe517
    ADD ESP,0x4                         ; 004fe51a
    TEST EDX,EDX                        ; 004fe51d
    JNZ 0x004fe537                      ; 004fe51f
        ;   XREF to: 004fe537 (CONDITIONAL_JUMP)  ; LAB_004fe537
    PUSH 0x1e56c30                      ; 004fe521
        ;   Label: LAB_004fe521
    MOV dword ptr [EBX + 0x1c],0x0      ; 004fe526
    CALL shape_edittool.cpp_FUN_00476160 ; 004fe52d
        ;   XREF to: 00476160 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00476160()
    ADD ESP,0x4                         ; 004fe532
    POP EBX                             ; 004fe535
    RET                                 ; 004fe536
    PUSH EDX                            ; 004fe537
        ;   Label: LAB_004fe537
    CALL crt_unknown.c_FUN_005638d0     ; 004fe538
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 004fe53d
    MOV dword ptr [EBX + 0x20],0x0      ; 004fe540
    JMP 0x004fe521                      ; 004fe547
        ;   XREF to: 004fe521 (UNCONDITIONAL_JUMP)  ; LAB_004fe521

