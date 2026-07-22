; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_calibrateCPUSpeed_FUN_005587f0(void)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004c85f0 at 004c874a
;
; Referenced Globals:
;   void* PTR_timeBeginPeriod_005753e4 = 00175828
;   void* PTR_MessageBoxA_0057544c = 001759e0
;   void* PTR_QueryPerformanceCounter_00575570 = 00175ef6
;   void* PTR_QueryPerformanceFrequency_00575574 = 00175f10
;   TerminatedCString s_Unable_to_set_timer_00597f11
;   double DOUBLE_00597f29 = 4294967296
;   string s_Nocturne_0059815f
;   void* PTR_s_Nocturne_005c165c = 0059815f
;   undefined4 DAT_01c03950
;   undefined4 DAT_02de07d8
;   undefined4 DAT_02de07e0
;   undefined4 DAT_02de07e4
;   undefined4 DAT_02de07e8
;   undefined4 DAT_02de07f4
;   undefined4 DAT_02de2098
;   ... and 1 more
;
; Called Functions:
;   MessageBoxA
;   QueryPerformanceCounter
;   QueryPerformanceFrequency
;   timeBeginPeriod
;   wincore_winrun.cpp_getTime_FUN_00558a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005587f0
        ;   Label: wincore_winrun.cpp_calibrateCPUSpeed_FUN_005587f0
    PUSH ESI                            ; 005587f1
    PUSH EDI                            ; 005587f2
    PUSH EBP                            ; 005587f3
    MOV EBP,ESP                         ; 005587f4
    SUB ESP,0x10                        ; 005587f6
    PUSH 0x2de07e0                      ; 005587f9 | DAT_02de07e0
    CALL dword ptr CS:[0x575574]        ; 005587fe | PTR_QueryPerformanceFrequency_00575574
    CMP EAX,0x1                         ; 00558805
    JNZ 0x005589ca                      ; 00558808
        ;   XREF to: 005589ca (CONDITIONAL_JUMP)  ; LAB_005589ca
    FILD dword ptr [0x02de07e4]         ; 0055880e | DAT_02de07e4
    FMUL double ptr [0x00597f29]        ; 00558814 | DOUBLE_00597f29
    XOR EDX,EDX                         ; 0055881a
    MOV EAX,[0x02de07e0]                ; 0055881c | DAT_02de07e0
    MOV dword ptr [EBP + -0xc],EDX      ; 00558821
    MOV dword ptr [EBP + -0x10],EAX     ; 00558824
    FILD qword ptr [EBP + -0x10]        ; 00558827
    FADDP                               ; 0055882a
    PUSH 0x2de07d8                      ; 0055882c | DAT_02de07d8
    FSTP double ptr [0x02de07e8]        ; 00558831 | DAT_02de07e8
    CALL dword ptr CS:[0x575570]        ; 00558837 | PTR_QueryPerformanceCounter_00575570
    XOR EAX,EAX                         ; 0055883e
        ;   Label: LAB_0055883e
    MOV dword ptr [EBP + -0x8],EAX      ; 00558840
    MOV dword ptr [EBP + -0x4],EAX      ; 00558843
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 00558846
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
        ;   Label: LAB_00558846
    PUSH EAX                            ; 0055884b
    MOV EBX,0x0                         ; 0055884c
    ADD EBX,0x1                         ; 00558851
        ;   Label: LAB_00558851
    ADD EBX,0x1                         ; 00558854
    ADD EBX,0x1                         ; 00558857
    ADD EBX,0x1                         ; 0055885a
    ADD EBX,0x1                         ; 0055885d
    ADD EBX,0x1                         ; 00558860
    ADD EBX,0x1                         ; 00558863
    ADD EBX,0x1                         ; 00558866
    ADD EBX,0x1                         ; 00558869
    ADD EBX,0x1                         ; 0055886c
    ADD EBX,0x1                         ; 0055886f
    ADD EBX,0x1                         ; 00558872
    ADD EBX,0x1                         ; 00558875
    ADD EBX,0x1                         ; 00558878
    ADD EBX,0x1                         ; 0055887b
    ADD EBX,0x1                         ; 0055887e
    ADD EBX,0x1                         ; 00558881
    ADD EBX,0x1                         ; 00558884
    ADD EBX,0x1                         ; 00558887
    ADD EBX,0x1                         ; 0055888a
    ADD EBX,0x1                         ; 0055888d
    ADD EBX,0x1                         ; 00558890
    ADD EBX,0x1                         ; 00558893
    ADD EBX,0x1                         ; 00558896
    ADD EBX,0x1                         ; 00558899
    ADD EBX,0x1                         ; 0055889c
    ADD EBX,0x1                         ; 0055889f
    ADD EBX,0x1                         ; 005588a2
    ADD EBX,0x1                         ; 005588a5
    ADD EBX,0x1                         ; 005588a8
    ADD EBX,0x1                         ; 005588ab
    ADD EBX,0x1                         ; 005588ae
    ADD EBX,0x1                         ; 005588b1
    ADD EBX,0x1                         ; 005588b4
    ADD EBX,0x1                         ; 005588b7
    ADD EBX,0x1                         ; 005588ba
    ADD EBX,0x1                         ; 005588bd
    ADD EBX,0x1                         ; 005588c0
    ADD EBX,0x1                         ; 005588c3
    ADD EBX,0x1                         ; 005588c6
    ADD EBX,0x1                         ; 005588c9
    ADD EBX,0x1                         ; 005588cc
    ADD EBX,0x1                         ; 005588cf
    ADD EBX,0x1                         ; 005588d2
    ADD EBX,0x1                         ; 005588d5
    ADD EBX,0x1                         ; 005588d8
    ADD EBX,0x1                         ; 005588db
    ADD EBX,0x1                         ; 005588de
    ADD EBX,0x1                         ; 005588e1
    ADD EBX,0x1                         ; 005588e4
    ADD EBX,0x1                         ; 005588e7
    ADD EBX,0x1                         ; 005588ea
    ADD EBX,0x1                         ; 005588ed
    ADD EBX,0x1                         ; 005588f0
    ADD EBX,0x1                         ; 005588f3
    ADD EBX,0x1                         ; 005588f6
    ADD EBX,0x1                         ; 005588f9
    ADD EBX,0x1                         ; 005588fc
    ADD EBX,0x1                         ; 005588ff
    ADD EBX,0x1                         ; 00558902
    ADD EBX,0x1                         ; 00558905
    ADD EBX,0x1                         ; 00558908
    ADD EBX,0x1                         ; 0055890b
    ADD EBX,0x1                         ; 0055890e
    ADD EBX,0x1                         ; 00558911
    ADD EBX,0x1                         ; 00558914
    ADD EBX,0x1                         ; 00558917
    ADD EBX,0x1                         ; 0055891a
    ADD EBX,0x1                         ; 0055891d
    ADD EBX,0x1                         ; 00558920
    ADD EBX,0x1                         ; 00558923
    ADD EBX,0x1                         ; 00558926
    ADD EBX,0x1                         ; 00558929
    ADD EBX,0x1                         ; 0055892c
    ADD EBX,0x1                         ; 0055892f
    ADD EBX,0x1                         ; 00558932
    ADD EBX,0x1                         ; 00558935
    ADD EBX,0x1                         ; 00558938
    ADD EBX,0x1                         ; 0055893b
    ADD EBX,0x1                         ; 0055893e
    ADD EBX,0x1                         ; 00558941
    ADD EBX,0x1                         ; 00558944
    ADD EBX,0x1                         ; 00558947
    ADD EBX,0x1                         ; 0055894a
    ADD EBX,0x1                         ; 0055894d
    ADD EBX,0x1                         ; 00558950
    ADD EBX,0x1                         ; 00558953
    ADD EBX,0x1                         ; 00558956
    ADD EBX,0x1                         ; 00558959
    ADD EBX,0x1                         ; 0055895c
    ADD EBX,0x1                         ; 0055895f
    ADD EBX,0x1                         ; 00558962
    ADD EBX,0x1                         ; 00558965
    ADD EBX,0x1                         ; 00558968
    ADD EBX,0x1                         ; 0055896b
    ADD EBX,0x1                         ; 0055896e
    ADD EBX,0x1                         ; 00558971
    ADD EBX,0x1                         ; 00558974
    ADD EBX,0x1                         ; 00558977
    CMP EBX,0x5f5e100                   ; 0055897a
    JC 0x00558851                       ; 00558980
        ;   XREF to: 00558851 (CONDITIONAL_JUMP)  ; LAB_00558851
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 00558986
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    POP EBX                             ; 0055898b
    SUB EAX,EBX                         ; 0055898c
    MOV EBX,EAX                         ; 0055898e
    MOV EAX,0x7080000                   ; 00558990
    CDQ                                 ; 00558995
    DIV EBX                             ; 00558996
    ADD dword ptr [EBP + 0xfffffff8],EAX ; 00558998
    MOV ECX,dword ptr [EBP + -0x4]      ; 0055899e
    INC ECX                             ; 005589a1
    MOV dword ptr [EBP + -0x4],ECX      ; 005589a2
    CMP ECX,0x5                         ; 005589a5
    JL 0x00558846                       ; 005589a8
        ;   XREF to: 00558846 (CONDITIONAL_JUMP)  ; LAB_00558846
    MOV ECX,0x5                         ; 005589ae
    MOV EAX,dword ptr [EBP + -0x8]      ; 005589b3
    MOV EDX,dword ptr [EBP + -0x8]      ; 005589b6
    SAR EDX,0x1f                        ; 005589b9
    IDIV ECX                            ; 005589bc
    MOV [0x01c03950],EAX                ; 005589be | DAT_01c03950
    MOV ESP,EBP                         ; 005589c3
    POP EBP                             ; 005589c5
    POP EDI                             ; 005589c6
    POP ESI                             ; 005589c7
    POP EBX                             ; 005589c8
    RET                                 ; 005589c9
    MOV ECX,0x1                         ; 005589ca
        ;   Label: LAB_005589ca
    PUSH ECX                            ; 005589cf
    MOV dword ptr [0x02de07f4],ECX      ; 005589d0 | DAT_02de07f4
    CALL dword ptr CS:[0x5753e4]        ; 005589d6 | PTR_timeBeginPeriod_005753e4
    TEST EAX,EAX                        ; 005589dd
    JZ 0x0055883e                       ; 005589df
        ;   XREF to: 0055883e (CONDITIONAL_JUMP)  ; LAB_0055883e
    PUSH 0x31                           ; 005589e5
    MOV EBX,dword ptr [0x005c165c]      ; 005589e7 | PTR_s_Nocturne_005c165c
    PUSH EBX                            ; 005589ed | = "Nocturne"
    PUSH 0x597f11                       ; 005589ee | = "Unable to set timer"
    MOV ESI,dword ptr [0x02de2098]      ; 005589f3 | DAT_02de2098
    PUSH ESI                            ; 005589f9
    CALL dword ptr CS:[0x57544c]        ; 005589fa | PTR_MessageBoxA_0057544c
    CMP EAX,0x2                         ; 00558a01
    JNZ 0x0055883e                      ; 00558a04
        ;   XREF to: 0055883e (CONDITIONAL_JUMP)  ; LAB_0055883e
    MOV dword ptr [0x02de20a0],0x1      ; 00558a0a | DAT_02de20a0
    JMP 0x0055883e                      ; 00558a14
        ;   XREF to: 0055883e (UNCONDITIONAL_JUMP)  ; LAB_0055883e

