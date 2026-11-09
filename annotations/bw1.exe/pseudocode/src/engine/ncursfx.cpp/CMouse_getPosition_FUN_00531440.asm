; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ncursfx_cpp_CMouse_getPosition_FUN_00531440(CMouse *this_ptr,int *out_x,int *out_y)
;
; Parameters:
; CMouse *         Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   out_x
; int *            Stack[0xc]:4   out_y
;
; Referenced Globals:
;   undefined4 DAT_01c4353c
;   undefined4 DAT_01c43540
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00531440
        ;   Label: engine_ncursfx.cpp_CMouse_getPosition_FUN_00531440
    MOV EAX,[0x01c4353c]                ; 00531444 | DAT_01c4353c
    MOV dword ptr [EDX],EAX             ; 00531449
    MOV EDX,dword ptr [ESP + 0xc]       ; 0053144b
    MOV EAX,[0x01c43540]                ; 0053144f | DAT_01c43540
    MOV dword ptr [EDX],EAX             ; 00531454
    RET                                 ; 00531456

