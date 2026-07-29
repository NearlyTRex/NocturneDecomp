; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ncursfx_cpp_CMouse_getPosition_FUN_004ee720(CMouse *this_ptr,int *out_x,int *out_y)
;
; Parameters:
; CMouse *         Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   out_x
; int *            Stack[0xc]:4   out_y
;
; Referenced Globals:
;   undefined4 DAT_01bd1d8c
;   undefined4 DAT_01bd1d90
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004ee720
        ;   Label: engine_ncursfx.cpp_CMouse_getPosition_FUN_004ee720
    MOV EAX,[0x01bd1d8c]                ; 004ee724 | DAT_01bd1d8c
    MOV dword ptr [EDX],EAX             ; 004ee729
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ee72b
    MOV EAX,[0x01bd1d90]                ; 004ee72f | DAT_01bd1d90
    MOV dword ptr [EDX],EAX             ; 004ee734
    RET                                 ; 004ee736

