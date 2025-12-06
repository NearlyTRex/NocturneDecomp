; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_cramtex.cpp_checkTextureCollision_FUN_00448390(SCramWorkingEntry * placed_texture, SCramWorkingEntry * test_texture)
;
; Parameters:
; SCramWorkingEntry * Stack[0x4]:4   placed_texture
; SCramWorkingEntry * Stack[0x8]:4   test_texture
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448390
        ;   Label: shape_cramtex.cpp_checkTextureCollision_FUN_00448390
    PUSH ESI                            ; 00448391
    PUSH EDI                            ; 00448392
    PUSH EBP                            ; 00448393
    MOV EDX,dword ptr [ESP + 0x14]      ; 00448394
    MOV EAX,dword ptr [ESP + 0x18]      ; 00448398
    MOV EBX,dword ptr [EAX]             ; 0044839c
    CMP EBX,dword ptr [EDX + 0x10]      ; 0044839e
    JNZ 0x004483cd                      ; 004483a1 | LAB_004483cd
        ;   XREF to: 004483cd (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EAX + 0xc]       ; 004483a3
    CMP ESI,dword ptr [EDX + 0x1c]      ; 004483a6
    JLE 0x004483cd                      ; 004483a9 | LAB_004483cd
        ;   XREF to: 004483cd (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EAX + 0x10]      ; 004483ab
    CMP EDI,dword ptr [EDX + 0x20]      ; 004483ae
    JLE 0x004483cd                      ; 004483b1 | LAB_004483cd
        ;   XREF to: 004483cd (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [EAX + 0x4]       ; 004483b3
    CMP EBP,dword ptr [EDX + 0x24]      ; 004483b6
    JGE 0x004483cd                      ; 004483b9 | LAB_004483cd
        ;   XREF to: 004483cd (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EAX + 0x8]       ; 004483bb
    CMP ECX,dword ptr [EDX + 0x28]      ; 004483be
    JGE 0x004483cd                      ; 004483c1 | LAB_004483cd
        ;   XREF to: 004483cd (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 004483c3
    POP EBP                             ; 004483c8
    POP EDI                             ; 004483c9
    POP ESI                             ; 004483ca
    POP EBX                             ; 004483cb
    RET                                 ; 004483cc
    XOR EAX,EAX                         ; 004483cd
        ;   Label: LAB_004483cd
    POP EBP                             ; 004483cf
    POP EDI                             ; 004483d0
    POP ESI                             ; 004483d1
    POP EBX                             ; 004483d2
    RET                                 ; 004483d3

