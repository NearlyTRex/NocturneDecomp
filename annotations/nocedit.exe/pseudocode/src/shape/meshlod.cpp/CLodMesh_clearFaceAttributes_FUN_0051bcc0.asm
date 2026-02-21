; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_meshlod_cpp_CLodMesh_clearFaceAttributes_FUN_0051bcc0(CLodMesh *this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_skeledit.cpp_CDeformableModel_FUN_0058c190 at 0058d09f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051bcc0
        ;   Label: shape_meshlod.cpp_CLodMesh_clearFaceAttributes_FUN_0051bcc0
    PUSH ESI                            ; 0051bcc1
    PUSH EDI                            ; 0051bcc2
    MOV EDX,dword ptr [ESP + 0x10]      ; 0051bcc3
    MOV ECX,dword ptr [EDX + 0x8]       ; 0051bcc7
    MOV dword ptr [EDX + 0x10],0x0      ; 0051bcca
    XOR EDI,EDI                         ; 0051bcd1
    TEST ECX,ECX                        ; 0051bcd3
    JLE 0x0051bd17                      ; 0051bcd5
        ;   XREF to: 0051bd17 (CONDITIONAL_JUMP)  ; LAB_0051bd17
    XOR ESI,ESI                         ; 0051bcd7
    MOV EAX,dword ptr [EDX + 0xc]       ; 0051bcd9
        ;   Label: LAB_0051bcd9
    MOV ECX,ESI                         ; 0051bcdc
    MOV dword ptr [ESI + EAX*0x1],0xffffffff ; 0051bcde
    XOR EAX,EAX                         ; 0051bce5
    MOV EBX,dword ptr [EDX + 0xc]       ; 0051bce7
        ;   Label: LAB_0051bce7
    ADD EBX,ECX                         ; 0051bcea
    MOV dword ptr [EBX + EAX*0x1 + 0x1c],0x0 ; 0051bcec
    MOV EBX,dword ptr [EDX + 0xc]       ; 0051bcf4
    ADD EAX,0x8                         ; 0051bcf7
    ADD EBX,ECX                         ; 0051bcfa
    MOV dword ptr [EBX + EAX*0x1 + 0x18],0x0 ; 0051bcfc
    CMP EAX,0x18                        ; 0051bd04
    JNZ 0x0051bce7                      ; 0051bd07
        ;   XREF to: 0051bce7 (CONDITIONAL_JUMP)  ; LAB_0051bce7
    INC EDI                             ; 0051bd09
    MOV EBX,dword ptr [EDX + 0x8]       ; 0051bd0a
    ADD ESI,0x8c                        ; 0051bd0d
    CMP EDI,EBX                         ; 0051bd13
    JL 0x0051bcd9                       ; 0051bd15
        ;   XREF to: 0051bcd9 (CONDITIONAL_JUMP)  ; LAB_0051bcd9
    MOV dword ptr [EDX + 0x24],0x0      ; 0051bd17
        ;   Label: LAB_0051bd17
    POP EDI                             ; 0051bd1e
    POP ESI                             ; 0051bd1f
    POP EBX                             ; 0051bd20
    RET                                 ; 0051bd21

