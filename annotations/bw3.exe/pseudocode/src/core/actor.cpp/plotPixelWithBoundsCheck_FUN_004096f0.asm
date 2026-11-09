; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_plotPixelWithBoundsCheck_FUN_004096f0(int x,int y)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401130
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004096f0
        ;   Label: core_actor.cpp_plotPixelWithBoundsCheck_FUN_004096f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004096f4
    TEST EAX,EAX                        ; 004096f8
    JL 0x00409710                       ; 004096fa
        ;   XREF to: 00409710 (CONDITIONAL_JUMP)  ; LAB_00409710
    TEST EDX,EDX                        ; 004096fc
    JL 0x00409710                       ; 004096fe
        ;   XREF to: 00409710 (CONDITIONAL_JUMP)  ; LAB_00409710
    CMP EAX,dword ptr [0x005fba18]      ; 00409700 | DAT_005fba18
    JGE 0x00409710                      ; 00409706
        ;   XREF to: 00409710 (CONDITIONAL_JUMP)  ; LAB_00409710
    CMP EDX,dword ptr [0x005fba1c]      ; 00409708 | DAT_005fba1c
    JL 0x00409711                       ; 0040970e
        ;   XREF to: 00409711 (CONDITIONAL_JUMP)  ; LAB_00409711
    RET                                 ; 00409710
        ;   Label: LAB_00409710
    PUSH EDX                            ; 00409711
        ;   Label: LAB_00409711
    PUSH EAX                            ; 00409712
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00409713
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00409718
    RET                                 ; 0040971b

