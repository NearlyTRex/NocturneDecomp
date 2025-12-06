; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void wincore_winvideo.cpp_openMovie_FUN_005f4700(HWND parent_window, char * movie_filename)
;
; Parameters:
; typedef HWND HWND__ * Stack[0x4]:4   parent_window
; char *           Stack[0x8]:4   movie_filename
; Local Variables:
; undefined        Stack[-0x1b4]:1  local_1b4
;
; Referenced Globals:
;   mciGetErrorStringA* mciGetErrorStringA = 0021183a
;   mciSendStringA* mciSendStringA = 00211850
;   GetClientRect* GetClientRect = 00211ac0
;   MessageBoxA* MessageBoxA = 00211b44
;   MoveWindow* MoveWindow = 00211b52
;   SetRectEmpty* SetRectEmpty = 00211bf6
;   TerminatedCString s_where_mov_source_006581dd
;   TerminatedCString s_open_s_alias_mov_style_c_006581f8
;   TerminatedCString s_status_mov_window_handle_00658222
;   TerminatedCString s_Unable_to_open_AVI_0065823b
;   HWND g_MovieWindowHandle
;   int g_MoviePlaying
;   int g_FullscreenMovie
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_stdlib.c_atoi_FUN_005ffef0
;   wincore_winvideo.cpp_closeMovie_FUN_005f46b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f4700
        ;   Label: wincore_winvideo.cpp_openMovie_FUN_005f4700
    PUSH ESI                            ; 005f4701
    PUSH EDI                            ; 005f4702
    PUSH EBP                            ; 005f4703
    SUB ESP,0x1a4                       ; 005f4704
    MOV EBX,dword ptr [ESP + 0x1b8]     ; 005f470a
    CMP dword ptr [0x03f99504],0x0      ; 005f4711 | int g_MoviePlaying
    JZ 0x005f4723                       ; 005f4718 | LAB_005f4723
        ;   XREF to: 005f4723 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 005f471a
    CALL wincore_winvideo.cpp_closeMovie_FUN_005f46b0 ; 005f471b | void wincore_winvideo.cpp_closeMovie_FUN_005f46b0(HWND window_handle)
        ;   XREF to: 005f46b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005f4720
    PUSH EBX                            ; 005f4723
        ;   Label: LAB_005f4723
    MOV ECX,dword ptr [ESP + 0x1c0]     ; 005f4724
    PUSH ECX                            ; 005f472b
    PUSH 0x6581f8                       ; 005f472c | = "open \"%s\" alias mov style child par..." | s_open_s_alias_mov_style_c_006581f8 = open "%s" alias mov style child parent %d
    LEA EAX,[ESP + 0xc]                 ; 005f4731
    PUSH EAX                            ; 005f4735
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005f4736 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005f473b
    PUSH 0x0                            ; 005f473e
    PUSH 0x0                            ; 005f4740
    PUSH 0x0                            ; 005f4742
    LEA EAX,[ESP + 0xc]                 ; 005f4744
    PUSH EAX                            ; 005f4748
    CALL dword ptr CS:[0x611410]        ; 005f4749 | mciSendStringA * mciSendStringA
    TEST EAX,EAX                        ; 005f4750
    JNZ 0x005f4960                      ; 005f4752 | LAB_005f4960
        ;   XREF to: 005f4960 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 005f4758
    PUSH 0x104                          ; 005f4759
    LEA EAX,[ESP + 0x8]                 ; 005f475e
    PUSH EAX                            ; 005f4762
    MOV ESI,0x1                         ; 005f4763
    PUSH 0x658222                       ; 005f4768 | = "status mov window handle" | s_status_mov_window_handle_00658222 = status mov window handle
    MOV dword ptr [0x03f99504],ESI      ; 005f476d | int g_MoviePlaying
    CALL dword ptr CS:[0x611410]        ; 005f4773 | mciSendStringA * mciSendStringA
    TEST EAX,EAX                        ; 005f477a
    JNZ 0x005f47ac                      ; 005f477c | LAB_005f47ac
        ;   XREF to: 005f47ac (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 005f477e
    PUSH EAX                            ; 005f4780
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 005f4781 | int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005f4786
    MOV [0x03f994fc],EAX                ; 005f4789 | HWND g_MovieWindowHandle
    MOV EDI,dword ptr [0x03f9950c]      ; 005f478e | int g_FullscreenMovie
        ;   Label: LAB_005f478e
    TEST EDI,EDI                        ; 005f4794
    JNZ 0x005f47a1                      ; 005f4796 | LAB_005f47a1
        ;   XREF to: 005f47a1 (CONDITIONAL_JUMP)
    CMP dword ptr [0x03f99504],0x0      ; 005f4798 | int g_MoviePlaying
    JNZ 0x005f47d1                      ; 005f479f | LAB_005f47d1
        ;   XREF to: 005f47d1 (CONDITIONAL_JUMP)
    ADD ESP,0x1a4                       ; 005f47a1
        ;   Label: LAB_005f47a1
    POP EBP                             ; 005f47a7
    POP EDI                             ; 005f47a8
    POP ESI                             ; 005f47a9
    POP EBX                             ; 005f47aa
    RET                                 ; 005f47ab
    PUSH 0x104                          ; 005f47ac
        ;   Label: LAB_005f47ac
    LEA EDX,[ESP + 0x4]                 ; 005f47b1
    PUSH EDX                            ; 005f47b5
    PUSH EAX                            ; 005f47b6
    CALL dword ptr CS:[0x61140c]        ; 005f47b7 | mciGetErrorStringA * mciGetErrorStringA
    PUSH 0x30                           ; 005f47be
    PUSH 0x0                            ; 005f47c0
    LEA EAX,[ESP + 0x8]                 ; 005f47c2
    PUSH EAX                            ; 005f47c6
    PUSH EBX                            ; 005f47c7
    CALL dword ptr CS:[0x6114c4]        ; 005f47c8 | MessageBoxA * MessageBoxA
    JMP 0x005f478e                      ; 005f47cf | LAB_005f478e
        ;   XREF to: 005f478e (UNCONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x194]               ; 005f47d1
        ;   Label: LAB_005f47d1
    PUSH EAX                            ; 005f47d8
    PUSH EBX                            ; 005f47d9
    CALL dword ptr CS:[0x6114a4]        ; 005f47da | GetClientRect * GetClientRect
    PUSH EDI                            ; 005f47e1
    PUSH 0x80                           ; 005f47e2
    LEA EAX,[ESP + 0x10c]               ; 005f47e7
    PUSH EAX                            ; 005f47ee
    PUSH 0x6581dd                       ; 005f47ef | = "where mov source" | s_where_mov_source_006581dd = where mov source
    CALL dword ptr CS:[0x611410]        ; 005f47f4 | mciSendStringA * mciSendStringA
    LEA EAX,[ESP + 0x184]               ; 005f47fb
    PUSH EAX                            ; 005f4802
    CALL dword ptr CS:[0x6114f0]        ; 005f4803 | SetRectEmpty * SetRectEmpty
    MOV DL,byte ptr [ESP + 0x104]       ; 005f480a
    LEA EAX,[ESP + 0x104]               ; 005f4811
    CMP DL,0x20                         ; 005f4818
    JNZ 0x005f4830                      ; 005f481b | LAB_005f4830
        ;   XREF to: 005f4830 (CONDITIONAL_JUMP)
    MOV DH,byte ptr [EAX + 0x1]         ; 005f481d
        ;   Label: LAB_005f481d
    INC EAX                             ; 005f4820
    CMP DH,0x20                         ; 005f4821
    JZ 0x005f481d                       ; 005f4824 | LAB_005f481d
        ;   XREF to: 005f481d (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 005f4826
    LEA EDX,[EDX]                       ; 005f482c
    CMP byte ptr [EAX],0x20             ; 005f4830
        ;   Label: LAB_005f4830
    JZ 0x005f4838                       ; 005f4833 | LAB_005f4838
        ;   XREF to: 005f4838 (CONDITIONAL_JUMP)
    INC EAX                             ; 005f4835
    JMP 0x005f4830                      ; 005f4836 | LAB_005f4830
        ;   XREF to: 005f4830 (UNCONDITIONAL_JUMP)
    CMP byte ptr [EAX],0x20             ; 005f4838
        ;   Label: LAB_005f4838
    JNZ 0x005f4840                      ; 005f483b | LAB_005f4840
        ;   XREF to: 005f4840 (CONDITIONAL_JUMP)
    INC EAX                             ; 005f483d
    JMP 0x005f4838                      ; 005f483e | LAB_005f4838
        ;   XREF to: 005f4838 (UNCONDITIONAL_JUMP)
    CMP byte ptr [EAX],0x20             ; 005f4840
        ;   Label: LAB_005f4840
    JZ 0x005f4848                       ; 005f4843 | LAB_005f4848
        ;   XREF to: 005f4848 (CONDITIONAL_JUMP)
    INC EAX                             ; 005f4845
    JMP 0x005f4840                      ; 005f4846 | LAB_005f4840
        ;   XREF to: 005f4840 (UNCONDITIONAL_JUMP)
    CMP byte ptr [EAX],0x20             ; 005f4848
        ;   Label: LAB_005f4848
    JNZ 0x005f4869                      ; 005f484b | LAB_005f4869
        ;   XREF to: 005f4869 (CONDITIONAL_JUMP)
    INC EAX                             ; 005f484d
    JMP 0x005f4848                      ; 005f484e | LAB_005f4848
        ;   XREF to: 005f4848 (UNCONDITIONAL_JUMP)
    IMUL EDX,dword ptr [ESP + 0x18c],0xa ; 005f4850
        ;   Label: LAB_005f4850
    XOR ECX,ECX                         ; 005f4858
    MOV CL,byte ptr [EAX]               ; 005f485a
    SUB ECX,0x30                        ; 005f485c
    ADD EDX,ECX                         ; 005f485f
    INC EAX                             ; 005f4861
    MOV dword ptr [ESP + 0x18c],EDX     ; 005f4862
    MOV DL,byte ptr [EAX]               ; 005f4869
        ;   Label: LAB_005f4869
    CMP DL,0x30                         ; 005f486b
    JNC 0x005f4878                      ; 005f486e | LAB_005f4878
        ;   XREF to: 005f4878 (CONDITIONAL_JUMP)
    CMP byte ptr [EAX],0x20             ; 005f4870
        ;   Label: LAB_005f4870
    JNZ 0x005f4898                      ; 005f4873 | LAB_005f4898
        ;   XREF to: 005f4898 (CONDITIONAL_JUMP)
    INC EAX                             ; 005f4875
    JMP 0x005f4870                      ; 005f4876 | LAB_005f4870
        ;   XREF to: 005f4870 (UNCONDITIONAL_JUMP)
    CMP DL,0x39                         ; 005f4878
        ;   Label: LAB_005f4878
    JBE 0x005f4850                      ; 005f487b | LAB_005f4850
        ;   XREF to: 005f4850 (CONDITIONAL_JUMP)
    JMP 0x005f4870                      ; 005f487d | LAB_005f4870
        ;   XREF to: 005f4870 (UNCONDITIONAL_JUMP)
    IMUL ECX,dword ptr [ESP + 0x190],0xa ; 005f487f
        ;   Label: LAB_005f487f
    XOR EDX,EDX                         ; 005f4887
    MOV DL,byte ptr [EAX]               ; 005f4889
    SUB EDX,0x30                        ; 005f488b
    ADD ECX,EDX                         ; 005f488e
    INC EAX                             ; 005f4890
    MOV dword ptr [ESP + 0x190],ECX     ; 005f4891
    MOV BH,byte ptr [EAX]               ; 005f4898
        ;   Label: LAB_005f4898
    CMP BH,0x30                         ; 005f489a
    JC 0x005f48a4                       ; 005f489d | LAB_005f48a4
        ;   XREF to: 005f48a4 (CONDITIONAL_JUMP)
    CMP BH,0x39                         ; 005f489f
    JBE 0x005f487f                      ; 005f48a2 | LAB_005f487f
        ;   XREF to: 005f487f (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x19c],0x190   ; 005f48a4
        ;   Label: LAB_005f48a4
    JLE 0x005f494a                      ; 005f48af | LAB_005f494a
        ;   XREF to: 005f494a (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [ESP + 0x18c]     ; 005f48b5
        ;   Label: LAB_005f48b5
    MOV EDI,dword ptr [ESP + 0x190]     ; 005f48bc
    ADD EBP,EBP                         ; 005f48c3
    ADD EDI,EDI                         ; 005f48c5
    MOV dword ptr [ESP + 0x18c],EBP     ; 005f48c7
    MOV dword ptr [ESP + 0x190],EDI     ; 005f48ce
    MOV EAX,dword ptr [ESP + 0x19c]     ; 005f48d5
        ;   Label: LAB_005f48d5
    MOV EDX,EAX                         ; 005f48dc
    SAR EDX,0x1f                        ; 005f48de
    SUB EAX,EDX                         ; 005f48e1
    SAR EAX,0x1                         ; 005f48e3
    MOV EBX,EAX                         ; 005f48e5
    MOV EAX,dword ptr [ESP + 0x18c]     ; 005f48e7
    MOV EDX,EAX                         ; 005f48ee
    SAR EDX,0x1f                        ; 005f48f0
    SUB EAX,EDX                         ; 005f48f3
    SAR EAX,0x1                         ; 005f48f5
    SUB EBX,EAX                         ; 005f48f7
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 005f48f9
    MOV EDX,EAX                         ; 005f4900
    SAR EDX,0x1f                        ; 005f4902
    SUB EAX,EDX                         ; 005f4905
    SAR EAX,0x1                         ; 005f4907
    MOV ECX,EAX                         ; 005f4909
    MOV EAX,dword ptr [ESP + 0x190]     ; 005f490b
    MOV EDX,EAX                         ; 005f4912
    SAR EDX,0x1f                        ; 005f4914
    SUB EAX,EDX                         ; 005f4917
    SAR EAX,0x1                         ; 005f4919
    PUSH 0x1                            ; 005f491b
    SUB ECX,EAX                         ; 005f491d
    MOV EAX,dword ptr [ESP + 0x194]     ; 005f491f
    PUSH EAX                            ; 005f4926
    MOV EDX,dword ptr [ESP + 0x194]     ; 005f4927
    PUSH EDX                            ; 005f492e
    PUSH ECX                            ; 005f492f
    PUSH EBX                            ; 005f4930
    MOV ECX,dword ptr [0x03f994fc]      ; 005f4931 | HWND g_MovieWindowHandle
    PUSH ECX                            ; 005f4937
    CALL dword ptr CS:[0x6114c8]        ; 005f4938 | MoveWindow * MoveWindow
    ADD ESP,0x1a4                       ; 005f493f
    POP EBP                             ; 005f4945
    POP EDI                             ; 005f4946
    POP ESI                             ; 005f4947
    POP EBX                             ; 005f4948
    RET                                 ; 005f4949
    CMP dword ptr [ESP + 0x1a0],0x12c   ; 005f494a
        ;   Label: LAB_005f494a
    JG 0x005f48b5                       ; 005f4955 | LAB_005f48b5
        ;   XREF to: 005f48b5 (CONDITIONAL_JUMP)
    JMP 0x005f48d5                      ; 005f495b | LAB_005f48d5
        ;   XREF to: 005f48d5 (UNCONDITIONAL_JUMP)
    PUSH 0x30                           ; 005f4960
        ;   Label: LAB_005f4960
    PUSH 0x0                            ; 005f4962
    PUSH 0x65823b                       ; 005f4964 | = "Unable to open .AVI!" | s_Unable_to_open_AVI_0065823b = Unable to open .AVI!
    PUSH EBX                            ; 005f4969
    XOR EBX,EBX                         ; 005f496a
    CALL dword ptr CS:[0x6114c4]        ; 005f496c | MessageBoxA * MessageBoxA
    MOV dword ptr [0x03f99504],EBX      ; 005f4973 | int g_MoviePlaying
    ADD ESP,0x1a4                       ; 005f4979
    POP EBP                             ; 005f497f
    POP EDI                             ; 005f4980
    POP ESI                             ; 005f4981
    POP EBX                             ; 005f4982
    RET                                 ; 005f4983

