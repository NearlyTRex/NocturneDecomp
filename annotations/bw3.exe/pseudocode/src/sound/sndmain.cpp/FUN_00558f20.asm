; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_00558f20(void)
;
;
; XREF[1]:
;   sound_sndmain.cpp_FUN_00556fd0 at 0055910b
;
; Referenced Globals:
;   undefined4 DAT_02ce727c
;   undefined4 DAT_02ce7338
;   undefined4 DAT_02ce7384
;   undefined4 DAT_02ce7398
;   undefined4 DAT_02ce7450
;   undefined4 DAT_02ce7453
;   undefined4 DAT_02cf2828
;   undefined4 DAT_02cf2838
;   undefined4 DAT_02cf2848
;   undefined4 DAT_02cf28b8
;   undefined4 DAT_02cf3280
;   undefined4 DAT_02cf3288
;   undefined4 DAT_02cf3424
;   undefined4 DAT_02cf3427
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00554430
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270
;   sound_sndmain.cpp_FUN_005586d0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00558f20
        ;   Label: sound_sndmain.cpp_FUN_00558f20
    CMP dword ptr [0x02cf3280],0x0      ; 00558f21 | DAT_02cf3280
    JNZ 0x00558f2c                      ; 00558f28
        ;   XREF to: 00558f2c (CONDITIONAL_JUMP)  ; LAB_00558f2c
    POP EBP                             ; 00558f2a
        ;   Label: LAB_00558f2a
    RET                                 ; 00558f2b
    CALL sound_sndmain.cpp_FUN_005586d0 ; 00558f2c
        ;   XREF to: 005586d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005586d0(int enable)
        ;   Label: LAB_00558f2c
    CMP EAX,0x1                         ; 00558f31
    JL 0x00558f2a                       ; 00558f34
        ;   XREF to: 00558f2a (CONDITIONAL_JUMP)  ; LAB_00558f2a
    PUSH EDI                            ; 00558f36
    PUSH ESI                            ; 00558f37
    PUSH EBX                            ; 00558f38
    MOV ESI,0x2ce721c                   ; 00558f39
    LEA EDI,[ESI + 0x4700]              ; 00558f3e
    MOV ECX,dword ptr [ESI + 0x60]      ; 00558f44 | DAT_02ce727c | DAT_02ce7398
        ;   Label: LAB_00558f44
    MOV EBX,ESI                         ; 00558f47
    TEST ECX,ECX                        ; 00558f49
    JNZ 0x00559051                      ; 00558f4b
        ;   XREF to: 00559051 (CONDITIONAL_JUMP)  ; LAB_00559051
    ADD ESI,0x11c                       ; 00558f51
        ;   Label: LAB_00558f51
    CMP ESI,EDI                         ; 00558f57
    JNZ 0x00558f44                      ; 00558f59
        ;   XREF to: 00558f44 (CONDITIONAL_JUMP)  ; LAB_00558f44
    TEST byte ptr [0x02cf3424],0x2      ; 00558f5b | DAT_02cf3424
    JZ 0x00558fa8                       ; 00558f62
        ;   XREF to: 00558fa8 (CONDITIONAL_JUMP)  ; LAB_00558fa8
    MOV EAX,[0x02cf28b8]                ; 00558f64 | DAT_02cf28b8
    MOV ESI,dword ptr [EAX*0x8 + 0x2cf284c] ; 00558f69
    PUSH ESI                            ; 00558f70
    MOV EDI,dword ptr [EAX*0x8 + 0x2cf2848] ; 00558f71 | DAT_02cf2848
    PUSH EDI                            ; 00558f78
    MOV EBP,dword ptr [EAX*0x8 + 0x2cf283c] ; 00558f79
    PUSH EBP                            ; 00558f80
    MOV ECX,dword ptr [EAX*0x8 + 0x2cf2838] ; 00558f81 | DAT_02cf2838
    PUSH ECX                            ; 00558f88
    MOV ESI,dword ptr [EAX*0x8 + 0x2cf282c] ; 00558f89
    PUSH ESI                            ; 00558f90
    MOV EDI,dword ptr [EAX*0x8 + 0x2cf2828] ; 00558f91 | DAT_02cf2828
    MOV EDX,dword ptr [0x02cf3280]      ; 00558f98 | DAT_02cf3280
    PUSH EDI                            ; 00558f9e
    MOV EBX,dword ptr [EDX]             ; 00558f9f
    PUSH EDX                            ; 00558fa1
    CALL dword ptr [EBX + 0x1c]         ; 00558fa2
    ADD ESP,0x1c                        ; 00558fa5
    TEST byte ptr [0x02cf3427],0x20     ; 00558fa8 | DAT_02cf3427
        ;   Label: LAB_00558fa8
    JZ 0x00559004                       ; 00558faf
        ;   XREF to: 00559004 (CONDITIONAL_JUMP)  ; LAB_00559004
    MOV EAX,[0x02cf28b8]                ; 00558fb1 | DAT_02cf28b8
    PUSH dword ptr [EAX*0x4 + 0x2cf28b0] ; 00558fb6
    PUSH dword ptr [EAX*0x4 + 0x2cf28a8] ; 00558fbd
    PUSH dword ptr [EAX*0x4 + 0x2cf28a0] ; 00558fc4
    PUSH dword ptr [EAX*0x4 + 0x2cf2898] ; 00558fcb
    PUSH dword ptr [EAX*0x4 + 0x2cf2890] ; 00558fd2
    PUSH dword ptr [EAX*0x4 + 0x2cf2888] ; 00558fd9
    PUSH dword ptr [EAX*0x4 + 0x2cf2880] ; 00558fe0
    MOV EDX,dword ptr [0x02cf3280]      ; 00558fe7 | DAT_02cf3280
    PUSH dword ptr [EAX*0x4 + 0x2cf2878] ; 00558fed
    MOV EBX,dword ptr [EDX]             ; 00558ff4
    PUSH dword ptr [EAX*0x4 + 0x2cf2870] ; 00558ff6
    PUSH EDX                            ; 00558ffd
    CALL dword ptr [EBX + 0x20]         ; 00558ffe
    ADD ESP,0x28                        ; 00559001
    TEST byte ptr [0x02cf3424],0x4      ; 00559004 | DAT_02cf3424
        ;   Label: LAB_00559004
    JZ 0x00559036                       ; 0055900b
        ;   XREF to: 00559036 (CONDITIONAL_JUMP)  ; LAB_00559036
    MOV EAX,[0x02cf28b8]                ; 0055900d | DAT_02cf28b8
    PUSH dword ptr [EAX*0x4 + 0x2cf2868] ; 00559012
    MOV EDX,dword ptr [0x02cf3280]      ; 00559019 | DAT_02cf3280
    PUSH dword ptr [EAX*0x4 + 0x2cf2860] ; 0055901f
    MOV EBX,dword ptr [EDX]             ; 00559026
    PUSH dword ptr [EAX*0x4 + 0x2cf2858] ; 00559028
    PUSH EDX                            ; 0055902f
    CALL dword ptr [EBX + 0x24]         ; 00559030
    ADD ESP,0x10                        ; 00559033
    MOV EAX,[0x02cf3280]                ; 00559036 | DAT_02cf3280
        ;   Label: LAB_00559036
    XOR EBP,EBP                         ; 0055903b
    PUSH EAX                            ; 0055903d
    MOV EDX,dword ptr [EAX]             ; 0055903e
    MOV dword ptr [0x02cf3424],EBP      ; 00559040 | DAT_02cf3424
    CALL dword ptr [EDX + 0x18]         ; 00559046
    ADD ESP,0x4                         ; 00559049
    POP EBX                             ; 0055904c
    POP ESI                             ; 0055904d
    POP EDI                             ; 0055904e
    POP EBP                             ; 0055904f
    RET                                 ; 00559050
    CMP dword ptr [0x02cf3288],0x1      ; 00559051 | DAT_02cf3288
        ;   Label: LAB_00559051
    JNZ 0x00559065                      ; 00559058
        ;   XREF to: 00559065 (CONDITIONAL_JUMP)  ; LAB_00559065
    MOV EAX,[0x02cf3424]                ; 0055905a | DAT_02cf3424
    OR dword ptr [ESI + 0x118],EAX      ; 0055905f | DAT_02ce7450
    TEST byte ptr [EBX + 0x4c],0x1      ; 00559065 | DAT_02ce7384
        ;   Label: LAB_00559065
    JZ 0x00559075                       ; 00559069
        ;   XREF to: 00559075 (CONDITIONAL_JUMP)  ; LAB_00559075
    AND dword ptr [EBX + 0x118],0xdffffff9 ; 0055906b | DAT_02ce7450
    CMP dword ptr [EBX + 0x118],0x0     ; 00559075 | DAT_02ce7450
        ;   Label: LAB_00559075
    JZ 0x00558f51                       ; 0055907c
        ;   XREF to: 00558f51 (CONDITIONAL_JUMP)  ; LAB_00558f51
    PUSH 0x0                            ; 00559082
    PUSH EBX                            ; 00559084 | DAT_02ce7338
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_00554430 ; 00559085
        ;   XREF to: 00554430 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_00554430(CSfxSlot * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0055908a
    MOV ECX,dword ptr [EBX + 0x118]     ; 0055908d | DAT_02ce7450
    PUSH ECX                            ; 00559093
    MOV EAX,[0x02cf3280]                ; 00559094 | DAT_02cf3280
    PUSH EBX                            ; 00559099 | DAT_02ce7338
    MOV EDX,dword ptr [EAX]             ; 0055909a
    PUSH EAX                            ; 0055909c
    CALL dword ptr [EDX + 0x44]         ; 0055909d
    ADD ESP,0xc                         ; 005590a0
    TEST EAX,EAX                        ; 005590a3
    JZ 0x005590d3                       ; 005590a5
        ;   XREF to: 005590d3 (CONDITIONAL_JUMP)  ; LAB_005590d3
    TEST byte ptr [EBX + 0x11b],0x40    ; 005590a7 | DAT_02ce7453
    JZ 0x00558f51                       ; 005590ae
        ;   XREF to: 00558f51 (CONDITIONAL_JUMP)  ; LAB_00558f51
    PUSH EBX                            ; 005590b4 | DAT_02ce7338
    MOV EAX,[0x02cf3280]                ; 005590b5 | DAT_02cf3280
    PUSH EAX                            ; 005590ba
    MOV EDX,dword ptr [EAX]             ; 005590bb
    CALL dword ptr [EDX + 0x4c]         ; 005590bd
    ADD ESP,0x8                         ; 005590c0
    TEST EAX,EAX                        ; 005590c3
    JZ 0x005590d3                       ; 005590c5
        ;   XREF to: 005590d3 (CONDITIONAL_JUMP)  ; LAB_005590d3
    AND byte ptr [EBX + 0x11b],0xbf     ; 005590c7 | DAT_02ce7453
    JMP 0x00558f51                      ; 005590ce
        ;   XREF to: 00558f51 (UNCONDITIONAL_JUMP)  ; LAB_00558f51
    PUSH EBX                            ; 005590d3 | DAT_02ce7338
        ;   Label: LAB_005590d3
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270 ; 005590d4
        ;   XREF to: 00555270 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_00555270(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 005590d9
    JMP 0x00558f51                      ; 005590dc
        ;   XREF to: 00558f51 (UNCONDITIONAL_JUMP)  ; LAB_00558f51

