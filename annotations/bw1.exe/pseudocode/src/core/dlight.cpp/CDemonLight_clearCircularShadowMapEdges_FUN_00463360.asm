; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_clearCircularShadowMapEdges_FUN_00463360(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_set.cpp_CDemonSet_initScene_FUN_0054ec60 at 0054edc4
;   core_set.cpp_FUN_00550260 at 0055036f
;   core_set.cpp_FUN_00550da0 at 00550f11
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00463360
        ;   Label: core_dlight.cpp_CDemonLight_clearCircularShadowMapEdges_FUN_00463360
    PUSH ESI                            ; 00463361
    PUSH EDI                            ; 00463362
    PUSH EBP                            ; 00463363
    MOV ECX,dword ptr [ESP + 0x14]      ; 00463364
    CMP dword ptr [ECX + 0x1cb8],0x0    ; 00463368
    JZ 0x00463326                       ; 0046336f
        ;   XREF to: 00463326 (CONDITIONAL_JUMP)  ; LAB_00463326
    XOR ESI,ESI                         ; 00463371
    MOV EAX,dword ptr [ECX + 0x1cc4]    ; 00463373
        ;   Label: LAB_00463373
    MOV EDX,EAX                         ; 00463379
    SAR EDX,0x1f                        ; 0046337b
    SUB EAX,EDX                         ; 0046337e
    SAR EAX,0x1                         ; 00463380
    CMP ESI,EAX                         ; 00463382
    JGE 0x00463326                      ; 00463384
        ;   XREF to: 00463326 (CONDITIONAL_JUMP)  ; LAB_00463326
    XOR EBX,EBX                         ; 00463386
    MOV EAX,dword ptr [ECX + 0x1cc0]    ; 00463388
        ;   Label: LAB_00463388
    MOV EDX,EAX                         ; 0046338e
    SAR EDX,0x1f                        ; 00463390
    SUB EAX,EDX                         ; 00463393
    SAR EAX,0x1                         ; 00463395
    CMP EBX,EAX                         ; 00463397
    JL 0x0046339e                       ; 00463399
        ;   XREF to: 0046339e (CONDITIONAL_JUMP)  ; LAB_0046339e
    INC ESI                             ; 0046339b
    JMP 0x00463373                      ; 0046339c
        ;   XREF to: 00463373 (UNCONDITIONAL_JUMP)  ; LAB_00463373
    MOV EDI,EAX                         ; 0046339e
        ;   Label: LAB_0046339e
    MOV EAX,dword ptr [ECX + 0x1cc4]    ; 004633a0
    MOV EDX,EAX                         ; 004633a6
    SAR EDX,0x1f                        ; 004633a8
    SUB EAX,EDX                         ; 004633ab
    SAR EAX,0x1                         ; 004633ad
    MOV EBP,EAX                         ; 004633af
    MOV EDX,dword ptr [ECX + 0x1cc0]    ; 004633b1
    MOV EAX,dword ptr [ECX + 0x1cc4]    ; 004633b7
    IMUL EDX,EAX                        ; 004633bd
    MOV EAX,EDX                         ; 004633c0
    SAR EDX,0x1f                        ; 004633c2
    SHL EDX,0x2                         ; 004633c5
    SBB EAX,EDX                         ; 004633c8
    SAR EAX,0x2                         ; 004633ca
    SUB EDI,EBX                         ; 004633cd
    IMUL EDI,EDI                        ; 004633cf
    SUB EBP,ESI                         ; 004633d2
    IMUL EBP,EBP                        ; 004633d4
    ADD EDI,EBP                         ; 004633d7
    CMP EDI,EAX                         ; 004633d9
    JLE 0x00463459                      ; 004633db
        ;   XREF to: 00463459 (CONDITIONAL_JUMP)  ; LAB_00463459
    MOV EAX,dword ptr [ECX + 0x1cc0]    ; 004633dd
    IMUL EAX,ESI                        ; 004633e3
    MOV EDX,dword ptr [ECX + 0x2f94]    ; 004633e6
    ADD EAX,EBX                         ; 004633ec
    MOV word ptr [EDX + EAX*0x2],0x0    ; 004633ee
    MOV EAX,dword ptr [ECX + 0x1cc0]    ; 004633f4
    LEA EDX,[EAX + -0x1]                ; 004633fa
    IMUL EAX,ESI                        ; 004633fd
    SUB EDX,EBX                         ; 00463400
    ADD EAX,EDX                         ; 00463402
    MOV EDX,dword ptr [ECX + 0x2f94]    ; 00463404
    MOV word ptr [EDX + EAX*0x2],0x0    ; 0046340a
    MOV EAX,dword ptr [ECX + 0x1cc4]    ; 00463410
    DEC EAX                             ; 00463416
    MOV EDX,dword ptr [ECX + 0x1cc0]    ; 00463417
    SUB EAX,ESI                         ; 0046341d
    IMUL EDX,EAX                        ; 0046341f
    MOV EAX,dword ptr [ECX + 0x1cc0]    ; 00463422
    DEC EAX                             ; 00463428
    SUB EAX,EBX                         ; 00463429
    ADD EAX,EDX                         ; 0046342b
    MOV EDX,dword ptr [ECX + 0x2f94]    ; 0046342d
    MOV word ptr [EDX + EAX*0x2],0x0    ; 00463433
    MOV EAX,dword ptr [ECX + 0x1cc4]    ; 00463439
    DEC EAX                             ; 0046343f
    MOV EDX,dword ptr [ECX + 0x1cc0]    ; 00463440
    SUB EAX,ESI                         ; 00463446
    IMUL EAX,EDX                        ; 00463448
    MOV EDX,dword ptr [ECX + 0x2f94]    ; 0046344b
    ADD EAX,EBX                         ; 00463451
    MOV word ptr [EDX + EAX*0x2],0x0    ; 00463453
    INC EBX                             ; 00463459
        ;   Label: LAB_00463459
    JMP 0x00463388                      ; 0046345a
        ;   XREF to: 00463388 (UNCONDITIONAL_JUMP)  ; LAB_00463388

