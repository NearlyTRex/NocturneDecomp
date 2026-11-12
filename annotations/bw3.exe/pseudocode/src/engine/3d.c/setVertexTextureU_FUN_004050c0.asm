; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_setVertexTextureU_FUN_004050c0(SMRGLHeaderExtended *mrgl)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   mrgl
;
; Referenced Globals:
;   undefined4 DAT_0060b02c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004050c0
        ;   Label: engine_3d.c_setVertexTextureU_FUN_004050c0
    MOV ECX,dword ptr [ESP + 0x8]       ; 004050c1
    LEA EDX,[ECX + 0xc]                 ; 004050c5
    MOV EBX,dword ptr [ECX + 0x8]       ; 004050c8
    XOR EAX,EAX                         ; 004050cb
    TEST EBX,EBX                        ; 004050cd
    JLE 0x004050f1                      ; 004050cf
        ;   XREF to: 004050f1 (CONDITIONAL_JUMP)  ; LAB_004050f1
    PUSH ESI                            ; 004050d1
    MOV EBX,dword ptr [ECX + 0x4]       ; 004050d2
        ;   Label: LAB_004050d2
    ADD EBX,EAX                         ; 004050d5
    IMUL EBX,EBX,0x30                   ; 004050d7
    MOV ESI,dword ptr [EDX]             ; 004050da
    SHL ESI,0x10                        ; 004050dc
    MOV dword ptr [EBX + 0x60b02c],ESI  ; 004050df | DAT_0060b02c
    INC EAX                             ; 004050e5
    MOV ESI,dword ptr [ECX + 0x8]       ; 004050e6
    ADD EDX,0x4                         ; 004050e9
    CMP EAX,ESI                         ; 004050ec
    JL 0x004050d2                       ; 004050ee
        ;   XREF to: 004050d2 (CONDITIONAL_JUMP)  ; LAB_004050d2
    POP ESI                             ; 004050f0
    MOV EDX,dword ptr [ECX + 0x8]       ; 004050f1
        ;   Label: LAB_004050f1
    LEA EAX,[ECX + 0xc]                 ; 004050f4
    SHL EDX,0x2                         ; 004050f7
    ADD EAX,EDX                         ; 004050fa
    POP EBX                             ; 004050fc
    RET                                 ; 004050fd

