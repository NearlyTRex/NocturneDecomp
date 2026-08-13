; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEdButton_wasClicked_FUN_00476fd0(CEdButton *this_ptr)
;
; Parameters:
; CEdButton *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_01bcde24
;   undefined4 DAT_01bd1d8c
;   undefined4 DAT_01bd1d90
;   undefined4 DAT_01bd1d94
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476fd0
        ;   Label: shape_edittool.cpp_CEdButton_wasClicked_FUN_00476fd0
    MOV ECX,dword ptr [0x01bcde24]      ; 00476fd1 | DAT_01bcde24
    MOV EAX,dword ptr [ESP + 0x8]       ; 00476fd7
    CMP dword ptr [EAX],0x0             ; 00476fdb
    JZ 0x0047700e                       ; 00476fde
        ;   XREF to: 0047700e (CONDITIONAL_JUMP)  ; LAB_0047700e
    XOR EDX,EDX                         ; 00476fe0
        ;   Label: LAB_00476fe0
    CMP ECX,EAX                         ; 00476fe2
        ;   Label: LAB_00476fe2
    JNZ 0x00477045                      ; 00476fe4
        ;   XREF to: 00477045 (CONDITIONAL_JUMP)  ; LAB_00477045
    MOV BH,byte ptr [0x01bd1d94]        ; 00476fe6 | DAT_01bd1d94
    MOV dword ptr [EAX + 0x14],EDX      ; 00476fec
    TEST BH,0x1                         ; 00476fef
    JNZ 0x00477041                      ; 00476ff2
        ;   XREF to: 00477041 (CONDITIONAL_JUMP)  ; LAB_00477041
    XOR ECX,EAX                         ; 00476ff4
    TEST EDX,EDX                        ; 00476ff6
    JZ 0x00477041                       ; 00476ff8
        ;   XREF to: 00477041 (CONDITIONAL_JUMP)  ; LAB_00477041
    MOV dword ptr [EAX + 0x14],0x0      ; 00476ffa
    MOV EAX,0x1                         ; 00477001
    MOV dword ptr [0x01bcde24],ECX      ; 00477006 | DAT_01bcde24
        ;   Label: LAB_00477006
    POP EBX                             ; 0047700c
    RET                                 ; 0047700d
    MOV EDX,dword ptr [0x01bd1d8c]      ; 0047700e | DAT_01bd1d8c
        ;   Label: LAB_0047700e
    CMP EDX,dword ptr [EAX + 0x4]       ; 00477014
    JL 0x00476fe0                       ; 00477017
        ;   XREF to: 00476fe0 (CONDITIONAL_JUMP)  ; LAB_00476fe0
    MOV EDX,dword ptr [0x01bd1d90]      ; 00477019 | DAT_01bd1d90
    CMP EDX,dword ptr [EAX + 0x8]       ; 0047701f
    JL 0x00476fe0                       ; 00477022
        ;   XREF to: 00476fe0 (CONDITIONAL_JUMP)  ; LAB_00476fe0
    MOV EDX,dword ptr [0x01bd1d8c]      ; 00477024 | DAT_01bd1d8c
    CMP EDX,dword ptr [EAX + 0xc]       ; 0047702a
    JGE 0x00476fe0                      ; 0047702d
        ;   XREF to: 00476fe0 (CONDITIONAL_JUMP)  ; LAB_00476fe0
    MOV EDX,dword ptr [0x01bd1d90]      ; 0047702f | DAT_01bd1d90
    CMP EDX,dword ptr [EAX + 0x10]      ; 00477035
    JGE 0x00476fe0                      ; 00477038
        ;   XREF to: 00476fe0 (CONDITIONAL_JUMP)  ; LAB_00476fe0
    MOV EDX,0x1                         ; 0047703a
    JMP 0x00476fe2                      ; 0047703f
        ;   XREF to: 00476fe2 (UNCONDITIONAL_JUMP)  ; LAB_00476fe2
    XOR EAX,EAX                         ; 00477041
        ;   Label: LAB_00477041
    JMP 0x00477006                      ; 00477043
        ;   XREF to: 00477006 (UNCONDITIONAL_JUMP)  ; LAB_00477006
    TEST ECX,ECX                        ; 00477045
        ;   Label: LAB_00477045
    JNZ 0x00477056                      ; 00477047
        ;   XREF to: 00477056 (CONDITIONAL_JUMP)  ; LAB_00477056
    TEST byte ptr [0x01bd1d94],0x1      ; 00477049 | DAT_01bd1d94
    JZ 0x00477056                       ; 00477050
        ;   XREF to: 00477056 (CONDITIONAL_JUMP)  ; LAB_00477056
    TEST EDX,EDX                        ; 00477052
    JNZ 0x00477060                      ; 00477054
        ;   XREF to: 00477060 (CONDITIONAL_JUMP)  ; LAB_00477060
    XOR EAX,EAX                         ; 00477056
        ;   Label: LAB_00477056
    MOV dword ptr [0x01bcde24],ECX      ; 00477058 | DAT_01bcde24
    POP EBX                             ; 0047705e
    RET                                 ; 0047705f
    MOV ECX,EAX                         ; 00477060
        ;   Label: LAB_00477060
    MOV dword ptr [EAX + 0x14],0x1      ; 00477062
    XOR EAX,EAX                         ; 00477069
    MOV dword ptr [0x01bcde24],ECX      ; 0047706b | DAT_01bcde24
    POP EBX                             ; 00477071
    RET                                 ; 00477072

