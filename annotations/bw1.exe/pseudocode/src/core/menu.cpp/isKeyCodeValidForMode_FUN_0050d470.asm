; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_menu_cpp_isKeyCodeValidForMode_FUN_0050d470(EInputCodeType *key_code_ptr,char *description)
;
; Parameters:
; EInputCodeType * Stack[0x4]:4   key_code_ptr
; char *           Stack[0x8]:4   description
;
; XREF[1]:
;   core_menu.cpp_FUN_0050d640 at 0050ebcc
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 g_CGameInstance.game_control
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0050d470
        ;   Label: core_menu.cpp_isKeyCodeValidForMode_FUN_0050d470
    MOV EAX,[0x0061d95c]                ; 0050d474 | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0xd0]      ; 0050d479 | g_CGameInstance.game_control
    TEST ECX,ECX                        ; 0050d47f
    JNZ 0x0050d4ea                      ; 0050d481
        ;   XREF to: 0050d4ea (CONDITIONAL_JUMP)  ; LAB_0050d4ea
    MOV EAX,dword ptr [EDX]             ; 0050d487
    CMP EAX,0x209                       ; 0050d489
    JNC 0x0050d4ab                      ; 0050d48e
        ;   XREF to: 0050d4ab (CONDITIONAL_JUMP)  ; LAB_0050d4ab
    CMP EAX,0x204                       ; 0050d490
    JNC 0x0050d4a5                      ; 0050d495
        ;   XREF to: 0050d4a5 (CONDITIONAL_JUMP)  ; LAB_0050d4a5
    CMP EAX,0x201                       ; 0050d497
    JNC 0x0050d4a5                      ; 0050d49c
        ;   XREF to: 0050d4a5 (CONDITIONAL_JUMP)  ; LAB_0050d4a5
    CMP EAX,0x200                       ; 0050d49e
    JNZ 0x0050d4cb                      ; 0050d4a3
        ;   XREF to: 0050d4cb (CONDITIONAL_JUMP)  ; LAB_0050d4cb
    MOV EAX,0x1                         ; 0050d4a5
        ;   Label: LAB_0050d4a5
    RET                                 ; 0050d4aa
    JBE 0x0050d4a5                      ; 0050d4ab
        ;   XREF to: 0050d4a5 (CONDITIONAL_JUMP)  ; LAB_0050d4a5
        ;   Label: LAB_0050d4ab
    CMP EAX,0x252                       ; 0050d4ad
    JNC 0x0050d4ce                      ; 0050d4b2
        ;   XREF to: 0050d4ce (CONDITIONAL_JUMP)  ; LAB_0050d4ce
    CMP EAX,0x20b                       ; 0050d4b4
    JC 0x0050d4a5                       ; 0050d4b9
        ;   XREF to: 0050d4a5 (CONDITIONAL_JUMP)  ; LAB_0050d4a5
    JBE 0x0050d4a5                      ; 0050d4bb
        ;   XREF to: 0050d4a5 (CONDITIONAL_JUMP)  ; LAB_0050d4a5
    CMP EAX,0x20c                       ; 0050d4bd
    JBE 0x0050d4a5                      ; 0050d4c2
        ;   XREF to: 0050d4a5 (CONDITIONAL_JUMP)  ; LAB_0050d4a5
    CMP EAX,0x251                       ; 0050d4c4
    JZ 0x0050d4a5                       ; 0050d4c9
        ;   XREF to: 0050d4a5 (CONDITIONAL_JUMP)  ; LAB_0050d4a5
    XOR EAX,EAX                         ; 0050d4cb
        ;   Label: LAB_0050d4cb
    RET                                 ; 0050d4cd
    JBE 0x0050d4a5                      ; 0050d4ce
        ;   XREF to: 0050d4a5 (CONDITIONAL_JUMP)  ; LAB_0050d4a5
        ;   Label: LAB_0050d4ce
    CMP EAX,0x254                       ; 0050d4d0
    JC 0x0050d4a5                       ; 0050d4d5
        ;   XREF to: 0050d4a5 (CONDITIONAL_JUMP)  ; LAB_0050d4a5
    JBE 0x0050d4a5                      ; 0050d4d7
        ;   XREF to: 0050d4a5 (CONDITIONAL_JUMP)  ; LAB_0050d4a5
    CMP EAX,0x255                       ; 0050d4d9
    JBE 0x0050d4a5                      ; 0050d4de
        ;   XREF to: 0050d4a5 (CONDITIONAL_JUMP)  ; LAB_0050d4a5
    CMP EAX,0x256                       ; 0050d4e0
    JZ 0x0050d4a5                       ; 0050d4e5
        ;   XREF to: 0050d4a5 (CONDITIONAL_JUMP)  ; LAB_0050d4a5
    XOR EAX,EAX                         ; 0050d4e7
    RET                                 ; 0050d4e9
    CMP ECX,0x1                         ; 0050d4ea
        ;   Label: LAB_0050d4ea
    JNZ 0x0050d555                      ; 0050d4ed
        ;   XREF to: 0050d555 (CONDITIONAL_JUMP)  ; LAB_0050d555
    MOV EAX,dword ptr [EDX]             ; 0050d4f3
    CMP EAX,0x208                       ; 0050d4f5
    JNC 0x0050d510                      ; 0050d4fa
        ;   XREF to: 0050d510 (CONDITIONAL_JUMP)  ; LAB_0050d510
    CMP EAX,0x204                       ; 0050d4fc
    JNC 0x0050d4a5                      ; 0050d501
        ;   XREF to: 0050d4a5 (CONDITIONAL_JUMP)  ; LAB_0050d4a5
    CMP EAX,0x202                       ; 0050d503
    JC 0x0050d4cb                       ; 0050d508
        ;   XREF to: 0050d4cb (CONDITIONAL_JUMP)  ; LAB_0050d4cb
    MOV EAX,0x1                         ; 0050d50a
    RET                                 ; 0050d50f
    JBE 0x0050d4a5                      ; 0050d510
        ;   XREF to: 0050d4a5 (CONDITIONAL_JUMP)  ; LAB_0050d4a5
        ;   Label: LAB_0050d510
    CMP EAX,0x251                       ; 0050d512
    JNC 0x0050d530                      ; 0050d517
        ;   XREF to: 0050d530 (CONDITIONAL_JUMP)  ; LAB_0050d530
    CMP EAX,0x20a                       ; 0050d519
    JC 0x0050d4a5                       ; 0050d51e
        ;   XREF to: 0050d4a5 (CONDITIONAL_JUMP)  ; LAB_0050d4a5
    JBE 0x0050d4a5                      ; 0050d520
        ;   XREF to: 0050d4a5 (CONDITIONAL_JUMP)  ; LAB_0050d4a5
    CMP EAX,0x20b                       ; 0050d522
    JZ 0x0050d4a5                       ; 0050d527
        ;   XREF to: 0050d4a5 (CONDITIONAL_JUMP)  ; LAB_0050d4a5
    XOR EAX,EAX                         ; 0050d52d
    RET                                 ; 0050d52f
    JBE 0x0050d4a5                      ; 0050d530
        ;   XREF to: 0050d4a5 (CONDITIONAL_JUMP)  ; LAB_0050d4a5
        ;   Label: LAB_0050d530
    CMP EAX,0x253                       ; 0050d536
    JC 0x0050d4a5                       ; 0050d53b
        ;   XREF to: 0050d4a5 (CONDITIONAL_JUMP)  ; LAB_0050d4a5
    JBE 0x0050d4a5                      ; 0050d541
        ;   XREF to: 0050d4a5 (CONDITIONAL_JUMP)  ; LAB_0050d4a5
    CMP EAX,0x254                       ; 0050d547
    JZ 0x0050d4a5                       ; 0050d54c
        ;   XREF to: 0050d4a5 (CONDITIONAL_JUMP)  ; LAB_0050d4a5
    XOR EAX,EAX                         ; 0050d552
    RET                                 ; 0050d554
    CMP ECX,0x2                         ; 0050d555
        ;   Label: LAB_0050d555
    JNZ 0x0050d4cb                      ; 0050d558
        ;   XREF to: 0050d4cb (CONDITIONAL_JUMP)  ; LAB_0050d4cb
    MOV EAX,dword ptr [EDX]             ; 0050d55e
    CMP EAX,0x20c                       ; 0050d560
    JNC 0x0050d589                      ; 0050d565
        ;   XREF to: 0050d589 (CONDITIONAL_JUMP)  ; LAB_0050d589
    CMP EAX,0x200                       ; 0050d567
    JC 0x0050d4cb                       ; 0050d56c
        ;   XREF to: 0050d4cb (CONDITIONAL_JUMP)  ; LAB_0050d4cb
    JBE 0x0050d4a5                      ; 0050d572
        ;   XREF to: 0050d4a5 (CONDITIONAL_JUMP)  ; LAB_0050d4a5
    CMP EAX,0x201                       ; 0050d578
    JNZ 0x0050d4cb                      ; 0050d57d
        ;   XREF to: 0050d4cb (CONDITIONAL_JUMP)  ; LAB_0050d4cb
    MOV EAX,0x1                         ; 0050d583
    RET                                 ; 0050d588
    JBE 0x0050d4a5                      ; 0050d589
        ;   XREF to: 0050d4a5 (CONDITIONAL_JUMP)  ; LAB_0050d4a5
        ;   Label: LAB_0050d589
    CMP EAX,0x255                       ; 0050d58f
    JC 0x0050d4cb                       ; 0050d594
        ;   XREF to: 0050d4cb (CONDITIONAL_JUMP)  ; LAB_0050d4cb
    JBE 0x0050d4a5                      ; 0050d59a
        ;   XREF to: 0050d4a5 (CONDITIONAL_JUMP)  ; LAB_0050d4a5
    CMP EAX,0x256                       ; 0050d5a0
    JZ 0x0050d4a5                       ; 0050d5a5
        ;   XREF to: 0050d4a5 (CONDITIONAL_JUMP)  ; LAB_0050d4a5
    XOR EAX,EAX                         ; 0050d5ab
    RET                                 ; 0050d5ad

