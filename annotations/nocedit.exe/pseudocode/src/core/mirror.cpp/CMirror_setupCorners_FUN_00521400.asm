; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_mirror.cpp_CMirror_setupCorners_FUN_00521400(CMirror * this_ptr, CVector3f * corner1, CVector3f * corner2, CVector3f * corner3, CVector3f * corner4)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   corner1
; CVector3f *      Stack[0xc]:4   corner2
; CVector3f *      Stack[0x10]:4   corner3
; CVector3f *      Stack[0x14]:4   corner4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521400
        ;   Label: core_mirror.cpp_CMirror_setupCorners_FUN_00521400
    PUSH ESI                            ; 00521401
    PUSH EDI                            ; 00521402
    MOV EAX,dword ptr [ESP + 0x10]      ; 00521403
    MOV EDX,dword ptr [ESP + 0x14]      ; 00521407
    MOV EBX,dword ptr [ESP + 0x18]      ; 0052140b
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0052140f
    MOV ESI,dword ptr [ESP + 0x20]      ; 00521413
    CMP EAX,EDX                         ; 00521417
    JNZ 0x00521454                      ; 00521419 | LAB_00521454
        ;   XREF to: 00521454 (CONDITIONAL_JUMP)
    LEA EDX,[EAX + 0xc]                 ; 0052141b
        ;   Label: LAB_0052141b
    CMP EDX,EBX                         ; 0052141e
    JZ 0x00521432                       ; 00521420 | LAB_00521432
        ;   XREF to: 00521432 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBX]             ; 00521422
    MOV dword ptr [EDX],EDI             ; 00521424
    MOV EDI,dword ptr [EBX + 0x4]       ; 00521426
    MOV dword ptr [EDX + 0x4],EDI       ; 00521429
    MOV EDI,dword ptr [EBX + 0x8]       ; 0052142c
    MOV dword ptr [EDX + 0x8],EDI       ; 0052142f
    LEA EDX,[EAX + 0x18]                ; 00521432
        ;   Label: LAB_00521432
    CMP EDX,ECX                         ; 00521435
    JZ 0x00521449                       ; 00521437 | LAB_00521449
        ;   XREF to: 00521449 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ECX]             ; 00521439
    MOV dword ptr [EDX],EBX             ; 0052143b
    MOV EBX,dword ptr [ECX + 0x4]       ; 0052143d
    MOV dword ptr [EDX + 0x4],EBX       ; 00521440
    MOV EBX,dword ptr [ECX + 0x8]       ; 00521443
    MOV dword ptr [EDX + 0x8],EBX       ; 00521446
    ADD EAX,0x24                        ; 00521449
        ;   Label: LAB_00521449
    CMP EAX,ESI                         ; 0052144c
    JNZ 0x00521466                      ; 0052144e | LAB_00521466
        ;   XREF to: 00521466 (CONDITIONAL_JUMP)
    POP EDI                             ; 00521450
    POP ESI                             ; 00521451
    POP EBX                             ; 00521452
    RET                                 ; 00521453
    MOV EDI,dword ptr [EDX]             ; 00521454
        ;   Label: LAB_00521454
    MOV dword ptr [EAX],EDI             ; 00521456
    MOV EDI,dword ptr [EDX + 0x4]       ; 00521458
    MOV dword ptr [EAX + 0x4],EDI       ; 0052145b
    MOV EDI,dword ptr [EDX + 0x8]       ; 0052145e
    MOV dword ptr [EAX + 0x8],EDI       ; 00521461
    JMP 0x0052141b                      ; 00521464 | LAB_0052141b
        ;   XREF to: 0052141b (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESI]             ; 00521466
        ;   Label: LAB_00521466
    MOV dword ptr [EAX],EDX             ; 00521468
    MOV EDX,dword ptr [ESI + 0x4]       ; 0052146a
    MOV dword ptr [EAX + 0x4],EDX       ; 0052146d
    MOV EDX,dword ptr [ESI + 0x8]       ; 00521470
    MOV dword ptr [EAX + 0x8],EDX       ; 00521473
    POP EDI                             ; 00521476
    POP ESI                             ; 00521477
    POP EBX                             ; 00521478
    RET                                 ; 00521479

