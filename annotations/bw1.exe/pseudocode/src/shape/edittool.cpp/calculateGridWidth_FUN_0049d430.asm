; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_calculateGridWidth_FUN_0049d430(void)
;
;
; XREF[2]:
;   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_0049b060 at 0049b3f6
;   shape_edittool.cpp_calculateGridHeight_FUN_0049d450 at 0049d450
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d430
        ;   Label: shape_edittool.cpp_calculateGridWidth_FUN_0049d430
    MOV EBX,dword ptr [0x0061b498]      ; 0049d431 | DAT_0061b498
    MOV ECX,0x30                        ; 0049d437
    MOV EDX,EBX                         ; 0049d43c
    MOV EAX,EBX                         ; 0049d43e
    SAR EDX,0x1f                        ; 0049d440
    IDIV ECX                            ; 0049d443
    POP EBX                             ; 0049d445
    RET                                 ; 0049d446

