; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_superopt_cpp_CObj_findVertexIndex_FUN_005d32e0(CObj *this_ptr,CVert *vertex_ptr)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; CVert *          Stack[0x8]:4   vertex_ptr
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d32e0
        ;   Label: shape_superopt.cpp_CObj_findVertexIndex_FUN_005d32e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005d32e1
    MOV EDX,dword ptr [ESP + 0xc]       ; 005d32e5
    PUSH EDX                            ; 005d32e9
    MOV EAX,dword ptr [EBX + 0x18]      ; 005d32ea
    PUSH EBX                            ; 005d32ed
    CALL dword ptr [EAX + 0x68]         ; 005d32ee
    ADD ESP,0x8                         ; 005d32f1
    TEST EAX,EAX                        ; 005d32f4
    JZ 0x005d330d                       ; 005d32f6
        ;   XREF to: 005d330d (CONDITIONAL_JUMP)  ; LAB_005d330d
    MOV EDX,dword ptr [ESP + 0xc]       ; 005d32f8
    SUB EDX,dword ptr [EBX + 0x4]       ; 005d32fc
    MOV ECX,0x38                        ; 005d32ff
    MOV EAX,EDX                         ; 005d3304
    SAR EDX,0x1f                        ; 005d3306
    IDIV ECX                            ; 005d3309
    POP EBX                             ; 005d330b
    RET                                 ; 005d330c
    MOV EAX,0xffffffff                  ; 005d330d
        ;   Label: LAB_005d330d
    POP EBX                             ; 005d3312
    RET                                 ; 005d3313

