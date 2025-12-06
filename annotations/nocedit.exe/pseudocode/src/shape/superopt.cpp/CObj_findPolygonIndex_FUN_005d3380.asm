; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_superopt.cpp_CObj_findPolygonIndex_FUN_005d3380(CObj * this_ptr, CPoly * poly_ptr)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; CPoly *          Stack[0x8]:4   poly_ptr
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d3380
        ;   Label: shape_superopt.cpp_CObj_findPolygonIndex_FUN_005d3380
    MOV EBX,dword ptr [ESP + 0x8]       ; 005d3381
    MOV ECX,dword ptr [ESP + 0xc]       ; 005d3385
    CMP ECX,dword ptr [EBX + 0xc]       ; 005d3389
    JC 0x005d33ac                       ; 005d338c | LAB_005d33ac
        ;   XREF to: 005d33ac (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBX + 0x8]       ; 005d338e
    DEC EDX                             ; 005d3391
    LEA EAX,[EDX*0x4 + 0x0]             ; 005d3392
    SUB EAX,EDX                         ; 005d3399
    SHL EAX,0x2                         ; 005d339b
    ADD EAX,EDX                         ; 005d339e
    SHL EAX,0x3                         ; 005d33a0
    MOV EDX,dword ptr [EBX + 0xc]       ; 005d33a3
    ADD EAX,EDX                         ; 005d33a6
    CMP ECX,EAX                         ; 005d33a8
    JBE 0x005d33b3                      ; 005d33aa | LAB_005d33b3
        ;   XREF to: 005d33b3 (CONDITIONAL_JUMP)
    MOV EAX,0xffffffff                  ; 005d33ac
        ;   Label: LAB_005d33ac
    POP EBX                             ; 005d33b1
    RET                                 ; 005d33b2
    SUB ECX,EDX                         ; 005d33b3
        ;   Label: LAB_005d33b3
    MOV EDX,ECX                         ; 005d33b5
    MOV ECX,0x68                        ; 005d33b7
    MOV EAX,EDX                         ; 005d33bc
    SAR EDX,0x1f                        ; 005d33be
    IDIV ECX                            ; 005d33c1
    POP EBX                             ; 005d33c3
    RET                                 ; 005d33c4

