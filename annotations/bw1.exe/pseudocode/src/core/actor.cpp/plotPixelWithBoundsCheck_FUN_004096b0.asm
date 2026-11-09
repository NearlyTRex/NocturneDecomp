; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_plotPixelWithBoundsCheck_FUN_004096b0(int x,int y)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401130
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004096b0
        ;   Label: core_actor.cpp_plotPixelWithBoundsCheck_FUN_004096b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004096b4
    TEST EAX,EAX                        ; 004096b8
    JL 0x004096d0                       ; 004096ba
        ;   XREF to: 004096d0 (CONDITIONAL_JUMP)  ; LAB_004096d0
    TEST EDX,EDX                        ; 004096bc
    JL 0x004096d0                       ; 004096be
        ;   XREF to: 004096d0 (CONDITIONAL_JUMP)  ; LAB_004096d0
    CMP EAX,dword ptr [0x0061b498]      ; 004096c0 | DAT_0061b498
    JGE 0x004096d0                      ; 004096c6
        ;   XREF to: 004096d0 (CONDITIONAL_JUMP)  ; LAB_004096d0
    CMP EDX,dword ptr [0x0061b49c]      ; 004096c8 | DAT_0061b49c
    JL 0x004096d1                       ; 004096ce
        ;   XREF to: 004096d1 (CONDITIONAL_JUMP)  ; LAB_004096d1
    RET                                 ; 004096d0
        ;   Label: LAB_004096d0
    PUSH EDX                            ; 004096d1
        ;   Label: LAB_004096d1
    PUSH EAX                            ; 004096d2
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 004096d3
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 004096d8
    RET                                 ; 004096db

