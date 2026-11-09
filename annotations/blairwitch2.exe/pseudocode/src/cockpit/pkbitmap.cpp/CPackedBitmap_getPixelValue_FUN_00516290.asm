; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_getPixelValue_FUN_00516290(CPackedBitmap *this_ptr,int x_coordinate,int row_index)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x_coordinate
; int              Stack[0xc]:4   row_index
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516290
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_getPixelValue_FUN_00516290
    PUSH ESI                            ; 00516291
    PUSH EDI                            ; 00516292
    MOV EDI,dword ptr [ESP + 0x10]      ; 00516293
    MOV EBX,dword ptr [ESP + 0x14]      ; 00516297
    MOV EDX,dword ptr [ESP + 0x18]      ; 0051629b
    TEST EDX,EDX                        ; 0051629f
    JL 0x005162e5                       ; 005162a1
        ;   XREF to: 005162e5 (CONDITIONAL_JUMP)  ; LAB_005162e5
    CMP EDX,dword ptr [EDI + 0x1c]      ; 005162a3
    JGE 0x005162e5                      ; 005162a6
        ;   XREF to: 005162e5 (CONDITIONAL_JUMP)  ; LAB_005162e5
    SHL EDX,0x2                         ; 005162a8
    MOV EAX,dword ptr [EDI + 0x20]      ; 005162ab
    ADD EDX,EAX                         ; 005162ae
    MOV EDI,dword ptr [EDI + 0x14]      ; 005162b0
    MOV EAX,dword ptr [EDX]             ; 005162b3
    MOV ESI,dword ptr [EDX + 0x4]       ; 005162b5
    ADD EAX,EDI                         ; 005162b8
    ADD EDI,ESI                         ; 005162ba
    CMP EAX,EDI                         ; 005162bc
    JNC 0x005162e5                      ; 005162be
        ;   XREF to: 005162e5 (CONDITIONAL_JUMP)  ; LAB_005162e5
    XOR EDX,EDX                         ; 005162c0
        ;   Label: LAB_005162c0
    MOV DX,word ptr [EAX]               ; 005162c2
    CMP EDX,EBX                         ; 005162c5
    JG 0x005162e5                       ; 005162c7
        ;   XREF to: 005162e5 (CONDITIONAL_JUMP)  ; LAB_005162e5
    XOR ECX,ECX                         ; 005162c9
    MOV CX,word ptr [EAX + 0x2]         ; 005162cb
    LEA ESI,[EDX + ECX*0x1]             ; 005162cf
    ADD EAX,0x4                         ; 005162d2
    CMP EBX,ESI                         ; 005162d5
    JL 0x005162ee                       ; 005162d7
        ;   XREF to: 005162ee (CONDITIONAL_JUMP)  ; LAB_005162ee
    LEA EDX,[ECX + 0x3]                 ; 005162d9
    AND DL,0xfc                         ; 005162dc
    ADD EAX,EDX                         ; 005162df
    CMP EAX,EDI                         ; 005162e1
    JC 0x005162c0                       ; 005162e3
        ;   XREF to: 005162c0 (CONDITIONAL_JUMP)  ; LAB_005162c0
    MOV EAX,0xffffffff                  ; 005162e5
        ;   Label: LAB_005162e5
    POP EDI                             ; 005162ea
    POP ESI                             ; 005162eb
    POP EBX                             ; 005162ec
    RET                                 ; 005162ed
    SUB EBX,EDX                         ; 005162ee
        ;   Label: LAB_005162ee
    MOV AL,byte ptr [EBX + EAX*0x1]     ; 005162f0
    AND EAX,0xff                        ; 005162f3
    POP EDI                             ; 005162f8
    POP ESI                             ; 005162f9
    POP EBX                             ; 005162fa
    RET                                 ; 005162fb

