; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_design_c_wrapCoordinate_FUN_0046acc0(int coordinate,int dimension)
;
; Parameters:
; int              Stack[0x4]:4   coordinate
; int              Stack[0x8]:4   dimension
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_samplePixelAndAccumulate_FUN_0046ad00 at 0046ad27
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046acc0
        ;   Label: shape_design.c_wrapCoordinate_FUN_0046acc0
    PUSH ESI                            ; 0046acc1
    PUSH EDI                            ; 0046acc2
    PUSH EBP                            ; 0046acc3
    MOV EBP,ESP                         ; 0046acc4
    SUB ESP,0x4                         ; 0046acc6
    CMP dword ptr [EBP + 0x14],0x0      ; 0046accc
    JGE 0x0046ace7                      ; 0046acd0
        ;   XREF to: 0046ace7 (CONDITIONAL_JUMP)  ; LAB_0046ace7
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046acd2
    NEG EDX                             ; 0046acd5
    MOV EAX,EDX                         ; 0046acd7
    SAR EDX,0x1f                        ; 0046acd9
    IDIV dword ptr [EBP + 0x18]         ; 0046acdc
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046acdf
    SUB EAX,EDX                         ; 0046ace2
    MOV dword ptr [EBP + 0x14],EAX      ; 0046ace4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046ace7
        ;   Label: LAB_0046ace7
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046acea
    SAR EDX,0x1f                        ; 0046aced
    IDIV dword ptr [EBP + 0x18]         ; 0046acf0
    MOV dword ptr [EBP + -0x4],EDX      ; 0046acf3
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046acf6
    MOV ESP,EBP                         ; 0046acf9
    POP EBP                             ; 0046acfb
    POP EDI                             ; 0046acfc
    POP ESI                             ; 0046acfd
    POP EBX                             ; 0046acfe
    RET                                 ; 0046acff

