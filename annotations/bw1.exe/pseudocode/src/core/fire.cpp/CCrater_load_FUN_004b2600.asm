; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CCrater_load_FUN_004b2600(CCrater *this_ptr,_FILE *file_handle)
;
; Parameters:
; CCrater *        Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_load_FUN_004b7370 at 004b73cf
;
; Referenced Globals:
;   TerminatedCString s_d_d_f_f_005df400
;   TerminatedCString s_f_f_f_005df40d
;   TerminatedCString s_f_f_f_005df417
;   TerminatedCString s_f_f_f_005df421
;   TerminatedCString s_f_f_f_005df42b
;   TerminatedCString s_f_f_f_005df435
;   TerminatedCString s_f_f_f_005df43f
;
; Called Functions:
;   crt_stdio.c_fscanf_FUN_005c04b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2600
        ;   Label: core_fire.cpp_CCrater_load_FUN_004b2600
    PUSH ESI                            ; 004b2601
    PUSH EDI                            ; 004b2602
    PUSH EBP                            ; 004b2603
    SUB ESP,0x4                         ; 004b2604
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004b2607
    MOV EAX,dword ptr [ESP + 0x18]      ; 004b260b
    ADD EAX,0x18                        ; 004b260f
    PUSH EAX                            ; 004b2612
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004b2613
    ADD EAX,0x8                         ; 004b2617
    PUSH EAX                            ; 004b261a
    MOV EAX,dword ptr [ESP + 0x20]      ; 004b261b
    ADD EAX,0x4                         ; 004b261f
    PUSH EAX                            ; 004b2622
    MOV EDX,dword ptr [ESP + 0x24]      ; 004b2623
    PUSH EDX                            ; 004b2627
    PUSH 0x5df400                       ; 004b2628 | = "%d,%d,%f,%f\n"
    PUSH EBP                            ; 004b262d
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004b262e
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x18                        ; 004b2633
    MOV EAX,dword ptr [ESP + 0x18]      ; 004b2636
    ADD EAX,0x14                        ; 004b263a
    PUSH EAX                            ; 004b263d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004b263e
    ADD EAX,0x10                        ; 004b2642
    PUSH EAX                            ; 004b2645
    MOV EAX,dword ptr [ESP + 0x20]      ; 004b2646
    ADD EAX,0xc                         ; 004b264a
    PUSH EAX                            ; 004b264d
    PUSH 0x5df40d                       ; 004b264e | = "%f,%f,%f\n"
    PUSH EBP                            ; 004b2653
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004b2654
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 004b2659
    XOR EBX,EBX                         ; 004b265c
    MOV EAX,dword ptr [ESP + 0x18]      ; 004b265e
    MOV EDI,dword ptr [ESP + 0x18]      ; 004b2662
    MOV ESI,dword ptr [ESP + 0x18]      ; 004b2666
    ADD EAX,0x1c                        ; 004b266a
    ADD EDI,0x20                        ; 004b266d
    ADD ESI,0x24                        ; 004b2670
    MOV dword ptr [ESP],EAX             ; 004b2673
    IMUL EAX,EBX,0xc                    ; 004b2676
        ;   Label: LAB_004b2676
    PUSH ESI                            ; 004b2679
    MOV ECX,dword ptr [ESP + 0x4]       ; 004b267a
    PUSH EDI                            ; 004b267e
    ADD EAX,ECX                         ; 004b267f
    PUSH EAX                            ; 004b2681
    PUSH 0x5df417                       ; 004b2682 | = "%f,%f,%f\n"
    ADD ESI,0xc                         ; 004b2687
    PUSH EBP                            ; 004b268a
    ADD EDI,0xc                         ; 004b268b
    INC EBX                             ; 004b268e
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004b268f
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 004b2694
    CMP EBX,0x3                         ; 004b2697
    JL 0x004b2676                       ; 004b269a
        ;   XREF to: 004b2676 (CONDITIONAL_JUMP)  ; LAB_004b2676
    MOV EAX,dword ptr [ESP + 0x18]      ; 004b269c
    ADD EAX,0x48                        ; 004b26a0
    PUSH EAX                            ; 004b26a3
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004b26a4
    ADD EAX,0x44                        ; 004b26a8
    PUSH EAX                            ; 004b26ab
    MOV EAX,dword ptr [ESP + 0x20]      ; 004b26ac
    ADD EAX,0x40                        ; 004b26b0
    PUSH EAX                            ; 004b26b3
    PUSH 0x5df421                       ; 004b26b4 | = "%f,%f,%f\n"
    PUSH EBP                            ; 004b26b9
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004b26ba
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 004b26bf
    MOV EAX,dword ptr [ESP + 0x18]      ; 004b26c2
    ADD EAX,0x54                        ; 004b26c6
    PUSH EAX                            ; 004b26c9
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004b26ca
    ADD EAX,0x50                        ; 004b26ce
    PUSH EAX                            ; 004b26d1
    MOV EAX,dword ptr [ESP + 0x20]      ; 004b26d2
    ADD EAX,0x4c                        ; 004b26d6
    PUSH EAX                            ; 004b26d9
    PUSH 0x5df42b                       ; 004b26da | = "%f,%f,%f\n"
    PUSH EBP                            ; 004b26df
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004b26e0
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 004b26e5
    MOV EAX,dword ptr [ESP + 0x18]      ; 004b26e8
    ADD EAX,0x60                        ; 004b26ec
    PUSH EAX                            ; 004b26ef
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004b26f0
    ADD EAX,0x5c                        ; 004b26f4
    PUSH EAX                            ; 004b26f7
    MOV EAX,dword ptr [ESP + 0x20]      ; 004b26f8
    ADD EAX,0x58                        ; 004b26fc
    PUSH EAX                            ; 004b26ff
    PUSH 0x5df435                       ; 004b2700 | = "%f,%f,%f\n"
    PUSH EBP                            ; 004b2705
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004b2706
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 004b270b
    MOV EAX,dword ptr [ESP + 0x18]      ; 004b270e
    ADD EAX,0x6c                        ; 004b2712
    PUSH EAX                            ; 004b2715
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004b2716
    ADD EAX,0x68                        ; 004b271a
    PUSH EAX                            ; 004b271d
    MOV EAX,dword ptr [ESP + 0x20]      ; 004b271e
    ADD EAX,0x64                        ; 004b2722
    PUSH EAX                            ; 004b2725
    PUSH 0x5df43f                       ; 004b2726 | = "%f,%f,%f\n"
    PUSH EBP                            ; 004b272b
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004b272c
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 004b2731
    ADD ESP,0x4                         ; 004b2734
    POP EBP                             ; 004b2737
    POP EDI                             ; 004b2738
    POP ESI                             ; 004b2739
    POP EBX                             ; 004b273a
    RET                                 ; 004b273b

