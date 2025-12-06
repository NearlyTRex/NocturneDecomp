; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_superopt.cpp_CObj_translate_FUN_005d2880(CObj * this_ptr, CVector3d * offset)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; CVector3d *      Stack[0x8]:4   offset
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d2880
        ;   Label: shape_superopt.cpp_CObj_translate_FUN_005d2880
    PUSH ESI                            ; 005d2881
    MOV ESI,dword ptr [ESP + 0xc]       ; 005d2882
    MOV EBX,dword ptr [ESP + 0x10]      ; 005d2886
    PUSH ESI                            ; 005d288a
    MOV EAX,dword ptr [ESI + 0x18]      ; 005d288b
    CALL dword ptr [EAX + 0x4]          ; 005d288e
    ADD ESP,0x4                         ; 005d2891
    TEST EAX,EAX                        ; 005d2894
    JZ 0x005d28c7                       ; 005d2896 | LAB_005d28c7
        ;   XREF to: 005d28c7 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESI]             ; 005d2898
    MOV EAX,dword ptr [ESI + 0x4]       ; 005d289a
    XOR EDX,EDX                         ; 005d289d
    TEST ECX,ECX                        ; 005d289f
    JBE 0x005d28c7                      ; 005d28a1 | LAB_005d28c7
        ;   XREF to: 005d28c7 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 005d28a3
    FLD double ptr [EBX]                ; 005d28a4
        ;   Label: LAB_005d28a4
    FADD double ptr [EAX]               ; 005d28a6
    FSTP double ptr [EAX]               ; 005d28a8
    FLD double ptr [EBX + 0x8]          ; 005d28aa
    FADD double ptr [EAX + 0x8]         ; 005d28ad
    FSTP double ptr [EAX + 0x8]         ; 005d28b0
    FLD double ptr [EBX + 0x10]         ; 005d28b3
    FADD double ptr [EAX + 0x10]        ; 005d28b6
    INC EDX                             ; 005d28b9
    FSTP double ptr [EAX + 0x10]        ; 005d28ba
    MOV EDI,dword ptr [ESI]             ; 005d28bd
    ADD EAX,0x38                        ; 005d28bf
    CMP EDX,EDI                         ; 005d28c2
    JC 0x005d28a4                       ; 005d28c4 | LAB_005d28a4
        ;   XREF to: 005d28a4 (CONDITIONAL_JUMP)
    POP EDI                             ; 005d28c6
    POP ESI                             ; 005d28c7
        ;   Label: LAB_005d28c7
    POP EBX                             ; 005d28c8
    RET                                 ; 005d28c9

