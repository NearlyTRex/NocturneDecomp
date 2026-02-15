; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_getPixelValue_FUN_0054a9b0(CPackedBitmap *this_ptr,int x_coordinate,int row_index)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x_coordinate
; int              Stack[0xc]:4   row_index
;
; XREF[1]:
;   cockpit_ckptutil.c_FUN_004338f0 at 00433943
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054a9b0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_getPixelValue_FUN_0054a9b0
    PUSH ESI                            ; 0054a9b1
    PUSH EDI                            ; 0054a9b2
    MOV EDI,dword ptr [ESP + 0x10]      ; 0054a9b3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0054a9b7
    MOV EDX,dword ptr [ESP + 0x18]      ; 0054a9bb
    TEST EDX,EDX                        ; 0054a9bf
    JL 0x0054aa05                       ; 0054a9c1
        ;   XREF to: 0054aa05 (CONDITIONAL_JUMP)  ; LAB_0054aa05
    CMP EDX,dword ptr [EDI + 0x1c]      ; 0054a9c3
    JGE 0x0054aa05                      ; 0054a9c6
        ;   XREF to: 0054aa05 (CONDITIONAL_JUMP)  ; LAB_0054aa05
    SHL EDX,0x2                         ; 0054a9c8
    MOV EAX,dword ptr [EDI + 0x20]      ; 0054a9cb
    ADD EDX,EAX                         ; 0054a9ce
    MOV EDI,dword ptr [EDI + 0x14]      ; 0054a9d0
    MOV EAX,dword ptr [EDX]             ; 0054a9d3
    MOV ESI,dword ptr [EDX + 0x4]       ; 0054a9d5
    ADD EAX,EDI                         ; 0054a9d8
    ADD EDI,ESI                         ; 0054a9da
    CMP EAX,EDI                         ; 0054a9dc
    JNC 0x0054aa05                      ; 0054a9de
        ;   XREF to: 0054aa05 (CONDITIONAL_JUMP)  ; LAB_0054aa05
    XOR EDX,EDX                         ; 0054a9e0
        ;   Label: LAB_0054a9e0
    MOV DX,word ptr [EAX]               ; 0054a9e2
    CMP EDX,EBX                         ; 0054a9e5
    JG 0x0054aa05                       ; 0054a9e7
        ;   XREF to: 0054aa05 (CONDITIONAL_JUMP)  ; LAB_0054aa05
    XOR ECX,ECX                         ; 0054a9e9
    MOV CX,word ptr [EAX + 0x2]         ; 0054a9eb
    LEA ESI,[EDX + ECX*0x1]             ; 0054a9ef
    ADD EAX,0x4                         ; 0054a9f2
    CMP EBX,ESI                         ; 0054a9f5
    JL 0x0054aa0e                       ; 0054a9f7
        ;   XREF to: 0054aa0e (CONDITIONAL_JUMP)  ; LAB_0054aa0e
    LEA EDX,[ECX + 0x3]                 ; 0054a9f9
    AND DL,0xfc                         ; 0054a9fc
    ADD EAX,EDX                         ; 0054a9ff
    CMP EAX,EDI                         ; 0054aa01
    JC 0x0054a9e0                       ; 0054aa03
        ;   XREF to: 0054a9e0 (CONDITIONAL_JUMP)  ; LAB_0054a9e0
    MOV EAX,0xffffffff                  ; 0054aa05
        ;   Label: LAB_0054aa05
    POP EDI                             ; 0054aa0a
    POP ESI                             ; 0054aa0b
    POP EBX                             ; 0054aa0c
    RET                                 ; 0054aa0d
    SUB EBX,EDX                         ; 0054aa0e
        ;   Label: LAB_0054aa0e
    MOV AL,byte ptr [EBX + EAX*0x1]     ; 0054aa10
    AND EAX,0xff                        ; 0054aa13
    POP EDI                             ; 0054aa18
    POP ESI                             ; 0054aa19
    POP EBX                             ; 0054aa1a
    RET                                 ; 0054aa1b

