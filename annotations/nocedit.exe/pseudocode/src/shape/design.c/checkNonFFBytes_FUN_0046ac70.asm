; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_design_c_checkNonFFBytes_FUN_0046ac70(char *buffer_ptr,int buffer_length)
;
; Parameters:
; char *           Stack[0x4]:4   buffer_ptr
; int              Stack[0x8]:4   buffer_length
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_cramTextureList_FUN_0046bb80 at 0046dd85
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046ac70
        ;   Label: shape_design.c_checkNonFFBytes_FUN_0046ac70
    PUSH ESI                            ; 0046ac71
    PUSH EDI                            ; 0046ac72
    PUSH EBP                            ; 0046ac73
    MOV EBP,ESP                         ; 0046ac74
    SUB ESP,0x8                         ; 0046ac76
    MOV dword ptr [EBP + -0x4],0x0      ; 0046ac7c
    JMP 0x0046ac88                      ; 0046ac83
        ;   XREF to: 0046ac88 (UNCONDITIONAL_JUMP)  ; LAB_0046ac88
    INC dword ptr [EBP + -0x4]          ; 0046ac85
        ;   Label: LAB_0046ac85
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046ac88
        ;   Label: LAB_0046ac88
    CMP EAX,dword ptr [EBP + 0x18]      ; 0046ac8b
    JGE 0x0046aca6                      ; 0046ac8e
        ;   XREF to: 0046aca6 (CONDITIONAL_JUMP)  ; LAB_0046aca6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046ac90
    ADD EAX,dword ptr [EBP + -0x4]      ; 0046ac93
    CMP byte ptr [EAX],0xff             ; 0046ac96
    JZ 0x0046aca4                       ; 0046ac99
        ;   XREF to: 0046aca4 (CONDITIONAL_JUMP)  ; LAB_0046aca4
    MOV dword ptr [EBP + -0x8],0x1      ; 0046ac9b
    JMP 0x0046acad                      ; 0046aca2
        ;   XREF to: 0046acad (UNCONDITIONAL_JUMP)  ; LAB_0046acad
    JMP 0x0046ac85                      ; 0046aca4
        ;   XREF to: 0046ac85 (UNCONDITIONAL_JUMP)  ; LAB_0046ac85
        ;   Label: LAB_0046aca4
    MOV dword ptr [EBP + -0x8],0x0      ; 0046aca6
        ;   Label: LAB_0046aca6
    MOV EAX,dword ptr [EBP + -0x8]      ; 0046acad
        ;   Label: LAB_0046acad
    MOV ESP,EBP                         ; 0046acb0
    POP EBP                             ; 0046acb2
    POP EDI                             ; 0046acb3
    POP ESI                             ; 0046acb4
    POP EBX                             ; 0046acb5
    RET                                 ; 0046acb6

