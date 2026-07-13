; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_10008610(int param_1)
;
; Local Variables:
; undefined        Stack[-0x1a8]:1  local_1a8
; undefined        Stack[-0x1a4]:1  local_1a4
; undefined        Stack[-0x13f]:1  local_13f
; undefined        Stack[-0x104]:1  local_104
;
; XREF[2]:
;   __FF_MSGBANNER at 100085ec
;   __amsg_exit at 100058e1
;
; Referenced Globals:
;   TerminatedCString s_R6009_not_enough_space_f_100125f4
;   undefined4 s_R6009_not_enough_space_f_100125f4+1
;   TerminatedCString s_Microsoft_Visual_C_Runti_10012674
;   undefined4 DAT_1001269c
;   undefined4 DAT_1001269c+1
;   TerminatedCString s_Runtime_Error_Program_100126a0
;   undefined4 s_Runtime_Error_Program_100126a0+4
;   TerminatedCString s_anon_100126bc
;   TerminatedCString s_program_name_unknown_100126c0
;   undefined4 s_program_name_unknown_100126c0+4
;   undefined4 s_program_name_unknown_100126c0+6
;   undefined4 DAT_10016c70
;   undefined4 DAT_10016c74
;   undefined4 DAT_10016ff8
;   undefined4 DAT_10017000
;   ... and 7 more
;
; Called Functions:
;   ___crtMessageBoxA
;   _strncpy
;   GetModuleFileNameA
;   GetStdHandle
;   WriteFile
;
; *****************************************************************************

