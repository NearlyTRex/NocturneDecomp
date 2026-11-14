; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_00582680(undefined4 param_1)
;
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_ini.cpp_FUN_004d8c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00582680
        ;   Label: wincore_winrun.cpp_FUN_00582680
    PUSH ESI                            ; 00582681
    PUSH EDI                            ; 00582682
    PUSH EBP                            ; 00582683
    SUB ESP,0x110                       ; 00582684
    MOV EBP,dword ptr [ESP + 0x124]     ; 0058268a
    XOR EDI,EDI                         ; 00582691
    MOV dword ptr [ESP + 0x108],EDI     ; 00582693
    MOV dword ptr [ESP + 0x100],EDI     ; 0058269a
    MOV dword ptr [ESP + 0x104],EDI     ; 005826a1
    PUSH EDI                            ; 005826a8
        ;   Label: LAB_005826a8
    PUSH 0x5d7f06                       ; 005826a9
    LEA EAX,[ESP + 0x8]                 ; 005826ae
    PUSH EAX                            ; 005826b2
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005826b3
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005826b8
    MOV EAX,dword ptr [ESP + 0x108]     ; 005826bb
    MOV ESI,dword ptr [EAX + 0x2d22c24] ; 005826c2
    PUSH ESI                            ; 005826c8
    LEA EAX,[ESP + 0x4]                 ; 005826c9
    PUSH EAX                            ; 005826cd
    PUSH EBP                            ; 005826ce
    CALL engine_ini.cpp_FUN_004d8c90    ; 005826cf
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c90()
    ADD ESP,0xc                         ; 005826d4
    MOV EAX,dword ptr [ESP + 0x108]     ; 005826d7
    CMP dword ptr [EAX + 0x2d22c24],0x0 ; 005826de
    JNZ 0x0058272e                      ; 005826e5
        ;   XREF to: 0058272e (CONDITIONAL_JUMP)  ; LAB_0058272e
    MOV ESI,dword ptr [ESP + 0x100]     ; 005826e7
        ;   Label: LAB_005826e7
    MOV EAX,dword ptr [ESP + 0x104]     ; 005826ee
    MOV EBX,dword ptr [ESP + 0x108]     ; 005826f5
    INC EDI                             ; 005826fc
    ADD ESI,0x30                        ; 005826fd
    ADD EAX,0x4                         ; 00582700
    ADD EBX,0xac                        ; 00582703
    MOV dword ptr [ESP + 0x100],ESI     ; 00582709
    MOV dword ptr [ESP + 0x104],EAX     ; 00582710
    MOV dword ptr [ESP + 0x108],EBX     ; 00582717
    CMP EDI,0x4                         ; 0058271e
    JL 0x005826a8                       ; 00582721
        ;   XREF to: 005826a8 (CONDITIONAL_JUMP)  ; LAB_005826a8
    ADD ESP,0x110                       ; 00582723
    POP EBP                             ; 00582729
    POP EDI                             ; 0058272a
    POP ESI                             ; 0058272b
    POP EBX                             ; 0058272c
    RET                                 ; 0058272d
    PUSH EDI                            ; 0058272e
        ;   Label: LAB_0058272e
    PUSH 0x5d7f19                       ; 0058272f
    LEA EAX,[ESP + 0x8]                 ; 00582734
    PUSH EAX                            ; 00582738
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00582739
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0058273e
    MOV EAX,dword ptr [ESP + 0x104]     ; 00582741
    MOV ECX,dword ptr [EAX + 0x2d22ed4] ; 00582748
    PUSH ECX                            ; 0058274e
    LEA EAX,[ESP + 0x4]                 ; 0058274f
    PUSH EAX                            ; 00582753
    PUSH EBP                            ; 00582754
    CALL engine_ini.cpp_FUN_004d8c90    ; 00582755
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c90()
    ADD ESP,0xc                         ; 0058275a
    XOR EBX,EBX                         ; 0058275d
    MOV EAX,dword ptr [ESP + 0x108]     ; 0058275f
    MOV ESI,dword ptr [ESP + 0x100]     ; 00582766
    MOV dword ptr [ESP + 0x10c],EAX     ; 0058276d
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00582774
        ;   Label: LAB_00582774
    MOV EDX,dword ptr [EAX + 0x2d22c24] ; 0058277b
    TEST EDX,EDX                        ; 00582781
    JNZ 0x00582794                      ; 00582783
        ;   XREF to: 00582794 (CONDITIONAL_JUMP)  ; LAB_00582794
    INC EBX                             ; 00582785
        ;   Label: LAB_00582785
    ADD ESI,0xc                         ; 00582786
    CMP EBX,0x4                         ; 00582789
    JGE 0x005826e7                      ; 0058278c
        ;   XREF to: 005826e7 (CONDITIONAL_JUMP)  ; LAB_005826e7
    JMP 0x00582774                      ; 00582792
        ;   XREF to: 00582774 (UNCONDITIONAL_JUMP)  ; LAB_00582774
    CMP EDX,0x4                         ; 00582794
        ;   Label: LAB_00582794
    JZ 0x00582785                       ; 00582797
        ;   XREF to: 00582785 (CONDITIONAL_JUMP)  ; LAB_00582785
    PUSH EBX                            ; 00582799
    PUSH EDI                            ; 0058279a
    PUSH 0x5d7f30                       ; 0058279b
    LEA EAX,[ESP + 0xc]                 ; 005827a0
    PUSH EAX                            ; 005827a4
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005827a5
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005827aa
    MOV EAX,dword ptr [ESI + 0x2d22ee4] ; 005827ad
    PUSH EAX                            ; 005827b3
    LEA EAX,[ESP + 0x4]                 ; 005827b4
    PUSH EAX                            ; 005827b8
    PUSH EBP                            ; 005827b9
    CALL engine_ini.cpp_FUN_004d8c90    ; 005827ba
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c90()
    ADD ESP,0xc                         ; 005827bf
    PUSH EBX                            ; 005827c2
    PUSH EDI                            ; 005827c3
    PUSH 0x5d7f4a                       ; 005827c4
    LEA EAX,[ESP + 0xc]                 ; 005827c9
    PUSH EAX                            ; 005827cd
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005827ce
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005827d3
    MOV EDX,dword ptr [ESI + 0x2d22ee8] ; 005827d6
    PUSH EDX                            ; 005827dc
    LEA EAX,[ESP + 0x4]                 ; 005827dd
    PUSH EAX                            ; 005827e1
    PUSH EBP                            ; 005827e2
    CALL engine_ini.cpp_FUN_004d8c90    ; 005827e3
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c90()
    ADD ESP,0xc                         ; 005827e8
    PUSH EBX                            ; 005827eb
    PUSH EDI                            ; 005827ec
    PUSH 0x5d7f64                       ; 005827ed
    LEA EAX,[ESP + 0xc]                 ; 005827f2
    PUSH EAX                            ; 005827f6
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005827f7
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005827fc
    MOV ECX,dword ptr [ESI + 0x2d22eec] ; 005827ff
    PUSH ECX                            ; 00582805
    LEA EAX,[ESP + 0x4]                 ; 00582806
    PUSH EAX                            ; 0058280a
    PUSH EBP                            ; 0058280b
    CALL engine_ini.cpp_FUN_004d8c90    ; 0058280c
        ;   XREF to: 004d8c90 (UNCONDITIONAL_CALL)  ; undefined engine_ini.cpp_FUN_004d8c90()
    ADD ESP,0xc                         ; 00582811
    INC EBX                             ; 00582814
    ADD ESI,0xc                         ; 00582815
    CMP EBX,0x4                         ; 00582818
    JGE 0x005826e7                      ; 0058281b
        ;   XREF to: 005826e7 (CONDITIONAL_JUMP)  ; LAB_005826e7
    JMP 0x00582774                      ; 00582821
        ;   XREF to: 00582774 (UNCONDITIONAL_JUMP)  ; LAB_00582774

