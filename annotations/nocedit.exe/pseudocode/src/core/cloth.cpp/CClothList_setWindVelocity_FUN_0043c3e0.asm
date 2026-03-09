; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CClothList_setWindVelocity_FUN_0043c3e0(CClothList *this_ptr,CVector3f *wind_velocity)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   wind_velocity
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c3e0
        ;   Label: core_cloth.cpp_CClothList_setWindVelocity_FUN_0043c3e0
    PUSH ESI                            ; 0043c3e1
    PUSH EDI                            ; 0043c3e2
    MOV ESI,dword ptr [ESP + 0x10]      ; 0043c3e3
    MOV EDX,dword ptr [ESP + 0x14]      ; 0043c3e7
    MOV ECX,dword ptr [ESI]             ; 0043c3eb
    XOR EBX,EBX                         ; 0043c3ed
    TEST ECX,ECX                        ; 0043c3ef
    JLE 0x0043c40e                      ; 0043c3f1
        ;   XREF to: 0043c40e (CONDITIONAL_JUMP)  ; LAB_0043c40e
    MOV ECX,ESI                         ; 0043c3f3
    MOV EAX,dword ptr [ECX + 0x194]     ; 0043c3f5
        ;   Label: LAB_0043c3f5
    ADD EAX,0x3fe64                     ; 0043c3fb
    CMP EAX,EDX                         ; 0043c400
    JNZ 0x0043c412                      ; 0043c402
        ;   XREF to: 0043c412 (CONDITIONAL_JUMP)  ; LAB_0043c412
    INC EBX                             ; 0043c404
    MOV EDI,dword ptr [ESI]             ; 0043c405
    ADD ECX,0x4                         ; 0043c407
    CMP EBX,EDI                         ; 0043c40a
    JL 0x0043c3f5                       ; 0043c40c
        ;   XREF to: 0043c3f5 (CONDITIONAL_JUMP)  ; LAB_0043c3f5
    POP EDI                             ; 0043c40e
        ;   Label: LAB_0043c40e
    POP ESI                             ; 0043c40f
    POP EBX                             ; 0043c410
    RET                                 ; 0043c411
    MOV EDI,dword ptr [EDX]             ; 0043c412
        ;   Label: LAB_0043c412
    MOV dword ptr [EAX],EDI             ; 0043c414
    MOV EDI,dword ptr [EDX + 0x4]       ; 0043c416
    MOV dword ptr [EAX + 0x4],EDI       ; 0043c419
    MOV EDI,dword ptr [EDX + 0x8]       ; 0043c41c
    MOV dword ptr [EAX + 0x8],EDI       ; 0043c41f
    INC EBX                             ; 0043c422
    MOV EDI,dword ptr [ESI]             ; 0043c423
    ADD ECX,0x4                         ; 0043c425
    CMP EBX,EDI                         ; 0043c428
    JL 0x0043c3f5                       ; 0043c42a
        ;   XREF to: 0043c3f5 (CONDITIONAL_JUMP)  ; LAB_0043c3f5
    POP EDI                             ; 0043c42c
    POP ESI                             ; 0043c42d
    POP EBX                             ; 0043c42e
    RET                                 ; 0043c42f

