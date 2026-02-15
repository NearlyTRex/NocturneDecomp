; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setdir_cpp_CDemonSet_FUN_00576710(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 at 0056abe7
;   core_set.cpp_CDemonSet_load_FUN_00569410 at 00569c11
;   core_setedit.cpp_CDemonSet_FUN_00583170 at 00583258
;
; Called Functions:
;   core_setdir.cpp_CDemonSet_FUN_00576820
;   core_setdir.cpp_FUN_005763a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576710
        ;   Label: core_setdir.cpp_CDemonSet_FUN_00576710
    PUSH ESI                            ; 00576711
    PUSH EDI                            ; 00576712
    PUSH EBP                            ; 00576713
    SUB ESP,0x18                        ; 00576714
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00576717
    MOV EDX,dword ptr [EDI + 0x15b410]  ; 0057671b
    XOR EAX,EAX                         ; 00576721
    TEST EDX,EDX                        ; 00576723
    JLE 0x00576750                      ; 00576725
        ;   XREF to: 00576750 (CONDITIONAL_JUMP)  ; LAB_00576750
    MOV EBX,EDI                         ; 00576727
    MOV dword ptr [EBX + 0x15b454],0xffffffff ; 00576729
        ;   Label: LAB_00576729
    INC EAX                             ; 00576733
    MOV ECX,dword ptr [EDI + 0x15b410]  ; 00576734
    ADD EBX,0x44                        ; 0057673a
    CMP EAX,ECX                         ; 0057673d
    JL 0x00576729                       ; 0057673f
        ;   XREF to: 00576729 (CONDITIONAL_JUMP)  ; LAB_00576729
    LEA EAX,[EAX]                       ; 00576741
    LEA EDX,[EDX]                       ; 00576747
    LEA EAX,[EAX]                       ; 0057674d
    XOR EBX,EBX                         ; 00576750
        ;   Label: LAB_00576750
    MOV ESI,dword ptr [EDI + 0x15b410]  ; 00576752
    MOV dword ptr [ESP + 0x4],EBX       ; 00576758
    TEST ESI,ESI                        ; 0057675c
    JLE 0x005767aa                      ; 0057675e
        ;   XREF to: 005767aa (CONDITIONAL_JUMP)  ; LAB_005767aa
    LEA EAX,[EDI + 0x15b414]            ; 00576760
    MOV dword ptr [ESP],EBX             ; 00576766
    MOV dword ptr [ESP + 0xc],EAX       ; 00576769
    MOV EBX,dword ptr [ESP + 0x4]       ; 0057676d
        ;   Label: LAB_0057676d
    PUSH EBX                            ; 00576771
    PUSH EDI                            ; 00576772
    CALL core_setdir.cpp_CDemonSet_FUN_00576820 ; 00576773
        ;   XREF to: 00576820 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_FUN_00576820(CDemonSet * this_ptr)
    INC EBX                             ; 00576778
    ADD ESP,0x8                         ; 00576779
    MOV ESI,dword ptr [EDI + 0x15b410]  ; 0057677c
    MOV dword ptr [ESP + 0x14],EAX      ; 00576782
    CMP EBX,ESI                         ; 00576786
    JL 0x005767b2                       ; 00576788
        ;   XREF to: 005767b2 (CONDITIONAL_JUMP)  ; LAB_005767b2
    MOV EBP,dword ptr [ESP]             ; 0057678e
        ;   Label: LAB_0057678e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00576791
    MOV EDX,dword ptr [EDI + 0x15b410]  ; 00576795
    ADD EBP,0x44                        ; 0057679b
    INC EAX                             ; 0057679e
    MOV dword ptr [ESP],EBP             ; 0057679f
    MOV dword ptr [ESP + 0x4],EAX       ; 005767a2
    CMP EAX,EDX                         ; 005767a6
    JL 0x0057676d                       ; 005767a8
        ;   XREF to: 0057676d (CONDITIONAL_JUMP)  ; LAB_0057676d
    ADD ESP,0x18                        ; 005767aa
        ;   Label: LAB_005767aa
    POP EBP                             ; 005767ad
    POP EDI                             ; 005767ae
    POP ESI                             ; 005767af
    POP EBX                             ; 005767b0
    RET                                 ; 005767b1
    IMUL ESI,EBX,0x44                   ; 005767b2
        ;   Label: LAB_005767b2
    MOV EAX,dword ptr [ESP]             ; 005767b5
    MOV dword ptr [ESP + 0x8],EAX       ; 005767b8
    ADD ESI,dword ptr [ESP + 0xc]       ; 005767bc
    JMP 0x005767de                      ; 005767c0
        ;   XREF to: 005767de (UNCONDITIONAL_JUMP)  ; LAB_005767de
    PUSH EBP                            ; 005767c2
        ;   Label: LAB_005767c2
    PUSH ESI                            ; 005767c3
    CALL core_setdir.cpp_FUN_005763a0   ; 005767c4
        ;   XREF to: 005763a0 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_FUN_005763a0()
    ADD ESP,0x8                         ; 005767c9
    TEST EAX,EAX                        ; 005767cc
    JNZ 0x0057680c                      ; 005767ce
        ;   XREF to: 0057680c (CONDITIONAL_JUMP)  ; LAB_0057680c
    INC EBX                             ; 005767d0
        ;   Label: LAB_005767d0
    MOV EBP,dword ptr [EDI + 0x15b410]  ; 005767d1
    ADD ESI,0x44                        ; 005767d7
    CMP EBX,EBP                         ; 005767da
    JGE 0x0057678e                      ; 005767dc
        ;   XREF to: 0057678e (CONDITIONAL_JUMP)  ; LAB_0057678e
    PUSH EBX                            ; 005767de
        ;   Label: LAB_005767de
    PUSH EDI                            ; 005767df
    CALL core_setdir.cpp_CDemonSet_FUN_00576820 ; 005767e0
        ;   XREF to: 00576820 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_FUN_00576820(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 005767e5
    MOV EDX,dword ptr [ESP + 0x14]      ; 005767e8
    MOV dword ptr [ESP + 0x10],EAX      ; 005767ec
    CMP EAX,EDX                         ; 005767f0
    JZ 0x005767d0                       ; 005767f2
        ;   XREF to: 005767d0 (CONDITIONAL_JUMP)  ; LAB_005767d0
    MOV EBP,dword ptr [ESP + 0xc]       ; 005767f4
    MOV ECX,dword ptr [ESP + 0x8]       ; 005767f8
    PUSH ESI                            ; 005767fc
    ADD EBP,ECX                         ; 005767fd
    PUSH EBP                            ; 005767ff
    CALL core_setdir.cpp_FUN_005763a0   ; 00576800
        ;   XREF to: 005763a0 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_FUN_005763a0()
    ADD ESP,0x8                         ; 00576805
    TEST EAX,EAX                        ; 00576808
    JZ 0x005767c2                       ; 0057680a
        ;   XREF to: 005767c2 (CONDITIONAL_JUMP)  ; LAB_005767c2
    IMUL EAX,dword ptr [ESP + 0x10],0x44 ; 0057680c
        ;   Label: LAB_0057680c
    MOV EBP,dword ptr [ESP + 0x14]      ; 00576811
    MOV dword ptr [EDI + EAX*0x1 + 0x15b454],EBP ; 00576815
    JMP 0x005767d0                      ; 0057681c
        ;   XREF to: 005767d0 (UNCONDITIONAL_JUMP)  ; LAB_005767d0

