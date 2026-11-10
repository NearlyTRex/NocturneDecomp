; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_normalizeTextureCoords_FUN_00515990(int param_1,int param_2)
;
;
; XREF[4]:
;   core_asgaya.cpp_FUN_005a23c0 at 005a2662
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_00517480 at 00517620
;   engine_prim.c_renderPolygonSoftware_FUN_00515e80 at 0051609f
;   engine_prim.c_renderScanlinePolygon_FUN_00516de0 at 005170fa
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515990
        ;   Label: engine_prim.c_normalizeTextureCoords_FUN_00515990
    PUSH ESI                            ; 00515991
    PUSH EDI                            ; 00515992
    PUSH EBP                            ; 00515993
    MOV EBX,dword ptr [ESP + 0x14]      ; 00515994
    MOV EBP,dword ptr [ESP + 0x18]      ; 00515998
    MOV ESI,0x7fffffff                  ; 0051599c
    XOR EAX,EAX                         ; 005159a1
    TEST EBP,EBP                        ; 005159a3
    JLE 0x005159ba                      ; 005159a5
        ;   XREF to: 005159ba (CONDITIONAL_JUMP)  ; LAB_005159ba
    MOV ECX,EBX                         ; 005159a7
    MOV EDX,dword ptr [ECX + 0x8]       ; 005159a9
        ;   Label: LAB_005159a9
    CMP ESI,EDX                         ; 005159ac
    JLE 0x005159b2                      ; 005159ae
        ;   XREF to: 005159b2 (CONDITIONAL_JUMP)  ; LAB_005159b2
    MOV ESI,EDX                         ; 005159b0
    INC EAX                             ; 005159b2
        ;   Label: LAB_005159b2
    ADD ECX,0x30                        ; 005159b3
    CMP EAX,EBP                         ; 005159b6
    JL 0x005159a9                       ; 005159b8
        ;   XREF to: 005159a9 (CONDITIONAL_JUMP)  ; LAB_005159a9
    XOR EDI,EDI                         ; 005159ba
        ;   Label: LAB_005159ba
    TEST EBP,EBP                        ; 005159bc
    JLE 0x005159d1                      ; 005159be
        ;   XREF to: 005159d1 (CONDITIONAL_JUMP)  ; LAB_005159d1
    MOV ECX,EBX                         ; 005159c0
    MOV EBX,dword ptr [ECX + 0x8]       ; 005159c2
        ;   Label: LAB_005159c2
    TEST EBX,EBX                        ; 005159c5
    JNZ 0x005159d6                      ; 005159c7
        ;   XREF to: 005159d6 (CONDITIONAL_JUMP)  ; LAB_005159d6
    INC EDI                             ; 005159c9
    ADD ECX,0x30                        ; 005159ca
    CMP EDI,EBP                         ; 005159cd
    JL 0x005159c2                       ; 005159cf
        ;   XREF to: 005159c2 (CONDITIONAL_JUMP)  ; LAB_005159c2
    POP EBP                             ; 005159d1
        ;   Label: LAB_005159d1
    POP EDI                             ; 005159d2
    POP ESI                             ; 005159d3
    POP EBX                             ; 005159d4
    RET                                 ; 005159d5
    MOV EDX,ESI                         ; 005159d6
        ;   Label: LAB_005159d6
    MOV EAX,dword ptr [ECX + 0x18]      ; 005159d8
    IMUL EDX                            ; 005159db
    IDIV EBX                            ; 005159dd
    MOV dword ptr [ECX + 0x18],EAX      ; 005159df
    MOV EDX,ESI                         ; 005159e2
    MOV EBX,dword ptr [ECX + 0x8]       ; 005159e4
    MOV EAX,dword ptr [ECX + 0x1c]      ; 005159e7
    IMUL EDX                            ; 005159ea
    IDIV EBX                            ; 005159ec
    MOV EDX,0x1000000                   ; 005159ee
    MOV EBX,dword ptr [ECX + 0x8]       ; 005159f3
    MOV dword ptr [ECX + 0x1c],EAX      ; 005159f6
    MOV EAX,ESI                         ; 005159f9
    IMUL EDX                            ; 005159fb
    IDIV EBX                            ; 005159fd
    MOV dword ptr [ECX + 0x8],EAX       ; 005159ff
    INC EDI                             ; 00515a02
    ADD ECX,0x30                        ; 00515a03
    CMP EDI,EBP                         ; 00515a06
    JL 0x005159c2                       ; 00515a08
        ;   XREF to: 005159c2 (CONDITIONAL_JUMP)  ; LAB_005159c2
    POP EBP                             ; 00515a0a
    POP EDI                             ; 00515a0b
    POP ESI                             ; 00515a0c
    POP EBX                             ; 00515a0d
    RET                                 ; 00515a0e