section .text

    SUB ESP,0x1a8                       ; 10008610
        ;   Label: FUN_10008610
    XOR ECX,ECX                         ; 10008616
    MOV EAX,0x10016ff8                  ; 10008618 | DAT_10016ff8
    PUSH EBX                            ; 1000861d
    MOV EDX,dword ptr [ESP + 0x1b0]     ; 1000861e
    PUSH ESI                            ; 10008625
    PUSH EDI                            ; 10008626
    PUSH EBP                            ; 10008627
    CMP dword ptr [EAX],EDX             ; 10008628 | DAT_10016ff8 | DAT_10017000
        ;   Label: LAB_10008628
    JZ 0x10008637                       ; 1000862a
        ;   XREF to: 10008637 (CONDITIONAL_JUMP)  ; LAB_10008637
    ADD EAX,0x8                         ; 1000862c | DAT_10017008
    INC ECX                             ; 1000862f
    CMP EAX,0x10017080                  ; 10008630 | DAT_10017080
    JC 0x10008628                       ; 10008635
        ;   XREF to: 10008628 (CONDITIONAL_JUMP)  ; LAB_10008628
    CMP dword ptr [ECX*0x8 + 0x10016ff8],EDX ; 10008637 | DAT_10017008 | DAT_10017000
        ;   Label: LAB_10008637
    LEA EBX,[ECX*0x8 + 0x0]             ; 1000863e
    JNZ 0x100087f2                      ; 10008645
        ;   XREF to: 100087f2 (CONDITIONAL_JUMP)  ; LAB_100087f2
    CMP dword ptr [0x10016c70],0x1      ; 1000864b | DAT_10016c70
    JZ 0x100087b7                       ; 10008652
        ;   XREF to: 100087b7 (CONDITIONAL_JUMP)  ; LAB_100087b7
    CMP dword ptr [0x10016c70],0x0      ; 10008658 | DAT_10016c70
    JNZ 0x1000866e                      ; 1000865f
        ;   XREF to: 1000866e (CONDITIONAL_JUMP)  ; LAB_1000866e
    CMP dword ptr [0x10016c74],0x1      ; 10008661 | DAT_10016c74
    JZ 0x100087b7                       ; 10008668
        ;   XREF to: 100087b7 (CONDITIONAL_JUMP)  ; LAB_100087b7
    CMP EDX,0xfc                        ; 1000866e
        ;   Label: LAB_1000866e
    JZ 0x100087f2                       ; 10008674
        ;   XREF to: 100087f2 (CONDITIONAL_JUMP)  ; LAB_100087f2
    LEA EAX,[ESP + 0xb4]                ; 1000867a
    PUSH 0x104                          ; 10008681
    PUSH EAX                            ; 10008686
    MOV EBP,dword ptr [0x1024220c]      ; 10008687 | PTR_GetModuleFileNameA_1024220c
    PUSH 0x0                            ; 1000868d
    CALL EBP                            ; 1000868f | DWORD GetModuleFileNameA(HMODULE hModule, LPSTR lpFilename, DWORD nSize)
    TEST EAX,EAX                        ; 10008691
    JNZ 0x100086ab                      ; 10008693
        ;   XREF to: 100086ab (CONDITIONAL_JUMP)  ; LAB_100086ab
    MOV ESI,0x100126c0                  ; 10008695 | = "<program name unknown>"
    LEA EDI,[ESP + 0xb4]                ; 1000869a
    MOV ECX,0x5                         ; 100086a1
    MOVSD.REP ES:EDI,ESI                ; 100086a6 | = "<program name unknown>" | s_program_name_unknown_100126c0+4
    MOVSW ES:EDI,ESI                    ; 100086a8 | s_program_name_unknown_100126c0+4
    MOVSB ES:EDI,ESI                    ; 100086aa | s_program_name_unknown_100126c0+6
    LEA EBP,[ESP + 0xb4]                ; 100086ab
        ;   Label: LAB_100086ab
    LEA EDI,[ESP + 0xb4]                ; 100086b2
    MOV ECX,0xffffffff                  ; 100086b9
    SUB EAX,EAX                         ; 100086be
    SCASB.REPNE ES:EDI                  ; 100086c0
    NOT ECX                             ; 100086c2
    CMP ECX,0x3c                        ; 100086c4
    JBE 0x100086ef                      ; 100086c7
        ;   XREF to: 100086ef (CONDITIONAL_JUMP)  ; LAB_100086ef
    LEA EDI,[ESP + 0xb4]                ; 100086c9
    MOV ECX,0xffffffff                  ; 100086d0
    SUB EAX,EAX                         ; 100086d5
    PUSH 0x3                            ; 100086d7
    SCASB.REPNE ES:EDI                  ; 100086d9
    NOT ECX                             ; 100086db
    LEA EBP,[ESP + ECX*0x1 + 0x7c]      ; 100086dd
    PUSH 0x100126bc                     ; 100086e1 | = "..."
    PUSH EBP                            ; 100086e6
    CALL _strncpy                       ; 100086e7
        ;   XREF to: 1000a9f0 (UNCONDITIONAL_CALL)  ; char * _strncpy(char * _Dest, char * _Source, size_t _Count)
    ADD ESP,0xc                         ; 100086ec
    MOV ESI,0x100126a0                  ; 100086ef | = "Runtime Error!\n\nProgram: "
        ;   Label: LAB_100086ef
    LEA EDI,[ESP + 0x14]                ; 100086f4
    MOV ECX,0x6                         ; 100086f8
    MOVSD.REP ES:EDI,ESI                ; 100086fd | = "Runtime Error!\n\nProgram: " | s_Runtime_Error_Program_100126a0+4
    MOVSW ES:EDI,ESI                    ; 100086ff | s_Runtime_Error_Program_100126a0+4
    MOV EDI,EBP                         ; 10008701
    MOV ECX,0xffffffff                  ; 10008703
    SUB EAX,EAX                         ; 10008708
    SCASB.REPNE ES:EDI                  ; 1000870a
    NOT ECX                             ; 1000870c
    SUB EDI,ECX                         ; 1000870e
    MOV EDX,ECX                         ; 10008710
    MOV ESI,EDI                         ; 10008712
    MOV ECX,0xffffffff                  ; 10008714
    LEA EDI,[ESP + 0x14]                ; 10008719
    SUB EAX,EAX                         ; 1000871d
    SCASB.REPNE ES:EDI                  ; 1000871f
    DEC EDI                             ; 10008721
    MOV ECX,EDX                         ; 10008722
    SHR ECX,0x2                         ; 10008724
    MOVSD.REP ES:EDI,ESI                ; 10008727
    MOV ECX,EDX                         ; 10008729
    AND ECX,0x3                         ; 1000872b
    MOVSB.REP ES:EDI,ESI                ; 1000872e
    MOV EDI,0x1001269c                  ; 10008730 | DAT_1001269c
    MOV ECX,0xffffffff                  ; 10008735
    SUB EAX,EAX                         ; 1000873a
    SCASB.REPNE ES:EDI                  ; 1000873c | DAT_1001269c | DAT_1001269c+1
    NOT ECX                             ; 1000873e
    SUB EDI,ECX                         ; 10008740
    MOV EDX,ECX                         ; 10008742
    MOV ESI,EDI                         ; 10008744
    MOV ECX,0xffffffff                  ; 10008746
    LEA EDI,[ESP + 0x14]                ; 1000874b
    SUB EAX,EAX                         ; 1000874f
    SCASB.REPNE ES:EDI                  ; 10008751
    DEC EDI                             ; 10008753
    MOV ECX,EDX                         ; 10008754
    SHR ECX,0x2                         ; 10008756
    MOVSD.REP ES:EDI,ESI                ; 10008759 | DAT_1001269c
    MOV ECX,EDX                         ; 1000875b
    AND ECX,0x3                         ; 1000875d
    MOVSB.REP ES:EDI,ESI                ; 10008760 | DAT_1001269c
    MOV EDI,dword ptr [EBX + 0x10016ffc] ; 10008762 | PTR_s_R6009_not_enough_space_f_100125f4_1001700c
    MOV ECX,0xffffffff                  ; 10008768
    SUB EAX,EAX                         ; 1000876d
    SCASB.REPNE ES:EDI                  ; 1000876f | = "R6009\r\n- not enough space for envir..." | s_R6009_not_enough_space_f_100125f4+1
    NOT ECX                             ; 10008771
    SUB EDI,ECX                         ; 10008773
    MOV ESI,EDI                         ; 10008775
    MOV EDX,ECX                         ; 10008777
    LEA EDI,[ESP + 0x14]                ; 10008779
    MOV ECX,0xffffffff                  ; 1000877d
    SUB EAX,EAX                         ; 10008782
    SCASB.REPNE ES:EDI                  ; 10008784
    DEC EDI                             ; 10008786
    MOV ECX,EDX                         ; 10008787
    SHR ECX,0x2                         ; 10008789
    MOVSD.REP ES:EDI,ESI                ; 1000878c | = "R6009\r\n- not enough space for envir..."
    MOV ECX,EDX                         ; 1000878e
    PUSH 0x12010                        ; 10008790
    AND ECX,0x3                         ; 10008795
    PUSH 0x10012674                     ; 10008798 | = "Microsoft Visual C++ Runtime Library"
    MOVSB.REP ES:EDI,ESI                ; 1000879d | = "R6009\r\n- not enough space for envir..."
    LEA EAX,[ESP + 0x1c]                ; 1000879f
    PUSH EAX                            ; 100087a3
    CALL ___crtMessageBoxA              ; 100087a4
        ;   XREF to: 1000a950 (UNCONDITIONAL_CALL)  ; int ___crtMessageBoxA(LPCSTR _LpText, LPCSTR _LpCaption, UINT _UType)
    ADD ESP,0xc                         ; 100087a9
    POP EBP                             ; 100087ac
    POP EDI                             ; 100087ad
    POP ESI                             ; 100087ae
    POP EBX                             ; 100087af
    ADD ESP,0x1a8                       ; 100087b0
    RET                                 ; 100087b6
    MOV EAX,[0x10241870]                ; 100087b7 | DAT_10241870
        ;   Label: LAB_100087b7
    MOV ESI,dword ptr [EAX + 0x48]      ; 100087bc
    CMP ESI,-0x1                        ; 100087bf
    JNZ 0x100087ce                      ; 100087c2
        ;   XREF to: 100087ce (CONDITIONAL_JUMP)  ; LAB_100087ce
    PUSH -0xc                           ; 100087c4
    CALL dword ptr [0x10242204]         ; 100087c6 | PTR_GetStdHandle_10242204
    MOV ESI,EAX                         ; 100087cc
    MOV EDX,dword ptr [EBX + 0x10016ffc] ; 100087ce | PTR_s_R6009_not_enough_space_f_100125f4_1001700c
        ;   Label: LAB_100087ce
    PUSH 0x0                            ; 100087d4
    LEA EAX,[ESP + 0x14]                ; 100087d6
    MOV EDI,EDX                         ; 100087da
    PUSH EAX                            ; 100087dc
    MOV ECX,0xffffffff                  ; 100087dd
    SUB EAX,EAX                         ; 100087e2
    SCASB.REPNE ES:EDI                  ; 100087e4 | = "R6009\r\n- not enough space for envir..." | s_R6009_not_enough_space_f_100125f4+1
    NOT ECX                             ; 100087e6
    DEC ECX                             ; 100087e8
    PUSH ECX                            ; 100087e9
    PUSH EDX                            ; 100087ea | = "R6009\r\n- not enough space for envir..."
    PUSH ESI                            ; 100087eb
    CALL dword ptr [0x10242234]         ; 100087ec | PTR_WriteFile_10242234
    POP EBP                             ; 100087f2
        ;   Label: LAB_100087f2
    POP EDI                             ; 100087f3
    POP ESI                             ; 100087f4
    POP EBX                             ; 100087f5
    ADD ESP,0x1a8                       ; 100087f6
    RET                                 ; 100087fc

