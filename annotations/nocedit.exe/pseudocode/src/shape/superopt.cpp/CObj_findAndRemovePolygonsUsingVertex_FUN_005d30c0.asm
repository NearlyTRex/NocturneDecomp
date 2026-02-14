; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_superopt_cpp_CObj_findAndRemovePolygonsUsingVertex_FUN_005d30c0(CObj *this_ptr,CVert *vert_ptr)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; CVert *          Stack[0x8]:4   vert_ptr
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d30c0
        ;   Label: shape_superopt.cpp_CObj_findAndRemovePolygonsUsingVertex_FUN_005d30c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005d30c1
    MOV EDX,dword ptr [ESP + 0xc]       ; 005d30c5
    PUSH EDX                            ; 005d30c9
    MOV EAX,dword ptr [EBX + 0x18]      ; 005d30ca
    PUSH EBX                            ; 005d30cd
    CALL dword ptr [EAX + 0x60]         ; 005d30ce
    ADD ESP,0x8                         ; 005d30d1
    CMP EAX,-0x1                        ; 005d30d4
    JNZ 0x005d30dd                      ; 005d30d7
        ;   XREF to: 005d30dd (CONDITIONAL_JUMP)  ; LAB_005d30dd
    XOR EAX,EAX                         ; 005d30d9
    POP EBX                             ; 005d30db
    RET                                 ; 005d30dc
    PUSH EAX                            ; 005d30dd
        ;   Label: LAB_005d30dd
    MOV EDX,dword ptr [EBX + 0x18]      ; 005d30de
    PUSH EBX                            ; 005d30e1
    CALL dword ptr [EDX + 0x48]         ; 005d30e2
    ADD ESP,0x8                         ; 005d30e5
    POP EBX                             ; 005d30e8
    RET                                 ; 005d30e9

