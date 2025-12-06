; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_font.cpp_CBitFont_getLineSpacing_FUN_004d0480(CBitFont * this_ptr, char character)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; char             Stack[0x8]:1   character
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d0480
        ;   Label: engine_font.cpp_CBitFont_getLineSpacing_FUN_004d0480
    CMP dword ptr [EAX + 0x3190],0x0    ; 004d0484
    JZ 0x004d0497                       ; 004d048b | LAB_004d0497
        ;   XREF to: 004d0497 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EAX + 0x3194]    ; 004d048d
    TEST EAX,EAX                        ; 004d0493
    JNZ 0x004d049a                      ; 004d0495 | LAB_004d049a
        ;   XREF to: 004d049a (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 004d0497
        ;   Label: LAB_004d0497
    RET                                 ; 004d0499
    XOR ECX,ECX                         ; 004d049a
        ;   Label: LAB_004d049a
    MOV CL,byte ptr [ESP + 0x8]         ; 004d049c
    PUSH ECX                            ; 004d04a0
    MOV EDX,dword ptr [EAX]             ; 004d04a1
    PUSH EAX                            ; 004d04a3
    CALL dword ptr [EDX + 0x10]         ; 004d04a4
    ADD ESP,0x8                         ; 004d04a7
    RET                                 ; 004d04aa

