; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_getPanelColor_FUN_005056f0(CMansionPuzzleCircle *this_ptr,int panel_index,float *out_r,float *out_g,float *out_b)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   panel_index
; float *          Stack[0xc]:4   out_r
; float *          Stack[0x10]:4   out_g
; float *          Stack[0x14]:4   out_b
;
; XREF[3]:
;   core_manpuz.cpp_CMansionPuzzleCircle_initPuzzleState_FUN_00504cb0 at 00504e76
;   core_manpuz.cpp_CMansionPuzzleCircle_updateGem_FUN_005058e0 at 005059d9
;   core_manpuz.cpp_FUN_00503c90 at 00503e9f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005056f0
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_getPanelColor_FUN_005056f0
    PUSH ESI                            ; 005056f1
    MOV ECX,dword ptr [ESP + 0x18]      ; 005056f2
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005056f6
    MOV EAX,dword ptr [ESP + 0x14]      ; 005056fa
    MOV dword ptr [EBX],0x0             ; 005056fe
    MOV EDX,dword ptr [ESP + 0x10]      ; 00505704
    MOV ESI,dword ptr [EBX]             ; 00505708
    MOV dword ptr [ECX],ESI             ; 0050570a
    MOV ESI,dword ptr [ECX]             ; 0050570c
    MOV dword ptr [EAX],ESI             ; 0050570e
    LEA EAX,[EDX*0x4 + 0x0]             ; 00505710
    SUB EAX,EDX                         ; 00505717
    SHL EAX,0x3                         ; 00505719
    ADD EAX,EDX                         ; 0050571c
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050571e
    SHL EAX,0x2                         ; 00505722
    ADD EAX,EDX                         ; 00505725
    CMP dword ptr [EAX + 0x5f0],0x0     ; 00505727
    JZ 0x0050573c                       ; 0050572e
        ;   XREF to: 0050573c (CONDITIONAL_JUMP)  ; LAB_0050573c
    TEST dword ptr [EAX + 0x5f8],0x7fffffff ; 00505730
    JZ 0x0050573f                       ; 0050573a
        ;   XREF to: 0050573f (CONDITIONAL_JUMP)  ; LAB_0050573f
    POP ESI                             ; 0050573c
        ;   Label: LAB_0050573c
    POP EBX                             ; 0050573d
    RET                                 ; 0050573e
    MOV EDX,dword ptr [ESP + 0x14]      ; 0050573f
        ;   Label: LAB_0050573f
    FILD dword ptr [EAX + 0x63c]        ; 00505743
    FSTP float ptr [EDX]                ; 00505749
    FILD dword ptr [EAX + 0x640]        ; 0050574b
    FSTP float ptr [ECX]                ; 00505751
    FILD dword ptr [EAX + 0x644]        ; 00505753
    FSTP float ptr [EBX]                ; 00505759
    POP ESI                             ; 0050575b
    POP EBX                             ; 0050575c
    RET                                 ; 0050575d

