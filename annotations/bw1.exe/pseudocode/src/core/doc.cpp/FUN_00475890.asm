; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_doc_cpp_FUN_00475890(int param_1)
;
;
; XREF[1]:
;   core_doc.cpp_FUN_00474ef0 at 00474f0c
;
; Referenced Globals:
;   undefined4 DAT_005fecb8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00475890
        ;   Label: core_doc.cpp_FUN_00475890
    PUSH ESI                            ; 00475891
    MOV EBX,dword ptr [ESP + 0xc]       ; 00475892
    MOV EDX,dword ptr [EBX + 0x2628]    ; 00475896
    XOR ESI,ESI                         ; 0047589c
    TEST EDX,EDX                        ; 0047589e
    JNZ 0x004758d3                      ; 004758a0
        ;   XREF to: 004758d3 (CONDITIONAL_JUMP)  ; LAB_004758d3
    MOV ECX,dword ptr [EBX + 0x20004]   ; 004758a2
        ;   Label: LAB_004758a2
    TEST ECX,ECX                        ; 004758a8
    JZ 0x004758e8                       ; 004758aa
        ;   XREF to: 004758e8 (CONDITIONAL_JUMP)  ; LAB_004758e8
    CMP dword ptr [ECX + 0x2e0],0x3     ; 004758ac
    JNZ 0x004758e8                      ; 004758b3
        ;   XREF to: 004758e8 (CONDITIONAL_JUMP)  ; LAB_004758e8
    FLD float ptr [0x005fecb8]          ; 004758b5 | DAT_005fecb8
        ;   Label: LAB_004758b5
    MOV dword ptr [EBX + 0x1ff5c],0x3   ; 004758bb
    MOV EAX,0x1                         ; 004758c5
    FSTP float ptr [EBX + 0x1ffbc]      ; 004758ca
    POP ESI                             ; 004758d0
    POP EBX                             ; 004758d1
    RET                                 ; 004758d2
    MOV EAX,EDX                         ; 004758d3
        ;   Label: LAB_004758d3
    PUSH EAX                            ; 004758d5
    MOV EDX,dword ptr [EDX + 0x154]     ; 004758d6
    CALL dword ptr [EDX + 0x74]         ; 004758dc
    ADD ESP,0x4                         ; 004758df
    TEST AL,0x4                         ; 004758e2
    JZ 0x004758a2                       ; 004758e4
        ;   XREF to: 004758a2 (CONDITIONAL_JUMP)  ; LAB_004758a2
    JMP 0x004758b5                      ; 004758e6
        ;   XREF to: 004758b5 (UNCONDITIONAL_JUMP)  ; LAB_004758b5
    TEST ESI,ESI                        ; 004758e8
        ;   Label: LAB_004758e8
    JNZ 0x004758b5                      ; 004758ea
        ;   XREF to: 004758b5 (CONDITIONAL_JUMP)  ; LAB_004758b5
    XOR EAX,EAX                         ; 004758ec
    POP ESI                             ; 004758ee
    POP EBX                             ; 004758ef
    RET                                 ; 004758f0

