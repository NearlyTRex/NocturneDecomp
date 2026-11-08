; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005634f0(int param_1,undefined4 param_2,int param_3)
;
;
; XREF[55]:
;   FUN_0040f300 at 0040f328
;   FUN_00411280 at 004112bc
;   FUN_00412840 at 0041287c
;   FUN_004152c0 at 004152e8
;   FUN_0041b940 at 0041b969
;   FUN_00423940 at 00423976
;   FUN_004287e0 at 00428835
;   FUN_0042c510 at 0042c5ba
;   FUN_00432cb0 at 00432cec
;   FUN_00432f10 at 00432f61
;   ... and 45 more
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005f1d31
;   TerminatedCString s_Can_t_find_bone_s_in_ske_005f1d46
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005634f0
        ;   Label: FUN_005634f0
    PUSH ESI                            ; 005634f1
    PUSH EDI                            ; 005634f2
    PUSH EBP                            ; 005634f3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005634f4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005634f8
    MOV EDX,dword ptr [EDI + 0x1de78]   ; 005634fc
    XOR EBX,EBX                         ; 00563502
    TEST EDX,EDX                        ; 00563504
    JLE 0x0056352a                      ; 00563506
        ;   XREF to: 0056352a (CONDITIONAL_JUMP)  ; LAB_0056352a
    LEA ESI,[EDI + 0x1de7c]             ; 00563508
    PUSH EBP                            ; 0056350e
        ;   Label: LAB_0056350e
    PUSH ESI                            ; 0056350f
    CALL FUN_005c04e0                   ; 00563510
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 00563515
    TEST EAX,EAX                        ; 00563518
    JZ 0x0056353b                       ; 0056351a
        ;   XREF to: 0056353b (CONDITIONAL_JUMP)  ; LAB_0056353b
    INC EBX                             ; 0056351c
    MOV ECX,dword ptr [EDI + 0x1de78]   ; 0056351d
    ADD ESI,0x24                        ; 00563523
    CMP EBX,ECX                         ; 00563526
    JL 0x0056350e                       ; 00563528
        ;   XREF to: 0056350e (CONDITIONAL_JUMP)  ; LAB_0056350e
    CMP dword ptr [ESP + 0x1c],0x0      ; 0056352a
        ;   Label: LAB_0056352a
    JNZ 0x00563542                      ; 0056352f
        ;   XREF to: 00563542 (CONDITIONAL_JUMP)  ; LAB_00563542
    MOV EAX,0xffffffff                  ; 00563531
    POP EBP                             ; 00563536
    POP EDI                             ; 00563537
    POP ESI                             ; 00563538
    POP EBX                             ; 00563539
    RET                                 ; 0056353a
    MOV EAX,EBX                         ; 0056353b
        ;   Label: LAB_0056353b
    POP EBP                             ; 0056353d
    POP EDI                             ; 0056353e
    POP ESI                             ; 0056353f
    POP EBX                             ; 00563540
    RET                                 ; 00563541
    ADD EDI,0x1de28                     ; 00563542
        ;   Label: LAB_00563542
    PUSH EDI                            ; 00563548
    PUSH EBP                            ; 00563549
    MOV ESI,0x5f1d31                    ; 0056354a | = "..\\core\\skeleton.cpp"
    MOV EAX,0x182                       ; 0056354f
    PUSH 0x5f1d46                       ; 00563554 | = "Can't find bone %s in skeleton %s!"
    MOV dword ptr [0x01d1d400],ESI      ; 00563559 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0056355f | DAT_01d1d404
    CALL FUN_005030e0                   ; 00563564
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0xc                         ; 00563569
    MOV EAX,0xffffffff                  ; 0056356c
    POP EBP                             ; 00563571
    POP EDI                             ; 00563572
    POP ESI                             ; 00563573
    POP EBX                             ; 00563574
    RET                                 ; 00563575

