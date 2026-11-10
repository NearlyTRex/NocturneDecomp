; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_calibrateCPUSpeed_FUN_0058e7a0(void)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_004e46c0 at 004e47b1
;
; Referenced Globals:
;   void* PTR_timeBeginPeriod_005c8444 = 001c88fa
;   void* PTR_MessageBoxA_005c84cc = 001c8b3e
;   void* PTR_QueryPerformanceCounter_005c85f8 = 001c9074
;   void* PTR_QueryPerformanceFrequency_005c85fc = 001c908e
;   undefined4 s_Unable_to_set_timer_005ee831+1
;   undefined4 DAT_005ee84a
;   TerminatedCString s_Coffin_Rock_005eead1
;   void* PTR_s_Coffin_Rock_0061e988 = 005eead1
;   undefined4 DAT_01c38b48
;   undefined4 DAT_02662d68
;   undefined4 DAT_02662d70
;   undefined4 DAT_02662d74
;   undefined4 DAT_02662d78
;   undefined4 DAT_02662d84
;   undefined4 DAT_02664628
;   ... and 1 more
;
; Called Functions:
;   MessageBoxA
;   QueryPerformanceCounter
;   QueryPerformanceFrequency
;   timeBeginPeriod
;   wincore_winrun.cpp_getTime_FUN_0058e9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058e7a0
        ;   Label: wincore_winrun.cpp_calibrateCPUSpeed_FUN_0058e7a0
    PUSH ESI                            ; 0058e7a1
    PUSH EDI                            ; 0058e7a2
    PUSH EBP                            ; 0058e7a3
    MOV EBP,ESP                         ; 0058e7a4
    SUB ESP,0x10                        ; 0058e7a6
    PUSH 0x2662d70                      ; 0058e7a9 | DAT_02662d70
    CALL dword ptr CS:[0x5c85fc]        ; 0058e7ae | PTR_QueryPerformanceFrequency_005c85fc
    CMP EAX,0x1                         ; 0058e7b5
    JNZ 0x0058e97a                      ; 0058e7b8
        ;   XREF to: 0058e97a (CONDITIONAL_JUMP)  ; LAB_0058e97a
    FILD dword ptr [0x02662d74]         ; 0058e7be | DAT_02662d74
    FMUL double ptr [0x005ee84a]        ; 0058e7c4 | DAT_005ee84a
    XOR EDX,EDX                         ; 0058e7ca
    MOV EAX,[0x02662d70]                ; 0058e7cc | DAT_02662d70
    MOV dword ptr [EBP + -0xc],EDX      ; 0058e7d1
    MOV dword ptr [EBP + -0x10],EAX     ; 0058e7d4
    FILD qword ptr [EBP + -0x10]        ; 0058e7d7
    FADDP                               ; 0058e7da
    PUSH 0x2662d68                      ; 0058e7dc | DAT_02662d68
    FSTP double ptr [0x02662d78]        ; 0058e7e1 | DAT_02662d78
    CALL dword ptr CS:[0x5c85f8]        ; 0058e7e7 | PTR_QueryPerformanceCounter_005c85f8
    XOR EAX,EAX                         ; 0058e7ee
        ;   Label: LAB_0058e7ee
    MOV dword ptr [EBP + -0x8],EAX      ; 0058e7f0
    MOV dword ptr [EBP + -0x4],EAX      ; 0058e7f3
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 0058e7f6
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
        ;   Label: LAB_0058e7f6
    PUSH EAX                            ; 0058e7fb
    MOV EBX,0x0                         ; 0058e7fc
    ADD EBX,0x1                         ; 0058e801
        ;   Label: LAB_0058e801
    ADD EBX,0x1                         ; 0058e804
    ADD EBX,0x1                         ; 0058e807
    ADD EBX,0x1                         ; 0058e80a
    ADD EBX,0x1                         ; 0058e80d
    ADD EBX,0x1                         ; 0058e810
    ADD EBX,0x1                         ; 0058e813
    ADD EBX,0x1                         ; 0058e816
    ADD EBX,0x1                         ; 0058e819
    ADD EBX,0x1                         ; 0058e81c
    ADD EBX,0x1                         ; 0058e81f
    ADD EBX,0x1                         ; 0058e822
    ADD EBX,0x1                         ; 0058e825
    ADD EBX,0x1                         ; 0058e828
    ADD EBX,0x1                         ; 0058e82b
    ADD EBX,0x1                         ; 0058e82e
    ADD EBX,0x1                         ; 0058e831
    ADD EBX,0x1                         ; 0058e834
    ADD EBX,0x1                         ; 0058e837
    ADD EBX,0x1                         ; 0058e83a
    ADD EBX,0x1                         ; 0058e83d
    ADD EBX,0x1                         ; 0058e840
    ADD EBX,0x1                         ; 0058e843
    ADD EBX,0x1                         ; 0058e846
    ADD EBX,0x1                         ; 0058e849
    ADD EBX,0x1                         ; 0058e84c
    ADD EBX,0x1                         ; 0058e84f
    ADD EBX,0x1                         ; 0058e852
    ADD EBX,0x1                         ; 0058e855
    ADD EBX,0x1                         ; 0058e858
    ADD EBX,0x1                         ; 0058e85b
    ADD EBX,0x1                         ; 0058e85e
    ADD EBX,0x1                         ; 0058e861
    ADD EBX,0x1                         ; 0058e864
    ADD EBX,0x1                         ; 0058e867
    ADD EBX,0x1                         ; 0058e86a
    ADD EBX,0x1                         ; 0058e86d
    ADD EBX,0x1                         ; 0058e870
    ADD EBX,0x1                         ; 0058e873
    ADD EBX,0x1                         ; 0058e876
    ADD EBX,0x1                         ; 0058e879
    ADD EBX,0x1                         ; 0058e87c
    ADD EBX,0x1                         ; 0058e87f
    ADD EBX,0x1                         ; 0058e882
    ADD EBX,0x1                         ; 0058e885
    ADD EBX,0x1                         ; 0058e888
    ADD EBX,0x1                         ; 0058e88b
    ADD EBX,0x1                         ; 0058e88e
    ADD EBX,0x1                         ; 0058e891
    ADD EBX,0x1                         ; 0058e894
    ADD EBX,0x1                         ; 0058e897
    ADD EBX,0x1                         ; 0058e89a
    ADD EBX,0x1                         ; 0058e89d
    ADD EBX,0x1                         ; 0058e8a0
    ADD EBX,0x1                         ; 0058e8a3
    ADD EBX,0x1                         ; 0058e8a6
    ADD EBX,0x1                         ; 0058e8a9
    ADD EBX,0x1                         ; 0058e8ac
    ADD EBX,0x1                         ; 0058e8af
    ADD EBX,0x1                         ; 0058e8b2
    ADD EBX,0x1                         ; 0058e8b5
    ADD EBX,0x1                         ; 0058e8b8
    ADD EBX,0x1                         ; 0058e8bb
    ADD EBX,0x1                         ; 0058e8be
    ADD EBX,0x1                         ; 0058e8c1
    ADD EBX,0x1                         ; 0058e8c4
    ADD EBX,0x1                         ; 0058e8c7
    ADD EBX,0x1                         ; 0058e8ca
    ADD EBX,0x1                         ; 0058e8cd
    ADD EBX,0x1                         ; 0058e8d0
    ADD EBX,0x1                         ; 0058e8d3
    ADD EBX,0x1                         ; 0058e8d6
    ADD EBX,0x1                         ; 0058e8d9
    ADD EBX,0x1                         ; 0058e8dc
    ADD EBX,0x1                         ; 0058e8df
    ADD EBX,0x1                         ; 0058e8e2
    ADD EBX,0x1                         ; 0058e8e5
    ADD EBX,0x1                         ; 0058e8e8
    ADD EBX,0x1                         ; 0058e8eb
    ADD EBX,0x1                         ; 0058e8ee
    ADD EBX,0x1                         ; 0058e8f1
    ADD EBX,0x1                         ; 0058e8f4
    ADD EBX,0x1                         ; 0058e8f7
    ADD EBX,0x1                         ; 0058e8fa
    ADD EBX,0x1                         ; 0058e8fd
    ADD EBX,0x1                         ; 0058e900
    ADD EBX,0x1                         ; 0058e903
    ADD EBX,0x1                         ; 0058e906
    ADD EBX,0x1                         ; 0058e909
    ADD EBX,0x1                         ; 0058e90c
    ADD EBX,0x1                         ; 0058e90f
    ADD EBX,0x1                         ; 0058e912
    ADD EBX,0x1                         ; 0058e915
    ADD EBX,0x1                         ; 0058e918
    ADD EBX,0x1                         ; 0058e91b
    ADD EBX,0x1                         ; 0058e91e
    ADD EBX,0x1                         ; 0058e921
    ADD EBX,0x1                         ; 0058e924
    ADD EBX,0x1                         ; 0058e927
    CMP EBX,0x5f5e100                   ; 0058e92a
    JC 0x0058e801                       ; 0058e930
        ;   XREF to: 0058e801 (CONDITIONAL_JUMP)  ; LAB_0058e801
    CALL wincore_winrun.cpp_getTime_FUN_0058e9e0 ; 0058e936
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_0058e9e0()
    POP EBX                             ; 0058e93b
    SUB EAX,EBX                         ; 0058e93c
    MOV EBX,EAX                         ; 0058e93e
    MOV EAX,0x7080000                   ; 0058e940
    CDQ                                 ; 0058e945
    DIV EBX                             ; 0058e946
    ADD dword ptr [EBP + 0xfffffff8],EAX ; 0058e948
    MOV ECX,dword ptr [EBP + -0x4]      ; 0058e94e
    INC ECX                             ; 0058e951
    MOV dword ptr [EBP + -0x4],ECX      ; 0058e952
    CMP ECX,0x5                         ; 0058e955
    JL 0x0058e7f6                       ; 0058e958
        ;   XREF to: 0058e7f6 (CONDITIONAL_JUMP)  ; LAB_0058e7f6
    MOV ECX,0x5                         ; 0058e95e
    MOV EAX,dword ptr [EBP + -0x8]      ; 0058e963
    MOV EDX,dword ptr [EBP + -0x8]      ; 0058e966
    SAR EDX,0x1f                        ; 0058e969
    IDIV ECX                            ; 0058e96c
    MOV [0x01c38b48],EAX                ; 0058e96e | DAT_01c38b48
    MOV ESP,EBP                         ; 0058e973
    POP EBP                             ; 0058e975
    POP EDI                             ; 0058e976
    POP ESI                             ; 0058e977
    POP EBX                             ; 0058e978
    RET                                 ; 0058e979
    MOV ECX,0x1                         ; 0058e97a
        ;   Label: LAB_0058e97a
    PUSH ECX                            ; 0058e97f
    MOV dword ptr [0x02662d84],ECX      ; 0058e980 | DAT_02662d84
    CALL dword ptr CS:[0x5c8444]        ; 0058e986 | PTR_timeBeginPeriod_005c8444
    TEST EAX,EAX                        ; 0058e98d
    JZ 0x0058e7ee                       ; 0058e98f
        ;   XREF to: 0058e7ee (CONDITIONAL_JUMP)  ; LAB_0058e7ee
    PUSH 0x31                           ; 0058e995
    MOV EBX,dword ptr [0x0061e988]      ; 0058e997 | PTR_s_Coffin_Rock_0061e988
    PUSH EBX                            ; 0058e99d | = "Coffin Rock"
    PUSH 0x5ee832                       ; 0058e99e | s_Unable_to_set_timer_005ee831+1
    MOV ESI,dword ptr [0x02664628]      ; 0058e9a3 | DAT_02664628
    PUSH ESI                            ; 0058e9a9
    CALL dword ptr CS:[0x5c84cc]        ; 0058e9aa | PTR_MessageBoxA_005c84cc
    CMP EAX,0x2                         ; 0058e9b1
    JNZ 0x0058e7ee                      ; 0058e9b4
        ;   XREF to: 0058e7ee (CONDITIONAL_JUMP)  ; LAB_0058e7ee
    MOV dword ptr [0x02664630],0x1      ; 0058e9ba | DAT_02664630
    JMP 0x0058e7ee                      ; 0058e9c4
        ;   XREF to: 0058e7ee (UNCONDITIONAL_JUMP)  ; LAB_0058e7ee

