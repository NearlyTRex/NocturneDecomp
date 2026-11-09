; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trstream_cpp_FUN_0057dd60(int param_1)
;
;
; XREF[4]:
;   core_game.cpp_FUN_004bb9b0 at 004bbd74
;   core_game.cpp_FUN_004bbf70 at 004bc2dc
;   engine_2d.c_FUN_00402940 at 00402a61
;   support_trstream.cpp_COutStreamFile_dtor_FUN_0057dc10 at 0057dc23
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_005b89c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057dd60
        ;   Label: support_trstream.cpp_FUN_0057dd60
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057dd61
    MOV EDX,dword ptr [EBX + 0x4]       ; 0057dd65
    TEST EDX,EDX                        ; 0057dd68
    JNZ 0x0057dd73                      ; 0057dd6a
        ;   XREF to: 0057dd73 (CONDITIONAL_JUMP)  ; LAB_0057dd73
    MOV EAX,0x1                         ; 0057dd6c
    POP EBX                             ; 0057dd71
    RET                                 ; 0057dd72
    PUSH EDX                            ; 0057dd73
        ;   Label: LAB_0057dd73
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 0057dd74
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 0057dd79
    MOV dword ptr [EBX + 0x4],0x0       ; 0057dd7c
    MOV EAX,0x1                         ; 0057dd83
    POP EBX                             ; 0057dd88
    RET                                 ; 0057dd89

