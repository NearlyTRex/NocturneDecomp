; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_design_c_floatEpsilonCompare_FUN_004676b0(float value1,float value2,float epsilon)
;
; Parameters:
; float            Stack[0x4]:4   value1
; float            Stack[0x8]:4   value2
; float            Stack[0xc]:4   epsilon
; Local Variables:
; uint             Stack[-0x18]:4  local_18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004676b0
        ;   Label: shape_design.c_floatEpsilonCompare_FUN_004676b0
    PUSH ESI                            ; 004676b1
    PUSH EDI                            ; 004676b2
    PUSH EBP                            ; 004676b3
    MOV EBP,ESP                         ; 004676b4
    SUB ESP,0x8                         ; 004676b6
    FLD float ptr [EBP + 0x14]          ; 004676bc
    FSUB float ptr [EBP + 0x18]         ; 004676bf
    FABS                                ; 004676c2
    FSTP float ptr [EBP + -0x4]         ; 004676c4
    FLD float ptr [EBP + -0x4]          ; 004676c7
    FCOMP float ptr [EBP + 0x1c]        ; 004676ca
    FNSTSW AX                           ; 004676cd
    SAHF                                ; 004676cf
    JNC 0x004676db                      ; 004676d0
        ;   XREF to: 004676db (CONDITIONAL_JUMP)  ; LAB_004676db
    MOV dword ptr [EBP + -0x8],0x1      ; 004676d2
    JMP 0x004676e2                      ; 004676d9
        ;   XREF to: 004676e2 (UNCONDITIONAL_JUMP)  ; LAB_004676e2
    MOV dword ptr [EBP + -0x8],0x0      ; 004676db
        ;   Label: LAB_004676db
    MOV EAX,dword ptr [EBP + -0x8]      ; 004676e2
        ;   Label: LAB_004676e2
    MOV ESP,EBP                         ; 004676e5
    POP EBP                             ; 004676e7
    POP EDI                             ; 004676e8
    POP ESI                             ; 004676e9
    POP EBX                             ; 004676ea
    RET                                 ; 004676eb

