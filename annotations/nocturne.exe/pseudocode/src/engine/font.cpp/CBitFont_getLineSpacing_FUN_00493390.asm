; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_font_cpp_CBitFont_getLineSpacing_FUN_00493390(CBitFont *this_ptr,char character)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; char             Stack[0x8]:1   character
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00493390
        ;   Label: engine_font.cpp_CBitFont_getLineSpacing_FUN_00493390
    CMP dword ptr [EAX + 0x3190],0x0    ; 00493394
    JZ 0x004933a7                       ; 0049339b
        ;   XREF to: 004933a7 (CONDITIONAL_JUMP)  ; LAB_004933a7
    MOV EAX,dword ptr [EAX + 0x3194]    ; 0049339d
    TEST EAX,EAX                        ; 004933a3
    JNZ 0x004933aa                      ; 004933a5
        ;   XREF to: 004933aa (CONDITIONAL_JUMP)  ; LAB_004933aa
    XOR EAX,EAX                         ; 004933a7
        ;   Label: LAB_004933a7
    RET                                 ; 004933a9
    XOR ECX,ECX                         ; 004933aa
        ;   Label: LAB_004933aa
    MOV CL,byte ptr [ESP + 0x8]         ; 004933ac
    PUSH ECX                            ; 004933b0
    MOV EDX,dword ptr [EAX]             ; 004933b1
    PUSH EAX                            ; 004933b3
    CALL dword ptr [EDX + 0x10]         ; 004933b4
    ADD ESP,0x8                         ; 004933b7
    RET                                 ; 004933ba

