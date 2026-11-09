; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dlight_cpp_CDemonLight_testVisibility_FUN_004665c0(CDemonLight *this_ptr,CVector3i *corners)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   corners
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01bc120c
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_FUN_005558c0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004665c0
        ;   Label: core_dlight.cpp_CDemonLight_testVisibility_FUN_004665c0
    PUSH ESI                            ; 004665c1
    PUSH EDI                            ; 004665c2
    PUSH EBP                            ; 004665c3
    SUB ESP,0x28                        ; 004665c4
    MOV EDX,0x4                         ; 004665c7
    PUSH 0x1                            ; 004665cc
    MOV ESI,0x2                         ; 004665ce
    MOV EBP,dword ptr [0x00612560]      ; 004665d3 | DAT_00612560
    XOR ECX,ECX                         ; 004665d9
    XOR EBX,EBX                         ; 004665db
    MOV dword ptr [ESP + 0x8],EDX       ; 004665dd
    MOV dword ptr [ESP + 0x18],ECX      ; 004665e1
    MOV dword ptr [ESP + 0x14],ECX      ; 004665e5
    PUSH EBP                            ; 004665e9 | DAT_01bc120c
    MOV dword ptr [ESP + 0x14],ECX      ; 004665ea
    MOV dword ptr [ESP + 0x10],ECX      ; 004665ee
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 004665f2
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    MOV EDX,0x4                         ; 004665f7
    MOV ECX,0x6                         ; 004665fc
    ADD ESP,0x8                         ; 00466601
    MOV EAX,ESP                         ; 00466604
    MOV EDI,dword ptr [0x00622c18]      ; 00466606 | g_CDemonSetPtr
    PUSH EAX                            ; 0046660c
    MOV dword ptr [ESP + 0x1c],EBX      ; 0046660d
    MOV dword ptr [ESP + 0x20],EDX      ; 00466611
    PUSH EDI                            ; 00466615 | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x28],ECX      ; 00466616
    MOV dword ptr [ESP + 0x2c],ESI      ; 0046661a
    CALL core_set.cpp_FUN_005558c0      ; 0046661e
        ;   XREF to: 005558c0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_FUN_005558c0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00466623
    TEST EAX,EAX                        ; 00466626
    JZ 0x00466649                       ; 00466628
        ;   XREF to: 00466649 (CONDITIONAL_JUMP)  ; LAB_00466649
    MOV EBX,0x1                         ; 0046662a
        ;   Label: LAB_0046662a
    PUSH 0x0                            ; 0046662f
        ;   Label: LAB_0046662f
    MOV EAX,[0x00612560]                ; 00466631 | DAT_00612560
    PUSH EAX                            ; 00466636 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 00466637
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0046663c
    MOV EAX,EBX                         ; 0046663f
    ADD ESP,0x28                        ; 00466641
    POP EBP                             ; 00466644
    POP EDI                             ; 00466645
    POP ESI                             ; 00466646
    POP EBX                             ; 00466647
    RET                                 ; 00466648
    MOV EBP,0x1                         ; 00466649
        ;   Label: LAB_00466649
    MOV EAX,0x3                         ; 0046664e
    MOV EDX,0x7                         ; 00466653
    MOV dword ptr [ESP + 0x1c],EAX      ; 00466658
    MOV EAX,ESP                         ; 0046665c
    MOV ECX,0x5                         ; 0046665e
    PUSH EAX                            ; 00466663
    MOV ESI,dword ptr [0x00622c18]      ; 00466664 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x1c],EBP      ; 0046666a
    PUSH ESI                            ; 0046666e | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x28],EDX      ; 0046666f
    MOV dword ptr [ESP + 0x2c],ECX      ; 00466673
    CALL core_set.cpp_FUN_005558c0      ; 00466677
        ;   XREF to: 005558c0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_FUN_005558c0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0046667c
    TEST EAX,EAX                        ; 0046667f
    JZ 0x00466687                       ; 00466681
        ;   XREF to: 00466687 (CONDITIONAL_JUMP)  ; LAB_00466687
    MOV EBX,EBP                         ; 00466683
    JMP 0x0046662f                      ; 00466685
        ;   XREF to: 0046662f (UNCONDITIONAL_JUMP)  ; LAB_0046662f
    MOV dword ptr [ESP + 0x20],0x5      ; 00466687
        ;   Label: LAB_00466687
    MOV EAX,ESP                         ; 0046668f
    MOV EDX,0x4                         ; 00466691
    PUSH EAX                            ; 00466696
    MOV ECX,dword ptr [0x00622c18]      ; 00466697 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x1c],EBX      ; 0046669d
    PUSH ECX                            ; 004666a1 | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x24],EBP      ; 004666a2
    MOV dword ptr [ESP + 0x2c],EDX      ; 004666a6
    CALL core_set.cpp_FUN_005558c0      ; 004666aa
        ;   XREF to: 005558c0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_FUN_005558c0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004666af
    TEST EAX,EAX                        ; 004666b2
    JZ 0x004666bd                       ; 004666b4
        ;   XREF to: 004666bd (CONDITIONAL_JUMP)  ; LAB_004666bd
    MOV EBX,EBP                         ; 004666b6
    JMP 0x0046662f                      ; 004666b8
        ;   XREF to: 0046662f (UNCONDITIONAL_JUMP)  ; LAB_0046662f
    MOV ESI,0x2                         ; 004666bd
        ;   Label: LAB_004666bd
    MOV EAX,0x3                         ; 004666c2
    MOV EDI,0x6                         ; 004666c7
    MOV dword ptr [ESP + 0x24],EAX      ; 004666cc
    MOV EAX,ESP                         ; 004666d0
    MOV EBP,0x7                         ; 004666d2
    PUSH EAX                            ; 004666d7
    MOV EDX,dword ptr [0x00622c18]      ; 004666d8 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x1c],ESI      ; 004666de
    PUSH EDX                            ; 004666e2 | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x24],EDI      ; 004666e3
    MOV dword ptr [ESP + 0x28],EBP      ; 004666e7
    CALL core_set.cpp_FUN_005558c0      ; 004666eb
        ;   XREF to: 005558c0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_FUN_005558c0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004666f0
    TEST EAX,EAX                        ; 004666f3
    JNZ 0x0046662a                      ; 004666f5
        ;   XREF to: 0046662a (CONDITIONAL_JUMP)  ; LAB_0046662a
    MOV EDI,0x3                         ; 004666fb
    MOV EBP,0x1                         ; 00466700
    MOV EAX,ESP                         ; 00466705
    MOV dword ptr [ESP + 0x18],EBX      ; 00466707
    PUSH EAX                            ; 0046670b
    MOV EAX,[0x00622c18]                ; 0046670c | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x20],ESI      ; 00466711
    PUSH EAX                            ; 00466715 | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x28],EDI      ; 00466716
    MOV dword ptr [ESP + 0x2c],EBP      ; 0046671a
    CALL core_set.cpp_FUN_005558c0      ; 0046671e
        ;   XREF to: 005558c0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_FUN_005558c0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00466723
    TEST EAX,EAX                        ; 00466726
    JZ 0x00466731                       ; 00466728
        ;   XREF to: 00466731 (CONDITIONAL_JUMP)  ; LAB_00466731
    MOV EBX,EBP                         ; 0046672a
    JMP 0x0046662f                      ; 0046672c
        ;   XREF to: 0046662f (UNCONDITIONAL_JUMP)  ; LAB_0046662f
    MOV EDX,0x4                         ; 00466731
        ;   Label: LAB_00466731
    MOV ECX,0x5                         ; 00466736
    MOV ESI,0x7                         ; 0046673b
    MOV EDI,0x6                         ; 00466740
    MOV EAX,ESP                         ; 00466745
    MOV EBP,dword ptr [0x00622c18]      ; 00466747 | g_CDemonSetPtr
    PUSH EAX                            ; 0046674d
    MOV dword ptr [ESP + 0x1c],EDX      ; 0046674e
    MOV dword ptr [ESP + 0x20],ECX      ; 00466752
    PUSH EBP                            ; 00466756 | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x28],ESI      ; 00466757
    MOV dword ptr [ESP + 0x2c],EDI      ; 0046675b
    CALL core_set.cpp_FUN_005558c0      ; 0046675f
        ;   XREF to: 005558c0 (UNCONDITIONAL_CALL)  ; int core_set.cpp_FUN_005558c0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00466764
    TEST EAX,EAX                        ; 00466767
    JZ 0x0046662f                       ; 00466769
        ;   XREF to: 0046662f (CONDITIONAL_JUMP)  ; LAB_0046662f
    JMP 0x0046662a                      ; 0046676f
        ;   XREF to: 0046662a (UNCONDITIONAL_JUMP)  ; LAB_0046662a

