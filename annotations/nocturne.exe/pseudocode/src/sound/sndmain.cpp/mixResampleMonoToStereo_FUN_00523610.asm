; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double sound_sndmain_cpp_mixResampleMonoToStereo_FUN_00523610(int param_1,int *param_2,float *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)
;
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined8       Stack[-0x34]:8  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_sndmain.cpp_CSfxSlot_mix_FUN_00524d10 at 00525491
;
; Referenced Globals:
;   undefined4 DAT_00592946
;
; Called Functions:
;   crt_math.c_floor_FUN_005648c0
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523610
        ;   Label: sound_sndmain.cpp_mixResampleMonoToStereo_FUN_00523610
    PUSH ESI                            ; 00523611
    PUSH EDI                            ; 00523612
    PUSH EBP                            ; 00523613
    MOV EBP,ESP                         ; 00523614
    SUB ESP,0x2c                        ; 00523616
    CMP dword ptr [EBP + 0x30],0x1      ; 00523619
    JGE 0x00523638                      ; 0052361d
        ;   XREF to: 00523638 (CONDITIONAL_JUMP)  ; LAB_00523638
    MOV EAX,dword ptr [EBP + 0x20]      ; 0052361f
        ;   Label: LAB_0052361f
    MOV dword ptr [EBP + -0x2c],EAX     ; 00523622
    MOV EAX,dword ptr [EBP + 0x24]      ; 00523625
    MOV dword ptr [EBP + -0x28],EAX     ; 00523628
    MOV EAX,dword ptr [EBP + -0x2c]     ; 0052362b
    MOV EDX,dword ptr [EBP + -0x28]     ; 0052362e
    MOV ESP,EBP                         ; 00523631
    POP EBP                             ; 00523633
    POP EDI                             ; 00523634
    POP ESI                             ; 00523635
    POP EBX                             ; 00523636
    RET                                 ; 00523637
    MOV ECX,dword ptr [EBP + 0x24]      ; 00523638
        ;   Label: LAB_00523638
    PUSH ECX                            ; 0052363b
    MOV EBX,dword ptr [EBP + 0x20]      ; 0052363c
    PUSH EBX                            ; 0052363f
    CALL crt_math.c_floor_FUN_005648c0  ; 00523640
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_floor_FUN_005648c0()
    MOV dword ptr [EBP + -0x24],EAX     ; 00523645
    MOV dword ptr [EBP + -0x20],EDX     ; 00523648
    ADD ESP,0x8                         ; 0052364b
    FLD double ptr [EBP + -0x24]        ; 0052364e
    CALL crt_math.c_round_FUN_00563a30  ; 00523651
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP qword ptr [EBP + -0x24]       ; 00523656
    MOV EAX,dword ptr [EBP + -0x24]     ; 00523659
    MOV dword ptr [EBP + -0x18],EAX     ; 0052365c
    XOR ESI,ESI                         ; 0052365f
    MOV dword ptr [EBP + -0x20],ESI     ; 00523661
    MOV EAX,dword ptr [EBP + -0x18]     ; 00523664
    MOV dword ptr [EBP + -0x24],EAX     ; 00523667
    FILD qword ptr [EBP + -0x24]        ; 0052366a
    FSUBR double ptr [EBP + 0x20]       ; 0052366d
    FMUL double ptr [0x00592946]        ; 00523670 | DAT_00592946
    CALL crt_math.c_round_FUN_00563a30  ; 00523676
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP qword ptr [EBP + -0x24]       ; 0052367b
    MOV EAX,dword ptr [EBP + -0x24]     ; 0052367e
    MOV dword ptr [EBP + -0x14],EAX     ; 00523681
    MOV EDI,dword ptr [EBP + 0x2c]      ; 00523684
    PUSH EDI                            ; 00523687
    MOV EAX,dword ptr [EBP + 0x28]      ; 00523688
    PUSH EAX                            ; 0052368b
    CALL crt_math.c_floor_FUN_005648c0  ; 0052368c
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_floor_FUN_005648c0()
    MOV dword ptr [EBP + -0x24],EAX     ; 00523691
    MOV dword ptr [EBP + -0x20],EDX     ; 00523694
    ADD ESP,0x8                         ; 00523697
    FLD double ptr [EBP + -0x24]        ; 0052369a
    CALL crt_math.c_round_FUN_00563a30  ; 0052369d
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP qword ptr [EBP + -0x24]       ; 005236a2
    MOV EAX,dword ptr [EBP + -0x24]     ; 005236a5
    MOV dword ptr [EBP + -0x10],EAX     ; 005236a8
    MOV dword ptr [EBP + -0x20],ESI     ; 005236ab
    MOV EAX,dword ptr [EBP + -0x10]     ; 005236ae
    MOV dword ptr [EBP + -0x24],EAX     ; 005236b1
    FILD qword ptr [EBP + -0x24]        ; 005236b4
    FSUBR double ptr [EBP + 0x28]       ; 005236b7
    FMUL double ptr [0x00592946]        ; 005236ba | DAT_00592946
    CALL crt_math.c_round_FUN_00563a30  ; 005236c0
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP qword ptr [EBP + -0x24]       ; 005236c5
    MOV EAX,dword ptr [EBP + -0x24]     ; 005236c8
    MOV dword ptr [EBP + -0x1c],EAX     ; 005236cb
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005236ce
    MOV EAX,dword ptr [EAX]             ; 005236d1
    MOV dword ptr [EBP + -0x4],EAX      ; 005236d3
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005236d6
    MOV EAX,dword ptr [EAX + 0x4]       ; 005236d9
    MOV dword ptr [EBP + -0xc],EAX      ; 005236dc
    PUSHAD                              ; 005236df
    MOV EDI,dword ptr [EBP + 0x18]      ; 005236e0
    MOV EDX,dword ptr [EDI + 0x4]       ; 005236e6
    MOV EDI,dword ptr [EDI]             ; 005236e9
    MOV ESI,dword ptr [EBP + 0xffffffe8] ; 005236eb
    MOV EAX,dword ptr [EBP + 0xffffffec] ; 005236f1
    MOV EBX,dword ptr [EBP + 0x14]      ; 005236f7
    XOR ECX,ECX                         ; 005236fd
    FILD word ptr [EBX + ESI*0x2]       ; 005236ff
        ;   Label: LAB_005236ff
    FILD word ptr [EBX + ESI*0x2]       ; 00523702
    ADD EAX,dword ptr [EBP + 0xffffffe4] ; 00523705
    ADC ESI,dword ptr [EBP + 0xfffffff0] ; 0052370b
    FMUL float ptr [EBP + 0xfffffffc]   ; 00523711
    FADD float ptr [EDI + ECX*0x4]      ; 00523717
    FSTP float ptr [EDI + ECX*0x4]      ; 0052371a
    FMUL float ptr [EBP + 0xfffffff4]   ; 0052371d
    FADD float ptr [EDX + ECX*0x4]      ; 00523723
    FSTP float ptr [EDX + ECX*0x4]      ; 00523726
    INC ECX                             ; 00523729
    CMP ECX,dword ptr [EBP + 0x30]      ; 0052372a
    JL 0x005236ff                       ; 00523730
        ;   XREF to: 005236ff (CONDITIONAL_JUMP)  ; LAB_005236ff
    POPAD                               ; 00523732
    MOV EAX,dword ptr [EBP + 0x30]      ; 00523733
    MOV dword ptr [EBP + -0x8],EAX      ; 00523736
    FILD dword ptr [EBP + -0x8]         ; 00523739
    FMUL double ptr [EBP + 0x28]        ; 0052373c
    FADD double ptr [EBP + 0x20]        ; 0052373f
    FSTP double ptr [EBP + 0x20]        ; 00523742
    JMP 0x0052361f                      ; 00523745
        ;   XREF to: 0052361f (UNCONDITIONAL_JUMP)  ; LAB_0052361f

