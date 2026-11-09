; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_hero_cpp_FUN_004d06c0(CCharacter *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   unkafter_stranger.cpp_FUN_0045d0c0 at 0045d187
;
; Referenced Globals:
;   void* switchdataD_004d0690 = 004d0717
;
; Called Functions:
;   core_charactr.cpp_FUN_00429180
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d06c0
        ;   Label: core_hero.cpp_FUN_004d06c0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d06c4
    CMP dword ptr [EAX + 0x25618],0x0   ; 004d06c8
    JNZ 0x004d0730                      ; 004d06cf
        ;   XREF to: 004d0730 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x25604],0x0   ; 004d06d5
    JNZ 0x004d0730                      ; 004d06dc
        ;   XREF to: 004d0730 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x25608],0x0   ; 004d06de
    JNZ 0x004d0730                      ; 004d06e5
        ;   XREF to: 004d0730 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x2560c],0x0   ; 004d06e7
    JNZ 0x004d0730                      ; 004d06ee
        ;   XREF to: 004d0730 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x25610],0x0   ; 004d06f0
    JNZ 0x004d0730                      ; 004d06f7
        ;   XREF to: 004d0730 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x25614],0x0   ; 004d06f9
    JNZ 0x004d0730                      ; 004d0700
        ;   XREF to: 004d0730 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x2561c],0x0   ; 004d0702
    JNZ 0x004d0730                      ; 004d0709
        ;   XREF to: 004d0730 (CONDITIONAL_JUMP)
    CMP EDX,0xb                         ; 004d070b
    JA 0x004d0730                       ; 004d070e
        ;   XREF to: 004d0730 (CONDITIONAL_JUMP)
    JMP dword ptr [EDX*0x4 + 0x4d0690]  ; 004d0710 | caseD_b | caseD_2 | caseD_9
        ;   Label: switchD
    PUSH EAX                            ; 004d0717
        ;   Label: caseD_0
    CALL core_charactr.cpp_FUN_00429180 ; 004d0718
        ;   XREF to: 00429180 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00429180(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004d071d
    TEST EAX,EAX                        ; 004d0720
    JZ 0x004cea10                       ; 004d0722
        ;   XREF to: 004cea10 (CONDITIONAL_JUMP)  ; caseD_2
    LEA EAX,[EAX]                       ; 004d0728
    MOV EDX,EDX                         ; 004d072e
    PUSH EAX                            ; 004d0733
        ;   Label: caseD_9
    CALL core_charactr.cpp_FUN_00429180 ; 004d0734
        ;   XREF to: 00429180 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00429180(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004d0739
    TEST EAX,EAX                        ; 004d073c
    JNZ 0x004d0730                      ; 004d073e
        ;   XREF to: 004d0730 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 004d0740
    RET                                 ; 004d0745

