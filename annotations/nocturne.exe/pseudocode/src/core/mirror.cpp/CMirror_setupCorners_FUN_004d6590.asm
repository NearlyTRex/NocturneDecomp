; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_CMirror_setupCorners_FUN_004d6590(CMirror *this_ptr,CVector3f *corner1,CVector3f *corner2,CVector3f *corner3,CVector3f *corner4)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   corner1
; CVector3f *      Stack[0xc]:4   corner2
; CVector3f *      Stack[0x10]:4   corner3
; CVector3f *      Stack[0x14]:4   corner4
;
; XREF[1]:
;   core_glass.cpp_CGlass_setup_FUN_004abc90 at 004ac041
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6590
        ;   Label: core_mirror.cpp_CMirror_setupCorners_FUN_004d6590
    PUSH ESI                            ; 004d6591
    PUSH EDI                            ; 004d6592
    MOV EAX,dword ptr [ESP + 0x10]      ; 004d6593
    MOV EDX,dword ptr [ESP + 0x14]      ; 004d6597
    MOV EBX,dword ptr [ESP + 0x18]      ; 004d659b
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004d659f
    MOV ESI,dword ptr [ESP + 0x20]      ; 004d65a3
    CMP EAX,EDX                         ; 004d65a7
    JNZ 0x004d65e4                      ; 004d65a9
        ;   XREF to: 004d65e4 (CONDITIONAL_JUMP)  ; LAB_004d65e4
    LEA EDX,[EAX + 0xc]                 ; 004d65ab
        ;   Label: LAB_004d65ab
    CMP EDX,EBX                         ; 004d65ae
    JZ 0x004d65c2                       ; 004d65b0
        ;   XREF to: 004d65c2 (CONDITIONAL_JUMP)  ; LAB_004d65c2
    MOV EDI,dword ptr [EBX]             ; 004d65b2
    MOV dword ptr [EDX],EDI             ; 004d65b4
    MOV EDI,dword ptr [EBX + 0x4]       ; 004d65b6
    MOV dword ptr [EDX + 0x4],EDI       ; 004d65b9
    MOV EDI,dword ptr [EBX + 0x8]       ; 004d65bc
    MOV dword ptr [EDX + 0x8],EDI       ; 004d65bf
    LEA EDX,[EAX + 0x18]                ; 004d65c2
        ;   Label: LAB_004d65c2
    CMP EDX,ECX                         ; 004d65c5
    JZ 0x004d65d9                       ; 004d65c7
        ;   XREF to: 004d65d9 (CONDITIONAL_JUMP)  ; LAB_004d65d9
    MOV EBX,dword ptr [ECX]             ; 004d65c9
    MOV dword ptr [EDX],EBX             ; 004d65cb
    MOV EBX,dword ptr [ECX + 0x4]       ; 004d65cd
    MOV dword ptr [EDX + 0x4],EBX       ; 004d65d0
    MOV EBX,dword ptr [ECX + 0x8]       ; 004d65d3
    MOV dword ptr [EDX + 0x8],EBX       ; 004d65d6
    ADD EAX,0x24                        ; 004d65d9
        ;   Label: LAB_004d65d9
    CMP EAX,ESI                         ; 004d65dc
    JNZ 0x004d65f6                      ; 004d65de
        ;   XREF to: 004d65f6 (CONDITIONAL_JUMP)  ; LAB_004d65f6
    POP EDI                             ; 004d65e0
    POP ESI                             ; 004d65e1
    POP EBX                             ; 004d65e2
    RET                                 ; 004d65e3
    MOV EDI,dword ptr [EDX]             ; 004d65e4
        ;   Label: LAB_004d65e4
    MOV dword ptr [EAX],EDI             ; 004d65e6
    MOV EDI,dword ptr [EDX + 0x4]       ; 004d65e8
    MOV dword ptr [EAX + 0x4],EDI       ; 004d65eb
    MOV EDI,dword ptr [EDX + 0x8]       ; 004d65ee
    MOV dword ptr [EAX + 0x8],EDI       ; 004d65f1
    JMP 0x004d65ab                      ; 004d65f4
        ;   XREF to: 004d65ab (UNCONDITIONAL_JUMP)  ; LAB_004d65ab
    MOV EDX,dword ptr [ESI]             ; 004d65f6
        ;   Label: LAB_004d65f6
    MOV dword ptr [EAX],EDX             ; 004d65f8
    MOV EDX,dword ptr [ESI + 0x4]       ; 004d65fa
    MOV dword ptr [EAX + 0x4],EDX       ; 004d65fd
    MOV EDX,dword ptr [ESI + 0x8]       ; 004d6600
    MOV dword ptr [EAX + 0x8],EDX       ; 004d6603
    POP EDI                             ; 004d6606
    POP ESI                             ; 004d6607
    POP EBX                             ; 004d6608
    RET                                 ; 004d6609

