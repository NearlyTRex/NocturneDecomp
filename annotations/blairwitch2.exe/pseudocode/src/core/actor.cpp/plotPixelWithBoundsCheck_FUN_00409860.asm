; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_plotPixelWithBoundsCheck_FUN_00409860(int x,int y)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401130
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00409860
        ;   Label: core_actor.cpp_plotPixelWithBoundsCheck_FUN_00409860
    MOV EDX,dword ptr [ESP + 0x8]       ; 00409864
    TEST EAX,EAX                        ; 00409868
    JL 0x00409880                       ; 0040986a
        ;   XREF to: 00409880 (CONDITIONAL_JUMP)  ; LAB_00409880
    TEST EDX,EDX                        ; 0040986c
    JL 0x00409880                       ; 0040986e
        ;   XREF to: 00409880 (CONDITIONAL_JUMP)  ; LAB_00409880
    CMP EAX,dword ptr [0x006141b8]      ; 00409870 | DAT_006141b8
    JGE 0x00409880                      ; 00409876
        ;   XREF to: 00409880 (CONDITIONAL_JUMP)  ; LAB_00409880
    CMP EDX,dword ptr [0x006141bc]      ; 00409878 | DAT_006141bc
    JL 0x00409881                       ; 0040987e
        ;   XREF to: 00409881 (CONDITIONAL_JUMP)  ; LAB_00409881
    RET                                 ; 00409880
        ;   Label: LAB_00409880
    PUSH EDX                            ; 00409881
        ;   Label: LAB_00409881
    PUSH EAX                            ; 00409882
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00409883
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00409888
    RET                                 ; 0040988b

