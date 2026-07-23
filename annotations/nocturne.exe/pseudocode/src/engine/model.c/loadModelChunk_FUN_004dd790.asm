; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl engine_model_c_loadModelChunk_FUN_004dd790(undefined4 param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
;
; XREF[1]:
;   engine_keyframe.c_loadAndInterpolateKeyframes_FUN_004c3aa0 at 004c3af8
;
; Referenced Globals:
;   TerminatedCString s_rb_0058a661
;   string s_models_0058a664
;   string s_Unable_to_open_model:_%s_0058a66b
;   string s_..\\engine\\model.c_0058a684
;   string s_Out_of_partial_model_mem_:_%s_0058a696
;   string s_..\\engine\\model.c_0058a6b4
;   string s_..\\engine\\model.c_0058a6c6
;   string s_Model_read_hose_0058a6d8
;   string s_..\\engine\\model.c_0058a6e8
;   string s_Bad_model!_0058a6fa
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   crt_memory.c_malloc_FUN_005635b0
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fread_FUN_005636d0
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_dosio.cpp_getFile_FUN_00456a60
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dd790
        ;   Label: engine_model.c_loadModelChunk_FUN_004dd790
    PUSH ESI                            ; 004dd791
    PUSH EDI                            ; 004dd792
    PUSH EBP                            ; 004dd793
    SUB ESP,0x50                        ; 004dd794
    MOV EBP,dword ptr [ESP + 0x64]      ; 004dd797
    MOV ESI,dword ptr [ESP + 0x68]      ; 004dd79b
    PUSH 0x58a661                       ; 004dd79f | = "rb"
    PUSH EBP                            ; 004dd7a4
    PUSH 0x58a664                       ; 004dd7a5 | = "models"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 004dd7aa
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    ADD ESP,0xc                         ; 004dd7af
    MOV EDI,EAX                         ; 004dd7b2
    TEST EAX,EAX                        ; 004dd7b4
    JZ 0x004dd85b                       ; 004dd7b6
        ;   XREF to: 004dd85b (CONDITIONAL_JUMP)  ; LAB_004dd85b
    LEA EAX,[ESI + 0x4]                 ; 004dd7bc
        ;   Label: LAB_004dd7bc
    PUSH EAX                            ; 004dd7bf
    CALL crt_memory.c_malloc_FUN_005635b0 ; 004dd7c0
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_malloc_FUN_005635b0()
    ADD ESP,0x4                         ; 004dd7c5
    MOV EBX,EAX                         ; 004dd7c8
    TEST EAX,EAX                        ; 004dd7ca
    JNZ 0x004dd801                      ; 004dd7cc
        ;   XREF to: 004dd801 (CONDITIONAL_JUMP)  ; LAB_004dd801
    PUSH EBP                            ; 004dd7ce
    PUSH 0x58a696                       ; 004dd7cf | = "Out of partial model mem : %s"
    LEA EAX,[ESP + 0x8]                 ; 004dd7d4
    PUSH EAX                            ; 004dd7d8
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004dd7d9
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EAX,0x2ee                       ; 004dd7de
    ADD ESP,0xc                         ; 004dd7e3
    MOV [0x01cc4804],EAX                ; 004dd7e6 | DAT_01cc4804
    MOV EAX,ESP                         ; 004dd7eb
    MOV EBP,0x58a6b4                    ; 004dd7ed | = "..\\engine\\model.c"
    PUSH EAX                            ; 004dd7f2
    MOV dword ptr [0x01cc4800],EBP      ; 004dd7f3 | DAT_01cc4800
    CALL FUN_004c8440                   ; 004dd7f9
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004dd7fe
    PUSH EDI                            ; 004dd801
        ;   Label: LAB_004dd801
    PUSH ESI                            ; 004dd802
    PUSH 0x1                            ; 004dd803
    PUSH EBX                            ; 004dd805
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004dd806
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 004dd80b
    CMP EAX,ESI                         ; 004dd80e
    JZ 0x004dd835                       ; 004dd810
        ;   XREF to: 004dd835 (CONDITIONAL_JUMP)  ; LAB_004dd835
    MOV EDX,0x58a6c6                    ; 004dd812 | = "..\\engine\\model.c"
    MOV ECX,0x2f3                       ; 004dd817
    PUSH 0x58a6d8                       ; 004dd81c | = "Model read hose"
    MOV dword ptr [0x01cc4800],EDX      ; 004dd821 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004dd827 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004dd82d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004dd832
    PUSH EDI                            ; 004dd835
        ;   Label: LAB_004dd835
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004dd836
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    MOV AH,byte ptr [EBX]               ; 004dd83b
    ADD ESP,0x4                         ; 004dd83d
    CMP AH,0x14                         ; 004dd840
    JZ 0x004dd84a                       ; 004dd843
        ;   XREF to: 004dd84a (CONDITIONAL_JUMP)  ; LAB_004dd84a
    CMP AH,0x20                         ; 004dd845
    JNZ 0x004dd894                      ; 004dd848
        ;   XREF to: 004dd894 (CONDITIONAL_JUMP)  ; LAB_004dd894
    MOV EAX,EBX                         ; 004dd84a
        ;   Label: LAB_004dd84a
    MOV dword ptr [ESI + EBX*0x1],0x0   ; 004dd84c
    ADD ESP,0x50                        ; 004dd853
    POP EBP                             ; 004dd856
    POP EDI                             ; 004dd857
    POP ESI                             ; 004dd858
    POP EBX                             ; 004dd859
    RET                                 ; 004dd85a
    PUSH EBP                            ; 004dd85b
        ;   Label: LAB_004dd85b
    PUSH 0x58a66b                       ; 004dd85c | = "Unable to open model: %s"
    LEA EAX,[ESP + 0x8]                 ; 004dd861
    PUSH EAX                            ; 004dd865
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004dd866
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV EDX,0x58a684                    ; 004dd86b | = "..\\engine\\model.c"
    ADD ESP,0xc                         ; 004dd870
    MOV EAX,ESP                         ; 004dd873
    MOV ECX,0x2e3                       ; 004dd875
    PUSH EAX                            ; 004dd87a
    MOV dword ptr [0x01cc4800],EDX      ; 004dd87b | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004dd881 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004dd887
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004dd88c
    JMP 0x004dd7bc                      ; 004dd88f
        ;   XREF to: 004dd7bc (UNCONDITIONAL_JUMP)  ; LAB_004dd7bc
    MOV EDI,0x58a6e8                    ; 004dd894 | = "..\\engine\\model.c"
        ;   Label: LAB_004dd894
    MOV EBP,0x2f6                       ; 004dd899
    PUSH 0x58a6fa                       ; 004dd89e | = "Bad model!"
    MOV dword ptr [0x01cc4800],EDI      ; 004dd8a3 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 004dd8a9 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004dd8af
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004dd8b4
    MOV EAX,EBX                         ; 004dd8b7
    MOV dword ptr [ESI + EBX*0x1],0x0   ; 004dd8b9
    ADD ESP,0x50                        ; 004dd8c0
    POP EBP                             ; 004dd8c3
    POP EDI                             ; 004dd8c4
    POP ESI                             ; 004dd8c5
    POP EBX                             ; 004dd8c6
    RET                                 ; 004dd8c7

