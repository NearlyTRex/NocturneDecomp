; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int support_trstream_cpp_FUN_005748e0(int param_1,undefined4 param_2,int param_3)
;
;
; XREF[3]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_0044f750 at 0044f86e
;   core_game.cpp_FUN_004bda10 at 004bdd7e
;   engine_2d.c_loadOrBuildColorMap_FUN_00402940 at 00402a58
;
; Called Functions:
;   crt_stdio.c_fwrite_FUN_005a48e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005748e0
        ;   Label: support_trstream.cpp_FUN_005748e0
    PUSH ESI                            ; 005748e1
    PUSH EDI                            ; 005748e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005748e3
    MOV EDX,dword ptr [EBX + 0x4]       ; 005748e7
    TEST EDX,EDX                        ; 005748ea
    JNZ 0x005748f7                      ; 005748ec
        ;   XREF to: 005748f7 (CONDITIONAL_JUMP)  ; LAB_005748f7
    MOV EAX,0xfffffffe                  ; 005748ee
        ;   Label: LAB_005748ee
    POP EDI                             ; 005748f3
    POP ESI                             ; 005748f4
    POP EBX                             ; 005748f5
    RET                                 ; 005748f6
    PUSH EDX                            ; 005748f7
        ;   Label: LAB_005748f7
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005748f8
    PUSH ESI                            ; 005748fc
    PUSH 0x1                            ; 005748fd
    MOV EDI,dword ptr [ESP + 0x20]      ; 005748ff
    PUSH EDI                            ; 00574903
    CALL crt_stdio.c_fwrite_FUN_005a48e0 ; 00574904
        ;   XREF to: 005a48e0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fwrite_FUN_005a48e0()
    ADD ESP,0x10                        ; 00574909
    MOV EDX,EAX                         ; 0057490c
    CMP EAX,ESI                         ; 0057490e
    JZ 0x0057491b                       ; 00574910
        ;   XREF to: 0057491b (CONDITIONAL_JUMP)  ; LAB_0057491b
    MOV EAX,dword ptr [EBX + 0x4]       ; 00574912
    TEST byte ptr [EAX + 0xc],0x20      ; 00574915
    JNZ 0x005748ee                      ; 00574919
        ;   XREF to: 005748ee (CONDITIONAL_JUMP)  ; LAB_005748ee
    MOV EAX,EDX                         ; 0057491b
        ;   Label: LAB_0057491b
    POP EDI                             ; 0057491d
    POP ESI                             ; 0057491e
    POP EBX                             ; 0057491f
    RET                                 ; 00574920

