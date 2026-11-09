; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_getPixelValue_FUN_005375e0(CPackedBitmap *this_ptr,int x_coordinate,int row_index)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x_coordinate
; int              Stack[0xc]:4   row_index
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005375e0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_getPixelValue_FUN_005375e0
    PUSH ESI                            ; 005375e1
    PUSH EDI                            ; 005375e2
    MOV EDI,dword ptr [ESP + 0x10]      ; 005375e3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005375e7
    MOV EDX,dword ptr [ESP + 0x18]      ; 005375eb
    TEST EDX,EDX                        ; 005375ef
    JL 0x00537635                       ; 005375f1
        ;   XREF to: 00537635 (CONDITIONAL_JUMP)  ; LAB_00537635
    CMP EDX,dword ptr [EDI + 0x1c]      ; 005375f3
    JGE 0x00537635                      ; 005375f6
        ;   XREF to: 00537635 (CONDITIONAL_JUMP)  ; LAB_00537635
    SHL EDX,0x2                         ; 005375f8
    MOV EAX,dword ptr [EDI + 0x20]      ; 005375fb
    ADD EDX,EAX                         ; 005375fe
    MOV EDI,dword ptr [EDI + 0x14]      ; 00537600
    MOV EAX,dword ptr [EDX]             ; 00537603
    MOV ESI,dword ptr [EDX + 0x4]       ; 00537605
    ADD EAX,EDI                         ; 00537608
    ADD EDI,ESI                         ; 0053760a
    CMP EAX,EDI                         ; 0053760c
    JNC 0x00537635                      ; 0053760e
        ;   XREF to: 00537635 (CONDITIONAL_JUMP)  ; LAB_00537635
    XOR EDX,EDX                         ; 00537610
        ;   Label: LAB_00537610
    MOV DX,word ptr [EAX]               ; 00537612
    CMP EDX,EBX                         ; 00537615
    JG 0x00537635                       ; 00537617
        ;   XREF to: 00537635 (CONDITIONAL_JUMP)  ; LAB_00537635
    XOR ECX,ECX                         ; 00537619
    MOV CX,word ptr [EAX + 0x2]         ; 0053761b
    LEA ESI,[EDX + ECX*0x1]             ; 0053761f
    ADD EAX,0x4                         ; 00537622
    CMP EBX,ESI                         ; 00537625
    JL 0x0053763e                       ; 00537627
        ;   XREF to: 0053763e (CONDITIONAL_JUMP)  ; LAB_0053763e
    LEA EDX,[ECX + 0x3]                 ; 00537629
    AND DL,0xfc                         ; 0053762c
    ADD EAX,EDX                         ; 0053762f
    CMP EAX,EDI                         ; 00537631
    JC 0x00537610                       ; 00537633
        ;   XREF to: 00537610 (CONDITIONAL_JUMP)  ; LAB_00537610
    MOV EAX,0xffffffff                  ; 00537635
        ;   Label: LAB_00537635
    POP EDI                             ; 0053763a
    POP ESI                             ; 0053763b
    POP EBX                             ; 0053763c
    RET                                 ; 0053763d
    SUB EBX,EDX                         ; 0053763e
        ;   Label: LAB_0053763e
    MOV AL,byte ptr [EBX + EAX*0x1]     ; 00537640
    AND EAX,0xff                        ; 00537643
    POP EDI                             ; 00537648
    POP ESI                             ; 00537649
    POP EBX                             ; 0053764a
    RET                                 ; 0053764b

