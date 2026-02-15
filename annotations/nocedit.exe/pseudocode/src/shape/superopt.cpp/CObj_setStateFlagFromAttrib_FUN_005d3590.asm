; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_CObj_setStateFlagFromAttrib_FUN_005d3590(CObj *this_ptr,uint flag_to_set,uint attrib_mask)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flag_to_set
; uint             Stack[0xc]:4   attrib_mask
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d3590
        ;   Label: shape_superopt.cpp_CObj_setStateFlagFromAttrib_FUN_005d3590
    PUSH ESI                            ; 005d3591
    PUSH EDI                            ; 005d3592
    PUSH EBP                            ; 005d3593
    MOV ESI,dword ptr [ESP + 0x14]      ; 005d3594
    MOV EDI,dword ptr [ESP + 0x18]      ; 005d3598
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005d359c
    MOV ECX,dword ptr [ESI]             ; 005d35a0
    MOV EAX,dword ptr [ESI + 0x4]       ; 005d35a2
    XOR EDX,EDX                         ; 005d35a5
    TEST ECX,ECX                        ; 005d35a7
    JBE 0x005d35c1                      ; 005d35a9
        ;   XREF to: 005d35c1 (CONDITIONAL_JUMP)  ; LAB_005d35c1
    MOV ECX,dword ptr [EAX + 0x30]      ; 005d35ab
        ;   Label: LAB_005d35ab
    AND ECX,EBX                         ; 005d35ae
    CMP ECX,EBX                         ; 005d35b0
    JNZ 0x005d35b7                      ; 005d35b2
        ;   XREF to: 005d35b7 (CONDITIONAL_JUMP)  ; LAB_005d35b7
    OR dword ptr [EAX + 0x34],EDI       ; 005d35b4
    INC EDX                             ; 005d35b7
        ;   Label: LAB_005d35b7
    MOV EBP,dword ptr [ESI]             ; 005d35b8
    ADD EAX,0x38                        ; 005d35ba
    CMP EDX,EBP                         ; 005d35bd
    JC 0x005d35ab                       ; 005d35bf
        ;   XREF to: 005d35ab (CONDITIONAL_JUMP)  ; LAB_005d35ab
    PUSH EDI                            ; 005d35c1
        ;   Label: LAB_005d35c1
    MOV EAX,dword ptr [ESI + 0x18]      ; 005d35c2
    PUSH ESI                            ; 005d35c5
    CALL dword ptr [EAX + 0x8c]         ; 005d35c6
    ADD ESP,0x8                         ; 005d35cc
    POP EBP                             ; 005d35cf
    POP EDI                             ; 005d35d0
    POP ESI                             ; 005d35d1
    POP EBX                             ; 005d35d2
    RET                                 ; 005d35d3

