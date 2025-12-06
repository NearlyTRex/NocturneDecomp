; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_superopt.cpp_CObj_setAllPolyMaterialIds_FUN_005d3ed0(CObj * this_ptr, int material_id)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   material_id
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d3ed0
        ;   Label: shape_superopt.cpp_CObj_setAllPolyMaterialIds_FUN_005d3ed0
    PUSH EDI                            ; 005d3ed1
    PUSH EBP                            ; 005d3ed2
    MOV EDI,dword ptr [ESP + 0x10]      ; 005d3ed3
    MOV EBP,dword ptr [ESP + 0x14]      ; 005d3ed7
    MOV EDX,dword ptr [EDI + 0x8]       ; 005d3edb
    XOR EBX,EBX                         ; 005d3ede
    TEST EDX,EDX                        ; 005d3ee0
    JBE 0x005d3f03                      ; 005d3ee2 | LAB_005d3f03
        ;   XREF to: 005d3f03 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 005d3ee4
    XOR ESI,ESI                         ; 005d3ee5
    MOV EAX,dword ptr [EDI + 0xc]       ; 005d3ee7
        ;   Label: LAB_005d3ee7
    PUSH EBP                            ; 005d3eea
    ADD EAX,ESI                         ; 005d3eeb
    PUSH EAX                            ; 005d3eed
    MOV EDX,dword ptr [EAX + 0x64]      ; 005d3eee
    INC EBX                             ; 005d3ef1
    ADD ESI,0x68                        ; 005d3ef2
    CALL dword ptr [EDX + 0x50]         ; 005d3ef5
    MOV ECX,dword ptr [EDI + 0x8]       ; 005d3ef8
    ADD ESP,0x8                         ; 005d3efb
    CMP EBX,ECX                         ; 005d3efe
    JC 0x005d3ee7                       ; 005d3f00 | LAB_005d3ee7
        ;   XREF to: 005d3ee7 (CONDITIONAL_JUMP)
    POP ESI                             ; 005d3f02
    POP EBP                             ; 005d3f03
        ;   Label: LAB_005d3f03
    POP EDI                             ; 005d3f04
    POP EBX                             ; 005d3f05
    RET                                 ; 005d3f06

