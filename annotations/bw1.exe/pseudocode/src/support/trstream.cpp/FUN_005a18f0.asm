; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int support_trstream_cpp_FUN_005a18f0(int param_1,undefined4 param_2,int param_3)
;
;
; XREF[3]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00453610 at 0045372e
;   core_game.cpp_FUN_004d6420 at 004d6767
;   engine_2d.c_loadOrBuildColorMap_FUN_00402940 at 00402a58
;
; Called Functions:
;   crt_stdio.c_fwrite_FUN_005c1a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a18f0
        ;   Label: support_trstream.cpp_FUN_005a18f0
    PUSH ESI                            ; 005a18f1
    PUSH EDI                            ; 005a18f2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a18f3
    MOV EDX,dword ptr [EBX + 0x4]       ; 005a18f7
    TEST EDX,EDX                        ; 005a18fa
    JNZ 0x005a1907                      ; 005a18fc
        ;   XREF to: 005a1907 (CONDITIONAL_JUMP)  ; LAB_005a1907
    MOV EAX,0xfffffffe                  ; 005a18fe
        ;   Label: LAB_005a18fe
    POP EDI                             ; 005a1903
    POP ESI                             ; 005a1904
    POP EBX                             ; 005a1905
    RET                                 ; 005a1906
    PUSH EDX                            ; 005a1907
        ;   Label: LAB_005a1907
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005a1908
    PUSH ESI                            ; 005a190c
    PUSH 0x1                            ; 005a190d
    MOV EDI,dword ptr [ESP + 0x20]      ; 005a190f
    PUSH EDI                            ; 005a1913
    CALL crt_stdio.c_fwrite_FUN_005c1a70 ; 005a1914
        ;   XREF to: 005c1a70 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fwrite_FUN_005c1a70()
    ADD ESP,0x10                        ; 005a1919
    MOV EDX,EAX                         ; 005a191c
    CMP EAX,ESI                         ; 005a191e
    JZ 0x005a192b                       ; 005a1920
        ;   XREF to: 005a192b (CONDITIONAL_JUMP)  ; LAB_005a192b
    MOV EAX,dword ptr [EBX + 0x4]       ; 005a1922
    TEST byte ptr [EAX + 0xc],0x20      ; 005a1925
    JNZ 0x005a18fe                      ; 005a1929
        ;   XREF to: 005a18fe (CONDITIONAL_JUMP)  ; LAB_005a18fe
    MOV EAX,EDX                         ; 005a192b
        ;   Label: LAB_005a192b
    POP EDI                             ; 005a192d
    POP ESI                             ; 005a192e
    POP EBX                             ; 005a192f
    RET                                 ; 005a1930

