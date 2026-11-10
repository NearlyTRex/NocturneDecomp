; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trstream_cpp_FUN_005a19b0(int param_1)
;
;
; XREF[4]:
;   core_game.cpp_FUN_004d6420 at 004d67e6
;   core_game.cpp_FUN_004d6990 at 004d6cf9
;   engine_2d.c_loadOrBuildColorMap_FUN_00402940 at 00402a65
;   support_trstream.cpp_COutStreamFile_dtor_FUN_005a1860 at 005a1873
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_005c0d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a19b0
        ;   Label: support_trstream.cpp_FUN_005a19b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a19b1
    MOV EDX,dword ptr [EBX + 0x4]       ; 005a19b5
    TEST EDX,EDX                        ; 005a19b8
    JNZ 0x005a19c3                      ; 005a19ba
        ;   XREF to: 005a19c3 (CONDITIONAL_JUMP)  ; LAB_005a19c3
    MOV EAX,0x1                         ; 005a19bc
    POP EBX                             ; 005a19c1
    RET                                 ; 005a19c2
    PUSH EDX                            ; 005a19c3
        ;   Label: LAB_005a19c3
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 005a19c4
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 005a19c9
    MOV dword ptr [EBX + 0x4],0x0       ; 005a19cc
    MOV EAX,0x1                         ; 005a19d3
    POP EBX                             ; 005a19d8
    RET                                 ; 005a19d9

