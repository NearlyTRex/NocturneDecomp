; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_CPoly_saveVertexPositions_FUN_005cd4b0(CPoly *this_ptr)
;
; Parameters:
; CPoly *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cd4b0
        ;   Label: shape_superopt.cpp_CPoly_saveVertexPositions_FUN_005cd4b0
    PUSH ESI                            ; 005cd4b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005cd4b2
    MOV EAX,dword ptr [EBX + 0x4]       ; 005cd4b6
    SHL EAX,0x3                         ; 005cd4b9
    MOV ECX,dword ptr [EBX]             ; 005cd4bc
    MOV EDX,EAX                         ; 005cd4be
    SHL EAX,0x3                         ; 005cd4c0
    MOV ECX,dword ptr [ECX + 0x4]       ; 005cd4c3
    SUB EAX,EDX                         ; 005cd4c6
    ADD EAX,ECX                         ; 005cd4c8
    LEA EDX,[EAX + 0x18]                ; 005cd4ca
    MOV ESI,dword ptr [EAX]             ; 005cd4cd
    MOV dword ptr [EDX],ESI             ; 005cd4cf
    MOV ESI,dword ptr [EAX + 0x4]       ; 005cd4d1
    MOV dword ptr [EDX + 0x4],ESI       ; 005cd4d4
    MOV ESI,dword ptr [EAX + 0x8]       ; 005cd4d7
    MOV dword ptr [EDX + 0x8],ESI       ; 005cd4da
    MOV ESI,dword ptr [EAX + 0xc]       ; 005cd4dd
    MOV dword ptr [EDX + 0xc],ESI       ; 005cd4e0
    MOV ESI,dword ptr [EAX + 0x10]      ; 005cd4e3
    MOV dword ptr [EDX + 0x10],ESI      ; 005cd4e6
    MOV ESI,dword ptr [EAX + 0x14]      ; 005cd4e9
    MOV dword ptr [EDX + 0x14],ESI      ; 005cd4ec
    MOV EAX,dword ptr [EBX + 0x8]       ; 005cd4ef
    SHL EAX,0x3                         ; 005cd4f2
    MOV EDX,EAX                         ; 005cd4f5
    SHL EAX,0x3                         ; 005cd4f7
    SUB EAX,EDX                         ; 005cd4fa
    ADD EAX,ECX                         ; 005cd4fc
    LEA EDX,[EAX + 0x18]                ; 005cd4fe
    MOV ESI,dword ptr [EAX]             ; 005cd501
    MOV dword ptr [EDX],ESI             ; 005cd503
    MOV ESI,dword ptr [EAX + 0x4]       ; 005cd505
    MOV dword ptr [EDX + 0x4],ESI       ; 005cd508
    MOV ESI,dword ptr [EAX + 0x8]       ; 005cd50b
    MOV dword ptr [EDX + 0x8],ESI       ; 005cd50e
    MOV ESI,dword ptr [EAX + 0xc]       ; 005cd511
    MOV dword ptr [EDX + 0xc],ESI       ; 005cd514
    MOV ESI,dword ptr [EAX + 0x10]      ; 005cd517
    MOV dword ptr [EDX + 0x10],ESI      ; 005cd51a
    MOV ESI,dword ptr [EAX + 0x14]      ; 005cd51d
    MOV dword ptr [EDX + 0x14],ESI      ; 005cd520
    MOV EAX,dword ptr [EBX + 0xc]       ; 005cd523
    SHL EAX,0x3                         ; 005cd526
    MOV EDX,EAX                         ; 005cd529
    SHL EAX,0x3                         ; 005cd52b
    SUB EAX,EDX                         ; 005cd52e
    ADD EAX,ECX                         ; 005cd530
    LEA EDX,[EAX + 0x18]                ; 005cd532
    MOV ECX,dword ptr [EAX]             ; 005cd535
    MOV dword ptr [EDX],ECX             ; 005cd537
    MOV ECX,dword ptr [EAX + 0x4]       ; 005cd539
    MOV dword ptr [EDX + 0x4],ECX       ; 005cd53c
    MOV ECX,dword ptr [EAX + 0x8]       ; 005cd53f
    MOV dword ptr [EDX + 0x8],ECX       ; 005cd542
    MOV ECX,dword ptr [EAX + 0xc]       ; 005cd545
    MOV dword ptr [EDX + 0xc],ECX       ; 005cd548
    MOV ECX,dword ptr [EAX + 0x10]      ; 005cd54b
    MOV dword ptr [EDX + 0x10],ECX      ; 005cd54e
    MOV ECX,dword ptr [EAX + 0x14]      ; 005cd551
    MOV dword ptr [EDX + 0x14],ECX      ; 005cd554
    POP ESI                             ; 005cd557
    POP EBX                             ; 005cd558
    RET                                 ; 005cd559

