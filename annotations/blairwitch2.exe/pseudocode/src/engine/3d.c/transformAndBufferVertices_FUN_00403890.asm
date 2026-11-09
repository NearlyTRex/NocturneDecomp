; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_transformAndBufferVertices_FUN_00403890(int param_1)
;
;
; XREF[1]:
;   engine_3d.c_FUN_004079f0 at 00407a2d
;
; Referenced Globals:
;   undefined4 DAT_006141e0
;   undefined4 DAT_00622014
;   undefined4 DAT_00622024+3
;   undefined4 DAT_00622040
;   undefined4 DAT_0070ca60
;   undefined4 DAT_0070ca64
;   undefined4 DAT_0070ca94
;   undefined4 DAT_01c38aec
;
; Called Functions:
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403890
        ;   Label: engine_3d.c_transformAndBufferVertices_FUN_00403890
    PUSH ESI                            ; 00403891
    PUSH EDI                            ; 00403892
    PUSH EBP                            ; 00403893
    SUB ESP,0x4                         ; 00403894
    MOV ESI,dword ptr [ESP + 0x18]      ; 00403897
    MOV EDX,0x1                         ; 0040389b
    MOV EBX,dword ptr [0x0070ca60]      ; 004038a0 | DAT_0070ca60
    MOV ESI,dword ptr [ESI + 0x4]       ; 004038a6
    MOV EDI,dword ptr [ESP + 0x18]      ; 004038a9
    ADD ESI,EBX                         ; 004038ad
    XOR ECX,ECX                         ; 004038af
    LEA EAX,[ESI*0x4 + 0x0]             ; 004038b1
    XOR EBP,EBP                         ; 004038b8
    SUB EAX,ESI                         ; 004038ba
    MOV ESI,0x622014                    ; 004038bc | DAT_00622014
    SHL EAX,0x4                         ; 004038c1
    MOV dword ptr [0x006141e0],EDX      ; 004038c4 | DAT_006141e0
    ADD ESI,EAX                         ; 004038ca
    MOV EAX,dword ptr [ESP + 0x18]      ; 004038cc
    ADD EDI,0xc                         ; 004038d0
    MOV dword ptr [ESP],ECX             ; 004038d3
    MOV EDX,dword ptr [EAX + 0x8]       ; 004038d6
    MOV dword ptr [0x0070ca94],EDI      ; 004038d9 | DAT_0070ca94
    TEST EDX,EDX                        ; 004038df
    JLE 0x0040390f                      ; 004038e1
        ;   XREF to: 0040390f (CONDITIONAL_JUMP)  ; LAB_0040390f
    PUSH EDI                            ; 004038e3
        ;   Label: LAB_004038e3
    PUSH ESI                            ; 004038e4
    CALL engine_special.cpp_FUN_0055d723 ; 004038e5
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x01c38aec]                ; 004038ea | DAT_01c38aec
    MOV dword ptr [ESI + 0x2c],EAX      ; 004038ef | DAT_00622040
    MOV AH,byte ptr [ESI + 0x13]        ; 004038f2 | DAT_00622024+3
    ADD ESP,0x8                         ; 004038f5
    TEST AH,0x80                        ; 004038f8
    JZ 0x00403953                       ; 004038fb
        ;   XREF to: 00403953 (CONDITIONAL_JUMP)  ; LAB_00403953
    MOV EAX,dword ptr [ESP + 0x18]      ; 004038fd
        ;   Label: LAB_004038fd
    ADD ESI,0x30                        ; 00403901
    INC EBP                             ; 00403904
    MOV ECX,dword ptr [EAX + 0x8]       ; 00403905
    ADD EDI,0xc                         ; 00403908
    CMP EBP,ECX                         ; 0040390b
    JL 0x004038e3                       ; 0040390d
        ;   XREF to: 004038e3 (CONDITIONAL_JUMP)  ; LAB_004038e3
    MOV EBX,dword ptr [0x0070ca60]      ; 0040390f | DAT_0070ca60
        ;   Label: LAB_0040390f
    TEST EBX,EBX                        ; 00403915
    JNZ 0x0040391f                      ; 00403917
        ;   XREF to: 0040391f (CONDITIONAL_JUMP)  ; LAB_0040391f
    MOV dword ptr [0x0070ca64],EBX      ; 00403919 | DAT_0070ca64
    MOV ESI,dword ptr [ESP + 0x18]      ; 0040391f
        ;   Label: LAB_0040391f
    MOV EAX,dword ptr [ESP]             ; 00403923
    CMP EAX,dword ptr [ESI + 0x8]       ; 00403926
    JZ 0x00403958                       ; 00403929
        ;   XREF to: 00403958 (CONDITIONAL_JUMP)  ; LAB_00403958
    MOV ESI,dword ptr [ESP + 0x18]      ; 0040392b
        ;   Label: LAB_0040392b
    MOV ESI,dword ptr [ESI + 0x8]       ; 0040392f
    LEA EAX,[ESI*0x4 + 0x0]             ; 00403932
    SUB EAX,ESI                         ; 00403939
    LEA ESI,[EAX*0x4 + 0x0]             ; 0040393b
    MOV EAX,dword ptr [ESP + 0x18]      ; 00403942
    ADD EAX,0xc                         ; 00403946
    ADD EAX,ESI                         ; 00403949
    ADD ESP,0x4                         ; 0040394b
    POP EBP                             ; 0040394e
    POP EDI                             ; 0040394f
    POP ESI                             ; 00403950
    POP EBX                             ; 00403951
    RET                                 ; 00403952
    INC dword ptr [ESP]                 ; 00403953
        ;   Label: LAB_00403953
    JMP 0x004038fd                      ; 00403956
        ;   XREF to: 004038fd (UNCONDITIONAL_JUMP)  ; LAB_004038fd
    XOR EBP,EBP                         ; 00403958
        ;   Label: LAB_00403958
    MOV dword ptr [0x006141e0],EBP      ; 0040395a | DAT_006141e0
    JMP 0x0040392b                      ; 00403960
        ;   XREF to: 0040392b (UNCONDITIONAL_JUMP)  ; LAB_0040392b

