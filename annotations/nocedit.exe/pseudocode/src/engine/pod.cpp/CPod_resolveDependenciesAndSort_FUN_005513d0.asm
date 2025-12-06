; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_005513d0(CPod * this_ptr)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xab0]:4  local_ab0
; undefined1       Stack[-0x470]:1  local_470
; undefined1       Stack[-0x368]:1  local_368
; undefined4       Stack[-0x264]:4  local_264
; undefined1       Stack[-0x260]:1  local_260
; undefined1       Stack[-0x158]:1  local_158
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_podmain.cpp_CDemonPod_load_FUN_005519c0 at 00551ae2
;
; Referenced Globals:
;   TerminatedCString s_engine_pod_cpp_00640838
;   TerminatedCString s_Too_many_POD_dependency__0064084a
;   TerminatedCString s_engine_pod_cpp_00640871
;   TerminatedCString s_Circular_POD_mount_order_00640883
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_pod.cpp_CPod_dismountPod_FUN_005518c0
;   engine_pod.cpp_CPod_getPodIndexByFilename_FUN_00551820
;   engine_pod.cpp_CPodFile_getDependencyRecord_FUN_005506c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005513d0
        ;   Label: engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_005513d0
    PUSH ESI                            ; 005513d1
    PUSH EDI                            ; 005513d2
    PUSH EBP                            ; 005513d3
    SUB ESP,0xaa0                       ; 005513d4
    MOV EBP,dword ptr [ESP + 0xab4]     ; 005513da
    XOR EDX,EDX                         ; 005513e1
        ;   Label: LAB_005513e1
    MOV EBX,dword ptr [EBP]             ; 005513e3
    MOV dword ptr [ESP + 0xa88],EDX     ; 005513e6
    MOV dword ptr [ESP + 0xa6c],EDX     ; 005513ed
    TEST EBX,EBX                        ; 005513f4
    JLE 0x00551467                      ; 005513f6 | LAB_00551467
        ;   XREF to: 00551467 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0xa74],EBP     ; 005513f8
    MOV EAX,dword ptr [ESP + 0xa74]     ; 005513ff
        ;   Label: LAB_005513ff
    MOV EAX,dword ptr [EAX + 0x4]       ; 00551406
    MOV dword ptr [ESP + 0xa98],EAX     ; 00551409
    XOR EAX,EAX                         ; 00551410
    XOR EBX,EBX                         ; 00551412
    MOV dword ptr [ESP + 0xa70],EAX     ; 00551414
    MOV EAX,dword ptr [ESP + 0xa98]     ; 0055141b
        ;   Label: LAB_0055141b
    MOV EAX,dword ptr [EAX + 0x424]     ; 00551422
    CMP EBX,EAX                         ; 00551428
    JL 0x00551556                       ; 0055142a | LAB_00551556
        ;   XREF to: 00551556 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0xa70],0x0     ; 00551430
    JZ 0x005515a7                       ; 00551438 | LAB_005515a7
        ;   XREF to: 005515a7 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0xa88]     ; 0055143e
        ;   Label: LAB_0055143e
    PUSH EAX                            ; 00551445
    PUSH EBP                            ; 00551446
    CALL engine_pod.cpp_CPod_dismountPod_FUN_005518c0 ; 00551447 | void engine_pod.cpp_CPod_dismountPod_FUN_005518c0(CPod * this_ptr, int index)
        ;   XREF to: 005518c0 (UNCONDITIONAL_CALL)
    MOV EDX,0x1                         ; 0055144c
    ADD ESP,0x8                         ; 00551451
    MOV dword ptr [ESP + 0xa6c],EDX     ; 00551454
    MOV EAX,dword ptr [ESP + 0xa88]     ; 0055145b
        ;   Label: LAB_0055145b
    CMP EAX,dword ptr [EBP]             ; 00551462
    JL 0x005513ff                       ; 00551465 | LAB_005513ff
        ;   XREF to: 005513ff (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0xa6c],0x0     ; 00551467
        ;   Label: LAB_00551467
    JNZ 0x005513e1                      ; 0055146f | LAB_005513e1
        ;   XREF to: 005513e1 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBP]             ; 00551475
    DEC EDI                             ; 00551478
    TEST EDI,EDI                        ; 00551479
    JLE 0x005514ac                      ; 0055147b | LAB_005514ac
        ;   XREF to: 005514ac (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 0055147d
        ;   Label: LAB_0055147d
    TEST EDI,EDI                        ; 0055147f
    JLE 0x005514a7                      ; 00551481 | LAB_005514a7
        ;   XREF to: 005514a7 (CONDITIONAL_JUMP)
    MOV EAX,EBP                         ; 00551483
    MOV EBX,dword ptr [EAX + 0x4]       ; 00551485
        ;   Label: LAB_00551485
    MOV ECX,dword ptr [EAX + 0x8]       ; 00551488
    MOV ESI,dword ptr [EBX + 0x408]     ; 0055148b
    CMP ESI,dword ptr [ECX + 0x408]     ; 00551491
    JLE 0x0055149f                      ; 00551497 | LAB_0055149f
        ;   XREF to: 0055149f (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x8],EBX       ; 00551499
    MOV dword ptr [EAX + 0x4],ECX       ; 0055149c
    INC EDX                             ; 0055149f
        ;   Label: LAB_0055149f
    ADD EAX,0x4                         ; 005514a0
    CMP EDX,EDI                         ; 005514a3
    JL 0x00551485                       ; 005514a5 | LAB_00551485
        ;   XREF to: 00551485 (CONDITIONAL_JUMP)
    DEC EDI                             ; 005514a7
        ;   Label: LAB_005514a7
    TEST EDI,EDI                        ; 005514a8
    JG 0x0055147d                       ; 005514aa | LAB_0055147d
        ;   XREF to: 0055147d (CONDITIONAL_JUMP)
    XOR ECX,ECX                         ; 005514ac
        ;   Label: LAB_005514ac
    MOV ESI,dword ptr [EBP]             ; 005514ae
    MOV dword ptr [ESP + 0xa68],ECX     ; 005514b1
    MOV dword ptr [ESP + 0xa8c],ECX     ; 005514b8
    TEST ESI,ESI                        ; 005514bf
    JLE 0x005515f7                      ; 005514c1 | LAB_005515f7
        ;   XREF to: 005515f7 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0xa64],EBP     ; 005514c7
    XOR EBX,EBX                         ; 005514ce
        ;   Label: LAB_005514ce
    MOV EAX,dword ptr [ESP + 0xa64]     ; 005514d0
    MOV dword ptr [ESP + 0xa80],EBX     ; 005514d7
    MOV EAX,dword ptr [EAX + 0x4]       ; 005514de
    MOV EBX,dword ptr [ESP + 0xa8c]     ; 005514e1
    MOV dword ptr [ESP + 0xa84],EAX     ; 005514e8
    SHL EBX,0x3                         ; 005514ef
    MOV EAX,dword ptr [ESP + 0xa84]     ; 005514f2
        ;   Label: LAB_005514f2
    MOV ESI,dword ptr [ESP + 0xa80]     ; 005514f9
    CMP ESI,dword ptr [EAX + 0x424]     ; 00551500
    JGE 0x005515cc                      ; 00551506 | LAB_005515cc
        ;   XREF to: 005515cc (CONDITIONAL_JUMP)
    PUSH ESI                            ; 0055150c
    MOV EAX,dword ptr [ESP + 0xa88]     ; 0055150d
    PUSH EAX                            ; 00551514
    LEA ESI,[ESP + 0x648]               ; 00551515
    LEA EDI,[ESP + 0x960]               ; 0055151c
    CALL engine_pod.cpp_CPodFile_getDependencyRecord_FUN_005506c0 ; 00551523 | void engine_pod.cpp_CPodFile_getDependencyRecord_FUN_005506c0(CPodFile * this_ptr, int dependency_index, CPodDependencyRecord * output_record)
        ;   XREF to: 005506c0 (UNCONDITIONAL_CALL)
    MOV ECX,0x42                        ; 00551528
    LEA ESI,[ESP + 0x648]               ; 0055152d
    ADD ESP,0x8                         ; 00551534
    MOVSD.REP ES:EDI,ESI                ; 00551537
    CMP dword ptr [ESP + 0xa58],0x0     ; 00551539
    JNZ 0x0055169e                      ; 00551541 | LAB_0055169e
        ;   XREF to: 0055169e (CONDITIONAL_JUMP)
    INC dword ptr [ESP + 0xa80]         ; 00551547
        ;   Label: LAB_00551547
    JMP 0x005514f2                      ; 0055154e | LAB_005514f2
        ;   XREF to: 005514f2 (UNCONDITIONAL_JUMP)
    INC EBX                             ; 00551550
        ;   Label: LAB_00551550
    JMP 0x0055141b                      ; 00551551 | LAB_0055141b
        ;   XREF to: 0055141b (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 00551556
        ;   Label: LAB_00551556
    MOV ESI,dword ptr [ESP + 0xa9c]     ; 00551557
    PUSH ESI                            ; 0055155e
    LEA ESI,[ESP + 0x858]               ; 0055155f
    LEA EDI,[ESP + 0x750]               ; 00551566
    CALL engine_pod.cpp_CPodFile_getDependencyRecord_FUN_005506c0 ; 0055156d | void engine_pod.cpp_CPodFile_getDependencyRecord_FUN_005506c0(CPodFile * this_ptr, int dependency_index, CPodDependencyRecord * output_record)
        ;   XREF to: 005506c0 (UNCONDITIONAL_CALL)
    MOV ECX,0x42                        ; 00551572
    LEA ESI,[ESP + 0x858]               ; 00551577
    ADD ESP,0x8                         ; 0055157e
    MOVSD.REP ES:EDI,ESI                ; 00551581
    CMP dword ptr [ESP + 0x84c],0x0     ; 00551583
    JZ 0x00551550                       ; 0055158b | LAB_00551550
        ;   XREF to: 00551550 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x748]               ; 0055158d
    PUSH EAX                            ; 00551594
    PUSH EBP                            ; 00551595
    CALL engine_pod.cpp_CPod_getPodIndexByFilename_FUN_00551820 ; 00551596 | int engine_pod.cpp_CPod_getPodIndexByFilename_FUN_00551820(CPod * this_ptr, char * target_filename)
        ;   XREF to: 00551820 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0055159b
    TEST EAX,EAX                        ; 0055159e
    JGE 0x00551550                      ; 005515a0 | LAB_00551550
        ;   XREF to: 00551550 (CONDITIONAL_JUMP)
    JMP 0x0055143e                      ; 005515a2 | LAB_0055143e
        ;   XREF to: 0055143e (UNCONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0xa88]     ; 005515a7
        ;   Label: LAB_005515a7
    MOV ECX,dword ptr [ESP + 0xa74]     ; 005515ae
    INC EBX                             ; 005515b5
    ADD ECX,0x4                         ; 005515b6
    MOV dword ptr [ESP + 0xa88],EBX     ; 005515b9
    MOV dword ptr [ESP + 0xa74],ECX     ; 005515c0
    JMP 0x0055145b                      ; 005515c7 | LAB_0055145b
        ;   XREF to: 0055145b (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0xa64]     ; 005515cc
        ;   Label: LAB_005515cc
    MOV EAX,dword ptr [ESP + 0xa68]     ; 005515d3
    MOV EDX,dword ptr [EBP]             ; 005515da
    ADD EDI,0x4                         ; 005515dd
    INC EAX                             ; 005515e0
    MOV dword ptr [ESP + 0xa64],EDI     ; 005515e1
    MOV dword ptr [ESP + 0xa68],EAX     ; 005515e8
    CMP EAX,EDX                         ; 005515ef
    JL 0x005514ce                       ; 005515f1 | LAB_005514ce
        ;   XREF to: 005514ce (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBP]             ; 005515f7
        ;   Label: LAB_005515f7
    XOR ESI,ESI                         ; 005515fa
    TEST ECX,ECX                        ; 005515fc
    JLE 0x00551693                      ; 005515fe | LAB_00551693
        ;   XREF to: 00551693 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0xa60],EBP     ; 00551604
    MOV EDX,dword ptr [EBP]             ; 0055160b
        ;   Label: LAB_0055160b
    MOV dword ptr [ESP + 0xa7c],ESI     ; 0055160e
    CMP ESI,EDX                         ; 00551615
    JL 0x005517df                       ; 00551617 | LAB_005517df
        ;   XREF to: 005517df (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0xa7c]     ; 0055161d
        ;   Label: LAB_0055161d
    CMP EAX,dword ptr [EBP]             ; 00551624
    JL 0x0055164b                       ; 00551627 | LAB_0055164b
        ;   XREF to: 0055164b (CONDITIONAL_JUMP)
    MOV EAX,0x640871                    ; 00551629 | = "..\\engine\\pod.cpp" | s_engine_pod_cpp_00640871 = ..\engine\pod.cpp
    MOV EDX,0x5c4                       ; 0055162e
    PUSH 0x640883                       ; 00551633 | = "Circular POD mount order dependency d..." | s_Circular_POD_mount_order_00640883 = Circular POD mount order dependency detected.
    MOV [0x02f0ca48],EAX                ; 00551638 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0055163d | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00551643 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00551648
    MOV EAX,dword ptr [ESP + 0xa7c]     ; 0055164b
        ;   Label: LAB_0055164b
    SHL EAX,0x2                         ; 00551652
    ADD EAX,EBP                         ; 00551655
    MOV EDX,dword ptr [ESP + 0xa7c]     ; 00551657
    MOV EDI,dword ptr [EAX + 0x4]       ; 0055165e
    CMP ESI,EDX                         ; 00551661
    JGE 0x00551673                      ; 00551663 | LAB_00551673
        ;   XREF to: 00551673 (CONDITIONAL_JUMP)
    SUB EAX,0x4                         ; 00551665
        ;   Label: LAB_00551665
    MOV ECX,dword ptr [EAX + 0x4]       ; 00551668
    DEC EDX                             ; 0055166b
    MOV dword ptr [EAX + 0x8],ECX       ; 0055166c
    CMP EDX,ESI                         ; 0055166f
    JG 0x00551665                       ; 00551671 | LAB_00551665
        ;   XREF to: 00551665 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0xa60]     ; 00551673
        ;   Label: LAB_00551673
    MOV dword ptr [EAX + 0x4],EDI       ; 0055167a
    LEA EDI,[EAX + 0x4]                 ; 0055167d
    INC ESI                             ; 00551680
    MOV EAX,dword ptr [EBP]             ; 00551681
    MOV dword ptr [ESP + 0xa60],EDI     ; 00551684
    CMP ESI,EAX                         ; 0055168b
    JL 0x0055160b                       ; 0055168d | LAB_0055160b
        ;   XREF to: 0055160b (CONDITIONAL_JUMP)
    ADD ESP,0xaa0                       ; 00551693
        ;   Label: LAB_00551693
    POP EBP                             ; 00551699
    POP EDI                             ; 0055169a
    POP ESI                             ; 0055169b
    POP EBX                             ; 0055169c
    RET                                 ; 0055169d
    LEA EAX,[ESP + 0x958]               ; 0055169e
        ;   Label: LAB_0055169e
    PUSH EAX                            ; 005516a5
    PUSH EBP                            ; 005516a6
    CALL engine_pod.cpp_CPod_getPodIndexByFilename_FUN_00551820 ; 005516a7 | int engine_pod.cpp_CPod_getPodIndexByFilename_FUN_00551820(CPod * this_ptr, char * target_filename)
        ;   XREF to: 00551820 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005516ac
    MOV ESI,EAX                         ; 005516af
    TEST EAX,EAX                        ; 005516b1
    JL 0x00551547                       ; 005516b3 | LAB_00551547
        ;   XREF to: 00551547 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0xa8c],0xc8    ; 005516b9
    JL 0x005516e8                       ; 005516c4 | LAB_005516e8
        ;   XREF to: 005516e8 (CONDITIONAL_JUMP)
    MOV EDI,0x640838                    ; 005516c6 | = "..\\engine\\pod.cpp" | s_engine_pod_cpp_00640838 = ..\engine\pod.cpp
    MOV EAX,0x572                       ; 005516cb
    PUSH 0x64084a                       ; 005516d0 | = "Too many POD dependency ordering rules" | s_Too_many_POD_dependency__0064084a = Too many POD dependency ordering rules
    MOV dword ptr [0x02f0ca48],EDI      ; 005516d5 | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005516db | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005516e0 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005516e5
    LEA EAX,[ESI*0x4 + 0x0]             ; 005516e8
        ;   Label: LAB_005516e8
    MOV EDX,dword ptr [ESP + 0xa58]     ; 005516ef
    ADD EAX,EBP                         ; 005516f6
    TEST EDX,EDX                        ; 005516f8
    JL 0x0055172b                       ; 005516fa | LAB_0055172b
        ;   XREF to: 0055172b (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EAX + 0x4]       ; 005516fc
    MOV dword ptr [ESP + EBX*0x1],EAX   ; 005516ff
    MOV EAX,dword ptr [ESP + 0xa84]     ; 00551702
    MOV dword ptr [ESP + EBX*0x1 + 0x4],EAX ; 00551709
        ;   Label: LAB_00551709
    MOV ECX,dword ptr [ESP + 0xa8c]     ; 0055170d
    INC ECX                             ; 00551714
    ADD EBX,0x8                         ; 00551715
    MOV dword ptr [ESP + 0xa8c],ECX     ; 00551718
    INC dword ptr [ESP + 0xa80]         ; 0055171f
    JMP 0x005514f2                      ; 00551726 | LAB_005514f2
        ;   XREF to: 005514f2 (UNCONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0xa84]     ; 0055172b
        ;   Label: LAB_0055172b
    MOV dword ptr [ESP + EBX*0x1],EDX   ; 00551732
    MOV EAX,dword ptr [EAX + 0x4]       ; 00551735
    JMP 0x00551709                      ; 00551738 | LAB_00551709
        ;   XREF to: 00551709 (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0xa78]     ; 0055173a
        ;   Label: LAB_0055173a
    MOV EBX,dword ptr [ESP + 0xa7c]     ; 00551741
    MOV EDI,dword ptr [EBP]             ; 00551748
    ADD ECX,0x4                         ; 0055174b
    INC EBX                             ; 0055174e
    MOV dword ptr [ESP + 0xa78],ECX     ; 0055174f
    MOV dword ptr [ESP + 0xa7c],EBX     ; 00551756
    CMP EBX,EDI                         ; 0055175d
    JGE 0x0055161d                      ; 0055175f | LAB_0055161d
        ;   XREF to: 0055161d (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00551765
        ;   Label: LAB_00551765
    MOV EDX,dword ptr [ESP + 0xa8c]     ; 00551767
    MOV dword ptr [ESP + 0xa9c],EAX     ; 0055176e
    TEST EDX,EDX                        ; 00551775
    JLE 0x005517c6                      ; 00551777 | LAB_005517c6
        ;   XREF to: 005517c6 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0xa78]     ; 00551779
    MOV dword ptr [ESP + 0xa90],EAX     ; 00551780
    LEA EAX,[EDX*0x8 + 0x0]             ; 00551787
    XOR EDI,EDI                         ; 0055178e
    MOV dword ptr [ESP + 0xa94],EAX     ; 00551790
    MOV EDX,dword ptr [ESP + 0xa90]     ; 00551797
        ;   Label: LAB_00551797
    MOV EAX,dword ptr [ESP + EDI*0x1 + 0x4] ; 0055179e
    MOV ECX,dword ptr [EDX + 0x4]       ; 005517a2
    CMP EAX,ECX                         ; 005517a5
    JZ 0x005517f4                       ; 005517a7 | LAB_005517f4
        ;   XREF to: 005517f4 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0xa9c]     ; 005517a9
        ;   Label: LAB_005517a9
    MOV EBX,dword ptr [ESP + 0xa94]     ; 005517b0
    INC ECX                             ; 005517b7
    ADD EDI,0x8                         ; 005517b8
    MOV dword ptr [ESP + 0xa9c],ECX     ; 005517bb
    CMP EDI,EBX                         ; 005517c2
    JL 0x00551797                       ; 005517c4 | LAB_00551797
        ;   XREF to: 00551797 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0xa9c]     ; 005517c6
        ;   Label: LAB_005517c6
    CMP EAX,dword ptr [ESP + 0xa8c]     ; 005517cd
    JGE 0x0055161d                      ; 005517d4 | LAB_0055161d
        ;   XREF to: 0055161d (CONDITIONAL_JUMP)
    JMP 0x0055173a                      ; 005517da | LAB_0055173a
        ;   XREF to: 0055173a (UNCONDITIONAL_JUMP)
    LEA EAX,[ESI*0x4 + 0x0]             ; 005517df
        ;   Label: LAB_005517df
    ADD EAX,EBP                         ; 005517e6
    MOV dword ptr [ESP + 0xa78],EAX     ; 005517e8
    JMP 0x00551765                      ; 005517ef | LAB_00551765
        ;   XREF to: 00551765 (UNCONDITIONAL_JUMP)
    XOR EAX,ECX                         ; 005517f4
        ;   Label: LAB_005517f4
    TEST ESI,ESI                        ; 005517f6
    JLE 0x00551806                      ; 005517f8 | LAB_00551806
        ;   XREF to: 00551806 (CONDITIONAL_JUMP)
    MOV EDX,EBP                         ; 005517fa
    MOV EBX,EDI                         ; 005517fc
    MOV ECX,dword ptr [EDX + 0x4]       ; 005517fe
        ;   Label: LAB_005517fe
    CMP ECX,dword ptr [ESP + EBX*0x1]   ; 00551801
    JNZ 0x0055180c                      ; 00551804 | LAB_0055180c
        ;   XREF to: 0055180c (CONDITIONAL_JUMP)
    CMP EAX,ESI                         ; 00551806
        ;   Label: LAB_00551806
    JGE 0x005517c6                      ; 00551808 | LAB_005517c6
        ;   XREF to: 005517c6 (CONDITIONAL_JUMP)
    JMP 0x005517a9                      ; 0055180a | LAB_005517a9
        ;   XREF to: 005517a9 (UNCONDITIONAL_JUMP)
    INC EAX                             ; 0055180c
        ;   Label: LAB_0055180c
    ADD EDX,0x4                         ; 0055180d
    CMP EAX,ESI                         ; 00551810
    JL 0x005517fe                       ; 00551812 | LAB_005517fe
        ;   XREF to: 005517fe (CONDITIONAL_JUMP)
    CMP EAX,ESI                         ; 00551814
    JGE 0x005517c6                      ; 00551816 | LAB_005517c6
        ;   XREF to: 005517c6 (CONDITIONAL_JUMP)
    JMP 0x005517a9                      ; 00551818 | LAB_005517a9
        ;   XREF to: 005517a9 (UNCONDITIONAL_JUMP)

