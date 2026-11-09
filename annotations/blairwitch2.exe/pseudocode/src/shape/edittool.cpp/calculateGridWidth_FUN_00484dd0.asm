; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_calculateGridWidth_FUN_00484dd0(void)
;
;
; XREF[2]:
;   shape_edittool.cpp_FUN_00482a00 at 00482d96
;   shape_edittool.cpp_calculateGridHeight_FUN_00484df0 at 00484df0
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484dd0
        ;   Label: shape_edittool.cpp_calculateGridWidth_FUN_00484dd0
    MOV EBX,dword ptr [0x006141b8]      ; 00484dd1 | DAT_006141b8
    MOV ECX,0x30                        ; 00484dd7
    MOV EDX,EBX                         ; 00484ddc
    MOV EAX,EBX                         ; 00484dde
    SAR EDX,0x1f                        ; 00484de0
    IDIV ECX                            ; 00484de3
    POP EBX                             ; 00484de5
    RET                                 ; 00484de6

