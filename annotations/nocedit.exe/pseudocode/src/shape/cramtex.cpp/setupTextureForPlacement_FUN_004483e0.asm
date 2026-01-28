; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_cramtex_cpp_setupTextureForPlacement_FUN_004483e0 (SCramWorkingEntry *destination,SCramWorkingEntry *source)
;
; Parameters:
; SCramWorkingEntry * Stack[0x4]:4   destination
; SCramWorkingEntry * Stack[0x8]:4   source
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004483e0
        ;   Label: shape_cramtex.cpp_setupTextureForPlacement_FUN_004483e0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004483e1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004483e5
    MOV ECX,dword ptr [EDX]             ; 004483e9
    MOV dword ptr [EAX + 0x10],ECX      ; 004483eb
    MOV ECX,dword ptr [EDX + 0x14]      ; 004483ee
    MOV dword ptr [EAX + 0x40],ECX      ; 004483f1
    MOV ECX,dword ptr [EDX + 0x4]       ; 004483f4
    MOV dword ptr [EAX + 0x1c],ECX      ; 004483f7
    MOV EDX,dword ptr [EDX + 0x8]       ; 004483fa
    MOV dword ptr [EAX + 0x20],EDX      ; 004483fd
    CMP dword ptr [EAX + 0x40],0x0      ; 00448400
    JZ 0x0044842a                       ; 00448404
        ;   XREF to: 0044842a (CONDITIONAL_JUMP)  ; LAB_0044842a
    MOV EDX,dword ptr [EAX + 0xc]       ; 00448406
    MOV dword ptr [EAX + 0x14],EDX      ; 00448409
    MOV EDX,dword ptr [EAX + 0x8]       ; 0044840c
    MOV dword ptr [EAX + 0x18],EDX      ; 0044840f
        ;   Label: LAB_0044840f
    MOV ECX,dword ptr [EAX + 0x14]      ; 00448412
    MOV EDX,dword ptr [EAX + 0x1c]      ; 00448415
    ADD EDX,ECX                         ; 00448418
    MOV dword ptr [EAX + 0x24],EDX      ; 0044841a
    MOV EBX,dword ptr [EAX + 0x18]      ; 0044841d
    MOV EDX,dword ptr [EAX + 0x20]      ; 00448420
    ADD EDX,EBX                         ; 00448423
    MOV dword ptr [EAX + 0x28],EDX      ; 00448425
    POP EBX                             ; 00448428
    RET                                 ; 00448429
    MOV EDX,dword ptr [EAX + 0x8]       ; 0044842a
        ;   Label: LAB_0044842a
    MOV dword ptr [EAX + 0x14],EDX      ; 0044842d
    MOV EDX,dword ptr [EAX + 0xc]       ; 00448430
    JMP 0x0044840f                      ; 00448433
        ;   XREF to: 0044840f (UNCONDITIONAL_JUMP)  ; LAB_0044840f

