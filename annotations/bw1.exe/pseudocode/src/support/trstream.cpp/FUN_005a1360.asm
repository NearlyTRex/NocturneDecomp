; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; longlong support_trstream_cpp_FUN_005a1360(uint param_1,int param_2,uint param_3)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a1360
        ;   Label: support_trstream.cpp_FUN_005a1360
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a1364
    MOV ECX,dword ptr [ESP + 0xc]       ; 005a1368
    CMP dword ptr [EDX + 0x4],0x0       ; 005a136c
    JZ 0x005a12e8                       ; 005a1370
        ;   XREF to: 005a12e8 (CONDITIONAL_JUMP)  ; LAB_005a12e8
    CMP ECX,0x1                         ; 005a1376
    JNC 0x005a139d                      ; 005a1379
        ;   XREF to: 005a139d (CONDITIONAL_JUMP)  ; LAB_005a139d
    TEST ECX,ECX                        ; 005a137b
    JNZ 0x005a1390                      ; 005a137d
        ;   XREF to: 005a1390 (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 005a137f
        ;   Label: LAB_005a137f
    JL 0x005a1390                       ; 005a1381
        ;   XREF to: 005a1390 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [EDX + 0x8]       ; 005a1383
    JLE 0x005a13a7                      ; 005a1386
        ;   XREF to: 005a13a7 (CONDITIONAL_JUMP)  ; LAB_005a13a7
    LEA EAX,[EAX]                       ; 005a1388
    MOV EDX,EDX                         ; 005a138e
    ADD EAX,dword ptr [EDX + 0xc]       ; 005a1393
        ;   Label: LAB_005a1393
    JMP 0x005a137f                      ; 005a1396
        ;   XREF to: 005a137f (UNCONDITIONAL_JUMP)  ; LAB_005a137f
    ADD EAX,dword ptr [EDX + 0x8]       ; 005a1398
        ;   Label: LAB_005a1398
    JMP 0x005a137f                      ; 005a139b
        ;   XREF to: 005a137f (UNCONDITIONAL_JUMP)  ; LAB_005a137f
    JBE 0x005a1393                      ; 005a139d
        ;   XREF to: 005a1393 (CONDITIONAL_JUMP)  ; LAB_005a1393
        ;   Label: LAB_005a139d
    CMP ECX,0x2                         ; 005a139f
    JZ 0x005a1398                       ; 005a13a2
        ;   XREF to: 005a1398 (CONDITIONAL_JUMP)  ; LAB_005a1398
    XOR EAX,EAX                         ; 005a13a4
    RET                                 ; 005a13a6
    MOV dword ptr [EDX + 0xc],EAX       ; 005a13a7
        ;   Label: LAB_005a13a7
    MOV EAX,0x1                         ; 005a13aa
    RET                                 ; 005a13af

