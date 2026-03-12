; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_superopt_cpp_CObj_isClosedManifold_FUN_005d4070(CObj *this_ptr)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; Local Variables:
; int              Stack[-0x1c]:4  local_1c
; uint             Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d4070
        ;   Label: shape_superopt.cpp_CObj_isClosedManifold_FUN_005d4070
    PUSH ESI                            ; 005d4071
    PUSH EDI                            ; 005d4072
    PUSH EBP                            ; 005d4073
    SUB ESP,0xc                         ; 005d4074
    MOV EBP,dword ptr [ESP + 0x20]      ; 005d4077
    XOR EDX,EDX                         ; 005d407b
    MOV ECX,dword ptr [EBP + 0x8]       ; 005d407d
    MOV dword ptr [ESP + 0x4],EDX       ; 005d4080
    TEST ECX,ECX                        ; 005d4084
    JBE 0x005d40de                      ; 005d4086
        ;   XREF to: 005d40de (CONDITIONAL_JUMP)  ; LAB_005d40de
    MOV dword ptr [ESP],EDX             ; 005d4088
    MOV EDX,dword ptr [EBP + 0x8]       ; 005d408b
        ;   Label: LAB_005d408b
    XOR EDI,EDI                         ; 005d408e
    XOR EBX,EBX                         ; 005d4090
    TEST EDX,EDX                        ; 005d4092
    JBE 0x005d40c0                      ; 005d4094
        ;   XREF to: 005d40c0 (CONDITIONAL_JUMP)  ; LAB_005d40c0
    MOV EAX,dword ptr [ESP]             ; 005d4096
    XOR ESI,ESI                         ; 005d4099
    MOV dword ptr [ESP + 0x8],EAX       ; 005d409b
    MOV EDX,dword ptr [EBP + 0xc]       ; 005d409f
        ;   Label: LAB_005d409f
    LEA EAX,[EDX + ESI*0x1]             ; 005d40a2
    ADD EDX,dword ptr [ESP + 0x8]       ; 005d40a5
    PUSH EDX                            ; 005d40a9
    MOV ECX,dword ptr [EAX + 0x64]      ; 005d40aa
    PUSH EAX                            ; 005d40ad
    MOV EAX,ECX                         ; 005d40ae
    CALL dword ptr [EAX + 0x70]         ; 005d40b0
    ADD ESP,0x8                         ; 005d40b3
    TEST EAX,EAX                        ; 005d40b6
    JZ 0x005d40eb                       ; 005d40b8
        ;   XREF to: 005d40eb (CONDITIONAL_JUMP)  ; LAB_005d40eb
    INC EBX                             ; 005d40ba
    CMP EBX,0x3                         ; 005d40bb
    JNZ 0x005d40eb                      ; 005d40be
        ;   XREF to: 005d40eb (CONDITIONAL_JUMP)  ; LAB_005d40eb
    CMP EBX,0x3                         ; 005d40c0
        ;   Label: LAB_005d40c0
    JNZ 0x005d40f8                      ; 005d40c3
        ;   XREF to: 005d40f8 (CONDITIONAL_JUMP)  ; LAB_005d40f8
    MOV EBX,dword ptr [ESP]             ; 005d40c5
    MOV ESI,dword ptr [ESP + 0x4]       ; 005d40c8
    MOV EDI,dword ptr [EBP + 0x8]       ; 005d40cc
    ADD EBX,0x68                        ; 005d40cf
    INC ESI                             ; 005d40d2
    MOV dword ptr [ESP],EBX             ; 005d40d3
    MOV dword ptr [ESP + 0x4],ESI       ; 005d40d6
    CMP ESI,EDI                         ; 005d40da
    JC 0x005d408b                       ; 005d40dc
        ;   XREF to: 005d408b (CONDITIONAL_JUMP)  ; LAB_005d408b
    MOV EAX,0x1                         ; 005d40de
        ;   Label: LAB_005d40de
    ADD ESP,0xc                         ; 005d40e3
    POP EBP                             ; 005d40e6
    POP EDI                             ; 005d40e7
    POP ESI                             ; 005d40e8
    POP EBX                             ; 005d40e9
    RET                                 ; 005d40ea
    INC EDI                             ; 005d40eb
        ;   Label: LAB_005d40eb
    MOV ECX,dword ptr [EBP + 0x8]       ; 005d40ec
    ADD ESI,0x68                        ; 005d40ef
    CMP EDI,ECX                         ; 005d40f2
    JC 0x005d409f                       ; 005d40f4
        ;   XREF to: 005d409f (CONDITIONAL_JUMP)  ; LAB_005d409f
    JMP 0x005d40c0                      ; 005d40f6
        ;   XREF to: 005d40c0 (UNCONDITIONAL_JUMP)  ; LAB_005d40c0
    XOR EAX,EAX                         ; 005d40f8
        ;   Label: LAB_005d40f8
    ADD ESP,0xc                         ; 005d40fa
    POP EBP                             ; 005d40fd
    POP EDI                             ; 005d40fe
    POP ESI                             ; 005d40ff
    POP EBX                             ; 005d4100
    RET                                 ; 005d4101

