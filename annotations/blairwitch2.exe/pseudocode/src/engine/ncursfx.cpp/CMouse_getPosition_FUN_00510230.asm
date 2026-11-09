; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_ncursfx_cpp_CMouse_getPosition_FUN_00510230(CMouse *this_ptr,int *out_x,int *out_y)
;
; Parameters:
; CMouse *         Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   out_x
; int *            Stack[0xc]:4   out_y
;
; Referenced Globals:
;   undefined4 DAT_01c2a37c
;   undefined4 DAT_01c2a380
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00510230
        ;   Label: engine_ncursfx.cpp_CMouse_getPosition_FUN_00510230
    MOV EAX,[0x01c2a37c]                ; 00510234 | DAT_01c2a37c
    MOV dword ptr [EDX],EAX             ; 00510239
    MOV EDX,dword ptr [ESP + 0xc]       ; 0051023b
    MOV EAX,[0x01c2a380]                ; 0051023f | DAT_01c2a380
    MOV dword ptr [EDX],EAX             ; 00510244
    RET                                 ; 00510246

