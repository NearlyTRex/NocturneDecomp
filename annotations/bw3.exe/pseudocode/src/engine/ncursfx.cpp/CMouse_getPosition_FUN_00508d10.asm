; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ncursfx_cpp_CMouse_getPosition_FUN_00508d10(CMouse *this_ptr,int *out_x,int *out_y)
;
; Parameters:
; CMouse *         Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   out_x
; int *            Stack[0xc]:4   out_y
;
; Referenced Globals:
;   undefined4 DAT_01c5fadc
;   undefined4 DAT_01c5fae0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00508d10
        ;   Label: engine_ncursfx.cpp_CMouse_getPosition_FUN_00508d10
    MOV EAX,[0x01c5fadc]                ; 00508d14 | DAT_01c5fadc
    MOV dword ptr [EDX],EAX             ; 00508d19
    MOV EDX,dword ptr [ESP + 0xc]       ; 00508d1b
    MOV EAX,[0x01c5fae0]                ; 00508d1f | DAT_01c5fae0
    MOV dword ptr [EDX],EAX             ; 00508d24
    RET                                 ; 00508d26

