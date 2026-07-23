; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CSkeleton_load_FUN_00517560(int param_1,char *param_2)
;
;
; XREF[1]:
;   FUN_0051f680 at 0051f716
;
; Referenced Globals:
;   TerminatedCString s_rt_005911eb
;   TerminatedCString s_data_005911ee
;   TerminatedCString s_core_skeleton_cpp_005911f3
;   TerminatedCString s_CSkeleton_load_Can_t_ope_00591208
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   core_skeleton.cpp_CSkeleton_loadStream_FUN_005175f0
;   crt_stdio.c_fclose_FUN_00563380
;   engine_dosio.cpp_getFile_FUN_00456a60
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517560
        ;   Label: core_skeleton.cpp_CSkeleton_load_FUN_00517560
    PUSH ESI                            ; 00517561
    PUSH EDI                            ; 00517562
    MOV EBX,dword ptr [ESP + 0x14]      ; 00517563
    MOV EDI,dword ptr [ESP + 0x10]      ; 00517567
    MOV ESI,EBX                         ; 0051756b
    ADD EDI,0x28508                     ; 0051756d
    PUSH EDI                            ; 00517573
    MOV AL,byte ptr [ESI]               ; 00517574
        ;   Label: LAB_00517574
    MOV byte ptr [EDI],AL               ; 00517576
    CMP AL,0x0                          ; 00517578
    JZ 0x0051758c                       ; 0051757a
        ;   XREF to: 0051758c (CONDITIONAL_JUMP)  ; LAB_0051758c
    MOV AL,byte ptr [ESI + 0x1]         ; 0051757c
    ADD ESI,0x2                         ; 0051757f
    MOV byte ptr [EDI + 0x1],AL         ; 00517582
    ADD EDI,0x2                         ; 00517585
    CMP AL,0x0                          ; 00517588
    JNZ 0x00517574                      ; 0051758a
        ;   XREF to: 00517574 (CONDITIONAL_JUMP)  ; LAB_00517574
    POP EDI                             ; 0051758c
        ;   Label: LAB_0051758c
    PUSH 0x5911eb                       ; 0051758d | = "rt"
    PUSH EBX                            ; 00517592
    PUSH 0x5911ee                       ; 00517593 | = "data"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 00517598
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    ADD ESP,0xc                         ; 0051759d
    MOV EDI,EAX                         ; 005175a0
    TEST EAX,EAX                        ; 005175a2
    JZ 0x005175c1                       ; 005175a4
        ;   XREF to: 005175c1 (CONDITIONAL_JUMP)  ; LAB_005175c1
    PUSH EDI                            ; 005175a6
        ;   Label: LAB_005175a6
    MOV EBX,dword ptr [ESP + 0x14]      ; 005175a7
    PUSH EBX                            ; 005175ab
    CALL core_skeleton.cpp_CSkeleton_loadStream_FUN_005175f0 ; 005175ac
        ;   XREF to: 005175f0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CSkeleton_loadStream_FUN_005175f0()
    ADD ESP,0x8                         ; 005175b1
    PUSH EDI                            ; 005175b4
    CALL crt_stdio.c_fclose_FUN_00563380 ; 005175b5
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 005175ba
    POP EDI                             ; 005175bd
    POP ESI                             ; 005175be
    POP EBX                             ; 005175bf
    RET                                 ; 005175c0
    PUSH EBX                            ; 005175c1
        ;   Label: LAB_005175c1
    MOV EDX,0x5911f3                    ; 005175c2 | = "..\\core\\skeleton.cpp"
    MOV ECX,0xf6                        ; 005175c7
    PUSH 0x591208                       ; 005175cc | = "CSkeleton::load - Can't open %s"
    MOV dword ptr [0x01cc4800],EDX      ; 005175d1 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 005175d7 | DAT_01cc4804
    CALL FUN_004c8440                   ; 005175dd
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 005175e2
    JMP 0x005175a6                      ; 005175e5
        ;   XREF to: 005175a6 (UNCONDITIONAL_JUMP)  ; LAB_005175a6

