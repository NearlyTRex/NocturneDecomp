; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_superopt.cpp_CObj_findAndRemovePolygon_FUN_005d3020(CObj * this_ptr, CPoly * poly_ptr)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; CPoly *          Stack[0x8]:4   poly_ptr
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d3020
        ;   Label: shape_superopt.cpp_CObj_findAndRemovePolygon_FUN_005d3020
    MOV EBX,dword ptr [ESP + 0x8]       ; 005d3021
    MOV EDX,dword ptr [ESP + 0xc]       ; 005d3025
    PUSH EDX                            ; 005d3029
    MOV EAX,dword ptr [EBX + 0x18]      ; 005d302a
    PUSH EBX                            ; 005d302d
    CALL dword ptr [EAX + 0x6c]         ; 005d302e
    ADD ESP,0x8                         ; 005d3031
    CMP EAX,-0x1                        ; 005d3034
    JNZ 0x005d303d                      ; 005d3037
        ;   XREF to: 005d303d (CONDITIONAL_JUMP)  ; LAB_005d303d
    XOR EAX,EAX                         ; 005d3039
    POP EBX                             ; 005d303b
    RET                                 ; 005d303c
    PUSH EAX                            ; 005d303d
        ;   Label: LAB_005d303d
    MOV EDX,dword ptr [EBX + 0x18]      ; 005d303e
    PUSH EBX                            ; 005d3041
    CALL dword ptr [EDX + 0x40]         ; 005d3042
    ADD ESP,0x8                         ; 005d3045
    POP EBX                             ; 005d3048
    RET                                 ; 005d3049

