; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_transformAndBufferVertices_FUN_00403840(SMRGLHeaderExtended *mrgl)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   mrgl
;
; XREF[1]:
;   engine_3d.c_dispatchMRGLToRenderer_FUN_00407820 at 0040785d
;
; Referenced Globals:
;   undefined4 DAT_0061b4c0
;   undefined4 DAT_00629014
;   undefined4 DAT_00629024+3
;   undefined4 DAT_00629040
;   undefined4 DAT_00713a60
;   undefined4 DAT_00713a64
;   undefined4 DAT_00713a94
;   undefined4 DAT_01c51cac
;
; Called Functions:
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403840
        ;   Label: engine_3d.c_transformAndBufferVertices_FUN_00403840
    PUSH ESI                            ; 00403841
    PUSH EDI                            ; 00403842
    PUSH EBP                            ; 00403843
    SUB ESP,0x4                         ; 00403844
    MOV ESI,dword ptr [ESP + 0x18]      ; 00403847
    MOV EDX,0x1                         ; 0040384b
    MOV EBX,dword ptr [0x00713a60]      ; 00403850 | DAT_00713a60
    MOV ESI,dword ptr [ESI + 0x4]       ; 00403856
    MOV EDI,dword ptr [ESP + 0x18]      ; 00403859
    ADD ESI,EBX                         ; 0040385d
    XOR ECX,ECX                         ; 0040385f
    LEA EAX,[ESI*0x4 + 0x0]             ; 00403861
    XOR EBP,EBP                         ; 00403868
    SUB EAX,ESI                         ; 0040386a
    MOV ESI,0x629014                    ; 0040386c | DAT_00629014
    SHL EAX,0x4                         ; 00403871
    MOV dword ptr [0x0061b4c0],EDX      ; 00403874 | DAT_0061b4c0
    ADD ESI,EAX                         ; 0040387a
    MOV EAX,dword ptr [ESP + 0x18]      ; 0040387c
    ADD EDI,0xc                         ; 00403880
    MOV dword ptr [ESP],ECX             ; 00403883
    MOV EDX,dword ptr [EAX + 0x8]       ; 00403886
    MOV dword ptr [0x00713a94],EDI      ; 00403889 | DAT_00713a94
    TEST EDX,EDX                        ; 0040388f
    JLE 0x004038bf                      ; 00403891
        ;   XREF to: 004038bf (CONDITIONAL_JUMP)  ; LAB_004038bf
    PUSH EDI                            ; 00403893
        ;   Label: LAB_00403893
    PUSH ESI                            ; 00403894
    CALL engine_special.cpp_FUN_00580173 ; 00403895
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x01c51cac]                ; 0040389a | DAT_01c51cac
    MOV dword ptr [ESI + 0x2c],EAX      ; 0040389f | DAT_00629040
    MOV AH,byte ptr [ESI + 0x13]        ; 004038a2 | DAT_00629024+3
    ADD ESP,0x8                         ; 004038a5
    TEST AH,0x80                        ; 004038a8
    JZ 0x00403903                       ; 004038ab
        ;   XREF to: 00403903 (CONDITIONAL_JUMP)  ; LAB_00403903
    MOV EAX,dword ptr [ESP + 0x18]      ; 004038ad
        ;   Label: LAB_004038ad
    ADD ESI,0x30                        ; 004038b1
    INC EBP                             ; 004038b4
    MOV ECX,dword ptr [EAX + 0x8]       ; 004038b5
    ADD EDI,0xc                         ; 004038b8
    CMP EBP,ECX                         ; 004038bb
    JL 0x00403893                       ; 004038bd
        ;   XREF to: 00403893 (CONDITIONAL_JUMP)  ; LAB_00403893
    MOV EBX,dword ptr [0x00713a60]      ; 004038bf | DAT_00713a60
        ;   Label: LAB_004038bf
    TEST EBX,EBX                        ; 004038c5
    JNZ 0x004038cf                      ; 004038c7
        ;   XREF to: 004038cf (CONDITIONAL_JUMP)  ; LAB_004038cf
    MOV dword ptr [0x00713a64],EBX      ; 004038c9 | DAT_00713a64
    MOV ESI,dword ptr [ESP + 0x18]      ; 004038cf
        ;   Label: LAB_004038cf
    MOV EAX,dword ptr [ESP]             ; 004038d3
    CMP EAX,dword ptr [ESI + 0x8]       ; 004038d6
    JZ 0x00403908                       ; 004038d9
        ;   XREF to: 00403908 (CONDITIONAL_JUMP)  ; LAB_00403908
    MOV ESI,dword ptr [ESP + 0x18]      ; 004038db
        ;   Label: LAB_004038db
    MOV ESI,dword ptr [ESI + 0x8]       ; 004038df
    LEA EAX,[ESI*0x4 + 0x0]             ; 004038e2
    SUB EAX,ESI                         ; 004038e9
    LEA ESI,[EAX*0x4 + 0x0]             ; 004038eb
    MOV EAX,dword ptr [ESP + 0x18]      ; 004038f2
    ADD EAX,0xc                         ; 004038f6
    ADD EAX,ESI                         ; 004038f9
    ADD ESP,0x4                         ; 004038fb
    POP EBP                             ; 004038fe
    POP EDI                             ; 004038ff
    POP ESI                             ; 00403900
    POP EBX                             ; 00403901
    RET                                 ; 00403902
    INC dword ptr [ESP]                 ; 00403903
        ;   Label: LAB_00403903
    JMP 0x004038ad                      ; 00403906
        ;   XREF to: 004038ad (UNCONDITIONAL_JUMP)  ; LAB_004038ad
    XOR EBP,EBP                         ; 00403908
        ;   Label: LAB_00403908
    MOV dword ptr [0x0061b4c0],EBP      ; 0040390a | DAT_0061b4c0
    JMP 0x004038db                      ; 00403910
        ;   XREF to: 004038db (UNCONDITIONAL_JUMP)  ; LAB_004038db

