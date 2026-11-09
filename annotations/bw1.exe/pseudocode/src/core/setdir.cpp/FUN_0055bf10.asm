; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 core_setdir_cpp_FUN_0055bf10(CDemonSet *param_1)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_set.cpp_CDemonSet_initScene_FUN_0054ec60 at 0054ee37
;   core_set.cpp_FUN_0054d3c0 at 0054dd24
;
; Called Functions:
;   core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_0055c020
;   core_setdir.cpp_testOBBIntersection_FUN_0055bab0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055bf10
        ;   Label: core_setdir.cpp_FUN_0055bf10
    PUSH ESI                            ; 0055bf11
    PUSH EDI                            ; 0055bf12
    PUSH EBP                            ; 0055bf13
    SUB ESP,0x18                        ; 0055bf14
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0055bf17
    MOV EDX,dword ptr [EDI + 0x15b428]  ; 0055bf1b
    XOR EAX,EAX                         ; 0055bf21
    TEST EDX,EDX                        ; 0055bf23
    JLE 0x0055bf50                      ; 0055bf25
        ;   XREF to: 0055bf50 (CONDITIONAL_JUMP)  ; LAB_0055bf50
    MOV EBX,EDI                         ; 0055bf27
    MOV dword ptr [EBX + 0x15b46c],0xffffffff ; 0055bf29
        ;   Label: LAB_0055bf29
    INC EAX                             ; 0055bf33
    MOV ECX,dword ptr [EDI + 0x15b428]  ; 0055bf34
    ADD EBX,0x44                        ; 0055bf3a
    CMP EAX,ECX                         ; 0055bf3d
    JL 0x0055bf29                       ; 0055bf3f
        ;   XREF to: 0055bf29 (CONDITIONAL_JUMP)  ; LAB_0055bf29
    LEA EAX,[EAX]                       ; 0055bf41
    LEA EDX,[EDX]                       ; 0055bf47
    LEA EAX,[EAX]                       ; 0055bf4d
    XOR EBX,EBX                         ; 0055bf50
        ;   Label: LAB_0055bf50
    MOV ESI,dword ptr [EDI + 0x15b428]  ; 0055bf52
    MOV dword ptr [ESP + 0x4],EBX       ; 0055bf58
    TEST ESI,ESI                        ; 0055bf5c
    JLE 0x0055bfaa                      ; 0055bf5e
        ;   XREF to: 0055bfaa (CONDITIONAL_JUMP)  ; LAB_0055bfaa
    LEA EAX,[EDI + 0x15b42c]            ; 0055bf60
    MOV dword ptr [ESP],EBX             ; 0055bf66
    MOV dword ptr [ESP + 0xc],EAX       ; 0055bf69
    MOV EBX,dword ptr [ESP + 0x4]       ; 0055bf6d
        ;   Label: LAB_0055bf6d
    PUSH EBX                            ; 0055bf71
    PUSH EDI                            ; 0055bf72
    CALL core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_0055c020 ; 0055bf73
        ;   XREF to: 0055c020 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_0055c020(CDemonSet * this_ptr, int box_index)
    INC EBX                             ; 0055bf78
    ADD ESP,0x8                         ; 0055bf79
    MOV ESI,dword ptr [EDI + 0x15b428]  ; 0055bf7c
    MOV dword ptr [ESP + 0x14],EAX      ; 0055bf82
    CMP EBX,ESI                         ; 0055bf86
    JL 0x0055bfb2                       ; 0055bf88
        ;   XREF to: 0055bfb2 (CONDITIONAL_JUMP)  ; LAB_0055bfb2
    MOV EBP,dword ptr [ESP]             ; 0055bf8e
        ;   Label: LAB_0055bf8e
    MOV EAX,dword ptr [ESP + 0x4]       ; 0055bf91
    MOV EDX,dword ptr [EDI + 0x15b428]  ; 0055bf95
    ADD EBP,0x44                        ; 0055bf9b
    INC EAX                             ; 0055bf9e
    MOV dword ptr [ESP],EBP             ; 0055bf9f
    MOV dword ptr [ESP + 0x4],EAX       ; 0055bfa2
    CMP EAX,EDX                         ; 0055bfa6
    JL 0x0055bf6d                       ; 0055bfa8
        ;   XREF to: 0055bf6d (CONDITIONAL_JUMP)  ; LAB_0055bf6d
    ADD ESP,0x18                        ; 0055bfaa
        ;   Label: LAB_0055bfaa
    POP EBP                             ; 0055bfad
    POP EDI                             ; 0055bfae
    POP ESI                             ; 0055bfaf
    POP EBX                             ; 0055bfb0
        ;   Label: LAB_0055bfb0
    RET                                 ; 0055bfb1
    IMUL ESI,EBX,0x44                   ; 0055bfb2
        ;   Label: LAB_0055bfb2
    MOV EAX,dword ptr [ESP]             ; 0055bfb5
    MOV dword ptr [ESP + 0x8],EAX       ; 0055bfb8
    ADD ESI,dword ptr [ESP + 0xc]       ; 0055bfbc
    JMP 0x0055bfde                      ; 0055bfc0
        ;   XREF to: 0055bfde (UNCONDITIONAL_JUMP)  ; LAB_0055bfde
    PUSH EBP                            ; 0055bfc2
        ;   Label: LAB_0055bfc2
    PUSH ESI                            ; 0055bfc3
    CALL core_setdir.cpp_testOBBIntersection_FUN_0055bab0 ; 0055bfc4
        ;   XREF to: 0055bab0 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_testOBBIntersection_FUN_0055bab0()
    ADD ESP,0x8                         ; 0055bfc9
    TEST EAX,EAX                        ; 0055bfcc
    JNZ 0x0055c00c                      ; 0055bfce
        ;   XREF to: 0055c00c (CONDITIONAL_JUMP)  ; LAB_0055c00c
    INC EBX                             ; 0055bfd0
        ;   Label: LAB_0055bfd0
    MOV EBP,dword ptr [EDI + 0x15b428]  ; 0055bfd1
    ADD ESI,0x44                        ; 0055bfd7
    CMP EBX,EBP                         ; 0055bfda
    JGE 0x0055bf8e                      ; 0055bfdc
        ;   XREF to: 0055bf8e (CONDITIONAL_JUMP)  ; LAB_0055bf8e
    PUSH EBX                            ; 0055bfde
        ;   Label: LAB_0055bfde
    PUSH EDI                            ; 0055bfdf
    CALL core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_0055c020 ; 0055bfe0
        ;   XREF to: 0055c020 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_0055c020(CDemonSet * this_ptr, int box_index)
    ADD ESP,0x8                         ; 0055bfe5
    MOV EDX,dword ptr [ESP + 0x14]      ; 0055bfe8
    MOV dword ptr [ESP + 0x10],EAX      ; 0055bfec
    CMP EAX,EDX                         ; 0055bff0
    JZ 0x0055bfd0                       ; 0055bff2
        ;   XREF to: 0055bfd0 (CONDITIONAL_JUMP)  ; LAB_0055bfd0
    MOV EBP,dword ptr [ESP + 0xc]       ; 0055bff4
    MOV ECX,dword ptr [ESP + 0x8]       ; 0055bff8
    PUSH ESI                            ; 0055bffc
    ADD EBP,ECX                         ; 0055bffd
    PUSH EBP                            ; 0055bfff
    CALL core_setdir.cpp_testOBBIntersection_FUN_0055bab0 ; 0055c000
        ;   XREF to: 0055bab0 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_testOBBIntersection_FUN_0055bab0()
    ADD ESP,0x8                         ; 0055c005
    TEST EAX,EAX                        ; 0055c008
    JZ 0x0055bfc2                       ; 0055c00a
        ;   XREF to: 0055bfc2 (CONDITIONAL_JUMP)  ; LAB_0055bfc2
    IMUL EAX,dword ptr [ESP + 0x10],0x44 ; 0055c00c
        ;   Label: LAB_0055c00c
    MOV EBP,dword ptr [ESP + 0x14]      ; 0055c011
    MOV dword ptr [EDI + EAX*0x1 + 0x15b46c],EBP ; 0055c015
    JMP 0x0055bfd0                      ; 0055c01c
        ;   XREF to: 0055bfd0 (UNCONDITIONAL_JUMP)  ; LAB_0055bfd0

