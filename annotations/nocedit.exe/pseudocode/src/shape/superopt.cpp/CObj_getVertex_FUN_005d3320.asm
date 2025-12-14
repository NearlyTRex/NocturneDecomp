; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVert * shape_superopt.cpp_CObj_getVertex_FUN_005d3320(CObj * this_ptr, uint index)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   index
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 005d3320
        ;   Label: shape_superopt.cpp_CObj_getVertex_FUN_005d3320
    MOV EDX,dword ptr [ESP + 0x8]       ; 005d3324
    CMP EDX,dword ptr [ECX]             ; 005d3328
    JBE 0x005d332f                      ; 005d332a
        ;   XREF to: 005d332f (CONDITIONAL_JUMP)  ; LAB_005d332f
    XOR EAX,EAX                         ; 005d332c
        ;   Label: LAB_005d332c
    RET                                 ; 005d332e
    SHL EDX,0x3                         ; 005d332f
        ;   Label: LAB_005d332f
    LEA EAX,[EDX*0x8 + 0x0]             ; 005d3332
    SUB EAX,EDX                         ; 005d3339
    MOV EDX,dword ptr [ECX + 0x4]       ; 005d333b
    ADD EAX,EDX                         ; 005d333e
    RET                                 ; 005d3340

