; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEdCheck_handleInput_FUN_0049dda0(CEdCheck *this_ptr)
;
; Parameters:
; CEdCheck *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_01c3f5d0
;   undefined4 DAT_01c4353c
;   undefined4 DAT_01c43540
;   undefined4 DAT_01c43544
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049dda0
        ;   Label: shape_edittool.cpp_CEdCheck_handleInput_FUN_0049dda0
    MOV ECX,dword ptr [0x01c3f5d0]      ; 0049dda1 | DAT_01c3f5d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049dda7
    CMP dword ptr [EAX + 0x8],0x0       ; 0049ddab
    JZ 0x0049de04                       ; 0049ddaf
        ;   XREF to: 0049de04 (CONDITIONAL_JUMP)  ; LAB_0049de04
    XOR EDX,EDX                         ; 0049ddb1
        ;   Label: LAB_0049ddb1
    CMP ECX,EAX                         ; 0049ddb3
        ;   Label: LAB_0049ddb3
    JNZ 0x0049de66                      ; 0049ddb5
        ;   XREF to: 0049de66 (CONDITIONAL_JUMP)  ; LAB_0049de66
    MOV BH,byte ptr [0x01c43544]        ; 0049ddbb | DAT_01c43544
    MOV dword ptr [EAX + 0x20],EDX      ; 0049ddc1
    TEST BH,0x1                         ; 0049ddc4
    JNZ 0x0049de5c                      ; 0049ddc7
        ;   XREF to: 0049de5c (CONDITIONAL_JUMP)  ; LAB_0049de5c
    XOR ECX,EAX                         ; 0049ddcd
    TEST EDX,EDX                        ; 0049ddcf
    JZ 0x0049de5c                       ; 0049ddd1
        ;   XREF to: 0049de5c (CONDITIONAL_JUMP)  ; LAB_0049de5c
    PUSH EDI                            ; 0049ddd7
    MOV EBX,dword ptr [EAX]             ; 0049ddd8
    MOV dword ptr [EAX + 0x20],0x0      ; 0049ddda
    CMP EBX,0x1                         ; 0049dde1
    JZ 0x0049de3a                       ; 0049dde4
        ;   XREF to: 0049de3a (CONDITIONAL_JUMP)  ; LAB_0049de3a
    CMP dword ptr [EAX + 0x4],0x0       ; 0049dde6
    SETZ DL                             ; 0049ddea
    AND EDX,0xff                        ; 0049dded
    MOV dword ptr [EAX + 0x4],EDX       ; 0049ddf3
    MOV EAX,0x1                         ; 0049ddf6
        ;   Label: LAB_0049ddf6
    POP EDI                             ; 0049ddfb
    MOV dword ptr [0x01c3f5d0],ECX      ; 0049ddfc | DAT_01c3f5d0
    POP EBX                             ; 0049de02
    RET                                 ; 0049de03
    MOV EDX,dword ptr [0x01c4353c]      ; 0049de04 | DAT_01c4353c
        ;   Label: LAB_0049de04
    CMP EDX,dword ptr [EAX + 0x10]      ; 0049de0a
    JL 0x0049ddb1                       ; 0049de0d
        ;   XREF to: 0049ddb1 (CONDITIONAL_JUMP)  ; LAB_0049ddb1
    MOV EDX,dword ptr [0x01c43540]      ; 0049de0f | DAT_01c43540
    CMP EDX,dword ptr [EAX + 0x14]      ; 0049de15
    JL 0x0049ddb1                       ; 0049de18
        ;   XREF to: 0049ddb1 (CONDITIONAL_JUMP)  ; LAB_0049ddb1
    MOV EDX,dword ptr [0x01c4353c]      ; 0049de1a | DAT_01c4353c
    CMP EDX,dword ptr [EAX + 0x18]      ; 0049de20
    JGE 0x0049ddb1                      ; 0049de23
        ;   XREF to: 0049ddb1 (CONDITIONAL_JUMP)  ; LAB_0049ddb1
    MOV EDX,dword ptr [0x01c43540]      ; 0049de25 | DAT_01c43540
    CMP EDX,dword ptr [EAX + 0x1c]      ; 0049de2b
    JGE 0x0049ddb1                      ; 0049de2e
        ;   XREF to: 0049ddb1 (CONDITIONAL_JUMP)  ; LAB_0049ddb1
    MOV EDX,0x1                         ; 0049de30
    JMP 0x0049ddb3                      ; 0049de35
        ;   XREF to: 0049ddb3 (UNCONDITIONAL_JUMP)  ; LAB_0049ddb3
    MOV EDI,dword ptr [EAX + 0x4]       ; 0049de3a
        ;   Label: LAB_0049de3a
    ADD EDI,EBX                         ; 0049de3d
    MOV dword ptr [EAX + 0x4],EDI       ; 0049de3f
    CMP EDI,0x2                         ; 0049de42
    JLE 0x0049ddf6                      ; 0049de45
        ;   XREF to: 0049ddf6 (CONDITIONAL_JUMP)  ; LAB_0049ddf6
    MOV dword ptr [EAX + 0x4],0x0       ; 0049de47
    MOV EAX,0x1                         ; 0049de4e
    POP EDI                             ; 0049de53
    MOV dword ptr [0x01c3f5d0],ECX      ; 0049de54 | DAT_01c3f5d0
    POP EBX                             ; 0049de5a
    RET                                 ; 0049de5b
    XOR EAX,EAX                         ; 0049de5c
        ;   Label: LAB_0049de5c
    MOV dword ptr [0x01c3f5d0],ECX      ; 0049de5e | DAT_01c3f5d0
    POP EBX                             ; 0049de64
    RET                                 ; 0049de65
    TEST ECX,ECX                        ; 0049de66
        ;   Label: LAB_0049de66
    JNZ 0x0049de77                      ; 0049de68
        ;   XREF to: 0049de77 (CONDITIONAL_JUMP)  ; LAB_0049de77
    TEST byte ptr [0x01c43544],0x1      ; 0049de6a | DAT_01c43544
    JZ 0x0049de77                       ; 0049de71
        ;   XREF to: 0049de77 (CONDITIONAL_JUMP)  ; LAB_0049de77
    TEST EDX,EDX                        ; 0049de73
    JNZ 0x0049de81                      ; 0049de75
        ;   XREF to: 0049de81 (CONDITIONAL_JUMP)  ; LAB_0049de81
    XOR EAX,EAX                         ; 0049de77
        ;   Label: LAB_0049de77
    MOV dword ptr [0x01c3f5d0],ECX      ; 0049de79 | DAT_01c3f5d0
    POP EBX                             ; 0049de7f
    RET                                 ; 0049de80
    MOV ECX,EAX                         ; 0049de81
        ;   Label: LAB_0049de81
    MOV dword ptr [EAX + 0x20],0x1      ; 0049de83
    XOR EAX,EAX                         ; 0049de8a
    MOV dword ptr [0x01c3f5d0],ECX      ; 0049de8c | DAT_01c3f5d0
    POP EBX                             ; 0049de92
    RET                                 ; 0049de93

