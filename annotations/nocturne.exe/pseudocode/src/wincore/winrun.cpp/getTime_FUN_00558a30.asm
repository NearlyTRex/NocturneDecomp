; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_winrun_cpp_getTime_FUN_00558a30(void)
;
; Local Variables:
; undefined8       Stack[-0x14]:8  local_14
; undefined8       Stack[-0xc]:8  local_c
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[37]:
;   FUN_00475230 at 004753a2
;   FUN_0049cc10 at 0049ccc4
;   FUN_004c8e10 at 004c8e18
;   FUN_004c8eb0 at 004c8ecf
;   FUN_004c90e0 at 004c911e
;   FUN_004e94f0 at 004e94fa
;   FUN_004e9520 at 004e9520
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a08bf
;   core_game.cpp_CGame_process_FUN_004a6010 at 004a64bd
;   core_game.cpp_CGame_saveClockTime_FUN_0049a890 at 0049a890
;   ... and 27 more
;
; Referenced Globals:
;   void* PTR_timeGetTime_005753ec = 0017584a
;   void* PTR_QueryPerformanceCounter_00575570 = 00175ef6
;   double DOUBLE_00597f31 = 4294967296
;   double DOUBLE_00597f39 = 65536
;   double DOUBLE_00597f41 = 18
;   undefined4 DAT_02de07d0
;   undefined4 DAT_02de07d4
;   undefined4 DAT_02de07d8
;   undefined4 DAT_02de07dc
;   undefined4 DAT_02de07e8
;   undefined4 DAT_02de07f0
;   undefined4 DAT_02de07f4
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   QueryPerformanceCounter
;   timeGetTime
;
; *****************************************************************************

section .text

    SUB ESP,0x24                        ; 00558a30
        ;   Label: wincore_winrun.cpp_getTime_FUN_00558a30
    CMP dword ptr [0x02de07f4],0x0      ; 00558a33 | DAT_02de07f4
    JZ 0x00558a4d                       ; 00558a3a
        ;   XREF to: 00558a4d (CONDITIONAL_JUMP)  ; LAB_00558a4d
    CALL dword ptr CS:[0x5753ec]        ; 00558a3c | PTR_timeGetTime_005753ec
    IMUL EAX,EAX,0x49c                  ; 00558a43
    ADD ESP,0x24                        ; 00558a49
    RET                                 ; 00558a4c
    PUSH EDI                            ; 00558a4d
        ;   Label: LAB_00558a4d
    PUSH ESI                            ; 00558a4e
    MOV EDI,0x2de07d0                   ; 00558a4f
    MOV ESI,0x2de07d8                   ; 00558a54
    PUSH 0x2de07d8                      ; 00558a59 | DAT_02de07d8
    MOVSD ES:EDI,ESI                    ; 00558a5e | DAT_02de07d8 | DAT_02de07d0
    MOVSD ES:EDI,ESI                    ; 00558a5f | DAT_02de07dc | DAT_02de07d4
    CALL dword ptr CS:[0x575570]        ; 00558a60 | PTR_QueryPerformanceCounter_00575570
    FLD double ptr [0x00597f31]         ; 00558a67 | DOUBLE_00597f31
    FILD dword ptr [0x02de07d4]         ; 00558a6d | DAT_02de07d4
    FMUL ST1                            ; 00558a73
    FILD dword ptr [0x02de07dc]         ; 00558a75 | DAT_02de07dc
    FMULP ST2                           ; 00558a7b
    XOR ECX,ECX                         ; 00558a7d
    MOV EAX,[0x02de07d0]                ; 00558a7f | DAT_02de07d0
    MOV dword ptr [ESP + 0x1c],ECX      ; 00558a84
    MOV dword ptr [ESP + 0x18],EAX      ; 00558a88
    MOV EAX,[0x02de07d8]                ; 00558a8c | DAT_02de07d8
    MOV dword ptr [ESP + 0x24],ECX      ; 00558a91
    MOV dword ptr [ESP + 0x20],EAX      ; 00558a95
    FILD qword ptr [ESP + 0x18]         ; 00558a99
    FILD qword ptr [ESP + 0x20]         ; 00558a9d
    FADDP ST3,ST0                       ; 00558aa1
    FADDP                               ; 00558aa3
    FSUBP                               ; 00558aa5
    FLD ST0                             ; 00558aa7
    FDIV double ptr [0x02de07e8]        ; 00558aa9 | DAT_02de07e8
    FMUL double ptr [0x00597f39]        ; 00558aaf | DOUBLE_00597f39
    FMUL double ptr [0x00597f41]        ; 00558ab5 | DOUBLE_00597f41
    MOV ESI,dword ptr [0x02de07f0]      ; 00558abb | DAT_02de07f0
    FSTP ST1                            ; 00558ac1
    CALL crt_math.c_round_FUN_00563a30  ; 00558ac3
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x28]        ; 00558ac8
    MOV EAX,dword ptr [ESP + 0x28]      ; 00558acc
    ADD ESI,EAX                         ; 00558ad0
    MOV dword ptr [0x02de07f0],ESI      ; 00558ad2 | DAT_02de07f0
    MOV EAX,ESI                         ; 00558ad8
    POP ESI                             ; 00558ada
    POP EDI                             ; 00558adb
    ADD ESP,0x24                        ; 00558adc
    RET                                 ; 00558adf

