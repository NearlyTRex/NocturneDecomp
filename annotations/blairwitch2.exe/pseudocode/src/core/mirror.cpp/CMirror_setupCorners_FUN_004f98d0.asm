; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mirror_cpp_CMirror_setupCorners_FUN_004f98d0(CMirror *this_ptr,CVector3f *corner1,CVector3f *corner2,CVector3f *corner3,CVector3f *corner4)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   corner1
; CVector3f *      Stack[0xc]:4   corner2
; CVector3f *      Stack[0x10]:4   corner3
; CVector3f *      Stack[0x14]:4   corner4
;
; XREF[1]:
;   core_glass.cpp_CGlass_setup_FUN_004c49e0 at 004c4e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f98d0
        ;   Label: core_mirror.cpp_CMirror_setupCorners_FUN_004f98d0
    PUSH ESI                            ; 004f98d1
    PUSH EDI                            ; 004f98d2
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f98d3
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f98d7
    MOV EBX,dword ptr [ESP + 0x18]      ; 004f98db
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004f98df
    MOV ESI,dword ptr [ESP + 0x20]      ; 004f98e3
    CMP EAX,EDX                         ; 004f98e7
    JNZ 0x004f9924                      ; 004f98e9
        ;   XREF to: 004f9924 (CONDITIONAL_JUMP)  ; LAB_004f9924
    LEA EDX,[EAX + 0xc]                 ; 004f98eb
        ;   Label: LAB_004f98eb
    CMP EDX,EBX                         ; 004f98ee
    JZ 0x004f9902                       ; 004f98f0
        ;   XREF to: 004f9902 (CONDITIONAL_JUMP)  ; LAB_004f9902
    MOV EDI,dword ptr [EBX]             ; 004f98f2
    MOV dword ptr [EDX],EDI             ; 004f98f4
    MOV EDI,dword ptr [EBX + 0x4]       ; 004f98f6
    MOV dword ptr [EDX + 0x4],EDI       ; 004f98f9
    MOV EDI,dword ptr [EBX + 0x8]       ; 004f98fc
    MOV dword ptr [EDX + 0x8],EDI       ; 004f98ff
    LEA EDX,[EAX + 0x18]                ; 004f9902
        ;   Label: LAB_004f9902
    CMP EDX,ECX                         ; 004f9905
    JZ 0x004f9919                       ; 004f9907
        ;   XREF to: 004f9919 (CONDITIONAL_JUMP)  ; LAB_004f9919
    MOV EBX,dword ptr [ECX]             ; 004f9909
    MOV dword ptr [EDX],EBX             ; 004f990b
    MOV EBX,dword ptr [ECX + 0x4]       ; 004f990d
    MOV dword ptr [EDX + 0x4],EBX       ; 004f9910
    MOV EBX,dword ptr [ECX + 0x8]       ; 004f9913
    MOV dword ptr [EDX + 0x8],EBX       ; 004f9916
    ADD EAX,0x24                        ; 004f9919
        ;   Label: LAB_004f9919
    CMP EAX,ESI                         ; 004f991c
    JNZ 0x004f9936                      ; 004f991e
        ;   XREF to: 004f9936 (CONDITIONAL_JUMP)  ; LAB_004f9936
    POP EDI                             ; 004f9920
    POP ESI                             ; 004f9921
    POP EBX                             ; 004f9922
    RET                                 ; 004f9923
    MOV EDI,dword ptr [EDX]             ; 004f9924
        ;   Label: LAB_004f9924
    MOV dword ptr [EAX],EDI             ; 004f9926
    MOV EDI,dword ptr [EDX + 0x4]       ; 004f9928
    MOV dword ptr [EAX + 0x4],EDI       ; 004f992b
    MOV EDI,dword ptr [EDX + 0x8]       ; 004f992e
    MOV dword ptr [EAX + 0x8],EDI       ; 004f9931
    JMP 0x004f98eb                      ; 004f9934
        ;   XREF to: 004f98eb (UNCONDITIONAL_JUMP)  ; LAB_004f98eb
    MOV EDX,dword ptr [ESI]             ; 004f9936
        ;   Label: LAB_004f9936
    MOV dword ptr [EAX],EDX             ; 004f9938
    MOV EDX,dword ptr [ESI + 0x4]       ; 004f993a
    MOV dword ptr [EAX + 0x4],EDX       ; 004f993d
    MOV EDX,dword ptr [ESI + 0x8]       ; 004f9940
    MOV dword ptr [EAX + 0x8],EDX       ; 004f9943
    POP EDI                             ; 004f9946
    POP ESI                             ; 004f9947
    POP EBX                             ; 004f9948
    RET                                 ; 004f9949

