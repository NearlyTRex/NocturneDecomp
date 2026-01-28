; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_superopt_cpp_CObj_removePolygonsByFlag_FUN_005d30f0(CObj *this_ptr,uint flag_mask)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flag_mask
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d30f0
        ;   Label: shape_superopt.cpp_CObj_removePolygonsByFlag_FUN_005d30f0
    PUSH ESI                            ; 005d30f1
    PUSH EDI                            ; 005d30f2
    MOV ESI,dword ptr [ESP + 0x10]      ; 005d30f3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005d30f7
    MOV EDX,dword ptr [ESI + 0x8]       ; 005d30fb
    XOR EBX,EBX                         ; 005d30fe
    TEST EDX,EDX                        ; 005d3100
    JBE 0x005d311a                      ; 005d3102
        ;   XREF to: 005d311a (CONDITIONAL_JUMP)  ; LAB_005d311a
    IMUL EAX,EBX,0x68                   ; 005d3104
        ;   Label: LAB_005d3104
    MOV EDX,dword ptr [ESI + 0xc]       ; 005d3107
    MOV EAX,dword ptr [EDX + EAX*0x1 + 0x60] ; 005d310a
    AND EAX,EDI                         ; 005d310e
    CMP EAX,EDI                         ; 005d3110
    JZ 0x005d3123                       ; 005d3112
        ;   XREF to: 005d3123 (CONDITIONAL_JUMP)  ; LAB_005d3123
    INC EBX                             ; 005d3114
        ;   Label: LAB_005d3114
    CMP EBX,dword ptr [ESI + 0x8]       ; 005d3115
    JC 0x005d3104                       ; 005d3118
        ;   XREF to: 005d3104 (CONDITIONAL_JUMP)  ; LAB_005d3104
    MOV EAX,0x1                         ; 005d311a
        ;   Label: LAB_005d311a
    POP EDI                             ; 005d311f
    POP ESI                             ; 005d3120
    POP EBX                             ; 005d3121
    RET                                 ; 005d3122
    PUSH EBX                            ; 005d3123
        ;   Label: LAB_005d3123
    MOV EAX,dword ptr [ESI + 0x18]      ; 005d3124
    PUSH ESI                            ; 005d3127
    DEC EBX                             ; 005d3128
    CALL dword ptr [EAX + 0x40]         ; 005d3129
    ADD ESP,0x8                         ; 005d312c
    TEST EAX,EAX                        ; 005d312f
    JNZ 0x005d3114                      ; 005d3131
        ;   XREF to: 005d3114 (CONDITIONAL_JUMP)  ; LAB_005d3114
    POP EDI                             ; 005d3133
    POP ESI                             ; 005d3134
    POP EBX                             ; 005d3135
    RET                                 ; 005d3136

