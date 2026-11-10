; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_process_FUN_005437f0(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004d8060 at 004d8152
;
; Referenced Globals:
;   TerminatedCString s_Error_processing_script_005ee143
;   TerminatedCString s_WARNING_Infinite_loop_de_005ee180
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;   CGame* g_CGamePtr = 01ccf390
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.field176_0xe0
;   undefined4 DAT_01e810a8
;   undefined4 DAT_01e810b0
;   undefined4 DAT_01e818b4
;   undefined4 DAT_01e818b8
;
; Called Functions:
;   core_charactr.cpp_FUN_004355d0
;   core_game.cpp_FUN_004d19d0
;   core_script.cpp_CScript_step_FUN_00544460
;   shape_edittool.cpp_FUN_004943a0
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005437f0
        ;   Label: core_script.cpp_CScript_process_FUN_005437f0
    PUSH ESI                            ; 005437f1
    PUSH EDI                            ; 005437f2
    PUSH EBP                            ; 005437f3
    MOV EBP,ESP                         ; 005437f4
    SUB ESP,0x8                         ; 005437f6
    AND ESP,0xfffffff8                  ; 005437f9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005437fc
    XOR EDX,EDX                         ; 005437ff
    MOV ECX,dword ptr [EBX + 0x2c]      ; 00543801
    MOV dword ptr [0x01e810a8],EDX      ; 00543804 | DAT_01e810a8
    CMP ECX,0x1                         ; 0054380a
    JL 0x0054388e                       ; 0054380d
        ;   XREF to: 0054388e (CONDITIONAL_JUMP)  ; LAB_0054388e
    CMP dword ptr [EBX + 0x30],0x0      ; 00543813
    JZ 0x0054388e                       ; 00543817
        ;   XREF to: 0054388e (CONDITIONAL_JUMP)  ; LAB_0054388e
    MOV EAX,[0x0061d95c]                ; 0054381d | g_CGamePtr
    CMP dword ptr [EAX + 0xe0],0x0      ; 00543822 | g_CGameInstance.field176_0xe0
    JZ 0x0054382e                       ; 00543829
        ;   XREF to: 0054382e (CONDITIONAL_JUMP)  ; LAB_0054382e
    MOV dword ptr [EBX + 0x1c],EDX      ; 0054382b
    MOV EAX,[0x0061d95c]                ; 0054382e | g_CGamePtr
        ;   Label: LAB_0054382e
    PUSH EAX                            ; 00543833 | g_CGameInstance
    XOR ESI,ESI                         ; 00543834
    CALL core_charactr.cpp_FUN_004355d0 ; 00543836
        ;   XREF to: 004355d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004355d0()
    MOV dword ptr [ESP + 0x8],EAX       ; 0054383b
    XOR EDX,EDX                         ; 0054383f
    FLD float ptr [ESP + 0x8]           ; 00543841
    ADD ESP,0x4                         ; 00543845
    MOV dword ptr [0x01e818b4],EDX      ; 00543848 | DAT_01e818b4
    FSTP float ptr [ESP]                ; 0054384e
    FLD float ptr [ESP]                 ; 00543851
        ;   Label: LAB_00543851
    FLDZ                                ; 00543854
    FCOMPP                              ; 00543856
    FNSTSW AX                           ; 00543858
    SAHF                                ; 0054385a
    JNC 0x00543863                      ; 0054385b
        ;   XREF to: 00543863 (CONDITIONAL_JUMP)  ; LAB_00543863
    CMP dword ptr [EBX + 0x1c],0x2      ; 0054385d
    JNZ 0x00543895                      ; 00543861
        ;   XREF to: 00543895 (CONDITIONAL_JUMP)  ; LAB_00543895
    CMP dword ptr [0x01e818b4],0x0      ; 00543863 | DAT_01e818b4
        ;   Label: LAB_00543863
    JZ 0x00543883                       ; 0054386a
        ;   XREF to: 00543883 (CONDITIONAL_JUMP)  ; LAB_00543883
    MOV EDX,dword ptr [0x0061d95c]      ; 0054386c | g_CGamePtr
    PUSH EDX                            ; 00543872 | g_CGameInstance
    CALL core_game.cpp_FUN_004d19d0     ; 00543873
        ;   XREF to: 004d19d0 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_FUN_004d19d0()
    XOR ECX,ECX                         ; 00543878
    ADD ESP,0x4                         ; 0054387a
    MOV dword ptr [0x01e818b4],ECX      ; 0054387d | DAT_01e818b4
    MOV ESI,dword ptr [EBX + 0x4]       ; 00543883
        ;   Label: LAB_00543883
    TEST ESI,ESI                        ; 00543886
    JNZ 0x0054391f                      ; 00543888
        ;   XREF to: 0054391f (CONDITIONAL_JUMP)  ; LAB_0054391f
    MOV ESP,EBP                         ; 0054388e
        ;   Label: LAB_0054388e
    POP EBP                             ; 00543890
    POP EDI                             ; 00543891
    POP ESI                             ; 00543892
    POP EBX                             ; 00543893
    RET                                 ; 00543894
    CMP dword ptr [EBX],0x0             ; 00543895
        ;   Label: LAB_00543895
    JNZ 0x00543863                      ; 00543898
        ;   XREF to: 00543863 (CONDITIONAL_JUMP)  ; LAB_00543863
    MOV EAX,ESP                         ; 0054389a
    PUSH EAX                            ; 0054389c
    PUSH EBX                            ; 0054389d
    MOV EDI,dword ptr [EBX + 0x44]      ; 0054389e
    CALL core_script.cpp_CScript_step_FUN_00544460 ; 005438a1
        ;   XREF to: 00544460 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_step_FUN_00544460(CScript * this_ptr, float * time_remaining)
    ADD ESP,0x8                         ; 005438a6
    TEST EAX,EAX                        ; 005438a9
    JZ 0x00543863                       ; 005438ab
        ;   XREF to: 00543863 (CONDITIONAL_JUMP)  ; LAB_00543863
    JL 0x005438f9                       ; 005438ad
        ;   XREF to: 005438f9 (CONDITIONAL_JUMP)  ; LAB_005438f9
    CMP dword ptr [EBX + 0x1c],0x1      ; 005438af
    JNZ 0x005438bc                      ; 005438b3
        ;   XREF to: 005438bc (CONDITIONAL_JUMP)  ; LAB_005438bc
    MOV dword ptr [EBX + 0x1c],0x2      ; 005438b5
        ;   Label: LAB_005438b5
    INC ESI                             ; 005438bc
        ;   Label: LAB_005438bc
    CMP ESI,0x60e                       ; 005438bd
    JLE 0x00543851                      ; 005438c3
        ;   XREF to: 00543851 (CONDITIONAL_JUMP)  ; LAB_00543851
    CMP dword ptr [0x01e818b8],0x0      ; 005438c5 | DAT_01e818b8
    JNZ 0x00543863                      ; 005438cc
        ;   XREF to: 00543863 (CONDITIONAL_JUMP)  ; LAB_00543863
    MOV EAX,dword ptr [EBX + 0x30]      ; 005438ce
    MOV ECX,dword ptr [EAX + EDI*0x8]   ; 005438d1
    PUSH ECX                            ; 005438d4
    PUSH 0x5ee180                       ; 005438d5 | = "!WARNING!  Infinite loop detected in ..."
    MOV ESI,dword ptr [0x0061abc0]      ; 005438da | g_CEditorToolsPtr
    PUSH ESI                            ; 005438e0
    MOV EDI,0x1                         ; 005438e1
    CALL shape_edittool.cpp_FUN_004943a0 ; 005438e6
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004943a0()
    ADD ESP,0xc                         ; 005438eb
    MOV dword ptr [0x01e818b8],EDI      ; 005438ee | DAT_01e818b8
    JMP 0x00543863                      ; 005438f4
        ;   XREF to: 00543863 (UNCONDITIONAL_JUMP)  ; LAB_00543863
    MOV EAX,dword ptr [EBX + 0x30]      ; 005438f9
        ;   Label: LAB_005438f9
    PUSH 0x1e810b0                      ; 005438fc | DAT_01e810b0
    MOV EDX,dword ptr [EAX + EDI*0x8 + 0x4] ; 00543901
    PUSH EDX                            ; 00543905
    MOV ECX,dword ptr [EAX + EDI*0x8]   ; 00543906
    PUSH ECX                            ; 00543909
    PUSH 0x5ee143                       ; 0054390a | = "Error processing script.\nLine: %d\nT..."
    MOV EAX,[0x0061abc0]                ; 0054390f | g_CEditorToolsPtr
    PUSH EAX                            ; 00543914
    CALL shape_edittool.cpp_FUN_004943a0 ; 00543915
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004943a0()
    ADD ESP,0x14                        ; 0054391a
    JMP 0x005438b5                      ; 0054391d
        ;   XREF to: 005438b5 (UNCONDITIONAL_JUMP)  ; LAB_005438b5
    PUSH ESI                            ; 0054391f
        ;   Label: LAB_0054391f
    MOV EDX,dword ptr [ESI + 0x154]     ; 00543920
    CALL dword ptr [EDX + 0x10c]        ; 00543926
    ADD ESP,0x4                         ; 0054392c
    TEST EAX,EAX                        ; 0054392f
    JLE 0x0054388e                      ; 00543931
        ;   XREF to: 0054388e (CONDITIONAL_JUMP)  ; LAB_0054388e
    MOV EDI,dword ptr [EBX + 0x28]      ; 00543937
    PUSH EDI                            ; 0054393a
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0054393b
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 00543940
    MOV ESP,EBP                         ; 00543943
    POP EBP                             ; 00543945
    POP EDI                             ; 00543946
    POP ESI                             ; 00543947
    POP EBX                             ; 00543948
    RET                                 ; 00543949

