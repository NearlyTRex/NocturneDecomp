; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SClothVertex * __cdecl core_cloth_cpp_SClothVertex_dtor_FUN_0043e440(SClothVertex *this_ptr)
;
; Parameters:
; SClothVertex *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_cloth.cpp_freeVectors_FUN_0043e460
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043e440
        ;   Label: core_cloth.cpp_SClothVertex_dtor_FUN_0043e440
    PUSH 0x0                            ; 0043e444
    ADD EAX,0xec                        ; 0043e446
    PUSH EAX                            ; 0043e44b
    CALL core_cloth.cpp_freeVectors_FUN_0043e460 ; 0043e44c
        ;   XREF to: 0043e460 (UNCONDITIONAL_CALL)  ; CVector3f * core_cloth.cpp_freeVectors_FUN_0043e460(CVector3f * objs)
    ADD ESP,0x8                         ; 0043e451
    SUB EAX,0xec                        ; 0043e454
    RET                                 ; 0043e459

