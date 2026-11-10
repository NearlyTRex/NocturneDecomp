; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_simbox_cpp_CSimBox_process_FUN_005627a0(CSimBox *this_ptr,float delta_time)
;
; Parameters:
; CSimBox *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_005f1a67
;   undefined4 DAT_005f1a6b
;   undefined4 DAT_005f1a73
;   undefined4 DAT_005f1a7b
;   undefined4 DAT_005f1a83
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_0061f2a4
;
; Called Functions:
;   core_box.cpp_CBox_process_FUN_0041e0d0
;   core_dirmat.cpp_FUN_0045f690
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   crt_stdlib.c_rand_FUN_005c084c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005627a0
        ;   Label: core_simbox.cpp_CSimBox_process_FUN_005627a0
    PUSH ESI                            ; 005627a1
    PUSH EDI                            ; 005627a2
    SUB ESP,0x1c                        ; 005627a3
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005627a6
    CMP dword ptr [EBX + 0x2d4],0x1     ; 005627aa
    JNZ 0x00562870                      ; 005627b1
        ;   XREF to: 00562870 (CONDITIONAL_JUMP)  ; LAB_00562870
    CMP dword ptr [EBX + 0x5ac],0x0     ; 005627b7
    JNZ 0x00562870                      ; 005627be
        ;   XREF to: 00562870 (CONDITIONAL_JUMP)  ; LAB_00562870
    LEA EAX,[EBX + 0x2dc]               ; 005627c4
    PUSH EAX                            ; 005627ca
    MOV ESI,dword ptr [0x0061b4d0]      ; 005627cb | DAT_0061b4d0
    PUSH ESI                            ; 005627d1
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 005627d2
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005627d7
    TEST EAX,EAX                        ; 005627da
    JZ 0x00562870                       ; 005627dc
        ;   XREF to: 00562870 (CONDITIONAL_JUMP)  ; LAB_00562870
    LEA EAX,[EBX + 0x3a4]               ; 005627e2
    LEA ESI,[EBX + 0x340]               ; 005627e8
    MOV dword ptr [EBX + 0x5ac],0x1     ; 005627ee
    CMP EAX,ESI                         ; 005627f8
    JZ 0x0056280c                       ; 005627fa
        ;   XREF to: 0056280c (CONDITIONAL_JUMP)  ; LAB_0056280c
    MOV EDX,dword ptr [ESI]             ; 005627fc
    MOV dword ptr [EAX],EDX             ; 005627fe
    MOV EDX,dword ptr [ESI + 0x4]       ; 00562800
    MOV dword ptr [EAX + 0x4],EDX       ; 00562803
    MOV EDX,dword ptr [ESI + 0x8]       ; 00562806
    MOV dword ptr [EAX + 0x8],EDX       ; 00562809
    LEA EAX,[EBX + 0x3c8]               ; 0056280c
        ;   Label: LAB_0056280c
    LEA ESI,[EBX + 0x34c]               ; 00562812
    CMP EAX,ESI                         ; 00562818
    JZ 0x0056282c                       ; 0056281a
        ;   XREF to: 0056282c (CONDITIONAL_JUMP)  ; LAB_0056282c
    MOV EDX,dword ptr [ESI]             ; 0056281c
    MOV dword ptr [EAX],EDX             ; 0056281e
    MOV EDX,dword ptr [ESI + 0x4]       ; 00562820
    MOV dword ptr [EAX + 0x4],EDX       ; 00562823
    MOV EDX,dword ptr [ESI + 0x8]       ; 00562826
    MOV dword ptr [EAX + 0x8],EDX       ; 00562829
    LEA EAX,[EBX + 0x3a4]               ; 0056282c
        ;   Label: LAB_0056282c
    PUSH EAX                            ; 00562832
    LEA EAX,[EBX + 0x370]               ; 00562833
    PUSH EAX                            ; 00562839
    LEA ESI,[ESP + 0x14]                ; 0056283a
    LEA EDI,[ESP + 0x8]                 ; 0056283e
    CALL core_dirmat.cpp_FUN_0045f690   ; 00562842
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x14]                ; 00562847
    ADD ESP,0x8                         ; 0056284b
    MOVSD ES:EDI,ESI                    ; 0056284e
    MOVSD ES:EDI,ESI                    ; 0056284f
    MOVSD ES:EDI,ESI                    ; 00562850
    MOV EAX,ESP                         ; 00562851
    LEA ESI,[EBX + 0x398]               ; 00562853
    CMP ESI,EAX                         ; 00562859
    JZ 0x00562870                       ; 0056285b
        ;   XREF to: 00562870 (CONDITIONAL_JUMP)  ; LAB_00562870
    MOV EAX,dword ptr [ESP]             ; 0056285d
    MOV dword ptr [ESI],EAX             ; 00562860
    MOV EAX,dword ptr [ESP + 0x4]       ; 00562862
    MOV dword ptr [ESI + 0x4],EAX       ; 00562866
    MOV EAX,dword ptr [ESP + 0x8]       ; 00562869
    MOV dword ptr [ESI + 0x8],EAX       ; 0056286d
    CMP dword ptr [EBX + 0x2d4],0x0     ; 00562870
        ;   Label: LAB_00562870
    JNZ 0x0056291f                      ; 00562877
        ;   XREF to: 0056291f (CONDITIONAL_JUMP)  ; LAB_0056291f
    PUSH 0x13                           ; 0056287d
    MOV EAX,[0x0061f2a4]                ; 0056287f | DAT_0061f2a4
    PUSH EAX                            ; 00562884
    MOV ESI,dword ptr [EAX]             ; 00562885
    CALL dword ptr [ESI]                ; 00562887
    ADD ESP,0x8                         ; 00562889
    TEST EAX,EAX                        ; 0056288c
    JZ 0x0056291f                       ; 0056288e
        ;   XREF to: 0056291f (CONDITIONAL_JUMP)  ; LAB_0056291f
    LEA ESI,[EBX + 0x20]                ; 00562894
    LEA EAX,[EBX + 0x5b4]               ; 00562897
    MOV EDX,dword ptr [EAX]             ; 0056289d
    MOV dword ptr [ESI],EDX             ; 0056289f
    MOV EDX,dword ptr [EAX + 0x4]       ; 005628a1
    MOV dword ptr [ESI + 0x4],EDX       ; 005628a4
    MOV EDX,dword ptr [EAX + 0x8]       ; 005628a7
    MOV dword ptr [ESI + 0x8],EDX       ; 005628aa
    CALL crt_stdlib.c_rand_FUN_005c084c ; 005628ad
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    MOV dword ptr [ESP + 0x18],EAX      ; 005628b2
    FILD dword ptr [ESP + 0x18]         ; 005628b6
    FMUL float ptr [0x005f1a67]         ; 005628ba | DAT_005f1a67
    FADD double ptr [0x005f1a6b]        ; 005628c0 | DAT_005f1a6b
    FMUL double ptr [0x005f1a73]        ; 005628c6 | DAT_005f1a73
    FSTP float ptr [EBX + 0x30]         ; 005628cc
    CALL crt_stdlib.c_rand_FUN_005c084c ; 005628cf
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    MOV dword ptr [ESP + 0x18],EAX      ; 005628d4
    FILD dword ptr [ESP + 0x18]         ; 005628d8
    FMUL float ptr [0x005f1a67]         ; 005628dc | DAT_005f1a67
    FMUL float ptr [0x005f1a7b]         ; 005628e2 | DAT_005f1a7b
    FMUL double ptr [0x005f1a83]        ; 005628e8 | DAT_005f1a83
    FSTP float ptr [EBX + 0x38]         ; 005628ee
    CALL crt_stdlib.c_rand_FUN_005c084c ; 005628f1
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    MOV dword ptr [ESP + 0x18],EAX      ; 005628f6
    FILD dword ptr [ESP + 0x18]         ; 005628fa
    FMUL float ptr [0x005f1a67]         ; 005628fe | DAT_005f1a67
    FMUL float ptr [0x005f1a7b]         ; 00562904 | DAT_005f1a7b
    FMUL double ptr [0x005f1a83]        ; 0056290a | DAT_005f1a83
    PUSH EBX                            ; 00562910
    MOV EAX,dword ptr [EBX + 0x154]     ; 00562911
    FSTP float ptr [EBX + 0x34]         ; 00562917
    CALL dword ptr [EAX]                ; 0056291a
    ADD ESP,0x4                         ; 0056291c
    CMP dword ptr [EBX + 0x5ac],0x0     ; 0056291f
        ;   Label: LAB_0056291f
    JNZ 0x0056292f                      ; 00562926
        ;   XREF to: 0056292f (CONDITIONAL_JUMP)  ; LAB_0056292f
    ADD ESP,0x1c                        ; 00562928
        ;   Label: LAB_00562928
    POP EDI                             ; 0056292b
    POP ESI                             ; 0056292c
    POP EBX                             ; 0056292d
    RET                                 ; 0056292e
    LEA ESI,[EBX + 0x358]               ; 0056292f
        ;   Label: LAB_0056292f
    PUSH dword ptr [ESP + 0x30]         ; 00562935
    PUSH ESI                            ; 00562939
    CALL core_box.cpp_CBox_process_FUN_0041e0d0 ; 0056293a
        ;   XREF to: 0041e0d0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_process_FUN_0041e0d0(CBox * this_ptr, float delta_time)
    LEA EAX,[EBX + 0x20]                ; 0056293f
    MOV EDX,dword ptr [ESI]             ; 00562942
    MOV dword ptr [EAX],EDX             ; 00562944
    MOV EDX,dword ptr [ESI + 0x4]       ; 00562946
    MOV dword ptr [EAX + 0x4],EDX       ; 00562949
    MOV EDX,dword ptr [ESI + 0x8]       ; 0056294c
    MOV dword ptr [EAX + 0x8],EDX       ; 0056294f
    LEA EAX,[EBX + 0x30]                ; 00562952
    ADD EBX,0x364                       ; 00562955
    ADD ESP,0x8                         ; 0056295b
    CMP EAX,EBX                         ; 0056295e
    JZ 0x00562928                       ; 00562960
        ;   XREF to: 00562928 (CONDITIONAL_JUMP)  ; LAB_00562928
    MOV EDX,dword ptr [EBX]             ; 00562962
    MOV dword ptr [EAX],EDX             ; 00562964
    MOV EDX,dword ptr [EBX + 0x4]       ; 00562966
    MOV dword ptr [EAX + 0x4],EDX       ; 00562969
    MOV EDX,dword ptr [EBX + 0x8]       ; 0056296c
    MOV dword ptr [EAX + 0x8],EDX       ; 0056296f
    ADD ESP,0x1c                        ; 00562972
    POP EDI                             ; 00562975
    POP ESI                             ; 00562976
    POP EBX                             ; 00562977
    RET                                 ; 00562978

