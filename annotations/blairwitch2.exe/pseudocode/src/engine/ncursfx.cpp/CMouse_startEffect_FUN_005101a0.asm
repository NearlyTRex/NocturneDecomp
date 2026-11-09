; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_ncursfx_cpp_CMouse_startEffect_FUN_005101a0(CMouse *this_ptr,uint button_mask)
;
; Parameters:
; CMouse *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   button_mask
;
; Referenced Globals:
;   undefined4 DAT_01c2a384
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005101a0
        ;   Label: engine_ncursfx.cpp_CMouse_startEffect_FUN_005101a0
    MOV ECX,dword ptr [ESP + 0x8]       ; 005101a4
    TEST dword ptr [0x01c2a384],ECX     ; 005101a8 | DAT_01c2a384
    JZ 0x005101b9                       ; 005101ae
        ;   XREF to: 005101b9 (CONDITIONAL_JUMP)  ; LAB_005101b9
    CMP dword ptr [EAX + 0x25c],0x0     ; 005101b0
    JZ 0x005101bc                       ; 005101b7
        ;   XREF to: 005101bc (CONDITIONAL_JUMP)  ; LAB_005101bc
    XOR EAX,EAX                         ; 005101b9
        ;   Label: LAB_005101b9
    RET                                 ; 005101bb
    MOV dword ptr [EAX + 0x25c],0x1     ; 005101bc
        ;   Label: LAB_005101bc
    XOR EAX,EAX                         ; 005101c6
    RET                                 ; 005101c8

