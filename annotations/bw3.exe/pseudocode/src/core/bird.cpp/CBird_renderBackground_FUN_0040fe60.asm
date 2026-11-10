; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bird_cpp_CBird_renderBackground_FUN_0040fe60(CBird *this_ptr,int layer_flag)
;
; Parameters:
; CBird *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderBackground_FUN_0042e300
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040fe60
        ;   Label: core_bird.cpp_CBird_renderBackground_FUN_0040fe60
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040fe64
    CMP dword ptr [EAX + 0x206ac],0x0   ; 0040fe68
    JZ 0x0040fe89                       ; 0040fe6f
        ;   XREF to: 0040fe89 (CONDITIONAL_JUMP)  ; LAB_0040fe89
    TEST EDX,EDX                        ; 0040fe71
    JZ 0x0040fe7f                       ; 0040fe73
        ;   XREF to: 0040fe7f (CONDITIONAL_JUMP)  ; LAB_0040fe7f
    MOV dword ptr [EAX + 0x24fc],0x1    ; 0040fe75
    PUSH EDX                            ; 0040fe7f
        ;   Label: LAB_0040fe7f
    PUSH EAX                            ; 0040fe80
    CALL core_charactr.cpp_CCharacter_renderBackground_FUN_0042e300 ; 0040fe81
        ;   XREF to: 0042e300 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderBackground_FUN_0042e300(CCharacter * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 0040fe86
    RET                                 ; 0040fe89
        ;   Label: LAB_0040fe89

