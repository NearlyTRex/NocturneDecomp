; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_calculateGridHeight_FUN_00484df0(void)
;
;
; XREF[2]:
;   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_00482a00 at 00482da4
;   shape_edittool.cpp_CPickList_renderDialog_FUN_004831d0 at 004832d1
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;
; Called Functions:
;   shape_edittool.cpp_calculateGridWidth_FUN_00484dd0
;
; *****************************************************************************

section .text

    CALL shape_edittool.cpp_calculateGridWidth_FUN_00484dd0 ; 00484df0
        ;   XREF to: 00484dd0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateGridWidth_FUN_00484dd0()
        ;   Label: shape_edittool.cpp_calculateGridHeight_FUN_00484df0
    MOV EDX,dword ptr [0x006141bc]      ; 00484df5 | DAT_006141bc
    IMUL EDX,EAX                        ; 00484dfb
    MOV ECX,dword ptr [0x006141b8]      ; 00484dfe | DAT_006141b8
    MOV EAX,EDX                         ; 00484e04
    SAR EDX,0x1f                        ; 00484e06
    IDIV ECX                            ; 00484e09
    LEA EDX,[EAX*0x4 + 0x0]             ; 00484e0b
    MOV ECX,0x3                         ; 00484e12
    MOV EAX,EDX                         ; 00484e17
    SAR EDX,0x1f                        ; 00484e19
    IDIV ECX                            ; 00484e1c
    RET                                 ; 00484e1e

